#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// AIPlayer
struct AIPlayer_t74895657;
// BattleManager
struct BattleManager_t2931214261;
// System.String
struct String_t;
// UnityEngine.UI.Image
struct Image_t538875265;
// GameManager
struct GameManager_t2369589051;
// Player
struct Player_t2393081601;
// Tile
struct Tile_t2606798;
// System.Object
struct Il2CppObject;
// UserPlayer
struct UserPlayer_t3491826348;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_AIPlayer74895657.h"
#include "AssemblyU2DCSharp_AIPlayer74895657MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "AssemblyU2DCSharp_Player2393081601MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "AssemblyU2DCSharp_BattleManager2931214261.h"
#include "AssemblyU2DCSharp_BattleManager2931214261MethodDeclarations.h"
#include "mscorlib_System_Collections_ArrayList3948406897MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "mscorlib_System_Collections_ArrayList3948406897.h"
#include "UnityEngine_UI_UnityEngine_UI_Button3896396478MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityAction594794173MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Events_UnityEvent1266085011MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Image538875265.h"
#include "UnityEngine_UI_UnityEngine_UI_Button3896396478.h"
#include "UnityEngine_UI_UnityEngine_UI_Button_ButtonClicked2796375743.h"
#include "UnityEngine_UnityEngine_Events_UnityAction594794173.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UI_UnityEngine_UI_Image538875265MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225.h"
#include "UnityEngine_UI_UnityEngine_UI_Text9039225MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animator2776330603MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animator2776330603.h"
#include "UnityEngine_UnityEngine_Random3156561159MethodDeclarations.h"
#include "mscorlib_System_Math2862914300MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "AssemblyU2DCSharp_GameManager2369589051.h"
#include "AssemblyU2DCSharp_GameManager2369589051MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "mscorlib_System_Double3868226565.h"
#include "AssemblyU2DCSharp_Tile2606798.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2738977902MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1370792350MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1370792350.h"
#include "mscorlib_System_Collections_Generic_List_1_gen2738977902.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen565044604MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1443081209MethodDeclarations.h"
#include "AssemblyU2DCSharp_UserPlayer3491826348.h"
#include "mscorlib_System_Collections_Generic_List_1_gen565044604.h"
#include "mscorlib_System_Collections_Generic_List_1_gen1443081209.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat584717374MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1462753979MethodDeclarations.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumerat584717374.h"
#include "mscorlib_System_Collections_Generic_List_1_Enumera1462753979.h"
#include "mscorlib_System_Object4170816371MethodDeclarations.h"
#include "mscorlib_System_Type2863145774.h"
#include "AssemblyU2DCSharp_Tile2606798MethodDeclarations.h"
#include "AssemblyU2DCSharp_UserPlayer3491826348MethodDeclarations.h"

// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2447772384(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<Tile>()
#define GameObject_GetComponent_TisTile_t2606798_m2044442191(__this, method) ((  Tile_t2606798 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UserPlayer>()
#define GameObject_GetComponent_TisUserPlayer_t3491826348_m1727000369(__this, method) ((  UserPlayer_t3491826348 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<AIPlayer>()
#define GameObject_GetComponent_TisAIPlayer_t74895657_m4028861204(__this, method) ((  AIPlayer_t74895657 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2447772384_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AIPlayer::.ctor()
extern "C"  void AIPlayer__ctor_m3186109330 (AIPlayer_t74895657 * __this, const MethodInfo* method)
{
	{
		__this->set_moveSpeed_6((10.0f));
		Player__ctor_m871706298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AIPlayer::Start()
extern "C"  void AIPlayer_Start_m2133247122 (AIPlayer_t74895657 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AIPlayer::Update()
extern "C"  void AIPlayer_Update_m1712003515 (AIPlayer_t74895657 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void AIPlayer::TurnUpdate()
extern "C"  void AIPlayer_TurnUpdate_m2998120664 (AIPlayer_t74895657 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t4282066566  L_0 = ((Player_t2393081601 *)__this)->get_moveDestination_3();
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_Distance_m3366690344(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		if ((!(((float)L_3) > ((float)(0.1f)))))
		{
			goto IL_009a;
		}
	}
	{
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_5 = L_4;
		NullCheck(L_5);
		Vector3_t4282066566  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = ((Player_t2393081601 *)__this)->get_moveDestination_3();
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t4282066566  L_9 = Transform_get_position_m2211398607(L_8, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Vector3_t4282066566  L_11 = Vector3_get_normalized_m2650940353((&V_0), /*hidden argument*/NULL);
		float L_12 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_13 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_moveSpeed_6();
		Vector3_t4282066566  L_15 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		Vector3_t4282066566  L_16 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_6, L_15, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3111394108(L_5, L_16, /*hidden argument*/NULL);
		Vector3_t4282066566  L_17 = ((Player_t2393081601 *)__this)->get_moveDestination_3();
		Transform_t1659122786 * L_18 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t4282066566  L_19 = Transform_get_position_m2211398607(L_18, /*hidden argument*/NULL);
		float L_20 = Vector3_Distance_m3366690344(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		if ((!(((float)L_20) <= ((float)(0.1f)))))
		{
			goto IL_009a;
		}
	}
	{
		Transform_t1659122786 * L_21 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_22 = ((Player_t2393081601 *)__this)->get_moveDestination_3();
		NullCheck(L_21);
		Transform_set_position_m3111394108(L_21, L_22, /*hidden argument*/NULL);
	}

IL_009a:
	{
		return;
	}
}
// System.Void BattleManager::.ctor()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ArrayList_t3948406897_il2cpp_TypeInfo_var;
extern const uint32_t BattleManager__ctor_m866153814_MetadataUsageId;
extern "C"  void BattleManager__ctor_m866153814 (BattleManager_t2931214261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BattleManager__ctor_m866153814_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->set_waitTime_9((5.0f));
		__this->set_endTime_10((5.0f));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_enemyNextMoveStr_18(L_0);
		ArrayList_t3948406897 * L_1 = (ArrayList_t3948406897 *)il2cpp_codegen_object_new(ArrayList_t3948406897_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_1, /*hidden argument*/NULL);
		__this->set_inputKeySequence_19(L_1);
		__this->set_castingTime_22((5.0f));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BattleManager::Start()
extern Il2CppClass* UnityAction_t594794173_il2cpp_TypeInfo_var;
extern const MethodInfo* BattleManager_U3CStartU3Em__0_m456883663_MethodInfo_var;
extern const MethodInfo* BattleManager_U3CStartU3Em__1_m456884624_MethodInfo_var;
extern const uint32_t BattleManager_Start_m4108258902_MetadataUsageId;
extern "C"  void BattleManager_Start_m4108258902 (BattleManager_t2931214261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BattleManager_Start_m4108258902_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t538875265 * L_0 = __this->get_playerHealthBar_14();
		BattleManager_updateHealth_m74121600(__this, L_0, (1.0f), /*hidden argument*/NULL);
		Button_t3896396478 * L_1 = __this->get_leftButton_5();
		NullCheck(L_1);
		ButtonClickedEvent_t2796375743 * L_2 = Button_get_onClick_m1145127631(L_1, /*hidden argument*/NULL);
		IntPtr_t L_3;
		L_3.set_m_value_0((void*)(void*)BattleManager_U3CStartU3Em__0_m456883663_MethodInfo_var);
		UnityAction_t594794173 * L_4 = (UnityAction_t594794173 *)il2cpp_codegen_object_new(UnityAction_t594794173_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4130179243(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m4099140869(L_2, L_4, /*hidden argument*/NULL);
		Button_t3896396478 * L_5 = __this->get_rightButton_6();
		NullCheck(L_5);
		ButtonClickedEvent_t2796375743 * L_6 = Button_get_onClick_m1145127631(L_5, /*hidden argument*/NULL);
		IntPtr_t L_7;
		L_7.set_m_value_0((void*)(void*)BattleManager_U3CStartU3Em__1_m456884624_MethodInfo_var);
		UnityAction_t594794173 * L_8 = (UnityAction_t594794173 *)il2cpp_codegen_object_new(UnityAction_t594794173_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4130179243(L_8, __this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m4099140869(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BattleManager::Init()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3227604;
extern const uint32_t BattleManager_Init_m3720255038_MetadataUsageId;
extern "C"  void BattleManager_Init_m3720255038 (BattleManager_t2931214261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BattleManager_Init_m3720255038_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Button_t3896396478 * L_0 = __this->get_leftButton_5();
		NullCheck(L_0);
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3538205401(L_1, (bool)1, /*hidden argument*/NULL);
		Button_t3896396478 * L_2 = __this->get_rightButton_6();
		NullCheck(L_2);
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m3538205401(L_3, (bool)1, /*hidden argument*/NULL);
		BattleManager_setPlayerNext_m139308472(__this, _stringLiteral3227604, /*hidden argument*/NULL);
		BattleManager_setEnemyNext_m1763172411(__this, _stringLiteral3227604, /*hidden argument*/NULL);
		Text_t9039225 * L_4 = __this->get_playerNextMove_16();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		Text_t9039225 * L_6 = __this->get_enemyNextMove_17();
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_enemyNextMoveStr_18(L_8);
		__this->set_casting_20((bool)0);
		__this->set_inTimeWindow_8((bool)1);
		__this->set_updatedHealth_13((bool)0);
		Image_t538875265 * L_9 = __this->get_progressBar_7();
		NullCheck(L_9);
		Image_set_fillAmount_m1583793743(L_9, (1.0f), /*hidden argument*/NULL);
		__this->set_endTime_10((5.0f));
		__this->set_castingTime_22((5.0f));
		ArrayList_t3948406897 * L_10 = __this->get_inputKeySequence_19();
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_10);
		return;
	}
}
// System.Void BattleManager::setPlayerNext(System.String)
extern Il2CppCodeGenString* _stringLiteral2887708232;
extern Il2CppCodeGenString* _stringLiteral95758295;
extern const uint32_t BattleManager_setPlayerNext_m139308472_MetadataUsageId;
extern "C"  void BattleManager_setPlayerNext_m139308472 (BattleManager_t2931214261 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BattleManager_setPlayerNext_m139308472_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		bool L_1 = String_Equals_m3541721061(L_0, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		Animator_t2776330603 * L_2 = __this->get_unit0Animator_11();
		NullCheck(L_2);
		Animator_SetBool_m2336836203(L_2, _stringLiteral2887708232, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_3 = __this->get_unit0Animator_11();
		NullCheck(L_3);
		Animator_SetBool_m2336836203(L_3, _stringLiteral95758295, (bool)0, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0037:
	{
		String_t* L_4 = ___name0;
		NullCheck(L_4);
		bool L_5 = String_Equals_m3541721061(L_4, _stringLiteral95758295, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006e;
		}
	}
	{
		Animator_t2776330603 * L_6 = __this->get_unit0Animator_11();
		NullCheck(L_6);
		Animator_SetBool_m2336836203(L_6, _stringLiteral2887708232, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_7 = __this->get_unit0Animator_11();
		NullCheck(L_7);
		Animator_SetBool_m2336836203(L_7, _stringLiteral95758295, (bool)1, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_006e:
	{
		Animator_t2776330603 * L_8 = __this->get_unit0Animator_11();
		NullCheck(L_8);
		Animator_SetBool_m2336836203(L_8, _stringLiteral2887708232, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_9 = __this->get_unit0Animator_11();
		NullCheck(L_9);
		Animator_SetBool_m2336836203(L_9, _stringLiteral95758295, (bool)0, /*hidden argument*/NULL);
	}

IL_0090:
	{
		Text_t9039225 * L_10 = __this->get_playerNextMove_16();
		String_t* L_11 = ___name0;
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_11);
		return;
	}
}
// System.Void BattleManager::updateHealth(UnityEngine.UI.Image,System.Single)
extern "C"  void BattleManager_updateHealth_m74121600 (BattleManager_t2931214261 * __this, Image_t538875265 * ___bar0, float ___newValue1, const MethodInfo* method)
{
	{
		Image_t538875265 * L_0 = ___bar0;
		float L_1 = ___newValue1;
		NullCheck(L_0);
		Image_set_fillAmount_m1583793743(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BattleManager::setEnemyNext(System.String)
extern Il2CppCodeGenString* _stringLiteral2887708232;
extern Il2CppCodeGenString* _stringLiteral95758295;
extern const uint32_t BattleManager_setEnemyNext_m1763172411_MetadataUsageId;
extern "C"  void BattleManager_setEnemyNext_m1763172411 (BattleManager_t2931214261 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BattleManager_setEnemyNext_m1763172411_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		bool L_1 = String_Equals_m3541721061(L_0, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		Animator_t2776330603 * L_2 = __this->get_unit1Animator_12();
		NullCheck(L_2);
		Animator_SetBool_m2336836203(L_2, _stringLiteral2887708232, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_3 = __this->get_unit1Animator_12();
		NullCheck(L_3);
		Animator_SetBool_m2336836203(L_3, _stringLiteral95758295, (bool)0, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_0037:
	{
		String_t* L_4 = ___name0;
		NullCheck(L_4);
		bool L_5 = String_Equals_m3541721061(L_4, _stringLiteral95758295, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_006e;
		}
	}
	{
		Animator_t2776330603 * L_6 = __this->get_unit1Animator_12();
		NullCheck(L_6);
		Animator_SetBool_m2336836203(L_6, _stringLiteral2887708232, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_7 = __this->get_unit1Animator_12();
		NullCheck(L_7);
		Animator_SetBool_m2336836203(L_7, _stringLiteral95758295, (bool)1, /*hidden argument*/NULL);
		goto IL_0090;
	}

IL_006e:
	{
		Animator_t2776330603 * L_8 = __this->get_unit1Animator_12();
		NullCheck(L_8);
		Animator_SetBool_m2336836203(L_8, _stringLiteral2887708232, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_9 = __this->get_unit1Animator_12();
		NullCheck(L_9);
		Animator_SetBool_m2336836203(L_9, _stringLiteral95758295, (bool)0, /*hidden argument*/NULL);
	}

IL_0090:
	{
		return;
	}
}
// System.Void BattleManager::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2887708232;
extern Il2CppCodeGenString* _stringLiteral95758295;
extern Il2CppCodeGenString* _stringLiteral3227604;
extern Il2CppCodeGenString* _stringLiteral1508448;
extern Il2CppCodeGenString* _stringLiteral1539168;
extern Il2CppCodeGenString* _stringLiteral3079268;
extern Il2CppCodeGenString* _stringLiteral3014434722;
extern const uint32_t BattleManager_Update_m2807826551_MetadataUsageId;
extern "C"  void BattleManager_Update_m2807826551 (BattleManager_t2931214261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BattleManager_Update_m2807826551_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppObject * V_3 = NULL;
	Il2CppObject * V_4 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_inTimeWindow_8();
		if (!L_0)
		{
			goto IL_00b9;
		}
	}
	{
		String_t* L_1 = __this->get_enemyNextMoveStr_18();
		NullCheck(L_1);
		int32_t L_2 = String_get_Length_m2979997331(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_006f;
		}
	}
	{
		int32_t L_3 = Random_Range_m75452833(NULL /*static, unused*/, 1, ((int32_t)10), /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) >= ((int32_t)5)))
		{
			goto IL_003b;
		}
	}
	{
		__this->set_enemyNextMoveStr_18(_stringLiteral2887708232);
		goto IL_005e;
	}

IL_003b:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)((int32_t)9))))
		{
			goto IL_0053;
		}
	}
	{
		__this->set_enemyNextMoveStr_18(_stringLiteral95758295);
		goto IL_005e;
	}

IL_0053:
	{
		__this->set_enemyNextMoveStr_18(_stringLiteral3227604);
	}

IL_005e:
	{
		Text_t9039225 * L_6 = __this->get_enemyNextMove_17();
		String_t* L_7 = __this->get_enemyNextMoveStr_18();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
	}

IL_006f:
	{
		Image_t538875265 * L_8 = __this->get_progressBar_7();
		NullCheck(L_8);
		float L_9 = Image_get_fillAmount_m3193252212(L_8, /*hidden argument*/NULL);
		if ((!(((float)L_9) > ((float)(0.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		Image_t538875265 * L_10 = __this->get_progressBar_7();
		Image_t538875265 * L_11 = L_10;
		NullCheck(L_11);
		float L_12 = Image_get_fillAmount_m3193252212(L_11, /*hidden argument*/NULL);
		float L_13 = __this->get_waitTime_9();
		float L_14 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_11);
		Image_set_fillAmount_m1583793743(L_11, ((float)((float)L_12-(float)((float)((float)((float)((float)(1.0f)/(float)L_13))*(float)L_14)))), /*hidden argument*/NULL);
		goto IL_00b4;
	}

IL_00ad:
	{
		__this->set_inTimeWindow_8((bool)0);
	}

IL_00b4:
	{
		goto IL_0557;
	}

IL_00b9:
	{
		bool L_15 = __this->get_casting_20();
		if (L_15)
		{
			goto IL_01ac;
		}
	}
	{
		Button_t3896396478 * L_16 = __this->get_leftButton_5();
		NullCheck(L_16);
		GameObject_t3674682005 * L_17 = Component_get_gameObject_m1170635899(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_m3538205401(L_17, (bool)0, /*hidden argument*/NULL);
		Button_t3896396478 * L_18 = __this->get_rightButton_6();
		NullCheck(L_18);
		GameObject_t3674682005 * L_19 = Component_get_gameObject_m1170635899(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_m3538205401(L_19, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_20 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_1 = L_20;
		ArrayList_t3948406897 * L_21 = __this->get_inputKeySequence_19();
		NullCheck(L_21);
		Il2CppObject * L_22 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_21);
		V_3 = L_22;
	}

IL_00f8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0116;
		}

IL_00fd:
		{
			Il2CppObject * L_23 = V_3;
			NullCheck(L_23);
			Il2CppObject * L_24 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_23);
			V_2 = ((*(int32_t*)((int32_t*)UnBox (L_24, Int32_t1153838500_il2cpp_TypeInfo_var))));
			String_t* L_25 = V_1;
			int32_t L_26 = V_2;
			int32_t L_27 = L_26;
			Il2CppObject * L_28 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_27);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_29 = String_Concat_m389863537(NULL /*static, unused*/, L_25, L_28, /*hidden argument*/NULL);
			V_1 = L_29;
		}

IL_0116:
		{
			Il2CppObject * L_30 = V_3;
			NullCheck(L_30);
			bool L_31 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_30);
			if (L_31)
			{
				goto IL_00fd;
			}
		}

IL_0121:
		{
			IL2CPP_LEAVE(0x13B, FINALLY_0126);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0126;
	}

FINALLY_0126:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_32 = V_3;
			V_4 = ((Il2CppObject *)IsInst(L_32, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_33 = V_4;
			if (L_33)
			{
				goto IL_0133;
			}
		}

IL_0132:
		{
			IL2CPP_END_FINALLY(294)
		}

IL_0133:
		{
			Il2CppObject * L_34 = V_4;
			NullCheck(L_34);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_34);
			IL2CPP_END_FINALLY(294)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(294)
	{
		IL2CPP_JUMP_TBL(0x13B, IL_013b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_013b:
	{
		String_t* L_35 = V_1;
		NullCheck(L_35);
		bool L_36 = String_Equals_m3541721061(L_35, _stringLiteral1508448, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0162;
		}
	}
	{
		__this->set_casting_20((bool)1);
		BattleManager_setPlayerNext_m139308472(__this, _stringLiteral2887708232, /*hidden argument*/NULL);
		goto IL_019b;
	}

IL_0162:
	{
		String_t* L_37 = V_1;
		NullCheck(L_37);
		bool L_38 = String_Equals_m3541721061(L_37, _stringLiteral1539168, /*hidden argument*/NULL);
		if (!L_38)
		{
			goto IL_0189;
		}
	}
	{
		__this->set_casting_20((bool)1);
		BattleManager_setPlayerNext_m139308472(__this, _stringLiteral95758295, /*hidden argument*/NULL);
		goto IL_019b;
	}

IL_0189:
	{
		__this->set_casting_20((bool)1);
		BattleManager_setPlayerNext_m139308472(__this, _stringLiteral3227604, /*hidden argument*/NULL);
	}

IL_019b:
	{
		String_t* L_39 = __this->get_enemyNextMoveStr_18();
		BattleManager_setEnemyNext_m1763172411(__this, L_39, /*hidden argument*/NULL);
		goto IL_0557;
	}

IL_01ac:
	{
		bool L_40 = __this->get_end_21();
		if (L_40)
		{
			goto IL_04fc;
		}
	}
	{
		bool L_41 = __this->get_casting_20();
		if (!L_41)
		{
			goto IL_04fc;
		}
	}
	{
		float L_42 = __this->get_castingTime_22();
		if ((!(((float)L_42) > ((float)(0.0f)))))
		{
			goto IL_01e9;
		}
	}
	{
		float L_43 = __this->get_castingTime_22();
		float L_44 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_castingTime_22(((float)((float)L_43-(float)L_44)));
		goto IL_04f7;
	}

IL_01e9:
	{
		bool L_45 = __this->get_updatedHealth_13();
		if (L_45)
		{
			goto IL_03fd;
		}
	}
	{
		Text_t9039225 * L_46 = __this->get_playerNextMove_16();
		NullCheck(L_46);
		String_t* L_47 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_46);
		NullCheck(L_47);
		bool L_48 = String_Equals_m3541721061(L_47, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_027b;
		}
	}
	{
		Text_t9039225 * L_49 = __this->get_enemyNextMove_17();
		NullCheck(L_49);
		String_t* L_50 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_49);
		NullCheck(L_50);
		bool L_51 = String_Equals_m3541721061(L_50, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_027b;
		}
	}
	{
		Image_t538875265 * L_52 = __this->get_playerHealthBar_14();
		Image_t538875265 * L_53 = __this->get_playerHealthBar_14();
		NullCheck(L_53);
		float L_54 = Image_get_fillAmount_m3193252212(L_53, /*hidden argument*/NULL);
		float L_55 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_54-(float)(0.5f))), /*hidden argument*/NULL);
		BattleManager_updateHealth_m74121600(__this, L_52, L_55, /*hidden argument*/NULL);
		Image_t538875265 * L_56 = __this->get_enemyHealthBar_15();
		Image_t538875265 * L_57 = __this->get_enemyHealthBar_15();
		NullCheck(L_57);
		float L_58 = Image_get_fillAmount_m3193252212(L_57, /*hidden argument*/NULL);
		float L_59 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_58-(float)(0.5f))), /*hidden argument*/NULL);
		BattleManager_updateHealth_m74121600(__this, L_56, L_59, /*hidden argument*/NULL);
		goto IL_03f6;
	}

IL_027b:
	{
		Text_t9039225 * L_60 = __this->get_playerNextMove_16();
		NullCheck(L_60);
		String_t* L_61 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_60);
		NullCheck(L_61);
		bool L_62 = String_Equals_m3541721061(L_61, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_02db;
		}
	}
	{
		Text_t9039225 * L_63 = __this->get_enemyNextMove_17();
		NullCheck(L_63);
		String_t* L_64 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_63);
		NullCheck(L_64);
		bool L_65 = String_Equals_m3541721061(L_64, _stringLiteral95758295, /*hidden argument*/NULL);
		if (!L_65)
		{
			goto IL_02db;
		}
	}
	{
		Image_t538875265 * L_66 = __this->get_enemyHealthBar_15();
		Image_t538875265 * L_67 = __this->get_enemyHealthBar_15();
		NullCheck(L_67);
		float L_68 = Image_get_fillAmount_m3193252212(L_67, /*hidden argument*/NULL);
		float L_69 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_68-(float)(0.1f))), /*hidden argument*/NULL);
		BattleManager_updateHealth_m74121600(__this, L_66, L_69, /*hidden argument*/NULL);
		goto IL_03f6;
	}

IL_02db:
	{
		Text_t9039225 * L_70 = __this->get_playerNextMove_16();
		NullCheck(L_70);
		String_t* L_71 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_70);
		NullCheck(L_71);
		bool L_72 = String_Equals_m3541721061(L_71, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_033b;
		}
	}
	{
		Text_t9039225 * L_73 = __this->get_enemyNextMove_17();
		NullCheck(L_73);
		String_t* L_74 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_73);
		NullCheck(L_74);
		bool L_75 = String_Equals_m3541721061(L_74, _stringLiteral3227604, /*hidden argument*/NULL);
		if (!L_75)
		{
			goto IL_033b;
		}
	}
	{
		Image_t538875265 * L_76 = __this->get_enemyHealthBar_15();
		Image_t538875265 * L_77 = __this->get_enemyHealthBar_15();
		NullCheck(L_77);
		float L_78 = Image_get_fillAmount_m3193252212(L_77, /*hidden argument*/NULL);
		float L_79 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_78-(float)(0.5f))), /*hidden argument*/NULL);
		BattleManager_updateHealth_m74121600(__this, L_76, L_79, /*hidden argument*/NULL);
		goto IL_03f6;
	}

IL_033b:
	{
		Text_t9039225 * L_80 = __this->get_playerNextMove_16();
		NullCheck(L_80);
		String_t* L_81 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_80);
		NullCheck(L_81);
		bool L_82 = String_Equals_m3541721061(L_81, _stringLiteral95758295, /*hidden argument*/NULL);
		if (!L_82)
		{
			goto IL_039b;
		}
	}
	{
		Text_t9039225 * L_83 = __this->get_enemyNextMove_17();
		NullCheck(L_83);
		String_t* L_84 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_83);
		NullCheck(L_84);
		bool L_85 = String_Equals_m3541721061(L_84, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_039b;
		}
	}
	{
		Image_t538875265 * L_86 = __this->get_playerHealthBar_14();
		Image_t538875265 * L_87 = __this->get_playerHealthBar_14();
		NullCheck(L_87);
		float L_88 = Image_get_fillAmount_m3193252212(L_87, /*hidden argument*/NULL);
		float L_89 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_88-(float)(0.1f))), /*hidden argument*/NULL);
		BattleManager_updateHealth_m74121600(__this, L_86, L_89, /*hidden argument*/NULL);
		goto IL_03f6;
	}

