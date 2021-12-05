package com.dedsec_x47.trainer.exercisePages

import android.os.Bundle
import android.text.TextUtils
import android.util.Log
import android.view.View
import android.widget.AdapterView
import android.widget.ArrayAdapter
import android.widget.Toast
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.UserDetails
import com.dedsec_x47.trainer.databinding.ActivityCreateNewChallangeBinding
import java.util.*
import kotlin.collections.HashMap


class CreateNewChallenge : AppCompatActivity() {

    private lateinit var activityCreateNewChallangeBinding: ActivityCreateNewChallangeBinding
    override fun onCreate(savedInstanceState: Bundle?) {

        var isFriendFound = false
        super.onCreate(savedInstanceState)
        activityCreateNewChallangeBinding =
            ActivityCreateNewChallangeBinding.inflate(layoutInflater)
        setContentView(activityCreateNewChallangeBinding.root)

        val exercises = resources.getStringArray(R.array.exerciseDropdown)
        val spin1 = activityCreateNewChallangeBinding.spinnerExe1
        val spin2 = activityCreateNewChallangeBinding.spinnerExe2
        val spin3 = activityCreateNewChallangeBinding.spinnerExe3

        val challangeCard1 = activityCreateNewChallangeBinding.linearExe1
        val challangeCard2 = activityCreateNewChallangeBinding.linearExe2
        val challangeCard3 = activityCreateNewChallangeBinding.linearExe3

        var exercise1 = ""
        var exercise2 = ""
        var exercise3 = ""

        val adapter = ArrayAdapter(
            this, android.R.layout.simple_spinner_dropdown_item,
            exercises
        )

        spin1.adapter = adapter
        spin2.adapter = adapter
        spin3.adapter = adapter

        spin1.onItemSelectedListener = object :
            AdapterView.OnItemSelectedListener {
            override fun onItemSelected(
                parent: AdapterView<*>,
                view: View, position: Int, id: Long
            ) {
                exercise1 = exercises[position]
            }

            override fun onNothingSelected(parent: AdapterView<*>) {
                // write code to perform some action
            }
        }

        spin2.onItemSelectedListener = object :
            AdapterView.OnItemSelectedListener {
            override fun onItemSelected(
                parent: AdapterView<*>,
                view: View, position: Int, id: Long
            ) {
                exercise2 = exercises[position]
            }

            override fun onNothingSelected(parent: AdapterView<*>) {
                // write code to perform some action
            }
        }

        spin3.onItemSelectedListener = object :
            AdapterView.OnItemSelectedListener {
            override fun onItemSelected(
                parent: AdapterView<*>,
                view: View, position: Int, id: Long
            ) {
                exercise3 = exercises[position]
            }

            override fun onNothingSelected(parent: AdapterView<*>) {
                // write code to perform some action
            }
        }

        var challenge: MutableMap<String, Any> = HashMap()
        activityCreateNewChallangeBinding.btnSearch.setOnClickListener {
            isFriendFound = false
            val friendName = activityCreateNewChallangeBinding.textSearchFriends.text.toString()
            val NameList = UserDetails().returnList()

            for (element in NameList) {
                if (element.contains(friendName.lowercase(Locale.getDefault()))) {
                    challenge.clear()
                    challenge["To"] = friendName
                    Toast.makeText(baseContext, "Friend Found", Toast.LENGTH_SHORT).show()
                    isFriendFound = true
                    break
                }
            }
            if (!isFriendFound) {
                Toast.makeText(baseContext, "Friend not Found", Toast.LENGTH_SHORT).show()
            }
        }

        activityCreateNewChallangeBinding.btnAddChallenge.setOnClickListener {
            if (isFriendFound) when {
                challangeCard2.visibility == View.GONE -> {
                    challangeCard2.visibility = View.VISIBLE
                }
                challangeCard3.visibility == View.GONE -> {
                    challangeCard3.visibility = View.VISIBLE
                }
                else -> {
                    toast("Maximum Challange Amount Reached")
                }
            }
            else {
                Toast.makeText(baseContext, "Please Select A Friend", Toast.LENGTH_SHORT).show()
            }
        }


        activityCreateNewChallangeBinding.btnCreateChallenges.setOnClickListener {

            val repetationCount1 =
                activityCreateNewChallangeBinding.txtRepCounts1.text.toString() //
            Log.d("repeat", exercise1)
            if (isAllFilled(exercise1, repetationCount1, 1)) {

                if (challangeCard2.visibility == View.VISIBLE) {

                    val repetationCount2 =
                        activityCreateNewChallangeBinding.txtRepCounts2.text.toString()
                    if (isAllFilled(exercise2, repetationCount2, 2)) {

                        if (challangeCard3.visibility == View.VISIBLE) {

                            val repetationCount3 =
                                activityCreateNewChallangeBinding.txtRepCounts3.text.toString()
                            if (isAllFilled(exercise3, repetationCount3, 3)) {
                                toast("Challenge Created")
                                challenge["exercise1"] = hashMapOf(
                                    "exercise" to exercise1,
                                    "Repetation Count" to repetationCount1
                                )
                                challenge["exercise2"] = hashMapOf(
                                    "exercise" to exercise2,
                                    "Repetation Count" to repetationCount2
                                )
                                challenge["exercise3"] = hashMapOf(
                                    "exercise" to exercise3,
                                    "Repetation Count" to repetationCount3
                                )
                                UserDetails().createChallange(challenge)
                            }
                        } else {
                            toast("Challenge Created")
                            challenge["exercise1"] = hashMapOf(
                                "exercise" to exercise1,
                                "Repetation Count" to repetationCount1
                            )
                            challenge["exercise2"] = hashMapOf(
                                "exercise" to exercise2,
                                "Repetation Count" to repetationCount2
                            )
                            UserDetails().createChallange(challenge)
                        }
                    }
                } else {
                    toast("Challenge Created")
                    challenge["exercise1"] =
                        hashMapOf("exercise" to exercise1, "Repetation Count" to repetationCount1)
                    UserDetails().createChallange(challenge)
                }
            }

        }

        activityCreateNewChallangeBinding.btnCancelChallenges.setOnClickListener {
            finish()
        }
    }

    private fun isAllFilled(exercise: String, repetationCount: String, cardNo: Int): Boolean {
        if (exercise != "Push up" && exercise != "Sit up" && exercise != "Chin up" && exercise != "Hammer Curl" && exercise != "Squat") {
            Toast.makeText(
                baseContext, "Please select a exercise in $cardNo", Toast.LENGTH_SHORT
            ).show()
            return false
        }
        if (TextUtils.isEmpty(repetationCount)) {
            Toast.makeText(
                baseContext, "Please Enter Repetition Count$cardNo", Toast.LENGTH_SHORT
            ).show()
            return false
        }
        return true
    }

    private fun toast(message: String) {
        Toast.makeText(
            baseContext,
            message,
            Toast.LENGTH_SHORT
        ).show()
    }
}