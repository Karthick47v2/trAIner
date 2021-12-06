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
import androidx.core.net.toUri
import androidx.fragment.app.Fragment
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.UserDetails
import com.dedsec_x47.trainer.getUserImage
import com.dedsec_x47.trainer.setUserImage
import com.google.android.material.imageview.ShapeableImageView
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import com.google.firebase.storage.ktx.storage
import java.io.ByteArrayOutputStream
import java.io.File
import java.util.*

class ProfileFragment : Fragment() {
    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {

        val view = inflater.inflate(R.layout.fragment_profile, container, false)
        view.findViewById<ShapeableImageView>(R.id.savProfileImage).setImageURI(getUserImage())

        view.findViewById<TextView>(R.id.tvNameTop).text = UserDetails().readData("Name")
        view.findViewById<TextView>(R.id.tvGetName).text = UserDetails().readData("Name")
        view.findViewById<TextView>(R.id.tvGetGender).text = UserDetails().readData("Gender")
        view.findViewById<TextView>(R.id.tvGetAge).text = UserDetails().readData("Age")
        view.findViewById<TextView>(R.id.tvGetEmail).text = UserDetails().readData("Email")
        view.findViewById<ShapeableImageView>(R.id.savProfileImage).setOnClickListener{
            selectProfileImage()
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
            val userProfileImageUri = imgdata.data!!
            Log.d(" ", "Select Image done")
            setUserImage(userProfileImageUri)
            UserDetails().saveProfilePic(userProfileImageUri)
            (view?.findViewById<ShapeableImageView>(R.id.savProfileImage))?.setImageURI(userProfileImageUri)
        }
    }

}