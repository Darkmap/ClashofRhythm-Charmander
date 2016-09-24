using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using Random = UnityEngine.Random;

public class BattleManager : MonoBehaviour {


	// Swiching between Scences
	public GameObject battleCamera; 
	public GameObject outCamera;
	public GameObject battleUI;

	// Buttons
	public Button leftButton;
	public Button rightButton;

	// Time progress
	public Image progressBar;
	public bool inTimeWindow;
	public float waitTime = 5f;
	public float endTime = 5f;

	// Unit
	public Animator unit0Animator;
	public Animator unit1Animator;

	// Health
	public bool updatedHealth = false;
	public Image playerHealthBar;
	public Image enemyHealthBar;

	// Text
	public Text playerNextMove;
	public Text enemyNextMove;
	string enemyNextMoveStr = "";

	// Process control
	public ArrayList inputKeySequence = new ArrayList();
	public bool casting = false;
	public bool end = false;
	public float castingTime = 5f;

	// Use this for initialization
	void Start () {
		updateHealth (playerHealthBar, 1f);
		leftButton.onClick.AddListener (delegate{
			print("left");
			inputKeySequence.Add(1);
		});
		rightButton.onClick.AddListener (delegate{
			print("right");
			inputKeySequence.Add(2);
		});
	}

	void Init() {
		leftButton.gameObject.SetActive (true);
		rightButton.gameObject.SetActive (true);
		setPlayerNext("idle");
		setEnemyNext("idle");
		playerNextMove.text = "";
		enemyNextMove.text = "";
		enemyNextMoveStr = "";
		casting = false;
		inTimeWindow = true;
		updatedHealth = false;
		progressBar.fillAmount = 1;
		endTime = 5f;
		castingTime = 5f;
		inputKeySequence.Clear ();
	}

	void setPlayerNext(string name) {
		if (name.Equals ("attack")) {
			unit0Animator.SetBool ("attack", true);
			unit0Animator.SetBool ("dodge", false);
		} else if (name.Equals ("dodge")) {
			unit0Animator.SetBool ("attack", false);
			unit0Animator.SetBool ("dodge", true);
		} else {
			unit0Animator.SetBool ("attack", false);
			unit0Animator.SetBool ("dodge", false);
		}
		playerNextMove.text = name;
	}

	void updateHealth(Image bar, float newValue) {
		bar.fillAmount = newValue;
	}

	void setEnemyNext(string name) {
		if (name.Equals ("attack")) {
			unit1Animator.SetBool ("attack", true);
			unit1Animator.SetBool ("dodge", false);
		} else if (name.Equals ("dodge")) {
			unit1Animator.SetBool ("attack", false);
			unit1Animator.SetBool ("dodge", true);
		} else {
			unit1Animator.SetBool ("attack", false);
			unit1Animator.SetBool ("dodge", false);
		}
	}

	// Update is called once per frame
	void Update () 
	{

//		battleUI.gameObject.SetActive(false);
		if (inTimeWindow) {

			if (enemyNextMoveStr.Length == 0) {
				int gen = Random.Range (1, 10);
				if (gen < 5) {
					enemyNextMoveStr = "attack";
				} else if (gen < 9) {
					enemyNextMoveStr = "dodge";
				} else {
					enemyNextMoveStr = "idle";
				}
				enemyNextMove.text = enemyNextMoveStr;
			}

			//Reduce fill amount over 30 seconds
			if (progressBar.fillAmount > 0) {
				progressBar.fillAmount -= 1.0f / waitTime * Time.deltaTime;
			} else {
				inTimeWindow = false;
			}
		} else if (!casting) {
			leftButton.gameObject.SetActive (false);
			rightButton.gameObject.SetActive (false);

			string a = "";
			foreach (int key in inputKeySequence) {
				a += key;
			}
			if (a.Equals ("1122")) {
				casting = true;
				setPlayerNext ("attack");
			} else if (a.Equals ("2211")) {
				casting = true;
				setPlayerNext ("dodge");
			} else {
				casting = true;
				setPlayerNext ("idle");
			}
			setEnemyNext (enemyNextMoveStr);
		} else if (!end && casting) {
			if (castingTime > 0) {
				castingTime -= Time.deltaTime;
			} else {
				if (!updatedHealth) {
					if (playerNextMove.text.Equals ("attack") && enemyNextMove.text.Equals ("attack")) {
						updateHealth (playerHealthBar, System.Math.Max (0, playerHealthBar.fillAmount - 0.5f));
						updateHealth (enemyHealthBar, System.Math.Max (0, enemyHealthBar.fillAmount - 0.5f));
					} else if (playerNextMove.text.Equals ("attack") && enemyNextMove.text.Equals ("dodge")) {
						updateHealth (enemyHealthBar, System.Math.Max (0, enemyHealthBar.fillAmount - 0.1f));
					} else if (playerNextMove.text.Equals ("attack") && enemyNextMove.text.Equals ("idle")) {
						updateHealth (enemyHealthBar, System.Math.Max (0, enemyHealthBar.fillAmount - 0.5f));
					} else if (playerNextMove.text.Equals ("dodge") && enemyNextMove.text.Equals ("attack")) {
						updateHealth (playerHealthBar, System.Math.Max (0, playerHealthBar.fillAmount - 0.1f));
					} else if (playerNextMove.text.Equals ("idle") && enemyNextMove.text.Equals ("attack")) {
						updateHealth (playerHealthBar, System.Math.Max (0, playerHealthBar.fillAmount - 0.5f));
					}
					updatedHealth = true;
				}

				if (playerHealthBar.fillAmount == 0) {
					unit0Animator.SetBool ("dead", true);
					playerNextMove.text = "dead";
					end = true;
				}
				if (enemyHealthBar.fillAmount == 0) {
					unit1Animator.SetBool ("dead", true);
					enemyNextMove.text = "dead";
					end = true;
				}
				if (end) {
					if (!playerNextMove.text.Equals ("dead")) {
						setPlayerNext ("idle");
						playerNextMove.text = "Winner!";
					}
					if (!enemyNextMove.text.Equals ("dead")) {
						setEnemyNext ("idle");
						enemyNextMove.text = "Winner!";
					}
				} else {
					Init ();
				}
			}
		} else if (end) {
			if (endTime > 0) {
				endTime -= Time.deltaTime;
			} else {
				battleUI.gameObject.SetActive(false);
				battleCamera.SetActive (false);
				outCamera.SetActive (true);
			}
		}
	}
}
