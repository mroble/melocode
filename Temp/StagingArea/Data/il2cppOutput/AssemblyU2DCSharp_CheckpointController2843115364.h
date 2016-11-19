#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t3199167241;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t2548470764;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CheckpointController
struct  CheckpointController_t2843115364  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Sprite CheckpointController::flagClosed
	Sprite_t3199167241 * ___flagClosed_2;
	// UnityEngine.Sprite CheckpointController::flagOpen
	Sprite_t3199167241 * ___flagOpen_3;
	// UnityEngine.SpriteRenderer CheckpointController::theSpriteRenderer
	SpriteRenderer_t2548470764 * ___theSpriteRenderer_4;
	// System.Boolean CheckpointController::checkpointActive
	bool ___checkpointActive_5;

public:
	inline static int32_t get_offset_of_flagClosed_2() { return static_cast<int32_t>(offsetof(CheckpointController_t2843115364, ___flagClosed_2)); }
	inline Sprite_t3199167241 * get_flagClosed_2() const { return ___flagClosed_2; }
	inline Sprite_t3199167241 ** get_address_of_flagClosed_2() { return &___flagClosed_2; }
	inline void set_flagClosed_2(Sprite_t3199167241 * value)
	{
		___flagClosed_2 = value;
		Il2CppCodeGenWriteBarrier(&___flagClosed_2, value);
	}

	inline static int32_t get_offset_of_flagOpen_3() { return static_cast<int32_t>(offsetof(CheckpointController_t2843115364, ___flagOpen_3)); }
	inline Sprite_t3199167241 * get_flagOpen_3() const { return ___flagOpen_3; }
	inline Sprite_t3199167241 ** get_address_of_flagOpen_3() { return &___flagOpen_3; }
	inline void set_flagOpen_3(Sprite_t3199167241 * value)
	{
		___flagOpen_3 = value;
		Il2CppCodeGenWriteBarrier(&___flagOpen_3, value);
	}

	inline static int32_t get_offset_of_theSpriteRenderer_4() { return static_cast<int32_t>(offsetof(CheckpointController_t2843115364, ___theSpriteRenderer_4)); }
	inline SpriteRenderer_t2548470764 * get_theSpriteRenderer_4() const { return ___theSpriteRenderer_4; }
	inline SpriteRenderer_t2548470764 ** get_address_of_theSpriteRenderer_4() { return &___theSpriteRenderer_4; }
	inline void set_theSpriteRenderer_4(SpriteRenderer_t2548470764 * value)
	{
		___theSpriteRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___theSpriteRenderer_4, value);
	}

	inline static int32_t get_offset_of_checkpointActive_5() { return static_cast<int32_t>(offsetof(CheckpointController_t2843115364, ___checkpointActive_5)); }
	inline bool get_checkpointActive_5() const { return ___checkpointActive_5; }
	inline bool* get_address_of_checkpointActive_5() { return &___checkpointActive_5; }
	inline void set_checkpointActive_5(bool value)
	{
		___checkpointActive_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