IL_039b:
	{
		Text_t9039225 * L_90 = __this->get_playerNextMove_16();
		NullCheck(L_90);
		String_t* L_91 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_90);
		NullCheck(L_91);
		bool L_92 = String_Equals_m3541721061(L_91, _stringLiteral3227604, /*hidden argument*/NULL);
		if (!L_92)
		{
			goto IL_03f6;
		}
	}
	{
		Text_t9039225 * L_93 = __this->get_enemyNextMove_17();
		NullCheck(L_93);
		String_t* L_94 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_93);
		NullCheck(L_94);
		bool L_95 = String_Equals_m3541721061(L_94, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_95)
		{
			goto IL_03f6;
		}
	}
	{
		Image_t538875265 * L_96 = __this->get_playerHealthBar_14();
		Image_t538875265 * L_97 = __this->get_playerHealthBar_14();
		NullCheck(L_97);
		float L_98 = Image_get_fillAmount_m3193252212(L_97, /*hidden argument*/NULL);
		float L_99 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_98-(float)(0.5f))), /*hidden argument*/NULL);
		BattleManager_updateHealth_m74121600(__this, L_96, L_99, /*hidden argument*/NULL);
	}

IL_03f6:
	{
		__this->set_updatedHealth_13((bool)1);
	}

IL_03fd:
	{
		Image_t538875265 * L_100 = __this->get_playerHealthBar_14();
		NullCheck(L_100);
		float L_101 = Image_get_fillAmount_m3193252212(L_100, /*hidden argument*/NULL);
		if ((!(((float)L_101) == ((float)(0.0f)))))
		{
			goto IL_043a;
		}
	}
	{
		Animator_t2776330603 * L_102 = __this->get_unit0Animator_11();
		NullCheck(L_102);
		Animator_SetBool_m2336836203(L_102, _stringLiteral3079268, (bool)1, /*hidden argument*/NULL);
		Text_t9039225 * L_103 = __this->get_playerNextMove_16();
		NullCheck(L_103);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_103, _stringLiteral3079268);
		__this->set_end_21((bool)1);
	}

IL_043a:
	{
		Image_t538875265 * L_104 = __this->get_enemyHealthBar_15();
		NullCheck(L_104);
		float L_105 = Image_get_fillAmount_m3193252212(L_104, /*hidden argument*/NULL);
		if ((!(((float)L_105) == ((float)(0.0f)))))
		{
			goto IL_0477;
		}
	}
	{
		Animator_t2776330603 * L_106 = __this->get_unit1Animator_12();
		NullCheck(L_106);
		Animator_SetBool_m2336836203(L_106, _stringLiteral3079268, (bool)1, /*hidden argument*/NULL);
		Text_t9039225 * L_107 = __this->get_enemyNextMove_17();
		NullCheck(L_107);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_107, _stringLiteral3079268);
		__this->set_end_21((bool)1);
	}

IL_0477:
	{
		bool L_108 = __this->get_end_21();
		if (!L_108)
		{
			goto IL_04f1;
		}
	}
	{
		Text_t9039225 * L_109 = __this->get_playerNextMove_16();
		NullCheck(L_109);
		String_t* L_110 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_109);
		NullCheck(L_110);
		bool L_111 = String_Equals_m3541721061(L_110, _stringLiteral3079268, /*hidden argument*/NULL);
		if (L_111)
		{
			goto IL_04b7;
		}
	}
	{
		BattleManager_setPlayerNext_m139308472(__this, _stringLiteral3227604, /*hidden argument*/NULL);
		Text_t9039225 * L_112 = __this->get_playerNextMove_16();
		NullCheck(L_112);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_112, _stringLiteral3014434722);
	}

IL_04b7:
	{
		Text_t9039225 * L_113 = __this->get_enemyNextMove_17();
		NullCheck(L_113);
		String_t* L_114 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_113);
		NullCheck(L_114);
		bool L_115 = String_Equals_m3541721061(L_114, _stringLiteral3079268, /*hidden argument*/NULL);
		if (L_115)
		{
			goto IL_04ec;
		}
	}
	{
		BattleManager_setEnemyNext_m1763172411(__this, _stringLiteral3227604, /*hidden argument*/NULL);
		Text_t9039225 * L_116 = __this->get_enemyNextMove_17();
		NullCheck(L_116);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_116, _stringLiteral3014434722);
	}

IL_04ec:
	{
		goto IL_04f7;
	}

IL_04f1:
	{
		BattleManager_Init_m3720255038(__this, /*hidden argument*/NULL);
	}

IL_04f7:
	{
		goto IL_0557;
	}

IL_04fc:
	{
		bool L_117 = __this->get_end_21();
		if (!L_117)
		{
			goto IL_0557;
		}
	}
	{
		float L_118 = __this->get_endTime_10();
		if ((!(((float)L_118) > ((float)(0.0f)))))
		{
			goto IL_052e;
		}
	}
	{
		float L_119 = __this->get_endTime_10();
		float L_120 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_endTime_10(((float)((float)L_119-(float)L_120)));
		goto IL_0557;
	}

