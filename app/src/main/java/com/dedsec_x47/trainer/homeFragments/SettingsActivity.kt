package com.dedsec_x47.trainer.homeFragments

import android.os.Bundle
import android.view.View
import android.widget.AdapterView
import android.widget.ArrayAdapter
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.BooVariable
import com.dedsec_x47.trainer.auth.UserDetails
import com.dedsec_x47.trainer.auth.userGender
import com.dedsec_x47.trainer.databinding.ActivitySettingsBinding
import kotlin.collections.set

var isNameOrPicUpdated = BooVariable()

class SettingsActivity : AppCompatActivity() {
    private lateinit var activitySettingsBinding: ActivitySettingsBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        activitySettingsBinding = ActivitySettingsBinding.inflate(layoutInflater)
        setContentView(R.layout.activity_settings)

        val genOp = resources.getStringArray(R.array.genderDropdown)
        val genSpin = activitySettingsBinding.spinGender
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
                Toast.makeText(baseContext, UserDetails().readData("Gender"), Toast.LENGTH_SHORT).show()
            }
        }

        val userData: MutableMap<String, Any> = HashMap()

        activitySettingsBinding.tfEditName.setText(UserDetails().readData("Name"))
        activitySettingsBinding.tfEditAge.setText(UserDetails().readData("Age"))

        activitySettingsBinding.btn1.setOnClickListener {
            userData["Name"] = activitySettingsBinding.tfEditName.text.toString()
        }
        activitySettingsBinding.btn3.setOnClickListener {
            userData["Age"] = activitySettingsBinding.tfEditAge.text.toString()
        }
        activitySettingsBinding.btn2.setOnClickListener {
            userData["Gender"] = activitySettingsBinding.spinGender.selectedItem
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