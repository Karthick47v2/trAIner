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

object LegRaise {
    // Angle vals for LegRaise  SET1
    //1- UP 2 - DOWN
    private val WESAngle = 170
    private val ESHAngle = 6
    private val HKAAngle = 170

    private val SHKAngle1 = 90
    private val SHKAngle2 = 165

    private val angleThreshold = 5

    private var isExeriseStarted: Boolean = false
    private var count = 0

    private var mediaPlayer: MediaPlayer? = null

    //check users position
    private var isUp = true                   // initail pos -- triggered when user initializes UP pos

    fun getLegRaiseAngles(person: Human, surfaceView: SurfaceView){
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

        // estimated WES angle - LEFT
        var esESHAngleL = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_KNEE.position].coordinate
            )
        )

        // estimated WES angle - RIGHT
        var esESHAngleR= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_KNEE.position].coordinate
            )
        )

        // estimated WES angle - LEFT
        var esHKAAngleL = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_ANKLE.position].coordinate
            )
        )

        // estimated WES angle - RIGHT
        var esHKAAngleR= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_ANKLE.position].coordinate
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

        checkPosition(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esHKAAngleL, esHKAAngleR, esSHKAngleL, esSHKAngleR, surfaceView)
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
            esHKAAngleL: Double, esHKAAngleR: Double, esSHKAngleL: Double, esSHKAngleR: Double, surfaceView: SurfaceView){

        var WESCHK = false
        var ESHCHK = false
        var HKACHK = false
        var SHKCHK = false

        // if already up -- listen for down angles
        if(isUp){
            if(chk(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esHKAAngleL, esHKAAngleR, esSHKAngleL, esSHKAngleR, surfaceView)){}
            else{
                WESCHK = (esWESAngleL >= WESAngle || esWESAngleR >= WESAngle)
                ESHCHK = (esESHAngleL <= ESHAngle || esESHAngleR <= ESHAngle)
                HKACHK = (esHKAAngleL >= HKAAngle || esHKAAngleR >= HKAAngle)
                SHKCHK = (esSHKAngleL >= SHKAngle2 || esSHKAngleR >= SHKAngle2)
            }
        }
        // else -- listen for up angles
        else{
            if(chk(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esHKAAngleL, esHKAAngleR, esSHKAngleL, esSHKAngleR, surfaceView)){}
            else{
                WESCHK = (esWESAngleL >= WESAngle || esWESAngleR >= WESAngle)
                ESHCHK = (esESHAngleL <= ESHAngle || esESHAngleR <= ESHAngle)
                HKACHK = (esHKAAngleL >= HKAAngle || esHKAAngleR >= HKAAngle)
                SHKCHK = ((esSHKAngleL <= SHKAngle1 + 5 && esSHKAngleL >= SHKAngle1 - 15) ||
                        (esSHKAngleR <= SHKAngle1 + 5 && esSHKAngleR >= SHKAngle1 - 15))
            }
        }

        if(WESCHK && ESHCHK && HKACHK && SHKCHK){
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

    private fun chk(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double, esHKAAngleL: Double,
                    esHKAAngleR: Double, esSHKAngleL: Double, esSHKAngleR: Double, surfaceView: SurfaceView): Boolean{
        if(mediaPlayer == null){
            mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
        }
        if(mediaPlayer != null && !mediaPlayer!!.isPlaying()) {
            mediaPlayer!!.release()
            mediaPlayer = null
            if (esWESAngleL <= WESAngle - 15 && esWESAngleR <= WESAngle - 15) {
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.handfloor)
                mediaPlayer!!.start()
                return true
            }
            else if (esESHAngleL >= ESHAngle + 30 && esESHAngleR >= ESHAngle + 30) {
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.handfloor)
                mediaPlayer!!.start()
                return true
            }
            else if (esHKAAngleL <= HKAAngle - 15 && esHKAAngleR <= HKAAngle - 15 ||
                esHKAAngleL >= HKAAngle + 15 && esHKAAngleR >= HKAAngle + 15) {
                mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.legsstrai)
                mediaPlayer!!.start()
                return true
            }
            else if(isUp){
                if(esSHKAngleL <= SHKAngle1 - angleThreshold && esSHKAngleR <= SHKAngle1 - angleThreshold){
                    mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.straiarms)/////////////////
                    mediaPlayer!!.start()
                    return true
                }
            }
        }
        return false
    }
}