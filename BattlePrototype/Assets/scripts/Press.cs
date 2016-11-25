using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;  
using UnityEngine.UI;


public class Press : MonoBehaviour ,IPointerDownHandler, IPointerUpHandler {
	public Text txtCenter;
	public Image leftRing;
	public Image rightRing;
	public bool isRight;
	public Image sun;
	public AudioSource[] OKs;
	public AudioSource Error;

	public int[] playList = new int[8];
	public int playIdx = 0;

	public static float delta;

	// Update is called once per frame
	void Update () {
	
	}

	public void CenterClick()
	{
		//wrong button
		if (( MainMusic.turnType == 0 && isRight) || (MainMusic.turnType == 1)&& !isRight) {
			Error.Play ();
			return;
		}
		//pressed
		if ( (MainMusic.left_pressed == 1 && MainMusic.turnType == 0) ||( MainMusic.right_pressed == 1 && MainMusic.turnType == 1)){
			Error.Play ();
			return;
		}
		float width = 0.0f;
		if (isRight) {
			width = rightRing.rectTransform.rect.width * rightRing.transform.localScale.x;
			MainMusic.right_pressed = 1;

		}else{
			width = leftRing.rectTransform.rect.width * leftRing.transform.localScale.x;
			MainMusic.left_pressed = 1;

		}

		float standard = 175.0f;
		if (System.Math.Abs (width - standard) <= 20.0f) {
			ShowScore( "amazing",txtCenter);
			playOK();
			MusicParameters.score += 100;
		} else if (System.Math.Abs (width - standard) <= 40.0f) {
			ShowScore ("good",txtCenter);
			playOK();
			MusicParameters.score += 50;
		} else {
			ShowScore ("bad",txtCenter);
			Error.Play ();
			MusicParameters.score -= 50;
		}
	}

	public void playOK() {
		//		int idx = Random.Range (0, 5);
		int idx = playList[playIdx];
		playIdx = (playIdx + 1) % (playList.Length - 1);
		//		Debug.Log (playIdx);
		//		Debug.Log (idx);
		OKs [idx].Play ();
	}

	public void ShowScore(string score,Text txt)
	{
		txt.text = "<size=55><i>" + score + "</i></size>";
		if (txt == txtCenter) {
			Invoke ("ClearScore", 0.3f);
		} else {
			Invoke ("ClearScore", 0.3f);

		}
	}

	public void ClearScore()
	{
		txtCenter.text = "";
	}


	public void Start(){
		Button button = this.gameObject.GetComponent<Button>();
		playIdx = 0;
	}

	// 当按钮被按下后系统自动调用此方法  
	public void OnPointerDown (PointerEventData eventData) 
	{  
		//Debug.Log ("mouse down" +Time.time);
		if (MainMusic.turnType <= 1) {
			CenterClick ();
		} else  if( MainMusic.turnType == 2){
			//Debug.Log ("2" +Time.time);
			Debug.Log ("first position: " +MainMusic.getFirstPoisition());
			delta += System.Math.Abs ( MainMusic.getFirstPoisition() - 580.0f);
			//Debug.Log ("first position: " +MainMusic.getFirstPoisition());
			if( isRight )
				MainMusic.right_button_pressed = true;
			else
				MainMusic.left_button_pressed = true;
			
		}else if( MainMusic.turnType == 3){
			//Debug.Log ("3" +Time.time);
			Debug.Log ("first position: " +MainMusic.getFirstPoisition());

			delta += System.Math.Abs ( MainMusic.getFirstPoisition() + 580.0f );
			//Debug.Log ("3 end" +Time.time);
			if( isRight )
				MainMusic.right_button_pressed = true;
			else
				MainMusic.left_button_pressed = true;

		}
		//Debug.Log ("mouse down end" +Time.time);
	}  

	// 当按钮抬起的时候自动调用此方法  
	public void OnPointerUp (PointerEventData eventData)  
	{  
		//Debug.Log ("mouse up" +Time.time);

		//Debug.Log ("Turntype: " + MainMusic.turnType);

		if( MainMusic.turnType == 2){
			Debug.Log ("last position: " +MainMusic.getLastPoisition());
			delta += System.Math.Abs ( MainMusic.getLastPoisition() - 580.0f );
			//check();
			//MainMusic.pressed = true;
		}else if( MainMusic.turnType == 3){
			Debug.Log ("last position: " +MainMusic.getLastPoisition());
			delta += System.Math.Abs ( MainMusic.getLastPoisition() + 580.0f );
			//check();
			//MainMusic.pressed = true;

		}
		//Debug.Log ("mouse up end" +Time.time);
	}  

	// 当鼠标从按钮上离开的时候自动调用此方法  
//	public void OnPointerExit (PointerEventData eventData)  
//	{  
//		Debug.Log ("mouse leave" +Time.time);
//
//	} 
//
//	public void check(){
//		Debug.Log ("check" +Time.time);
//		if (delta <= 100.0f) {
//			ShowScore( "amazing",txtCenter);
//			playOK();
//			MusicParameters.score += 100;
//		} else if (delta<= 200.0f) {
//			ShowScore ("good",txtCenter);
//			playOK();
//			MusicParameters.score += 50;
//		} else {
//			ShowScore ("bad",txtCenter);
//			Error.Play ();
//			MusicParameters.score -= 50;
//		}
//	}

	public void reset(){

		Debug.Log ("distence:"+ delta);
		if (!MainMusic.left_button_pressed && MainMusic.turnType == 3 ) {
			ShowScore ("Miss",txtCenter);
			Error.Play ();
			MusicParameters.score -= 50;
		}else if (!MainMusic.right_button_pressed && MainMusic.turnType == 2 ) {
			ShowScore ("Miss",txtCenter);
			Error.Play ();
			MusicParameters.score -= 50;
		}else if (delta <= 50.0f) {
			ShowScore( "amazing",txtCenter);
			playOK();
			MusicParameters.score += 100;
		} else if (delta<= 100.0f) {
			ShowScore ("good",txtCenter);
			playOK();
			MusicParameters.score += 50;
		} else {
			ShowScore ("bad",txtCenter);
			Error.Play ();
			MusicParameters.score -= 50;
		}
		delta = 0.0f;
		MusicParameters.count += 1;
		MainMusic.action = false;
		
	}

	public void res(){
		if (MainMusic.turnType == 1 && MainMusic.right_pressed ==0 ) {
			ShowScore ("Miss",txtCenter);
			Error.Play ();
			MusicParameters.score -= 50;
		} else if (MainMusic.turnType == 0 && MainMusic.left_pressed == 0) {
			ShowScore ("Miss",txtCenter);
			Error.Play ();
			MusicParameters.score -= 50;
		}
	}
}
