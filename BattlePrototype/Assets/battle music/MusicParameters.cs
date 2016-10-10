using UnityEngine;
using System.Collections;

public class MusicParameters : MonoBehaviour {

	public static int score = 0;

	public static int count = 0;

	public static void clean() {
		count = 0;
		score = 0;
	}

	public static float getPortion() {
		return ((float)score) / (50 * count);
	}
}
