package com.dedsec_x47.trainer.aiTrainer.camera

import android.app.Activity
import android.content.ContentValues
import android.content.Context
import android.graphics.Bitmap
import android.graphics.ImageFormat
import android.graphics.Matrix
import android.graphics.Rect
import android.hardware.camera2.CameraCaptureSession
import android.hardware.camera2.CameraCharacteristics
import android.hardware.camera2.CameraDevice
import android.hardware.camera2.CameraManager
import android.media.ImageReader
import android.os.Debug
import android.os.Handler
import android.os.HandlerThread
import android.os.SystemClock
import android.util.Log
import android.view.Surface
import android.view.SurfaceView
import android.widget.Chronometer
import android.widget.TextView
import com.dedsec_x47.trainer.aiTrainer.Exercise
import kotlinx.coroutines.suspendCancellableCoroutine
import com.dedsec_x47.trainer.aiTrainer.render.Visual
import com.dedsec_x47.trainer.aiTrainer.render.RGBConverter
import com.dedsec_x47.trainer.aiTrainer.pose.PoseDetector
import com.dedsec_x47.trainer.aiTrainer.data.Human
import com.dedsec_x47.trainer.aiTrainer.poseClassify.*
import com.dedsec_x47.trainer.aiTrainer.poseDetect
import java.util.*
import kotlin.coroutines.resume
import kotlin.coroutines.resumeWithException

class CameraSource(private var act: Activity, private var repView: TextView, private var chronometer: Chronometer, private val surfaceView: SurfaceView, private val listener: CameraSourceListener? = null){

    companion object {
        private const val PREVIEW_WIDTH = 640
        private const val PREVIEW_HEIGHT = 480

        private const val MIN_CONFIDENCE = .4f                                          // Threshold for confidence score
        private const val TAG = "Camera Source"
    }

    private val lock = Any()
    private var detector: PoseDetector? = null
    private var yuvConverter: RGBConverter = RGBConverter(surfaceView.context)
    private lateinit var imageBitmap: Bitmap

    private var fpsTimer: Timer? = null
    private var frameProcessedInOneSecondInterval = 0
    private var framesPerSecond = 0

    // launch cam serv
    private val cameraManager: CameraManager by lazy {
        val context = surfaceView.context
        context.getSystemService(Context.CAMERA_SERVICE) as CameraManager
    }

    private var imageReader: ImageReader? = null
    private var camera: CameraDevice? = null
    private var session: CameraCaptureSession? = null
    private var imageReaderThread: HandlerThread? = null
    private var imageReaderHandler: Handler? = null
    private var cameraId: String = ""                           // only front cam
    private var count = 0
    private var timer = 0L

    suspend fun initCamera(){
        camera = openCamera(cameraManager, cameraId)
        imageReader = ImageReader.newInstance(PREVIEW_WIDTH, PREVIEW_HEIGHT, ImageFormat.YUV_420_888, 3)
        imageReader?.setOnImageAvailableListener({ reader ->
            val image = reader.acquireLatestImage()
            if (image != null){
                if (!::imageBitmap.isInitialized) {
                    imageBitmap = Bitmap.createBitmap(PREVIEW_WIDTH, PREVIEW_HEIGHT, Bitmap.Config.ARGB_8888)
                }
                yuvConverter.yuvToRgb(image, imageBitmap)
                // rotate img
                val rotateMatrix = Matrix()
                rotateMatrix.postRotate(-90.0f)
                rotateMatrix.postScale(-1f, 1f)

                val rotatedBitmap = Bitmap.createBitmap(imageBitmap, 0, 0, PREVIEW_WIDTH, PREVIEW_HEIGHT, rotateMatrix, false)

                processImage(rotatedBitmap)
                image.close()
            }
        }, imageReaderHandler)

        imageReader?.surface?.let{ surface ->
            session = createSession(listOf(surface))
            val cameraRequest = camera?.createCaptureRequest(CameraDevice.TEMPLATE_PREVIEW)?.apply{
                addTarget(surface)
            }
            cameraRequest?.build()?.let{
                session?.setRepeatingRequest(it, null, null)
            }
        }
        Log.d(ContentValues.TAG, "ArmsSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSs")
        repView.text = count.toString()
    }

    private suspend fun createSession(targets: List<Surface>): CameraCaptureSession =
        suspendCancellableCoroutine{ cont ->
            camera?.createCaptureSession(targets, object : CameraCaptureSession.StateCallback() {
                override fun onConfigured(captureSession: CameraCaptureSession) = cont.resume(captureSession)

                override fun onConfigureFailed(session: CameraCaptureSession) {
                    cont.resumeWithException(Exception("Session error"))
                }
            }, null)
        }

    private suspend fun openCamera(manager: CameraManager, cameraId: String): CameraDevice = suspendCancellableCoroutine{ cont ->
        manager.openCamera(cameraId, object : CameraDevice.StateCallback(){
            override fun onOpened(camera: CameraDevice) = cont.resume(camera)
            override fun onDisconnected(camera: CameraDevice){
                camera.close()
            }
            override fun onError(camera: CameraDevice, error: Int){
                if (cont.isActive) cont.resumeWithException(Exception("Camera error"))
            }
        }, imageReaderHandler)
    }

