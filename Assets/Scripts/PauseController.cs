/*
 * Created by: Nicholas Ellul
 * Created on: 09-Jan-2016
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that controls everything involving the pause menu.
*/

using UnityEngine;
using System.Collections;

public class PauseController : MonoBehaviour {

    //global declaration
    static public bool paused = false;

    public void MainMenu()
    {//returns to main menu
        paused = false;
        Application.LoadLevel("MainMenu");
    }

    public void RestartGame()
    {//restarts game
        paused = false;
        Application.LoadLevel(Application.loadedLevelName);
    }
    public void PauseGame()
    {//toggles pause
        if(paused == false)
        {
     
           this.gameObject.SetActive(true);
            paused = true;
        }
        else { 
        paused = false;
            this.gameObject.SetActive(false);
        }
        Debug.Log("Toggle");
    }

	// Use this for initialization
	void Start () {
   

	}
	
	// Update is called once per frame
	void Update () {

	}
}
