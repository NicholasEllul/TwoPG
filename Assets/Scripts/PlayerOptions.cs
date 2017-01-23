/*
 * Created by: Nicholas Ellul
 * Created on: 09-Jan-2016
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that controls everything in the options menu.
 * Code updated Oct 2016 by Nicholas Ellul
*/

using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerOptions : MonoBehaviour {
    //global declaration

    public INFO identity;

	//lava battle
	const int DEFAULT_SPEEDS = 10;

	//gun slinger
	const int DEFAULT_AMMO_CAPACITY = 1;
	const int DEFAULT_BLOCKER_COUNT = 7;

    private Text _infoText;
    private string _myName;
    
    public enum INFO
    {
        None,
        RedRotation,
        RedSpeed,
        BlueRotation,
        BlueSpeed,
        RedBullet,
        BlueBullet,
        BlockerCount,
		DefaultButton
    }


	void resetLavaBattle(){
		PlayerPrefs.SetInt("RedRotation",DEFAULT_SPEEDS);
		PlayerPrefs.SetInt("RedSpeed",DEFAULT_SPEEDS);
		PlayerPrefs.SetInt("BlueRotation",DEFAULT_SPEEDS);
		PlayerPrefs.SetInt("BlueSpeed",DEFAULT_SPEEDS);
	}


	void resetGunSlinger(){
		PlayerPrefs.SetInt("RedBullet", DEFAULT_AMMO_CAPACITY);
		PlayerPrefs.SetInt("BlueBullet", DEFAULT_AMMO_CAPACITY);
		PlayerPrefs.SetInt("BlockerCount", DEFAULT_BLOCKER_COUNT);
	}


    public void SetDefault()
    {//reset all rotation and speed values to default
       
		if (gameObject.name == "resetLava") {
			resetLavaBattle ();
		}
		if (gameObject.name == "resetGunSlinger") {
			resetGunSlinger ();
		}

    }

    public void SaveSetting(InputField nameOfInput)
    {
		//save the value the user just set

        int value = int.Parse(nameOfInput.text);
        PlayerPrefs.SetInt(nameOfInput.name, value);

    }

    void CheckPopulate()
    {
        //if no value has been given for each option, populate those options with default values.

        int firstTimePlaying= PlayerPrefs.GetInt("Start");
        
		if(firstTimePlaying == 0)
        {
			
			resetGunSlinger ();
			resetLavaBattle ();

            PlayerPrefs.SetInt("Start", 1);


        }
    }
	// Use this for initialization
	void Start () {
		
		// Get required data
        PauseController.paused = false;
		_infoText = GetComponent<Text>();
		_myName = gameObject.name;  

		// Check if the values for the options are populated
		CheckPopulate();
     

    }
	
	// Update is called once per frame
	void Update () {
		
        PauseController.paused = false;

        //controls the text that shows user what the current value is 
        if (identity == INFO.RedSpeed)
        {
			
            _infoText.text = "Movement Speed: " + PlayerPrefs.GetInt(_myName);
       
		}
        if (identity == INFO.RedRotation)
        {
			
            _infoText.text = "Rotation Speed: " + PlayerPrefs.GetInt(_myName);

        }
        if (identity == INFO.BlueSpeed)
        {
			
            _infoText.text = "Movement Speed: " + PlayerPrefs.GetInt(_myName);

        }
        if (identity == INFO.BlueRotation)
        {
			
            _infoText.text = "Rotation Speed: " + PlayerPrefs.GetInt(_myName);

        }
        if (identity == INFO.RedBullet)
        {
			
            _infoText.text = "Bullet Count: " + PlayerPrefs.GetInt(_myName);

        }
        if (identity == INFO.BlueBullet)
        {
			
            _infoText.text = "Bullet Count: " + PlayerPrefs.GetInt(_myName);

        }
        if (identity == INFO.BlockerCount)
        {
			
            _infoText.text = "Blocker Count: " + PlayerPrefs.GetInt(_myName);

        }
    }
}
