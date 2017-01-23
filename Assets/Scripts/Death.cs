

/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that controls what happens when a player dies.
 * Code updated Oct 2016 by Nicholas Ellul
*/

using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Death : MonoBehaviour {

	public static bool alive = true;

    public static byte scoreToWin = 5;
    public static byte RedScore;
    public static byte BlueScore;

	public Animation animEH;
	public AudioClip grunt;

    private Vector2 _respawnLocation;
    private Quaternion _respawnRotation;
    private AudioSource _audi;

	const double UPPER_LIMIT = 4.5;
	const double LOWER_LIMIT = -1.8;
	const double LEFT_LIMIT = -6.2;
	const double RIGHT_LIMIT = 6.2;


    void Start () {

    	//reset  
        _respawnLocation = transform.position;
        _respawnRotation = transform.rotation;
        BlueScore = 0;
        RedScore = 0;         
		alive = true;
		PauseController.paused = false;
        _audi = GetComponent<AudioSource>();

    }

    public void Rip()
    {
        //declare object as "dead" and play the appropriate sounds and animations
        alive = false;
		Rotate.controlsEnabled = false;
		_audi.PlayOneShot(grunt,1);
        animEH.Play("Die");
        ScoreIncrement(this.gameObject.name);
    }

    protected IEnumerator GoToResultScene(int seconds)
    {
        //after a pause move onto the result scene
        yield return new WaitForSeconds(seconds);

		Debug.Log("Loaded");
		SceneManager.LoadScene("YouWin");
    }

    public void ScoreIncrement(string name)
    {
        //depending on who died, give a point to the other player
		if (name == "Red") {
			
			BlueScore += Rotate.scoreDebug;
			Debug.Log (BlueScore + "-- Blue");
		
		} 
		else if (name == "Blue") {
		
			RedScore += Rotate.scoreDebug;
			Debug.Log (RedScore + "-- Red");
		
		} 
		else {
		
			Debug.Log ("Something went wrong in ScoreIncrement");
		
		}

        Rotate.scoreDebug = 0;
        if (RedScore >= scoreToWin | BlueScore >= scoreToWin)
        {
            //if score reaches its limit, show cool 3d game over text
            GameObject.Find("WhiteLayer").GetComponent<Text>().text = "GAME OVER!";
            GameObject.Find("BlackLayer").GetComponent<Text>().text = "GAME OVER!";
			// Go to results
            StartCoroutine(GoToResultScene(2));

        }
    }


    IEnumerator Respawn(int seconds)
    {
        //freeze players and activates respawn
        yield return new WaitForSeconds(seconds);      

		//go back to spawn position
		transform.position = _respawnLocation;
		transform.rotation = _respawnRotation;

		// Play spawn animaiton and revive character
		animEH.Play("Spawn");
		alive = true;
		Rotate.controlsEnabled = true;

    }


    void Update()
    {

		if (alive == true)
        {
            //if position is in lava, die
			if (transform.position.x < LEFT_LIMIT ||
				transform.position.x > RIGHT_LIMIT ||
				transform.position.y > UPPER_LIMIT ||
				transform.position.y < LOWER_LIMIT)
            {
				
                Rip();

            }

        }
        else if (alive == false)
        {
           // Run the respawn process
			StartCoroutine(Respawn(4));
           
        }
    }

}