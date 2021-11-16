package com.dedsec_x47.trainer

//import packages
import android.content.Intent
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.databinding.ActivityMainBinding
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase

/** TODO: FB AUTHENTICATION
 *  TODO: PASSWORD VALIDITY CHECKING
 *  TODO: EMAIL VERTIFICATION
 */

class MainActivity : AppCompatActivity() {
    // declare private late initializer variables
    // create instance of ActivityMainBinding
    private lateinit var binding: ActivityMainBinding

    // create instance of FirebaseAuth
    private lateinit var auth: FirebaseAuth


    //main function of this activity
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

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
                // User is signed in
                gotask()
            } else {
                //User is signed out
                signin()
            }
        }
    }

    //function for sign in task
    private fun signin() {
        //intent Sign in activity
        val intent = Intent(this, SignIn::class.java)
        //starts an instance of the Sign in activity
        startActivity(intent)
    }

    //function for go to main task
    private fun gotask() {
        //intent MainActivity2
        val intent = Intent(this, MainActivity2::class.java)
        //starts an instance of the MainActivity2
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