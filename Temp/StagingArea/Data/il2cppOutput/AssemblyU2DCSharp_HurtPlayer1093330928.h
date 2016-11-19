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

// HurtPlayer
struct  HurtPlayer_t1093330928  : public MonoBehaviour_t667441552
{
public:
	// LevelManager HurtPlayer::theLevelManager
	LevelManager_t2278695849 * ___theLevelManager_2;
	// System.Int32 HurtPlayer::damageToGive
	int32_t ___damageToGive_3;

public:
	inline static int32_t get_offset_of_theLevelManager_2() { return static_cast<int32_t>(offsetof(HurtPlayer_t1093330928, ___theLevelManager_2)); }
	inline LevelManager_t2278695849 * get_theLevelManager_2() const { return ___theLevelManager_2; }
	inline LevelManager_t2278695849 ** get_address_of_theLevelManager_2() { return &___theLevelManager_2; }
	inline void set_theLevelManager_2(LevelManager_t2278695849 * value)
	{
		___theLevelManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___theLevelManager_2, value);
	}

	inline static int32_t get_offset_of_damageToGive_3() { return static_cast<int32_t>(offsetof(HurtPlayer_t1093330928, ___damageToGive_3)); }
	inline int32_t get_damageToGive_3() const { return ___damageToGive_3; }
	inline int32_t* get_address_of_damageToGive_3() { return &___damageToGive_3; }
	inline void set_damageToGive_3(int32_t value)
	{
		___damageToGive_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
