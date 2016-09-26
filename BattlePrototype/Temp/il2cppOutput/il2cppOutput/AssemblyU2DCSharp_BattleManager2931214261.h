#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BattleManager
struct  BattleManager_t2931214261  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject BattleManager::battleCamera
	GameObject_t3674682005 * ___battleCamera_2;
	// UnityEngine.GameObject BattleManager::outCamera
	GameObject_t3674682005 * ___outCamera_3;
	// UnityEngine.GameObject BattleManager::battleUI
	GameObject_t3674682005 * ___battleUI_4;
	// UnityEngine.UI.Button BattleManager::leftButton
	Button_t3896396478 * ___leftButton_5;
	// UnityEngine.UI.Button BattleManager::rightButton
	Button_t3896396478 * ___rightButton_6;
	// UnityEngine.UI.Image BattleManager::progressBar
	Image_t538875265 * ___progressBar_7;
	// System.Boolean BattleManager::inTimeWindow
	bool ___inTimeWindow_8;
	// System.Single BattleManager::waitTime
	float ___waitTime_9;
	// System.Single BattleManager::endTime
	float ___endTime_10;
	// UnityEngine.Animator BattleManager::unit0Animator
	Animator_t2776330603 * ___unit0Animator_11;
	// UnityEngine.Animator BattleManager::unit1Animator
	Animator_t2776330603 * ___unit1Animator_12;
	// System.Boolean BattleManager::updatedHealth
	bool ___updatedHealth_13;
	// UnityEngine.UI.Image BattleManager::playerHealthBar
	Image_t538875265 * ___playerHealthBar_14;
	// UnityEngine.UI.Image BattleManager::enemyHealthBar
	Image_t538875265 * ___enemyHealthBar_15;
	// UnityEngine.UI.Text BattleManager::playerNextMove
	Text_t9039225 * ___playerNextMove_16;
	// UnityEngine.UI.Text BattleManager::enemyNextMove
	Text_t9039225 * ___enemyNextMove_17;
	// System.String BattleManager::enemyNextMoveStr
	String_t* ___enemyNextMoveStr_18;
	// System.Collections.ArrayList BattleManager::inputKeySequence
	ArrayList_t3948406897 * ___inputKeySequence_19;
	// System.Boolean BattleManager::casting
	bool ___casting_20;
	// System.Boolean BattleManager::end
	bool ___end_21;
	// System.Single BattleManager::castingTime
	float ___castingTime_22;

