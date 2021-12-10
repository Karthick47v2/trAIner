package com.dedsec_x47.trainer.homeFragments

import android.os.Bundle
import android.widget.*
import androidx.core.content.ContentProviderCompat.requireContext
import androidx.core.view.get
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.BooVariable
import com.dedsec_x47.trainer.auth.UserDetails
import com.google.android.material.textfield.TextInputEditText
import kotlin.collections.HashMap
import kotlin.collections.MutableMap
import kotlin.collections.set

var isNameOrPicUpdated = BooVariable()

class SettingsActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_settings)

        val userData: MutableMap<String, Any> = HashMap()
        val name = findViewById<TextInputEditText>(R.id.tfEditName)

        val age  = findViewById<TextInputEditText>(R.id.tfEditAge)
//        val gender = findViewById<Spinner>(R.id.tfEditGender)
        name.setText(UserDetails().readData("Name"))
        age.setText(UserDetails().readData("Age"))
//        gender.prompt(UserDetails().readData("Gender"))

        findViewById<Button>(R.id.btn1).setOnClickListener {
            userData["Name"] = name.text.toString()
        }
        findViewById<Button>(R.id.btn2).setOnClickListener {
            userData["Age"] = age.text.toString()
        }

        findViewById<Button>(R.id.btn3).setOnClickListener{
            //userData["Gender"] = gender.text.toString()

        }

        findViewById<Button>(R.id.btnUpdate).setOnClickListener {
            UserDetails().updateFireStoreData(userData)
            UserDetails().updateLocalDocument(userData)
            if (userData.containsKey("Name")) {
                //isNameUpdated.set(true)
            }
            userData.clear()
        }

    }
}