#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// change_model
struct  change_model_t244706778  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject[] change_model::models
	GameObjectU5BU5D_t2662109048* ___models_2;
	// System.Int32 change_model::active_model
	int32_t ___active_model_3;

public:
	inline static int32_t get_offset_of_models_2() { return static_cast<int32_t>(offsetof(change_model_t244706778, ___models_2)); }
	inline GameObjectU5BU5D_t2662109048* get_models_2() const { return ___models_2; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_models_2() { return &___models_2; }
	inline void set_models_2(GameObjectU5BU5D_t2662109048* value)
	{
		___models_2 = value;
		Il2CppCodeGenWriteBarrier(&___models_2, value);
	}

	inline static int32_t get_offset_of_active_model_3() { return static_cast<int32_t>(offsetof(change_model_t244706778, ___active_model_3)); }
	inline int32_t get_active_model_3() const { return ___active_model_3; }
	inline int32_t* get_address_of_active_model_3() { return &___active_model_3; }
	inline void set_active_model_3(int32_t value)
	{
		___active_model_3 = value;
	}
};

struct change_model_t244706778_StaticFields
{
public:
	// UnityEngine.GameObject change_model::actual_go
	GameObject_t3674682005 * ___actual_go_4;

public:
	inline static int32_t get_offset_of_actual_go_4() { return static_cast<int32_t>(offsetof(change_model_t244706778_StaticFields, ___actual_go_4)); }
	inline GameObject_t3674682005 * get_actual_go_4() const { return ___actual_go_4; }
	inline GameObject_t3674682005 ** get_address_of_actual_go_4() { return &___actual_go_4; }
	inline void set_actual_go_4(GameObject_t3674682005 * value)
	{
		___actual_go_4 = value;
		Il2CppCodeGenWriteBarrier(&___actual_go_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
