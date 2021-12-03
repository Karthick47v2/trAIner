package com.dedsec_x47.trainer.aiTrainer.poseClassify

import android.graphics.PointF
import com.dedsec_x47.trainer.aiTrainer.data.Human
import com.dedsec_x47.trainer.aiTrainer.data.KeyPoints
import com.dedsec_x47.trainer.aiTrainer.render.Visual

class DeadLift {
    //
    //
    // As sit up contains 2 sets of pics, check exercise is done correctly by sequentially checking....

    // Angle vals for DeadLift SET1

    //1 - Down 2 - Up
    private val WESAngle = 160                  //W - wrist E - Elbow S - Shoulder
    private val SHKAngle1 = 60                  //E - elbow S - shoulder H - hip
    private val HKAAngle1 = 60

    // you could create an array of each joints angle instead of 2 vars -- bt both takes same amt of memory -- so anything is ok
    private val SHKAngle2 = 100
    private val HKAAngle2 = 80

    private val angleThreshold = 15             //// We will make it global, as of current time being declare it in every exs

    private var isExeriseStarted: Boolean = false

    //check users position
    private var isUp =false;                   // initail pos -- triggered when user initializes UP pos

    private fun getDeadLiftAngles(person: Human) {
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
        var esHKAAngleL = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_ANKLE.position].coordinate
            )
        )

        // estimated HKA angle - RIGHT
        var esHKAAngleR = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_KNEE.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_ANKLE.position].coordinate
            )
        )
        checkPosition(
            esWESAngleL,
            esWESAngleR,
            esSHKAngleL,
            esSHKAngleR,
            esHKAAngleL,
            esHKAAngleR
        )
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double,
                              esSHKAngleL: Double, esSHKAngleR: Double, esHKAAngleL : Double, esHKAAngleR : Double){

        var WESLCHK = (esWESAngleL <= WESAngle - angleThreshold || esWESAngleL >= WESAngle + angleThreshold)
        var WESRCHK = (esWESAngleR <= WESAngle - angleThreshold || esWESAngleR >= WESAngle + angleThreshold)

        var SHKLCHK = false;
        var SHKRCHK = false;
        var HKALCHK = false;
        var HKARCHK = false;

        // if already up -- listen for down angles
        if (isUp) {
            SHKLCHK = (esSHKAngleL <= SHKAngle1 - angleThreshold || esSHKAngleL >= SHKAngle1 + angleThreshold)
            SHKRCHK = (esSHKAngleR <= SHKAngle1 - angleThreshold || esSHKAngleR >= SHKAngle1 + angleThreshold)
            HKALCHK = (esHKAAngleL <= HKAAngle1 - angleThreshold || esHKAAngleL >= HKAAngle1 + angleThreshold)
            HKARCHK = (esHKAAngleR <= HKAAngle1 - angleThreshold || esHKAAngleR >= HKAAngle1 + angleThreshold)
        }
        // else -- listen for up angles
        else {
            SHKLCHK = (esSHKAngleL <= SHKAngle2 - angleThreshold || esSHKAngleL >= SHKAngle2 + angleThreshold)
            SHKRCHK = (esSHKAngleR <= SHKAngle2 - angleThreshold || esSHKAngleR >= SHKAngle2 + angleThreshold)
            HKALCHK = (esHKAAngleL <= HKAAngle2 - angleThreshold || esHKAAngleL >= HKAAngle2 + angleThreshold)
            HKARCHK = (esHKAAngleR <= HKAAngle2 - angleThreshold || esHKAAngleR >= HKAAngle2 + angleThreshold)
        }



        if (WESLCHK && WESRCHK && SHKLCHK && SHKRCHK && HKALCHK && HKARCHK) {
            if (isExeriseStarted) {
                //Start timer
                //return true

                // increment time/rep
                isUp = !isUp
            } else {
                isExeriseStarted = true;
                isUp = true;
            }
        } else if (isExeriseStarted) {
            // pause / stop timer
            /*if(!WESLCHK) {} // NOTIFY
            else if(!WESRCHK) {} // NOTIFY
            else if(!SHKLCHK) {} // NOTIFY
            else if(!SHKRCHK) {} // NOTIFY
            else if(!HKALCHK) {} // NOTIFY
            else if(!HKARCHK) {} // NOTIFY */
            //NEEED
        }
        //return  false
    }
}