IL_052e:
	{
		GameObject_t3674682005 * L_121 = __this->get_battleUI_4();
		NullCheck(L_121);
		GameObject_t3674682005 * L_122 = GameObject_get_gameObject_m1966529385(L_121, /*hidden argument*/NULL);
		NullCheck(L_122);
		GameObject_SetActive_m3538205401(L_122, (bool)0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_123 = __this->get_battleCamera_2();
		NullCheck(L_123);
		GameObject_SetActive_m3538205401(L_123, (bool)0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_124 = __this->get_outCamera_3();
		NullCheck(L_124);
		GameObject_SetActive_m3538205401(L_124, (bool)1, /*hidden argument*/NULL);
	}

IL_0557:
	{
		return;
	}
}
// System.Void BattleManager::<Start>m__0()
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3317767;
extern const uint32_t BattleManager_U3CStartU3Em__0_m456883663_MetadataUsageId;
extern "C"  void BattleManager_U3CStartU3Em__0_m456883663 (BattleManager_t2931214261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BattleManager_U3CStartU3Em__0_m456883663_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3317767, /*hidden argument*/NULL);
		ArrayList_t3948406897 * L_0 = __this->get_inputKeySequence_19();
		int32_t L_1 = 1;
		Il2CppObject * L_2 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_2);
		return;
	}
}
// System.Void BattleManager::<Start>m__1()
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral108511772;
extern const uint32_t BattleManager_U3CStartU3Em__1_m456884624_MetadataUsageId;
extern "C"  void BattleManager_U3CStartU3Em__1_m456884624 (BattleManager_t2931214261 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BattleManager_U3CStartU3Em__1_m456884624_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral108511772, /*hidden argument*/NULL);
		ArrayList_t3948406897 * L_0 = __this->get_inputKeySequence_19();
		int32_t L_1 = 2;
		Il2CppObject * L_2 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_2);
		return;
	}
}
// System.Void GameManager::.ctor()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* ArrayList_t3948406897_il2cpp_TypeInfo_var;
extern const uint32_t GameManager__ctor_m4112277136_MetadataUsageId;
extern "C"  void GameManager__ctor_m4112277136 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager__ctor_m4112277136_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t4282066566  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m2926210380(&L_0, (-500.0f), (-500.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_mapPosition_2(L_0);
		__this->set_waitTime_12((5.0f));
		__this->set_endTime_13((5.0f));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_enemyNextMoveStr_21(L_1);
		ArrayList_t3948406897 * L_2 = (ArrayList_t3948406897 *)il2cpp_codegen_object_new(ArrayList_t3948406897_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1878432947(L_2, /*hidden argument*/NULL);
		__this->set_inputKeySequence_22(L_2);
		__this->set_castingTime_25((5.0f));
		__this->set_mapSize_44(((int32_t)12));
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// GameManager GameManager::getInstance()
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_getInstance_m3592271633_MetadataUsageId;
extern "C"  GameManager_t2369589051 * GameManager_getInstance_m3592271633 (Il2CppObject * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_getInstance_m3592271633_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameManager_t2369589051 * L_0 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_instance_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3964590952(NULL /*static, unused*/, L_0, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		GameManager_t2369589051 * L_2 = (GameManager_t2369589051 *)il2cpp_codegen_object_new(GameManager_t2369589051_il2cpp_TypeInfo_var);
		GameManager__ctor_m4112277136(L_2, /*hidden argument*/NULL);
		((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->set_instance_3(L_2);
	}

IL_001a:
	{
		GameManager_t2369589051 * L_3 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_instance_3();
		return L_3;
	}
}
// System.Void GameManager::initBattle()
extern Il2CppClass* UnityAction_t594794173_il2cpp_TypeInfo_var;
extern const MethodInfo* GameManager_U3CinitBattleU3Em__2_m3156031923_MethodInfo_var;
extern const MethodInfo* GameManager_U3CinitBattleU3Em__3_m3156032884_MethodInfo_var;
extern const uint32_t GameManager_initBattle_m2671170108_MetadataUsageId;
extern "C"  void GameManager_initBattle_m2671170108 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_initBattle_m2671170108_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Image_t538875265 * L_0 = __this->get_playerHealthBar_17();
		GameManager_updateHealth_m3013034374(__this, L_0, (1.0f), /*hidden argument*/NULL);
		Button_t3896396478 * L_1 = __this->get_leftButton_8();
		NullCheck(L_1);
		ButtonClickedEvent_t2796375743 * L_2 = Button_get_onClick_m1145127631(L_1, /*hidden argument*/NULL);
		IntPtr_t L_3;
		L_3.set_m_value_0((void*)(void*)GameManager_U3CinitBattleU3Em__2_m3156031923_MethodInfo_var);
		UnityAction_t594794173 * L_4 = (UnityAction_t594794173 *)il2cpp_codegen_object_new(UnityAction_t594794173_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4130179243(L_4, __this, L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		UnityEvent_AddListener_m4099140869(L_2, L_4, /*hidden argument*/NULL);
		Button_t3896396478 * L_5 = __this->get_rightButton_9();
		NullCheck(L_5);
		ButtonClickedEvent_t2796375743 * L_6 = Button_get_onClick_m1145127631(L_5, /*hidden argument*/NULL);
		IntPtr_t L_7;
		L_7.set_m_value_0((void*)(void*)GameManager_U3CinitBattleU3Em__3_m3156032884_MethodInfo_var);
		UnityAction_t594794173 * L_8 = (UnityAction_t594794173 *)il2cpp_codegen_object_new(UnityAction_t594794173_il2cpp_TypeInfo_var);
		UnityAction__ctor_m4130179243(L_8, __this, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		UnityEvent_AddListener_m4099140869(L_6, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::updateHealth(UnityEngine.UI.Image,System.Single)
extern "C"  void GameManager_updateHealth_m3013034374 (GameManager_t2369589051 * __this, Image_t538875265 * ___bar0, float ___newValue1, const MethodInfo* method)
{
	{
		Image_t538875265 * L_0 = ___bar0;
		float L_1 = ___newValue1;
		NullCheck(L_0);
		Image_set_fillAmount_m1583793743(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::resetBattle()
extern "C"  void GameManager_resetBattle_m1511580469 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	{
		GameManager_resetRound_m2873839635(__this, /*hidden argument*/NULL);
		Image_t538875265 * L_0 = __this->get_playerHealthBar_17();
		NullCheck(L_0);
		Image_set_fillAmount_m1583793743(L_0, (1.0f), /*hidden argument*/NULL);
		Image_t538875265 * L_1 = __this->get_enemyHealthBar_18();
		NullCheck(L_1);
		Image_set_fillAmount_m1583793743(L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::resetRound()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3227604;
extern const uint32_t GameManager_resetRound_m2873839635_MetadataUsageId;
extern "C"  void GameManager_resetRound_m2873839635 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_resetRound_m2873839635_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Button_t3896396478 * L_0 = __this->get_leftButton_8();
		NullCheck(L_0);
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m3538205401(L_1, (bool)1, /*hidden argument*/NULL);
		Button_t3896396478 * L_2 = __this->get_rightButton_9();
		NullCheck(L_2);
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m3538205401(L_3, (bool)1, /*hidden argument*/NULL);
		GameManager_setPlayerNext_m3269045438(__this, _stringLiteral3227604, /*hidden argument*/NULL);
		GameManager_setEnemyNext_m2972510325(__this, _stringLiteral3227604, /*hidden argument*/NULL);
		Text_t9039225 * L_4 = __this->get_playerNextMove_19();
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		Text_t9039225 * L_6 = __this->get_enemyNextMove_20();
		String_t* L_7 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		String_t* L_8 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		__this->set_enemyNextMoveStr_21(L_8);
		__this->set_casting_23((bool)0);
		__this->set_inTimeWindow_11((bool)1);
		__this->set_updatedHealth_16((bool)0);
		__this->set_end_24((bool)0);
		Image_t538875265 * L_9 = __this->get_progressBar_10();
		NullCheck(L_9);
		Image_set_fillAmount_m1583793743(L_9, (1.0f), /*hidden argument*/NULL);
		__this->set_endTime_13((5.0f));
		__this->set_castingTime_25((5.0f));
		ArrayList_t3948406897 * L_10 = __this->get_inputKeySequence_22();
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(31 /* System.Void System.Collections.ArrayList::Clear() */, L_10);
		return;
	}
}
// System.Void GameManager::setPlayerNext(System.String)
extern Il2CppCodeGenString* _stringLiteral2887708232;
extern Il2CppCodeGenString* _stringLiteral95758295;
extern Il2CppCodeGenString* _stringLiteral3079268;
extern const uint32_t GameManager_setPlayerNext_m3269045438_MetadataUsageId;
extern "C"  void GameManager_setPlayerNext_m3269045438 (GameManager_t2369589051 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_setPlayerNext_m3269045438_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		bool L_1 = String_Equals_m3541721061(L_0, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		Animator_t2776330603 * L_2 = __this->get_unit0Animator_14();
		NullCheck(L_2);
		Animator_SetBool_m2336836203(L_2, _stringLiteral2887708232, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_3 = __this->get_unit0Animator_14();
		NullCheck(L_3);
		Animator_SetBool_m2336836203(L_3, _stringLiteral95758295, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_4 = __this->get_unit0Animator_14();
		NullCheck(L_4);
		Animator_SetBool_m2336836203(L_4, _stringLiteral3079268, (bool)0, /*hidden argument*/NULL);
		goto IL_00c3;
	}

IL_0048:
	{
		String_t* L_5 = ___name0;
		NullCheck(L_5);
		bool L_6 = String_Equals_m3541721061(L_5, _stringLiteral95758295, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0090;
		}
	}
	{
		Animator_t2776330603 * L_7 = __this->get_unit0Animator_14();
		NullCheck(L_7);
		Animator_SetBool_m2336836203(L_7, _stringLiteral2887708232, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_8 = __this->get_unit0Animator_14();
		NullCheck(L_8);
		Animator_SetBool_m2336836203(L_8, _stringLiteral95758295, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_9 = __this->get_unit0Animator_14();
		NullCheck(L_9);
		Animator_SetBool_m2336836203(L_9, _stringLiteral3079268, (bool)0, /*hidden argument*/NULL);
		goto IL_00c3;
	}

IL_0090:
	{
		Animator_t2776330603 * L_10 = __this->get_unit0Animator_14();
		NullCheck(L_10);
		Animator_SetBool_m2336836203(L_10, _stringLiteral2887708232, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_11 = __this->get_unit0Animator_14();
		NullCheck(L_11);
		Animator_SetBool_m2336836203(L_11, _stringLiteral95758295, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_12 = __this->get_unit0Animator_14();
		NullCheck(L_12);
		Animator_SetBool_m2336836203(L_12, _stringLiteral3079268, (bool)0, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		Text_t9039225 * L_13 = __this->get_playerNextMove_19();
		String_t* L_14 = ___name0;
		NullCheck(L_13);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
		return;
	}
}
// System.Void GameManager::setEnemyNext(System.String)
extern Il2CppCodeGenString* _stringLiteral2887708232;
extern Il2CppCodeGenString* _stringLiteral95758295;
extern Il2CppCodeGenString* _stringLiteral3079268;
extern const uint32_t GameManager_setEnemyNext_m2972510325_MetadataUsageId;
extern "C"  void GameManager_setEnemyNext_m2972510325 (GameManager_t2369589051 * __this, String_t* ___name0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_setEnemyNext_m2972510325_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___name0;
		NullCheck(L_0);
		bool L_1 = String_Equals_m3541721061(L_0, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0048;
		}
	}
	{
		Animator_t2776330603 * L_2 = __this->get_unit1Animator_15();
		NullCheck(L_2);
		Animator_SetBool_m2336836203(L_2, _stringLiteral2887708232, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_3 = __this->get_unit1Animator_15();
		NullCheck(L_3);
		Animator_SetBool_m2336836203(L_3, _stringLiteral95758295, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_4 = __this->get_unit1Animator_15();
		NullCheck(L_4);
		Animator_SetBool_m2336836203(L_4, _stringLiteral3079268, (bool)0, /*hidden argument*/NULL);
		goto IL_00c3;
	}

IL_0048:
	{
		String_t* L_5 = ___name0;
		NullCheck(L_5);
		bool L_6 = String_Equals_m3541721061(L_5, _stringLiteral95758295, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0090;
		}
	}
	{
		Animator_t2776330603 * L_7 = __this->get_unit1Animator_15();
		NullCheck(L_7);
		Animator_SetBool_m2336836203(L_7, _stringLiteral2887708232, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_8 = __this->get_unit1Animator_15();
		NullCheck(L_8);
		Animator_SetBool_m2336836203(L_8, _stringLiteral95758295, (bool)1, /*hidden argument*/NULL);
		Animator_t2776330603 * L_9 = __this->get_unit1Animator_15();
		NullCheck(L_9);
		Animator_SetBool_m2336836203(L_9, _stringLiteral3079268, (bool)0, /*hidden argument*/NULL);
		goto IL_00c3;
	}

IL_0090:
	{
		Animator_t2776330603 * L_10 = __this->get_unit1Animator_15();
		NullCheck(L_10);
		Animator_SetBool_m2336836203(L_10, _stringLiteral2887708232, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_11 = __this->get_unit1Animator_15();
		NullCheck(L_11);
		Animator_SetBool_m2336836203(L_11, _stringLiteral95758295, (bool)0, /*hidden argument*/NULL);
		Animator_t2776330603 * L_12 = __this->get_unit1Animator_15();
		NullCheck(L_12);
		Animator_SetBool_m2336836203(L_12, _stringLiteral3079268, (bool)0, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		return;
	}
}
// System.Void GameManager::setCurrentPlayer(Player)
extern "C"  void GameManager_setCurrentPlayer_m4132026731 (GameManager_t2369589051 * __this, Player_t2393081601 * ___p0, const MethodInfo* method)
{
	{
		Player_t2393081601 * L_0 = ___p0;
		__this->set_currentPlayer_43(L_0);
		return;
	}
}
// Player GameManager::getCurrentPlayer()
extern "C"  Player_t2393081601 * GameManager_getCurrentPlayer_m3573864060 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	{
		Player_t2393081601 * L_0 = __this->get_currentPlayer_43();
		return L_0;
	}
}
// System.Int32 GameManager::mDistance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  int32_t GameManager_mDistance_m3135828174 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___v10, Vector3_t4282066566  ___v21, const MethodInfo* method)
{
	{
		float L_0 = Vector3_get_Item_m108333500((&___v10), 0, /*hidden argument*/NULL);
		float L_1 = Vector3_get_Item_m108333500((&___v21), 0, /*hidden argument*/NULL);
		float L_2 = fabsf(((float)((float)L_0-(float)L_1)));
		float L_3 = Vector3_get_Item_m108333500((&___v10), 1, /*hidden argument*/NULL);
		float L_4 = Vector3_get_Item_m108333500((&___v21), 1, /*hidden argument*/NULL);
		float L_5 = fabsf(((float)((float)L_3-(float)L_4)));
		double L_6 = bankers_round((((double)((double)((float)((float)L_2+(float)L_5))))));
		return (((int32_t)((int32_t)L_6)));
	}
}
// System.Void GameManager::moveCurrentPlayer(Tile)
extern "C"  void GameManager_moveCurrentPlayer_m2925288297 (GameManager_t2369589051 * __this, Tile_t2606798 * ___destTile0, const MethodInfo* method)
{
	Player_t2393081601 * V_0 = NULL;
	{
		Player_t2393081601 * L_0 = __this->get_currentPlayer_43();
		V_0 = L_0;
		Player_t2393081601 * L_1 = V_0;
		NullCheck(L_1);
		Vector3_t4282066566  L_2 = L_1->get_moveDestination_3();
		Tile_t2606798 * L_3 = ___destTile0;
		NullCheck(L_3);
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t4282066566  L_5 = Transform_get_position_m2211398607(L_4, /*hidden argument*/NULL);
		int32_t L_6 = GameManager_mDistance_m3135828174(NULL /*static, unused*/, L_2, L_5, /*hidden argument*/NULL);
		if ((((int32_t)L_6) > ((int32_t)3)))
		{
			goto IL_004d;
		}
	}
	{
		Player_t2393081601 * L_7 = V_0;
		Tile_t2606798 * L_8 = ___destTile0;
		NullCheck(L_8);
		Transform_t1659122786 * L_9 = Component_get_transform_m4257140443(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t4282066566  L_10 = Transform_get_position_m2211398607(L_9, /*hidden argument*/NULL);
		Vector3_t4282066566  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m2926210380(&L_11, (0.0f), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		L_7->set_moveDestination_3(L_12);
	}

IL_004d:
	{
		return;
	}
}
// System.Void GameManager::generateMap()
extern Il2CppClass* List_1_t2738977902_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t1370792350_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppClass* Vector3_t4282066566_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m1100740817_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m3276920825_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisTile_t2606798_m2044442191_MethodInfo_var;
extern const MethodInfo* List_1_Add_m2971281641_MethodInfo_var;
extern const MethodInfo* List_1_Add_m795101633_MethodInfo_var;
extern const uint32_t GameManager_generateMap_m1863251957_MetadataUsageId;
extern "C"  void GameManager_generateMap_m1863251957 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_generateMap_m1863251957_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	List_1_t1370792350 * V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t3674682005 * V_3 = NULL;
	Tile_t2606798 * V_4 = NULL;
	Vector3_t4282066566  V_5;
	memset(&V_5, 0, sizeof(V_5));
	{
		List_1_t2738977902 * L_0 = (List_1_t2738977902 *)il2cpp_codegen_object_new(List_1_t2738977902_il2cpp_TypeInfo_var);
		List_1__ctor_m1100740817(L_0, /*hidden argument*/List_1__ctor_m1100740817_MethodInfo_var);
		__this->set_map_40(L_0);
		V_0 = 0;
		goto IL_00b7;
	}

IL_0012:
	{
		List_1_t1370792350 * L_1 = (List_1_t1370792350 *)il2cpp_codegen_object_new(List_1_t1370792350_il2cpp_TypeInfo_var);
		List_1__ctor_m3276920825(L_1, /*hidden argument*/List_1__ctor_m3276920825_MethodInfo_var);
		V_1 = L_1;
		V_2 = 0;
		goto IL_009b;
	}

IL_001f:
	{
		GameObject_t3674682005 * L_2 = __this->get_TilePrefab_37();
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_mapSize_44();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_5 = floorf((((float)((float)((int32_t)((int32_t)L_4/(int32_t)2))))));
		int32_t L_6 = V_2;
		int32_t L_7 = __this->get_mapSize_44();
		float L_8 = floorf((((float)((float)((int32_t)((int32_t)L_7/(int32_t)2))))));
		Vector3_t4282066566  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Vector3__ctor_m2926210380(&L_9, ((float)((float)(((float)((float)L_3)))-(float)L_5)), ((float)((float)(((float)((float)((-L_6)))))+(float)L_8)), (0.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = __this->get_mapPosition_2();
		Vector3_t4282066566  L_11 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Initobj (Vector3_t4282066566_il2cpp_TypeInfo_var, (&V_5));
		Vector3_t4282066566  L_12 = V_5;
		Quaternion_t1553702882  L_13 = Quaternion_Euler_m1940911101(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_14 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_2, L_11, L_13, /*hidden argument*/NULL);
		V_3 = ((GameObject_t3674682005 *)CastclassSealed(L_14, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_15 = V_3;
		NullCheck(L_15);
		Tile_t2606798 * L_16 = GameObject_GetComponent_TisTile_t2606798_m2044442191(L_15, /*hidden argument*/GameObject_GetComponent_TisTile_t2606798_m2044442191_MethodInfo_var);
		V_4 = L_16;
		Tile_t2606798 * L_17 = V_4;
		int32_t L_18 = V_0;
		int32_t L_19 = V_2;
		Vector2_t4282066565  L_20;
		memset(&L_20, 0, sizeof(L_20));
		Vector2__ctor_m1517109030(&L_20, (((float)((float)L_18))), (((float)((float)L_19))), /*hidden argument*/NULL);
		NullCheck(L_17);
		L_17->set_gridPosition_2(L_20);
		List_1_t1370792350 * L_21 = V_1;
		Tile_t2606798 * L_22 = V_4;
		NullCheck(L_21);
		List_1_Add_m2971281641(L_21, L_22, /*hidden argument*/List_1_Add_m2971281641_MethodInfo_var);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)((int32_t)L_23+(int32_t)1));
	}

IL_009b:
	{
		int32_t L_24 = V_2;
		int32_t L_25 = __this->get_mapSize_44();
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_001f;
		}
	}
	{
		List_1_t2738977902 * L_26 = __this->get_map_40();
		List_1_t1370792350 * L_27 = V_1;
		NullCheck(L_26);
		List_1_Add_m795101633(L_26, L_27, /*hidden argument*/List_1_Add_m795101633_MethodInfo_var);
		int32_t L_28 = V_0;
		V_0 = ((int32_t)((int32_t)L_28+(int32_t)1));
	}

IL_00b7:
	{
		int32_t L_29 = V_0;
		int32_t L_30 = __this->get_mapSize_44();
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0012;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::generatePlayer()
extern Il2CppClass* List_1_t565044604_il2cpp_TypeInfo_var;
extern Il2CppClass* List_1_t1443081209_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppClass* Vector3_t4282066566_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m669501911_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m310716820_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisUserPlayer_t3491826348_m1727000369_MethodInfo_var;
extern const MethodInfo* List_1_Add_m363862727_MethodInfo_var;
extern const MethodInfo* List_1_get_Item_m540713036_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisAIPlayer_t74895657_m4028861204_MethodInfo_var;
extern const MethodInfo* List_1_Add_m5077636_MethodInfo_var;
extern const uint32_t GameManager_generatePlayer_m1735053322_MetadataUsageId;
extern "C"  void GameManager_generatePlayer_m1735053322 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_generatePlayer_m1735053322_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	AIPlayer_t74895657 * V_0 = NULL;
	int32_t V_1 = 0;
	UserPlayer_t3491826348 * V_2 = NULL;
	GameObject_t3674682005 * V_3 = NULL;
	int32_t V_4 = 0;
	GameObject_t3674682005 * V_5 = NULL;
	Vector3_t4282066566  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector3_t4282066566  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		List_1_t565044604 * L_0 = (List_1_t565044604 *)il2cpp_codegen_object_new(List_1_t565044604_il2cpp_TypeInfo_var);
		List_1__ctor_m669501911(L_0, /*hidden argument*/List_1__ctor_m669501911_MethodInfo_var);
		__this->set_userPlayers_41(L_0);
		List_1_t1443081209 * L_1 = (List_1_t1443081209 *)il2cpp_codegen_object_new(List_1_t1443081209_il2cpp_TypeInfo_var);
		List_1__ctor_m310716820(L_1, /*hidden argument*/List_1__ctor_m310716820_MethodInfo_var);
		__this->set_aiPlayers_42(L_1);
		V_1 = 0;
		goto IL_0095;
	}

IL_001d:
	{
		GameObject_t3674682005 * L_2 = __this->get_UserPlayerPrefab_38();
		int32_t L_3 = V_1;
		int32_t L_4 = __this->get_mapSize_44();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_5 = floorf((((float)((float)((int32_t)((int32_t)L_4/(int32_t)2))))));
		int32_t L_6 = __this->get_mapSize_44();
		float L_7 = floorf((((float)((float)((int32_t)((int32_t)L_6/(int32_t)2))))));
		Vector3_t4282066566  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector3__ctor_m2926210380(&L_8, ((float)((float)(((float)((float)L_3)))-(float)L_5)), ((float)((float)(0.0f)+(float)L_7)), (-1.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_9 = __this->get_mapPosition_2();
		Vector3_t4282066566  L_10 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Initobj (Vector3_t4282066566_il2cpp_TypeInfo_var, (&V_6));
		Vector3_t4282066566  L_11 = V_6;
		Quaternion_t1553702882  L_12 = Quaternion_Euler_m1940911101(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_13 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_2, L_10, L_12, /*hidden argument*/NULL);
		V_3 = ((GameObject_t3674682005 *)CastclassSealed(L_13, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_14 = V_3;
		NullCheck(L_14);
		UserPlayer_t3491826348 * L_15 = GameObject_GetComponent_TisUserPlayer_t3491826348_m1727000369(L_14, /*hidden argument*/GameObject_GetComponent_TisUserPlayer_t3491826348_m1727000369_MethodInfo_var);
		V_2 = L_15;
		UserPlayer_t3491826348 * L_16 = V_2;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Player_setPlayerIndex_m2053814442(L_16, L_17, /*hidden argument*/NULL);
		List_1_t565044604 * L_18 = __this->get_userPlayers_41();
		UserPlayer_t3491826348 * L_19 = V_2;
		NullCheck(L_18);
		List_1_Add_m363862727(L_18, L_19, /*hidden argument*/List_1_Add_m363862727_MethodInfo_var);
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_0095:
	{
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) < ((int32_t)3)))
		{
			goto IL_001d;
		}
	}
	{
		List_1_t565044604 * L_22 = __this->get_userPlayers_41();
		NullCheck(L_22);
		UserPlayer_t3491826348 * L_23 = List_1_get_Item_m540713036(L_22, 0, /*hidden argument*/List_1_get_Item_m540713036_MethodInfo_var);
		__this->set_currentPlayer_43(L_23);
		V_4 = 0;
		goto IL_0116;
	}

IL_00b6:
	{
		GameObject_t3674682005 * L_24 = __this->get_AIPlayerPrefab_39();
		int32_t L_25 = V_4;
		Vector3_t4282066566  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector3__ctor_m2926210380(&L_26, (((float)((float)L_25))), (0.0f), (-1.0f), /*hidden argument*/NULL);
		Vector3_t4282066566  L_27 = __this->get_mapPosition_2();
		Vector3_t4282066566  L_28 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		Initobj (Vector3_t4282066566_il2cpp_TypeInfo_var, (&V_7));
		Vector3_t4282066566  L_29 = V_7;
		Quaternion_t1553702882  L_30 = Quaternion_Euler_m1940911101(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_31 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_24, L_28, L_30, /*hidden argument*/NULL);
		V_5 = ((GameObject_t3674682005 *)CastclassSealed(L_31, GameObject_t3674682005_il2cpp_TypeInfo_var));
		GameObject_t3674682005 * L_32 = V_5;
		NullCheck(L_32);
		AIPlayer_t74895657 * L_33 = GameObject_GetComponent_TisAIPlayer_t74895657_m4028861204(L_32, /*hidden argument*/GameObject_GetComponent_TisAIPlayer_t74895657_m4028861204_MethodInfo_var);
		V_0 = L_33;
		AIPlayer_t74895657 * L_34 = V_0;
		int32_t L_35 = V_4;
		NullCheck(L_34);
		Player_setPlayerIndex_m2053814442(L_34, L_35, /*hidden argument*/NULL);
		List_1_t1443081209 * L_36 = __this->get_aiPlayers_42();
		AIPlayer_t74895657 * L_37 = V_0;
		NullCheck(L_36);
		List_1_Add_m5077636(L_36, L_37, /*hidden argument*/List_1_Add_m5077636_MethodInfo_var);
		int32_t L_38 = V_4;
		V_4 = ((int32_t)((int32_t)L_38+(int32_t)1));
	}

IL_0116:
	{
		int32_t L_39 = V_4;
		if ((((int32_t)L_39) < ((int32_t)3)))
		{
			goto IL_00b6;
		}
	}
	{
		return;
	}
}
// System.Void GameManager::enterBattleScene(Player,Player)
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1252998260;
extern const uint32_t GameManager_enterBattleScene_m555084630_MetadataUsageId;
extern "C"  void GameManager_enterBattleScene_m555084630 (GameManager_t2369589051 * __this, Player_t2393081601 * ___self0, Player_t2393081601 * ___enemy1, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_enterBattleScene_m555084630_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral1252998260, /*hidden argument*/NULL);
		__this->set_battle_26((bool)1);
		Player_t2393081601 * L_0 = ___self0;
		NullCheck(L_0);
		GameObject_t3674682005 * L_1 = Component_get_gameObject_m1170635899(L_0, /*hidden argument*/NULL);
		__this->set_activePlayer_6(L_1);
		Player_t2393081601 * L_2 = ___enemy1;
		NullCheck(L_2);
		GameObject_t3674682005 * L_3 = Component_get_gameObject_m1170635899(L_2, /*hidden argument*/NULL);
		__this->set_activeEnemy_7(L_3);
		return;
	}
}
// System.Void GameManager::Awake()
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern const uint32_t GameManager_Awake_m54915059_MetadataUsageId;
extern "C"  void GameManager_Awake_m54915059 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_m54915059_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->set_instance_3(__this);
		GameManager_initBattle_m2671170108(__this, /*hidden argument*/NULL);
		GameManager_generateMap_m1863251957(__this, /*hidden argument*/NULL);
		GameManager_generatePlayer_m1735053322(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameManager::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* IEnumerator_t3464575207_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* IDisposable_t1423340799_il2cpp_TypeInfo_var;
extern Il2CppClass* Enumerator_t584717374_il2cpp_TypeInfo_var;
extern Il2CppClass* Enumerator_t1462753979_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m1746956196_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m2159445840_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2941178764_MethodInfo_var;
extern const MethodInfo* List_1_GetEnumerator_m3996326817_MethodInfo_var;
extern const MethodInfo* Enumerator_get_Current_m733699085_MethodInfo_var;
extern const MethodInfo* Enumerator_MoveNext_m2105223535_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2887708232;
extern Il2CppCodeGenString* _stringLiteral95758295;
extern Il2CppCodeGenString* _stringLiteral3227604;
extern Il2CppCodeGenString* _stringLiteral1508448;
extern Il2CppCodeGenString* _stringLiteral1539168;
extern Il2CppCodeGenString* _stringLiteral3079268;
extern Il2CppCodeGenString* _stringLiteral3014434722;
extern const uint32_t GameManager_Update_m358434429_MetadataUsageId;
extern "C"  void GameManager_Update_m358434429 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_m358434429_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppObject * V_3 = NULL;
	Player_t2393081601 * V_4 = NULL;
	Enumerator_t584717374  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Player_t2393081601 * V_6 = NULL;
	Enumerator_t1462753979  V_7;
	memset(&V_7, 0, sizeof(V_7));
	Il2CppObject * V_8 = NULL;
	Exception_t3991598821 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t3991598821 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = __this->get_battle_26();
		if (!L_0)
		{
			goto IL_0595;
		}
	}
	{
		GameObject_t3674682005 * L_1 = __this->get_battleUI_29();
		NullCheck(L_1);
		GameObject_t3674682005 * L_2 = GameObject_get_gameObject_m1966529385(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_SetActive_m3538205401(L_2, (bool)1, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_3 = __this->get_battleCamera_27();
		NullCheck(L_3);
		GameObject_SetActive_m3538205401(L_3, (bool)1, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_4 = __this->get_outCamera_28();
		NullCheck(L_4);
		GameObject_SetActive_m3538205401(L_4, (bool)0, /*hidden argument*/NULL);
		bool L_5 = __this->get_inTimeWindow_11();
		if (!L_5)
		{
			goto IL_00ec;
		}
	}
	{
		String_t* L_6 = __this->get_enemyNextMoveStr_21();
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m2979997331(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_00a2;
		}
	}
	{
		int32_t L_8 = Random_Range_m75452833(NULL /*static, unused*/, 1, ((int32_t)10), /*hidden argument*/NULL);
		V_0 = L_8;
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)5)))
		{
			goto IL_006f;
		}
	}
	{
		__this->set_enemyNextMoveStr_21(_stringLiteral2887708232);
		goto IL_0091;
	}

IL_006f:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) >= ((int32_t)7)))
		{
			goto IL_0086;
		}
	}
	{
		__this->set_enemyNextMoveStr_21(_stringLiteral95758295);
		goto IL_0091;
	}

IL_0086:
	{
		__this->set_enemyNextMoveStr_21(_stringLiteral3227604);
	}

IL_0091:
	{
		Text_t9039225 * L_11 = __this->get_enemyNextMove_20();
		String_t* L_12 = __this->get_enemyNextMoveStr_21();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_12);
	}

IL_00a2:
	{
		Image_t538875265 * L_13 = __this->get_progressBar_10();
		NullCheck(L_13);
		float L_14 = Image_get_fillAmount_m3193252212(L_13, /*hidden argument*/NULL);
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_00e0;
		}
	}
	{
		Image_t538875265 * L_15 = __this->get_progressBar_10();
		Image_t538875265 * L_16 = L_15;
		NullCheck(L_16);
		float L_17 = Image_get_fillAmount_m3193252212(L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_waitTime_12();
		float L_19 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_16);
		Image_set_fillAmount_m1583793743(L_16, ((float)((float)L_17-(float)((float)((float)((float)((float)(1.0f)/(float)L_18))*(float)L_19)))), /*hidden argument*/NULL);
		goto IL_00e7;
	}

IL_00e0:
	{
		__this->set_inTimeWindow_11((bool)0);
	}

IL_00e7:
	{
		goto IL_0590;
	}

IL_00ec:
	{
		bool L_20 = __this->get_casting_23();
		if (L_20)
		{
			goto IL_01df;
		}
	}
	{
		Button_t3896396478 * L_21 = __this->get_leftButton_8();
		NullCheck(L_21);
		GameObject_t3674682005 * L_22 = Component_get_gameObject_m1170635899(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_SetActive_m3538205401(L_22, (bool)0, /*hidden argument*/NULL);
		Button_t3896396478 * L_23 = __this->get_rightButton_9();
		NullCheck(L_23);
		GameObject_t3674682005 * L_24 = Component_get_gameObject_m1170635899(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		GameObject_SetActive_m3538205401(L_24, (bool)0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->get_Empty_2();
		V_1 = L_25;
		ArrayList_t3948406897 * L_26 = __this->get_inputKeySequence_22();
		NullCheck(L_26);
		Il2CppObject * L_27 = VirtFuncInvoker0< Il2CppObject * >::Invoke(43 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_26);
		V_3 = L_27;
	}

IL_012b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0149;
		}

IL_0130:
		{
			Il2CppObject * L_28 = V_3;
			NullCheck(L_28);
			Il2CppObject * L_29 = InterfaceFuncInvoker0< Il2CppObject * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_28);
			V_2 = ((*(int32_t*)((int32_t*)UnBox (L_29, Int32_t1153838500_il2cpp_TypeInfo_var))));
			String_t* L_30 = V_1;
			int32_t L_31 = V_2;
			int32_t L_32 = L_31;
			Il2CppObject * L_33 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_32);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			String_t* L_34 = String_Concat_m389863537(NULL /*static, unused*/, L_30, L_33, /*hidden argument*/NULL);
			V_1 = L_34;
		}

IL_0149:
		{
			Il2CppObject * L_35 = V_3;
			NullCheck(L_35);
			bool L_36 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t3464575207_il2cpp_TypeInfo_var, L_35);
			if (L_36)
			{
				goto IL_0130;
			}
		}

IL_0154:
		{
			IL2CPP_LEAVE(0x16E, FINALLY_0159);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0159;
	}

FINALLY_0159:
	{ // begin finally (depth: 1)
		{
			Il2CppObject * L_37 = V_3;
			V_8 = ((Il2CppObject *)IsInst(L_37, IDisposable_t1423340799_il2cpp_TypeInfo_var));
			Il2CppObject * L_38 = V_8;
			if (L_38)
			{
				goto IL_0166;
			}
		}

IL_0165:
		{
			IL2CPP_END_FINALLY(345)
		}

IL_0166:
		{
			Il2CppObject * L_39 = V_8;
			NullCheck(L_39);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, L_39);
			IL2CPP_END_FINALLY(345)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(345)
	{
		IL2CPP_JUMP_TBL(0x16E, IL_016e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_016e:
	{
		String_t* L_40 = V_1;
		NullCheck(L_40);
		bool L_41 = String_Equals_m3541721061(L_40, _stringLiteral1508448, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_0195;
		}
	}
	{
		__this->set_casting_23((bool)1);
		GameManager_setPlayerNext_m3269045438(__this, _stringLiteral2887708232, /*hidden argument*/NULL);
		goto IL_01ce;
	}

IL_0195:
	{
		String_t* L_42 = V_1;
		NullCheck(L_42);
		bool L_43 = String_Equals_m3541721061(L_42, _stringLiteral1539168, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_01bc;
		}
	}
	{
		__this->set_casting_23((bool)1);
		GameManager_setPlayerNext_m3269045438(__this, _stringLiteral95758295, /*hidden argument*/NULL);
		goto IL_01ce;
	}

IL_01bc:
	{
		__this->set_casting_23((bool)1);
		GameManager_setPlayerNext_m3269045438(__this, _stringLiteral3227604, /*hidden argument*/NULL);
	}

IL_01ce:
	{
		String_t* L_44 = __this->get_enemyNextMoveStr_21();
		GameManager_setEnemyNext_m2972510325(__this, L_44, /*hidden argument*/NULL);
		goto IL_0590;
	}

IL_01df:
	{
		bool L_45 = __this->get_end_24();
		if (L_45)
		{
			goto IL_0551;
		}
	}
	{
		bool L_46 = __this->get_casting_23();
		if (!L_46)
		{
			goto IL_0551;
		}
	}
	{
		float L_47 = __this->get_castingTime_25();
		if ((!(((float)L_47) > ((float)(0.0f)))))
		{
			goto IL_021c;
		}
	}
	{
		float L_48 = __this->get_castingTime_25();
		float L_49 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_castingTime_25(((float)((float)L_48-(float)L_49)));
		goto IL_054c;
	}

IL_021c:
	{
		bool L_50 = __this->get_updatedHealth_16();
		if (L_50)
		{
			goto IL_0430;
		}
	}
	{
		Text_t9039225 * L_51 = __this->get_playerNextMove_19();
		NullCheck(L_51);
		String_t* L_52 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_51);
		NullCheck(L_52);
		bool L_53 = String_Equals_m3541721061(L_52, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_02ae;
		}
	}
	{
		Text_t9039225 * L_54 = __this->get_enemyNextMove_20();
		NullCheck(L_54);
		String_t* L_55 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_54);
		NullCheck(L_55);
		bool L_56 = String_Equals_m3541721061(L_55, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_02ae;
		}
	}
	{
		Image_t538875265 * L_57 = __this->get_playerHealthBar_17();
		Image_t538875265 * L_58 = __this->get_playerHealthBar_17();
		NullCheck(L_58);
		float L_59 = Image_get_fillAmount_m3193252212(L_58, /*hidden argument*/NULL);
		float L_60 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_59-(float)(0.5f))), /*hidden argument*/NULL);
		GameManager_updateHealth_m3013034374(__this, L_57, L_60, /*hidden argument*/NULL);
		Image_t538875265 * L_61 = __this->get_enemyHealthBar_18();
		Image_t538875265 * L_62 = __this->get_enemyHealthBar_18();
		NullCheck(L_62);
		float L_63 = Image_get_fillAmount_m3193252212(L_62, /*hidden argument*/NULL);
		float L_64 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_63-(float)(0.5f))), /*hidden argument*/NULL);
		GameManager_updateHealth_m3013034374(__this, L_61, L_64, /*hidden argument*/NULL);
		goto IL_0429;
	}

IL_02ae:
	{
		Text_t9039225 * L_65 = __this->get_playerNextMove_19();
		NullCheck(L_65);
		String_t* L_66 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_65);
		NullCheck(L_66);
		bool L_67 = String_Equals_m3541721061(L_66, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_67)
		{
			goto IL_030e;
		}
	}
	{
		Text_t9039225 * L_68 = __this->get_enemyNextMove_20();
		NullCheck(L_68);
		String_t* L_69 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_68);
		NullCheck(L_69);
		bool L_70 = String_Equals_m3541721061(L_69, _stringLiteral95758295, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_030e;
		}
	}
	{
		Image_t538875265 * L_71 = __this->get_enemyHealthBar_18();
		Image_t538875265 * L_72 = __this->get_enemyHealthBar_18();
		NullCheck(L_72);
		float L_73 = Image_get_fillAmount_m3193252212(L_72, /*hidden argument*/NULL);
		float L_74 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_73-(float)(0.25f))), /*hidden argument*/NULL);
		GameManager_updateHealth_m3013034374(__this, L_71, L_74, /*hidden argument*/NULL);
		goto IL_0429;
	}

IL_030e:
	{
		Text_t9039225 * L_75 = __this->get_playerNextMove_19();
		NullCheck(L_75);
		String_t* L_76 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_75);
		NullCheck(L_76);
		bool L_77 = String_Equals_m3541721061(L_76, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_77)
		{
			goto IL_036e;
		}
	}
	{
		Text_t9039225 * L_78 = __this->get_enemyNextMove_20();
		NullCheck(L_78);
		String_t* L_79 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_78);
		NullCheck(L_79);
		bool L_80 = String_Equals_m3541721061(L_79, _stringLiteral3227604, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_036e;
		}
	}
	{
		Image_t538875265 * L_81 = __this->get_enemyHealthBar_18();
		Image_t538875265 * L_82 = __this->get_enemyHealthBar_18();
		NullCheck(L_82);
		float L_83 = Image_get_fillAmount_m3193252212(L_82, /*hidden argument*/NULL);
		float L_84 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_83-(float)(0.5f))), /*hidden argument*/NULL);
		GameManager_updateHealth_m3013034374(__this, L_81, L_84, /*hidden argument*/NULL);
		goto IL_0429;
	}

IL_036e:
	{
		Text_t9039225 * L_85 = __this->get_playerNextMove_19();
		NullCheck(L_85);
		String_t* L_86 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_85);
		NullCheck(L_86);
		bool L_87 = String_Equals_m3541721061(L_86, _stringLiteral95758295, /*hidden argument*/NULL);
		if (!L_87)
		{
			goto IL_03ce;
		}
	}
	{
		Text_t9039225 * L_88 = __this->get_enemyNextMove_20();
		NullCheck(L_88);
		String_t* L_89 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_88);
		NullCheck(L_89);
		bool L_90 = String_Equals_m3541721061(L_89, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_90)
		{
			goto IL_03ce;
		}
	}
	{
		Image_t538875265 * L_91 = __this->get_playerHealthBar_17();
		Image_t538875265 * L_92 = __this->get_playerHealthBar_17();
		NullCheck(L_92);
		float L_93 = Image_get_fillAmount_m3193252212(L_92, /*hidden argument*/NULL);
		float L_94 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_93-(float)(0.25f))), /*hidden argument*/NULL);
		GameManager_updateHealth_m3013034374(__this, L_91, L_94, /*hidden argument*/NULL);
		goto IL_0429;
	}

