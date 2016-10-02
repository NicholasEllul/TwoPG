/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that allows the main menu to function.
 * Code updated Oct 2016 by Nicholas Ellul
*/

using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MainMenuController : MonoBehaviour {

    //global declaration
    static bool hidden;

    public float timeToWait; 
    public AudioClip soundToPlay;
    public GameObject objToShow;
    public GameObject objToHide;
    public float volume;

    private AudioSource _soundEffect;
    

    public void Hide()
    {//toggle the about menu
        if(hidden == false)
        {
			
        	objToHide.SetActive(false);
        	objToShow.SetActive(true);
        	hidden = true;
        
		}
        else if(hidden == true)
        {
        
			objToHide.SetActive(true);
            objToShow.SetActive(false);
            hidden = false;
        
		}

    }


	public void OptionsSwitch(string scene)
    {
    	//Switch to a scene instantly
		SceneManager.LoadScene(scene);

		//StartCoroutine(SceneSwitch(waitTime,scene));
    
	}

    // Use this for initialization
    void Start()
    {
		
        hidden = false;
        TextUpdater.redScore = 0;
        TextUpdater.blueScore = 0;
    
	}

    // Update is called once per frame
    void Update()
    {

    }
}
