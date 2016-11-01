using UnityEngine;
using System.Collections;

public class test : MonoBehaviour {
	public GameObject blue;
	public GameObject green;
	public GameObject red;
	public GameObject yellow;

	public AudioSource audio;
	public int count = 30;

	// Use this for initialization
	void Start () {
		//Instantiate(blue, transform.position + new Vector3(0, 2.524798f, 0), Quaternion.Euler(0,0,0) );
		this.InvokeRepeating("createBlue", 2.0f, 2.0f);
		this.InvokeRepeating ("createGreen", 1.0f, 1.25f);
		this.InvokeRepeating ("createRed", 1.25f,0.75f);
		this.InvokeRepeating ("createYellow", 0.75f, 1.0f);
	}
	
	// Update is called once per frame
	void Update () {
	
	}


	public void createBlue(){
		Instantiate(blue, transform.position + new Vector3(-1.5f, -1.16f, 10), Quaternion.Euler(0,0,0) );
		count -= 1;
		if (count <= 0) {
			this.CancelInvoke ();
			Invoke ("stop", 1.0f);
		}
	}

	public void createGreen(){
		Instantiate(green, transform.position + new Vector3(-1.5f, -3.2f, 10), Quaternion.Euler(0,0,0) );
		count -= 1;
		if (count <= 0) {
			this.CancelInvoke ();
			Invoke ("stop", 1.0f);
		}

	}
	public void createRed(){
		Instantiate(red, transform.position + new Vector3(1.5f, -1.16f, 10), Quaternion.Euler(0,0,0) );
		count -= 1;
		if (count <= 0) {
			this.CancelInvoke ();
			Invoke ("stop", 1.0f);
		}
	}

	public void createYellow(){
		Instantiate(yellow, transform.position + new Vector3(1.5f, -3.2f, 10), Quaternion.Euler(0,0,0) );
		count -= 1;
		if (count <= 0) {
			this.CancelInvoke ();
			Invoke ("stop", 1.0f);
		}
	}

	public void stop(){
		audio.Stop();
	}

}