IL_03ce:
	{
		Text_t9039225 * L_95 = __this->get_playerNextMove_19();
		NullCheck(L_95);
		String_t* L_96 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_95);
		NullCheck(L_96);
		bool L_97 = String_Equals_m3541721061(L_96, _stringLiteral3227604, /*hidden argument*/NULL);
		if (!L_97)
		{
			goto IL_0429;
		}
	}
	{
		Text_t9039225 * L_98 = __this->get_enemyNextMove_20();
		NullCheck(L_98);
		String_t* L_99 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_98);
		NullCheck(L_99);
		bool L_100 = String_Equals_m3541721061(L_99, _stringLiteral2887708232, /*hidden argument*/NULL);
		if (!L_100)
		{
			goto IL_0429;
		}
	}
	{
		Image_t538875265 * L_101 = __this->get_playerHealthBar_17();
		Image_t538875265 * L_102 = __this->get_playerHealthBar_17();
		NullCheck(L_102);
		float L_103 = Image_get_fillAmount_m3193252212(L_102, /*hidden argument*/NULL);
		float L_104 = Math_Max_m172798965(NULL /*static, unused*/, (0.0f), ((float)((float)L_103-(float)(0.5f))), /*hidden argument*/NULL);
		GameManager_updateHealth_m3013034374(__this, L_101, L_104, /*hidden argument*/NULL);
	}

