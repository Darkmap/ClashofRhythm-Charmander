using UnityEngine;
using System.Collections;

public class MainMusic : MonoBehaviour {
	public static bool play = true;
	public AudioSource bgm;
	public float rotation = 0.0f;
	public static int once = 1;
	public static int right = 1;

	// Use this for initialization
	void Start () {
		if (play) {
			bgm.Play();
		}
	}
	
	// Update is called once per frame
	void Update () {
		if (play) {
			if (gameObject.transform.localScale.x >= 0.1) {
				gameObject.transform.localScale -= new Vector3 (0.02f, 0.02f, 0.02f);
				rotation = (rotation + 360f * Time.deltaTime ) % 360;
				gameObject.transform.localRotation = Quaternion.Euler(0, 0, rotation);
			}else {
				gameObject.transform.localScale = new Vector3 (1, 1, 1);
				once = 1;
				right = 1;
			}
		} 
	}
}
