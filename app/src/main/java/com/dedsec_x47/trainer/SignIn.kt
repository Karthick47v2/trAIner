package com.dedsec_x47.trainer

import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.widget.Button
import android.widget.EditText
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.facebook.AccessToken
import com.facebook.CallbackManager
import com.facebook.FacebookCallback
import com.facebook.FacebookException
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


    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        //set activity sign in layout
        setContentView(R.layout.activity_sign_in)

        buttonFacebookLogin = findViewById(R.id.fb_login_button)

        buttonFacebookLogin.setOnClickListener{
            callbackManager = CallbackManager.Factory.create()
            buttonFacebookLogin.setReadPermissions(
                listOf(
                    "email",
                    "public_profile",
                )
            )
            buttonFacebookLogin.registerCallback(
                callbackManager,
                object : FacebookCallback<LoginResult> {
                    override fun onSuccess(result: LoginResult) {
//                val graphRequest = GraphRequest.newMeRequest(result?.accessToken){'object',response ->
//                    getFacebookData('object'))
//                }
                        Log.d(TAG, "facebook:onSuccess:$result")
                        handleFacebookAccessToken(result.accessToken)
                    }

                    override fun onCancel() {
                        Log.d(TAG, "facebook:onCancel")
                    }

                    override fun onError(error: FacebookException) {
                        Log.d(TAG, "facebook:onError", error)
                    }
                })


        }


        //when sign in button tapped execute sign in task
        val sign_in_button: Button = findViewById(R.id.sign_in_button)
        sign_in_button.setOnClickListener {
            // Initialize Firebase Auth
            auth = Firebase.auth

            val emailEt: EditText = findViewById(R.id.sign_in_email)
            val passwordEt: EditText = findViewById(R.id.sign_in_password)

            val email: String = emailEt.text.toString()
            val password: String = passwordEt.text.toString()

            emailloginaccount(email, password)
        }

        val sign_up_button: Button = findViewById(R.id.sign_up_button)
        sign_up_button.setOnClickListener {
            val intent = Intent(this, SignUp::class.java)
            startActivity(intent)
        }
    }

//    private fun getFacebookData(obj: JSONObject?) {
//        val profilePic ="https://graph.facebook.com/${obj.getString("id")}/picture?width=200&height=200"
//        Glide.with(this)
//            .load(profilePic)
//            .into(mainbinding )
//        val name = obj?.getString("name")
//        val birthday = obj?.getString("birthday")
//        val gender = obj?.getString("gender")
//        val total_count = obj?.getJSONObject("friends").getJSONObject("summary")
//            .getString("total_count")
//
//    }

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

    private fun handleFacebookAccessToken(token: AccessToken) {
        Log.d(TAG, "handleFacebookAccessToken:$token")

        val credential = FacebookAuthProvider.getCredential(token.token)
        auth.signInWithCredential(credential)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    // Sign in success, update UI with the signed-in user's information
                    Log.d(TAG_FB, "signInWithCredential:success")
                    val user = auth.currentUser
                    updateUI()
                } else {
                    // If sign in fails, display a message to the user.
                    Log.w(TAG_FB, "signInWithCredential:failure", task.exception)
                    Toast.makeText(
                        baseContext, "Authentication failed.",
                        Toast.LENGTH_SHORT
                    ).show()
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

}