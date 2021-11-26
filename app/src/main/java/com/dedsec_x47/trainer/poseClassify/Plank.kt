package com.dedsec_x47.trainer.poseClassify

import android.graphics.PointF
import com.dedsec_x47.trainer.data.KeyPoints
import com.dedsec_x47.trainer.data.Human
import com.dedsec_x47.trainer.render.Visual.getAngle

class Plank {
    //
    //
    // As Plank contains only 1 posture, check whether exercise is done correctly by ensuring user's angle is within threshold angle....

    // Angle values for PLANK
    private val WESAngle = 90                   //W - wrist E - Elbow S - Shoulder
    private val ESHAngle = 90
    private val SHKAngle = 175

    private val angleThreshold = 15             //// We will make it global, as of current time being declare it in every exs

    private var isExeriseStarted: Boolean = false

    private fun getPlankAngles(person: Human) : Boolean{
        // estimated WES angle - LEFT
        var esWESAngleL= getAngle(listOf<PointF>(
            person.keyPoints[KeyPoints.LEFT_WRIST.position].coordinate,
            person.keyPoints[KeyPoints.LEFT_ELBOW.position].coordinate,
            person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate
        ))

        // estimated WES angle - RIGHT
        var esWESAngleR= getAngle(listOf<PointF>(
            person.keyPoints[KeyPoints.RIGHT_WRIST.position].coordinate,
            person.keyPoints[KeyPoints.RIGHT_ELBOW.position].coordinate,
            person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate
        ))

        // estimated ESH angle - LEFT
        var esESHAngleL= getAngle(listOf<PointF>(
            person.keyPoints[KeyPoints.LEFT_ELBOW.position].coordinate,
            person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate,
            person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate
        ))

        // estimated ESH angle - RIGHT
        var esESHAngleR= getAngle(listOf<PointF>(
            person.keyPoints[KeyPoints.RIGHT_ELBOW.position].coordinate,
            person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate,
            person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate
        ))

        // estimated SHK angle - LEFT
        var esSHKAngleL= getAngle(listOf<PointF>(
            person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate,
            person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate,
            person.keyPoints[KeyPoints.LEFT_KNEE.position].coordinate
        ))

        // estimated SHK angle - RIGHT
        var esSHKAngleR= getAngle(listOf<PointF>(
            person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate,
            person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate,
            person.keyPoints[KeyPoints.RIGHT_KNEE.position].coordinate
        ))
         checkPosition(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL, esSHKAngleR)
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
                              esSHKAngleL: Double, esSHKAngleR: Double){

        var WESLCHK = (esWESAngleL <= WESAngle - angleThreshold || esWESAngleL >= WESAngle + angleThreshold)
        var WESRCHK = (esWESAngleR <= WESAngle - angleThreshold || esWESAngleR >= WESAngle + angleThreshold)
        var ESHLCHK = (esESHAngleL <= ESHAngle - angleThreshold || esESHAngleL >= ESHAngle + angleThreshold)
        var ESHRCHK = (esESHAngleR <= ESHAngle - angleThreshold || esESHAngleR >= ESHAngle + angleThreshold)
        var SHKLCHK = (esSHKAngleL <= SHKAngle - angleThreshold || esSHKAngleL >= SHKAngle + angleThreshold)
        var SHKRCHK = (esSHKAngleR <= SHKAngle - angleThreshold || esSHKAngleR >= SHKAngle + angleThreshold)

        if(WESLCHK && WESRCHK && ESHLCHK && ESHRCHK && SHKLCHK && SHKRCHK){
                if(isExeriseStarted){
                    //Start timer
                    //return true

                    // increment time/rep
                }
                else{
                    isExeriseStarted = true;
                }
        }
        else if(isExeriseStarted){
            // pause / stop timer
            if(!WESLCHK) {} // NOTIFY
            else if(!WESRCHK) {} // NOTIFY
            else if(!ESHLCHK) {} // NOTIFY
            else if(!ESHRCHK) {} // NOTIFY
            else if(!SHKLCHK) {} // NOTIFY
            else if(!SHKRCHK) {} // NOTIFY
        }
    //return  false
    }
}