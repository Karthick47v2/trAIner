package com.dedsec_x47.trainer.aiTrainer.render

import android.content.ContentValues
import android.graphics.*
import android.net.Uri
import android.os.Build
import android.os.Environment
import android.provider.MediaStore
import android.util.Log
import android.view.SurfaceView
import com.dedsec_x47.trainer.aiTrainer.data.KeyPoints
import com.dedsec_x47.trainer.aiTrainer.data.Human
import java.io.File
import java.io.FileOutputStream
import java.io.OutputStream
import kotlin.math.*

object Visual {
    private const val LINE_WIDTH = 4f

    private val bodyJoints = listOf(
        Pair(KeyPoints.NOSE, KeyPoints.LEFT_SHOULDER),                      //0
        Pair(KeyPoints.NOSE, KeyPoints.RIGHT_SHOULDER),                     //1
        Pair(KeyPoints.LEFT_SHOULDER, KeyPoints.LEFT_ELBOW),                //2
        Pair(KeyPoints.LEFT_ELBOW, KeyPoints.LEFT_WRIST),                   //3
        Pair(KeyPoints.RIGHT_SHOULDER, KeyPoints.RIGHT_ELBOW),              //4
        Pair(KeyPoints.RIGHT_ELBOW, KeyPoints.RIGHT_WRIST),                 //5
        Pair(KeyPoints.LEFT_SHOULDER, KeyPoints.RIGHT_SHOULDER),            //6
        Pair(KeyPoints.LEFT_SHOULDER, KeyPoints.LEFT_HIP),                  //7
        Pair(KeyPoints.RIGHT_SHOULDER, KeyPoints.RIGHT_HIP),                //8
        Pair(KeyPoints.LEFT_HIP, KeyPoints.RIGHT_HIP),                      //9
        Pair(KeyPoints.LEFT_HIP, KeyPoints.LEFT_KNEE),                      //10
        Pair(KeyPoints.LEFT_KNEE, KeyPoints.LEFT_ANKLE),                    //11
        Pair(KeyPoints.RIGHT_HIP, KeyPoints.RIGHT_KNEE),                    //12
        Pair(KeyPoints.RIGHT_KNEE, KeyPoints.RIGHT_ANKLE)                   //13
    )

    // Draw line and point indicate body pose
    fun drawBodyKeypoints(input: Bitmap, person: Human): Bitmap{
        val paintLine = Paint().apply{
            strokeWidth = LINE_WIDTH
            color = Color.GREEN
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

    // Draw wrong angled joints
    fun drawWrongPose(input: Bitmap, surfaceView: SurfaceView, person: Human, no1: Int, no2: Int){
        val paintLine = Paint().apply{
            strokeWidth = LINE_WIDTH
            color = Color.RED
            style = Paint.Style.FILL
        }

        val output = input.copy(Bitmap.Config.ARGB_8888,true)
        val originalSizeCanvas = Canvas(output)

        var pointA = person.keyPoints[bodyJoints[no1].first.position].coordinate
        var pointB = person.keyPoints[bodyJoints[no1].second.position].coordinate

        originalSizeCanvas.drawLine(pointA.x, pointA.y, pointB.x, pointB.y, paintLine)
        originalSizeCanvas.drawCircle(pointA.x, pointA.y, 5f, paintLine)
        originalSizeCanvas.drawCircle(pointB.x, pointB.y, 5f, paintLine)

        pointA = person.keyPoints[bodyJoints[no2].first.position].coordinate
        pointB = person.keyPoints[bodyJoints[no2].second.position].coordinate

        originalSizeCanvas.drawLine(pointA.x, pointA.y, pointB.x, pointB.y, paintLine)
        originalSizeCanvas.drawCircle(pointA.x, pointA.y, 5f, paintLine)
        originalSizeCanvas.drawCircle(pointB.x, pointB.y, 5f, paintLine)



        var score = (person.keyPoints[bodyJoints[no1].first.position].score + person.keyPoints[bodyJoints[no1].second.position].score
                + person.keyPoints[bodyJoints[no2].first.position].score + person.keyPoints[bodyJoints[no2].second.position].score)

        if(score > 2) saveImg(surfaceView, output)
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

    fun saveImg(surfaceView: SurfaceView, outputBitmap: Bitmap){
        val filename = "${System.currentTimeMillis()}.jpg"
        var fos: OutputStream? = null

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.Q) {
            // getting the contentResolver
            surfaceView.context.contentResolver?.also { resolver ->

                // Content resolver will process the contentvalues
                val contentValues = ContentValues().apply {

                    // putting file information in content values
                    put(MediaStore.MediaColumns.DISPLAY_NAME, filename)
                    put(MediaStore.MediaColumns.MIME_TYPE, "image/jpg")
                    put(MediaStore.MediaColumns.RELATIVE_PATH, Environment.DIRECTORY_PICTURES)
                }

                // Inserting the contentValues to
                // contentResolver and getting the Uri
                val imageUri: Uri? = resolver.insert(MediaStore.Images.Media.EXTERNAL_CONTENT_URI, contentValues)

                // Opening an outputstream with the Uri that we got
                fos = imageUri?.let { resolver.openOutputStream(it) }
            }
        } else {
            // These for devices running on android < Q
            val imagesDir = Environment.getExternalStoragePublicDirectory(Environment.DIRECTORY_PICTURES)
            val image = File(imagesDir, filename)
            fos = FileOutputStream(image)
        }

        fos?.use {
            // Finally writing the bitmap to the output stream that we opened
            // Log.d(ContentValues.TAG, filename)
            outputBitmap.compress(Bitmap.CompressFormat.JPEG, 100, it)
            //Toast.makeText(surfaceView.context , "Captured View and saved to Gallery" , Toast.LENGTH_SHORT).show()
        }
    }
}