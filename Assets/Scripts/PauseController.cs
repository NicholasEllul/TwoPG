/*
 * Created by: Nicholas Ellul
 * Created on: 09-Jan-2016
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that controls everything involving the pause menu.
 * Code updated Oct 2016 by Nicholas Ellul
*/

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class PauseController : MonoBehaviour {

    //global declaration
    static public bool paused = false;

    public void MainMenu()
    {//returns to main menu
		
        paused = false;
		SceneManager.LoadScene("MainMenu");

    }

    public void RestartGame()
    {//restarts game
		
        paused = false;
		SceneManager.LoadScene(SceneManager.GetActiveScene().name);

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
		GameObject[] infoObjs = GameObject.FindGameObjectsWithTag("Info");
		Debug.Log (infoObjs[0].name);
		infoObjs [0].GetComponent<Text>().enabled = false;

	}
	
	// Update is called once per frame
	void Update () {

	}
}
