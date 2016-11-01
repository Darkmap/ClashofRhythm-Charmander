using UnityEngine;
using System.Collections;

public class Note : MonoBehaviour {
	
	bool isVisiable = true;
	public float moveSpeed = 5.0f;

	void OnBecameInvisible(){
		isVisiable = false;
	}

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		transform.Translate(Vector3.left* moveSpeed * Time.deltaTime);
		if (!isVisiable) {
			Destroy (gameObject);
		}
	}


}
