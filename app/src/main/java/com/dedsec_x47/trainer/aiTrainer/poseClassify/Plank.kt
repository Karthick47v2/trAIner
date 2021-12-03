package com.dedsec_x47.trainer.aiTrainer.poseClassify

import android.content.ContentValues
import android.graphics.PointF
import android.util.Log
import com.dedsec_x47.trainer.aiTrainer.data.Human
import com.dedsec_x47.trainer.aiTrainer.data.KeyPoints
import com.dedsec_x47.trainer.aiTrainer.render.Visual
import android.media.MediaPlayer
import android.view.SurfaceView
import com.dedsec_x47.trainer.R

object Plank {
    //
    //
    // As Plank contains only 1 posture, check whether exercise is done correctly by ensuring user's angle is within threshold angle....

    // Angle values for PLANK
    private val WESAngle = 90                   //W - wrist E - Elbow S - Shoulder
    private val ESHAngle = 80
    private val SHKAngle = 175

    private val angleThreshold = 15

    private var isExeriseStarted: Boolean = false

    private var mediaPlayer: MediaPlayer? = null

    fun getPlankAngles(person: Human, surfaceView: SurfaceView){
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
        checkPosition(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL, esSHKAngleR, surfaceView)
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
                              esSHKAngleL: Double, esSHKAngleR: Double, surfaceView: SurfaceView){

        var WESCHK = false
        var ESHCHK = false
        var SHKCHK = false

        if(chk(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL, esSHKAngleR, surfaceView)){}
        else{
            WESCHK = (esWESAngleL <= WESAngle || esWESAngleR <= WESAngle)
            ESHCHK = (esESHAngleL <= ESHAngle || esESHAngleR <= ESHAngle)
        }

        if(WESCHK && ESHCHK){
            if(isExeriseStarted){
                if(mediaPlayer == null){
                    mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
                }
                if(mediaPlayer != null && !mediaPlayer!!.isPlaying()){
                    mediaPlayer!!.release()
                    mediaPlayer = null
                    mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
                    mediaPlayer!!.start()
                }
            }
            else{
                isExeriseStarted = true;
            }
        }
    }

    private fun chk(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
                    esSHKAngleL: Double, esSHKAngleR: Double, surfaceView: SurfaceView): Boolean{
        if(mediaPlayer == null){
            mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
        }
        if(mediaPlayer != null && !mediaPlayer!!.isPlaying()) {
            mediaPlayer!!.release()
            mediaPlayer = null
            if ((esWESAngleL <= WESAngle - angleThreshold && esWESAngleR <= WESAngle - angleThreshold) ||
                (esWESAngleL >= WESAngle + angleThreshold && esWESAngleR >= WESAngle + angleThreshold)){
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.straiarms)
                mediaPlayer!!.start()
                Log.d(ContentValues.TAG, "ArmsSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSs")
                return true
            }
            else if ((esESHAngleL <= ESHAngle - angleThreshold && esESHAngleR <= ESHAngle - angleThreshold) ||
                (esESHAngleL >= ESHAngle + angleThreshold && esESHAngleR >= ESHAngle + angleThreshold)) {
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.stop)
                mediaPlayer!!.start()
                Log.d(ContentValues.TAG, "SHOULDERRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR")
                return true
            }
            else if  (esSHKAngleL <= SHKAngle - angleThreshold && esSHKAngleR <= SHKAngle - angleThreshold) {
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.straiback)
                mediaPlayer!!.start()
                Log.d(ContentValues.TAG, "BACKKKKKKKKKKKKKKKKKKKKKKKKK")
                return true
            }
        }
        return false
    }
}