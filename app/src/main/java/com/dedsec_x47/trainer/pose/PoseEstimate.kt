package com.dedsec_x47.trainer.pose

import android.content.ContentValues.TAG
import android.content.Context
import android.graphics.*
import android.os.SystemClock
import android.util.Log
import org.tensorflow.lite.DataType
import org.tensorflow.lite.Interpreter
import com.dedsec_x47.trainer.data.*
import org.tensorflow.lite.gpu.GpuDelegate
import org.tensorflow.lite.support.common.FileUtil
import org.tensorflow.lite.support.image.ImageProcessor
import org.tensorflow.lite.support.image.TensorImage
import org.tensorflow.lite.support.image.ops.ResizeOp
import org.tensorflow.lite.support.image.ops.ResizeWithCropOrPadOp
import org.tensorflow.lite.support.tensorbuffer.TensorBuffer
import kotlin.math.*

enum class ModelType {
    MidRange
}

class PoseEstimate(private val interpreter: Interpreter, private var gpuDelegate: GpuDelegate?) : PoseDetector{
    companion object{
        private const val MIN_CROP_KEYPOINT_SCORE = .4f
        //private const val CPU_NUM_THREADS = 4

        // Parameters that control how large crop region should be expanded from previous frames'
        // body keypoints
        private const val TORSO_EXPANSION_RATIO = 1.9f
        private const val BODY_EXPANSION_RATIO = 1.2f

        // TFLite file
        private const val FILENAME = "pose.tflite"

        // allow specifying model type.
        fun create(context: Context, accelerator: Accelerator, modelType: ModelType): PoseEstimate{
            val options = Interpreter.Options()
            var gpuDelegate: GpuDelegate? = null
            //options.setNumThreads(CPU_NUM_THREADS)
            when (accelerator) {
                Accelerator.CPU -> {
                }
                /*Accelerator.GPU -> {
                    gpuDelegate = GpuDelegate()
                    options.addDelegate(gpuDelegate)
                }
                Accelerator.NNAPI -> options.setUseNNAPI(true)*/
            }

            return PoseEstimate(
                Interpreter(
                    FileUtil.loadMappedFile(
                        context,
                        FILENAME
                    ), options
                ),
                gpuDelegate
            )
        }
        fun create(context: Context, accelerator: Accelerator): PoseEstimate =
            create(context, accelerator, ModelType.MidRange)
    }

    private var cropRegion: RectF? = null
    private var lastInferenceTimeNanos: Long = -1
    private val inputWidth = interpreter.getInputTensor(0).shape()[1]
    private val inputHeight = interpreter.getInputTensor(0).shape()[2]
    private var outputShape: IntArray = interpreter.getOutputTensor(0).shape()

    override fun estimateSinglePose(bitmap: Bitmap): Human{
        val inferenceStartTimeNanos = SystemClock.elapsedRealtimeNanos()
        if (cropRegion == null){
            cropRegion = initRectF(bitmap.width, bitmap.height)
        }
        var totalScore = 0f

        val numKeyPoints = outputShape[2]
        val keyPoints = mutableListOf<KeyPoint>()

        cropRegion?.run {
            val rect = RectF((left * bitmap.width), (top * bitmap.height), (right * bitmap.width), (bottom * bitmap.height))
            val detectBitmap = Bitmap.createBitmap(rect.width().toInt(), rect.height().toInt(), Bitmap.Config.ARGB_8888)
            Canvas(detectBitmap).drawBitmap(bitmap, -rect.left, -rect.top, null)
            val inputTensor = processInputImage(detectBitmap, inputWidth, inputHeight)
            val outputTensor = TensorBuffer.createFixedSize(outputShape, DataType.FLOAT32)
            val widthRatio = detectBitmap.width.toFloat() / inputWidth
            val heightRatio = detectBitmap.height.toFloat() / inputHeight

            val positions = mutableListOf<Float>()

            inputTensor?.let { input ->
                interpreter.run(input.buffer, outputTensor.buffer.rewind())
                val output = outputTensor.floatArray
                for (idx in 0 until numKeyPoints) {
                    val x = output[idx * 3 + 1] * inputWidth * widthRatio
                    val y = output[idx * 3 + 0] * inputHeight * heightRatio

                    positions.add(x)
                    positions.add(y)
                    val score = output[idx * 3 + 2]
                    keyPoints.add(
                        KeyPoint(
                            KeyPoints.fromInt(idx),
                            PointF(x, y),
                            score
                        )
                    )
                    totalScore += score
                }
            }
            val matrix = Matrix()
            val points = positions.toFloatArray()

            matrix.postTranslate(rect.left, rect.top)
            matrix.mapPoints(points)
            keyPoints.forEachIndexed { index, keyPoint ->
                keyPoint.coordinate = PointF(points[index * 2], points[index * 2 + 1])
            }
            // new crop region
            cropRegion = determineRectF(keyPoints, bitmap.width, bitmap.height)
        }
        lastInferenceTimeNanos = (SystemClock.elapsedRealtimeNanos() - inferenceStartTimeNanos)
        return Human(keyPoints, totalScore / numKeyPoints)
    }

    override fun lastInferenceTimeNanos(): Long = lastInferenceTimeNanos

    override fun close() {
        gpuDelegate?.close()
        interpreter.close()
        cropRegion = null
    }

