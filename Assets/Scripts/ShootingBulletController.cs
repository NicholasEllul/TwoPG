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
    bool shot = false;
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
         RedAmmo = PlayerPrefs.GetInt("RedBullet");
         BlueAmmo = PlayerPrefs.GetInt("BlueBullet");

		redGuy = GameObject.Find ("Red");
		blueGuy = GameObject.Find ("Blue");

        Application.targetFrameRate = 60;
        offset = new Vector3(-1, 0, 0);
        shot = false;
        
        audioPlayer = GameObject.Find("Ground").GetComponent<AudioSource>();
        myRotation = GetComponent<Transform>().rotation;

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
        shot = false;
        Destroy(this.gameObject);
    }
   

    public void Shoot()
    {
        if (PauseController.paused == false)
        {
            //fixes glitch where users can spam shoot button while game is loading and shoot multiple bulletss
            //rather than patching it ive just refined it so that i can exploit it.
            if (ShootingGameController.redAmmo < 0)
            {
                ShootingGameController.redAmmo = 0;
            }
            if (ShootingGameController.blueAmmo < 0)
            {
                ShootingGameController.blueAmmo = 0;
            }

			if (myId == ID.Red && ShootingGameController.redAmmo > 0)
            {
				Debug.Log ("red ammo" + ShootingGameController.redAmmo);
                ShootingGameController.redAmmo--;
                shot = true;
                Instantiate(bulletPrefab, myObj.transform.position - offset, myRotation);
                //    transform.position = myObj.transform.position;
                audioPlayer.PlayOneShot(shoot);
            }
			else if (myId == ID.Red && ShootingGameController.redAmmo < 1)
            {
               // Debug.Log("IH");
				redGuy.GetComponent<ShootingGameController>().ToggleDirection();
            }

            if (myId == ID.Blue && ShootingGameController.blueAmmo > 0)
            {
                ShootingGameController.blueAmmo--;
                shot = true;
                Instantiate(bulletPrefab, myObj.transform.position + offset, myRotation);
                audioPlayer.PlayOneShot(shoot);
            }
			else if (myId == ID.Blue && ShootingGameController.blueAmmo < 1)
            {
             //   Debug.Log("IH");
				blueGuy.GetComponent<ShootingGameController>().ToggleDirection();
            }

          //  Debug.Log(RedAmmo + " Red");
          //  Debug.Log(BlueAmmo + " Blue");
            // CheckAmmo()
        }
    }
    // Update is called once per frame
    void Hitsound()
    {
        
        audioPlayer.PlayOneShot(hit);
    }

    void OnCollisionEnter2D(Collision2D other)
    {//play sound when players collide

        if (other.gameObject.tag == "Blocker")
        {

        }
        else if(other.gameObject.tag == "Player")
        {
            if(other.gameObject.transform.name == "Red" && gameObject.tag != "Blocker")
            {
                TextUpdater.blueScore = TextUpdater.blueScore + 1;
                Hitsound();
            //    Debug.Log("Crash RED");
            }

            if(other.gameObject.transform.name == "Blue" && gameObject.tag != "Blocker")
            {
                TextUpdater.redScore = TextUpdater.redScore + 1;
                Hitsound();
             //   Debug.Log("Crash Blue");
            }

           // Debug.Log("Crash");
            Destroy(this.gameObject);
        }
       

    }

    void Update () {
		Debug.Log(ShootingGameController.redAmmo);
        RedAmmo = ShootingGameController.redAmmo;
        BlueAmmo = ShootingGameController.blueAmmo;
        if (PauseController.paused == false)
        {
            transform.Translate(0, bulletSpeed, 0);
        }
       
        /*  
            if(shot == true && myId == ID.Red)
            {

                transform.Translate(0,bulletSpeed,0);
            }


            if (shot == true && myId == ID.Blue)
            {
                transform.Translate(0, bulletSpeed, 0);
            }
            */
    }
}
