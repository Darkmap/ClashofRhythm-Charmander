#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Camera_Size
struct  Camera_Size_t3726057691  : public MonoBehaviour_t667441552
{
public:
	// System.Single Camera_Size::distance
	float ___distance_2;
	// System.Int32 Camera_Size::distanceMin
	int32_t ___distanceMin_3;
	// System.Int32 Camera_Size::distanceMax
	int32_t ___distanceMax_4;

public:
	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(Camera_Size_t3726057691, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_distanceMin_3() { return static_cast<int32_t>(offsetof(Camera_Size_t3726057691, ___distanceMin_3)); }
	inline int32_t get_distanceMin_3() const { return ___distanceMin_3; }
	inline int32_t* get_address_of_distanceMin_3() { return &___distanceMin_3; }
	inline void set_distanceMin_3(int32_t value)
	{
		___distanceMin_3 = value;
	}

	inline static int32_t get_offset_of_distanceMax_4() { return static_cast<int32_t>(offsetof(Camera_Size_t3726057691, ___distanceMax_4)); }
	inline int32_t get_distanceMax_4() const { return ___distanceMax_4; }
	inline int32_t* get_address_of_distanceMax_4() { return &___distanceMax_4; }
	inline void set_distanceMax_4(int32_t value)
	{
		___distanceMax_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