IL_0429:
	{
		__this->set_updatedHealth_16((bool)1);
	}

IL_0430:
	{
		Image_t538875265 * L_105 = __this->get_playerHealthBar_17();
		NullCheck(L_105);
		float L_106 = Image_get_fillAmount_m3193252212(L_105, /*hidden argument*/NULL);
		if ((!(((float)L_106) == ((float)(0.0f)))))
		{
			goto IL_046d;
		}
	}
	{
		Animator_t2776330603 * L_107 = __this->get_unit0Animator_14();
		NullCheck(L_107);
		Animator_SetBool_m2336836203(L_107, _stringLiteral3079268, (bool)1, /*hidden argument*/NULL);
		Text_t9039225 * L_108 = __this->get_playerNextMove_19();
		NullCheck(L_108);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_108, _stringLiteral3079268);
		__this->set_end_24((bool)1);
	}

IL_046d:
	{
		Image_t538875265 * L_109 = __this->get_enemyHealthBar_18();
		NullCheck(L_109);
		float L_110 = Image_get_fillAmount_m3193252212(L_109, /*hidden argument*/NULL);
		if ((!(((float)L_110) == ((float)(0.0f)))))
		{
			goto IL_04aa;
		}
	}
	{
		Animator_t2776330603 * L_111 = __this->get_unit1Animator_15();
		NullCheck(L_111);
		Animator_SetBool_m2336836203(L_111, _stringLiteral3079268, (bool)1, /*hidden argument*/NULL);
		Text_t9039225 * L_112 = __this->get_enemyNextMove_20();
		NullCheck(L_112);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_112, _stringLiteral3079268);
		__this->set_end_24((bool)1);
	}

