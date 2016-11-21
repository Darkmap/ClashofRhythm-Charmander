using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;
//using System;

public class MainMusic : MonoBehaviour {
	public static bool play = false;
	public static int turnType = 5; // 0:left, 1:right, 2:left2right, 3: right2left
	public float rotation = 0.0f;
	public static int left_pressed = 0; //0 note pressed, 1 pressed
	public static int right_pressed = 0;
	public float collapse_rate = 1.0f;

	public static bool action = false;
	public GameObject leftRing;
	public GameObject rightRing;
	public GameObject left2rightCircle;
	public GameObject right2leftCircle;
	public int count = 25;

	public Button leftButton;
	public Button rightButton;

	public static GameObject firstCircle;
	public static GameObject lastCircle;
	public static bool left_pressed;//you wu an l
	public static bool right_pressed;//you wu an 

	public static IList<GameObject> circles = new List<GameObject>();
	public static int time = 0;

	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {
		if (play) {
			//start the game
			//check if we already create the circle
			if (action) {
				switch (turnType) {
				case 0:
					if (!Scale.play) {
						Scale.play = true;
					}
				
					break;
				case 1:
					if (!Scale.play) {
						Scale.play = true;
					}

					break;
				case 2:
					if (count > 0) {
						GameObject obj = (GameObject)Instantiate (left2rightCircle, transform.position + new Vector3 (0f, 0f, 5.0f), Quaternion.Euler (0, 0, 0));
						if (count == 25) {
							firstCircle = obj;
//							Debug.Log ("start test");
//							Debug.Log (firstCircle.transform.localPosition.x);
//							Debug.Log ("test end");
						} 
						if (count == 1) {
							lastCircle = obj;
//							Debug.Log (firstCircle.transform.localPosition.x);
						}
						circles.Add (obj);
						obj.transform.SetParent (GameObject.Find ("Top").transform);
						obj.transform.localPosition = new Vector3 (280.0f, 0f, 5.0f);
						count -= 1;
						return;
					} else {
						time++;
						if (lastCircle == null) {
//							Press.re = true;
							Debug.Log(pressed);
							rightButton.gameObject.GetComponent<Press>().reset();
						}
					}
					break;
				case 3:
					if (count > 0) {
						GameObject obj = (GameObject)Instantiate (right2leftCircle, transform.position + new Vector3 (0f, 0f, 5.0f), Quaternion.Euler (0, 0, 0));
						if (count == 25) {
							firstCircle = obj;
						} 
						if (count == 1) {
							lastCircle = obj;
						}
						circles.Add (obj);
						obj.transform.SetParent (GameObject.Find ("Top").transform);
						obj.transform.localPosition = new Vector3 (-280.0f, 0f, 5.0f);
						count -= 1;
						return;
					} else  {
						time++;
						if (lastCircle == null) {
//							Press.re = true;
							Debug.Log(pressed);
							leftButton.gameObject.GetComponent<Press>().reset();
						}

					}

					break;
					
				}
			} else {
				float temp = Random.value;
				count = 25;
				left_pressed = false;
				right_pressed = false;
				circles.Clear ();
				time = 0;
				if (temp < 0.15f) {
					//left2right
					turnType = 2;
				} else if (temp < 0.3f) {
					//right2left
					turnType = 3;
				} else if (temp < 0.65f) {
					//left
					turnType = 0;

				} else {
					//right
					turnType = 1;

				}
				updateUI ();
				action = true;
				left_pressed = 0;
				right_pressed = 0;
			}
				
		} 
	}

	public static float getCloest(){
		float min = 280.0f;
		int j = 0;
		for (int i = 0; i < circles.Count; i++) {
			if (circles [i] != null && ( 580.0f - System.Math.Abs (circles [i].transform.localPosition.x)) < min) {
				min = 580.0f- System.Math.Abs (circles [i].transform.localPosition.x );
				j = i;
			}
		}
		if (turnType == 2)
			return j * 20.0f + 580.0f;
		else  {
			return -580.0f - j * 20.0f;
		}

	}
	public static float getFirstPoisition(){
		if (firstCircle != null)
			return firstCircle.transform.localPosition.x;
		else
			return getCloest();
	}

	public static float getLastPoisition(){
		if (lastCircle != null)
			return lastCircle.transform.localPosition.x;
		else {
			if (time == 0) {
				if (turnType == 2)
					return 280.0f;
				else
					return -280.0f;
			}
			if (turnType == 2)
				return time * 20.0f + 580.0f;
			else
				return -time * 20.0f - 580.0f;
		}
		
	}

	public void updateUI(){
		if (MainMusic.turnType == 0) {
			
				leftRing.SetActive (true);


				rightRing.SetActive (false);

		} else if (MainMusic.turnType == 1) {
	
				leftRing.SetActive (false);


				rightRing.SetActive (true);

		} else{

				leftRing.SetActive (false);


				rightRing.SetActive (false);

		}
	
	}

}
