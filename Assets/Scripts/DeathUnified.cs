/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that controls what happens when a player dies. this will
 * hopefully be more portable than the other death file.
 * Code updated Oct 2016 by Nicholas Ellul
*/

using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class DeathUnified : MonoBehaviour
{

    public static int scoreToWin = 5;
    void Start()
    {
		
    }

    protected IEnumerator GoToResultScene(int seconds)
    {
        //after a pause move onto the result scene
  
        yield return new WaitForSeconds(seconds);
        PauseController.paused = false;
        GameObject.Find("WhiteLayer").GetComponent<Text>().text = "";
        GameObject.Find("BlackLayer").GetComponent<Text>().text = "";
        Application.LoadLevel("YouWin");

    }


    void Update()
    {
		// If a player has a winning score
        if (TextUpdater.redScore >= scoreToWin|TextUpdater.blueScore >= scoreToWin)
        {
			// Sets it to 5 to prevent additional bullets hitting and increasing it past 5
            if(TextUpdater.redScore > 5)
            {
				
                TextUpdater.redScore = 5;

			}

            if (TextUpdater.blueScore > 5)
            {
            
				TextUpdater.blueScore = 5;
            
			}

            GameObject.Find("WhiteLayer").GetComponent<Text>().text = "GAME OVER!";
            GameObject.Find("BlackLayer").GetComponent<Text>().text = "GAME OVER!";
            PauseController.paused = true;
            StartCoroutine(GoToResultScene(2));

        }
        else
        {
            //WHAT HAPPENS THE REST OF THE TIME

        }
       
    }
}
