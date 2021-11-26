package com.dedsec_x47.trainer

import android.app.AlarmManager
import android.app.NotificationChannel
import android.app.NotificationManager
import android.app.PendingIntent
import android.content.Context
import android.content.Intent
import android.os.Build
import android.os.Bundle
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import androidx.core.content.ContextCompat
import com.dedsec_x47.trainer.databinding.ActivityMainBinding
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import java.util.*


/**
 *  TODO: PASSWORD VALIDITY CHECKING
 *  TODO: EMAIL VERTIFICATION
 */

class MainActivity : AppCompatActivity() {

    /*private lateinit var binding: ActivityMainBinding // create instance of ActivityMainBinding*/
    private lateinit var auth: FirebaseAuth           // create instance of FirebaseAuth

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        createNotificationChannel()

        auth = Firebase.auth    // Initialize Firebase Auth
        /*binding = ActivityMainBinding.inflate(layoutInflater)*/
        setContentView(R.layout.activity_main)

        // Example of a call to a native method
        //binding.sampleText.text = stringFromJNI()
        auth.addAuthStateListener { auth ->
            //get current user
            val user = auth.currentUser
            // Check if user is signed in (non-null) and update UI accordingly.
            if (user != null) {
//                if (user.isEmailVerified) {
                // User is signed in

                logOut()
//                } else {
//                    verifyEmail()
//                }
            } else {
                //User is signed out
                signin()
            }
        }
    }

    private fun verifyEmail() {
        val user = auth.currentUser
        while (!user!!.isEmailVerified) {
            Toast.makeText(        //short time notification
                baseContext, "Email not verified",
                Toast.LENGTH_LONG
            ).show()
        }
//        val intent = Intent(this, MainActivity::class.java)
//        //starts an instance of the Sign in activity
//        startActivity(intent)
    }

    //function for sign in task
    private fun signin() {
        val intent = Intent(this, SignIn::class.java)//intent Sign in activity
        startActivity(intent)                                     //starts an instance of the Sign in activity
    }

    //function for go to main task
    private fun logOut() {
        val intent = Intent(this, SetAlarm::class.java)//intent MainActivity2
        startActivity(intent)                                     //starts an instance of the MainActivity2
    }



    private fun createNotificationChannel(){
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            val name = "trAIner"
            val descriptionText = "remainder"
            val importance = NotificationManager.IMPORTANCE_HIGH
            val channel = NotificationChannel(CHANNEL_ID, name, importance).apply {
                description = descriptionText
            }
            // Register the channel with the system
            val notificationManager: NotificationManager =
                getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
            notificationManager.createNotificationChannel(channel)
        }
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
