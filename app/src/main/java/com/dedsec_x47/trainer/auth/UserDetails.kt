package com.dedsec_x47.trainer.auth

import android.net.Uri
import android.util.Log
import com.dedsec_x47.trainer.R
import com.google.firebase.auth.ktx.auth
import com.google.firebase.firestore.DocumentSnapshot
import com.google.firebase.firestore.SetOptions
import com.google.firebase.firestore.ktx.firestore
import com.google.firebase.ktx.Firebase
import com.google.firebase.messaging.FirebaseMessagingService
import com.google.firebase.storage.ktx.storage
import java.io.File
import java.util.*
import kotlin.collections.ArrayList
import kotlin.collections.HashMap

var isgetStart = true                       //diaplay get start page
var isNewUser = false                       //variable for new user
var isStarting = false                      //variable for first signin
var userNameList = ArrayList<String>()      //all user names
var userNameMap = HashMap<String, String>()
var bv = BooVariable()                      //variable cheak for detail loading
var document: MutableMap<String, Any>? = null    //all details of user
var userProfileImageUri: Uri =
    Uri.parse("android.resource://" + "com.dedsec_x47.trainer" + "/" + R.drawable.no_profile)
var fcm = ""
var newUserName = " "
var newUserAge: Int = 0
var userGender = " "
var challange: DocumentSnapshot? = null
var isChallangeDetailsFetched = BooVariable()

class UserDetails {
    val dataBase = Firebase.firestore
    fun saveDetailsInFireStore(
        name: String, age: Int, gender: String, isFbLogin: Boolean,
        fid: String
    ) {

        val fAuth = Firebase.auth
        val currentUser = fAuth.currentUser

        val userData: MutableMap<String, Any> = HashMap()
        userData["Name"] = name
        userData["Email"] = currentUser?.email.toString()
        userData["Age"] = age
        userData["Gender"] = gender

        userData["Squat"] = 0
        userData["Split Squat"] = 0
        userData["Leg raise"] = 0
        userData["Sit Up"] = 0
        userData["Chin Up"] = 0
        userData["Push up"] = 0
        userData["Plank"] = 0
        userData["Hammer Curl"] = 0
        userData["Dead lift"] = 0
        userData["Bench press Barbell"] = 0
        userData["Bench press Dumbbell"] = 0
        userData["Shoulder Press Barbell"] = 0
        userData["Shoulder Press Dumbbell"] = 0


//        if (isFbLogin) {
//            userData["Facebook Id"] = fid
//            userData["Profile Name"] = name
//        } else {
//            userData["Name"] = name
//            userData["Email"] = currentUser.email.toString()
//        }

        dataBase.collection("users").document(currentUser?.email.toString()).set(userData,
            SetOptions.merge())
            .addOnSuccessListener {
                Log.d("Save Details", "save Details Successfully ")
                UserDetails().loadFireStoreData()
            }.addOnFailureListener {
                Log.d("Save Details", "Failed to save Details ")
            }
    }

    fun loadFireStoreData() {
        Log.d("Tag", "Load starting")
        val fAuth = Firebase.auth
        val currentUser = fAuth.currentUser
        dataBase.collection("users").document(currentUser?.email.toString())
            .get()
            .addOnCompleteListener { task ->

                if (task.isSuccessful) {
                    document = task.result.data

                    if (isStarting) {
                        if (!isNewUser) {
                            getimagefromstorage()
                        } else {
                            isStarting = false
                            bv.set(true)
                        }
                    }
                    Log.d("TAG", "Cached document data: $document")
                } else {
                    Log.d("TAG", "Cached get failed: ", task.exception)
                }
            }
    }

    fun readData(field: String): String {
        Log.d("TAG", field + "data: ${document?.get(field).toString()}")
        return document?.get(field).toString()
    }

    fun updateLocalDocument(userData: MutableMap<String, Any> = HashMap()) {
        for ((key, value) in userData.entries)
            document?.set(key, value)
    }

    fun updateFireStoreData(userData: MutableMap<String, Any> = HashMap()) {
        val fAuth = Firebase.auth
        val currentUser = fAuth.currentUser

        dataBase.collection("users").document(currentUser?.email.toString())
            .update(userData)
            .addOnSuccessListener {
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
        }.addOnFailureListener {
            Log.d("Save Details", "Image Upload Failure ")
        }
    }

    fun returnMap(): HashMap<String, String> {
        return userNameMap
    }

    fun getAlluserNames() {
        dataBase.collection("users")
            .get()
            .addOnSuccessListener { result ->
                for (document in result) {
                    userNameMap[document["Name"].toString()] = document["Email"].toString()
                    //userNameList.add(document["Name"].toString().lowercase(Locale.getDefault()))
                    //Log.d("TAG", userNameList.last())
                }
            }
            .addOnFailureListener { exception ->
                Log.d("TAG", "Error getting documents: ", exception)
            }
    }

    fun createChallange(challengeHashMap: MutableMap<String, Any>) {

        dataBase.collection("cloud").document( challengeHashMap["To"].toString()).set(challengeHashMap)
            .addOnSuccessListener {
                Log.d("TAG", "Challange Sucess ")
            }
            .addOnFailureListener { exception ->
                Log.d("TAG", "Challange Sucess ", exception)
            }
    }

    fun getChallangeDetails(){
        val fAuth = Firebase.auth
        val currentUser = fAuth.currentUser
        dataBase.collection("cloud").document(currentUser?.email.toString())
            .get()
            .addOnCompleteListener { task ->
                if (task.isSuccessful){
                    challange = task.result
                    Log.d("TAG","data: $challange")
                    isChallangeDetailsFetched.set(true)
                }
            }
            .addOnFailureListener{
                Log.d("TAG", "Error getting challenge: ", it)
            }
    }
}

fun getimagefromstorage() {
    val fAuth = Firebase.auth
    val currentuser = fAuth.currentUser
    val storageRef = Firebase.storage.reference
    val imageref =
        storageRef.child("users").child(currentuser?.email.toString()).child("ProfileImage")
    val localFile = File.createTempFile("ProfileImage", "jpg")

    imageref.getFile(localFile).addOnSuccessListener {
        setUserImage(Uri.fromFile(localFile))
        if (isStarting) {
            isStarting = false
            bv.set(true)
        }
    }.addOnFailureListener {
    }
}

fun getUserImage(): Uri {
    return userProfileImageUri
}

fun setUserImage(img: Uri) {
    userProfileImageUri = img
}

class BooVariable {
    var isBoo = false
    fun set(boo: Boolean) {
        isBoo = boo
        if (listener != null)
            listener!!.onChange()
    }

    fun get(): Boolean {
        return isBoo
    }

    var listener: ChangeListener? = null

    interface ChangeListener {
        fun onChange()
    }
}



