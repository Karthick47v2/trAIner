package com.dedsec_x47.trainer.homeFragments

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ArrayAdapter
import android.widget.AutoCompleteTextView
import android.widget.Button
import android.widget.EditText
import androidx.core.content.ContentProviderCompat.requireContext
import androidx.core.view.get
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.UserDetails
import com.google.android.material.textfield.TextInputEditText
import com.google.android.material.textfield.TextInputLayout

class SettingsActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_settings)

        val userData: MutableMap<String, Any> = HashMap()
        val name = findViewById<TextInputEditText>(R.id.tfEditName)
        val age  = findViewById<TextInputEditText>(R.id.tfEditAge)
        //val gender = findViewById<TextInputEditText>(R.id.tfEditGender)

        name.setText(UserDetails().readData("Name"))
        age.setText(UserDetails().readData("Age"))
        //gender.setText(UserDetails().readData("Gender"))

        findViewById<Button>(R.id.btn1).setOnClickListener{
            userData["Name"] = name.text.toString()
        }
        findViewById<Button>(R.id.btn2).setOnClickListener{
            userData["Age"] = age.text.toString()
        }
        findViewById<Button>(R.id.btn3).setOnClickListener{
            //userData["Gender"] = gender.text.toString()
        }

        findViewById<Button>(R.id.btnUpdate).setOnClickListener{
            UserDetails().updateFireStoreData(userData)
            UserDetails().updateLocalDocument(userData)
            userData.clear()
        }

    }
}