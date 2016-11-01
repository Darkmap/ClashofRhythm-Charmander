using UnityEngine;
using System.Collections;

public class Sliding : MonoBehaviour {
	public bool isRight = false;
	public float moveSpeed = 100.0f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (isRight) {
			transform.Translate (Vector3.right * moveSpeed * Time.deltaTime);
		} else {
			transform.Translate (Vector3.left * moveSpeed * Time.deltaTime);
		}

		if (gameObject.transform.localPosition.x > 500.0f || gameObject.transform.localPosition.x < -500.0f) {
			Destroy (gameObject);
		}
		 
	}
}
