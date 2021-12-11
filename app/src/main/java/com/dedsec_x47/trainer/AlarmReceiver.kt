package com.dedsec_x47.trainer

import android.app.PendingIntent
import android.content.BroadcastReceiver
import android.content.ComponentName
import android.content.Context
import android.content.Intent
import android.content.pm.PackageManager
import android.util.Log
import androidx.core.app.NotificationCompat
import androidx.core.app.NotificationManagerCompat
import com.dedsec_x47.trainer.exercisePages.CreateNewChallenge
import com.dedsec_x47.trainer.exercisePages.instructions.Challenge_popup

//TODO:if notification comes in working it will open main activity

const val CHANNEL_ID = "MessageNotification"
const val CHANNEL_NAME = "com.dedsec_x47.trainer"

class AlarmReceiver : BroadcastReceiver() {

    override fun onReceive(context: Context, intent: Intent) {
        if (intent.action == "android.intent.action.BOOT_COMPLETED") {

            val receiver = ComponentName(context, AlarmReceiver::class.java)
            context.packageManager.setComponentEnabledSetting(
                receiver,
                PackageManager.COMPONENT_ENABLED_STATE_ENABLED,
                PackageManager.DONT_KILL_APP
            )

            val intent = Intent(context,Challenge_popup::class.java).apply {
                flags = Intent.FLAG_ACTIVITY_NEW_TASK or Intent.FLAG_ACTIVITY_CLEAR_TASK
            } //on tap this activity will open

            val pendingIntent: PendingIntent = PendingIntent.getActivity(context, 0, intent, 0)

            val builder = NotificationCompat.Builder(context, CHANNEL_ID)
                .setSmallIcon(R.mipmap.ic_launcher)   //set icon for notification
                .setContentTitle("It's time")              //set title of notification
                .setContentText("Do exercise")                    //this is notification message
                .setPriority(NotificationCompat.PRIORITY_HIGH) //set priority of notification
                .setContentIntent(pendingIntent)
                .setAutoCancel(true)

            with(NotificationManagerCompat.from(context)) {
                Log.d("Alarm", "Notification ALARM")
                notify(0, builder.build())
            }
        }
    }
}



