package com.dedsec_x47.trainer.aiTrainer

import android.Manifest
import android.app.AlertDialog
import android.app.Dialog
import android.content.ContentValues
import android.content.Intent
import android.content.pm.PackageManager
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Process
import android.util.Log
import android.view.SurfaceView
import android.view.WindowManager
import android.widget.*
import androidx.activity.result.contract.ActivityResultContracts
import androidx.core.app.ActivityCompat
import androidx.core.content.ContextCompat
import androidx.core.view.isVisible
import androidx.fragment.app.DialogFragment
import androidx.lifecycle.lifecycleScope
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.View
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import com.dedsec_x47.trainer.aiTrainer.camera.CameraSource
import com.dedsec_x47.trainer.aiTrainer.data.Accelerator
import com.dedsec_x47.trainer.aiTrainer.pose.PoseEstimate
import com.dedsec_x47.trainer.auth.SignIn

class poseDetect : AppCompatActivity(){
    companion object{
        init {
            System.loadLibrary("native-lib")
        }
        private const val FRAGMENT_DIALOG = "dialog"

        var currentExercise = Exercise.Hammercurl
        var currView = View.right
        var skelShow: Boolean = false
        var shDebug: ToggleButton? = null
    }

    private lateinit var surfaceView: SurfaceView
    private lateinit var repView: TextView
    private lateinit var repType: TextView
    private lateinit var timerView: Chronometer
    private lateinit var doneBtn: Button

    private var accelerator = Accelerator.CPU

    private lateinit var fpsView: TextView
    private var cameraSource: CameraSource? = null

    private val requestPermission = registerForActivityResult(ActivityResultContracts.RequestPermission()){
            isGranted: Boolean ->
        if (isGranted) openCamera()
        else{
            ErrorDialog.newInstance("This app requires camera permission")
                .show(supportFragmentManager, FRAGMENT_DIALOG)
        }
    }

    override fun onCreate(savedInstanceState: Bundle?){
        super.onCreate(savedInstanceState)
        if ((ContextCompat.checkSelfPermission(this, Manifest.permission.READ_EXTERNAL_STORAGE) != PackageManager.PERMISSION_GRANTED) ||
            (ContextCompat.checkSelfPermission(this, Manifest.permission.WRITE_EXTERNAL_STORAGE) != PackageManager.PERMISSION_GRANTED) ||
            (ContextCompat.checkSelfPermission(this, Manifest.permission.CAMERA) != PackageManager.PERMISSION_GRANTED)){
            ActivityCompat.requestPermissions(this, arrayOf(Manifest.permission.READ_EXTERNAL_STORAGE, Manifest.permission.WRITE_EXTERNAL_STORAGE,
                    Manifest.permission.CAMERA), 101);
        }
        setContentView(R.layout.activity_posedetect)

        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)     //keep screen on while app is running
        surfaceView = findViewById(R.id.surfaceView)
        shDebug = findViewById(R.id.hideSkeletonModeBtn)
        repView = findViewById(R.id.tvRepetitionCount)
        repType = findViewById(R.id.tvRepetition)
        timerView = findViewById(R.id.c_meter)
        doneBtn = findViewById(R.id.doneBtn)

        doneBtn.setOnClickListener(){
            val intent = Intent(this, GalleryView::class.java)
            startActivity(intent)
        }

        if(currentExercise == Exercise.Plank){
            repView.isVisible = false
            timerView.isVisible = true
            repType.text = "Time"
        }
    }

    override fun onStart(){
        super.onStart()
        openCamera()
    }

    override fun onResume(){
        cameraSource?.resume()
        super.onResume()
    }

    override fun onPause(){
        cameraSource?.close()
        cameraSource = null
        super.onPause()
    }

    private fun isCameraPermissionGranted(): Boolean{
        return (checkPermission(Manifest.permission.CAMERA, Process.myPid(), Process.myUid()) == PackageManager.PERMISSION_GRANTED)
    }

    private fun openCamera(){
        if (isCameraPermissionGranted()){
            if (cameraSource == null){
                cameraSource = CameraSource(this ,repView, timerView, surfaceView, object : CameraSource.CameraSourceListener{
                    override fun onFPSListener(fps: Int){
                        //fpsView.text = getString(R.string.fps, fps
                    }
                }).apply{
                    prepareCamera()
                }
                lifecycleScope.launch(Dispatchers.Main){
                    cameraSource?.initCamera()
                }
            }
            createPoseEstimator()
        }
    }

    private fun createPoseEstimator(){
        cameraSource?.setDetector(PoseEstimate.create(this, accelerator))
    }

    private fun requestPermission(){
        when (PackageManager.PERMISSION_GRANTED){
            ContextCompat.checkSelfPermission(this, Manifest.permission.CAMERA) -> {
                openCamera()
            }
            else -> {
                //requestPermission.launch(Manifest.permission.WRITE_EXTERNAL_STORAGE)
                requestPermission.launch(Manifest.permission.CAMERA)
            }
        }
    }

    // Shows an error message dialog.
    class ErrorDialog : DialogFragment(){
        override fun onCreateDialog(savedInstanceState: Bundle?): Dialog =
            AlertDialog.Builder(activity)
                .setMessage(requireArguments().getString(ARG_MESSAGE))
                .setPositiveButton(android.R.string.ok) { _, _ -> }
                .create()

        companion object{

            @JvmStatic
            private val ARG_MESSAGE = "msg"

            @JvmStatic
            fun newInstance(message: String): ErrorDialog = ErrorDialog().apply {
                arguments = Bundle().apply { putString(ARG_MESSAGE, message) }
            }
        }
    }
}
