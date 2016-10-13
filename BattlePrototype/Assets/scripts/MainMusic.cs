using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class MainMusic : MonoBehaviour {
	public static bool play = true;
	public static int turnType = 1; // 0:both, 1:only left, 2:only right
	public AudioSource bgm;
	public float rotation = 0.0f;
	public bool isRight;
	public static int once = 1;
	public static int right = 1;

	public float collapse_rate = 1f;

	// Use this for initialization
	void Start () {
		if (play) {
			bgm.Play();
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (play) {
			if ((!isRight && turnType != 2)
				|| (isRight && turnType != 1)) {
				if (gameObject.transform.localScale.x >= 0.1) {

					if ((isRight && right == 0) || (!isRight && once == 0)) {
						gameObject.transform.localScale = new Vector3 (0, 0, 0);
					}

					float collapse_factor = 1f * collapse_rate * Time.deltaTime;
					gameObject.transform.localScale -= new Vector3 (collapse_factor, collapse_factor, collapse_factor);
					rotation = (rotation + (isRight ? 1 : -1) * 360f * Time.deltaTime) % 360;
					gameObject.transform.localRotation = Quaternion.Euler (0, 0, rotation);
				} else {
					collapse_rate = Random.value * (0.5f) + 0.3f;
					gameObject.transform.localScale = new Vector3 (1, 1, 1);
					MusicParameters.count += 1;
					if (isRight) {
						right = 1;
					} else {
						once = 1;
					}
					float temp = Random.value;
					if (temp <= 0.2f) {
						MainMusic.turnType = 0;
					} else if (temp <= 0.6) {
						MainMusic.turnType = 1;
					} else {
						MainMusic.turnType = 2;
					}
				}
			}
		}
	}
}
