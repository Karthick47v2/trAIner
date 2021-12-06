package com.dedsec_x47.trainer.exercisePages.instructions

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import androidx.cardview.widget.CardView
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.View
import com.dedsec_x47.trainer.aiTrainer.pose.PoseDetector
import com.dedsec_x47.trainer.aiTrainer.poseDetect
import com.dedsec_x47.trainer.databinding.ActivityStrengthTrainingBinding

class HammerCurlViews : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_view_instuctions)

        val front: CardView = findViewById(R.id.cardFrontView)
        val right: CardView = findViewById(R.id.cardRightHandView)
        val left: CardView = findViewById(R.id.cardLeftHandView)

        front.setOnClickListener(){
            poseDetect.currView = View.front
            val intent = Intent(this, poseDetect::class.java)
            startActivity(intent)
        }
        right.setOnClickListener(){
            poseDetect.currView = View.right
            val intent = Intent(this, poseDetect::class.java)
            startActivity(intent)
        }
        left.setOnClickListener(){
            poseDetect.currView = View.left
            val intent = Intent(this, poseDetect::class.java)
            startActivity(intent)
        }
    }
}