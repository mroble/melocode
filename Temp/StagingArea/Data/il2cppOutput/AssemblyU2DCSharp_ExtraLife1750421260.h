#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// LevelManager
struct LevelManager_t2278695849;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ExtraLife
struct  ExtraLife_t1750421260  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 ExtraLife::livesToGive
	int32_t ___livesToGive_2;
	// LevelManager ExtraLife::theLevelManager
	LevelManager_t2278695849 * ___theLevelManager_3;

public:
	inline static int32_t get_offset_of_livesToGive_2() { return static_cast<int32_t>(offsetof(ExtraLife_t1750421260, ___livesToGive_2)); }
	inline int32_t get_livesToGive_2() const { return ___livesToGive_2; }
	inline int32_t* get_address_of_livesToGive_2() { return &___livesToGive_2; }
	inline void set_livesToGive_2(int32_t value)
	{
		___livesToGive_2 = value;
	}

	inline static int32_t get_offset_of_theLevelManager_3() { return static_cast<int32_t>(offsetof(ExtraLife_t1750421260, ___theLevelManager_3)); }
	inline LevelManager_t2278695849 * get_theLevelManager_3() const { return ___theLevelManager_3; }
	inline LevelManager_t2278695849 ** get_address_of_theLevelManager_3() { return &___theLevelManager_3; }
	inline void set_theLevelManager_3(LevelManager_t2278695849 * value)
	{
		___theLevelManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___theLevelManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
