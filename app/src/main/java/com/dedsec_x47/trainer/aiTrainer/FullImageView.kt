package com.dedsec_x47.trainer.aiTrainer

import android.content.Intent
import android.media.Image
import android.net.Uri
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

import android.widget.ImageView
import android.widget.TextView
import com.bumptech.glide.Glide
import com.dedsec_x47.trainer.R


class FullImageView : AppCompatActivity() {

    //var textView: TextView? = null*/
    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        setContentView( R.layout.full_image_view)

        var imageView: ImageView = findViewById(R.id.imgFullViewPhoto)


        var callingActivityIntent: Intent = getIntent()

        if(callingActivityIntent != null){
            var imgUri = callingActivityIntent.data
            if(imgUri != null && imageView != null){
                Glide.with(this).load(imgUri).into(imageView)
            }
        }
        /*textView = findViewById(R.id.tvName)
        val intent = intent

        if (intent.extras != null) {
            val selectedName = intent.getStringExtra("name")
            val selectedImage = intent.getIntExtra("image", 0)
            textView?.setText(selectedName)
            imageView?.setImageResource(selectedImage)
        }*/


    }
}