using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ShootingGameController : MonoBehaviour {
	
    Transform location;
    public float movementSpeed;
	bool switched = false;
    int limitUpper;
    int limitLower;
    public STARTINGDIRECTION start;
    public static int redAmmo;
    public static int blueAmmo;
    public AudioClip replenish;
    AudioSource audioPlayer;
	static bool refilling = false;

    int numberOfBlockers;
    public UnityEngine.Object blockerPrefab;

    public enum STARTINGDIRECTION
    {
        Up,
        Down
    }

    void SpawnBlockers(int counter)
    {
        // starting postition and rotation
        while(counter > 1)
        {
            Instantiate(blockerPrefab);
            counter--;
        }
        
    }

	public void toggleInfoText(string objName,bool status){
		//finds and toggles the text of an info UI element
		Debug.Log("HOKE");
		GameObject[] infoObjs = GameObject.FindGameObjectsWithTag("Info");
		infoObjs [0].GetComponent<Text>().enabled = false;
		foreach (GameObject iterator in infoObjs) {
			if (iterator.name == objName) {
				iterator.GetComponent<Text> ().enabled = status;
			}
		}

	}

	public IEnumerator AmmoRegen(float time)
	{
		//regenerates the ammo of the players after a delay.
		toggleInfoText("ReloadingText",true);
        yield return new WaitForSeconds(time);
        if(audioPlayer.isPlaying == false)
        {
            audioPlayer.PlayOneShot(replenish, 1);
        }
		toggleInfoText("ReloadingText",false);
        redAmmo = PlayerPrefs.GetInt("RedBullet");
        blueAmmo = PlayerPrefs.GetInt("BlueBullet");
        refilling = false;

    }

    void CheckAmmo()
    {
		//checks if ammo needs to be replensished

        if (redAmmo == 0 && blueAmmo == 0 && refilling == false)
        {
            refilling = true;
            StartCoroutine(AmmoRegen(2));
        }
    }

    public void ToggleDirection()
    {
        if (transform.position.y < 3.7 && transform.position.y > -1.0)
        {
            movementSpeed = movementSpeed * (-1);
        }
    }
	// Use this for initialization
	void Start () {
		
		//Transform test = transform.Find("ReloadingText");
		//test.GetComponent(GameInfoController).BroadcastMessage("toggleThisVisibility");
		//Debug.Log(test.name);


        location = GetComponent<Transform>();
        audioPlayer = GetComponent < AudioSource > ();
        redAmmo = PlayerPrefs.GetInt("RedBullet");
        blueAmmo = PlayerPrefs.GetInt("BlueBullet");
        numberOfBlockers = PlayerPrefs.GetInt("BlockerCount");
        SpawnBlockers(numberOfBlockers);

    }
   
    // Update is called once per frame
    void Update () {
        if(PauseController.paused == false)
        {
        	CheckAmmo();
            location.Translate(0,movementSpeed,0);
            if(transform.position.y > 3.7 || transform.position.y < -1.0)
            {
                movementSpeed = movementSpeed * (-1);
                switched = true;
            }
        }
        
    }
}
