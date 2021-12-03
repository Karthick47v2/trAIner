package com.dedsec_x47.trainer.aiTrainer.pose

import android.graphics.Bitmap
import com.dedsec_x47.trainer.aiTrainer.data.Human

interface PoseDetector : AutoCloseable{

    fun estimateSinglePose(bitmap: Bitmap): Human

    fun lastInferenceTimeNanos(): Long
}
