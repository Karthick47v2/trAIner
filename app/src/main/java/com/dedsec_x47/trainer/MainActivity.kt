package com.dedsec_x47.trainer

import android.Manifest
import android.app.AlertDialog
import android.app.Dialog
import android.content.pm.PackageManager
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.os.Process
import android.view.SurfaceView
import android.view.View
import android.view.WindowManager
import android.widget.*
import androidx.activity.result.contract.ActivityResultContracts
import androidx.core.content.ContextCompat
import androidx.fragment.app.DialogFragment
import androidx.lifecycle.lifecycleScope
import kotlinx.coroutines.Dispatchers
import kotlinx.coroutines.launch
import com.dedsec_x47.trainer.camera.CameraSource
import com.dedsec_x47.trainer.data.Accelerator
import com.dedsec_x47.trainer.pose.ModelType
import com.dedsec_x47.trainer.pose.PoseEstimate

class MainActivity : AppCompatActivity(){
    companion object{
        init {
            System.loadLibrary("native-lib")
        }
        private const val FRAGMENT_DIALOG = "dialog"
    }

    private lateinit var surfaceView: SurfaceView

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
        setContentView(R.layout.activity_main)
        window.addFlags(WindowManager.LayoutParams.FLAG_KEEP_SCREEN_ON)     //keep screen on while app is running
        fpsView = findViewById(R.id.fps)
        surfaceView = findViewById(R.id.surfaceView)
        if (!isCameraPermissionGranted()) requestPermission()               //Ask for permission
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
                cameraSource = CameraSource(surfaceView, object : CameraSource.CameraSourceListener{
                    override fun onFPSListener(fps: Int){
                        fpsView.text = getString(R.string.fps, fps)
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
