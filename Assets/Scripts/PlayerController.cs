using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {

	public float moveSpeed;
	private Rigidbody2D myRigidbody;

	public float jumpSpeed;

	public Transform groundCheck;
	public float groundCheckRadius;
	public LayerMask whatIsGround;

	public bool isGrounded;

	public Vector3 respawnPosition;

	public LevelManager theLevelManager;

	public AudioSource hurtSound;

	// Use this for initialization
	void Start () {
		myRigidbody = GetComponent<Rigidbody2D> ();

		respawnPosition = transform.position;

		theLevelManager = FindObjectOfType<LevelManager> ();
	
	}
	
	// Update is called once per frame
	void Update () {

		isGrounded = Physics2D.OverlapCircle (groundCheck.position, groundCheckRadius, whatIsGround);

		if (Input.GetAxisRaw ("Horizontal") > 0f) {
			myRigidbody.velocity = new Vector3 (moveSpeed, myRigidbody.velocity.y, 0f);
			transform.localScale = new Vector3 (.5f, .58f, 1f);
		} else if (Input.GetAxisRaw ("Horizontal") < 0f) {
			myRigidbody.velocity = new Vector3 (-moveSpeed, myRigidbody.velocity.y, 0f);
			transform.localScale = new Vector3 (-.5f, .58f, 1f);
		} else {
			myRigidbody.velocity = new Vector3 (0f, myRigidbody.velocity.y, 0f);
		}

		if (Input.GetButtonDown ("Jump") && isGrounded) {
			myRigidbody.velocity = new Vector3 (myRigidbody.velocity.x, jumpSpeed, 0f);
		
		}
	}
	void OnTriggerEnter2D (Collider2D other) {
			if(other.tag == "KillPlane") {
				//gameObject.SetActive(false);

			//transform.position = respawnPosition;
			theLevelManager.Respawn();
			}

		if (other.tag == "CheckPoint") {
			respawnPosition = other.transform.position;
		}
	}

	void OnCollisionEnter2D(Collision2D other){

		if (other.gameObject.tag == "MovingPlatform") {
			transform.parent = other.transform;	
		
		}
	}

	void OnCollisionExit2D(Collision2D other) {
		if (other.gameObject.tag == "MovingPlatform") {
			transform.parent = null;
		}
	}

}

