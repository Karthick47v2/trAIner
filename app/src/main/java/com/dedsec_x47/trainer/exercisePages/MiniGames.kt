package com.dedsec_x47.trainer.exercisePages

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.dedsec_x47.trainer.databinding.ActivityMiniGamesBinding

class MiniGames : AppCompatActivity() {
    private lateinit var activityMiniGamesBinding : ActivityMiniGamesBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        activityMiniGamesBinding = ActivityMiniGamesBinding.inflate(layoutInflater)
        setContentView(activityMiniGamesBinding.root)

        activityMiniGamesBinding.cardGame1MG.setOnClickListener(){
//            val intent = Intent(this, ::class.java)
//            startActivity(intent)
        }
        activityMiniGamesBinding.cardComingSoonMG.setOnClickListener(){
//            val intent = Intent(this, ::class.java)
//            startActivity(intent)
        }

    }
}