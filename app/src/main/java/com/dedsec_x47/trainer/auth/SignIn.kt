package com.dedsec_x47.trainer.auth

import android.content.Intent
import android.os.Bundle
import android.text.TextUtils
import android.util.Log
import android.widget.Button
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.databinding.ActivitySigninBinding
import com.dedsec_x47.trainer.databinding.ActivityStartingBinding
import com.facebook.*
import com.facebook.login.LoginManager
import com.facebook.login.LoginResult
import com.google.firebase.auth.FacebookAuthProvider
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import java.util.*

//TODO: GRAPH API DETAILS


class SignIn : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth
    private lateinit var callbackManager: CallbackManager
    private lateinit var activitySignInBinding: ActivitySigninBinding

    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_starting)
        val button: Button = findViewById(R.id.btnGetStarted)

        button.setOnClickListener() {
            activitySignInBinding = ActivitySigninBinding.inflate(layoutInflater)
            setContentView(activitySignInBinding.root) //set activity sign in layout
            auth = Firebase.auth
            callbackManager = CallbackManager.Factory.create()

            activitySignInBinding.btnSignIn.setOnClickListener {

                val email = activitySignInBinding.textInputEditTextEmail.text.toString()
                val password = activitySignInBinding.textInputEditTextPassword.text.toString()

                if (TextUtils.isEmpty(email) || TextUtils.isEmpty(password)) {
                    Toast.makeText(
                        baseContext, "Please Enter Your email and Password",
                        Toast.LENGTH_SHORT
                    ).show()
                } else {
                    emailloginaccount(email, password)
                }
            }

            /*activitySignInBinding.btnFacebook.setReadPermissions(listOf("public_profile"))*/
            activitySignInBinding.btnFacebook.setReadPermissions("public_profile", "email")
            activitySignInBinding.btnFacebook.setOnClickListener {
                fbSignIn()
            }

            activitySignInBinding.txtForgotPassword.setOnClickListener() {
                resetPassword()
            }

            activitySignInBinding.btnSignUp.setOnClickListener {
                val intent = Intent(this, SignUp::class.java)
                startActivity(intent)
            }
        }

    }

    private fun resetPassword() {
        val email = activitySignInBinding.textInputEditTextEmail.text.toString()

        if (TextUtils.isEmpty(email)) {
            Toast.makeText(
                baseContext, "Please Enter Your email",
                Toast.LENGTH_SHORT
            ).show()
        } else {
            Firebase.auth.sendPasswordResetEmail(email).addOnCompleteListener { task ->
                if (task.isSuccessful) {
                    Toast.makeText(
                        baseContext, "Password Reset Email sent.",
                        Toast.LENGTH_SHORT
                    ).show()
                    Log.d(TAG, "Password Reset Email sent.")
                } else {
                    Toast.makeText(
                        baseContext, "Password Reset Email not sent : Enter Valid Email",
                        Toast.LENGTH_SHORT
                    ).show()
                    Log.d(TAG, "Password Reset Email not sent : Enter Valid Email")
                }
            }
        }
    }

    private fun emailloginaccount(email: String, password: String) {
        auth.signInWithEmailAndPassword(email, password)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    Log.d(TAG, "signInWithEmail:success")
                } else {
                    Log.w(TAG, "signInWithEmail:failure", task.exception)
                    Toast.makeText(
                        baseContext, "Authentication failed.",
                        Toast.LENGTH_SHORT
                    ).show()
                }
            }
    }

    private fun fbSignIn() {

        FacebookSdk.setAutoInitEnabled(true)
        FacebookSdk.fullyInitialize()

        activitySignInBinding.btnFacebook.registerCallback(callbackManager,
            object : FacebookCallback<LoginResult> {

                override fun onSuccess(result: LoginResult) {
                    //isfacebookLogin = true
                    Log.d(TAG, "facebook:onSuccess:$result")
                    handleFacebookAccessToken(result.accessToken)
                    /*getFacebookData(result.accessToken)*/
                }

                override fun onCancel() {
                    Log.d(TAG, "facebook:onCancel")
                }

                override fun onError(error: FacebookException) {
                    Log.d(TAG, "facebook:onError", error)
                }
            })
    }

/*    private fun getFacebookData(accessToken: AccessToken?) {
        val request = GraphRequest.newMeRequest(accessToken) { obj, response ->
            val fbid = obj?.getLong("id").toString()

//            //val avatar = ImageRequest.getProfilePictureUri(fbid, 200, 200).toString()
//            val avatar = "https://graph.facebook.com//picture?access_token=${accessToken.toString()}"
////            Glide.with(this)
////                .load(avatar)
////                .into(.)

*//*            val gender:String = obj?.getString("gender").toString()
            val birthday : String = obj?.getString("birthday").toString()
            val profilename :String = obj?.getString("name").toString()*//*

//            val todayDate = LocalDate.now()
//            var timestamp: Instant? = null
//            timestamp = Instant.parse(birthday);
//            val age = Period.between(timestamp., todayDate).years.toString()

//            GetUserDetails().saveDetailsInFireStore( Uri.EMPTY,profilename,age ,gender, true,fbid )
//            val profilePic =
//                "https://graph.facebook.com/${obj?.getString("id")}/picture?width=200&height=200"
        }

        val parameters = Bundle()
        parameters.putString("fields", "id,name,email,birthday,gender")
        request.parameters = parameters
        request.executeAsync()
    }*/

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
                } else {
                    if (AccessToken.getCurrentAccessToken() != null) {  //firebase doesnot grand permission
                        LoginManager.getInstance().logOut()             //so automatically fb log out
                    }
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


//     private fun getFacebookData() {
//         val profile = Profile.getCurrentProfile()  //By Profile Class
//
//         if (profile != null) {
//              val facebookid = profile.id.toString()
//              val fname = profile.firstName.toString()
//              val lname = profile.lastName.toString()
//              val fullname = profile.name.toString()
//              val profileimage = profile.getProfilePictureUri(400, 400).toString()
//             Glide.with(this)
//             .load(profileimage)
//             .into()
//             val request =
//                 GraphRequest.newMeRequest(AccessToken.getCurrentAccessToken()) { obj, response ->
//                     try {
//                         var emailid = obj!!.getString("email")
//                         val gender = obj.getString("gender")
//                         val age = obj.getString("age")
//                         val profilename = obj.getString("name")
//                         val fbid =
//                             obj.getLong("id") //use this for logout
//                         val saveDetail : GetUserDetails = GetUserDetails()
//                         GetUserDetails().saveDetailsInFireStore("fname", "lname",age,gender,true,"facebookid", profilename)
//                     } catch (e: JSONException) {
//                         e.printStackTrace()
//                     }
//                 }
//             request.executeAsync()
//         }
//         else{
//             Log.d(TAG_FB, "facebook save fail")
//         }
//     }
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
