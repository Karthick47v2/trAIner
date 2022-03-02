package com.dedsec_x47.trainer.exercisePages.instructions

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.aiTrainer.Exercise
import com.dedsec_x47.trainer.aiTrainer.poseDetect

class ShoulderPressDInst : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_instructions_shoulderpressdumbbell)

        val btn: Button = findViewById(R.id.btnStartShoulderPressDumbbell)

        btn.setOnClickListener(){
            poseDetect.currentExercise = Exercise.ShoulderpressDumbell
            startActivity(Intent(this, poseDetect::class.java))
        }
    }
}