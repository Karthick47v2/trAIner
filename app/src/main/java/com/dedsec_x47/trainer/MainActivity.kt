package com.dedsec_x47.trainer

//import packages
import android.content.Intent
import android.os.Bundle
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.databinding.ActivityMainBinding
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import java.util.*
import android.app.AlarmManager

import android.app.PendingIntent
import android.content.Context


/**
 *  TODO: PASSWORD VALIDITY CHECKING
 *  TODO: EMAIL VERTIFICATION
 */

class MainActivity : AppCompatActivity() {
    // declare private late initializer variables
    // create instance of ActivityMainBinding
    private lateinit var binding: ActivityMainBinding

    // create instance of FirebaseAuth
    private lateinit var auth: FirebaseAuth

//    private val mNotificationTime = Calendar.getInstance().timeInMillis + 5000 //Set after 5 seconds from the current time.
//    private var mNotified = false

    //main function of this activity
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

//        if (!mNotified) {
//            NotificationUtils().setNotification(mNotificationTime, this@MainActivity)
//        }
        setDailyAlarm()
        // Initialize Firebase Auth
        auth = Firebase.auth
        // creates an instance of the binding class for the activity to use.
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)


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
        //intent Sign in activity
        val intent = Intent(this, SignIn::class.java)
        //starts an instance of the Sign in activity
        startActivity(intent)
    }

    //function for go to main task
    private fun logOut() {
        //intent MainActivity2
        val intent = Intent(this, LogOut::class.java)
        //starts an instance of the MainActivity2
        startActivity(intent)
    }

    private fun setDailyAlarm(){
        //we are using alarm manager for the notification
        val alarmManager = getSystemService(Context.ALARM_SERVICE) as AlarmManager
        //this intent will be called when taping the notification
        val notificationIntent = Intent(this, AlarmReceiver::class.java)
        //this pendingIntent will be called by the broadcast receiver
        val broadcast = PendingIntent.getBroadcast(this, 100, notificationIntent, PendingIntent.FLAG_UPDATE_CURRENT)
        val cal = Calendar.getInstance() //getting calender instance

        cal.timeInMillis = System.currentTimeMillis() //setting the time from device

        cal[Calendar.HOUR_OF_DAY] = 19 // cal.set NOT cal.add
        cal[Calendar.MINUTE] = 22
        cal[Calendar.SECOND] = 0
        alarmManager.setRepeating(
            AlarmManager.RTC_WAKEUP,
            cal.timeInMillis,
            AlarmManager.INTERVAL_DAY,
            broadcast
        ) //alarm manager will repeat the notification each day at the set time

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
