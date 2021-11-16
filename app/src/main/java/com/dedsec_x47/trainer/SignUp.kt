package com.dedsec_x47.trainer

//import android.R

import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase


class SignUp : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_signup)
        // Initialize Firebase Auth
        auth = Firebase.auth

        //when button tapped execute create account task
        val sign_up_button: Button = findViewById(R.id.sign_up_button)
        sign_up_button.setOnClickListener {
            val emailEt: EditText = findViewById(R.id.sign_up_email)
            val passwordEt: EditText = findViewById(R.id.sign_up_password)

            val email: String = emailEt.text.toString()
            val password: String = passwordEt.text.toString()

            createAccount(email, password)
        }
    }

    private fun createAccount(email: String, password: String) {
        // [START create_user_with_email]
        auth.createUserWithEmailAndPassword(email, password)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
//                    val user = auth.currentUser
//                    sendEmailVerification()
//                    while(!user!!.isEmailVerified){
//                        Toast.makeText(        //short time notification
//                            baseContext, "Email not verified",
//                            Toast.LENGTH_SHORT
//                        ).show()
//                        Log.d(TAG, "Email not verified")
//                    }
                    Log.d(TAG, "createUserWithEmail:success")
                    getDetails()
                } else {
                    // If sign in fails, display a message to the user.
                    Log.w(TAG, "createUserWithEmail:failure", task.exception)
                    //short time notification
                    Toast.makeText(baseContext, "Authentication failed.", Toast.LENGTH_SHORT).show()
                }
            }
    }

    private fun sendEmailVerification() {
        // [START send_email_verification]
        val user = auth.currentUser!!
        user.sendEmailVerification()
            .addOnCompleteListener(this) { task ->
                // Email Verification sent
            }
        // [END send_email_verification]
    }

    private fun getDetails() {
        val intent = Intent(this, GetUserDetails::class.java)
        startActivity(intent)
    }

    companion object {
        private const val TAG = "EmailPassword"
    }
}
