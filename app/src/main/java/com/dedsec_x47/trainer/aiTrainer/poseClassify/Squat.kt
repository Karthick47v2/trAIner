package com.dedsec_x47.trainer.aiTrainer.poseClassify

import android.content.ContentValues
import android.graphics.Bitmap
import android.graphics.PointF
import android.util.Log
import com.dedsec_x47.trainer.aiTrainer.data.Human
import com.dedsec_x47.trainer.aiTrainer.data.KeyPoints
import com.dedsec_x47.trainer.aiTrainer.render.Visual
import android.media.MediaPlayer
import android.view.SurfaceView
import com.dedsec_x47.trainer.R

object Squat {
    // Angle vals for Hammercurl SET1
    //1 -hands UP 2 - DOWN

    private val WESAngle = 170

    //private val ESHAngle = 90
    private val ESHAngle = 90

    private val SHKAAngle1 = 160
    private val SHKAAngle2 = 45

    private val angleThreshold = 15

    private var isExeriseStarted: Boolean = false

    private var mediaPlayer: MediaPlayer? = null
    private var count: Int = 0

    //check users position
    private var isUp = false                   // initail pos -- triggered when user initializes UP pos

    fun getSquatAngles(person: Human, bitmap: Bitmap, surfaceView: SurfaceView): Int {
        // estimated WES angle - LEFT
        var esWESAngleL = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_WRIST.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate
            )
        )

        // estimated WES angle - RIGHT
        var esWESAngleR = Visual.getAngle(
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
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate
            )
        )

        // estimated WES angle - RIGHT
        var esESHAngleR = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate
            )
        )

        // estimated SHK angle - LEFT
        var esSHKAngleL = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_KNEE.position].coordinate
            )
        )

        // estimated SHK angle - RIGHT
        var esSHKAngleR = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_KNEE.position].coordinate
            )
        )

        // estimated SHK angle - LEFT
        var esHKAAngleL = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_ANKLE.position].coordinate
            )
        )

        // estimated SHK angle - RIGHT
        var esHKAAngleR = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_ANKLE.position].coordinate
            )
        )

        Log.d(ContentValues.TAG, "ARMS L : "  + esESHAngleL.toString() + "  R : " + esESHAngleR.toString())

        return checkPosition(
            esWESAngleL,
            esWESAngleR,
            esESHAngleL,
            esESHAngleR,
            esSHKAngleL,
            esSHKAngleR,
            esHKAAngleL,
            esHKAAngleR,
            person,
            bitmap,
            surfaceView
        )
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
                              esSHKAngleL: Double, esSHKAngleR: Double, esHKAAngleL: Double, esHKAAngleR: Double,
                              person: Human, bitmap: Bitmap, surfaceView: SurfaceView): Int {

        var WESCHK = false
        var ESHCHK = false
        var SHKCHK = false
        var HKACHA = false

        // if already up -- listen for down angles
        if (isUp) {
            if (chk(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL, esSHKAngleR, esHKAAngleL, esHKAAngleR, person, bitmap, surfaceView)) {
            } else {
                WESCHK = (esWESAngleL >= WESAngle - 10 || esWESAngleR >= WESAngle - 10)
                ESHCHK = (esESHAngleL <= ESHAngle || esESHAngleR <= ESHAngle)
                SHKCHK = (esSHKAngleL <= SHKAAngle2 + 45 || esSHKAngleR <= SHKAAngle2 + 45)
                HKACHA = (esHKAAngleL <= SHKAAngle2 + 45 || esHKAAngleR <= SHKAAngle2 + 45)
            }
        }
        // else -- listen for up angles
        else {
            if (chk(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL, esSHKAngleR, esHKAAngleL, esHKAAngleR, person, bitmap, surfaceView)) {
            } else{
                WESCHK = (esWESAngleL >= WESAngle - 10 || esWESAngleR >= WESAngle - 10)
                ESHCHK = (esESHAngleL <= ESHAngle || esESHAngleR <= ESHAngle)
                SHKCHK = (esSHKAngleL >= SHKAAngle1 || esSHKAngleR >= SHKAAngle1)
                HKACHA = (esHKAAngleL >= SHKAAngle1 || esHKAAngleR >= SHKAAngle1)
            }
        }

        if (WESCHK && ESHCHK && SHKCHK && HKACHA) {
            if (isExeriseStarted) {
                if (mediaPlayer == null) {
                    mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
                }
                if (mediaPlayer != null && !mediaPlayer!!.isPlaying()) {
                    mediaPlayer!!.release()
                    mediaPlayer = null
                    mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
                    mediaPlayer!!.start()
                }

                if (isUp) count++
                isUp = !isUp
            } else {
                isExeriseStarted = true;
                isUp = !isUp;
            }
        }
        return count
    }

    private fun chk(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double, esSHKAngleL: Double,
                    esSHKAngleR: Double, esHKAAngleL: Double, esHKAAngleR: Double, person: Human, bitmap: Bitmap,
                    surfaceView: SurfaceView): Boolean {
        if (mediaPlayer == null) {
            mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
        }
        if (mediaPlayer != null && !mediaPlayer!!.isPlaying()) {
            mediaPlayer!!.release()
            mediaPlayer = null
            if (esWESAngleL <= WESAngle - angleThreshold && esWESAngleR <= WESAngle - angleThreshold) {
                drawOnImg(surfaceView, bitmap, person, R.raw.straiarms, 2, 3, 4, 5)
                return true
            } else if (!isUp) {
                if(esSHKAngleL <= SHKAAngle2 - 5 && esSHKAngleR <= SHKAAngle2 - 5){
                    drawOnImg(surfaceView, bitmap, person, R.raw.thigsparafloor, 7, 10, 8, 12)
                    return true
                }
                else if(esHKAAngleL <= SHKAAngle2 - 5 && esHKAAngleR <= SHKAAngle2 - 5){
                    drawOnImg(surfaceView, bitmap, person, R.raw.thigsparafloor, 10, 11, 12,13)
                    return true
                }
                /*else if((esESHAngleL <= ESHAngle - 25 && esESHAngleR <= ESHAngle - 25) ||
                    (esESHAngleL >= ESHAngle + 25 && esESHAngleR >= ESHAngle + 25)){
                    drawOnImg(surfaceView, bitmap, person, R.raw.armsparafloor, 2, 7, 4,8)
                    return true
                }*/
            }
            else if(isUp){
                if((esESHAngleL <= ESHAngle - 25 && esESHAngleR <= ESHAngle - 25) ||
                    (esESHAngleL >= ESHAngle + 25 && esESHAngleR >= ESHAngle + 25)){
                    drawOnImg(surfaceView, bitmap, person, R.raw.armsparafloor, 2, 7, 4,8)
                    return true
                }

            }
        }
        return false
    }

    private fun drawOnImg(surfaceView: SurfaceView, bitmap: Bitmap, person: Human, uri: Int,
                          no1: Int, no2: Int, no3: Int, no4: Int) {
        mediaPlayer = MediaPlayer.create(surfaceView.context, uri)
        mediaPlayer!!.start()

        if (isExeriseStarted) {
            Visual.drawWrongPose(bitmap, surfaceView, person, no1, no2)
            Visual.drawWrongPose(bitmap, surfaceView, person, no3, no4)
        }
    }
}