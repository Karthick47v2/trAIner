package com.dedsec_x47.trainer.exercisePages

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.dedsec_x47.trainer.databinding.ActivityWeightLossBinding
import com.dedsec_x47.trainer.exercisePages.instructions.*

class WeightLoss : AppCompatActivity() {

    private lateinit var activityWeightLossBinding: ActivityWeightLossBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        activityWeightLossBinding = ActivityWeightLossBinding.inflate(layoutInflater)
        setContentView(activityWeightLossBinding.root)

        activityWeightLossBinding.cardPushUpWL.setOnClickListener(){
            val intent = Intent(this, PushUpInstr::class.java)
            startActivity(intent)
        }
        activityWeightLossBinding.cardSquatWL.setOnClickListener(){
            val intent = Intent(this, SquatInst::class.java)
            startActivity(intent)
        }
        activityWeightLossBinding.cardPlankWL.setOnClickListener(){
            val intent = Intent(this, PlankInst::class.java)
            startActivity(intent)
        }
        activityWeightLossBinding.cardSplitSquatWL.setOnClickListener(){
            val intent = Intent(this, SplitsquatInst::class.java)
            startActivity(intent)
        }
        activityWeightLossBinding.cardSitUpWL.setOnClickListener(){
            val intent = Intent(this, SitupInst::class.java)
            startActivity(intent)
        }
        activityWeightLossBinding.cardChinUpWL.setOnClickListener(){
            val intent = Intent(this, ChinUpInst::class.java)
            startActivity(intent)
        }
        activityWeightLossBinding.cardLegRaiseWL.setOnClickListener(){
            val intent = Intent(this, LegRaiseInst::class.java)
            startActivity(intent)
        }
    }
}