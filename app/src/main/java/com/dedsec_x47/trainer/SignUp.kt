package com.dedsec_x47.trainer

import android.content.ContentValues.TAG
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.Button
import android.widget.Toast
//import android.R

import android.content.Intent
import android.text.TextUtils
import android.widget.EditText
import com.google.android.gms.tasks.OnCompleteListener

import com.google.firebase.auth.FirebaseUser
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import com.google.firebase.auth.FirebaseAuth


class SignUp : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_signup)
        // Initialize Firebase Auth
        auth = Firebase.auth

        val sign_up_button: Button = findViewById(R.id.sign_up_button)
        sign_up_button.setOnClickListener {
            val emailEt: EditText = findViewById(R.id.sign_up_email)
            val passwordEt: EditText = findViewById(R.id.sign_up_password)

            val email: String = emailEt.text.toString()
            val password: String = passwordEt.text.toString()

            createAccount(email, password)
            val intent = Intent(this, MainActivity::class.java)
            startActivity(intent)
        }
    }

    private fun createAccount(email: String, password: String) {
        // [START create_user_with_email]
        auth.createUserWithEmailAndPassword(email, password)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    // Sign in success, update UI with the signed-in user's information
                        Log.d(TAG, "createUserWithEmail:success")
                        val user = auth.currentUser
//                    Toast.makeText(
//                        baseContext, "Authentication Sucess",
//                        Toast.LENGTH_SHORT
//                    ).show()
                        //updateUI(user)

                    } else {
                        // If sign in fails, display a message to the user.
                        Log.w(TAG, "createUserWithEmail:failure", task.exception)
                        Toast.makeText(
                            baseContext, "Authentication failed.",
                            Toast.LENGTH_SHORT
                        ).show()
                        //updateUI(null)
                    }
            }
    // [END create_user_with_email]
    }

//    private fun signIn(email: String, password: String) {
//        // [START sign_in_with_email]
//        auth.signInWithEmailAndPassword(email, password)
//            .addOnCompleteListener(this) { task ->
//                if (task.isSuccessful) {
//                    // Sign in success, update UI with the signed-in user's information
//                    Log.d(TAG, "signInWithEmail:success")
//                    val user = auth.currentUser
//                    updateUI(user)
//                } else {
//                    // If sign in fails, display a message to the user.
//                    Log.w(TAG, "signInWithEmail:failure", task.exception)
//                    Toast.makeText(baseContext, "Authentication failed.",
//                        Toast.LENGTH_SHORT).show()
//                    updateUI(null)
//                }
//            }
//        // [END sign_in_with_email]
//    }
//
//    private fun sendEmailVerification() {
//        // [START send_email_verification]
//        val user = auth.currentUser!!
//        user.sendEmailVerification()
//            .addOnCompleteListener(this) { task ->
//                // Email Verification sent
//            }
//        // [END send_email_verification]
//    }
//
//    private fun updateUI(user: FirebaseUser?) {
//    val intent = Intent(this, SignIn::class.java)
//    startActivity(intent)
//    }
//
//    companion object {
//        private const val TAG = "EmailPassword"
//    }

}