    fun prepareCamera(){
        for (cameraId in cameraManager.cameraIdList) {
            val characteristics = cameraManager.getCameraCharacteristics(cameraId)
            //Front cam
            val cameraDirection = characteristics.get(CameraCharacteristics.LENS_FACING)
            if (cameraDirection != null && cameraDirection != CameraCharacteristics.LENS_FACING_FRONT){
                continue
            }
            this.cameraId = cameraId
        }
    }

    fun setDetector(detector: PoseDetector) {
        synchronized(lock) {
            if (this.detector != null) {
                this.detector?.close()
                this.detector = null
            }
            this.detector = detector
        }
    }

    fun resume(){
        imageReaderThread = HandlerThread("imageReaderThread").apply{ start() }
        imageReaderHandler = Handler(imageReaderThread!!.looper)
        fpsTimer = Timer()
        fpsTimer?.scheduleAtFixedRate(
            object : TimerTask(){
                override fun run(){
                    framesPerSecond = frameProcessedInOneSecondInterval
                    frameProcessedInOneSecondInterval = 0
                }
            },
            0,
            1000
        )
    }

    fun close(){
        session?.close()
        session = null
        camera?.close()
        camera = null
        imageReader?.close()
        imageReader = null
        stopImageReaderThread()
        detector?.close()
        detector = null
        fpsTimer?.cancel()
        fpsTimer = null
        frameProcessedInOneSecondInterval = 0
        framesPerSecond = 0
    }

    // process image
    private fun processImage(bitmap: Bitmap){
        var person: Human? = null

        synchronized(lock) {
            detector?.estimateSinglePose(bitmap)?.let {
                person = it
            }
        }
        frameProcessedInOneSecondInterval++
        if (frameProcessedInOneSecondInterval == 1) listener?.onFPSListener(framesPerSecond)
        person?.let {
            visualize(it, bitmap)
        }
    }

    private fun visualize(human: Human, bitmap: Bitmap){
        var outputBitmap = bitmap
            if (human.score > MIN_CONFIDENCE) {
            if(poseDetect.shDebug!!.isChecked())  outputBitmap = Visual.drawBodyKeypoints(bitmap, human)
            when (poseDetect.currentExercise) {
                Exercise.Hammercurl -> count = HammerCurl.getHammerCurlAngles(human, bitmap, surfaceView)                   //OK
                Exercise.Plank -> timer = Plank.getPlankAngles(human, bitmap, act, chronometer, surfaceView)                //OK
                Exercise.BenchpressBarbell -> Log.d(ContentValues.TAG, "BenchPressB")
                Exercise.BenchpressDumbbell -> Log.d(ContentValues.TAG, "BenchPressD")
                Exercise.Chinup -> Log.d(ContentValues.TAG, "Chinup")
                Exercise.Deadlift -> count = DeadLift.getDeadLiftAngles(human, bitmap, surfaceView)                         //OK
                Exercise.Pushup -> count = PushUp.getPushUpAngles(human, bitmap, surfaceView)                               //OK
                Exercise.ShoulderpressBarbell -> Log.d(ContentValues.TAG, "ShoulderpreB")
                Exercise.ShoulderpressDumbell -> count = ShoulderPressD.getShoulderPressDAngles(human, bitmap, surfaceView) //OK
                Exercise.Situp -> Log.d(ContentValues.TAG, "Situp")
                Exercise.Splitsquat -> Log.d(ContentValues.TAG, "Splitsquat")
                Exercise.Squat -> count = Squat.getSquatAngles(human, bitmap, surfaceView)
                else -> count = LegRaise.getLegRaiseAngles(human, surfaceView)
            }
                this.act.runOnUiThread(java.lang.Runnable {
                    if(poseDetect.currentExercise != Exercise.Plank){
                        this.repView.text = count.toString()
                    }
                })
        }

        val holder = surfaceView.holder
        val surfaceCanvas = holder.lockCanvas()
        surfaceCanvas?.let { canvas ->
            val screenWidth: Int
            val screenHeight: Int
            val left: Int
            val top: Int

            if (canvas.height > canvas.width) {
                val ratio = outputBitmap.height.toFloat() / outputBitmap.width
                screenWidth = canvas.width
                left = 0
                screenHeight = (canvas.width * ratio).toInt()
                top = (canvas.height - screenHeight) / 2
            } else {
                val ratio = outputBitmap.width.toFloat() / outputBitmap.height
                screenHeight = canvas.height
                top = 0
                screenWidth = (canvas.height * ratio).toInt()
                left = (canvas.width - screenWidth) / 2
            }
            val right: Int = left + screenWidth
            val bottom: Int = top + screenHeight

            canvas.drawBitmap(
                outputBitmap, Rect(0, 0, outputBitmap.width, outputBitmap.height),
                Rect(left, top, right, bottom), null
            )
            surfaceView.holder.unlockCanvasAndPost(canvas)
        }
    }

    private fun stopImageReaderThread(){
        imageReaderThread?.quitSafely()
        try{
            imageReaderThread?.join()
            imageReaderThread = null
            imageReaderHandler = null
        }
        catch(e: InterruptedException){
            Log.d(TAG, e.message.toString())
        }
    }

    interface CameraSourceListener{
        fun onFPSListener(fps: Int)
    }
}