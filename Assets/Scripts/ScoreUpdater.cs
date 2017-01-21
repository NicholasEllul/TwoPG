using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class ScoreUpdater : MonoBehaviour {
    public static int blueScore;
    public static int redScore;

    private Text _score;

    public TEAM colour;

    public enum TEAM
    {
        Red,
        Blue,
        None
    }

    void Start () {
        _score = GetComponent<Text>();

		// Initialize the object with the appropriate score.
        if (gameObject.name == "RedScore")
        {
            colour = TEAM.Red;
        }
        else if (gameObject.name == "BlueScore")
        {
            colour = TEAM.Blue;
        }
        else
        {
            Debug.Log("Grey area");
        }
    }
	
	// Update is called once per frame
	void Update () {

        if (colour == TEAM.Blue)
        {
            _score.text = blueScore.ToString();
        }
        else if (colour == TEAM.Red)
        {
            _score.text = redScore.ToString();
        }

    }
}