    // Prepare input image for detection
    private fun processInputImage(bitmap: Bitmap, inputWidth: Int, inputHeight: Int): TensorImage?{
        val width: Int = bitmap.width
        val height: Int = bitmap.height

        val size = if (height > width) width else height
        val imageProcessor = ImageProcessor.Builder().apply {
            add(ResizeWithCropOrPadOp(size, size))
            add(ResizeOp(inputWidth, inputHeight, ResizeOp.ResizeMethod.BILINEAR))
        }.build()

        val tensorImage = TensorImage(DataType.FLOAT32)
        tensorImage.load(bitmap)
        return imageProcessor.process(tensorImage)
    }

    //1st crop - square
    private fun initRectF(imageWidth: Int, imageHeight: Int): RectF{
        val xMin: Float
        val yMin: Float
        val width: Float
        val height: Float
        if (imageWidth > imageHeight){
            width = 1f
            height = imageWidth.toFloat() / imageHeight
            xMin = 0f
            yMin = (imageHeight / 2f - imageWidth / 2f) / imageHeight
        }
        else{
            height = 1f
            width = imageHeight.toFloat() / imageWidth
            yMin = 0f
            xMin = (imageWidth / 2f - imageHeight / 2) / imageWidth
        }
        return RectF(xMin, yMin, xMin + width, yMin + height)
    }

    // check torso for prediction
    private fun torsoVisible(keyPoints: List<KeyPoint>): Boolean {
        return ((keyPoints[KeyPoints.LEFT_HIP.position].score > MIN_CROP_KEYPOINT_SCORE).or(
            keyPoints[KeyPoints.RIGHT_HIP.position].score > MIN_CROP_KEYPOINT_SCORE
        )).and(
            (keyPoints[KeyPoints.LEFT_SHOULDER.position].score > MIN_CROP_KEYPOINT_SCORE).or(
                keyPoints[KeyPoints.RIGHT_SHOULDER.position].score > MIN_CROP_KEYPOINT_SCORE
            )
        )
    }

    // crop acc to prev frame
    private fun determineRectF(keyPoints: List<KeyPoint>, imageWidth: Int, imageHeight: Int): RectF{
        val targetKeyPoints = mutableListOf<KeyPoint>()
        keyPoints.forEach {
            targetKeyPoints.add(
                KeyPoint(
                    it.bodyPart,
                    PointF(it.coordinate.x, it.coordinate.y),
                    it.score
                )
            )
        }
        if (torsoVisible(keyPoints)){
            val centerX = (targetKeyPoints[KeyPoints.LEFT_HIP.position].coordinate.x + targetKeyPoints[KeyPoints.RIGHT_HIP.position].coordinate.x) / 2f
            val centerY = (targetKeyPoints[KeyPoints.LEFT_HIP.position].coordinate.y + targetKeyPoints[KeyPoints.RIGHT_HIP.position].coordinate.y) / 2f

            val torsoAndBodyDistances = determineTorsoAndBodyDistances(keyPoints, targetKeyPoints, centerX, centerY)

            val list = listOf(
                torsoAndBodyDistances.maxTorsoXDistance * TORSO_EXPANSION_RATIO,
                torsoAndBodyDistances.maxTorsoYDistance * TORSO_EXPANSION_RATIO,
                torsoAndBodyDistances.maxBodyXDistance * BODY_EXPANSION_RATIO,
                torsoAndBodyDistances.maxBodyYDistance * BODY_EXPANSION_RATIO
            )

            var cropLengthHalf = list.maxOrNull() ?: 0f
            val tmp = listOf(centerX, imageWidth - centerX, centerY, imageHeight - centerY)
            cropLengthHalf = min(cropLengthHalf, tmp.maxOrNull() ?: 0f)
            val cropCorner = Pair(centerY - cropLengthHalf, centerX - cropLengthHalf)

            return if (cropLengthHalf > max(imageWidth, imageHeight) / 2f) initRectF(imageWidth, imageHeight)
            else{
                val cropLength = cropLengthHalf * 2
                RectF(
                    cropCorner.second / imageWidth,
                    cropCorner.first / imageHeight,
                    (cropCorner.second + cropLength) / imageWidth,
                    (cropCorner.first + cropLength) / imageHeight,
                )
            }
        }
        else {
            return initRectF(imageWidth, imageHeight)
        }
    }


    private fun determineTorsoAndBodyDistances(keyPoints: List<KeyPoint>, targetKeyPoints: List<KeyPoint>, centerX: Float, centerY: Float): Distance{
        val torsoJoints = listOf(KeyPoints.LEFT_SHOULDER.position, KeyPoints.RIGHT_SHOULDER.position, KeyPoints.LEFT_HIP.position, KeyPoints.RIGHT_HIP.position)

        var maxTorsoYRange = 0f
        var maxTorsoXRange = 0f
        torsoJoints.forEach { joint ->
            val distY = abs(centerY - targetKeyPoints[joint].coordinate.y)
            val distX = abs(centerX - targetKeyPoints[joint].coordinate.x)
            if (distY > maxTorsoYRange) maxTorsoYRange = distY
            if (distX > maxTorsoXRange) maxTorsoXRange = distX
        }

        var maxBodyYRange = 0f
        var maxBodyXRange = 0f
        for (joint in keyPoints.indices) {
            if (keyPoints[joint].score < MIN_CROP_KEYPOINT_SCORE) continue
            val distY = abs(centerY - keyPoints[joint].coordinate.y)
            val distX = abs(centerX - keyPoints[joint].coordinate.x)

            if (distY > maxBodyYRange) maxBodyYRange = distY
            if (distX > maxBodyXRange) maxBodyXRange = distX
        }
        return Distance(maxTorsoYRange, maxTorsoXRange, maxBodyYRange, maxBodyXRange)
    }
}
