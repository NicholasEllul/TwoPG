using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class SoccerBallController : MonoBehaviour {

	private Animation ballAnimator;
	private Vector3 startPosition;
	private float leftGoalX = -6.30f;
	private float rightGoalX = 6.35f;
	private float scoredHoldPosition;
	private CircleCollider2D ballCollider;

	Transform ballPos;
	Rigidbody2D ballPhysics;



	// Constant speed of the ball
	private float speed = 5f;

	// Keep track of the direction in which the ball is moving
	private Vector2 velocity;

	// used for velocity calculation
	private Vector2 lastPos;


	void FixedUpdate ()
	{
		// Get 2d position of the ball.
		Vector3 pos3D = transform.position;
		Vector2 pos2D = new Vector2(pos3D.x, pos3D.y);

		// Calculates the velocity to use for the bounce calculation
		// Formula v2 - v1 = velocity
		velocity = pos2D - lastPos;
		lastPos = pos2D;
	}


	void SetTransformX(float xPos){
		transform.position = new Vector3(xPos, transform.position.y, transform.position.z);
		ballPhysics.velocity = Vector3.zero;
	}

	void SetTransformY(float yPos){
		transform.position = new Vector3(yPos, transform.position.y, transform.position.z);
	}

	void OnCollisionEnter2D(Collision2D collisionDetect){

		if(collisionDetect.gameObject.tag == "SoccerWall"){

			// Gets the normal of where the ball collided with the wall
			// this will serve as the point that the ball will reflect upon
			Vector3 normal = collisionDetect.contacts[0].normal;

			// gets the direction given a value between 0-1
	///		Vector3 velocityDirection = velocity.normalized;

			// Calculates the reflected direction when reflecting on the normal.
			Vector3 reflectionDirection = Vector3.Reflect(velocity, normal).normalized;

			// Assign normalized reflection with the constant speed
			ballPhysics.velocity = new Vector2(reflectionDirection.x, reflectionDirection.y) * speed;

		}

	}

	protected IEnumerator waitToReset(float seconds)
	{
		//after a pause move onto the result scene 

		yield return new WaitForSeconds(seconds);
		transform.position = startPosition;
		ballPhysics.angularVelocity = 0;
		ballCollider.enabled = true;
		ballAnimator.Play ();

	}

	void ResetSoccerBall(){
		
		ballCollider.enabled = false;
		StartCoroutine (waitToReset (2f));

	}

	// Use this for initialization
	void Start () {

		ballPos = GetComponent<Transform> ();
		ballPhysics= GetComponent<Rigidbody2D> ();
		ballCollider = GetComponent<CircleCollider2D> ();
		ballAnimator = GetComponent<Animation> ();

		startPosition = ballPos.position;
		PlayerPrefs.SetString("lastScene", SceneManager.GetActiveScene().name);
	}


	// Update is called once per frame
	void Update () {
		
		if (ballPos.position.x >= rightGoalX) {
			
			TextUpdater.redScore++;
			SetTransformX(rightGoalX-0.01f);

			//Rotate.controlsEnabled = false;
			ResetSoccerBall();
		}

		if (ballPos.position.x <= leftGoalX) {
			
			TextUpdater.blueScore++;
			SetTransformX(leftGoalX+0.01f);
			//Rotate.controlsEnabled = false;
			ResetSoccerBall();
		}

	}

}


