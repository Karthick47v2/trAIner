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

object ShoulderPressD {
    // Angle vals for Hammercurl SET1
    //1 -hands UP 2 - DOWN

    private val WESAngle1 = 160
    private val WESAngle2 = 50

    private var isExeriseStarted: Boolean = false

    private var mediaPlayer: MediaPlayer? = null
    private var count: Int = 0

    //check users position
    private var isUp =
        true                   // initail pos -- triggered when user initializes UP pos

    fun getShoulderPressDAngles(person: Human, bitmap: Bitmap, surfaceView: SurfaceView): Int {
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

        return checkPosition(
            esWESAngleL,
            esWESAngleR,
            person,
            bitmap,
            surfaceView
        )
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double, person: Human, bitmap: Bitmap,
                              surfaceView: SurfaceView): Int {

        var WESCHK = false

        // if already up -- listen for down angles
        if (isUp) {
            if (chk(esWESAngleL, esWESAngleR, person, bitmap, surfaceView)) {
            } else {
                WESCHK = (esWESAngleL <= WESAngle2 && esWESAngleR <= WESAngle2)
            }
        }
        // else -- listen for up angles
        else {
            if (chk(esWESAngleL, esWESAngleR, person, bitmap, surfaceView)) {
            } else{
                WESCHK = (esWESAngleL >= WESAngle1 && esWESAngleR >= WESAngle1)
            }
        }

        if (WESCHK) {
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
                isUp = false;
            }
        }
        return count
    }

    private fun chk(esWESAngleL: Double, esWESAngleR: Double, person: Human,
                    bitmap: Bitmap, surfaceView: SurfaceView): Boolean {
        if (mediaPlayer == null) {
            mediaPlayer = MediaPlayer.create(surfaceView.context, R.raw.ring)
        }
        if (mediaPlayer != null && !mediaPlayer!!.isPlaying()) {
            mediaPlayer!!.release()
            mediaPlayer = null
            if(!isUp){
                if (esWESAngleL <= WESAngle2 - 10 || esWESAngleR <= WESAngle2 - 10) {
                    drawOnImg(surfaceView, bitmap, person, R.raw.bendtoo, 2, 3, 4, 5)
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

        /*if (isExeriseStarted) {
            Visual.drawWrongPose(bitmap, surfaceView, person, no1, no2)
            Visual.drawWrongPose(bitmap, surfaceView, person, no3, no4)
        }*/
    }
}