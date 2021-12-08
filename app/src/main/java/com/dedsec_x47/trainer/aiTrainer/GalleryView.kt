package com.dedsec_x47.trainer.aiTrainer

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import com.dedsec_x47.trainer.R
import android.content.Context
import android.content.Intent
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.*
import android.widget.AdapterView.OnItemClickListener


class GalleryView : AppCompatActivity() {
    private var gridView: GridView? = null
    private var names = arrayOf(
        "image1",
        "image2",
        "image3",
        "image4",
        "image5",
        "image6",
        "image7",
        "image8",
        "image9",
        "image10",
        "image11",
        "image12"
    )
    private var images = intArrayOf(
        R.drawable.img_dead_lift,
        R.drawable.img_bench_press_barbell,
        R.drawable.img_barbell_shoulder_press,
        R.drawable.img_ins_chinup1,
        R.drawable.img_ins_deadlift2,
        R.drawable.img_hammer_curls,
        R.drawable.img_push_up,
        R.drawable.img_plank,
        R.drawable.img_chin_up,
        R.drawable.img_ins_squat1,
        R.drawable.img_ins_shoulderpress_barbell2,
        R.drawable.img_ins_pushup2
    )

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_gallery_view)

        gridView = findViewById(R.id.gvWrongPoses)

        val customAdapter = CustomAdapter(names, images, this)

        gridView?.adapter = customAdapter
        gridView?.onItemClickListener = OnItemClickListener { adapterView, view, i, l ->
            val selectedName = names[i]
            val selectedImage = images[i]
            startActivity(
                Intent(this, FullImageView::class.java).putExtra("name", selectedName).putExtra("image", selectedImage)
            )
        }
    }

    inner class CustomAdapter(
        private val imageNames: Array<String>,
        private val imagesPhoto: IntArray,
        private val context: Context
    ) :
        BaseAdapter() {
        private val layoutInflater: LayoutInflater = context.getSystemService(LAYOUT_INFLATER_SERVICE) as LayoutInflater

        override fun getCount(): Int {
            return imagesPhoto.size
        }

        override fun getItem(i: Int): Any? {
            return null
        }

        override fun getItemId(i: Int): Long {
            return 0
        }

        override fun getView(i: Int, view0: View?, viewGroup: ViewGroup): View {
            var view = view0
            if (view == null) {
                view = layoutInflater.inflate(R.layout.row_item_image, viewGroup, false)
            }
            val tvName = view?.findViewById<TextView>(R.id.tvName)
            val imageView = view?.findViewById<ImageView>(R.id.imgTempPhoto)
            tvName?.text = imageNames[i]
            imageView?.setImageResource(imagesPhoto[i])
            return view!!
        }
     }

}