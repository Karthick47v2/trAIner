package com.dedsec_x47.trainer.auth

import android.app.NotificationChannel
import android.app.NotificationManager
import android.content.Context
import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.auth.*
import com.dedsec_x47.trainer.databinding.ActivityMainBinding
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase

var isNewUser = false
var isDetailsSaved = false
var isfacebookLogin = false
class LoginActivity : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth           // create instance of FirebaseAuth
    var isVertificationEmailSent = false
    private lateinit var activityMainBinding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        activityMainBinding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(activityMainBinding.root)
        createNotificationChannel()

        auth = Firebase.auth                         // Initialize Firebase Auth
        auth.addAuthStateListener { auth ->
            //get current user
            val user = auth.currentUser
            Log.d("User Type : ", isNewUser.toString())

            // Check if user is signed in (non-null) and update UI accordingly.
            if (user != null) {                     //User is signed in
                user.reload()
                if (user.isEmailVerified && !isfacebookLogin) {

                    isVertificationEmailSent = false
                    Log.d(" ", "Email Is verified")
                    if (isNewUser) {
                        user.reload()
                        Toast.makeText( baseContext, "Welcome to trAIner", Toast.LENGTH_SHORT
                        ).show()
                        GetUserDetails().saveDetailsInFireStore( newUserImageUri, newUserName,
                            newUserAge, userGender, false, " " )
                        setAlarm()
                    } else {
                        logOut()
                    }

                } else {

                    Log.d(" ", "Email is not verified ")
                    if (!isVertificationEmailSent) {
                        sendEmailVerification()
                    } else {
                        Toast.makeText( baseContext, "Please verify your Email",
                            Toast.LENGTH_SHORT ).show()
                    }
                    auth.signOut()

                }
            } else {

                Log.d(" ", "User Null")
                if (!isVertificationEmailSent) {
                    signin()                         //User is signed out
                }
            }
        }
    }

    private fun sendEmailVerification() {            // send_email_verification
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

    private fun signin() {                                        //function for sign in task
        val intent = Intent(this, SignIn::class.java)//intent Sign in activity
        startActivity(intent)                                     //starts an instance of the Sign in activity
    }

    private fun logOut() {                                          //function for logout
        val intent = Intent(this, LogOut::class.java)//intent MainActivity2
        startActivity(intent)                                       //starts an instance of the MainActivity2
    }

    private fun setAlarm() {                                          //function for logout
        val intent = Intent(this, com.dedsec_x47.trainer.SetAlarm::class.java)//intent MainActivity2
        startActivity(intent)                                       //starts an instance of the MainActivity2
    }

    private fun createNotificationChannel() {
        val name = "trAIner"
        val descriptionText = "remainder"
        val importance = NotificationManager.IMPORTANCE_HIGH
        val channel = NotificationChannel(com.dedsec_x47.trainer.CHANNEL_ID, name, importance).apply {
            description = descriptionText
        }
        // Register the channel with the system
        val notificationManager: NotificationManager =
            getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
        notificationManager.createNotificationChannel(channel)
    }
}