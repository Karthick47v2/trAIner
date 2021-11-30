package com.dedsec_x47.trainer.auth

import android.net.Uri
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.databinding.ActivityMain2Binding
import com.facebook.AccessToken
import com.facebook.login.LoginManager
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import com.google.firebase.storage.ktx.storage
import java.io.File

class LogOut : AppCompatActivity() {

    private lateinit var fauth: FirebaseAuth
    lateinit var activityMain2Binding: ActivityMain2Binding
    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        activityMain2Binding = ActivityMain2Binding.inflate(layoutInflater)
        setContentView(activityMain2Binding.root)

        fauth = Firebase.auth
        val currentUserId = fauth.currentUser!!.uid
        val storageRef = Firebase.storage.reference
        GetUserDetails().loadFireStoreData()

        activityMain2Binding.signOutButton.setOnClickListener {
            val imageRef = storageRef.child("users").child(currentUserId).child("ProfileImage")
            val localFile = File.createTempFile("ProfileImage", "jpg")

            imageRef.getFile(localFile).addOnSuccessListener {
                // Local temp file has been created
                activityMain2Binding.profileImage.setImageURI(Uri.fromFile(localFile))
            }.addOnFailureListener {
                // Handle any errors
            }

            GetUserDetails().readData("Loss.Plank")
            GetUserDetails().readData("Name")
            GetUserDetails().readData("Strength.Chin up")
            GetUserDetails().readData("Strength.Shoulder Press.Barbell")
            GetUserDetails().readData("Strength.bench press.Barbell")

            GetUserDetails().updateFireStoreData("Strength.bench press.Barbell",1000)

//            activitySignupBinding.profileImage.
//            auth = Firebase.auth
//            auth.signOut()
//            disconnectFromFacebook()
        }
    }

    private fun disconnectFromFacebook() {
        if (AccessToken.getCurrentAccessToken() != null) {
            LoginManager.getInstance().logOut()
        }
    }

}