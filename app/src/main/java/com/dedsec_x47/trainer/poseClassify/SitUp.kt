package com.dedsec_x47.trainer.poseClassify


import android.graphics.PointF
import com.dedsec_x47.trainer.data.Human
import com.dedsec_x47.trainer.data.KeyPoints
import com.dedsec_x47.trainer.render.Visual

class SitUp {
    //
    //
    // As sit up contains 2 sets of pics, check exercise is done correctly by sequentially checking....

    // Angle vals for SitUp SET1

    //1 - UP 2 - DOWN
    private val WESAngle = 15                  //W - wrist E - Elbow S - Shoulder
    private val ESHAngle1 = 60                  //E - elbow S - shoulder H - hip
    private val HKAAngle = 70                // for both positions this val will be same

    // you could create an array of each joints angle instead of 2 vars -- bt both takes same amt of memory -- so anything is ok
    private val ESHAngle2 = 150

    private val angleThreshold = 15             //// We will make it global, as of current time being declare it in every exs

    private var isExeriseStarted: Boolean = false

    //check users position
    private var isUp =true;                   // initail pos -- triggered when user initializes UP pos

    private fun getSitUPAngles(person: Human) {
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

        // estimated ESH angle - LEFT
        var esESHAngleL = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.LEFT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.LEFT_HIP.position].coordinate
            )
        )

        // estimated ESH angle - RIGHT
        var esESHAngleR = Visual.getAngle(
            listOf<PointF>(
                person.keyPoints[KeyPoints.RIGHT_ELBOW.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_SHOULDER.position].coordinate,
                person.keyPoints[KeyPoints.RIGHT_HIP.position].coordinate
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
            esESHAngleL,
            esESHAngleR,
            esHKAAngleL,
            esHKAAngleR
        )
    }

    private fun checkPosition(
        esWESAngleL: Double, esWESAngleR: Double, esESHAngleL: Double, esESHAngleR: Double,
        esHKAAngleL: Double, esHKAAngleR: Double) {

        var WESLCHK = (esWESAngleL <= WESAngle - angleThreshold || esWESAngleL >= WESAngle + angleThreshold)
        var WESRCHK = (esWESAngleR <= WESAngle - angleThreshold || esWESAngleR >= WESAngle + angleThreshold)

        var HKALCHK = (esHKAAngleL <= HKAAngle - angleThreshold || esHKAAngleL >= HKAAngle + angleThreshold)
        var HKARCHK = (esHKAAngleR <= HKAAngle - angleThreshold || esHKAAngleR >= HKAAngle + angleThreshold)

        var ESHLCHK = false;
        var ESHRCHK = false;

        // if already up -- listen for down angles
        if (isUp) {
            ESHLCHK = (esESHAngleL <= ESHAngle2 - angleThreshold || esESHAngleL >= ESHAngle2 + angleThreshold)
            ESHRCHK = (esESHAngleR <= ESHAngle2 - angleThreshold || esESHAngleR >= ESHAngle2 + angleThreshold)
        }
        // else -- listen for up angles
        else {
            ESHLCHK = (esESHAngleL <= ESHAngle1 - angleThreshold || esESHAngleL >= ESHAngle1 + angleThreshold)
            ESHRCHK = (esESHAngleR <= ESHAngle1 - angleThreshold || esESHAngleR >= ESHAngle1 + angleThreshold)
        }

        if (WESLCHK && WESRCHK && ESHLCHK && ESHRCHK && HKALCHK && HKARCHK) {
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
            else if(!ESHLCHK) {} // NOTIFY
            else if(!ESHRCHK) {} // NOTIFY
            else if(!HKALCHK) {} // NOTIFY
            else if(!HKARCHK) {} // NOTIFY */
            //NEEED
        }
        //return  false
    }
}