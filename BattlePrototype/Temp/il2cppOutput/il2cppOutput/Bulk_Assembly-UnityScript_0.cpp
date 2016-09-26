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

// Camera_Size
struct Camera_Size_t3726057691;
// change_model
struct change_model_t244706778;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_Camera_Size3726057691.h"
#include "AssemblyU2DUnityScript_Camera_Size3726057691MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Mathf4203372500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera2727095145MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Camera2727095145.h"
#include "AssemblyU2DUnityScript_change_model244706778.h"
#include "AssemblyU2DUnityScript_change_model244706778MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "mscorlib_System_Array1146569071MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Camera_Size::.ctor()
extern "C"  void Camera_Size__ctor_m3512913499 (Camera_Size_t3726057691 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_distance_2((3.0f));
		__this->set_distanceMin_3(3);
		__this->set_distanceMax_4(((int32_t)20));
		return;
	}
}
// System.Void Camera_Size::Start()
extern "C"  void Camera_Size_Start_m2460051291 (Camera_Size_t3726057691 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Camera_Size::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t4203372500_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2268470611;
extern const uint32_t Camera_Size_Update_m3252998162_MetadataUsageId;
extern "C"  void Camera_Size_Update_m3252998162 (Camera_Size_t3726057691 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Camera_Size_Update_m3252998162_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_distance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_1 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral2268470611, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_distanceMin_3();
		int32_t L_3 = __this->get_distanceMax_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t4203372500_il2cpp_TypeInfo_var);
		float L_4 = Mathf_Clamp_m3872743893(NULL /*static, unused*/, ((float)((float)L_0-(float)((float)((float)L_1*(float)(((float)((float)5))))))), (((float)((float)L_2))), (((float)((float)L_3))), /*hidden argument*/NULL);
		__this->set_distance_2(L_4);
		Camera_t2727095145 * L_5 = Camera_get_main_m671815697(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_distance_2();
		NullCheck(L_5);
		Camera_set_orthographicSize_m3910539041(L_5, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Camera_Size::Main()
extern "C"  void Camera_Size_Main_m2107024130 (Camera_Size_t3726057691 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void change_model::.ctor()
extern Il2CppClass* GameObjectU5BU5D_t2662109048_il2cpp_TypeInfo_var;
extern const uint32_t change_model__ctor_m4202035702_MetadataUsageId;
extern "C"  void change_model__ctor_m4202035702 (change_model_t244706778 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (change_model__ctor_m4202035702_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->set_models_2(((GameObjectU5BU5D_t2662109048*)SZArrayNew(GameObjectU5BU5D_t2662109048_il2cpp_TypeInfo_var, (uint32_t)5)));
		return;
	}
}
// System.Void change_model::OnMouseDown()
extern Il2CppClass* change_model_t244706778_il2cpp_TypeInfo_var;
extern const uint32_t change_model_OnMouseDown_m3294341788_MetadataUsageId;
extern "C"  void change_model_OnMouseDown_m3294341788 (change_model_t244706778 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (change_model_OnMouseDown_m3294341788_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		VirtActionInvoker0::Invoke(5 /* System.Void change_model::HideItem() */, __this);
		int32_t L_0 = __this->get_active_model_3();
		__this->set_active_model_3(((int32_t)((int32_t)L_0+(int32_t)1)));
		GameObjectU5BU5D_t2662109048* L_1 = __this->get_models_2();
		int32_t L_2 = __this->get_active_model_3();
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, L_2);
		int32_t L_3 = L_2;
		GameObject_t3674682005 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m3538205401(L_4, (bool)1, /*hidden argument*/NULL);
		GameObjectU5BU5D_t2662109048* L_5 = __this->get_models_2();
		int32_t L_6 = __this->get_active_model_3();
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		int32_t L_7 = L_6;
		GameObject_t3674682005 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		((change_model_t244706778_StaticFields*)change_model_t244706778_il2cpp_TypeInfo_var->static_fields)->set_actual_go_4(L_8);
		int32_t L_9 = __this->get_active_model_3();
		GameObjectU5BU5D_t2662109048* L_10 = __this->get_models_2();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_10);
		int32_t L_11 = Array_GetLength_m1450876743((Il2CppArray *)(Il2CppArray *)L_10, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)L_11-(int32_t)2)))))
		{
			goto IL_0059;
		}
	}
	{
		__this->set_active_model_3((-1));
	}

IL_0059:
	{
		return;
	}
}
// System.Void change_model::HideItem()
extern "C"  void change_model_HideItem_m3747569731 (change_model_t244706778 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0019;
	}

IL_0007:
	{
		GameObjectU5BU5D_t2662109048* L_0 = __this->get_models_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		int32_t L_2 = L_1;
		GameObject_t3674682005 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_SetActive_m3538205401(L_3, (bool)0, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0019:
	{
		int32_t L_5 = V_0;
		GameObjectU5BU5D_t2662109048* L_6 = __this->get_models_2();
		NullCheck((Il2CppArray *)(Il2CppArray *)L_6);
		int32_t L_7 = Array_GetLength_m1450876743((Il2CppArray *)(Il2CppArray *)L_6, 0, /*hidden argument*/NULL);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void change_model::Main()
extern "C"  void change_model_Main_m2683443207 (change_model_t244706778 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
