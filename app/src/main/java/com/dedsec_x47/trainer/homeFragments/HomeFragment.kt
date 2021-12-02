package com.dedsec_x47.trainer.homeFragments

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.dedsec_x47.trainer.R

class HomeFragment: Fragment() {

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        val view = inflater.inflate(R.layout.fragment_home, container, false)

        //view.findViewById<>()
        // TODO: GO TO STRENGTH.KT OR WEIGHTLOSS.KT OR MINIGAMES.KT ACCORDING TO SELECTED CARD

        return view
    }
}