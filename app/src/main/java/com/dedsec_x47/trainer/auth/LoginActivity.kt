package com.dedsec_x47.trainer.auth

import android.app.NotificationChannel
import android.app.NotificationManager
import android.content.Context
import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.HomeScreen
import com.facebook.AccessToken
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase

var isNewUser = false


class LoginActivity : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth
    var isVertificationEmailSent = false

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        createNotificationChannel()

        auth = Firebase.auth
        auth.addAuthStateListener { auth ->

            val user = auth.currentUser
            Log.d("User Type : ", isNewUser.toString())

            if (user != null) {
                user.reload()

                val accessToken = AccessToken.getCurrentAccessToken()
                val isLoggedIn = (accessToken != null && !accessToken.isExpired)
                Log.d("fblog", "" + isLoggedIn)

                if (!isLoggedIn) {
                    if (user.isEmailVerified) {
                        isVertificationEmailSent = false
                        Log.d(" ", "Email Is verified")
                        if (isNewUser) {
                            UserDetails().saveDetailsInFireStore(
                                newUserName, newUserAge, userGender,
                                false, " "
                            )
                        } else {
                            UserDetails().loadFireStoreData()
                        }
                        home()
                    } else {

                        Log.d(" ", "Email is not verified ")
                        if (!isVertificationEmailSent) {
                            sendEmailVerification()
                        } else {
                            Toast.makeText(
                                baseContext, "Please verify your Email",
                                Toast.LENGTH_SHORT
                            ).show()
                        }
                        auth.signOut()
                    }
                } else {
                    home()
                }
            } else {
                Log.d(" ", "User Null")
                if (!isVertificationEmailSent) {
                    signin()
                }
            }
        }
    }

    private fun sendEmailVerification() {
        val user = auth.currentUser
        user!!.sendEmailVerification()
            .addOnCompleteListener(this) { task ->
                isVertificationEmailSent = true
                Toast.makeText(        //short time notification
                    baseContext, "We have Send a verification Email : Please verify",
                    Toast.LENGTH_SHORT
                ).show()
            }
            .addOnFailureListener(this) {
                Toast.makeText(        //short time notification
                    baseContext, "Verification Email sending Failed",
                    Toast.LENGTH_SHORT
                ).show()
            }
    }

    private fun signin() {
        val intent = Intent(this, SignIn::class.java)
        startActivity(intent)
    }

    private fun home() {
        val intent = Intent(this, HomeScreen::class.java)
        startActivity(intent)
    }

    private fun setAlarm() {
        val intent = Intent(this, com.dedsec_x47.trainer.SetAlarm::class.java)
        startActivity(intent)
    }

    private fun createNotificationChannel() {
        val name = "trAIner"
        val descriptionText = "remainder"
        val importance = NotificationManager.IMPORTANCE_HIGH
        val channel =
            NotificationChannel(com.dedsec_x47.trainer.CHANNEL_ID, name, importance).apply {
                description = descriptionText
            }
        val notificationManager: NotificationManager =
            getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
        notificationManager.createNotificationChannel(channel)
    }
}
