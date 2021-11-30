package com.dedsec_x47.trainer.poseClassify

import android.graphics.PointF
import com.dedsec_x47.trainer.data.Human
import com.dedsec_x47.trainer.data.KeyPoints
import com.dedsec_x47.trainer.render.Visual

class Squat {
    //
    //
    // As Squat contains 2 sets of pics, check exercise is done correctly by sequentially checking....

    // Angle vals for Squat SET1

    //1 - Down 2 - Up
    private val WESAngle1 = 60                 //W - wrist E - Elbow S - Shoulder
    private val ESHAngle1 = 90                  //elbow shoulder hip
    private val SHKAngle1 = 85                  //shoulder hip knee
    private val HKAAngle1 = 90                  //hip knee ankle

    //Up
    // you could create an array of each joints angle instead of 2 vars -- bt both takes same amt of memory -- so anything is ok
    private val WESAngle2 = 185
    private val ESHAngle2 = 80
    private val SHKAngle2 = 165
    private val HKAAngle2 = 180

    private val angleThreshold = 15             //// We will make it global, as of current time being declare it in every exs

    private var isExeriseStarted: Boolean = false

    //check users position
    private var isUp = true;                   // initail pos -- triggered when user initializes UP pos

    private fun getSquatAngles(person: Human){
        // estimated WES angle - LEFT
        var esWESAngleL= Visual.getAngle(
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
        var esESHAngleL= Visual.getAngle(
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

        // estimated SHK angle - LEFT
        var esHKAAngleL= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_ANKLE.position].coordinate
            )
        )

        // estimated SHK angle - RIGHT
        var esHKAAngleR= Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_ANKLE.position].coordinate
            )
        )
        checkPosition(esWESAngleL, esWESAngleR, esESHAngleL, esESHAngleR, esSHKAngleL, esSHKAngleR, esHKAAngleL, esHKAAngleR)
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
                              esSHKAngleL: Double, esSHKAngleR: Double, esHKAAngleL : Double, esHKAAngleR : Double){

        var WESLCHK = false;
        var WESRCHK = false;
        var ESHLCHK = false;
        var ESHRCHK = false;

        // if already up -- listen for down angles
        if(isUp){
            WESLCHK = (esWESAngleL <= WESAngle1 - angleThreshold || esWESAngleL >= WESAngle1 + angleThreshold)
            WESRCHK = (esWESAngleR <= WESAngle1 - angleThreshold || esWESAngleR >= WESAngle1 + angleThreshold)
            ESHLCHK = (esESHAngleL <= ESHAngle1 - angleThreshold || esESHAngleL >= ESHAngle1 + angleThreshold)
            ESHRCHK = (esESHAngleR <= ESHAngle1 - angleThreshold || esESHAngleR >= ESHAngle1 + angleThreshold)
        }
        // else -- listen for up angles
        else{
            WESLCHK = (esWESAngleL <= WESAngle2 - angleThreshold || esWESAngleL >= WESAngle2 + angleThreshold)
            WESRCHK = (esWESAngleR <= WESAngle2 - angleThreshold || esWESAngleR >= WESAngle2 + angleThreshold)
            ESHLCHK = (esESHAngleL <= ESHAngle2 - angleThreshold || esESHAngleL >= ESHAngle2 + angleThreshold)
            ESHRCHK = (esESHAngleR <= ESHAngle2 - angleThreshold || esESHAngleR >= ESHAngle2 + angleThreshold)
        }

        var SHKLCHK = false;
        var SHKRCHK = false;
        var HKALCHK = false;
        var HKARCHK = false;

        // if already up -- listen for down angles
        if(isUp){
            SHKLCHK = (esSHKAngleL <= SHKAngle1 - angleThreshold || esSHKAngleL >= SHKAngle1 + angleThreshold)
            SHKRCHK = (esSHKAngleR <= SHKAngle1 - angleThreshold || esSHKAngleR >= SHKAngle1 + angleThreshold)
            HKALCHK = (esHKAAngleL <= HKAAngle1 - angleThreshold || esHKAAngleL >= HKAAngle1 + angleThreshold)
            HKARCHK = (esHKAAngleR <= HKAAngle1 - angleThreshold || esHKAAngleR >= HKAAngle1 + angleThreshold)

        }
        // else -- listen for up angles
        else{
            SHKLCHK = (esSHKAngleL <= SHKAngle2 - angleThreshold || esSHKAngleL >= SHKAngle2 + angleThreshold)
            SHKRCHK = (esSHKAngleR <= SHKAngle2 - angleThreshold || esSHKAngleR >= SHKAngle2 + angleThreshold)
            HKALCHK = (esHKAAngleL <= HKAAngle2 - angleThreshold || esHKAAngleL >= HKAAngle2 + angleThreshold)
            HKARCHK = (esHKAAngleR <= HKAAngle2 - angleThreshold || esHKAAngleR >= HKAAngle2 + angleThreshold)
        }



        if(WESLCHK && WESRCHK && ESHLCHK && ESHRCHK && SHKLCHK && SHKRCHK && HKALCHK && HKARCHK){
            if(isExeriseStarted){
                //Start timer
                //return true

                // increment time/rep
                isUp = !isUp
            }
            else{
                isExeriseStarted = true;
                isUp = true;
            }
        }
        else if(isExeriseStarted){
            // pause / stop timer
            /*if(!WESLCHK) {} // NOTIFY
            else if(!WESRCHK) {} // NOTIFY
            else if(!ESHLCHK) {} // NOTIFY
            else if(!ESHRCHK) {} // NOTIFY
            else if(!SHKLCHK) {} // NOTIFY
            else if(!SHKRCHK) {} // NOTIFY
            else if(!HKALCHK) {} // NOTIFY
            else if(!HKARCHK) {} // NOTIFY */
            //NEEED
        }
        //return  false
    }


}