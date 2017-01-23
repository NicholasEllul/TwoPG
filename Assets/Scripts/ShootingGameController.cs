/*
 * Created by: Nicholas Ellul
 * Created on: 01-July-2016
 * Created for: ICS4U
 * This script contains the code that manages the shooting game controller.
 * Code updated Oct 2016 by Nicholas Ellul
*/

using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ShootingGameController : MonoBehaviour {
	
    Transform location;
    public float movementSpeed;

    int limitUpper;
    int limitLower;
    public STARTINGDIRECTION start;
    public static int redAmmo;
    public static int blueAmmo;
    public AudioClip replenish;
    AudioSource audioPlayer;

	// States if the script is in the process of refillign ammo.
	static bool refilling = false;

    int numberOfBlockers;
    public UnityEngine.Object blockerPrefab;

    public enum STARTINGDIRECTION
    {
        Up,
        Down
    }

	void SpawnBlockers(int blockersLeftToSpawn)
    {
        // spawns a specific amount of blockers
		while(blockersLeftToSpawn > 1)
        {
            Instantiate(blockerPrefab);
			blockersLeftToSpawn--;
        }
        
    }

	public void toggleInfoText(string objName,bool status){
		//finds and toggles the text of an info UI element
	
		// Gets elements
		GameObject[] infoObjs = GameObject.FindGameObjectsWithTag("Info");
		infoObjs [0].GetComponent<Text>().enabled = false;

		// If that UI element is found, toggle its text off
		foreach (GameObject iterator in infoObjs) {
			if (iterator.name == objName) {
				iterator.GetComponent<Text> ().enabled = status;
			}
		}

	}

	public IEnumerator AmmoRegen(float time)
	{
		//regenerates the ammo of the players after a delay.
		toggleInfoText("ReloadingText",true);
        yield return new WaitForSeconds(time);
       
		// Play sound
		if(audioPlayer.isPlaying == false)
        {
            audioPlayer.PlayOneShot(replenish, 1);
        }

		// Hide text and replenish ammo
		toggleInfoText("ReloadingText",false);
        redAmmo = PlayerPrefs.GetInt("RedBullet");
        blueAmmo = PlayerPrefs.GetInt("BlueBullet");
        refilling = false;

    }

    void CheckAmmo()
    {
		//checks if ammo needs to be replensished
        if (redAmmo == 0 && blueAmmo == 0 && refilling == false)
        {
            refilling = true;
            StartCoroutine(AmmoRegen(2));
        }
    }

    public void ToggleDirection()
    {
		// Toggle a players vertical direction if within the bounderies
        if (transform.position.y < 3.7 && transform.position.y > -1.0)
        {
            movementSpeed = movementSpeed * (-1);
        }
    }
	// Use this for initialization
	void Start () {

		// Get resources
        location = GetComponent<Transform>();
        audioPlayer = GetComponent < AudioSource > ();
        redAmmo = PlayerPrefs.GetInt("RedBullet");
        blueAmmo = PlayerPrefs.GetInt("BlueBullet");
        numberOfBlockers = PlayerPrefs.GetInt("BlockerCount");
        SpawnBlockers(numberOfBlockers);

    }
   
    // Update is called once per frame
    void Update () {
		// While unpaused,
        if(PauseController.paused == false)
        {
			// Check if players need ammo
        	CheckAmmo();

			// Constantly alternate between going up and down
            location.Translate(0,movementSpeed,0);
            if(transform.position.y > 3.7 || transform.position.y < -1.0)
            {
                movementSpeed = movementSpeed * (-1);
               // switched = true;
            }
        }
        
    }
}
