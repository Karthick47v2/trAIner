package com.dedsec_x47.trainer.aiTrainer

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle

import android.widget.ImageView
import android.widget.TextView
import com.dedsec_x47.trainer.R


class FullImageView : AppCompatActivity() {

    var imageView: ImageView? = null
    var textView: TextView? = null
    override fun onCreate(savedInstanceState: Bundle?) {

        super.onCreate(savedInstanceState)
        setContentView( R.layout.full_image_view)
        imageView = findViewById(R.id.imgFullViewPhoto)
        textView = findViewById(R.id.tvName)
        val intent = intent

        if (intent.extras != null) {
            val selectedName = intent.getStringExtra("name")
            val selectedImage = intent.getIntExtra("image", 0)
            textView?.setText(selectedName)
            imageView?.setImageResource(selectedImage)
        }

    }
}