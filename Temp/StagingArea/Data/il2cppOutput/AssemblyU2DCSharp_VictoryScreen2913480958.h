#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// LevelManager
struct LevelManager_t2278695849;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VictoryScreen
struct  VictoryScreen_t2913480958  : public MonoBehaviour_t667441552
{
public:
	// System.String VictoryScreen::mainMenu
	String_t* ___mainMenu_2;
	// LevelManager VictoryScreen::theLevelManager
	LevelManager_t2278695849 * ___theLevelManager_3;

public:
	inline static int32_t get_offset_of_mainMenu_2() { return static_cast<int32_t>(offsetof(VictoryScreen_t2913480958, ___mainMenu_2)); }
	inline String_t* get_mainMenu_2() const { return ___mainMenu_2; }
	inline String_t** get_address_of_mainMenu_2() { return &___mainMenu_2; }
	inline void set_mainMenu_2(String_t* value)
	{
		___mainMenu_2 = value;
		Il2CppCodeGenWriteBarrier(&___mainMenu_2, value);
	}

	inline static int32_t get_offset_of_theLevelManager_3() { return static_cast<int32_t>(offsetof(VictoryScreen_t2913480958, ___theLevelManager_3)); }
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
