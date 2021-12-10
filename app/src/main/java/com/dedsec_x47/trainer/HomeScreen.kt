package com.dedsec_x47.trainer

import android.content.Intent
import android.os.Bundle
import android.util.Log
import android.view.MenuItem
import android.view.View
import android.widget.Button
import android.widget.TextView
import androidx.appcompat.app.ActionBarDrawerToggle
import androidx.appcompat.app.AlertDialog
import androidx.appcompat.app.AppCompatActivity
import androidx.core.os.HandlerCompat.postDelayed
import androidx.drawerlayout.widget.DrawerLayout
import androidx.fragment.app.Fragment
import com.dedsec_x47.trainer.auth.BooVariable
import com.dedsec_x47.trainer.auth.SignIn
import com.dedsec_x47.trainer.auth.UserDetails
import com.dedsec_x47.trainer.auth.getUserImage
import com.dedsec_x47.trainer.homeFragments.*
import com.facebook.AccessToken
import com.facebook.login.LoginManager
import com.google.android.material.imageview.ShapeableImageView
import com.google.android.material.navigation.NavigationView
import com.google.firebase.auth.ktx.auth
import com.google.firebase.ktx.Firebase

class HomeScreen : AppCompatActivity() {

    lateinit var toggle: ActionBarDrawerToggle
    lateinit var profPic: ShapeableImageView
    lateinit var navView: NavigationView
    lateinit var hView: View
    lateinit var uname: TextView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_home)
        UserDetails().getAlluserNames()

        navView = findViewById(R.id.navView)
        hView = navView.getHeaderView(0)

        profPic = hView.findViewById(R.id.savProfileImage)
        profPic.setImageURI(getUserImage())

        uname = hView.findViewById(R.id.tvFullName)
        uname.text = UserDetails().readData("Name")

        val drawLayout: DrawerLayout = findViewById(R.id.drawerLayout)
        toggle = ActionBarDrawerToggle(this, drawLayout, R.string.open, R.string.close)

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

        botNavView.setSelectedItemId(R.id.miHome)

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

        updateName()
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
        val intent = Intent(this, SignIn::class.java)
        if (AccessToken.getCurrentAccessToken() != null) {
            LoginManager.getInstance().logOut()
        }
        val auth = Firebase.auth
        auth.signOut()
        startActivity(intent)
        finish()
    }

    private fun updateName() {
        isNameUpdated.listener = object : BooVariable.ChangeListener {
            override fun onChange() {
                Log.d("BOOL", isNameUpdated.get().toString())
                if (isNameUpdated.get()) {
                    uname.text = UserDetails().readData("Name")
                    isNameUpdated.set(false)
                }
            }
        }
    }
}