package com.dedsec_x47.trainer.aiTrainer.poseClassify

import android.graphics.PointF
import com.dedsec_x47.trainer.aiTrainer.data.Human
import com.dedsec_x47.trainer.aiTrainer.data.KeyPoints
import com.dedsec_x47.trainer.aiTrainer.render.Visual

class BenchPress {
    //
    //
    // As push up contains 2 sets of pics, check exercise is done correctly by sequentially checking....

    // Angle vals for BenchPress SET1

    //1 - UP 2 - DOWN
    private val WESAngle1 = 155                  //W - wrist E - Elbow S - Shoulder
    private val SHKAngle = 200                  // for both positions
    private val HKAAngle = 90                  // these 2 vals will be same

    // you could create an array of each joints angle instead of 2 vars -- bt both takes same amt of memory -- so anything is ok
    private val WESAngle2 = 85

    private val angleThreshold = 15             //// We will make it global, as of current time being declare it in every exs

    private var isExeriseStarted: Boolean = false

    //check users position
    private var isUp = false;                   // initail pos -- triggered when user initializes UP pos

    private fun getBenchPressAngles(person: Human){
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
        checkPosition(esWESAngleL, esWESAngleR, esSHKAngleL, esSHKAngleR, esHKAAngleL, esHKAAngleR)
    }

    private fun checkPosition(esWESAngleL: Double, esWESAngleR: Double,
                              esSHKAngleL: Double, esSHKAngleR: Double, esHKAAngleL : Double, esHKAAngleR : Double){

        var WESLCHK = false;
        var WESRCHK = false;

        // if already up -- listen for down angles
        if(isUp){
            WESLCHK = (esWESAngleL <= WESAngle2 - angleThreshold || esWESAngleL >= WESAngle2 + angleThreshold)
            WESRCHK = (esWESAngleR <= WESAngle2 - angleThreshold || esWESAngleR >= WESAngle2 + angleThreshold)
        }
        // else -- listen for up angles
        else{
            WESLCHK = (esWESAngleL <= WESAngle1 - angleThreshold || esWESAngleL >= WESAngle1 + angleThreshold)
            WESRCHK = (esWESAngleR <= WESAngle1 - angleThreshold || esWESAngleR >= WESAngle1 + angleThreshold)
        }

        var SHKLCHK = (esSHKAngleL <= SHKAngle - angleThreshold || esSHKAngleL >= SHKAngle + angleThreshold)
        var SHKRCHK = (esSHKAngleR <= SHKAngle - angleThreshold || esSHKAngleR >= SHKAngle + angleThreshold)
        var HKALCHK = (esHKAAngleL <= HKAAngle - angleThreshold || esHKAAngleL >= HKAAngle + angleThreshold)
        var HKARCHK = (esHKAAngleR <= HKAAngle - angleThreshold || esHKAAngleR >= HKAAngle + angleThreshold)

        if(WESLCHK && WESRCHK  && SHKLCHK && SHKRCHK && HKALCHK && HKARCHK){
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
            else if(!SHKLCHK) {} // NOTIFY
            else if(!SHKRCHK) {} // NOTIFY
            else if(!HKALCHK) {} // NOTIFY
            else if(!HKARCHK) {} // NOTIFY */
            //NEEED
        }
        //return  false
    }


}