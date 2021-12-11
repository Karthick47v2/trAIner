package com.dedsec_x47.trainer.exercisePages

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.text.Layout
import android.view.View
import android.widget.LinearLayout
import android.widget.TextView
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.BooVariable
import com.dedsec_x47.trainer.auth.UserDetails
import com.dedsec_x47.trainer.auth.challange
import com.dedsec_x47.trainer.auth.isChallangeDetailsFetched
import com.dedsec_x47.trainer.databinding.ActivityChallengesBinding

class Challenge_popup : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.challenge_popup)

        UserDetails().getChallangeDetails()
        isChallangeDetailsFetched.listener = object : BooVariable.ChangeListener {
            override fun onChange() {
                if (isChallangeDetailsFetched.get()) {
                    findViewById<TextView>(R.id.txtChallengerName).text = challange?.get("From").toString()
                    findViewById<TextView>(R.id.txtWorkoutName1).text = challange?.get("exercise1.exercise").toString()
                    findViewById<TextView>(R.id.txtWorkoutReps1).text = challange?.get("exercise1.Repetation Count").toString()

                    if(challange!!.contains("exercise2")){
                        findViewById<TextView>(R.id.txtWorkoutName2).text = challange?.get("exercise2.exercise").toString()
                        findViewById<TextView>(R.id.txtWorkoutReps2).text = challange?.get("exercise2.Repetation Count").toString()
                    }else{
                        findViewById<LinearLayout>(R.id.exercise2).visibility = View.GONE
                    }

                    if(challange!!.contains("exercise3")){
                        findViewById<TextView>(R.id.txtWorkoutName3).text = challange?.get("exercise3.exercise").toString()
                        findViewById<TextView>(R.id.txtWorkoutReps3).text = challange?.get("exercise3.Repetation Count").toString()
                    }else{
                        findViewById<LinearLayout>(R.id.exercise3).visibility = View.GONE
                    }
                    isChallangeDetailsFetched.set(false)
                }
            }
        }
    }
}