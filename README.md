# ClashofRhythm-Charmander
Repo for team 'Charmander' of USC_CS526_16Fall.The project is ongoing. Now the code is under branch Prototype.
#1.	Premise
Clash of Rhythm is a strategy game with music game elements on mobile platforms (i.e., iOS, Android). The player must conduct tactical movements of characters (units) across grid-based game maps to achieve the final goal.  When the enemy enter into the striking range of characters, the player can manipulate units to attack against the enemy. During the attacking process, the player must follow the rhythm of music to tap different places of the screen to maximize the attack effect or dodge effect. Once the character is defeated, it will be removed from the game scene.

The game will be made using Unity3D engine and run on multi-platform especially mobile platforms.The background of this game consists of elements of magic and medieval military. The most important special feature of the game is the combination of tactic decisions and music element. The challenges in the developing of this game are balance design and the AI design.

#2.	Core of the Game
#2.1.	Gameplay
In Clash of Rhythm, the player begins the game as a master of several chess pieces on a specific map. Each chess piece represents one unit. The player should move the unit from one grid to another to achieve different final goals, e.g., to defeat all enemy units or the enemy boss that are controlled by the opponent(AI) or to move the specified unit(s) to the destination grid(s). If all units are defeated or the specified unit are killed in battle, the player would receive a "Game Over" message and must quit or restart the game. The game has two difficulty levels: Normal and Hard which indicates the number and strength of enemy units. The map and difficulty level are selected at the beginning of a new game.

#2.2.	Core System
Clash of Rhythm uses a turn-based tactical role-playing battle schema. When enemy enters into the range of the character, the player can control the unit to conduct an attack and the battle mode is triggered. During the battle process, the player must follow the rhythm of the background music to tap different places of the screen to play specific combo to achieve different movements (i.e., different attacks or dodge). The accuracy and precision of the rhythm input will decide the effect of the movement. Also,  the different types of unit have different effects. Each type counters or be countered by some specific types. What’s more, the types of map grid (i.e., environment) also has different effects on the battle, which is considered as an uncertain factor in battle.


