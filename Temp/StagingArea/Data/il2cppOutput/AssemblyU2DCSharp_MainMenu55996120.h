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
// System.String[]
struct StringU5BU5D_t4054002952;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t55996120  : public MonoBehaviour_t667441552
{
public:
	// System.String MainMenu::firstLevel
	String_t* ___firstLevel_2;
	// System.String[] MainMenu::levelNames
	StringU5BU5D_t4054002952* ___levelNames_3;
	// System.Int32 MainMenu::startingLives
	int32_t ___startingLives_4;

public:
	inline static int32_t get_offset_of_firstLevel_2() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___firstLevel_2)); }
	inline String_t* get_firstLevel_2() const { return ___firstLevel_2; }
	inline String_t** get_address_of_firstLevel_2() { return &___firstLevel_2; }
	inline void set_firstLevel_2(String_t* value)
	{
		___firstLevel_2 = value;
		Il2CppCodeGenWriteBarrier(&___firstLevel_2, value);
	}

	inline static int32_t get_offset_of_levelNames_3() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___levelNames_3)); }
	inline StringU5BU5D_t4054002952* get_levelNames_3() const { return ___levelNames_3; }
	inline StringU5BU5D_t4054002952** get_address_of_levelNames_3() { return &___levelNames_3; }
	inline void set_levelNames_3(StringU5BU5D_t4054002952* value)
	{
		___levelNames_3 = value;
		Il2CppCodeGenWriteBarrier(&___levelNames_3, value);
	}

	inline static int32_t get_offset_of_startingLives_4() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___startingLives_4)); }
	inline int32_t get_startingLives_4() const { return ___startingLives_4; }
	inline int32_t* get_address_of_startingLives_4() { return &___startingLives_4; }
	inline void set_startingLives_4(int32_t value)
	{
		___startingLives_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
