package com.dedsec_x47.trainer.auth

import android.app.AlertDialog
import android.content.Intent
import android.os.Bundle
import android.text.TextUtils
import android.util.Log
import android.view.LayoutInflater
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.databinding.ActivitySigninBinding
import com.facebook.AccessToken
import com.facebook.CallbackManager
import com.facebook.FacebookCallback
import com.facebook.FacebookException
import com.facebook.login.LoginManager
import com.facebook.login.LoginResult
import com.google.firebase.auth.AuthCredential
import com.google.firebase.auth.FacebookAuthProvider
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase


class SignIn : AppCompatActivity() {

    private lateinit var auth: FirebaseAuth
    private lateinit var callbackManager: CallbackManager
    private lateinit var activitySignInBinding: ActivitySigninBinding

    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        if (isgetStart) {
            getStarted()
        }

        activitySignInBinding = ActivitySigninBinding.inflate(layoutInflater)
        setContentView(activitySignInBinding.root)
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

        activitySignInBinding.btnFacebook.setReadPermissions("public_profile", "email")
        activitySignInBinding.btnFacebook.setOnClickListener {
            fbSignIn()
        }

        activitySignInBinding.txtForgotPassword.setOnClickListener {
            resetPassword()
        }

        activitySignInBinding.btnSignUp.setOnClickListener {
            gotoSignUpPage()
        }
    }

    private fun getStarted() {

        val dialogView = LayoutInflater.from(this).inflate(R.layout.activity_starting, null)
        val builder = AlertDialog.Builder(this).setView(dialogView)
        val alertDialog = builder.show()

        val btngetSt = dialogView.findViewById<Button>(R.id.btnGetStarted)

        btngetSt.setOnClickListener {
            isgetStart = false
            alertDialog.dismiss()
        }
    }

    private fun resetPassword() {

        val dialogView = LayoutInflater.from(this).inflate(R.layout.password_reset_popup, null)
        val builder = AlertDialog.Builder(this).setView(dialogView)
        val alertDialog = builder.show()

        val btnSend = dialogView.findViewById<Button>(R.id.btnOkay)
        val btnCancel = dialogView.findViewById<Button>(R.id.btnCancelPopUp)

        btnSend.setOnClickListener {
            val email =
                (dialogView.findViewById<EditText>(R.id.textInputEditTextResetEmail)).text.toString()

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
                        alertDialog.dismiss()
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
        btnCancel.setOnClickListener {
            alertDialog.dismiss()
        }
    }

    private fun emailloginaccount(email: String, password: String) {
        auth.signInWithEmailAndPassword(email, password)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    Log.d(TAG, "signInWithEmail:success")
                    gotoLoginPage()
                } else {
                    Log.w(TAG, "signInWithEmail:failure", task.exception)
                    Toast.makeText(
                        baseContext, "SignIn failed.",
                        Toast.LENGTH_SHORT
                    ).show()
                }
            }
    }

//    private fun linkWithCredential(credential: AuthCredential) {
//        auth.currentUser!!.linkWithCredential(credential)
//            .addOnCompleteListener(this) { task ->
//                if (task.isSuccessful) {
//                    Log.d(TAG, "linkWithCredential:success")
//
//                } else {
//                    Log.w(TAG, "linkWithCredential:failure", task.exception)
//                    Toast.makeText(
//                        baseContext, "Authentication failed.",
//                        Toast.LENGTH_SHORT
//                    ).show()
//                    mergeAccounts(credential)
//                }
//            }
//    }
//
//    private fun mergeAccounts(credential: AuthCredential) {
//        val prevUser = auth.currentUser
//        auth.signInWithCredential(credential)
//            .addOnSuccessListener { result ->
//                var currentUser = result.user
//            }
//            .addOnFailureListener {
//            }
//    }

    private fun fbSignIn() {

        activitySignInBinding.btnFacebook.registerCallback(callbackManager,
            object : FacebookCallback<LoginResult> {

                override fun onSuccess(result: LoginResult) {
                    //isfacebookLogin = true
                    Log.d(TAG, "facebook:onSuccess:$result")
                    handleFacebookAccessToken(result.accessToken)
                    //getFacebookData(result.accessToken)
                }

                override fun onCancel() {
                    Log.d(TAG, "facebook:onCancel")
                }

                override fun onError(error: FacebookException) {
                    Log.d(TAG, "facebook:onError", error)
                }
            })
    }

    private fun gotoSignUpPage(){
        val intent = Intent(this, SignUp::class.java)
        startActivity(intent)
        finish()
    }

    private fun gotoLoginPage(){
        val intent = Intent(this, LoginActivity::class.java)
        startActivity(intent)
        finish()
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, data: Intent?) {
        super.onActivityResult(requestCode, resultCode, data)
        callbackManager.onActivityResult(requestCode, resultCode, data)
    }

    private fun handleFacebookAccessToken(token: AccessToken?) {
        Log.d(TAG, "handleFacebookAccessToken:$token")

        val credential = FacebookAuthProvider.getCredential(token!!.token)
        auth.signInWithCredential(credential)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    Log.d(TAG_FB, "signInWithCredential:success")
                    //linkWithCredential(credential)
                } else {
                    if (AccessToken.getCurrentAccessToken() != null) {
                        LoginManager.getInstance().logOut()
                    }
                    Log.w(TAG_FB, "signInWithCredential:failure", task.exception)
                    Toast.makeText(this, "Authentication failed.", Toast.LENGTH_SHORT).show()
                }
            }
    }

    companion object {
        private const val TAG = "EmailPassword"
        private const val TAG_FB = "FacebookLogin"
    }

//    private fun getFacebookData(accessToken: AccessToken?) {
//        val request = GraphRequest.newMeRequest(accessToken) { obj, response ->
//            Toast.makeText(
//                baseContext, "RUNNNNNNNNNN",
//                Toast.LENGTH_LONG
//            ).show()
////            val avatar = ImageRequest.getProfilePictureUri(fbid, 200, 200).toString()
////            val avatar = "https://graph.facebook.com//picture?access_token=${accessToken.toString()}"
//
//            val fbid = obj?.getLong("id").toString()
//            val gender = obj?.getString("gender").toString()
//            val email:String =obj?.getString("email").toString()
//            val birthday : String = obj?.getString("birthday").toString()
//            val profilename :String = obj?.getString("name").toString()
//            val profilePic: Uri =
//                "https://graph.facebook.com/${obj?.getString("id")}/picture?width=200&height=200".toUri()
//            Log.d("FB TAG", fbid+"  "+gender+"  "+birthday+" "+profilePic+ profilename+ email )
////            val todayDate = LocalDate.now()
////            var timestamp: Instant? = null
////            timestamp = Instant.parse(birthday);
////            val age = Period.between(timestamp., todayDate).years.toString()
// Toast.makeText(
//                        baseContext, fbid+"  "+gender+"  "+birthday+" "+profilePic+ profilename+ email,
//             Toast.LENGTH_LONG
//                    ).show()
//            UserDetails().saveDetailsInFireStore(
//                newUserName, newUserAge, userGender,
//                false, " "
//            )
//
//        }
//
//        val parameters = Bundle()
//        parameters.putString("fields", "id,name,email,birthday,gender")
//        request.parameters = parameters
//        request.executeAsync()
//    }

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
