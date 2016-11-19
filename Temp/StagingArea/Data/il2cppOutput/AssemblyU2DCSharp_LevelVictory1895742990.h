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

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelVictory
struct  LevelVictory_t1895742990  : public MonoBehaviour_t667441552
{
public:
	// System.String LevelVictory::firstLevel
	String_t* ___firstLevel_2;
	// System.Int32 LevelVictory::startingLives
	int32_t ___startingLives_3;

public:
	inline static int32_t get_offset_of_firstLevel_2() { return static_cast<int32_t>(offsetof(LevelVictory_t1895742990, ___firstLevel_2)); }
	inline String_t* get_firstLevel_2() const { return ___firstLevel_2; }
	inline String_t** get_address_of_firstLevel_2() { return &___firstLevel_2; }
	inline void set_firstLevel_2(String_t* value)
	{
		___firstLevel_2 = value;
		Il2CppCodeGenWriteBarrier(&___firstLevel_2, value);
	}

	inline static int32_t get_offset_of_startingLives_3() { return static_cast<int32_t>(offsetof(LevelVictory_t1895742990, ___startingLives_3)); }
	inline int32_t get_startingLives_3() const { return ___startingLives_3; }
	inline int32_t* get_address_of_startingLives_3() { return &___startingLives_3; }
	inline void set_startingLives_3(int32_t value)
	{
		___startingLives_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
