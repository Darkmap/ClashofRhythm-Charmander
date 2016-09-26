#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameManager
struct GameManager_t2369589051;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.UI.Text
struct Text_t9039225;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t3948406897;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>>
struct List_1_t2738977902;
// System.Collections.Generic.List`1<UserPlayer>
struct List_1_t565044604;
// System.Collections.Generic.List`1<AIPlayer>
struct List_1_t1443081209;
// Player
struct Player_t2393081601;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2369589051  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 GameManager::mapPosition
	Vector3_t4282066566  ___mapPosition_2;
	// System.Int32 GameManager::unitCount
	int32_t ___unitCount_4;
	// System.Int32 GameManager::enemyCount
	int32_t ___enemyCount_5;
	// UnityEngine.GameObject GameManager::activePlayer
	GameObject_t3674682005 * ___activePlayer_6;
	// UnityEngine.GameObject GameManager::activeEnemy
	GameObject_t3674682005 * ___activeEnemy_7;
	// UnityEngine.UI.Button GameManager::leftButton
	Button_t3896396478 * ___leftButton_8;
	// UnityEngine.UI.Button GameManager::rightButton
	Button_t3896396478 * ___rightButton_9;
	// UnityEngine.UI.Image GameManager::progressBar
	Image_t538875265 * ___progressBar_10;
	// System.Boolean GameManager::inTimeWindow
	bool ___inTimeWindow_11;
	// System.Single GameManager::waitTime
	float ___waitTime_12;
	// System.Single GameManager::endTime
	float ___endTime_13;
	// UnityEngine.Animator GameManager::unit0Animator
	Animator_t2776330603 * ___unit0Animator_14;
	// UnityEngine.Animator GameManager::unit1Animator
	Animator_t2776330603 * ___unit1Animator_15;
	// System.Boolean GameManager::updatedHealth
	bool ___updatedHealth_16;
	// UnityEngine.UI.Image GameManager::playerHealthBar
	Image_t538875265 * ___playerHealthBar_17;
	// UnityEngine.UI.Image GameManager::enemyHealthBar
	Image_t538875265 * ___enemyHealthBar_18;
	// UnityEngine.UI.Text GameManager::playerNextMove
	Text_t9039225 * ___playerNextMove_19;
	// UnityEngine.UI.Text GameManager::enemyNextMove
	Text_t9039225 * ___enemyNextMove_20;
	// System.String GameManager::enemyNextMoveStr
	String_t* ___enemyNextMoveStr_21;
	// System.Collections.ArrayList GameManager::inputKeySequence
	ArrayList_t3948406897 * ___inputKeySequence_22;
	// System.Boolean GameManager::casting
	bool ___casting_23;
	// System.Boolean GameManager::end
	bool ___end_24;
	// System.Single GameManager::castingTime
	float ___castingTime_25;
	// System.Boolean GameManager::battle
	bool ___battle_26;
	// UnityEngine.GameObject GameManager::battleCamera
	GameObject_t3674682005 * ___battleCamera_27;
	// UnityEngine.GameObject GameManager::outCamera
	GameObject_t3674682005 * ___outCamera_28;
	// UnityEngine.GameObject GameManager::battleUI
	GameObject_t3674682005 * ___battleUI_29;
	// System.Boolean GameManager::playerTurn
	bool ___playerTurn_30;
	// System.Boolean GameManager::playerUnitIsChosen
	bool ___playerUnitIsChosen_31;
	// UnityEngine.GameObject[] GameManager::playerUnits
	GameObjectU5BU5D_t2662109048* ___playerUnits_32;
	// System.Int32 GameManager::playerChosenUnitIdx
	int32_t ___playerChosenUnitIdx_33;
	// System.Boolean GameManager::enemyUnitIsChosen
	bool ___enemyUnitIsChosen_34;
	// UnityEngine.GameObject[] GameManager::enemyUnits
	GameObjectU5BU5D_t2662109048* ___enemyUnits_35;
	// System.Int32 GameManager::enemyChosenUnitIdx
	int32_t ___enemyChosenUnitIdx_36;
	// UnityEngine.GameObject GameManager::TilePrefab
	GameObject_t3674682005 * ___TilePrefab_37;
	// UnityEngine.GameObject GameManager::UserPlayerPrefab
	GameObject_t3674682005 * ___UserPlayerPrefab_38;
	// UnityEngine.GameObject GameManager::AIPlayerPrefab
	GameObject_t3674682005 * ___AIPlayerPrefab_39;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<Tile>> GameManager::map
	List_1_t2738977902 * ___map_40;
	// System.Collections.Generic.List`1<UserPlayer> GameManager::userPlayers
	List_1_t565044604 * ___userPlayers_41;
	// System.Collections.Generic.List`1<AIPlayer> GameManager::aiPlayers
	List_1_t1443081209 * ___aiPlayers_42;
	// Player GameManager::currentPlayer
	Player_t2393081601 * ___currentPlayer_43;
	// System.Int32 GameManager::mapSize
	int32_t ___mapSize_44;

