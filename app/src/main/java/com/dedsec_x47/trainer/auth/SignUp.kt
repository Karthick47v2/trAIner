package com.dedsec_x47.trainer.auth

import android.content.Intent
import android.os.Bundle
import android.text.TextUtils
import android.util.Log
import android.view.View
import android.widget.AdapterView
import android.widget.ArrayAdapter
import android.widget.Spinner
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.databinding.ActivitySignupBinding
import com.google.firebase.auth.AuthCredential
import com.google.firebase.auth.EmailAuthProvider
import com.google.firebase.auth.FirebaseAuth
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import java.util.regex.Pattern

class SignUp : AppCompatActivity() {

    lateinit var auth: FirebaseAuth
    lateinit var email: String
    lateinit var password1: String
    lateinit var password2: String
    lateinit var activitySignupBinding: ActivitySignupBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        activitySignupBinding = ActivitySignupBinding.inflate(layoutInflater)
        setContentView(activitySignupBinding.root)

        auth = Firebase.auth

        val genOp = resources.getStringArray(R.array.genderDropdown)
        val genSpin = findViewById<Spinner>(R.id.spinnerGender)

        if (genSpin != null) {
            val adapter = ArrayAdapter(
                this,
                android.R.layout.simple_spinner_dropdown_item, genOp
            )
            genSpin.adapter = adapter

            genSpin.onItemSelectedListener = object :
                AdapterView.OnItemSelectedListener {
                override fun onItemSelected(
                    parent: AdapterView<*>, view: View, position: Int,
                    id: Long
                ) {
                    userGender = genOp[position]
                }

                override fun onNothingSelected(parent: AdapterView<*>) {
                    Toast.makeText(baseContext, "Select Gender", Toast.LENGTH_SHORT).show()
                }
            }
        }

        activitySignupBinding.btnCreate.setOnClickListener {

            newUserName = activitySignupBinding.textInputEditTextUserName.text.toString()
            email = activitySignupBinding.textInputEditTextNewEmail.text.toString()
            password1 = activitySignupBinding.textInputEditTextNewPassword.text.toString()
            password2 = activitySignupBinding.textInputEditTextConfirmPassword.text.toString()
            newUserAge = if (activitySignupBinding.textInputEditTextAge.text.toString() != "") {
                Integer.parseInt(activitySignupBinding.textInputEditTextAge.text.toString())
            } else 0

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

        activitySignupBinding.btnCancel.setOnClickListener {
            gotoSignin()
        }

    }

    private fun createAccount(email: String, password: String) {
        isVertificationEmailSent = false

        auth.createUserWithEmailAndPassword(email, password)
            .addOnCompleteListener(this) { task ->
                if (task.isSuccessful) {
                    isNewUser = true
                    Log.d(TAG, "createUserWithEmail:success")
                    val credential = EmailAuthProvider.getCredential(email, password)
//                    linkWithCredential(credential)
                    gotoLogin()
                } else {
                    Log.w(TAG, "createUserWithEmail:failure", task.exception)
                    Toast.makeText(
                        baseContext,
                        task.exception?.message.toString(),
                        Toast.LENGTH_SHORT
                    ).show()
                }
            }
    }

    private fun gotoLogin(){
        val intent = Intent(this, LoginActivity::class.java)
        startActivity(intent)
        finish()
    }

    private fun gotoSignin() {
        val intent = Intent(this, SignIn::class.java)
        startActivity(intent)
        finish()
    }

    companion object {
        private const val TAG = "EmailPassword"
    }

//    private fun linkWithCredential(credential: AuthCredential) {
//        auth.currentUser!!.linkWithCredential(credential)
//            .addOnCompleteListener(this) { task ->
//                if (task.isSuccessful) {
//                    Log.d("SignIn.TAG", "linkWithCredential:success")
//                } else {
//                    Log.w("SignIn.TAG", "linkWithCredential:failure", task.exception)
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

    private fun detailsValidityChecker(
        name: String,
        email: String,
        password1: String,
        password2: String,
        age: Int,
        gender: String
    ): Boolean {

        if (TextUtils.isEmpty(name) || TextUtils.isEmpty(email) || TextUtils.isEmpty(password1)
            || TextUtils.isEmpty(password2) || (age == 0)
        ) {
            Toast.makeText(
                baseContext, "Please Fill all details",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }

        if (age < 18 || age > 65) {
            Toast.makeText(
                baseContext, "Only 18 - 65 are allowed",
                Toast.LENGTH_SHORT
            ).show()
            return false
        }

        if (gender != "Male" && gender != "Female") {
            Toast.makeText(
                baseContext, "Please select a gender",
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


}