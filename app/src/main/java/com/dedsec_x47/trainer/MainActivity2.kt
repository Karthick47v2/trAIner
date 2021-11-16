package com.dedsec_x47.trainer

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button

import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase

class MainActivity2 : AppCompatActivity() {
    // declare private late initializer variables
    private lateinit var auth: FirebaseAuth  // create instance of FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        //set activity main2 layout
        setContentView(R.layout.activity_main2)

        // Find button in the layout
        val sign_out_button: Button = findViewById(R.id.sign_out_button)
        sign_out_button.setOnClickListener {
            // Initialize Firebase Auth
            auth = Firebase.auth
            // SignOut user
            auth.signOut()
        }
    }
}