public:
	inline static int32_t get_offset_of_battleCamera_2() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___battleCamera_2)); }
	inline GameObject_t3674682005 * get_battleCamera_2() const { return ___battleCamera_2; }
	inline GameObject_t3674682005 ** get_address_of_battleCamera_2() { return &___battleCamera_2; }
	inline void set_battleCamera_2(GameObject_t3674682005 * value)
	{
		___battleCamera_2 = value;
		Il2CppCodeGenWriteBarrier(&___battleCamera_2, value);
	}

	inline static int32_t get_offset_of_outCamera_3() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___outCamera_3)); }
	inline GameObject_t3674682005 * get_outCamera_3() const { return ___outCamera_3; }
	inline GameObject_t3674682005 ** get_address_of_outCamera_3() { return &___outCamera_3; }
	inline void set_outCamera_3(GameObject_t3674682005 * value)
	{
		___outCamera_3 = value;
		Il2CppCodeGenWriteBarrier(&___outCamera_3, value);
	}

	inline static int32_t get_offset_of_battleUI_4() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___battleUI_4)); }
	inline GameObject_t3674682005 * get_battleUI_4() const { return ___battleUI_4; }
	inline GameObject_t3674682005 ** get_address_of_battleUI_4() { return &___battleUI_4; }
	inline void set_battleUI_4(GameObject_t3674682005 * value)
	{
		___battleUI_4 = value;
		Il2CppCodeGenWriteBarrier(&___battleUI_4, value);
	}

	inline static int32_t get_offset_of_leftButton_5() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___leftButton_5)); }
	inline Button_t3896396478 * get_leftButton_5() const { return ___leftButton_5; }
	inline Button_t3896396478 ** get_address_of_leftButton_5() { return &___leftButton_5; }
	inline void set_leftButton_5(Button_t3896396478 * value)
	{
		___leftButton_5 = value;
		Il2CppCodeGenWriteBarrier(&___leftButton_5, value);
	}

	inline static int32_t get_offset_of_rightButton_6() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___rightButton_6)); }
	inline Button_t3896396478 * get_rightButton_6() const { return ___rightButton_6; }
	inline Button_t3896396478 ** get_address_of_rightButton_6() { return &___rightButton_6; }
	inline void set_rightButton_6(Button_t3896396478 * value)
	{
		___rightButton_6 = value;
		Il2CppCodeGenWriteBarrier(&___rightButton_6, value);
	}

	inline static int32_t get_offset_of_progressBar_7() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___progressBar_7)); }
	inline Image_t538875265 * get_progressBar_7() const { return ___progressBar_7; }
	inline Image_t538875265 ** get_address_of_progressBar_7() { return &___progressBar_7; }
	inline void set_progressBar_7(Image_t538875265 * value)
	{
		___progressBar_7 = value;
		Il2CppCodeGenWriteBarrier(&___progressBar_7, value);
	}

	inline static int32_t get_offset_of_inTimeWindow_8() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___inTimeWindow_8)); }
	inline bool get_inTimeWindow_8() const { return ___inTimeWindow_8; }
	inline bool* get_address_of_inTimeWindow_8() { return &___inTimeWindow_8; }
	inline void set_inTimeWindow_8(bool value)
	{
		___inTimeWindow_8 = value;
	}

	inline static int32_t get_offset_of_waitTime_9() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___waitTime_9)); }
	inline float get_waitTime_9() const { return ___waitTime_9; }
	inline float* get_address_of_waitTime_9() { return &___waitTime_9; }
	inline void set_waitTime_9(float value)
	{
		___waitTime_9 = value;
	}

	inline static int32_t get_offset_of_endTime_10() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___endTime_10)); }
	inline float get_endTime_10() const { return ___endTime_10; }
	inline float* get_address_of_endTime_10() { return &___endTime_10; }
	inline void set_endTime_10(float value)
	{
		___endTime_10 = value;
	}

	inline static int32_t get_offset_of_unit0Animator_11() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___unit0Animator_11)); }
	inline Animator_t2776330603 * get_unit0Animator_11() const { return ___unit0Animator_11; }
	inline Animator_t2776330603 ** get_address_of_unit0Animator_11() { return &___unit0Animator_11; }
	inline void set_unit0Animator_11(Animator_t2776330603 * value)
	{
		___unit0Animator_11 = value;
		Il2CppCodeGenWriteBarrier(&___unit0Animator_11, value);
	}

	inline static int32_t get_offset_of_unit1Animator_12() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___unit1Animator_12)); }
	inline Animator_t2776330603 * get_unit1Animator_12() const { return ___unit1Animator_12; }
	inline Animator_t2776330603 ** get_address_of_unit1Animator_12() { return &___unit1Animator_12; }
	inline void set_unit1Animator_12(Animator_t2776330603 * value)
	{
		___unit1Animator_12 = value;
		Il2CppCodeGenWriteBarrier(&___unit1Animator_12, value);
	}

	inline static int32_t get_offset_of_updatedHealth_13() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___updatedHealth_13)); }
	inline bool get_updatedHealth_13() const { return ___updatedHealth_13; }
	inline bool* get_address_of_updatedHealth_13() { return &___updatedHealth_13; }
	inline void set_updatedHealth_13(bool value)
	{
		___updatedHealth_13 = value;
	}

	inline static int32_t get_offset_of_playerHealthBar_14() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___playerHealthBar_14)); }
	inline Image_t538875265 * get_playerHealthBar_14() const { return ___playerHealthBar_14; }
	inline Image_t538875265 ** get_address_of_playerHealthBar_14() { return &___playerHealthBar_14; }
	inline void set_playerHealthBar_14(Image_t538875265 * value)
	{
		___playerHealthBar_14 = value;
		Il2CppCodeGenWriteBarrier(&___playerHealthBar_14, value);
	}

	inline static int32_t get_offset_of_enemyHealthBar_15() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___enemyHealthBar_15)); }
	inline Image_t538875265 * get_enemyHealthBar_15() const { return ___enemyHealthBar_15; }
	inline Image_t538875265 ** get_address_of_enemyHealthBar_15() { return &___enemyHealthBar_15; }
	inline void set_enemyHealthBar_15(Image_t538875265 * value)
	{
		___enemyHealthBar_15 = value;
		Il2CppCodeGenWriteBarrier(&___enemyHealthBar_15, value);
	}

	inline static int32_t get_offset_of_playerNextMove_16() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___playerNextMove_16)); }
	inline Text_t9039225 * get_playerNextMove_16() const { return ___playerNextMove_16; }
	inline Text_t9039225 ** get_address_of_playerNextMove_16() { return &___playerNextMove_16; }
	inline void set_playerNextMove_16(Text_t9039225 * value)
	{
		___playerNextMove_16 = value;
		Il2CppCodeGenWriteBarrier(&___playerNextMove_16, value);
	}

	inline static int32_t get_offset_of_enemyNextMove_17() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___enemyNextMove_17)); }
	inline Text_t9039225 * get_enemyNextMove_17() const { return ___enemyNextMove_17; }
	inline Text_t9039225 ** get_address_of_enemyNextMove_17() { return &___enemyNextMove_17; }
	inline void set_enemyNextMove_17(Text_t9039225 * value)
	{
		___enemyNextMove_17 = value;
		Il2CppCodeGenWriteBarrier(&___enemyNextMove_17, value);
	}

	inline static int32_t get_offset_of_enemyNextMoveStr_18() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___enemyNextMoveStr_18)); }
	inline String_t* get_enemyNextMoveStr_18() const { return ___enemyNextMoveStr_18; }
	inline String_t** get_address_of_enemyNextMoveStr_18() { return &___enemyNextMoveStr_18; }
	inline void set_enemyNextMoveStr_18(String_t* value)
	{
		___enemyNextMoveStr_18 = value;
		Il2CppCodeGenWriteBarrier(&___enemyNextMoveStr_18, value);
	}

	inline static int32_t get_offset_of_inputKeySequence_19() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___inputKeySequence_19)); }
	inline ArrayList_t3948406897 * get_inputKeySequence_19() const { return ___inputKeySequence_19; }
	inline ArrayList_t3948406897 ** get_address_of_inputKeySequence_19() { return &___inputKeySequence_19; }
	inline void set_inputKeySequence_19(ArrayList_t3948406897 * value)
	{
		___inputKeySequence_19 = value;
		Il2CppCodeGenWriteBarrier(&___inputKeySequence_19, value);
	}

	inline static int32_t get_offset_of_casting_20() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___casting_20)); }
	inline bool get_casting_20() const { return ___casting_20; }
	inline bool* get_address_of_casting_20() { return &___casting_20; }
	inline void set_casting_20(bool value)
	{
		___casting_20 = value;
	}

	inline static int32_t get_offset_of_end_21() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___end_21)); }
	inline bool get_end_21() const { return ___end_21; }
	inline bool* get_address_of_end_21() { return &___end_21; }
	inline void set_end_21(bool value)
	{
		___end_21 = value;
	}

	inline static int32_t get_offset_of_castingTime_22() { return static_cast<int32_t>(offsetof(BattleManager_t2931214261, ___castingTime_22)); }
	inline float get_castingTime_22() const { return ___castingTime_22; }
	inline float* get_address_of_castingTime_22() { return &___castingTime_22; }
	inline void set_castingTime_22(float value)
	{
		___castingTime_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
