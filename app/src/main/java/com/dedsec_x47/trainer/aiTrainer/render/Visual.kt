package com.dedsec_x47.trainer.aiTrainer.render

import android.graphics.*
import com.dedsec_x47.trainer.aiTrainer.data.KeyPoints
import com.dedsec_x47.trainer.aiTrainer.data.Human
import kotlin.math.*

object Visual {
    private const val LINE_WIDTH = 4f

    private val bodyJoints = listOf(
        Pair(KeyPoints.NOSE, KeyPoints.LEFT_SHOULDER),
        Pair(KeyPoints.NOSE, KeyPoints.RIGHT_SHOULDER),
        Pair(KeyPoints.LEFT_SHOULDER, KeyPoints.LEFT_ELBOW),
        Pair(KeyPoints.LEFT_ELBOW, KeyPoints.LEFT_WRIST),
        Pair(KeyPoints.RIGHT_SHOULDER, KeyPoints.RIGHT_ELBOW),
        Pair(KeyPoints.RIGHT_ELBOW, KeyPoints.RIGHT_WRIST),
        Pair(KeyPoints.LEFT_SHOULDER, KeyPoints.RIGHT_SHOULDER),
        Pair(KeyPoints.LEFT_SHOULDER, KeyPoints.LEFT_HIP),
        Pair(KeyPoints.RIGHT_SHOULDER, KeyPoints.RIGHT_HIP),
        Pair(KeyPoints.LEFT_HIP, KeyPoints.RIGHT_HIP),
        Pair(KeyPoints.LEFT_HIP, KeyPoints.LEFT_KNEE),
        Pair(KeyPoints.LEFT_KNEE, KeyPoints.LEFT_ANKLE),
        Pair(KeyPoints.RIGHT_HIP, KeyPoints.RIGHT_KNEE),
        Pair(KeyPoints.RIGHT_KNEE, KeyPoints.RIGHT_ANKLE)
    )

    // Draw line and point indicate body pose
    fun drawBodyKeypoints(input: Bitmap, person: Human): Bitmap{
        val paintLine = Paint().apply{
            strokeWidth = LINE_WIDTH
            color = Color.RED
            style = Paint.Style.FILL
        }
        val paintLine1 = Paint().apply{
            strokeWidth = LINE_WIDTH
            color = Color.BLUE
            style = Paint.Style.FILL
        }
        val output = input.copy(Bitmap.Config.ARGB_8888,true)
        val originalSizeCanvas = Canvas(output)
        bodyJoints.forEach{
            val pointA = person.keyPoints[it.first.position].coordinate
            val pointB = person.keyPoints[it.second.position].coordinate
            if(it.first == KeyPoints.LEFT_HIP || it.first == KeyPoints.LEFT_SHOULDER || it.first == KeyPoints.LEFT_KNEE){
                originalSizeCanvas.drawLine(pointA.x, pointA.y, pointB.x, pointB.y, paintLine1)
            }
            else originalSizeCanvas.drawLine(pointA.x, pointA.y, pointB.x, pointB.y, paintLine)
        }
        return output
    }

    // get angle bw 3 joints
    fun getAngle(anglePoints: List<PointF>): Double {
        val x1 = anglePoints[0].x
        val y1 = anglePoints[0].y
        val x2 = anglePoints[1].x
        val y2 = anglePoints[1].y
        val x3 = anglePoints[2].x
        val y3 = anglePoints[2].y

        var angle = Math.toDegrees((atan2((y1 - y2), (x1 - x2)) - atan2((y3 - y2), (x3 - x2))).toDouble())

        if(angle > 180) angle = 360 - angle
        if(angle < 0) angle *= -1
        return angle
    }
}