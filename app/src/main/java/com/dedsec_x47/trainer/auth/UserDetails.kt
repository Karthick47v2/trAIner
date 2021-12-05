package com.dedsec_x47.trainer.auth

import android.net.Uri
import android.util.Log
import com.google.firebase.auth.ktx.auth
import com.google.firebase.firestore.DocumentSnapshot
import com.google.firebase.firestore.ktx.firestore
import com.google.firebase.ktx.Firebase
import com.google.firebase.storage.ktx.storage
import java.util.*
import kotlin.collections.ArrayList
import kotlin.collections.HashMap

lateinit var document: DocumentSnapshot
public var userNameList = ArrayList<String>()
var isDetailsLoaded = false

class UserDetails {

    fun saveDetailsInFireStore(
        name: String, age: Int, gender: String, isFbLogin: Boolean,
        fid: String
    ) {

        val fAuth = Firebase.auth
        val currentUser = fAuth.currentUser
        val currentUserId = currentUser!!.uid
        val dataBase = Firebase.firestore

        val userData: MutableMap<String, Any> = HashMap()
        userData["Name"] = name
        userData["Email"] = currentUser.email.toString()
        userData["Age"] = age
        userData["Gender"] = gender
        val loss: MutableMap<String, Any> = HashMap()
        loss["Squat"] = 0
        loss["Split Squat"] = 0
        loss["Leg raise"] = 0
        loss["Sit up"] = 0
        loss["Chin up"] = 0
        loss["Push up"] = 0
        loss["Plank"] = 0
        userData["Loss"] = loss

        val Strength: MutableMap<String, Any> = HashMap()
        Strength["bench press"] = hashMapOf(
            "Barbell" to 0,
            "Bumbell" to 0
        )
        Strength["Shoulder Press"] = hashMapOf(
            "Barbell" to 0,
            "Bumbell" to 0
        )
        Strength["SitUp"] = 0
        Strength["Hammer Curl"] = 0
        Strength["Deadlift"] = 0
        Strength["Chin up"] = 0
        Strength["Push up"] = 0
        userData["Strength"] = Strength

//        if (isFbLogin) {
//            userData["Facebook Id"] = fid
//            userData["Profile Name"] = name
//        } else {
//            userData["Name"] = name
//            userData["Email"] = currentUser.email.toString()
//        }


        dataBase.collection("users").document(currentUser.email.toString()).set(userData)
            .addOnSuccessListener {
                Log.d("Save Details", "save Details Successfully ")
                UserDetails().loadFireStoreData()
            }.addOnFailureListener {
                Log.d("Save Details", "Failed to save Details ")
            }
    }

    fun loadFireStoreData() {
        Log.d("Tag","Load starting")
        val dataBase = Firebase.firestore
        val fAuth = Firebase.auth
        val currentUser = fAuth.currentUser
        dataBase.collection("users").document(currentUser?.email.toString())
            .get()
            .addOnCompleteListener { task ->

                if (task.isSuccessful) {
                    isDetailsLoaded = true
                    document =
                        task.result                              //document is global variable
                    Log.d("TAG", "Cached document data: ${document.data}")
                } else {
                    Log.d("TAG", "Cached get failed: ", task.exception)
                }
            }
    }

    fun readData(field: String): String {
        Log.d("TAG", field + "data: ${document.get(field).toString()}")
        return document.get(field).toString()
    }

    fun updateFireStoreData(field: String, value: Any) {
        val fAuth = Firebase.auth
        val currentUser = fAuth.currentUser
        val dataBase = Firebase.firestore

        dataBase.collection("users").document(currentUser?.email.toString())
            .update(
                mapOf(
                    field to value
                )
            )
            .addOnSuccessListener {
                loadFireStoreData()
            }
    }

    fun saveProfilePic(imageUri: Uri) {
        val fAuth = Firebase.auth
        val currentUser = fAuth.currentUser
        val storageRef = Firebase.storage.reference

        val imageRef =
            storageRef.child("users").child(currentUser?.email.toString()).child("ProfileImage")
        imageRef.putFile(imageUri).addOnCompleteListener {
            Log.d("Save Details", "Image Uploaded Successfully ")
//            storageRef.child("users/" + currentUser?.email.toString() + "/ProfileImage").downloadUrl.addOnSuccessListener {
//                //updateFireStoreData("Profile Pic Uri", it.toString())
//            }.addOnFailureListener {
//                // Handle any errors
//            }
        }.addOnFailureListener {
            Log.d("Save Details", "Image Upload Failure ")
        }
    }

    fun returnList(): ArrayList<String> {
        return userNameList
    }

    fun getAlluserNames() {
        val dataBase = Firebase.firestore
        dataBase.collection("users")
            .get()
            .addOnSuccessListener { result ->
                for (document in result) {
                    userNameList.add(document["Name"].toString().lowercase(Locale.getDefault()))
                    Log.d("TAG", userNameList.last())
                }
            }
            .addOnFailureListener { exception ->
                Log.d("TAG", "Error getting documents: ", exception)
            }
    }

    fun createChallange(challengeHashMap: MutableMap<String, Any>) {
        val dataBase = Firebase.firestore
        val userName = readData("Name")

        dataBase.collection("cloud").document(userName).set(challengeHashMap)
            .addOnSuccessListener {
                Log.d("TAG", "Challange Sucess ")
            }
            .addOnFailureListener { exception ->
                Log.d("TAG", "Challange Sucess ", exception)
            }
    }

}