IL_04aa:
	{
		bool L_113 = __this->get_end_24();
		if (!L_113)
		{
			goto IL_0546;
		}
	}
	{
		Text_t9039225 * L_114 = __this->get_playerNextMove_19();
		NullCheck(L_114);
		String_t* L_115 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_114);
		NullCheck(L_115);
		bool L_116 = String_Equals_m3541721061(L_115, _stringLiteral3079268, /*hidden argument*/NULL);
		if (L_116)
		{
			goto IL_04ef;
		}
	}
	{
		GameManager_setPlayerNext_m3269045438(__this, _stringLiteral3227604, /*hidden argument*/NULL);
		Text_t9039225 * L_117 = __this->get_playerNextMove_19();
		NullCheck(L_117);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_117, _stringLiteral3014434722);
		goto IL_04fb;
	}

IL_04ef:
	{
		GameObject_t3674682005 * L_118 = __this->get_activePlayer_6();
		NullCheck(L_118);
		GameObject_SetActive_m3538205401(L_118, (bool)0, /*hidden argument*/NULL);
	}

IL_04fb:
	{
		Text_t9039225 * L_119 = __this->get_enemyNextMove_20();
		NullCheck(L_119);
		String_t* L_120 = VirtFuncInvoker0< String_t* >::Invoke(73 /* System.String UnityEngine.UI.Text::get_text() */, L_119);
		NullCheck(L_120);
		bool L_121 = String_Equals_m3541721061(L_120, _stringLiteral3079268, /*hidden argument*/NULL);
		if (L_121)
		{
			goto IL_0535;
		}
	}
	{
		GameManager_setEnemyNext_m2972510325(__this, _stringLiteral3227604, /*hidden argument*/NULL);
		Text_t9039225 * L_122 = __this->get_enemyNextMove_20();
		NullCheck(L_122);
		VirtActionInvoker1< String_t* >::Invoke(74 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_122, _stringLiteral3014434722);
		goto IL_0541;
	}

IL_0535:
	{
		GameObject_t3674682005 * L_123 = __this->get_activeEnemy_7();
		NullCheck(L_123);
		GameObject_SetActive_m3538205401(L_123, (bool)0, /*hidden argument*/NULL);
	}

IL_0541:
	{
		goto IL_054c;
	}

IL_0546:
	{
		GameManager_resetRound_m2873839635(__this, /*hidden argument*/NULL);
	}

IL_054c:
	{
		goto IL_0590;
	}

IL_0551:
	{
		bool L_124 = __this->get_end_24();
		if (!L_124)
		{
			goto IL_0590;
		}
	}
	{
		float L_125 = __this->get_endTime_13();
		if ((!(((float)L_125) > ((float)(0.0f)))))
		{
			goto IL_0583;
		}
	}
	{
		float L_126 = __this->get_endTime_13();
		float L_127 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_endTime_13(((float)((float)L_126-(float)L_127)));
		goto IL_0590;
	}

IL_0583:
	{
		GameManager_resetBattle_m1511580469(__this, /*hidden argument*/NULL);
		__this->set_battle_26((bool)0);
	}

IL_0590:
	{
		goto IL_063e;
	}

