/*
 * Created by: Nicholas Ellul
 * Created on: 01-July-2016
 * Created for: ICS4U
 * This script contains the code that the bullet prefab uses when it gets
 * created.
 * Code updated Oct 2016 by Nicholas Ellul
*/
using UnityEngine;
using System.Collections;

public class ShootingBulletController : MonoBehaviour {


  
	GameObject redGuy;
	GameObject blueGuy;
    int frame;
    GameObject myObj;
    public static int RedAmmo;
    public static int BlueAmmo;
    public float bulletSpeed;
    public ID myId;
    public Object bulletPrefab;
    Quaternion myRotation;
    public Vector3 offset;
    public AudioClip shoot;
    AudioSource audioPlayer;
    public AudioClip hit;

    public enum ID
    {
        Red,
        Blue
    }

	// Use this for initialization
	void Start () {

		// Get ammo
        RedAmmo = PlayerPrefs.GetInt("RedBullet");
        BlueAmmo = PlayerPrefs.GetInt("BlueBullet");

		// Get game objects
		redGuy = GameObject.Find ("Red");
		blueGuy = GameObject.Find ("Blue");


        Application.targetFrameRate = 60;

		// Offset for where the bullets will shoot from
        offset = new Vector3(-1, 0, 0);
        
        audioPlayer = GameObject.Find("Ground").GetComponent<AudioSource>();
        myRotation = GetComponent<Transform>().rotation;

		// Get current game object
        if(myId == ID.Blue)
        {
            myObj = GameObject.Find("Blue");
        }
        else if(myId == ID.Red)
        {
            myObj = GameObject.Find("Red");           
        }
        
    }

    void OnBecameInvisible()
    {
		// Delete the bullet/blocker
        Destroy(this.gameObject);
    }
   

    public void Shoot()
    {
        if (PauseController.paused == false)
        {
            //fixes glitch where users can spam shoot button while game is loading and shoot multiple bullets
            //past ammo capacity. Rather than patching it ive just refined it so that i can have fun with it.
            if (ShootingGameController.redAmmo < 0)
            {
                ShootingGameController.redAmmo = 0;
            }
            if (ShootingGameController.blueAmmo < 0)
            {
                ShootingGameController.blueAmmo = 0;
            }

			// Shooting code for red
			if (myId == ID.Red){

				if (ShootingGameController.redAmmo > 0) {
					
					ShootingGameController.redAmmo--;
					Instantiate(bulletPrefab, myObj.transform.position - offset, myRotation);
					audioPlayer.PlayOneShot(shoot);
				}
				redGuy.GetComponent<ShootingGameController>().ToggleDirection();

            }

			// Shooting code for blue
			if (myId == ID.Blue)
            {
				if (ShootingGameController.blueAmmo > 0) {

					ShootingGameController.blueAmmo--;
					Instantiate (bulletPrefab, myObj.transform.position + offset, myRotation);
					audioPlayer.PlayOneShot (shoot);
				}
				blueGuy.GetComponent<ShootingGameController>().ToggleDirection();
               
            }
        }
    }

    // Update is called once per frame
    void Hitsound()
    {
        
        audioPlayer.PlayOneShot(hit);
    }

    void OnCollisionEnter2D(Collision2D other)
    {//play sound when players collide

		if(other.gameObject.tag == "Player")
        {
            if(other.gameObject.transform.name == "Red" && gameObject.tag != "Blocker")
            {
                TextUpdater.blueScore = TextUpdater.blueScore + 1;
                Hitsound();
       
            }

            if(other.gameObject.transform.name == "Blue" && gameObject.tag != "Blocker")
            {
                TextUpdater.redScore = TextUpdater.redScore + 1;
                Hitsound();
            }
	
            Destroy(this.gameObject);
        }
       

    }

    void Update () {

		// Sync ammo between the two scripts
        RedAmmo = ShootingGameController.redAmmo;
        BlueAmmo = ShootingGameController.blueAmmo;

		// Have bullet constantly moving
        if (PauseController.paused == false)
        {
            transform.Translate(0, bulletSpeed, 0);
        }
    }
}
