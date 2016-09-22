

/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that controls what happens when a player dies
*/

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Death : MonoBehaviour {

    public  bool alive = true;


    public static byte scoreToWin = 5;
    public static byte RedScore;
    public static byte BlueScore;
    public Animation animEH;
    public static byte numberOfLivingPlayers = 2;
    public AudioClip grunt;


    private Vector2 _respawnLocation;
    private Quaternion _respawnRotation;
    private AudioSource _audi;


    // Use this for initialization

  

    void Start () {

            //reset  
            _respawnLocation = transform.position;
            _respawnRotation = transform.rotation;
            BlueScore = 0;
            RedScore = 0;         
        
            _audi = GetComponent<AudioSource>();
            numberOfLivingPlayers = 2;
            alive = true;
            PauseController.paused = false;
        PlayerPrefs.SetString("lastScene", Application.loadedLevelName);

    }

    public void Rip()
    {
        //declare object as "dead" and update score
        alive = false;
        numberOfLivingPlayers = 0;
        _audi.PlayOneShot(grunt,1);
        animEH.Play("Die");
        ScoreIncrement(this.gameObject.name);
    }

    protected IEnumerator GoToResultScene(int seconds)
    {
        //after a pause move onto the result scene
        Debug.Log("Loaded");
        yield return new WaitForSeconds(seconds);
        Application.LoadLevel("YouWin");

    }

    public void ScoreIncrement(string name)
    {
        //depending on who died, give a point to the other player
        if (name == "Red")
        {
            BlueScore += Rotate.scoreDebug;
            Debug.Log(BlueScore + "-- Blue");
        }
        else
        {
            RedScore += Rotate.scoreDebug;
            Debug.Log(RedScore + "-- Red");
        }

        Rotate.scoreDebug = 0;
        if (RedScore >= scoreToWin | BlueScore >= scoreToWin)
        {
            //if score reaches its limit, show cool 3d game over text
            GameObject.Find("WhiteLayer").GetComponent<Text>().text = "GAME OVER!";
            GameObject.Find("BlackLayer").GetComponent<Text>().text = "GAME OVER!";
            StartCoroutine(GoToResultScene(2));
        }
    }
 
    public void Respawn()
    {
      //go back to spawn position
      
        transform.position = _respawnLocation;
        transform.rotation = _respawnRotation;
      
        animEH.Play("Spawn");
        numberOfLivingPlayers +=1;
        alive = true;
        Rotate.controlsEnabled = true;

    }

    IEnumerator FreezeRespawn(int seconds)
    {
        //freeze players and activate respawn
        alive = false;
        yield return new WaitForSeconds(seconds);      
        Respawn();
    }


    void Update()
    {

        if (numberOfLivingPlayers >= 2)
        {
            alive = true;

            //if position is in lava, die
            if (transform.position.x < -6.2)
            {//too left
                Rip();
            }
            if (transform.position.x > 6.2)
            {//too right
                Rip();
            }
            if (transform.position.y > 4.5)
            {//too high
                Rip();
            }
            if (transform.position.y < -1.8)
            {//too low
                Rip();
            }

        }

        else if (numberOfLivingPlayers == 0 && alive == false)
        {
            
            StartCoroutine(FreezeRespawn(4));
          //I DONT KNOW WHAT TO DO HERE  StartCoroutine((7.9f));
        }
        if(numberOfLivingPlayers < 2)
        {
             alive = false;
            Rotate.controlsEnabled = false;      
            
        }
    }
}
