package com.dedsec_x47.trainer.auth

import android.app.NotificationChannel
import android.app.NotificationManager
import android.app.PendingIntent
import android.content.Context
import android.content.Intent
import android.os.Build
import android.os.Build.VERSION_CODES
import android.widget.RemoteViews
import androidx.core.app.NotificationCompat
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.exercisePages.Challenge_popup
import com.google.firebase.messaging.FirebaseMessagingService
import com.google.firebase.messaging.RemoteMessage
const val channelId = "cloudMessageNotification"
const val channelName = "com.dedsec_x47.trainer.auth"

class MyFirebaseMessagingService : FirebaseMessagingService() {
    //generate the notification
    //attach the notification created with custom layout
    //show notification
    override fun onMessageReceived(remoteMessage: RemoteMessage) {
        if(remoteMessage.getNotification() != null){
            generateNotification(remoteMessage.notification!!.title!!, remoteMessage.notification!!.body!!)
        }
    }
    fun getRemoteView(title: String, message: String): RemoteViews {
        val remoteView = RemoteViews("com.dedsec_x47.trainer", R.layout.cloudmessagingservice)
        remoteView.setTextViewText(R.id.title, title)
        remoteView.setTextViewText(R.id.message, message)
        remoteView.setImageViewResource(R.id.cloudMessage, R.drawable.android_logo_2019)
        return remoteView
    }
    fun generateNotification(title: String, message: String) {
        val intent = Intent(this, Challenge_popup::class.java)
        intent.addFlags(Intent.FLAG_ACTIVITY_CLEAR_TOP)
        val pendingIntent = PendingIntent.getActivity(this, 0, intent, PendingIntent.FLAG_ONE_SHOT)
        //channel id, channel name
        var builder: NotificationCompat.Builder =
            NotificationCompat.Builder(applicationContext, channelId)
                .setSmallIcon(R.drawable.android_logo_2019)
                .setAutoCancel(true)
                .setVibrate(longArrayOf(1000, 1000, 1000, 1000))
                .setOnlyAlertOnce(true)
                .setContentIntent(pendingIntent)
        builder = builder.setContent(getRemoteView(title, message))
        val notificationManager =
            getSystemService(Context.NOTIFICATION_SERVICE) as NotificationManager
        if (Build.VERSION.SDK_INT >= VERSION_CODES.O) {
            val notificationChannel = NotificationChannel(channelId, channelName, NotificationManager.IMPORTANCE_HIGH)
            notificationManager.createNotificationChannel(notificationChannel)
        }
        notificationManager.notify(0,builder.build())
    }
}
