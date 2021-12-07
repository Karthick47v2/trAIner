package com.dedsec_x47.trainer

import android.content.Intent
import android.net.Uri
import android.os.Bundle
import android.view.MenuItem
import android.view.View
import android.widget.Button
import android.widget.TextView
import androidx.appcompat.app.ActionBarDrawerToggle
import androidx.appcompat.app.AppCompatActivity
import androidx.drawerlayout.widget.DrawerLayout
import androidx.fragment.app.Fragment
import com.dedsec_x47.trainer.auth.UserDetails
import com.dedsec_x47.trainer.auth.getUserImage
import com.dedsec_x47.trainer.auth.setUserImage
import com.dedsec_x47.trainer.homeFragments.*
import com.facebook.AccessToken
import com.facebook.login.LoginManager
import com.google.android.material.imageview.ShapeableImageView
import com.google.android.material.navigation.NavigationView
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase
import com.google.firebase.storage.ktx.storage
import java.io.File


class HomeScreen : AppCompatActivity() {

    lateinit var toggle: ActionBarDrawerToggle
    lateinit var profPic: ShapeableImageView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_home)
        UserDetails().getAlluserNames()

        val navView: NavigationView = findViewById(R.id.navView)
        val hView: View = navView.getHeaderView(0)

        profPic = hView.findViewById(R.id.savProfileImage)
        profPic.setImageURI(getUserImage())

        val uname: TextView = hView.findViewById(R.id.tvFullName)
        uname.text = UserDetails().readData("Name")

        val drawLayout: DrawerLayout = findViewById(R.id.drawerLayout)
        toggle = ActionBarDrawerToggle(this,drawLayout, R.string.open, R.string.close)

        drawLayout.addDrawerListener(toggle)
        toggle.syncState()

        supportActionBar?.setDisplayHomeAsUpEnabled(true)
        navView.setNavigationItemSelectedListener {

            val intent1 = Intent(this, SettingsActivity::class.java)
            val intent2 = Intent(this, FeedbackActivity::class.java)
            val intent3 = Intent(this, SetAlarm::class.java)
            when (it.itemId) {
                R.id.miSettings -> startActivity(intent1)//Toast.makeText(applicationContext, "clicked settings", Toast.LENGTH_SHORT).show()
                R.id.miFeedback -> startActivity(intent2)//Toast.makeText(applicationContext, "clicked feedback", Toast.LENGTH_SHORT).show()
                R.id.miRemainder -> startActivity(intent3)
            }
            true
        }

        //for bottom navigation
        //to remove the icon tint
        val botNavView: com.google.android.material.bottomnavigation.BottomNavigationView =
            findViewById(R.id.bottomNavigationView)
        botNavView.itemIconTintList = null

        //TODO - set the home icon size bigger and set home icon as current icon

        val challengeFragment = ChallengeFragment()
        val statsFragment = StatsFragment()
        val homeFragment = HomeFragment()
        val leaderboardFragment = LeaderboardFragment()
        val profileFragment = ProfileFragment()

        //set current fragment as home
        setCurrentFragment(homeFragment)

        botNavView.setOnItemSelectedListener {
            when (it.itemId) {
                R.id.miChallenges -> setCurrentFragment(challengeFragment)
                R.id.miStats -> setCurrentFragment(statsFragment)
                R.id.miHome -> setCurrentFragment(homeFragment)
                R.id.miLeaderboard -> setCurrentFragment(leaderboardFragment)
                R.id.miProfile -> setCurrentFragment(profileFragment)
            }
            true
        }

        val btnLogout: Button = findViewById(R.id.btnLogOut)
        btnLogout.setOnClickListener {
            logout()
        }
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if (toggle.onOptionsItemSelected(item)) {
            return true
        }
        return super.onOptionsItemSelected(item)
    }

    //method - to set current fragment
    private fun setCurrentFragment(fragment: Fragment) {
        supportFragmentManager.beginTransaction().apply {
            replace(R.id.flFragment, fragment)
            commit()
        }
    }

    private fun logout() {
        if (AccessToken.getCurrentAccessToken() != null) {
            LoginManager.getInstance().logOut()
        }
        val auth = Firebase.auth
        auth.signOut()
    }
}