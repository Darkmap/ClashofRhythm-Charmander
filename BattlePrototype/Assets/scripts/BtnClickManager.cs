using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class BtnClickManager : MonoBehaviour 
{

    public Text txtCenter;
	public Image circle;
	public Image sun;
	public AudioSource OKLeft;
	public AudioSource OKRight;
	public AudioSource[] OKs;
	public AudioSource Error;
	public Image moon;
	public Image stars;
	public Text txtRight;

	public int[] playList = new int[8];
	public int playIdx = 0;


	private bool isDown = false;  
	private float lastIsDownTime;  

//
//    public void CenterClick()
//    {
////		OKLeft.Play ();
//		if (MainMusic.once == 0) {
//			Error.Play ();
//			return;
//		}
//		
//		float width = (circle.rectTransform.rect.width * circle.transform.localScale.x);
//		float standard = sun.rectTransform.rect.width;
//		MainMusic.once = 0;
//		if (System.Math.Abs (width - standard) <= 20.0f) {
//			ShowScore( "amazing",txtCenter);
////			OKLeft.Play ();
//			playOK();
//			MusicParameters.score += 100;
//		} else if (System.Math.Abs (width - standard) <= 40.0f) {
//			ShowScore ("good",txtCenter);
////			OKLeft.Play ();
//			playOK();
//			MusicParameters.score += 50;
//		} else {
//			ShowScore ("bad",txtCenter);
//			Error.Play ();
//			MusicParameters.score -= 50;
//		}
//    }
//
//
////	public void playOK() {
////		int idx = Random.Range (0, 5);
////		OKs [idx].Play ();
////	}
//
//	public void playOK() {
////		int idx = Random.Range (0, 5);
//		int idx = playList[playIdx];
//		playIdx = (playIdx + 1) % (playList.Length - 1);
////		Debug.Log (playIdx);
////		Debug.Log (idx);
//		OKs [idx].Play ();
//	}
//
//	public void RightClick() {
////		OKRight.Play ();
//		if (MainMusic.right == 0) {
//			Error.Play ();
//			return;
//		}
//
//		float width = (stars.rectTransform.rect.width * stars.transform.localScale.x);
//		float standard = moon.rectTransform.rect.width;
//		MainMusic.right = 0;
//		if (System.Math.Abs (width - standard) <= 20.0f) {
//			ShowScore( "amazing",txtRight);
////			OKRight.Play ();
//			playOK();
//			MusicParameters.score += 100;
//		} else if (System.Math.Abs (width - standard) <= 40.0f) {
//			ShowScore ("good",txtRight);
////			OKRight.Play ();
//			playOK();
//			MusicParameters.score += 50;
//
//		} else {
//			ShowScore ("bad",txtRight);
//			Error.Play ();
//			MusicParameters.score -= 50;
//		}
//	}
//
//	public void ShowScore(string score,Text txt)
//	{
//        txt.text = "<size=55><i>" + score + "</i></size>";
//		if (txt == txtCenter) {
//			Invoke ("ClearScore", 0.3f);
//		} else {
//			Invoke ("ClearRight", 0.3f);
//
//		}
//    }
//
//	public void ClearScore()
//	{
//		txtCenter.text = "";
//	}
//
//	public void ClearRight(){
//		txtRight.text = "";
//	}
//	public void Start(){
//		playIdx = 0;
//	}
//		
//
//	void Update ()  
//	{  
//		// 如果按钮是被按下状态  
//		if (isDown) {  
//			// 当前时间 -  按钮最后一次被按下的时间 > 延迟时间0.2秒  
//			if (Time.time - lastIsDownTime > 0.2f) {  
//				// 触发长按方法  
//				Debug.Log("长按");  
//				// 记录按钮最后一次被按下的时间  
//				lastIsDownTime = Time.time;  
//
//			}  
//		}  
//
//	}  
//
//
//	// 当按钮被按下后系统自动调用此方法  
//	public void OnPointerDown (PointerEventData eventData)  
//	{  
//		isDown = true;  
//		lastIsDownTime = Time.time;  
//	}  
//
//	// 当按钮抬起的时候自动调用此方法  
//	public void OnPointerUp (PointerEventData eventData)  
//	{  
//		isDown = false;  
//	}  
//
//	// 当鼠标从按钮上离开的时候自动调用此方法  
//	public void OnPointerExit (PointerEventData eventData)  
//	{  
//		isDown = false;  
//	}  

}
