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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject Player::itSelf
	GameObject_t3674682005 * ___itSelf_2;
	// UnityEngine.Vector3 Player::moveDestination
	Vector3_t4282066566  ___moveDestination_3;
	// System.Int32 Player::playerIndex
	int32_t ___playerIndex_4;
	// System.Int32 Player::steps
	int32_t ___steps_5;

public:
	inline static int32_t get_offset_of_itSelf_2() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___itSelf_2)); }
	inline GameObject_t3674682005 * get_itSelf_2() const { return ___itSelf_2; }
	inline GameObject_t3674682005 ** get_address_of_itSelf_2() { return &___itSelf_2; }
	inline void set_itSelf_2(GameObject_t3674682005 * value)
	{
		___itSelf_2 = value;
		Il2CppCodeGenWriteBarrier(&___itSelf_2, value);
	}

	inline static int32_t get_offset_of_moveDestination_3() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___moveDestination_3)); }
	inline Vector3_t4282066566  get_moveDestination_3() const { return ___moveDestination_3; }
	inline Vector3_t4282066566 * get_address_of_moveDestination_3() { return &___moveDestination_3; }
	inline void set_moveDestination_3(Vector3_t4282066566  value)
	{
		___moveDestination_3 = value;
	}

	inline static int32_t get_offset_of_playerIndex_4() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerIndex_4)); }
	inline int32_t get_playerIndex_4() const { return ___playerIndex_4; }
	inline int32_t* get_address_of_playerIndex_4() { return &___playerIndex_4; }
	inline void set_playerIndex_4(int32_t value)
	{
		___playerIndex_4 = value;
	}

	inline static int32_t get_offset_of_steps_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___steps_5)); }
	inline int32_t get_steps_5() const { return ___steps_5; }
	inline int32_t* get_address_of_steps_5() { return &___steps_5; }
	inline void set_steps_5(int32_t value)
	{
		___steps_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
