using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LevelManager : MonoBehaviour {

	public float waitToRespawn;
	public PlayerController thePlayer;

	public GameObject deathSplosion;

	public int coinCount;

	public AudioSource coinSound;

	public Text coinText;

	public Image heart1;
	public Image heart2;
	public Image heart3;

	public Sprite heartFull;
	public Sprite heartHalf;
	public Sprite heartEmpty;

	public int maxHealth;
	public int healthCount;

	private bool respawning;

	private ResetOnRespawn[] objectsToReset;

	public GameObject gameOverScreen;

	public GameObject victoryScreen;

	public Text livesText;
	public int startingLives;
	public int currentLives;

	public AudioSource levelMusic;
	public AudioSource gameOverMusic;
	public AudioSource levelVictoryMusic;

	// Use this for initialization
	void Start () {
		thePlayer = FindObjectOfType<PlayerController> ();

		coinText.text = "Words: " + coinCount;

		healthCount = maxHealth;

		objectsToReset = FindObjectsOfType<ResetOnRespawn> ();

		currentLives = startingLives;
		livesText.text = "Lives x " + currentLives;

	}
	
	// Update is called once per frame
	void Update () {
		if (healthCount <= 0 && !respawning) {
			Respawn ();
			respawning = true;
		}


	
	}

	public void Respawn() {

		currentLives -= 1;
		livesText.text = "Lives.x " + currentLives;

		if (currentLives > 0) {
			
			StartCoroutine ("RespawnCo");
		} else {
			levelMusic.Stop ();
			gameOverMusic.Play ();
			//levelMusic.volume = levelMusic.volume / 2f;
			thePlayer.gameObject.SetActive (false);
			gameOverScreen.SetActive (true);
		}
	}

	public IEnumerator RespawnCo() {
		thePlayer.gameObject.SetActive (false);

		Instantiate (deathSplosion, thePlayer.transform.position, thePlayer.transform.rotation);

		yield return new WaitForSeconds (waitToRespawn);

		healthCount = maxHealth;
		respawning = false;
		UpdateHeartMeter ();

		coinCount = 0;
		coinText.text = "Words: " + coinCount;

		thePlayer.transform.position = thePlayer.respawnPosition;

		thePlayer.gameObject.SetActive (true);

		for(int i = 0; i < objectsToReset.Length; i++){
			
			objectsToReset [i].gameObject.SetActive (true);
			objectsToReset [i].ResetObject ();
		
		}
	
	}

	public void AddCoins(int coinsToAdd) {
		coinCount += coinsToAdd;

		coinText.text = "Words: " + coinCount;
		coinSound.Play ();

		if (coinCount == 5) {
			levelMusic.Stop ();
			levelVictoryMusic.Play ();
			thePlayer.gameObject.SetActive (false);
			victoryScreen.SetActive (true);
		}
	}

	public void HurtPlayer(int damageToTake){

		healthCount -= damageToTake;
		UpdateHeartMeter ();

		thePlayer.hurtSound.Play ();
	}

	public void UpdateHeartMeter() {
		switch(healthCount){

		case 6:
			heart1.sprite = heartFull;
			heart2.sprite = heartFull;
			heart3.sprite = heartFull;
			return;


		case 5:
			heart1.sprite = heartFull;
			heart2.sprite = heartFull;
			heart3.sprite = heartHalf;
			return;

		case 4:
			heart1.sprite = heartFull;
			heart2.sprite = heartFull;
			heart3.sprite = heartEmpty;
			return;

		case 3:

			heart1.sprite = heartFull;
			heart2.sprite = heartHalf;
			heart3.sprite = heartEmpty;
			return;

		case 2:

			heart1.sprite = heartFull;
			heart2.sprite = heartEmpty;
			heart3.sprite = heartEmpty;
			return;

		case 1:

			heart1.sprite = heartHalf;
			heart2.sprite = heartEmpty;
			heart3.sprite = heartEmpty;
			return;

		case 0:

			heart1.sprite = heartEmpty;
			heart2.sprite = heartEmpty;
			heart3.sprite = heartEmpty;
			return;

		
			default: 
			
			heart1.sprite = heartEmpty;
			heart2.sprite = heartEmpty;
			heart3.sprite = heartEmpty;
			return;
		}

	}

	public void AddLives(int livesToAdd) {
		coinSound.Play ();
		currentLives += livesToAdd;
		livesText.text = "Lives x " + currentLives;
	}
}
