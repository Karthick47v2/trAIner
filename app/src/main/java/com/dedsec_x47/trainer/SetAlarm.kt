package com.dedsec_x47.trainer

import android.app.AlarmManager
import android.app.PendingIntent
import android.content.Context
import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import java.util.*

class SetAlarm : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_set_alarm)
        setDailyAlarm()
        val intent = Intent(this, LogOut::class.java)//intent MainActivity2
        startActivity(intent)
    }

    private fun setDailyAlarm() {
        //use alarm manager for the notification
        val alarmManager = getSystemService(Context.ALARM_SERVICE) as AlarmManager
        //this intent will be called when taping the notification
        val notificationIntent = Intent(this, AlarmReceiver::class.java)
        //this pendingIntent will be called by the broadcast receiver
        val broadcast = PendingIntent.getBroadcast(
            this,
            0,
            notificationIntent,
            PendingIntent.FLAG_UPDATE_CURRENT
        )
        val cal = Calendar.getInstance() //getting calender instance
        var min =11
        var hour =21
        cal.timeInMillis = System.currentTimeMillis() //setting the time from device

        cal[Calendar.HOUR_OF_DAY] = hour// cal.set NOT cal.add
        cal[Calendar.MINUTE] = min
        cal[Calendar.SECOND] = 0
        alarmManager.setInexactRepeating(
            AlarmManager.RTC_WAKEUP,
            cal.timeInMillis,
            AlarmManager.INTERVAL_DAY,
            broadcast
        ) //alarm manager will repeat the notification each day at the set time
    }
}