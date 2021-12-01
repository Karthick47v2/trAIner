package com.dedsec_x47.trainer

import android.content.Intent
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.view.MenuItem
import androidx.appcompat.app.ActionBarDrawerToggle
import androidx.drawerlayout.widget.DrawerLayout
import androidx.fragment.app.Fragment
import androidx.recyclerview.widget.LinearLayoutManager
import androidx.recyclerview.widget.RecyclerView
import com.dedsec_x47.trainer.homeFragments.*
import com.google.android.material.navigation.NavigationView

class HomeScreen : AppCompatActivity() {
// TODO : RESTRICT LANDSCAPE ___ SEPARATELY FOR ACTIVITIES////////////////////////
    lateinit var toggle: ActionBarDrawerToggle

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        //for slider menu
        val drawLayout: DrawerLayout = findViewById(R.id.drawerLayout)
        toggle = ActionBarDrawerToggle(this, drawLayout, R.string.open, R.string.close)
        drawLayout.addDrawerListener(toggle)
        toggle.syncState()

        supportActionBar?.setDisplayHomeAsUpEnabled(true)

        //TODO - this is toast, change it to click listener
        val navView: NavigationView = findViewById(R.id.navView)
        navView.setNavigationItemSelectedListener {
            val intent1 = Intent(this, SettingsActivity::class.java)
            val intent2 = Intent(this, FeedbackActivity::class.java)
            when(it.itemId){
                R.id.miSettings -> startActivity(intent1)//Toast.makeText(applicationContext, "clicked settings", Toast.LENGTH_SHORT).show()
                R.id.miFeedback-> startActivity(intent2)//Toast.makeText(applicationContext, "clicked feedback", Toast.LENGTH_SHORT).show()
            }
            true
        }

        //for bottom navigation
        //to remove the icon tint
        val botNavView : com.google.android.material.bottomnavigation.BottomNavigationView = findViewById(R.id.bottomNavigationView)
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
            when(it.itemId){
                R.id.miChallenges -> setCurrentFragment(challengeFragment)
                R.id.miStats -> setCurrentFragment(statsFragment)
                R.id.miHome -> setCurrentFragment(homeFragment)
                R.id.miLeaderboard -> setCurrentFragment(leaderboardFragment)
                R.id.miProfile -> setCurrentFragment(profileFragment)
            }
            true
        }

        // For recycler view - leaderboard
        val exampleList = generateDummyList(100)
        val recyclerview: RecyclerView = findViewById(R.id.recycler_view)

        recyclerview.adapter = ExampleAdapter(exampleList)
        recyclerview.layoutManager = LinearLayoutManager(this)
        recyclerview.setHasFixedSize(true)
    }

    override fun onOptionsItemSelected(item: MenuItem): Boolean {
        if(toggle.onOptionsItemSelected(item)){
            return true
        }
        return super.onOptionsItemSelected(item)
    }

    //method - to set current fragment
    private fun setCurrentFragment(fragment: Fragment){
        supportFragmentManager.beginTransaction().apply {
            replace(R.id.flFragment, fragment)
            commit()
        }
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