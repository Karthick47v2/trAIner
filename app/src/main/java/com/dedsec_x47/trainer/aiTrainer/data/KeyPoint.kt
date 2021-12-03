package com.dedsec_x47.trainer.aiTrainer.data

import android.graphics.PointF

data class KeyPoint(val bodyPart: KeyPoints, var coordinate: PointF, val score: Float)