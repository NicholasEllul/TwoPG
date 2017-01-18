/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that activates an event that switches scenes after a delay.
*/


using UnityEngine;
using System.Collections;

public class SwitchDelay : MonoBehaviour {

    //Global Declaration
    public string sceneName;
    public float timeToWait;

    public IEnumerator SceneSwitch(float secondsToWait)
    {//switch to scene after x amount of seconds
        yield return new WaitForSeconds(secondsToWait);

        Application.LoadLevel(sceneName);
    }

    // Use this for initialization
    void Start () {
        StartCoroutine(SceneSwitch(timeToWait));
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
