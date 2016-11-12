using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class Scale : MonoBehaviour {

	public static bool play;
	public float rotation = 0.0f;
	public float collapse_rate = 0.3f;
	public bool isRight;

	public Button leftButton;
	public Button rightButton;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		if (play) {
			if (gameObject.transform.localScale.x >= 0.1) {
				float collapse_factor = 2f * collapse_rate * Time.deltaTime;
				gameObject.transform.localScale -= new Vector3 (collapse_factor, collapse_factor, collapse_factor);
				rotation = (rotation + (isRight ? 1 : -1) * 240f * Time.deltaTime) % 360;
				gameObject.transform.localRotation = Quaternion.Euler (0, 0, rotation);
			} else {
				
				gameObject.transform.localScale = new Vector3 (1, 1, 1);
				gameObject.SetActive (false);

				if (isRight) {
					rightButton.gameObject.GetComponent<Press>().res();

				} else {
					leftButton.gameObject.GetComponent<Press>().res();

				}
				MusicParameters.count += 1;
				MainMusic.turnType = 5;

				MainMusic.action = false;

			}
		}
	}
}
