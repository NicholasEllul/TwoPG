using UnityEngine;
using System;
using System.Collections;

public class RandomLocation : MonoBehaviour {


    static UnityEngine.Random rng;
    
    Transform myTransform;
    Vector3 location;
    float myX;
    float myY;

 
    float generator(UnityEngine.Random rngg,int lowerBound, int upperBound)
    {
        //make upper and lower bound 1 unit inside since the decimal will add onto it
        //ex if limit is 13 put 12 since it could add + 0.99
        //however if the number is negative you done want to overshoot at all. If the limit is -13
        //you will want to put -13 since the + 0.xx will bring it down since its positive

        float firstPart = UnityEngine.Random.Range(lowerBound,upperBound);

        float secondPart = UnityEngine.Random.Range(0, 99);
        secondPart = secondPart / 100;
        float sum = firstPart + secondPart;
        Debug.Log(firstPart);
        return sum;
    }
    //x -13 -7
    //y -1.5, 3.3
    // Use this for initialization

    void Start () {
       
        


        myTransform = GetComponent<Transform>();

        location.x = generator(rng,-3,2);
      //  location.x = -7.0f;
        location.y = generator(rng,-1, 3);
      //Debug.Log(location.x);
        //location.y = 0;
        //location.z = 0;
        myTransform.position = location;
       
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
