/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that updates text to show _score
*/

/* update april 16th 2016. Made it portable so it will show score for either minigame*/
using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TextUpdater : MonoBehaviour {
   //global declaration
    public TEAM colour;
    public float seconds;

    public static int blueScore;
    public static int redScore;
     GAME currentGame;
    string lastScene;
    private Text _score;

     enum GAME
    {
        Lava,
        Shoot,
        neutral
    }
     public enum TEAM
    {
        Red,
        Blue,
        None 
    }

    public IEnumerator Dissapear(float timeToWait)
    {//make text dissapear
        yield return new WaitForSeconds(timeToWait);

        gameObject.SetActive(false);
    } 

	// Use this for initialization
	void Start () {

        string currentScene = Application.loadedLevelName;
        lastScene = PlayerPrefs.GetString("lastScene");
        _score = GetComponent<Text>();

        if(currentScene != "YouWin")
        {
            blueScore = 0;
            redScore = 0;
        }
        

        
        if(gameObject.name == "RedScore")
        {
            colour = TEAM.Red;
        }
        else if(gameObject.name == "BlueScore")
        {
            colour = TEAM.Blue;
        }
        else
        {
            StartCoroutine(Dissapear(seconds));
        }
	}
	
	// Update is called once per frame
	void Update () {

        if (lastScene == "ShootingGame")
        {
            currentGame = GAME.Shoot;
        }

        if (lastScene == "LavaBattle")
        {
            currentGame = GAME.Lava;
        }

        if (currentGame == GAME.Lava)
        {
            blueScore = Death.BlueScore;
            redScore = Death.RedScore;
        }

        if(colour == TEAM.Blue)
        {
            _score.text = blueScore.ToString();
        }
        else if(colour == TEAM.Red)
        {
            _score.text = redScore.ToString();
        }
	}
}
