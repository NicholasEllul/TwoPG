/*
 * Created by: Nicholas Ellul
 * Created on: 26-Jan-2016
 * Created for: ICS3U
 * Final Assignemnt
 * This file contains code that randomizes the location of blockers in gun slinger.
 * Code updated Oct 2016 by Nicholas Ellul
*/


using UnityEngine;
using System;
using System.Collections;

public class RandomLocation : MonoBehaviour {


    static UnityEngine.Random rng;
    
    Transform myTransform;
    Vector3 location;
    float myX;
    float myY;

    private float getRandomFloat(UnityEngine.Random rngg, int lowerBound, int upperBound)
    {
		//If its > 0, make upper/lower bound 1 unit less
		//I do this since the decimal will add onto it and bring it up potentially 0.99.
		//ex if limit is 13 I make it 12 since it could add + 0.99 during the next step
		if (lowerBound > 0) {
			lowerBound--;
		}
		if (upperBound > 0) {
			upperBound--;
		}

		// the integer part
        float firstPart = UnityEngine.Random.Range(lowerBound,upperBound);
		// the decimal part
        float secondPart = UnityEngine.Random.Range(0, 99);
        secondPart = secondPart / 100;

		// the sum
        float sum = firstPart + secondPart;

        return sum;
    }

    //x -13 -7
    //y -1.5, 3.3
    // Use this for initialization

    void Start () {

        myTransform = GetComponent<Transform>();

		// The RNG you pass in below must be static

		// generate X within the boundery
		location.x = getRandomFloat(rng,-3,2);
   		
		// generate Y within the boundery
		location.y = getRandomFloat(rng, -1, 3);
  
        myTransform.position = location;
       
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
