package com.dedsec_x47.trainer.auth

import android.content.Context
import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.provider.MediaStore
import android.text.TextUtils
import android.util.AttributeSet
import android.util.Log
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.databinding.ActivitySignupBinding
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import java.util.regex.Pattern

lateinit var newUserImageUri: Uri
lateinit var newUserName: String
var newUserAge: Int = 0
lateinit var userGender: String

class SignUp : AppCompatActivity() {

    lateinit var auth: FirebaseAuth
    var isProfilePictureSelected = false
    var isCreateAccountSucess = false
    lateinit var email: String
    lateinit var password1: String
    lateinit var password2: String
    lateinit var activitySignupBinding: ActivitySignupBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        activitySignupBinding = ActivitySignupBinding.inflate(layoutInflater)
        setContentView(activitySignupBinding.root)

        auth = Firebase.auth                                        // Initialize Firebase Auth

        activitySignupBinding.profileImage.setOnClickListener {
            selectProfileImage()
        }

        activitySignupBinding.btnCreate.setOnClickListener {
            if (!isProfilePictureSelected) {
                Toast.makeText(
                    baseContext, "Profile Image Not Selected", Toast.LENGTH_SHORT
                ).show()
            } else {
                newUserName = activitySignupBinding.textInputEditTextUserName.text.toString()
                email = activitySignupBinding.textInputEditTextNewEmail.text.toString()
                password1 = activitySignupBinding.textInputEditTextNewPassword.text.toString()
                password2 = activitySignupBinding.textInputEditTextConfirmPassword.text.toString()
                newUserAge = Integer.parseInt(activitySignupBinding.textInputEditTextAge.text.toString())
                userGender = activitySignupBinding.textInputLayoutEditTextGender.text.toString()

                if (detailsValidityChecker(
                        newUserName,
                        email,
                        password1,
                        password2,
                        newUserAge,
                        userGender
                    )
                ) {
                    createAccount(email, password1)
                }
            }
        }

        activitySignupBinding.btnCancel.setOnClickListener {
            finish()
            val intent = Intent(this, LoginActivity::class.java)//intent MainActivity2
            startActivity(intent)
        }

    }

    private fun createAccount(email: String, password: String) {     // create_user_with_email]
        auth.createUserWithEmailAndPassword(email, password)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    isNewUser = true
                    Log.d(TAG, "createUserWithEmail:success")
                } else {
                    Log.w(TAG, "createUserWithEmail:failure", task.exception)
                    Toast.makeText(baseContext, "Authentication failed.", Toast.LENGTH_SHORT).show()
                }
            }
    }

    companion object {
        private const val TAG = "EmailPassword"
    }

    private fun detailsValidityChecker(
        name: String,
        email: String,
        password1: String,
        password2: String,
        age: Int,
        gender: String
    ): Boolean {

        if (TextUtils.isEmpty(name) || TextUtils.isEmpty(email) || TextUtils.isEmpty(password1)
            || TextUtils.isEmpty(password2) || (age == 0) || TextUtils.isEmpty(gender)
        ) {
            Toast.makeText(
                baseContext, "Please Fill all details",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }

        if (password1 != password2) {
            Toast.makeText(
                baseContext, "Passwords does not Match",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }

        return (isPasswordValid(password1) && (isEmailValid(email)))
    }

    private fun isPasswordValid(password: String): Boolean {

        if (!(password.length > 8)) { //minimum chars 8
            Toast.makeText(
                baseContext, "Minimum password Length 8",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }

        if (password.contains(" ")) { //can't contain space
            Toast.makeText(
                baseContext, "Password can't Contain Space",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }

        var isPasswordContainNumber = false
        for (i in 0..9) {   // check digits from 0 to 9
            val str1 = Integer.toString(i)
            if (password.contains(str1)) {
                isPasswordContainNumber = true
            }
        }
        if (!isPasswordContainNumber) {
            Toast.makeText(
                baseContext, "Password Should Contain Numbers",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }

        // for checking  special characters
        if (!(password.contains("@") || password.contains("#")
                    || password.contains("!") || password.contains("~")
                    || password.contains("$") || password.contains("%")
                    || password.contains("^") || password.contains("&")
                    || password.contains("*") || password.contains("(")
                    || password.contains(")") || password.contains("-")
                    || password.contains("+") || password.contains("/")
                    || password.contains(":") || password.contains(".")
                    || password.contains(", ") || password.contains("<")
                    || password.contains(">") || password.contains("?")
                    || password.contains("|"))
        ) {
            Toast.makeText(
                baseContext, "Password Should Contain A special character",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }

        var isPasswordHaveCapitailLetters = false
        for (i in 65..90) {                  // checking capital letters
            val c = i.toChar()
            val str1 = Character.toString(c)
            if (password.contains(str1)) {
                isPasswordHaveCapitailLetters = true
            }
        }
        if (!isPasswordHaveCapitailLetters) {
            Toast.makeText(
                baseContext, "Password Should Contain A Capital Letter",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }

        var isPasswordHaveSmallLetters = false
        for (i in 90..122) {
            val c = i.toChar()
            val str1 = Character.toString(c)
            if (password.contains(str1)) {
                isPasswordHaveSmallLetters = true
            }
        }
        if (!isPasswordHaveSmallLetters) {
            return false
        }

        return true
    }

    private fun isEmailValid(email: String?): Boolean {

        val emailRegex = "^[a-zA-Z0-9_+&*-]+(?:\\." + "[a-zA-Z0-9_+&*-]+)*@" +
                "(?:[a-zA-Z0-9-]+\\.)+[a-z" + "A-Z]{2,7}$"

        val pat: Pattern = Pattern.compile(emailRegex)
        if (!pat.matcher(email).matches()) {
            Toast.makeText(
                baseContext, "Enter A valid email",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }
        return true
    }

    private fun selectProfileImage() {
        val openGalleryIntent =
            Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI)
        startActivityForResult(openGalleryIntent, 100)
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, imgdata: Intent?) {
        super.onActivityResult(requestCode, resultCode, imgdata)
        if ((requestCode == 100) && (resultCode == RESULT_OK) && (imgdata != null) && (imgdata.data != null)) {
            newUserImageUri = imgdata.data!!
            activitySignupBinding.profileImage.setImageURI(newUserImageUri)
            isProfilePictureSelected = true
            Log.d(" ", "Select Image done")
        }
    }
}