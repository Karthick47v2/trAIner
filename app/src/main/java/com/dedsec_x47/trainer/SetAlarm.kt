package com.dedsec_x47.trainer

import android.app.AlarmManager
import android.app.PendingIntent
import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import android.widget.Toast
import com.dedsec_x47.trainer.databinding.ActivitySetalarmBinding
import com.google.android.material.timepicker.MaterialTimePicker
import com.google.android.material.timepicker.TimeFormat
import java.util.*

class SetAlarm : AppCompatActivity() {

    private lateinit var picker: MaterialTimePicker
    private lateinit var binding: ActivitySetalarmBinding
    private lateinit var cal :Calendar
    private  lateinit var alarmManager : AlarmManager
    private lateinit var broadcast :PendingIntent

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivitySetalarmBinding.inflate(layoutInflater)
        setContentView(binding.root)

        cal = Calendar.getInstance()       //getting calender instance
        binding.button.setOnClickListener{
            showTimePicker()
        }

        binding.button2.setOnClickListener{
            setDailyAlarm()
        }

        binding.button3.setOnClickListener{
            cancelAlarm()
        }

    }

    private fun setDailyAlarm() {

        //use alarm manager for the notification
        alarmManager = getSystemService(Context.ALARM_SERVICE) as AlarmManager
        //this intent will be called when taping the notification
        var notificationIntent = Intent(this, HomeScreen::class.java)
        //this pendingIntent will be called by the broadcast receiver
        broadcast = PendingIntent.getBroadcast(
            this,
            0,
            notificationIntent,
            PendingIntent.FLAG_UPDATE_CURRENT
        )

        cal.timeInMillis = System.currentTimeMillis()            //setting the time from device

        Log.d("picker", picker.hour.toString())
        Log.d("picker", picker.minute.toString())

        cal[Calendar.HOUR_OF_DAY] = picker.hour
        cal[Calendar.MINUTE] = picker.minute
        cal[Calendar.SECOND] = 0

        //alarm manager will repeat the notification each day at the set time
        alarmManager.setRepeating(
            AlarmManager.ELAPSED_REALTIME_WAKEUP,
            cal.timeInMillis,
            AlarmManager.INTERVAL_DAY,
            broadcast
        )

        Toast.makeText(this,"Remainder set successful",Toast.LENGTH_SHORT).show()
    }

    private fun showTimePicker() {

        picker = MaterialTimePicker.Builder()
            .setTimeFormat(TimeFormat.CLOCK_12H)
            .setHour(12)
            .setMinute(0)
            .setTitleText("Select remainder time")
            .build()

        picker.show(supportFragmentManager, "TrAIner")

        picker.addOnPositiveButtonClickListener {
            if (picker.hour > 12) {
                binding.textView.text =
                    String.format("%02d", picker.hour - 12) + " : " + String.format(
                        "%02d",
                        picker.minute
                    ) + "PM"
            } else {
                binding.textView.text = String.format("%02d", picker.hour) + " : " + String.format(
                    "%02d",
                    picker.minute
                ) + "AM"
            }
        }
    }

    private fun cancelAlarm() {
        alarmManager = getSystemService(ALARM_SERVICE) as AlarmManager
        val intent = Intent(this,AlarmManager::class.java)
        broadcast = PendingIntent.getBroadcast(this,0,intent,0)

        alarmManager.cancel(broadcast)

        Toast.makeText(this,"Remainder cancelled", Toast.LENGTH_LONG).show()
    }

}