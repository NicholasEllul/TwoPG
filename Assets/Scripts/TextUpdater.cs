/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that updates text to show _score
*/

/* update april 16th 2016. Made it portable so it will show score for either minigame*/

/* update January 18th. Rewrote it so that all future games won't have to keep track 
 * of their own score. They will all score themselves in this game, and the script will show the
 * correct score accordingly allowing any additional. This lays the ground work for any future games. */

using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;

public class TextUpdater : MonoBehaviour {
	//global declaration
	public TEAM colour;
	public float seconds;

	public static int blueScore;
	public static int redScore;
	GAME currentGame;
	string scoredScene = "";
	private Text _score;

	enum GAME
	{
		Lava,
		Shoot,
		Soccer,
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


		_score = GetComponent<Text>();
		string thisScene = SceneManager.GetActiveScene ().name;

		if(thisScene != "YouWin")
		{
			// If this isnt the results scene, cache this scene
			// name so that the results scene knows what results
			// to use
			PlayerPrefs.SetString("lastScene",thisScene);

			// Reset score
			blueScore = 0;
			redScore = 0;	
			scoredScene = thisScene;
		}

		// In the context of the results scene, it is getting the previous scene that had a game going on
		// In the context of any of the games scenes, the scoredScene variable refers to 
		// the current scene. 
		scoredScene = PlayerPrefs.GetString ("lastScene");

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
			// Code for the dissapearing text at the start
			StartCoroutine(Dissapear(seconds));
		}
	}

	// Update is called once per frame
	void Update () {

		if (scoredScene == "ShootingGame")
		{
			currentGame = GAME.Shoot;
		}

		if (scoredScene == "LavaBattle")
		{
			
			currentGame = GAME.Lava;
		}

		if (scoredScene == "Soccer")
		{
			currentGame = GAME.Soccer;
		}

		// Look at the scores from the lava game
		if (currentGame == GAME.Lava)
		{
			blueScore = Death.BlueScore;
			redScore = Death.RedScore;
		}

		//Convert the score to text on the screen.
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