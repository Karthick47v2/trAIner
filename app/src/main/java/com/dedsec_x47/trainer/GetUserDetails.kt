package com.dedsec_x47.trainer

import android.content.Intent
import android.os.Bundle
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.google.firebase.firestore.FirebaseFirestore

class GetUserDetails : AppCompatActivity() {

    private val dataBase = FirebaseFirestore.getInstance()

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_get_user_details)

        val submit_button: Button = findViewById(R.id.submit_details)
        submit_button.setOnClickListener {
            val firstnameEt: EditText = findViewById(R.id.first_name)
            val lastnameEt: EditText = findViewById(R.id.last_name)
            val ageEt: EditText = findViewById(R.id.age)
            val genderEt:EditText = findViewById(R.id.gender)

            val firstname: String = firstnameEt.text.toString()
            val lastname: String = lastnameEt.text.toString()
            val age: String = ageEt.text.toString()
            val gender :String = genderEt.text.toString()

            saveDetailsInFireStore(firstname, lastname,age,gender,false,"null","null")
        }
    }

    public fun saveDetailsInFireStore(firstname: String, lastname: String,age : String , gender : String,isfblogin : Boolean , fid :String, profname : String) {
        val user: MutableMap<String, Any> = HashMap()
        user["firstName"] = firstname
        user["lastName"] = lastname
        user["age"] = age
        user["gender"] = gender

        if(isfblogin){
            user["facebookId"] = fid
            user["profileName"] = profname
        }

        dataBase.collection("users")
            .add(user)
            .addOnSuccessListener {
                Toast.makeText(
                    this@GetUserDetails,
                    "Details Saved successfully ",
                    Toast.LENGTH_SHORT
                ).show()
                createAcc()
            }
            .addOnFailureListener {
                Toast.makeText(this@GetUserDetails, "Failed to save Details ", Toast.LENGTH_SHORT)
                    .show()
            }
    }

    //    fun readFireStoreData() {
//        val db = FirebaseFirestore.getInstance()
//        db.collection("users")
//            .get()
//            .addOnCompleteListener {
//
//                val result: StringBuffer = StringBuffer()
//
//                if(it.isSuccessful) {
//                    for(document in it.result!!) {
//                        result.append(document.data.getValue("firstName")).append(" ")
//                            .append(document.data.getValue("lastName")).append("\n\n")
//                    }
//                    textViewResult.setText(result)
//                }
//            }
//    }
    private fun createAcc() {
        val intent = Intent(this, SignUp::class.java)
        startActivity(intent)
        finish()
    }

}


