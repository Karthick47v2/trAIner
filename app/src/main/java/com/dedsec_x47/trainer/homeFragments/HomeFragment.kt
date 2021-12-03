package com.dedsec_x47.trainer.homeFragments

import android.content.Intent
import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.cardview.widget.CardView
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.LogOut
import com.google.android.material.navigation.NavigationView

class HomeFragment: Fragment(){

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val view = inflater.inflate(R.layout.fragment_home, container, false)

        //view.findViewById<>()
        // TODO: GO TO STRENGTH.KT OR WEIGHTLOSS.KT OR MINIGAMES.KT ACCORDING TO SELECTED CARD
        val card1 = view.findViewById<CardView>(R.id.cardWeightLoss)
        val card2 = view.findViewById<CardView>(R.id.cardStrengthTraining)
        val card3 = view.findViewById<CardView>(R.id.cardHIIT)

        card1.setOnClickListener {
            inflater.inflate(
                R.layout.activity_weight_loss,
                container,
                false
            )
        }
        card2.setOnClickListener {
            inflater.inflate(
                R.layout.activity_strength_training,
                container,
                false
            )
        }
        card3.setOnClickListener {
            inflater.inflate(
                R.layout.activity_mini_games,
                container,
                false
            )
        }

        return view
    }

}