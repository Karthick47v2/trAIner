package com.dedsec_x47.trainer.homeFragments

import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Button
import androidx.fragment.app.Fragment
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.exercisePages.CreateNewChallenge

class ChallengeFragment: Fragment() {

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {

        val view = inflater.inflate(R.layout.fragment_challenge, container, false)
        val btnChallange = view.findViewById<Button>(R.id.challengeButton)

        btnChallange.setOnClickListener{
            Log.d("Challenge"," click")
            val intent = Intent(context, CreateNewChallenge::class.java)
            startActivity(intent)
        }
        return view
    }

}