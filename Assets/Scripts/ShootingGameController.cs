using UnityEngine;
using System.Collections;

public class ShootingGameController : MonoBehaviour {
    Transform location;
    public float movementSpeed;
    int limitUpper;
    int limitLower;
    bool switched = false;
    public STARTINGDIRECTION start;
    public static int redAmmo;
    public static int blueAmmo;
    public AudioClip replenish;
    AudioSource audioPlayer;
    bool refilling = false;

    int numberOfBlockers;
    public UnityEngine.Object blockerPrefab;

    public enum STARTINGDIRECTION
    {
        Up,
        Down
    }

    void SpawnBlockers(int counter)
    {
        // starting postition and rotation
        while(counter > 1)
        {
            Instantiate(blockerPrefab);
            counter--;
        }
        //
    }


    IEnumerator AmmoRegen(float time)
    {

        yield return new WaitForSeconds(time);
        if(audioPlayer.isPlaying == false)
        {
            audioPlayer.PlayOneShot(replenish, 1);
        }
         redAmmo = PlayerPrefs.GetInt("RedBullet");
        blueAmmo = PlayerPrefs.GetInt("BlueBullet");
        refilling = false;
       
    }

    void CheckAmmo()
    {
        if (redAmmo == 0 && blueAmmo == 0 && refilling == false)
        {
            refilling = true;
            StartCoroutine(AmmoRegen(2));
        }
    }

    public void ToggleDirection()
    {
        if (transform.position.y < 3.7 && transform.position.y > -1.0)
        {
            movementSpeed = movementSpeed * (-1);
        }
    }
	// Use this for initialization
	void Start () {
        location = GetComponent<Transform>();
        audioPlayer = GetComponent < AudioSource > ();
        redAmmo = PlayerPrefs.GetInt("RedBullet");
        blueAmmo = PlayerPrefs.GetInt("BlueBullet");
        numberOfBlockers = PlayerPrefs.GetInt("BlockerCount");
        SpawnBlockers(numberOfBlockers);

       

    }
   
    // Update is called once per frame
    void Update () {
        if(PauseController.paused == false)
        {
                CheckAmmo();
                location.Translate(0,movementSpeed,0);
                if(transform.position.y > 3.7 || transform.position.y < -1.0)
                {
                    movementSpeed = movementSpeed * (-1);
                    switched = true;
            
                }
        }
        
    }
}
