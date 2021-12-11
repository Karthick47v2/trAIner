package com.dedsec_x47.trainer.homeFragments

import android.content.Intent
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.cardview.widget.CardView
import androidx.fragment.app.Fragment
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.UserDetails

class HomeFragment: Fragment(){

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {

        val view = inflater.inflate(R.layout.fragment_home, container, false)

        val card1 = view.findViewById<CardView>(R.id.cardWeightLoss)
        val card2 = view.findViewById<CardView>(R.id.cardStrengthTraining)
        val card3 = view.findViewById<CardView>(R.id.cardMiniGames)

        card1.setOnClickListener {
            startActivity(Intent(context, com.dedsec_x47.trainer.exercisePages.WeightLoss::class.java))
        }
        card2.setOnClickListener {
            startActivity(Intent(context, com.dedsec_x47.trainer.exercisePages.Strength::class.java))
        }
        card3.setOnClickListener {
            startActivity(Intent(context, com.dedsec_x47.trainer.exercisePages.MiniGames::class.java))
        }
        return view
    }

}