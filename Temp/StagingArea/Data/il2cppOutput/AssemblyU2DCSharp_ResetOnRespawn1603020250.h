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
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ResetOnRespawn
struct  ResetOnRespawn_t1603020250  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Vector3 ResetOnRespawn::startPosition
	Vector3_t4282066566  ___startPosition_2;
	// UnityEngine.Quaternion ResetOnRespawn::startRotation
	Quaternion_t1553702882  ___startRotation_3;
	// UnityEngine.Vector3 ResetOnRespawn::startLocalScale
	Vector3_t4282066566  ___startLocalScale_4;
	// UnityEngine.Rigidbody2D ResetOnRespawn::myRigidbody
	Rigidbody2D_t1743771669 * ___myRigidbody_5;

public:
	inline static int32_t get_offset_of_startPosition_2() { return static_cast<int32_t>(offsetof(ResetOnRespawn_t1603020250, ___startPosition_2)); }
	inline Vector3_t4282066566  get_startPosition_2() const { return ___startPosition_2; }
	inline Vector3_t4282066566 * get_address_of_startPosition_2() { return &___startPosition_2; }
	inline void set_startPosition_2(Vector3_t4282066566  value)
	{
		___startPosition_2 = value;
	}

	inline static int32_t get_offset_of_startRotation_3() { return static_cast<int32_t>(offsetof(ResetOnRespawn_t1603020250, ___startRotation_3)); }
	inline Quaternion_t1553702882  get_startRotation_3() const { return ___startRotation_3; }
	inline Quaternion_t1553702882 * get_address_of_startRotation_3() { return &___startRotation_3; }
	inline void set_startRotation_3(Quaternion_t1553702882  value)
	{
		___startRotation_3 = value;
	}

	inline static int32_t get_offset_of_startLocalScale_4() { return static_cast<int32_t>(offsetof(ResetOnRespawn_t1603020250, ___startLocalScale_4)); }
	inline Vector3_t4282066566  get_startLocalScale_4() const { return ___startLocalScale_4; }
	inline Vector3_t4282066566 * get_address_of_startLocalScale_4() { return &___startLocalScale_4; }
	inline void set_startLocalScale_4(Vector3_t4282066566  value)
	{
		___startLocalScale_4 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_5() { return static_cast<int32_t>(offsetof(ResetOnRespawn_t1603020250, ___myRigidbody_5)); }
	inline Rigidbody2D_t1743771669 * get_myRigidbody_5() const { return ___myRigidbody_5; }
	inline Rigidbody2D_t1743771669 ** get_address_of_myRigidbody_5() { return &___myRigidbody_5; }
	inline void set_myRigidbody_5(Rigidbody2D_t1743771669 * value)
	{
		___myRigidbody_5 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
