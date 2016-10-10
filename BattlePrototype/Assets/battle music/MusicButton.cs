//using UnityEngine;
//using System.Collections;
//
//public class MusicButton : MonoBehaviour {
//	public int index = 1;
//	//Transform ob;
//	public AudioSource rightSound;
//	public AudioSource erroSound;
//
//	// Use this for initialization
//	void Start () {
//		
//	}
//
//	// Update is called once per frame
//	void Update () {
////		if (Input.GetButtonDown ("Fire1")) {
////			if (index == 1) {
////				ob = GameObject.Find ("Blue_Note(Clone)").transform;
////
////				if ( System.Math.Abs (ob.position.y - transform.position.y) < 1.0f) {
////					rightSound.Play();
////					Destroy ();
////					Debug.Log("right");
////				} else {
////					erroSound.Play();
////					Debug.Log("error");
////				}
////			}
////		}
//	
//	}
//
//	void OnMouseDown(){
//		if (index == 1) {
//			GameObject obj = GameObject.Find ("Blue_Note(Clone)");
//			if (obj == null)
//				return;
//			if (System.Math.Abs (obj.transform.position.x - transform.position.x) < 1.0f) {
//				rightSound.Play ();
//				Destroy (obj);
//				Main.score += 100;
//				//Debug.Log("right");
//			} else {
//				erroSound.Play ();
//				//Debug.Log("error");
//			}
//		} else if (index == 2) {
//			GameObject obj = GameObject.Find ("Green_Note(Clone)");
//			if (obj == null)
//				return;
//			if (System.Math.Abs (obj.transform.position.x - transform.position.x) < 1.0f) {
//				rightSound.Play ();
//				Main.score += 100;
//				Destroy (obj);
//				//Debug.Log("right");
//			} else {
//				erroSound.Play ();
//				//Debug.Log("error");
//			}
//		}else if (index == 3) {
//			GameObject obj = GameObject.Find ("Red_Note(Clone)");
//			if (obj == null)
//				return;
//			if (System.Math.Abs (obj.transform.position.x - transform.position.x) < 1.0f) {
//				rightSound.Play ();
//				Main.score += 100;
//				Destroy (obj);
//				//Debug.Log("right");
//			} else {
//				erroSound.Play ();
//				//Debug.Log("error");
//			}
//		}else if (index == 4) {
//			GameObject obj = GameObject.Find ("Yellow_Note(Clone)");
//			if (obj == null)
//				return;
//			if (System.Math.Abs (obj.transform.position.x - transform.position.x) < 1.0f) {
//				rightSound.Play ();
//				Main.score += 100;
//				Destroy (obj);
//				//Debug.Log("right");
//			} else {
//				erroSound.Play ();
//				//Debug.Log("error");
//			}
//		}
//
//
//	}
//}
