#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "AssemblyU2DCSharp_Player2393081601.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AIPlayer
struct  AIPlayer_t74895657  : public Player_t2393081601
{
public:
	// System.Single AIPlayer::moveSpeed
	float ___moveSpeed_6;

public:
	inline static int32_t get_offset_of_moveSpeed_6() { return static_cast<int32_t>(offsetof(AIPlayer_t74895657, ___moveSpeed_6)); }
	inline float get_moveSpeed_6() const { return ___moveSpeed_6; }
	inline float* get_address_of_moveSpeed_6() { return &___moveSpeed_6; }
	inline void set_moveSpeed_6(float value)
	{
		___moveSpeed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
