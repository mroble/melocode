#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpiderController
struct  SpiderController_t892190849  : public MonoBehaviour_t667441552
{
public:
	// System.Single SpiderController::moveSpeed
	float ___moveSpeed_2;
	// System.Boolean SpiderController::canMove
	bool ___canMove_3;
	// UnityEngine.Rigidbody2D SpiderController::myRigidbody
	Rigidbody2D_t1743771669 * ___myRigidbody_4;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(SpiderController_t892190849, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_canMove_3() { return static_cast<int32_t>(offsetof(SpiderController_t892190849, ___canMove_3)); }
	inline bool get_canMove_3() const { return ___canMove_3; }
	inline bool* get_address_of_canMove_3() { return &___canMove_3; }
	inline void set_canMove_3(bool value)
	{
		___canMove_3 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_4() { return static_cast<int32_t>(offsetof(SpiderController_t892190849, ___myRigidbody_4)); }
	inline Rigidbody2D_t1743771669 * get_myRigidbody_4() const { return ___myRigidbody_4; }
	inline Rigidbody2D_t1743771669 ** get_address_of_myRigidbody_4() { return &___myRigidbody_4; }
	inline void set_myRigidbody_4(Rigidbody2D_t1743771669 * value)
	{
		___myRigidbody_4 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
