package com.dedsec_x47.trainer

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
        val sign_up_button: Button = findViewById(R.id.btnCreate)
        sign_up_button.setOnClickListener {
            val emailEt: EditText = findViewById(R.id.textInputEditTextNewEmail)
            val passwordEt: EditText = findViewById(R.id.textInputEditTextNewPassword)

            val email: String = emailEt.text.toString()
            val password: String = passwordEt.text.toString()

//            if (checkPasswordValidity()) {
                createAccount(email, password)
//            }
        }
    }

//    private fun checkPasswordValidity(): Boolean {
//        return true;
//    }

    private fun sendEmailVerification() {
        // [START send_email_verification]
        val user = auth.currentUser!!
        user.sendEmailVerification()
            .addOnCompleteListener(this) { task ->
                Toast.makeText(        //short time notification
                    baseContext, "Verification Email is sent",
                    Toast.LENGTH_SHORT
                ).show()
                //auth.signOut()
                updateUI()
            }
            .addOnFailureListener(this){
                Toast.makeText(        //short time notification
                    baseContext, "Verification Email sending Failed",
                    Toast.LENGTH_SHORT
                ).show()
            }
        // [END send_email_verification]
    }

    private fun createAccount(email: String, password: String) {
        // [START create_user_with_email]
        auth.createUserWithEmailAndPassword(email, password)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    //sendEmailVerification()
                    updateUI()
                    Log.d(TAG, "createUserWithEmail:success")

                } else {
                    // If sign in fails, display a message to the user.
                    Log.w(TAG, "createUserWithEmail:failure", task.exception)
                    //short time notification
                    Toast.makeText(baseContext, "Authentication failed.", Toast.LENGTH_SHORT).show()
                }
            }
    }

    private fun updateUI() {
        val intent = Intent(this, MainActivity::class.java)
        startActivity(intent)
        finish()
    }

    companion object {
        private const val TAG = "EmailPassword"
    }
}
