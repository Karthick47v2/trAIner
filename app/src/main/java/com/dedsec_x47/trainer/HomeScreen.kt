package com.dedsec_x47.trainer

import android.content.Intent
import android.os.Bundle
import android.provider.MediaStore
import android.util.Log
import android.view.MenuItem
import android.widget.Button
import androidx.appcompat.app.ActionBarDrawerToggle
import androidx.appcompat.app.AppCompatActivity
import androidx.drawerlayout.widget.DrawerLayout
import androidx.fragment.app.Fragment
import com.dedsec_x47.trainer.auth.UserDetails
import com.dedsec_x47.trainer.auth.isNewUser
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
    // TODO : RESTRICT LANDSCAPE ___ SEPARATELY FOR ACTIVITIES////////////////////////
    lateinit var toggle: ActionBarDrawerToggle
    lateinit var profPic: ShapeableImageView

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_home)

        val cacheFile = File(this.cacheDir, "profilePic")
        if(!isNewUser) {
            if ((!cacheFile.isDirectory)) {
                downloadAndSaveProPic()
            }else{
                setProfilePic()
            }
        }
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

        val head_Nav: com.google.android.material.navigation.NavigationView =
            findViewById(R.id.navView)

        profPic = findViewById(R.id.savProfileImage)
        profPic.setOnClickListener{
            selectProfileImage()
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

    private fun selectProfileImage() {
        val openGalleryIntent =
            Intent(Intent.ACTION_PICK, MediaStore.Images.Media.EXTERNAL_CONTENT_URI)
        startActivityForResult(openGalleryIntent, 100)
    }

    override fun onActivityResult(requestCode: Int, resultCode: Int, imgdata: Intent?) {
        super.onActivityResult(requestCode, resultCode, imgdata)
        if ((requestCode == 100) && (resultCode == RESULT_OK) && (imgdata != null) && (imgdata.data != null)) {
            val newUserImageUri = imgdata.data!!
            Log.d(" ", "Select Image done")
            UserDetails().saveProfilePic(newUserImageUri)
            //downloadAndSaveProPic()
        }
    }

    private fun downloadAndSaveProPic() {
        val storageRef = Firebase.storage.reference
        val picRef = storageRef.child("users/ProfileImage.jpg")
        File.createTempFile("profilePic", null, this.cacheDir)
        val cacheFile = File(this.cacheDir, "profilePic")

        picRef.getFile(cacheFile).addOnCompleteListener {
            Log.d("downloadAndSave", "file created")
        }.addOnFailureListener {
            Log.d("downloadAndSave", "file not created")
        }
        setProfilePic()
    }

    private fun setProfilePic(){
        val cacheFile = File(this.cacheDir, "profilePic")
        //val navView: ImageView = findViewById(R.id.savProfileImage)
        profPic.setImageURI(cacheFile.toUri())
    }

}