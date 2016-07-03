/*
 * Created by: Nicholas Ellul
 * Created on: 18-Dec-2015
 * Created for: ICS3U
 * Final Assignemnt
 * This contains player movement for lava game.
*/

using UnityEngine;
using System.Collections;

public class Rotate : MonoBehaviour
{
    //global declaration
    public bool updateSpeedConstantly;
    public DIRECTION startDirection;
    public AudioClip crash;
    public float volume;

    private Rigidbody2D rb;
    private AudioSource _audi;
    private bool _clicked = false;
    private int _rotationCoefficiant;
    private int _thrust;

    public static bool controlsEnabled = true;
    public static byte scoreDebug = 1;
    public static bool paused = false;
    public enum DIRECTION
    {
        left,
        right
    }

    void OnCollisionEnter2D(Collision2D crashed)
    {//play sound when players collide
        Debug.Log("Crash");
        _audi.PlayOneShot(crash, volume);
    }

    public void ButtonClicked()
    { //enable forward movement
        if (controlsEnabled == true)
        {
            _clicked = true;
        }

    }

    public void ButtonReleased()
    {//enable rotation
        _clicked = false;
    }

    void UpdateMySpeed()
    { //updates rotation speed and movement speed to users desired values
        if (startDirection == DIRECTION.left)
        {
            _rotationCoefficiant = PlayerPrefs.GetInt("RedRotation");
            _thrust = PlayerPrefs.GetInt("RedSpeed");
            
        }

        if (startDirection == DIRECTION.right)
        {
            _rotationCoefficiant = PlayerPrefs.GetInt("BlueRotation");
            _thrust = PlayerPrefs.GetInt("BlueSpeed");
        }

        _rotationCoefficiant = _rotationCoefficiant * 20;
        _thrust = _thrust * 10;
    }

    void Start()
    {
        _clicked = false;
        controlsEnabled = true;
        rb = GetComponent<Rigidbody2D>();
        _audi = GetComponent<AudioSource>();
        UpdateMySpeed();
    }


    void Update()
    {
        if(controlsEnabled == false)
        {
            
            ButtonReleased();
        }
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(updateSpeedConstantly == true)
        {
            UpdateMySpeed();
        }

        //if player is still active and game is not paused
        if(Death.numberOfLivingPlayers >= 2 & PauseController.paused == false)
        {
            //if button is being clicked
            if (_clicked == true)
            {
                scoreDebug = 1;
                if (startDirection == DIRECTION.left)
                {//add force in direction where they're facing at start
                    rb.AddRelativeForce(Vector2.left * _thrust);
                }
                if (startDirection == DIRECTION.right)
                {
                    rb.AddRelativeForce(Vector2.left * _thrust);
                }

            }
            else
            {

                //when not moving forward rotate
                if (startDirection == DIRECTION.left)
                {

                    transform.Rotate(0, 0, _rotationCoefficiant * Time.deltaTime);
                }
                if (startDirection == DIRECTION.right)
                {

                    transform.Rotate(0, 0, -_rotationCoefficiant * Time.deltaTime);
                }

            }
            //dont let collisions affect rotation
            rb.angularVelocity = 0;
        }
    }
}
