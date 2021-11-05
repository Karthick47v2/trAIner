package com.dedsec_x47.trainer.pose

import android.graphics.Bitmap
import com.dedsec_x47.trainer.data.Human

interface PoseDetector : AutoCloseable{

    fun estimateSinglePose(bitmap: Bitmap): Human

    fun lastInferenceTimeNanos(): Long
}
