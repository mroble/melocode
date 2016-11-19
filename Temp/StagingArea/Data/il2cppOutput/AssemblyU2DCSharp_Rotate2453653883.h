#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_Rotate_whichWayToRotate1376630652.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotate
struct  Rotate_t2453653883  : public MonoBehaviour_t667441552
{
public:
	// System.Single Rotate::speed
	float ___speed_2;
	// Rotate/whichWayToRotate Rotate::way
	int32_t ___way_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Rotate_t2453653883, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_way_3() { return static_cast<int32_t>(offsetof(Rotate_t2453653883, ___way_3)); }
	inline int32_t get_way_3() const { return ___way_3; }
	inline int32_t* get_address_of_way_3() { return &___way_3; }
	inline void set_way_3(int32_t value)
	{
		___way_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
