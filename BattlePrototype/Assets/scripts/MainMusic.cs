using UnityEngine;
using UnityEngine.UI;
using System.Collections;

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
	public int count = 50;

	public static GameObject firstCircle;
	public static GameObject lastCircle;
	public static bool finish;

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
						if (count == 50) {
							firstCircle = obj;
//							Debug.Log ("start test");
//							Debug.Log (firstCircle.transform.localPosition.x);
//							Debug.Log ("test end");
						} else if (count == 1) {
							lastCircle = obj;
//							Debug.Log (firstCircle.transform.localPosition.x);
						}

						obj.transform.SetParent (GameObject.Find ("BattleUI").transform);
						obj.transform.localPosition = new Vector3 (280.0f, 0f, 5.0f);
						count -= 1;
						return;
					} else if (lastCircle == null) {
						MainMusic.finish = true;
					}
					break;
				case 3:
					if (count > 0) {
						GameObject obj = (GameObject)Instantiate (right2leftCircle, transform.position + new Vector3 (0f, 0f, 5.0f), Quaternion.Euler (0, 0, 0));
						if (count == 50) {
							firstCircle = obj;
						} else if (count == 1) {
							lastCircle = obj;
						}

						obj.transform.SetParent (GameObject.Find ("BattleUI").transform);
						obj.transform.localPosition = new Vector3 (-280.0f, 0f, 5.0f);
						count -= 1;
						return;
					} else if (lastCircle == null) {
						MainMusic.finish = true;
					}

					break;
					
				}
			} else {
				float temp = Random.value;
				count = 50;
				MainMusic.finish = false;
//				if (temp < 0.1f) {
//					//left2right
////					turnType = 2;
//				} else if (temp < 0.2f) {
//					//right2left
////					turnType = 3;
//				} else if (temp < 0.6f) {
				if (temp <= 0.5f) {
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




//			if (action) {
//				if (sliding) {
//					Debug.Log ("moving circle");
//					if (count > 0) {
//						GameObject obj = (GameObject)Instantiate (circle, transform.position + new Vector3 (0f, 0f, 5.0f), Quaternion.Euler (0, 0, 0));
//						if (count == 500) {
//							firstCircle = obj;
//						} else if (count == 1) {
//							lastCircle = obj;
//						}
//
//						obj.transform.SetParent (GameObject.Find ("BattleUI").transform);
//						if (isRight) {
//							obj.transform.localPosition = new Vector3 (-580.0f, 0f, 10);
//						} else {
//							obj.transform.localPosition = new Vector3 (580.0f, 0f, 10);
//
//						}
//						count -= 1;
//						return;
//					} else {
//						//reset
//						if (lastCircle == null) {
//							action = false;
//						}
//					
//					}
//
//				} else {
//					Debug.Log ("scale circle");
//					if ((!isRight && turnType != 2)
//					    || (isRight && turnType != 1)) {
//						if (gameObject.transform.localScale.x >= 0.1) {
//
//							if ((isRight && right == 0) || (!isRight && once == 0)) {
//								gameObject.transform.localScale = new Vector3 (0, 0, 0);
//							}
//
//							float collapse_factor = 2f * collapse_rate * Time.deltaTime;
//							gameObject.transform.localScale -= new Vector3 (collapse_factor, collapse_factor, collapse_factor);
//							rotation = (rotation + (isRight ? 1 : -1) * 240f * Time.deltaTime) % 360;
//							gameObject.transform.localRotation = Quaternion.Euler (0, 0, rotation);
//						} else {
//							collapse_rate = Random.value * (0.5f) + 0.3f;
//							MusicParameters.count += 1;
//							if (isRight) {
//								right = 1;
//							} else {
//								once = 1;
//							}
//							float temp = Random.value;
//							if (temp <= 0.5f) {
//								MainMusic.turnType = 1;
//							} else {
//								MainMusic.turnType = 2;
//							}
//							if (isRight && MainMusic.turnType != 1) {
//								gameObject.transform.localScale = new Vector3 (1, 1, 1);
//							} else if (!isRight && MainMusic.turnType != 2) {
//								gameObject.transform.localScale = new Vector3 (1, 1, 1);
//							}
//							action = false;
//
//						}
//					}
//				}
//
//			} else {
//				//reset
//				float temp = Random.value;
//				if (temp <= 0.2f) {
//					MainMusic.sliding = true;
//					count = 50;
//					//gameObject.transform.localScale = new Vector3 (0.0f, 0.0f, 0.0f);
//
//				} else {
//					MainMusic.sliding = false;
//
//				}
//				action = true;
//			}
		} 
	}

	public static float getFirstPoisition(){
		if (firstCircle != null)
			return firstCircle.transform.localPosition.x;
		else
			return turnType == 2 ? 500.0f : - 500.0f;
	}

	public static float getLastPoisition(){
		if (firstCircle != null)
			return lastCircle.transform.localPosition.x;
		else
			return turnType == 2 ? 500.0f : - 500.0f;
		
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
