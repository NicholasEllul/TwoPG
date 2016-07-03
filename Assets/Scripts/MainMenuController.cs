/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that allows the main menu to function
*/

using UnityEngine;
using System.Collections;

public class MainMenuController : MonoBehaviour {

    //global declaration
    static bool hidden;

//    public string scene;
    public float timeToWait; 
    public AudioClip soundToPlay;
    public GameObject objToShow;
    public GameObject objToHide;
    public float volume;

    private AudioSource _soundEffect;
    

    public void Hide()
    {//toggle the about menu
        if(hidden == false)
        {
        objToHide.SetActive(false);
        objToShow.SetActive(true);
            hidden = true;
        }
        else if(hidden == true)
        {
            objToHide.SetActive(true);
            objToShow.SetActive(false);
            hidden = false;
        }

    }
    public void OptionsSwitch(string scene)
    {
        StartCoroutine(SceneSwitch(0,scene));
    }
    public void DirectSwitch(string scene,int time)
    {
        //play a nice sound and then switch to the desired scene
        _soundEffect = GetComponent<AudioSource>();
        StartCoroutine(SceneSwitch(time,scene));

        if(_soundEffect.isPlaying == false)
        {        
            _soundEffect.PlayOneShot(soundToPlay, volume);
        }
    }
   
    public IEnumerator SceneSwitch(float secondsToWait,string sceneName)
    {//launch scene after x seconds
        yield return new WaitForSeconds(0);

        Application.LoadLevel(sceneName);

    }

    // Use this for initialization
    void Start()
    {
        hidden = false;
        TextUpdater.redScore = 0;
        TextUpdater.blueScore = 0;
    }

    // Update is called once per frame
    void Update()
    {

    }
}
