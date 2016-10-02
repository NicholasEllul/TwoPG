using UnityEngine;
using System.Collections;

public class GameInfoController : MonoBehaviour {
	public string objName;

	public static void toggleThisVisibility(string desiredElementsName){
	
		if (objName == desiredElementsName) {
		
			if (gameObject.activeSelf == true) {
			
				gameObject.SetActive(false);
		
			}
			else {

				gameObject.SetActive(true);

			}
		}
	}

	// Use this for initialization
	void Start () {
		objName = this.gameObject.name;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
