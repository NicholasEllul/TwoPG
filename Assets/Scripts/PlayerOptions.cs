/*
 * Created by: Nicholas Ellul
 * Created on: 09-Jan-2016
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that controls everything in the options menu.
*/

using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerOptions : MonoBehaviour {
    //global declaration

    public INFO identity;

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
        BlockerCount
    }

    public void SetDefault()
    {//reset all rotation and speed values to default
        PlayerPrefs.SetInt("Start",0);
        Start();
    }

    public void SaveSetting(InputField nameOfInput)
    {//save the value the user wanted as a speed

        int value = int.Parse(nameOfInput.text);
        PlayerPrefs.SetInt(nameOfInput.name, value);
        Debug.Log(nameOfInput.name + " "+ nameOfInput.text);
    }

    void CheckPopulate()
    {
        //if no value has been given for each speed, populate those speeds with default values.

        int firstTimePlaying= PlayerPrefs.GetInt("Start");
        if(firstTimePlaying == 0)
        {
            PlayerPrefs.SetInt("RedRotation",10);
            PlayerPrefs.SetInt("RedSpeed",10);
            PlayerPrefs.SetInt("BlueRotation",10);
            PlayerPrefs.SetInt("BlueSpeed",10);
            PlayerPrefs.SetInt("Start", 1);

            PlayerPrefs.SetInt("RedBullet", 1);
            PlayerPrefs.SetInt("BlueBullet", 1);
            PlayerPrefs.SetInt("BlockerCount", 7);
        }
    }
	// Use this for initialization
	void Start () {
        PauseController.paused = false;
        CheckPopulate();
        _infoText = GetComponent<Text>();
        _myName = gameObject.name;  
    }
	
	// Update is called once per frame
	void Update () {

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
