using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class LevelVictory : MonoBehaviour {
	
	public string firstLevel;
	public int startingLives;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
		
	public void NewGame () {
		SceneManager.LoadScene (firstLevel);
	}

	public void QuitGame () {
		Application.Quit();
	}
}
