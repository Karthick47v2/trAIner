package com.dedsec_x47.trainer.homeFragments

import android.os.Bundle
import android.view.View
import android.widget.*
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.BooVariable
import com.dedsec_x47.trainer.auth.UserDetails
import com.dedsec_x47.trainer.databinding.ActivitySettingsBinding
import com.google.android.material.textfield.TextInputEditText
import kotlin.collections.set
import android.widget.ArrayAdapter







var isNameOrPicUpdated = BooVariable()

class SettingsActivity : AppCompatActivity() {

    lateinit var activitySettingsBinding: ActivitySettingsBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        activitySettingsBinding = ActivitySettingsBinding.inflate(layoutInflater)
        setContentView(activitySettingsBinding.root)

        val genOp = resources.getStringArray(R.array.genderDropdown)
        val genSpin = findViewById<Spinner>(R.id.spinGender)

        if (genSpin != null) {
            val adapter = ArrayAdapter(this,R.layout.sample_gender_drop_down_list, genOp)
            genSpin.adapter = adapter
            genSpin.onItemSelectedListener = object :
                AdapterView.OnItemSelectedListener {

                override fun onItemSelected(
                    parent: AdapterView<*>,
                    view: View, position: Int, id: Long
                ) {
                }
                override fun onNothingSelected(parent: AdapterView<*>) {
                    Toast.makeText(baseContext, "Select Gender", Toast.LENGTH_SHORT).show()
                }
            }
        }

        val userData: MutableMap<String, Any> = HashMap()
        val name = findViewById<TextInputEditText>(R.id.tfEditName)
        val age = findViewById<TextInputEditText>(R.id.tfEditAge)

        name.setText(UserDetails().readData("Name"))
        age.setText(UserDetails().readData("Age"))
        if(UserDetails().readData("Age")=="Male") {
            genSpin.setSelection(0)
        }else{
            genSpin.setSelection(1)
        }

        activitySettingsBinding.btn1.setOnClickListener {
            userData["Name"] = name.text.toString()
        }
        activitySettingsBinding.btn3.setOnClickListener {
            userData["Age"] = age.text.toString()
        }
        activitySettingsBinding.btn2.setOnClickListener {
            userData["Gender"] = genSpin.selectedItem
        }

        activitySettingsBinding.btnUpdate.setOnClickListener {
            UserDetails().updateFireStoreData(userData)
            UserDetails().updateLocalDocument(userData)
            if (userData.containsKey("Name")) {
                isNameOrPicUpdated.set(true)
            }
            userData.clear()
        }

    }
}