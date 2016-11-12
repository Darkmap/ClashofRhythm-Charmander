using UnityEngine;
using System.Collections;

public class Sliding : MonoBehaviour {
	public bool isRight = false;
	public float moveSpeed = 20.0f;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (isRight) {
			transform.Translate (Vector3.right * moveSpeed );
		} else {
			transform.Translate (Vector3.left * moveSpeed );
		}

		if (gameObject.transform.localPosition.x > 580.0f || gameObject.transform.localPosition.x < -580.0f) {
			Destroy (gameObject);
		}
		 
	}
}
