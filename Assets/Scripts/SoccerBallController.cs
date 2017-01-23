/*
 * Created by: Nicholas Ellul
 * Created on: 18-Jan-2017
 * Created for: ICS4U
 * Final Assignemnt
 * This file contains code that controls the soccer ball and the soccer game interactions.
 * and soccer game interactions.
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class SoccerBallController : MonoBehaviour {

	// accessable from the editor 
	public AudioClip goalSound;
	public AudioClip kickSound;

	// constants for the goal line
	private const float LEFT_GOAL_X = -6.30f;
	private const float RIGHT_GOAL_X = 6.35f;

	// constant for the wall bounciness
	private const float WALL_BOUNCINESS = 2.5f;

	// mass of ball at which the players can't push it
	private const float UNMOVABLE_MASS = 99999;

	private AudioSource soundPlayer;
	private Animation ballAnimator;
	private bool ballIsActive = true;

	// Position to move the ball to after a goal
	private Vector3 startPosition;

	// Temp holder to hold the ball's velocity when it's paused
	private Vector2? rememberVelocity;

	// Balls current position
	Transform ballPos;

	// Ball physics engine
	Rigidbody2D ballPhysics;

	// Keep track of the direction in which the ball is moving
	private Vector2 velocity;

	// used for velocity calculation
	private Vector2 lastPos;

	void SetTransformX(float xPos){
		// Sets the x position of the object to a specific value

		transform.position = new Vector3 (xPos, transform.position.y, transform.position.z);
		ballPhysics.velocity = Vector3.zero;
	}

	void OnCollisionEnter2D(Collision2D collisionDetect){
		// If in collision with a wall, calculate the speed and direction to bounce off 
		// it at. Apply this new velocity.

		if(collisionDetect.gameObject.tag == "SoccerWall"){

			// Gets the normal of where the ball collided with the wall
			// this will serve as the point that the ball will reflect upon
			Vector3 normal = collisionDetect.contacts[0].normal;

			// Calculates the reflected direction when reflecting on the normal.
			Vector3 reflectionDirection = Vector3.Reflect(velocity, normal).normalized;

			// Assign  reflected velocity with a little extra bounce
			ballPhysics.velocity = new Vector2(reflectionDirection.x, reflectionDirection.y) * WALL_BOUNCINESS;

		}

	}


	void OnCollisionExit2D(Collision2D collisionDetect){
		// Play kick sound when the ball is kicked
	
		if (collisionDetect.gameObject.tag == "Player") {

			soundPlayer.PlayOneShot(kickSound);
	
		}
	}



	protected IEnumerator waitToReset(float seconds){
		// Once a goal is scored, keep the ball in the net for a few moments before returning to center.

		yield return new WaitForSeconds(seconds);
		transform.position = startPosition;
		ballPhysics.angularVelocity = 0;
		ballPhysics.mass = 1;
		ballAnimator.Play ();

	}

	void ResetSoccerBall(){
		// Freeze the soccerball in the net while the crowd cheers
		// Then return it to the center.

		float timeBallStaysInNet = 2f;

		ballPhysics.mass = UNMOVABLE_MASS;
		soundPlayer.PlayOneShot (goalSound);
		StartCoroutine (waitToReset (timeBallStaysInNet));

	}

	// Use this for initialization
	void Start () {

		// Get unity components to interact with
		ballPos = GetComponent<Transform> ();
		ballPhysics= GetComponent<Rigidbody2D> ();
		ballAnimator = GetComponent<Animation> ();
		soundPlayer = GetComponent<AudioSource> ();

		// Cache the coordinates of the center field.
		startPosition = ballPos.position;
	}


	// Fixed Update is called at a constant rate across devices.
	void FixedUpdate ()
	{
		// Get 2d position of the ball.
		Vector2 currentPosition = new Vector2(ballPos.position.x, ballPos.position.y);

		// Calculates the velocity to use for the bounce calculation
		// in onCollisionEnter2D()

		// Formula v2 - v1 = velocity
		velocity = currentPosition - lastPos;
		lastPos = currentPosition;
	}

	// Update is called once per frame
	void Update () {

		// If the ball crosses either goal line score a point
		if (ballPos.position.x >= RIGHT_GOAL_X) {
			
			TextUpdater.redScore++;
			SetTransformX(RIGHT_GOAL_X-0.01f);

			ResetSoccerBall();

		} else if (ballPos.position.x <= LEFT_GOAL_X) {
			
			TextUpdater.blueScore++;
			SetTransformX(LEFT_GOAL_X+0.01f);

			ResetSoccerBall();
		}

		// If the game is paused stop the ball and cache it's velocity.
		if (PauseController.paused == true) {

			if (ballIsActive) {
				// Pause the physics while the game is paused
				ballIsActive = false;
				rememberVelocity = ballPhysics.velocity;
				ballPhysics.Sleep ();
			}

		} else {
			if (ballIsActive == false) {
				// Resume physics at the same velocity

				ballPhysics.WakeUp ();
				ballPhysics.velocity = rememberVelocity ?? default(Vector2);
				ballIsActive = true;
			}
		}
	}
}


