package com.dedsec_x47.trainer

import android.app.*
import android.content.BroadcastReceiver
import android.content.Context
import android.content.Intent
import android.os.Build
import androidx.core.app.NotificationCompat

const val CHANNEL_ID = "MessageNotification"
const val CHANNEL_NAME = "com.dedsec_x47.trainer"

class AlarmReceiver : BroadcastReceiver() {
//        override fun onReceive(context: Context, intent: Intent?) {
//
//        MyFirebaseMessagingService().generateNotification("DAILY NOTIFICATION", "do task")
//
//    }

    override fun onReceive(context: Context, intent: Intent?) {
        val notificationIntent =
            Intent(context, MainActivity::class.java) //on tap this activity will open
        val stackBuilder: TaskStackBuilder = TaskStackBuilder.create(context)
        stackBuilder.addParentStack(MainActivity::class.java)
        stackBuilder.addNextIntent(notificationIntent)
        val pendingIntent: PendingIntent = stackBuilder.getPendingIntent(
            0,
            PendingIntent.FLAG_UPDATE_CURRENT
        ) //getting the pendingIntent

        var builder: NotificationCompat.Builder =
            NotificationCompat.Builder(context)
        //val builder: Notification.Builder = Builder(context) //building the notification

        val notification: Notification = builder.setContentTitle("Daily notification")
            .setContentText("New Notification From Demo App..")
            .setTicker("New Message Alert!")
            .setSmallIcon(R.mipmap.ic_launcher)
            .setContentIntent(pendingIntent).build()
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            builder.setChannelId(CHANNEL_ID)
        }
        val notificationManager =
            context.getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
        //below creating notification channel, because of androids latest update, O is Oreo
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.O) {
            val channel = NotificationChannel(
                CHANNEL_ID,
                "NotificationDemo",
                NotificationManager.IMPORTANCE_DEFAULT
            )
            notificationManager.createNotificationChannel(channel)
        }
        notificationManager.notify(0, notification)
    }
}