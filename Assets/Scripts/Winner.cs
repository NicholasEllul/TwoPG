/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 *
 * This file contains code for 
 * the "YouWin" scene that occurs after a game
 * is completed.
 * 
 * Updated May 12th to check if it should use
 * the score from lava battle or gun slinger.
 */
using UnityEngine;
using System.Collections;

public class Winner : MonoBehaviour
{
    private SpriteRenderer _mySpriteRenderer;
    public static string lastScene;

    public void ReplayGame()
    {//replay level
        Application.LoadLevel(lastScene);
    }

    public void MainMenu()
    {
        Application.LoadLevel("MainMenu");
    }
    // Use this for initialization
    void Start()
    {
        //figure out what game was just played and get the score from it
        lastScene = PlayerPrefs.GetString("lastScene");
        _mySpriteRenderer = GetComponent<SpriteRenderer>();

        //assign colour of spinning player to the colour of the winner
        if (TextUpdater.redScore > TextUpdater.blueScore)
        {
            _mySpriteRenderer.color = Color.red;
        }
        else if(TextUpdater.redScore < TextUpdater.blueScore)
        {
            _mySpriteRenderer.color = Color.blue;
        }
    }

  
    void Update()
    {
        transform.Rotate(0, 0, 70 * Time.deltaTime);
    }
}
