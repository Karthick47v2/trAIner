package com.dedsec_x47.trainer.aiTrainer.poseClassify

import android.app.Activity
import android.content.ContentValues
import android.graphics.Bitmap
import android.graphics.PointF
import android.util.Log
import com.dedsec_x47.trainer.aiTrainer.data.Human
import com.dedsec_x47.trainer.aiTrainer.data.KeyPoints
import com.dedsec_x47.trainer.aiTrainer.render.Visual
import android.media.MediaPlayer
import android.os.SystemClock
import android.view.SurfaceView
import android.widget.Chronometer
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.View
import com.dedsec_x47.trainer.aiTrainer.Exercise
import com.dedsec_x47.trainer.aiTrainer.camera.CameraSource
import com.dedsec_x47.trainer.aiTrainer.poseDetect

object Plank {
    //
    //
    // As Plank contains only 1 posture, check whether exercise is done correctly by ensuring user's angle is within threshold angle....

    // Angle values for PLANK
    private val WESAngle = 90                   //W - wrist E - Elbow S - Shoulder
    private val ESHAngle = 70
    private val SHKAngle = 180

    private val angleThreshold = 15

    private var isExeriseStarted: Boolean = false

    private var mediaPlayer: MediaPlayer? = null
    private var timer = 0L
    private var offSet = 0L
    private var isTimerRunning = false

    fun getPlankAngles(person: Human, bitmap: Bitmap, act: Activity, chronometer: Chronometer, surfaceView: SurfaceView): Long{
        // estimated WES angle - LEFT
        var esWESAngleL = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_WRIST.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate
            )
        )

        // estimated WES angle - RIGHT
        var esWESAngleR= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_WRIST.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate
            )
        )

        // estimated SHK angle - LEFT
        var esESHAngleL= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate
            )
        )

        // estimated SHK angle - RIGHT
        var esESHAngleR= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate
            )
        )

        // estimated SHK angle - LEFT
        var esSHKAngleL= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_KNEE.position].coordinate
            )
        )

        // estimated SHK angle - RIGHT
        var esSHKAngleR= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_KNEE.position].coordinate
            )
        )
        checkPosition(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL, esSHKAngleR, act, chronometer, person, bitmap, surfaceView)
        return timer
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
                              esSHKAngleL: Double, esSHKAngleR: Double, act: Activity, chronometer: Chronometer,
                              person: Human, bitmap: Bitmap, surfaceView: SurfaceView){

        var WESCHK = false
        var ESHCHK = false
        var SHKCHK = false

        if(chk(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL, esSHKAngleR, person, bitmap, surfaceView)){}
        else{
            WESCHK = (esWESAngleL <= WESAngle || esWESAngleR <= WESAngle)
            ESHCHK = (esESHAngleL <= ESHAngle || esESHAngleR <= ESHAngle)
            SHKCHK = ((esSHKAngleL <= SHKAngle + 20 && esSHKAngleL >= SHKAngle - 20) ||
                    (esSHKAngleR <= SHKAngle + 20 && esSHKAngleR >= SHKAngle - 20))
        }

        offSet = (SystemClock.elapsedRealtime() - chronometer.base) / 1000
        if(offSet > timer) timer = offSet
        Log.d(ContentValues.TAG, "SSSSSSSSSSSSSSSS " + offSet.toString())

        if(WESCHK && ESHCHK && SHKCHK){
            if(isExeriseStarted){
                if(mediaPlayer == null){
                    mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.tick)
                }
                if(mediaPlayer != null && !mediaPlayer!!.isPlaying()){
                    mediaPlayer!!.release()
                    mediaPlayer = null
                    mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.tick)
                    mediaPlayer!!.start()
                }
                act.runOnUiThread(java.lang.Runnable {
                    if(!isTimerRunning) {
                        chronometer.base = SystemClock.elapsedRealtime()
                        chronometer.start()
                        isTimerRunning = true
                    }
                })
            }
            else{
                isExeriseStarted = true;
            }
        }
        else{
            if(isExeriseStarted){
                act.runOnUiThread(java.lang.Runnable {
                    chronometer.base = SystemClock.elapsedRealtime()
                    chronometer.stop()
                    isTimerRunning = false
                })
            }
        }
    }

    private fun chk(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
                    esSHKAngleL: Double, esSHKAngleR: Double,person: Human, bitmap: Bitmap, surfaceView: SurfaceView): Boolean{
        if(mediaPlayer == null){
            mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
        }
        if(mediaPlayer != null && !mediaPlayer!!.isPlaying()) {
            mediaPlayer!!.release()
            mediaPlayer = null
            if ((esWESAngleL <= WESAngle - angleThreshold && esWESAngleR <= WESAngle - angleThreshold) ||
                (esWESAngleL >= WESAngle + angleThreshold && esWESAngleR >= WESAngle + angleThreshold)){
                drawOnImg(surfaceView, bitmap, person, R.raw.elbshol, 2, 3, 4, 5)
                return true
            }
            else if ((esESHAngleL <= ESHAngle - angleThreshold && esESHAngleR <= ESHAngle - angleThreshold) ||
                (esESHAngleL >= ESHAngle + angleThreshold && esESHAngleR >= ESHAngle + angleThreshold)) {
                drawOnImg(surfaceView, bitmap, person, R.raw.elbshol, 2, 7, 4, 8)
                return true
            }
            else if  ((esSHKAngleL <= SHKAngle - 20 && esSHKAngleR <= SHKAngle - 20) ||
                (esSHKAngleL >= SHKAngle + 20 && esSHKAngleR >= SHKAngle + 20)){
                drawOnImg(surfaceView, bitmap, person, R.raw.straiback, 7, 10, 8, 12)
                return true
            }
        }
        return false
    }

    private fun drawOnImg(surfaceView: SurfaceView, bitmap: Bitmap, person: Human, uri: Int,
                          no1: Int, no2: Int, no3: Int, no4: Int){
        mediaPlayer = MediaPlayer.create(surfaceView.context, uri)
        mediaPlayer!!.start()

        if(isExeriseStarted) {
            Visual.drawWrongPose(bitmap, surfaceView, person, no1, no2)
            Visual.drawWrongPose(bitmap, surfaceView, person, no3, no4)
        }
    }
}