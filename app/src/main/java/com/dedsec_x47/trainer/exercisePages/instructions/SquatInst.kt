package com.dedsec_x47.trainer.exercisePages.instructions

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.aiTrainer.Exercise
import com.dedsec_x47.trainer.aiTrainer.poseDetect

class SquatInst : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_instructions_squat)

        val btn: Button = findViewById(R.id.btnStartSquat)

        btn.setOnClickListener(){
            poseDetect.currentExercise = Exercise.Squat
            startActivity(Intent(this, poseDetect::class.java))
        }
    }
    //TODO: SET ONCLICK LISTNER --
}