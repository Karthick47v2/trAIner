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

object Squat {
    // Angle vals for Squat SET1
    //1 - UP 2 - DOWN
    private val WESAngle = 180                  //W - wrist E - Elbow S - Shoulder

    private val ESHAngle2 = 120
    private val SHKAngle2 = 60
    private val HKAAngle2 = 60

    private val ESHAngle1 = 70
    private val SHKAngle1 = 180
    private val HKAAngle1 = 170

    private val angleThreshold = 15

    private var isExeriseStarted: Boolean = false
    private var count = 0

    private var mediaPlayer: MediaPlayer? = null

    //check users position
    private var isUp = true                   // initail pos -- triggered when user initializes UP pos

    fun getSquatAngles(person: Human, surfaceView: SurfaceView){
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

        // estimated ESH angle - LEFT
        var esESHAngleL = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate
            )
        )

        // estimated ESH angle - RIGHT
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

        // estimated HKA angle - LEFT
        var esHKAAngleL= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_ANKLE.position].coordinate
            )
        )

        // estimated HKA angle - RIGHT
        var esHKAAngleR= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_ANKLE.position].coordinate
            )
        )
        //Log.d(ContentValues.TAG, esWESAngleL.toString())

        checkPosition(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL, esSHKAngleR, esHKAAngleL, esHKAAngleR, surfaceView)
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
        esSHKAngleL: Double, esSHKAngleR: Double, esHKAAngleL: Double, esHKAAngleR: Double, surfaceView: SurfaceView){

        var WESCHK = false
        var ESHCHK = false
        var SHKCHK = false
        var HKACHK = false

        // if already up -- listen for down angles
        if(isUp){
            if(chk(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL,esSHKAngleR, esHKAAngleL,esHKAAngleR, isUp, surfaceView)){}
            else{
                WESCHK = true
                ESHCHK = (esESHAngleL >= ESHAngle2 || esESHAngleR >= ESHAngle2)
                SHKCHK = (esSHKAngleL >= SHKAngle2 || esSHKAngleR >= SHKAngle2)
                HKACHK = (esHKAAngleL >= HKAAngle2 || esHKAAngleR >= HKAAngle2)
            }
        }
        // else -- listen for up angles
        else{
            if(chk(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL,esSHKAngleR, esHKAAngleL,esHKAAngleR, isUp, surfaceView)){}
            else{
                WESCHK = true
                ESHCHK = (esESHAngleL >= ESHAngle1 || esESHAngleR >= ESHAngle1)
                SHKCHK = (esSHKAngleL >= SHKAngle1 || esSHKAngleR >= SHKAngle1)
                HKACHK = (esHKAAngleL >= HKAAngle1 || esHKAAngleR >= HKAAngle1)
            }
        }

        if(WESCHK && ESHCHK && SHKCHK && HKACHK){
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
                Log.d(ContentValues.TAG, "EXERCISE STARTED")
                isUp = false;
            }
        }
    }

    private fun chk(esWESL: Double, esWESR: Double, esESHL: Double, esESHR: Double, esSHKL: Double, esSHKR: Double,
                    esHKAL: Double, esHKAR: Double, isUp: Boolean, surfaceView: SurfaceView): Boolean{
        if(mediaPlayer == null){
            mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
        }
        if(mediaPlayer != null && !mediaPlayer!!.isPlaying()) {
            mediaPlayer!!.release()
            mediaPlayer = null
            if (esWESL <= WESAngle - angleThreshold && esWESR <= WESAngle - angleThreshold) {
                Log.d(ContentValues.TAG, "Straight Arms")
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.straiarms)
                mediaPlayer!!.start()
                return true
            }
            else if(isUp){
                if(esESHL >= ESHAngle1 + angleThreshold && esESHR >= ESHAngle1 + angleThreshold){
                    Log.d(ContentValues.TAG, "STOP " + esESHL.toString() + "  " + esESHR.toString())
                    //mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.stop)
                    mediaPlayer!!.start()
                    return true
                }
            }
            else if(!isUp){
                if(esESHL <= ESHAngle1 - angleThreshold && esESHR <= ESHAngle1 - angleThreshold){
                    Log.d(ContentValues.TAG, "Arms"  + esESHL.toString() + "  " + esESHR.toString() )
                    mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.armsparafloor)
                    mediaPlayer!!.start()
                    return true
                }
                else if((esSHKL <= SHKAngle2 - angleThreshold && esSHKR <= SHKAngle2 - angleThreshold) ||
                        (esHKAL <= HKAAngle2 - angleThreshold && esHKAR <= HKAAngle2 - angleThreshold)){
                    Log.d(ContentValues.TAG, "Too much SHORT")
                    mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.thigsparafloor)
                    mediaPlayer!!.start()
                    return true
                }
            }
        }
        return false
    }
}