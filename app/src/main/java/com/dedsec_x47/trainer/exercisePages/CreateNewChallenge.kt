package com.dedsec_x47.trainer.exercisePages

import android.app.Dialog
import android.graphics.Color
import android.graphics.drawable.ColorDrawable
import android.os.Bundle
import android.text.Editable
import android.text.TextUtils
import android.text.TextWatcher
import android.util.Log
import android.view.View
import android.widget.*
import androidx.appcompat.app.AppCompatActivity
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.UserDetails
import com.dedsec_x47.trainer.auth.userNameMap
import com.dedsec_x47.trainer.databinding.ActivityCreateNewChallangeBinding


class CreateNewChallenge : AppCompatActivity() {
    lateinit var textview: TextView
    lateinit var dialog: Dialog
    private lateinit var activityCreateNewChallangeBinding: ActivityCreateNewChallangeBinding

    override fun onCreate(savedInstanceState: Bundle?) {

        var isFriendselected = false
        val challenge: MutableMap<String, Any> = HashMap()
        super.onCreate(savedInstanceState)
        activityCreateNewChallangeBinding =
            ActivityCreateNewChallangeBinding.inflate(layoutInflater)
        setContentView(activityCreateNewChallangeBinding.root)

        textview = findViewById(R.id.testView)
        val arrayMap = UserDetails().returnMap()

        var arraylist = ArrayList<String>()

        for(key in arrayMap.keys){
            arraylist.add(key)
        }

        textview.setOnClickListener(View.OnClickListener {

            dialog = Dialog(this)
            dialog.setContentView(R.layout.dialog_searchable_spinner)
            dialog.window!!.setLayout(1000, 1000)
            dialog.window!!.setBackgroundDrawable(ColorDrawable(Color.TRANSPARENT))
            dialog.show()

            val editText = dialog.findViewById<EditText>(R.id.edit_text)
            val listView = dialog.findViewById<ListView>(R.id.list_view)

            val adapter = ArrayAdapter(
                this, android.R.layout.simple_spinner_dropdown_item,
                arraylist
            )

            listView.adapter = adapter

            editText.addTextChangedListener(object : TextWatcher {
                override fun beforeTextChanged(
                    s: CharSequence,
                    start: Int,
                    count: Int,
                    after: Int
                ) {
                }

                override fun onTextChanged(s: CharSequence, start: Int, before: Int, count: Int) {
                    adapter.filter.filter(s)
                }

                override fun afterTextChanged(s: Editable) {}
            })

            listView.onItemClickListener =
                AdapterView.OnItemClickListener { parent, view, position, id ->
                    textview.text = adapter.getItem(position)
                    isFriendselected = true
                    dialog.dismiss()
                    challenge.clear()
                    challenge["To"] = userNameMap[adapter.getItem(position).toString()].toString()
                    challenge["From"] = UserDetails().readData("Name")
                }
        })

        val exercises = resources.getStringArray(R.array.exerciseDropdown)
        val spin1 = activityCreateNewChallangeBinding.spinnerExe1
        val spin2 = activityCreateNewChallangeBinding.spinnerExe2
        val spin3 = activityCreateNewChallangeBinding.spinnerExe3
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
            }
        }

        activityCreateNewChallangeBinding.btnAddChallenge.setOnClickListener {
            if (isFriendselected) when {
                challangeCard2.visibility == View.GONE -> {
                    challangeCard2.visibility = View.VISIBLE
                }
                challangeCard3.visibility == View.GONE -> {
                    challangeCard3.visibility = View.VISIBLE
                }
                else -> {
                    toast("Maximum Challenge Amount Reached")
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
            toast("Please select a exercise in $cardNo")
            return false
        }
        if (TextUtils.isEmpty(repetationCount)) {
            toast("Please Enter Repetition Count$cardNo")
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