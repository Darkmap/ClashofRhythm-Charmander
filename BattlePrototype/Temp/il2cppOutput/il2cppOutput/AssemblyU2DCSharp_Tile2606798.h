#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tile
struct  Tile_t2606798  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector2 Tile::gridPosition
	Vector2_t4282066565  ___gridPosition_2;

public:
	inline static int32_t get_offset_of_gridPosition_2() { return static_cast<int32_t>(offsetof(Tile_t2606798, ___gridPosition_2)); }
	inline Vector2_t4282066565  get_gridPosition_2() const { return ___gridPosition_2; }
	inline Vector2_t4282066565 * get_address_of_gridPosition_2() { return &___gridPosition_2; }
	inline void set_gridPosition_2(Vector2_t4282066565  value)
	{
		___gridPosition_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
