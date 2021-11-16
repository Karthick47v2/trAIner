package com.dedsec_x47.trainer

import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.database.DatabaseReference
import com.google.firebase.database.ktx.database
import com.google.firebase.ktx.Firebase
import com.google.firebase.storage.StorageReference

class GetUserDetails : AppCompatActivity() {

    // create instance of FirebaseAuth
    private lateinit var auth: FirebaseAuth
    private lateinit var databaseReference: DatabaseReference
    private lateinit var storageReference: StorageReference
    private lateinit var imageUri: Uri

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)

        setContentView(R.layout.activity_get_user_details)
        // Initialize Firebase Auth
        auth = Firebase.auth
        val uid = auth.currentUser?.uid
        databaseReference =
            Firebase.database.getReference("Users")

        val submit_button: Button = findViewById(R.id.submit_details)
        submit_button.setOnClickListener {
            val firstnameEt: EditText = findViewById(R.id.first_name)
            val lastnameEt: EditText = findViewById(R.id.last_name)
            val ageEt: EditText = findViewById(R.id.age)

            val firstname: String = firstnameEt.text.toString()
            val lastname: String = lastnameEt.text.toString()
            val age: String = ageEt.text.toString()

            val user = User(firstname, lastname, age)
            if (uid != null) {

                databaseReference.child(uid).setValue(user).addOnCompleteListener{

                    if (it.isSuccessful) {

//                        uploadProfilePic()
                        Toast.makeText(
                            baseContext,
                            "Successfully created user profile.",
                            Toast.LENGTH_SHORT
                        ).show()
                        val intent = Intent(this, MainActivity::class.java)
                        startActivity(intent)
                    } else {
                        Toast.makeText(
                            baseContext,
                            "Failed to create user profile",
                            Toast.LENGTH_SHORT
                        ).show()
                    }
                }
            }
        }

    }
/*
    private fun uploadProfilePic() {
        imageUri = Uri.parse("android.resource://$packageName/${R.drawable.profile}")
        storageReference =
            FirebaseStorage.getInstance().getReference("Users/" + auth.currentUser?.uid)
        storageReference.putFile(imageUri).addOnSuccessListener {
            Toast.makeText(
                baseContext,
                "Profile Successfully updated.",
                Toast.LENGTH_SHORT
            ).show()
        }.addOnFailureListener {
            Toast.makeText(
                baseContext,
                "Failed to upload the image",
                Toast.LENGTH_SHORT
            ).show()
        }

    }*/

    data class User(
        val firstname: String? = null,
        val lastname: String? = null,
        val age: String? = null
    )

}