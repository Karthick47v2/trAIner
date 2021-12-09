package com.dedsec_x47.trainer.homeFragments

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import android.widget.TextView
import androidx.fragment.app.Fragment
import com.dedsec_x47.trainer.R
import com.dedsec_x47.trainer.auth.UserDetails

class StatsFragment : Fragment() {

    override fun onCreateView(
        inflater: LayoutInflater,
        container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {

        val view = inflater.inflate(R.layout.fragment_stats, container, false)

        view.findViewById<TextView>(R.id.txtPushUpCount).text = UserDetails().readData("Push up")
        view.findViewById<TextView>(R.id.txtChinUpCount).text = UserDetails().readData("Chin Up")
        view.findViewById<TextView>(R.id.txtSitUpCount).text = UserDetails().readData("Sit Up")
        view.findViewById<TextView>(R.id.txtBenchPressBarbellCount).text =
            UserDetails().readData("Bench press Barbell")
        view.findViewById<TextView>(R.id.txtBenchPressDumbbellCount).text =
            UserDetails().readData("Bench press Dumbbell")
        view.findViewById<TextView>(R.id.txtShoulderPressBarbellCount).text =
            UserDetails().readData("Shoulder Press Barbell")
        view.findViewById<TextView>(R.id.txtShoulderPressDumbbellCount).text =
            UserDetails().readData("Shoulder Press Dumbbell")
        view.findViewById<TextView>(R.id.txtHammerCurlCount).text =
            UserDetails().readData("Hammer Curl")
        view.findViewById<TextView>(R.id.txtPlankCount).text = UserDetails().readData("Plank")
        view.findViewById<TextView>(R.id.txtLegRaiseCount).text =
            UserDetails().readData("Leg raise")
        view.findViewById<TextView>(R.id.txtSquatCount).text = UserDetails().readData("Squat")
        view.findViewById<TextView>(R.id.txtSplitSquatCount).text =
            UserDetails().readData("Split Squat")

        return view
    }
}