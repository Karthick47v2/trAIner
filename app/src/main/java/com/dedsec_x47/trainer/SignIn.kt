package com.dedsec_x47.trainer

import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.bumptech.glide.Glide
import com.dedsec_x47.trainer.databinding.ActivitySignInBinding
import com.facebook.*
import com.facebook.internal.ImageRequest
import com.facebook.login.LoginResult
import com.facebook.login.widget.LoginButton
import com.google.firebase.auth.FacebookAuthProvider
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase


class SignIn : AppCompatActivity() {
    // declare private late initializer variables
    // create instance of FirebaseAuth
    private lateinit var auth: FirebaseAuth
    private lateinit var callbackManager: CallbackManager
    private lateinit var buttonFacebookLogin: LoginButton
    private lateinit var binding: ActivitySignInBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        //set activity sign in layout
        binding = ActivitySignInBinding.inflate(layoutInflater)
        setContentView(binding.root)

        //setContentView(R.layout.activity_sign_in)
        auth = Firebase.auth
        callbackManager = CallbackManager.Factory.create()

        buttonFacebookLogin = findViewById(R.id.fb_login_button)
        buttonFacebookLogin.setReadPermissions(listOf("email", "public_profile"))

        buttonFacebookLogin.setOnClickListener {
            fbSignIn()
        }

        //when sign in button tapped execute sign in task
        val sign_in_button: Button = findViewById(R.id.sign_in_button)
        sign_in_button.setOnClickListener {
            // Initialize Firebase Auth

            val emailEt: EditText = findViewById(R.id.sign_in_email)
            val passwordEt: EditText = findViewById(R.id.sign_in_password)

            val email: String = emailEt.text.toString()
            val password: String = passwordEt.text.toString()

            emailloginaccount(email, password)
        }

        val sign_up_button: Button = findViewById(R.id.sign_up_button)
        sign_up_button.setOnClickListener {
            getDetails()
        }
    }

    private fun fbSignIn() {
        buttonFacebookLogin.registerCallback(callbackManager,
            object : FacebookCallback<LoginResult> {

                override fun onSuccess(result: LoginResult) {
                    Log.d(TAG, "facebook:onSuccess:$result")
                    handleFacebookAccessToken(result.accessToken)
                    getFacebookData(result.accessToken)
                    //updateUI()
                }

                override fun onCancel() {
                    Log.d(TAG, "facebook:onCancel")
                }

                override fun onError(error: FacebookException) {
                    Log.d(TAG, "facebook:onError", error)
                }
            })
    }

/*
     private fun getFacebookData() {
         val profile = Profile.getCurrentProfile()  //By Profile Class

         if (profile != null) {
              val facebookid = profile.id.toString()
              val fname = profile.firstName.toString()
              val lname = profile.lastName.toString()
              val fullname = profile.name.toString()
              val profileimage = profile.getProfilePictureUri(400, 400).toString()
 //            Glide.with(this)
 //            .load(profileimage)
 //            .into()
             val request =
                 GraphRequest.newMeRequest(AccessToken.getCurrentAccessToken()) { obj, response ->
                     try {
                         var emailid = obj!!.getString("email")
                         val gender = obj.getString("gender")
                         val age = obj.getString("age")
                         val profilename = obj.getString("name")
                         val fbid =
                             obj.getLong("id") //use this for logout
                         val saveDetail : GetUserDetails = GetUserDetails()
                         GetUserDetails().saveDetailsInFireStore("fname", "lname",age,gender,true,"facebookid", profilename)
                     } catch (e: JSONException) {
                         e.printStackTrace()
                     }
                 }
             request.executeAsync()
 //        }
 //        else{
 //            Log.d(TAG_FB, "facebook save fail")
 //        }
     }
*/


    private fun getFacebookData(accessToken: AccessToken?) {
        val request = GraphRequest.newMeRequest(accessToken) { obj, response ->
            val fbid = obj?.getLong("id")

            //val avatar = ImageRequest.getProfilePictureUri(fbid.toString(), 200, 200).toString()
            val avatar = "https://graph.facebook.com/me/picture?access_token=${accessToken.toString()}"
            Glide.with(this)
                .load(avatar)
                .into(binding.profileImage)

            val name :String = obj?.getString("name").toString()
            val emailid = obj!!.getString("email")
            val gender = obj.getString("gender")
            val birthday = obj.getString("birthday")
            val profilename = obj.getString("name")

            val saveDetail: GetUserDetails = GetUserDetails()
            saveDetail.saveDetailsInFireStore(
                name,
                "lname",
                "0",
                gender,
                true,
                "facebookid",
                profilename
            )
//            val profilePic =
//                "https://graph.facebook.com/${obj?.getString("id")}/picture?width=200&height=200"
        }

        val parameters = Bundle()
        parameters.putString("fields", "id,name,email,birthday,gender,age_range")
        request.parameters = parameters
        request.executeAsync()
    }

    private fun emailloginaccount(email: String, password: String) {
        auth.signInWithEmailAndPassword(email, password)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    // Sign in success, update UI with the signed-in user's information
                    Log.d(TAG, "signInWithEmail:success")
                    val user = auth.currentUser
                    updateUI()

                } else {
                    // If sign in fails, display a message to the user.
                    Log.w(TAG, "signInWithEmail:failure", task.exception)
                    Toast.makeText(
                        baseContext, "Authentication failed.",
                        Toast.LENGTH_SHORT
                    ).show()
                }
            }
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)

        // Pass the activity result back to the Facebook SDK
        callbackManager.onActivityResult(requestCode, resultCode, data)
    }

    private fun handleFacebookAccessToken(token: AccessToken?) {
        Log.d(TAG, "handleFacebookAccessToken:$token")

        val credential = FacebookAuthProvider.getCredential(token!!.token)
        auth.signInWithCredential(credential)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    // Sign in success, update UI with the signed-in user's information
                    Log.d(TAG_FB, "signInWithCredential:success")
                    //val user = auth.currentUser
                } else {
                    // If sign in fails, display a message to the user.
                    Log.w(TAG_FB, "signInWithCredential:failure", task.exception)
                    Toast.makeText(this, "Authentication failed.", Toast.LENGTH_SHORT).show()
                }
            }
    }

    companion object {
        private const val TAG = "EmailPassword"
        private const val TAG_FB = "FacebookLogin"
    }

    private fun updateUI() {
        val intent = Intent(this, MainActivity::class.java)
        startActivity(intent)
    }

    private fun getDetails() {
        val intent = Intent(this, GetUserDetails::class.java)
        startActivity(intent)
    }


}


//    val profile = Profile.getCurrentProfile()
//    val avatar = ImageRequest.getProfilePictureUri(profile?.id, 200, 200).toString()
//
//    val graphRequest = GraphRequest.newMeRequest(result?.accessToken) {
//        'o', response ->
//        getFacebookData('o')
//    }

//    private fun getFacebookData(obj: JSONObject?) {
//        val profilePic ="https://graph.facebook.com/${obj?.getString("id")}/picture?width=200&height=200"
//        Glide.with(this)
//            .load(profilePic)
//            .into()
//        val name = obj?.getString("name")
//    }