IL_0595:
	{
		GameObject_t3674682005 * L_128 = __this->get_battleUI_29();
		NullCheck(L_128);
		GameObject_t3674682005 * L_129 = GameObject_get_gameObject_m1966529385(L_128, /*hidden argument*/NULL);
		NullCheck(L_129);
		GameObject_SetActive_m3538205401(L_129, (bool)0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_130 = __this->get_battleCamera_27();
		NullCheck(L_130);
		GameObject_SetActive_m3538205401(L_130, (bool)0, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_131 = __this->get_outCamera_28();
		NullCheck(L_131);
		GameObject_SetActive_m3538205401(L_131, (bool)1, /*hidden argument*/NULL);
		List_1_t565044604 * L_132 = __this->get_userPlayers_41();
		NullCheck(L_132);
		Enumerator_t584717374  L_133 = List_1_GetEnumerator_m1746956196(L_132, /*hidden argument*/List_1_GetEnumerator_m1746956196_MethodInfo_var);
		V_5 = L_133;
	}

IL_05cb:
	try
	{ // begin try (depth: 1)
		{
			goto IL_05e0;
		}

IL_05d0:
		{
			UserPlayer_t3491826348 * L_134 = Enumerator_get_Current_m2159445840((&V_5), /*hidden argument*/Enumerator_get_Current_m2159445840_MethodInfo_var);
			V_4 = L_134;
			Player_t2393081601 * L_135 = V_4;
			NullCheck(L_135);
			VirtActionInvoker0::Invoke(4 /* System.Void Player::TurnUpdate() */, L_135);
		}

IL_05e0:
		{
			bool L_136 = Enumerator_MoveNext_m2941178764((&V_5), /*hidden argument*/Enumerator_MoveNext_m2941178764_MethodInfo_var);
			if (L_136)
			{
				goto IL_05d0;
			}
		}

IL_05ec:
		{
			IL2CPP_LEAVE(0x5FE, FINALLY_05f1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_05f1;
	}

FINALLY_05f1:
	{ // begin finally (depth: 1)
		Enumerator_t584717374  L_137 = V_5;
		Enumerator_t584717374  L_138 = L_137;
		Il2CppObject * L_139 = Box(Enumerator_t584717374_il2cpp_TypeInfo_var, &L_138);
		NullCheck((Il2CppObject *)L_139);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, (Il2CppObject *)L_139);
		IL2CPP_END_FINALLY(1521)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1521)
	{
		IL2CPP_JUMP_TBL(0x5FE, IL_05fe)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_05fe:
	{
		List_1_t1443081209 * L_140 = __this->get_aiPlayers_42();
		NullCheck(L_140);
		Enumerator_t1462753979  L_141 = List_1_GetEnumerator_m3996326817(L_140, /*hidden argument*/List_1_GetEnumerator_m3996326817_MethodInfo_var);
		V_7 = L_141;
	}

IL_060b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0620;
		}

IL_0610:
		{
			AIPlayer_t74895657 * L_142 = Enumerator_get_Current_m733699085((&V_7), /*hidden argument*/Enumerator_get_Current_m733699085_MethodInfo_var);
			V_6 = L_142;
			Player_t2393081601 * L_143 = V_6;
			NullCheck(L_143);
			VirtActionInvoker0::Invoke(4 /* System.Void Player::TurnUpdate() */, L_143);
		}

IL_0620:
		{
			bool L_144 = Enumerator_MoveNext_m2105223535((&V_7), /*hidden argument*/Enumerator_MoveNext_m2105223535_MethodInfo_var);
			if (L_144)
			{
				goto IL_0610;
			}
		}

IL_062c:
		{
			IL2CPP_LEAVE(0x63E, FINALLY_0631);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t3991598821 *)e.ex;
		goto FINALLY_0631;
	}

FINALLY_0631:
	{ // begin finally (depth: 1)
		Enumerator_t1462753979  L_145 = V_7;
		Enumerator_t1462753979  L_146 = L_145;
		Il2CppObject * L_147 = Box(Enumerator_t1462753979_il2cpp_TypeInfo_var, &L_146);
		NullCheck((Il2CppObject *)L_147);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1423340799_il2cpp_TypeInfo_var, (Il2CppObject *)L_147);
		IL2CPP_END_FINALLY(1585)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(1585)
	{
		IL2CPP_JUMP_TBL(0x63E, IL_063e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t3991598821 *)
	}

IL_063e:
	{
		return;
	}
}
// System.Void GameManager::<initBattle>m__2()
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3317767;
extern const uint32_t GameManager_U3CinitBattleU3Em__2_m3156031923_MetadataUsageId;
extern "C"  void GameManager_U3CinitBattleU3Em__2_m3156031923 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_U3CinitBattleU3Em__2_m3156031923_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3317767, /*hidden argument*/NULL);
		ArrayList_t3948406897 * L_0 = __this->get_inputKeySequence_22();
		int32_t L_1 = 1;
		Il2CppObject * L_2 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_2);
		return;
	}
}
// System.Void GameManager::<initBattle>m__3()
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral108511772;
extern const uint32_t GameManager_U3CinitBattleU3Em__3_m3156032884_MetadataUsageId;
extern "C"  void GameManager_U3CinitBattleU3Em__3_m3156032884 (GameManager_t2369589051 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameManager_U3CinitBattleU3Em__3_m3156032884_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral108511772, /*hidden argument*/NULL);
		ArrayList_t3948406897 * L_0 = __this->get_inputKeySequence_22();
		int32_t L_1 = 2;
		Il2CppObject * L_2 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_1);
		NullCheck(L_0);
		VirtFuncInvoker1< int32_t, Il2CppObject * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_2);
		return;
	}
}
// System.Void Player::.ctor()
extern "C"  void Player__ctor_m871706298 (Player_t2393081601 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Player::Awake()
extern "C"  void Player_Awake_m1109311517 (Player_t2393081601 * __this, const MethodInfo* method)
{
	{
		Transform_t1659122786 * L_0 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t4282066566  L_1 = Transform_get_position_m2211398607(L_0, /*hidden argument*/NULL);
		__this->set_moveDestination_3(L_1);
		return;
	}
}
// System.Void Player::Start()
extern "C"  void Player_Start_m4113811386 (Player_t2393081601 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Player::Update()
extern "C"  void Player_Update_m2979953555 (Player_t2393081601 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Player::setPlayerIndex(System.Int32)
extern "C"  void Player_setPlayerIndex_m2053814442 (Player_t2393081601 * __this, int32_t ___index0, const MethodInfo* method)
{
	{
		int32_t L_0 = ___index0;
		__this->set_playerIndex_4(L_0);
		return;
	}
}
// System.Void Player::TurnUpdate()
extern "C"  void Player_TurnUpdate_m1603430064 (Player_t2393081601 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Player::OnMouseDown()
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern const uint32_t Player_OnMouseDown_m3874045024_MetadataUsageId;
extern "C"  void Player_OnMouseDown_m3874045024 (Player_t2393081601 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Player_OnMouseDown_m3874045024_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Player_t2393081601 * V_0 = NULL;
	{
		GameManager_t2369589051 * L_0 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_instance_3();
		NullCheck(L_0);
		Player_t2393081601 * L_1 = GameManager_getCurrentPlayer_m3573864060(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Type_t * L_2 = Object_GetType_m2022236990(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		Type_t * L_3 = Object_GetType_m2022236990(__this, /*hidden argument*/NULL);
		Player_t2393081601 * L_4 = V_0;
		NullCheck(L_4);
		Type_t * L_5 = Object_GetType_m2022236990(L_4, /*hidden argument*/NULL);
		if ((((Il2CppObject*)(Type_t *)L_3) == ((Il2CppObject*)(Type_t *)L_5)))
		{
			goto IL_007a;
		}
	}
	{
		Transform_t1659122786 * L_6 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t4282066566  L_7 = Transform_get_position_m2211398607(L_6, /*hidden argument*/NULL);
		Player_t2393081601 * L_8 = V_0;
		NullCheck(L_8);
		Transform_t1659122786 * L_9 = Component_get_transform_m4257140443(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t4282066566  L_10 = Transform_get_position_m2211398607(L_9, /*hidden argument*/NULL);
		int32_t L_11 = GameManager_mDistance_m3135828174(NULL /*static, unused*/, L_7, L_10, /*hidden argument*/NULL);
		int32_t L_12 = L_11;
		Il2CppObject * L_13 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Transform_t1659122786 * L_14 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_t4282066566  L_15 = Transform_get_position_m2211398607(L_14, /*hidden argument*/NULL);
		Player_t2393081601 * L_16 = V_0;
		NullCheck(L_16);
		Transform_t1659122786 * L_17 = Component_get_transform_m4257140443(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t4282066566  L_18 = Transform_get_position_m2211398607(L_17, /*hidden argument*/NULL);
		int32_t L_19 = GameManager_mDistance_m3135828174(NULL /*static, unused*/, L_15, L_18, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		GameManager_t2369589051 * L_20 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_instance_3();
		Player_t2393081601 * L_21 = V_0;
		NullCheck(L_20);
		GameManager_enterBattleScene_m555084630(L_20, L_21, __this, /*hidden argument*/NULL);
		return;
	}

IL_007a:
	{
		GameManager_t2369589051 * L_22 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_instance_3();
		NullCheck(L_22);
		GameManager_setCurrentPlayer_m4132026731(L_22, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tile::.ctor()
extern "C"  void Tile__ctor_m2580515725 (Tile_t2606798 * __this, const MethodInfo* method)
{
	{
		Vector2_t4282066565  L_0 = Vector2_get_zero_m199872368(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_gridPosition_2(L_0);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tile::Start()
extern "C"  void Tile_Start_m1527653517 (Tile_t2606798 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Tile::Update()
extern "C"  void Tile_Update_m118470944 (Tile_t2606798 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Tile::OnMouseEnter()
extern "C"  void Tile_OnMouseEnter_m3839920649 (Tile_t2606798 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Tile::OnMouseDown()
extern Il2CppClass* GameManager_t2369589051_il2cpp_TypeInfo_var;
extern const uint32_t Tile_OnMouseDown_m1481731827_MetadataUsageId;
extern "C"  void Tile_OnMouseDown_m1481731827 (Tile_t2606798 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Tile_OnMouseDown_m1481731827_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameManager_t2369589051 * L_0 = ((GameManager_t2369589051_StaticFields*)GameManager_t2369589051_il2cpp_TypeInfo_var->static_fields)->get_instance_3();
		NullCheck(L_0);
		GameManager_moveCurrentPlayer_m2925288297(L_0, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserPlayer::.ctor()
extern "C"  void UserPlayer__ctor_m1619906415 (UserPlayer_t3491826348 * __this, const MethodInfo* method)
{
	{
		__this->set_moveSpeed_6((10.0f));
		Player__ctor_m871706298(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserPlayer::Start()
extern "C"  void UserPlayer_Start_m567044207 (UserPlayer_t3491826348 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UserPlayer::Update()
extern "C"  void UserPlayer_Update_m404353406 (UserPlayer_t3491826348 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void UserPlayer::onMouseEnter()
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2444600995;
extern const uint32_t UserPlayer_onMouseEnter_m2342762439_MetadataUsageId;
extern "C"  void UserPlayer_onMouseEnter_m2342762439 (UserPlayer_t3491826348 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (UserPlayer_onMouseEnter_m2342762439_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral2444600995, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UserPlayer::TurnUpdate()
extern "C"  void UserPlayer_TurnUpdate_m2386226971 (UserPlayer_t3491826348 * __this, const MethodInfo* method)
{
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Vector3_t4282066566  L_0 = ((Player_t2393081601 *)__this)->get_moveDestination_3();
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		float L_3 = Vector3_Distance_m3366690344(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		if ((!(((float)L_3) > ((float)(0.1f)))))
		{
			goto IL_009a;
		}
	}
	{
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_5 = L_4;
		NullCheck(L_5);
		Vector3_t4282066566  L_6 = Transform_get_position_m2211398607(L_5, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = ((Player_t2393081601 *)__this)->get_moveDestination_3();
		Transform_t1659122786 * L_8 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t4282066566  L_9 = Transform_get_position_m2211398607(L_8, /*hidden argument*/NULL);
		Vector3_t4282066566  L_10 = Vector3_op_Subtraction_m2842958165(NULL /*static, unused*/, L_7, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		Vector3_t4282066566  L_11 = Vector3_get_normalized_m2650940353((&V_0), /*hidden argument*/NULL);
		float L_12 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t4282066566  L_13 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_moveSpeed_6();
		Vector3_t4282066566  L_15 = Vector3_op_Multiply_m973638459(NULL /*static, unused*/, L_13, L_14, /*hidden argument*/NULL);
		Vector3_t4282066566  L_16 = Vector3_op_Addition_m695438225(NULL /*static, unused*/, L_6, L_15, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3111394108(L_5, L_16, /*hidden argument*/NULL);
		Vector3_t4282066566  L_17 = ((Player_t2393081601 *)__this)->get_moveDestination_3();
		Transform_t1659122786 * L_18 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t4282066566  L_19 = Transform_get_position_m2211398607(L_18, /*hidden argument*/NULL);
		float L_20 = Vector3_Distance_m3366690344(NULL /*static, unused*/, L_17, L_19, /*hidden argument*/NULL);
		if ((!(((float)L_20) <= ((float)(0.1f)))))
		{
			goto IL_009a;
		}
	}
	{
		Transform_t1659122786 * L_21 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_22 = ((Player_t2393081601 *)__this)->get_moveDestination_3();
		NullCheck(L_21);
		Transform_set_position_m3111394108(L_21, L_22, /*hidden argument*/NULL);
	}

IL_009a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
