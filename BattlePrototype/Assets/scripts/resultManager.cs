using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System;

public class resultManager : MonoBehaviour {

	public GameObject userPrefab1;
	public GameObject userPrefab2;
	public GameObject userPrefab3;

	public GameObject aiPrefab1;
	public GameObject aiPrefab2;
	public GameObject aiPrefab3;

	public Text resultLabel;

	public AudioSource victoryAudio;
	public AudioSource defeatedAudio;

	// Use this for initialization
	void Start () {
	
		if (GameManager.result) {
			resultLabel.text = "Victory :)";
			victoryAudio.Play ();

			GameObject userObj1 = (GameObject)Instantiate(userPrefab1, new Vector3(-4f, -2.8f, 0f), Quaternion.Euler(new Vector3()));
			Vector3 userScale = userObj1.transform.localScale;
			userObj1.transform.localScale = new Vector3(userScale.x*2 , userScale.y*2, userScale.z*2);
			Rigidbody userRb1 = userObj1.GetComponent<Rigidbody>();
			Animator userAnimator1 = userObj1.GetComponent<Animator>();
			userRb1.isKinematic = false;

			GameObject userObj2 = (GameObject)Instantiate(userPrefab2, new Vector3(0f, -2.8f, 0f), Quaternion.Euler(new Vector3()));
			Vector3 userScale2 = userObj2.transform.localScale;
			userObj2.transform.localScale = new Vector3(userScale2.x*2 , userScale2.y*2, userScale2.z*2);
			Rigidbody userRb2 = userObj2.GetComponent<Rigidbody>();
			Animator userAnimator2 = userObj2.GetComponent<Animator>();
			userRb2.isKinematic = false;

			GameObject userObj3 = (GameObject)Instantiate(userPrefab3, new Vector3(4f, -2.8f, 0f), Quaternion.Euler(new Vector3()));
			Vector3 userScale3 = userObj3.transform.localScale;
			userObj3.transform.localScale = new Vector3(userScale3.x*2 , userScale3.y*2, userScale3.z*2);
			Rigidbody userRb3 = userObj3.GetComponent<Rigidbody>();
			Animator userAnimator3 = userObj3.GetComponent<Animator>();
			userRb3.isKinematic = false;

		} else {
			resultLabel.text = "Defeat :(";
			defeatedAudio.Play ();

			GameObject userObj1 = (GameObject)Instantiate(aiPrefab1, new Vector3(-4f, -2.8f, 0f), Quaternion.Euler(new Vector3()));
			Vector3 userScale = userObj1.transform.localScale;
			userObj1.transform.localScale = new Vector3(userScale.x*2 , userScale.y*2, userScale.z*2);
			Rigidbody userRb1 = userObj1.GetComponent<Rigidbody>();
			Animator userAnimator1 = userObj1.GetComponent<Animator>();
			userRb1.isKinematic = false;

			GameObject userObj2 = (GameObject)Instantiate(aiPrefab2, new Vector3(0f, -2.8f, 0f), Quaternion.Euler(new Vector3()));
			Vector3 userScale2 = userObj2.transform.localScale;
			userObj2.transform.localScale = new Vector3(userScale2.x*2 , userScale2.y*2, userScale2.z*2);
			Rigidbody userRb2 = userObj2.GetComponent<Rigidbody>();
			Animator userAnimator2 = userObj2.GetComponent<Animator>();
			userRb2.isKinematic = false;

			GameObject userObj3 = (GameObject)Instantiate(aiPrefab3, new Vector3(4f, -2.8f, 0f), Quaternion.Euler(new Vector3()));
			Vector3 userScale3 = userObj3.transform.localScale;
			userObj3.transform.localScale = new Vector3(userScale3.x*2 , userScale3.y*2, userScale3.z*2);
			Rigidbody userRb3 = userObj3.GetComponent<Rigidbody>();
			Animator userAnimator3 = userObj3.GetComponent<Animator>();
			userRb3.isKinematic = false;
		}
	}
	
	// Update is called once per frame
	void Update () {

	}
}
