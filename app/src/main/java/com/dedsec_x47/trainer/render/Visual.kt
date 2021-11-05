package com.dedsec_x47.trainer.render

import android.graphics.Bitmap
import android.graphics.Canvas
import android.graphics.Color
import android.graphics.Paint
import com.dedsec_x47.trainer.data.KeyPoints
import com.dedsec_x47.trainer.data.Human

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
        val output = input.copy(Bitmap.Config.ARGB_8888,true)
        val originalSizeCanvas = Canvas(output)
        bodyJoints.forEach{
            val pointA = person.keyPoints[it.first.position].coordinate
            val pointB = person.keyPoints[it.second.position].coordinate
            originalSizeCanvas.drawLine(pointA.x, pointA.y, pointB.x, pointB.y, paintLine)
        }
        return output
    }
}