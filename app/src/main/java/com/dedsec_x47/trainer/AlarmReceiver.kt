package com.dedsec_x47.trainer

import android.app.PendingIntent
import android.content.BroadcastReceiver
import android.content.Context
import android.content.Intent
import android.util.Log
import androidx.core.app.NotificationCompat
import androidx.core.app.NotificationManagerCompat

const val CHANNEL_ID = "MessageNotification"
const val CHANNEL_NAME = "com.dedsec_x47.trainer"
/*
class AlarmReceiver : BroadcastReceiver() {

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
*/

class AlarmReceiver : BroadcastReceiver() {

    override fun onReceive(context: Context, intent: Intent) {
        Log.d("reminder", "i am on receive")
        val intent = Intent(context, LogOut::class.java).apply {
            flags = Intent.FLAG_ACTIVITY_NEW_TASK or Intent.FLAG_ACTIVITY_CLEAR_TASK
        } //on tap this activity will open

        val pendingIntent: PendingIntent = PendingIntent.getActivity(context, 0, intent, 0 )

        val builder = NotificationCompat.Builder(context, CHANNEL_ID)
            .setSmallIcon(R.drawable.android_logo_2019)   //set icon for notification
            .setContentTitle("Notification")              //set title of notification
            .setContentText("Do Task")                    //this is notification message
            .setPriority(NotificationCompat.PRIORITY_HIGH) //set priority of notification
            .setContentIntent(pendingIntent)
            .setAutoCancel(true)

        with(NotificationManagerCompat.from(context)) {
            // notificationId is a unique int for each notification that you must define
            Log.d("remainder", "i am notification")
            notify(0, builder.build())
        }
    }
}

