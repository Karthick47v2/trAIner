package com.dedsec_x47.trainer.auth

import android.net.Uri
import android.util.Log
import com.google.firebase.auth.ktx.auth
import com.google.firebase.firestore.DocumentSnapshot
import com.google.firebase.firestore.ktx.firestore
import com.google.firebase.ktx.Firebase
import com.google.firebase.storage.ktx.storage

lateinit var document : DocumentSnapshot

class GetUserDetails {

    fun saveDetailsInFireStore(
        imageUri: Uri, name: String, age: Int, gender: String,
        isFbLogin: Boolean, fid: String
    ) {

        val fAuth = Firebase.auth
        val currentUserId = fAuth.currentUser!!.uid
        val dataBase = Firebase.firestore
        val storageRef = Firebase.storage.reference

        Log.d("Save Details", currentUserId)
        val imageRef = storageRef.child("users").child(currentUserId).child("ProfileImage")

        imageRef.putFile(imageUri).addOnCompleteListener {
            Log.d("Save Details", "Image Uploaded Successfully ")

            val userData: MutableMap<String, Any> = HashMap()
            userData["Profile Image Ref"] = imageRef.downloadUrl.toString()
            userData["Age"] = age
            userData["Gender"] = gender

            val loss: MutableMap<String, Any> = HashMap()
            loss["Squat"] = 0
            loss["Split Squat"] =0
            loss["Leg raise"] =0
            loss["Sit up"] =0
            loss["Chin up"] =0
            loss["Push up"] =0
            loss["Plank"] =0
            userData["Loss"] = loss

            val Strength:MutableMap<String, Any> = HashMap()
            Strength["bench press"]  = hashMapOf(
                "Barbell" to 0,
                "Bumbell" to 0
            )
            Strength["Shoulder Press"] = hashMapOf(
                "Barbell" to 0,
                "Bumbell" to 0
            )
            Strength["SitUp"] = 0
            Strength["Hammer Curl"] =0
            Strength["Deadlift"] = 0
            Strength["Chin up"] = 0
            Strength["Push up"] = 0
            userData["Strength"] = Strength


            if (isFbLogin) {
                userData["Facebook Id"] = fid
                userData["Profile Name"] = name
            } else {
                userData["Name"] = name
            }

            dataBase.collection("users").document(currentUserId).set(userData)
                .addOnSuccessListener {
                    isDetailsSaved = true
                    Log.d("Save Details", "save Details Successfully ")
                }.addOnFailureListener {
                Log.d("Save Details", "Failed to save Details ")
            }

        }.addOnFailureListener {
            Log.d("Save Details", "Image Upload Failure ")
        }

    }

    fun loadFireStoreData() {
        val dataBase = Firebase.firestore
        val fAuth = Firebase.auth
        val currentUserId = fAuth.currentUser!!.uid

        dataBase.collection("users").document(currentUserId)
            .get()
            .addOnCompleteListener {task ->

                if (task.isSuccessful) {
                     document = task.result                              //document is global variable
                    Log.d("TAG", "Cached document data: ${document.data}")
                } else {
                    Log.d("TAG", "Cached get failed: ", task.exception)
                }
            }
    }

    fun readData( field:String): String{
        Log.d("TAG", field+"data: ${document.get(field).toString()}")
        return document.get(field).toString()
    }

    fun updateFireStoreData(field:String , value :Int){
        val fAuth = Firebase.auth
        val currentUserId = fAuth.currentUser!!.uid
        val dataBase = Firebase.firestore

        dataBase.collection("users").document(currentUserId)
            .update(mapOf(
                field to value
            ))
    }

}