public:
	inline static int32_t get_offset_of_mapPosition_2() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___mapPosition_2)); }
	inline Vector3_t4282066566  get_mapPosition_2() const { return ___mapPosition_2; }
	inline Vector3_t4282066566 * get_address_of_mapPosition_2() { return &___mapPosition_2; }
	inline void set_mapPosition_2(Vector3_t4282066566  value)
	{
		___mapPosition_2 = value;
	}

	inline static int32_t get_offset_of_unitCount_4() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___unitCount_4)); }
	inline int32_t get_unitCount_4() const { return ___unitCount_4; }
	inline int32_t* get_address_of_unitCount_4() { return &___unitCount_4; }
	inline void set_unitCount_4(int32_t value)
	{
		___unitCount_4 = value;
	}

	inline static int32_t get_offset_of_enemyCount_5() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___enemyCount_5)); }
	inline int32_t get_enemyCount_5() const { return ___enemyCount_5; }
	inline int32_t* get_address_of_enemyCount_5() { return &___enemyCount_5; }
	inline void set_enemyCount_5(int32_t value)
	{
		___enemyCount_5 = value;
	}

	inline static int32_t get_offset_of_activePlayer_6() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___activePlayer_6)); }
	inline GameObject_t3674682005 * get_activePlayer_6() const { return ___activePlayer_6; }
	inline GameObject_t3674682005 ** get_address_of_activePlayer_6() { return &___activePlayer_6; }
	inline void set_activePlayer_6(GameObject_t3674682005 * value)
	{
		___activePlayer_6 = value;
		Il2CppCodeGenWriteBarrier(&___activePlayer_6, value);
	}

	inline static int32_t get_offset_of_activeEnemy_7() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___activeEnemy_7)); }
	inline GameObject_t3674682005 * get_activeEnemy_7() const { return ___activeEnemy_7; }
	inline GameObject_t3674682005 ** get_address_of_activeEnemy_7() { return &___activeEnemy_7; }
	inline void set_activeEnemy_7(GameObject_t3674682005 * value)
	{
		___activeEnemy_7 = value;
		Il2CppCodeGenWriteBarrier(&___activeEnemy_7, value);
	}

	inline static int32_t get_offset_of_leftButton_8() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___leftButton_8)); }
	inline Button_t3896396478 * get_leftButton_8() const { return ___leftButton_8; }
	inline Button_t3896396478 ** get_address_of_leftButton_8() { return &___leftButton_8; }
	inline void set_leftButton_8(Button_t3896396478 * value)
	{
		___leftButton_8 = value;
		Il2CppCodeGenWriteBarrier(&___leftButton_8, value);
	}

	inline static int32_t get_offset_of_rightButton_9() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___rightButton_9)); }
	inline Button_t3896396478 * get_rightButton_9() const { return ___rightButton_9; }
	inline Button_t3896396478 ** get_address_of_rightButton_9() { return &___rightButton_9; }
	inline void set_rightButton_9(Button_t3896396478 * value)
	{
		___rightButton_9 = value;
		Il2CppCodeGenWriteBarrier(&___rightButton_9, value);
	}

	inline static int32_t get_offset_of_progressBar_10() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___progressBar_10)); }
	inline Image_t538875265 * get_progressBar_10() const { return ___progressBar_10; }
	inline Image_t538875265 ** get_address_of_progressBar_10() { return &___progressBar_10; }
	inline void set_progressBar_10(Image_t538875265 * value)
	{
		___progressBar_10 = value;
		Il2CppCodeGenWriteBarrier(&___progressBar_10, value);
	}

	inline static int32_t get_offset_of_inTimeWindow_11() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___inTimeWindow_11)); }
	inline bool get_inTimeWindow_11() const { return ___inTimeWindow_11; }
	inline bool* get_address_of_inTimeWindow_11() { return &___inTimeWindow_11; }
	inline void set_inTimeWindow_11(bool value)
	{
		___inTimeWindow_11 = value;
	}

	inline static int32_t get_offset_of_waitTime_12() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___waitTime_12)); }
	inline float get_waitTime_12() const { return ___waitTime_12; }
	inline float* get_address_of_waitTime_12() { return &___waitTime_12; }
	inline void set_waitTime_12(float value)
	{
		___waitTime_12 = value;
	}

	inline static int32_t get_offset_of_endTime_13() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___endTime_13)); }
	inline float get_endTime_13() const { return ___endTime_13; }
	inline float* get_address_of_endTime_13() { return &___endTime_13; }
	inline void set_endTime_13(float value)
	{
		___endTime_13 = value;
	}

	inline static int32_t get_offset_of_unit0Animator_14() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___unit0Animator_14)); }
	inline Animator_t2776330603 * get_unit0Animator_14() const { return ___unit0Animator_14; }
	inline Animator_t2776330603 ** get_address_of_unit0Animator_14() { return &___unit0Animator_14; }
	inline void set_unit0Animator_14(Animator_t2776330603 * value)
	{
		___unit0Animator_14 = value;
		Il2CppCodeGenWriteBarrier(&___unit0Animator_14, value);
	}

	inline static int32_t get_offset_of_unit1Animator_15() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___unit1Animator_15)); }
	inline Animator_t2776330603 * get_unit1Animator_15() const { return ___unit1Animator_15; }
	inline Animator_t2776330603 ** get_address_of_unit1Animator_15() { return &___unit1Animator_15; }
	inline void set_unit1Animator_15(Animator_t2776330603 * value)
	{
		___unit1Animator_15 = value;
		Il2CppCodeGenWriteBarrier(&___unit1Animator_15, value);
	}

	inline static int32_t get_offset_of_updatedHealth_16() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___updatedHealth_16)); }
	inline bool get_updatedHealth_16() const { return ___updatedHealth_16; }
	inline bool* get_address_of_updatedHealth_16() { return &___updatedHealth_16; }
	inline void set_updatedHealth_16(bool value)
	{
		___updatedHealth_16 = value;
	}

	inline static int32_t get_offset_of_playerHealthBar_17() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playerHealthBar_17)); }
	inline Image_t538875265 * get_playerHealthBar_17() const { return ___playerHealthBar_17; }
	inline Image_t538875265 ** get_address_of_playerHealthBar_17() { return &___playerHealthBar_17; }
	inline void set_playerHealthBar_17(Image_t538875265 * value)
	{
		___playerHealthBar_17 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealthBar_17, value);
	}

	inline static int32_t get_offset_of_enemyHealthBar_18() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___enemyHealthBar_18)); }
	inline Image_t538875265 * get_enemyHealthBar_18() const { return ___enemyHealthBar_18; }
	inline Image_t538875265 ** get_address_of_enemyHealthBar_18() { return &___enemyHealthBar_18; }
	inline void set_enemyHealthBar_18(Image_t538875265 * value)
	{
		___enemyHealthBar_18 = value;
		Il2CppCodeGenWriteBarrier(&___enemyHealthBar_18, value);
	}

	inline static int32_t get_offset_of_playerNextMove_19() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playerNextMove_19)); }
	inline Text_t9039225 * get_playerNextMove_19() const { return ___playerNextMove_19; }
	inline Text_t9039225 ** get_address_of_playerNextMove_19() { return &___playerNextMove_19; }
	inline void set_playerNextMove_19(Text_t9039225 * value)
	{
		___playerNextMove_19 = value;
		Il2CppCodeGenWriteBarrier(&___playerNextMove_19, value);
	}

	inline static int32_t get_offset_of_enemyNextMove_20() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___enemyNextMove_20)); }
	inline Text_t9039225 * get_enemyNextMove_20() const { return ___enemyNextMove_20; }
	inline Text_t9039225 ** get_address_of_enemyNextMove_20() { return &___enemyNextMove_20; }
	inline void set_enemyNextMove_20(Text_t9039225 * value)
	{
		___enemyNextMove_20 = value;
		Il2CppCodeGenWriteBarrier(&___enemyNextMove_20, value);
	}

	inline static int32_t get_offset_of_enemyNextMoveStr_21() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___enemyNextMoveStr_21)); }
	inline String_t* get_enemyNextMoveStr_21() const { return ___enemyNextMoveStr_21; }
	inline String_t** get_address_of_enemyNextMoveStr_21() { return &___enemyNextMoveStr_21; }
	inline void set_enemyNextMoveStr_21(String_t* value)
	{
		___enemyNextMoveStr_21 = value;
		Il2CppCodeGenWriteBarrier(&___enemyNextMoveStr_21, value);
	}

	inline static int32_t get_offset_of_inputKeySequence_22() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___inputKeySequence_22)); }
	inline ArrayList_t3948406897 * get_inputKeySequence_22() const { return ___inputKeySequence_22; }
	inline ArrayList_t3948406897 ** get_address_of_inputKeySequence_22() { return &___inputKeySequence_22; }
	inline void set_inputKeySequence_22(ArrayList_t3948406897 * value)
	{
		___inputKeySequence_22 = value;
		Il2CppCodeGenWriteBarrier(&___inputKeySequence_22, value);
	}

	inline static int32_t get_offset_of_casting_23() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___casting_23)); }
	inline bool get_casting_23() const { return ___casting_23; }
	inline bool* get_address_of_casting_23() { return &___casting_23; }
	inline void set_casting_23(bool value)
	{
		___casting_23 = value;
	}

	inline static int32_t get_offset_of_end_24() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___end_24)); }
	inline bool get_end_24() const { return ___end_24; }
	inline bool* get_address_of_end_24() { return &___end_24; }
	inline void set_end_24(bool value)
	{
		___end_24 = value;
	}

	inline static int32_t get_offset_of_castingTime_25() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___castingTime_25)); }
	inline float get_castingTime_25() const { return ___castingTime_25; }
	inline float* get_address_of_castingTime_25() { return &___castingTime_25; }
	inline void set_castingTime_25(float value)
	{
		___castingTime_25 = value;
	}

	inline static int32_t get_offset_of_battle_26() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___battle_26)); }
	inline bool get_battle_26() const { return ___battle_26; }
	inline bool* get_address_of_battle_26() { return &___battle_26; }
	inline void set_battle_26(bool value)
	{
		___battle_26 = value;
	}

	inline static int32_t get_offset_of_battleCamera_27() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___battleCamera_27)); }
	inline GameObject_t3674682005 * get_battleCamera_27() const { return ___battleCamera_27; }
	inline GameObject_t3674682005 ** get_address_of_battleCamera_27() { return &___battleCamera_27; }
	inline void set_battleCamera_27(GameObject_t3674682005 * value)
	{
		___battleCamera_27 = value;
		Il2CppCodeGenWriteBarrier(&___battleCamera_27, value);
	}

	inline static int32_t get_offset_of_outCamera_28() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___outCamera_28)); }
	inline GameObject_t3674682005 * get_outCamera_28() const { return ___outCamera_28; }
	inline GameObject_t3674682005 ** get_address_of_outCamera_28() { return &___outCamera_28; }
	inline void set_outCamera_28(GameObject_t3674682005 * value)
	{
		___outCamera_28 = value;
		Il2CppCodeGenWriteBarrier(&___outCamera_28, value);
	}

	inline static int32_t get_offset_of_battleUI_29() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___battleUI_29)); }
	inline GameObject_t3674682005 * get_battleUI_29() const { return ___battleUI_29; }
	inline GameObject_t3674682005 ** get_address_of_battleUI_29() { return &___battleUI_29; }
	inline void set_battleUI_29(GameObject_t3674682005 * value)
	{
		___battleUI_29 = value;
		Il2CppCodeGenWriteBarrier(&___battleUI_29, value);
	}

	inline static int32_t get_offset_of_playerTurn_30() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playerTurn_30)); }
	inline bool get_playerTurn_30() const { return ___playerTurn_30; }
	inline bool* get_address_of_playerTurn_30() { return &___playerTurn_30; }
	inline void set_playerTurn_30(bool value)
	{
		___playerTurn_30 = value;
	}

	inline static int32_t get_offset_of_playerUnitIsChosen_31() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playerUnitIsChosen_31)); }
	inline bool get_playerUnitIsChosen_31() const { return ___playerUnitIsChosen_31; }
	inline bool* get_address_of_playerUnitIsChosen_31() { return &___playerUnitIsChosen_31; }
	inline void set_playerUnitIsChosen_31(bool value)
	{
		___playerUnitIsChosen_31 = value;
	}

	inline static int32_t get_offset_of_playerUnits_32() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playerUnits_32)); }
	inline GameObjectU5BU5D_t2662109048* get_playerUnits_32() const { return ___playerUnits_32; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_playerUnits_32() { return &___playerUnits_32; }
	inline void set_playerUnits_32(GameObjectU5BU5D_t2662109048* value)
	{
		___playerUnits_32 = value;
		Il2CppCodeGenWriteBarrier(&___playerUnits_32, value);
	}

	inline static int32_t get_offset_of_playerChosenUnitIdx_33() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___playerChosenUnitIdx_33)); }
	inline int32_t get_playerChosenUnitIdx_33() const { return ___playerChosenUnitIdx_33; }
	inline int32_t* get_address_of_playerChosenUnitIdx_33() { return &___playerChosenUnitIdx_33; }
	inline void set_playerChosenUnitIdx_33(int32_t value)
	{
		___playerChosenUnitIdx_33 = value;
	}

	inline static int32_t get_offset_of_enemyUnitIsChosen_34() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___enemyUnitIsChosen_34)); }
	inline bool get_enemyUnitIsChosen_34() const { return ___enemyUnitIsChosen_34; }
	inline bool* get_address_of_enemyUnitIsChosen_34() { return &___enemyUnitIsChosen_34; }
	inline void set_enemyUnitIsChosen_34(bool value)
	{
		___enemyUnitIsChosen_34 = value;
	}

	inline static int32_t get_offset_of_enemyUnits_35() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___enemyUnits_35)); }
	inline GameObjectU5BU5D_t2662109048* get_enemyUnits_35() const { return ___enemyUnits_35; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_enemyUnits_35() { return &___enemyUnits_35; }
	inline void set_enemyUnits_35(GameObjectU5BU5D_t2662109048* value)
	{
		___enemyUnits_35 = value;
		Il2CppCodeGenWriteBarrier(&___enemyUnits_35, value);
	}

	inline static int32_t get_offset_of_enemyChosenUnitIdx_36() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___enemyChosenUnitIdx_36)); }
	inline int32_t get_enemyChosenUnitIdx_36() const { return ___enemyChosenUnitIdx_36; }
	inline int32_t* get_address_of_enemyChosenUnitIdx_36() { return &___enemyChosenUnitIdx_36; }
	inline void set_enemyChosenUnitIdx_36(int32_t value)
	{
		___enemyChosenUnitIdx_36 = value;
	}

	inline static int32_t get_offset_of_TilePrefab_37() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___TilePrefab_37)); }
	inline GameObject_t3674682005 * get_TilePrefab_37() const { return ___TilePrefab_37; }
	inline GameObject_t3674682005 ** get_address_of_TilePrefab_37() { return &___TilePrefab_37; }
	inline void set_TilePrefab_37(GameObject_t3674682005 * value)
	{
		___TilePrefab_37 = value;
		Il2CppCodeGenWriteBarrier(&___TilePrefab_37, value);
	}

	inline static int32_t get_offset_of_UserPlayerPrefab_38() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___UserPlayerPrefab_38)); }
	inline GameObject_t3674682005 * get_UserPlayerPrefab_38() const { return ___UserPlayerPrefab_38; }
	inline GameObject_t3674682005 ** get_address_of_UserPlayerPrefab_38() { return &___UserPlayerPrefab_38; }
	inline void set_UserPlayerPrefab_38(GameObject_t3674682005 * value)
	{
		___UserPlayerPrefab_38 = value;
		Il2CppCodeGenWriteBarrier(&___UserPlayerPrefab_38, value);
	}

	inline static int32_t get_offset_of_AIPlayerPrefab_39() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___AIPlayerPrefab_39)); }
	inline GameObject_t3674682005 * get_AIPlayerPrefab_39() const { return ___AIPlayerPrefab_39; }
	inline GameObject_t3674682005 ** get_address_of_AIPlayerPrefab_39() { return &___AIPlayerPrefab_39; }
	inline void set_AIPlayerPrefab_39(GameObject_t3674682005 * value)
	{
		___AIPlayerPrefab_39 = value;
		Il2CppCodeGenWriteBarrier(&___AIPlayerPrefab_39, value);
	}

	inline static int32_t get_offset_of_map_40() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___map_40)); }
	inline List_1_t2738977902 * get_map_40() const { return ___map_40; }
	inline List_1_t2738977902 ** get_address_of_map_40() { return &___map_40; }
	inline void set_map_40(List_1_t2738977902 * value)
	{
		___map_40 = value;
		Il2CppCodeGenWriteBarrier(&___map_40, value);
	}

	inline static int32_t get_offset_of_userPlayers_41() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___userPlayers_41)); }
	inline List_1_t565044604 * get_userPlayers_41() const { return ___userPlayers_41; }
	inline List_1_t565044604 ** get_address_of_userPlayers_41() { return &___userPlayers_41; }
	inline void set_userPlayers_41(List_1_t565044604 * value)
	{
		___userPlayers_41 = value;
		Il2CppCodeGenWriteBarrier(&___userPlayers_41, value);
	}

	inline static int32_t get_offset_of_aiPlayers_42() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___aiPlayers_42)); }
	inline List_1_t1443081209 * get_aiPlayers_42() const { return ___aiPlayers_42; }
	inline List_1_t1443081209 ** get_address_of_aiPlayers_42() { return &___aiPlayers_42; }
	inline void set_aiPlayers_42(List_1_t1443081209 * value)
	{
		___aiPlayers_42 = value;
		Il2CppCodeGenWriteBarrier(&___aiPlayers_42, value);
	}

	inline static int32_t get_offset_of_currentPlayer_43() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___currentPlayer_43)); }
	inline Player_t2393081601 * get_currentPlayer_43() const { return ___currentPlayer_43; }
	inline Player_t2393081601 ** get_address_of_currentPlayer_43() { return &___currentPlayer_43; }
	inline void set_currentPlayer_43(Player_t2393081601 * value)
	{
		___currentPlayer_43 = value;
		Il2CppCodeGenWriteBarrier(&___currentPlayer_43, value);
	}

	inline static int32_t get_offset_of_mapSize_44() { return static_cast<int32_t>(offsetof(GameManager_t2369589051, ___mapSize_44)); }
	inline int32_t get_mapSize_44() const { return ___mapSize_44; }
	inline int32_t* get_address_of_mapSize_44() { return &___mapSize_44; }
	inline void set_mapSize_44(int32_t value)
	{
		___mapSize_44 = value;
	}
};

struct GameManager_t2369589051_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_t2369589051 * ___instance_3;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(GameManager_t2369589051_StaticFields, ___instance_3)); }
	inline GameManager_t2369589051 * get_instance_3() const { return ___instance_3; }
	inline GameManager_t2369589051 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(GameManager_t2369589051 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
