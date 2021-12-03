package com.dedsec_x47.trainer.exercisePages


import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.dedsec_x47.trainer.databinding.ActivityStrengthTrainingBinding
import com.dedsec_x47.trainer.exercisePages.instructions.*

class Strength : AppCompatActivity() {

    private lateinit var activityStrengthTrainingBinding: ActivityStrengthTrainingBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        activityStrengthTrainingBinding = ActivityStrengthTrainingBinding.inflate(layoutInflater)
        setContentView(activityStrengthTrainingBinding.root)

        activityStrengthTrainingBinding.cardPushUpST.setOnClickListener(){
            val intent = Intent(this, PushUpInstr::class.java)
            startActivity(intent)
        }
        activityStrengthTrainingBinding.cardSitUpST.setOnClickListener(){
            val intent = Intent(this, SitupInst::class.java)
            startActivity(intent)
        }
        activityStrengthTrainingBinding.cardBenchPressBarbellST.setOnClickListener(){
            val intent = Intent(this, BenchPressBInst::class.java)
            startActivity(intent)
        }
        activityStrengthTrainingBinding.cardBenchPressDumbbellST.setOnClickListener(){
            val intent = Intent(this, BenchPressDInst::class.java)
            startActivity(intent)
        }
        activityStrengthTrainingBinding.cardShoulderPressBarbellST.setOnClickListener(){
            val intent = Intent(this, ShoulderPressBInst::class.java)
            startActivity(intent)
        }
        activityStrengthTrainingBinding.cardShoulderPressDumbbell.setOnClickListener(){
            val intent = Intent(this, ShoulderPressDInst::class.java)
            startActivity(intent)
        }
        activityStrengthTrainingBinding.cardChinUpST.setOnClickListener(){
            val intent = Intent(this, ChinUpInst::class.java)
            startActivity(intent)
        }
        activityStrengthTrainingBinding.cardDeadLiftST.setOnClickListener(){
            val intent = Intent(this, DeadliftInst::class.java)
            startActivity(intent)
        }
        activityStrengthTrainingBinding.cardHammerCurlST.setOnClickListener(){
            val intent = Intent(this, HammerCurlInst::class.java)
            startActivity(intent)
        }

    }
}