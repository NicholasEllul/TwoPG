/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that controls what happens when a player dies. this will
 hopefully be more portable than the other death file.
*/

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DeathUnified : MonoBehaviour
{

    public string _stage;
    public static int scoreToWin = 5;
    void Start()
    {
        PlayerPrefs.SetString("lastScene", Application.loadedLevelName);

    }

    protected IEnumerator GoToResultScene(int seconds)
    {
        //after a pause move onto the result scene
        Debug.Log("Loaded");
        yield return new WaitForSeconds(seconds);
        PauseController.paused = false;
        GameObject.Find("WhiteLayer").GetComponent<Text>().text = "";
        GameObject.Find("BlackLayer").GetComponent<Text>().text = "";
        Application.LoadLevel("YouWin");

    }


    void Update()
    {
        if (TextUpdater.redScore >= scoreToWin|TextUpdater.blueScore >= scoreToWin)
        {
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
