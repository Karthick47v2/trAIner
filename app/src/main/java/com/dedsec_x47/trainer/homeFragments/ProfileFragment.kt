package com.dedsec_x47.trainer.homeFragments

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.fragment.app.Fragment
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.UserDetails

class ProfileFragment : Fragment() {
    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {

        val view = inflater.inflate(R.layout.fragment_profile, container, false)
        view.findViewById<TextView>(R.id.tvFullName).text = UserDetails().readData("Full Name")
        view.findViewById<TextView>(R.id.username_field).text = UserDetails().readData("Name")
        view.findViewById<TextView>(R.id.tvGetName).text = UserDetails().readData("Name")
        view.findViewById<TextView>(R.id.tvGetGender).text = UserDetails().readData("Gender")
        view.findViewById<TextView>(R.id.tvGetAge).text = UserDetails().readData("Age")
        view.findViewById<TextView>(R.id.tvGetEmail).text = UserDetails().readData("Email")
        return view
    }

}