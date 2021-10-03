package com.dedsec_x47.trainer

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.TextView
import com.dedsec_x47.trainer.databinding.ActivityMainBinding
import android.content.Intent
import android.widget.Button
import android.widget.Toast
import android.view.View
//import android.R

import com.facebook.CallbackManager
import com.facebook.FacebookSdk;
import com.facebook.appevents.AppEventsLogger;
import com.facebook.FacebookException
import com.facebook.login.LoginResult
import com.facebook.FacebookCallback
import com.facebook.login.widget.LoginButton

import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase

class MainActivity : AppCompatActivity() {

    private lateinit var binding: ActivityMainBinding
    private lateinit var auth: FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)
        // Initialize Firebase Auth
        auth = Firebase.auth

        // Example of a call to a native method
        //binding.sampleText.text = stringFromJNI()
        reload()
    }

//    public override fun onStart() {
//        super.onStart()
//        // Check if user is signed in (non-null) and update UI accordingly.
//        val currentUser = auth.currentUser
//        if(currentUser != null){
//            reload();
//        }
//    }

    private fun reload() {
        val intent = Intent(this, SignIn::class.java)
        startActivity(intent)
    }

    /**
     * A native method that is implemented by the 'trainer' native library,
     * which is packaged with this application.
     */
    external fun stringFromJNI(): String

    companion object {
        // Used to load the 'trainer' library on application startup.
        init {
            System.loadLibrary("native-lib")
        }
    }
}