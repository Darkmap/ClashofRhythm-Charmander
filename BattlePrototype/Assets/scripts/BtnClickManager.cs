﻿using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BtnClickManager : MonoBehaviour
{

    public Text txtCenter;
	public Image circle;
	public Image sun;
	public AudioSource OK;
	public AudioSource Error;
	public Image moon;
	public Image stars;
	public Text txtRight;

    public void CenterClick()
    {
		if (MainMusic.once == 0)
			return;
		
		float width = (circle.rectTransform.rect.width * circle.transform.localScale.x);
		float standard = sun.rectTransform.rect.width;
		MainMusic.once = 0;
		if (System.Math.Abs (width - standard) <= 20.0f) {
			ShowScore( "amazing",txtCenter);
			OK.Play ();
			Main.score += 100;
		} else if (System.Math.Abs (width - standard) <= 40.0f) {
			ShowScore ("good",txtCenter);
			OK.Play ();
			Main.score += 50;
				
		} else {
			ShowScore ("bad",txtCenter);
			Error.Play ();
			Main.score -= 50;
				
		}
    }


	public void RightClick()
	{
		Debug.Log ("123");
		if (MainMusic.right == 0)
			return;

		float width = (stars.rectTransform.rect.width * stars.transform.localScale.x);
		float standard = moon.rectTransform.rect.width;
		MainMusic.right = 0;
		if (System.Math.Abs (width - standard) <= 20.0f) {
			ShowScore( "amazing",txtRight);
			OK.Play ();
			Main.score += 100;
		} else if (System.Math.Abs (width - standard) <= 40.0f) {
			ShowScore ("good",txtRight);
			OK.Play ();
			Main.score += 50;

		} else {
			ShowScore ("bad",txtRight);
			Error.Play ();
			Main.score -= 50;

		}
	}

 




	public void ShowScore(string score,Text txt)
	{
        txt.text = "<size=55><i>" + score + "</i></size>";
		if (txt == txtCenter) {
			Invoke ("ClearScore", 0.3f);
		} else {
			Invoke ("ClearRight", 0.3f);

		}
    }

	public void ClearScore()
	{
		txtCenter.text = "";
	}

	public void ClearRight(){
		txtRight.text = "";
	}
	public void Start(){
		
	}
		


}