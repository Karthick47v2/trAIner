package com.dedsec_x47.trainer.homeFragments

import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.provider.MediaStore
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.ImageView
import android.widget.TextView
import androidx.appcompat.app.AppCompatActivity
import androidx.fragment.app.Fragment
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.UserDetails
import com.google.android.material.imageview.ShapeableImageView
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import com.google.firebase.storage.ktx.storage
import java.io.File

class ProfileFragment : Fragment() {
    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {

        val view = inflater.inflate(R.layout.fragment_profile, container, false)
        view.findViewById<TextView>(R.id.tvNameTop).text = UserDetails().readData("Name")
        view.findViewById<TextView>(R.id.tvGetName).text = UserDetails().readData("Name")
        view.findViewById<TextView>(R.id.tvGetGender).text = UserDetails().readData("Gender")
        view.findViewById<TextView>(R.id.tvGetAge).text = UserDetails().readData("Age")
        view.findViewById<TextView>(R.id.tvGetEmail).text = UserDetails().readData("Email")
        view.findViewById<ShapeableImageView>(R.id.savProfileImage).setOnClickListener{
            selectProfileImage()
        }

        val fAuth = Firebase.auth
        val currentuser = fAuth.currentUser
        val storageRef = Firebase.storage.reference
        val imageRef =
            storageRef.child("users").child(currentuser?.email.toString()).child("ProfileImage")
        val localFile = File.createTempFile("ProfileImage", "jpg")

        imageRef.getFile(localFile).addOnSuccessListener {
            view.findViewById<ShapeableImageView>(R.id.savProfileImage).setImageURI(Uri.fromFile(localFile))
        }.addOnFailureListener {

        }
        return view
    }

    private fun selectProfileImage() {
        val openGalleryIntent =
            Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI)
        startActivityForResult(openGalleryIntent, 100)
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, imgdata: Intent?) {
        super.onActivityResult(requestCode, resultCode, imgdata)
        if ((requestCode == 100) && (resultCode == AppCompatActivity.RESULT_OK) && (imgdata != null) && (imgdata.data != null)) {
            val newUserImageUri = imgdata.data!!
            Log.d(" ", "Select Image done")
            UserDetails().saveProfilePic(newUserImageUri)
            (view?.findViewById<ShapeableImageView>(R.id.savProfileImage))?.setImageURI(newUserImageUri)
        }
    }

}