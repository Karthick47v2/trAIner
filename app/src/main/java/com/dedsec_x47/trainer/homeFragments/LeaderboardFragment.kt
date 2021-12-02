package com.dedsec_x47.trainer.homeFragments

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.dedsec_x47.trainer.R

class LeaderboardFragment: Fragment() {

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val view = inflater.inflate(R.layout.fragment_leaderboard, container, false)

        val exampleList = generateDummyList(100)
        val recyclerView = view.findViewById<RecyclerView>(R.id.recycler_view)
        recyclerView.adapter = ExampleAdapter(exampleList)
        recyclerView.layoutManager = LinearLayoutManager(context)
        recyclerView.setHasFixedSize(true)
        return view
    }

     //TODO - This is a dummy list algorithm for the leaderboard -> get the list from firebase
    private fun generateDummyList(size: Int): List<ExampleItem> {

        val list = ArrayList<ExampleItem>()

        for (i in 0 until size) {
            val drawable = when (i % 3) {
                0 -> R.drawable.ic_profile_white
                1 -> R.drawable.ic_feedback
                else -> R.drawable.ic_settings
            }

            val item = ExampleItem(drawable, "Item $i", "Line 2")
            list += item
        }

        return list
    }
}
