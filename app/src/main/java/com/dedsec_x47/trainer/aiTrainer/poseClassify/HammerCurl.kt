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
import com.dedsec_x47.trainer.View
import com.dedsec_x47.trainer.aiTrainer.poseDetect

object HammerCurl {
    // Angle vals for Hammercurl SET1
    //1 -hands UP 2 - DOWN
    private val WESAngle1 = 80                  //W - wrist E - Elbow S - Shoulder
    private val SHKAngle = 180

    private val WESAngle2 = 140

    private val WESAngleALL1 = 16                // 2-part
    private val WESAngleALL2 = 164

    private val angleThreshold = 15

    private var isExeriseStarted: Boolean = false
    private var count = 0

    private var mediaPlayer: MediaPlayer? = null

    //check users position
    private var isUp = true                   // initail pos -- triggered when user initializes UP pos

    fun getHammerCurlAngles(person: Human, surfaceView: SurfaceView){
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

        Log.d(ContentValues.TAG, esSHKAngleL.toString())

        val esWES = arrayOf(esWESAngleL, esWESAngleR)
        val esSHK = arrayOf(esSHKAngleL, esSHKAngleR)


        if(poseDetect.currView == View.front){
            return checkPosition(esWES[1], esWES[0], esSHK[1], esSHK[0],  WESAngleALL1, WESAngleALL2,surfaceView)
        }
        else if(poseDetect.currView == View.left){
            return checkPosition(esWES[0], esSHK[0], WESAngle1, WESAngle2, surfaceView)
        }
        else{
            return checkPosition(esWES[1], esSHK[1], WESAngle1, WESAngle2, surfaceView)
        }

        //checkPosition(esWES[1], esWES[0], esSHK[1], esSHK[0],  WESAngleALL1, WESAngleALL2, surfaceView)

    }

    private fun checkPosition(esWESAngle: Double, esSHKAngle: Double, angle1: Int, angle2: Int, surfaceView: SurfaceView){

        var WESCHK = false/////////////////////NEED TO CHECK HIP ALSOOOOOOOOOOOOOO

        // if already up -- listen for down angles
        if(isUp){
            if(chk(esWESAngle,esSHKAngle, angle1, angle2, surfaceView)){}
            else WESCHK = esWESAngle >= angle2
        }
        // else -- listen for up angles
        else{
            if(chk(esWESAngle,esSHKAngle, angle1, angle2, surfaceView)){}
            else WESCHK = esWESAngle <= angle1
        }

        if(WESCHK){
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

                if(isUp) count++
                isUp = !isUp
            }
            else{
                isExeriseStarted = true;
                isUp = false;
            }
        }
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double, esSHKAngleL: Double, esSHKAngleR: Double, angle1: Int, angle2: Int, surfaceView: SurfaceView){

        var WESCHK = false;

        // if already up -- listen for down angles
        if(isUp){
            if(chk(esWESAngleL,180.0, angle1, angle2, surfaceView) || chk(esWESAngleR,180.0, angle1, angle2, surfaceView)){}
            else{
                WESCHK = (esWESAngleL >= angle2 && esWESAngleR >= angle2)
            }
        }
        // else -- listen for up angles
        else{
            if(chk(esWESAngleL,180.0, angle1, angle2, surfaceView) || chk(esWESAngleR,180.0, angle1, angle2, surfaceView)){}
            else{
                WESCHK = (esWESAngleL <= angle1 && esWESAngleR <= angle1)
            }
        }

        if(WESCHK){
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

                if(isUp) count++
                isUp = !isUp
            }
            else{
                isExeriseStarted = true;
                isUp = false;
            }
        }
    }

    private fun chk(esWES: Double, esSHK: Double, angle1: Int, angle2: Int, surfaceView: SurfaceView): Boolean{
        if(mediaPlayer == null){
            mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
        }
        if(mediaPlayer != null && !mediaPlayer!!.isPlaying()) {
            mediaPlayer!!.release()
            mediaPlayer = null
            if (esSHK <= SHKAngle - angleThreshold || esSHK >= SHKAngle + angleThreshold) {
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.straiback)
                mediaPlayer!!.start()
                return true
            }
            else if (esWES >= angle2 + angleThreshold) {
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.bringelbfrnt)
                mediaPlayer!!.start()
                return true
            }
            else if (esWES <= angle1 - angleThreshold) {
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.tooclsshoul)
                mediaPlayer!!.start()
                return true
            }
        }
        return false
    }
}