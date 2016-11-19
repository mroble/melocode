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
// UnityEngine.Transform
struct Transform_t1659122786;
// LevelManager
struct LevelManager_t2278695849;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_LayerMask3236759763.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerController::moveSpeed
	float ___moveSpeed_2;
	// UnityEngine.Rigidbody2D PlayerController::myRigidbody
	Rigidbody2D_t1743771669 * ___myRigidbody_3;
	// System.Single PlayerController::jumpSpeed
	float ___jumpSpeed_4;
	// UnityEngine.Transform PlayerController::groundCheck
	Transform_t1659122786 * ___groundCheck_5;
	// System.Single PlayerController::groundCheckRadius
	float ___groundCheckRadius_6;
	// UnityEngine.LayerMask PlayerController::whatIsGround
	LayerMask_t3236759763  ___whatIsGround_7;
	// System.Boolean PlayerController::isGrounded
	bool ___isGrounded_8;
	// UnityEngine.Vector3 PlayerController::respawnPosition
	Vector3_t4282066566  ___respawnPosition_9;
	// LevelManager PlayerController::theLevelManager
	LevelManager_t2278695849 * ___theLevelManager_10;
	// UnityEngine.AudioSource PlayerController::hurtSound
	AudioSource_t1740077639 * ___hurtSound_11;

public:
	inline static int32_t get_offset_of_moveSpeed_2() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___moveSpeed_2)); }
	inline float get_moveSpeed_2() const { return ___moveSpeed_2; }
	inline float* get_address_of_moveSpeed_2() { return &___moveSpeed_2; }
	inline void set_moveSpeed_2(float value)
	{
		___moveSpeed_2 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___myRigidbody_3)); }
	inline Rigidbody2D_t1743771669 * get_myRigidbody_3() const { return ___myRigidbody_3; }
	inline Rigidbody2D_t1743771669 ** get_address_of_myRigidbody_3() { return &___myRigidbody_3; }
	inline void set_myRigidbody_3(Rigidbody2D_t1743771669 * value)
	{
		___myRigidbody_3 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_3, value);
	}

	inline static int32_t get_offset_of_jumpSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___jumpSpeed_4)); }
	inline float get_jumpSpeed_4() const { return ___jumpSpeed_4; }
	inline float* get_address_of_jumpSpeed_4() { return &___jumpSpeed_4; }
	inline void set_jumpSpeed_4(float value)
	{
		___jumpSpeed_4 = value;
	}

	inline static int32_t get_offset_of_groundCheck_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___groundCheck_5)); }
	inline Transform_t1659122786 * get_groundCheck_5() const { return ___groundCheck_5; }
	inline Transform_t1659122786 ** get_address_of_groundCheck_5() { return &___groundCheck_5; }
	inline void set_groundCheck_5(Transform_t1659122786 * value)
	{
		___groundCheck_5 = value;
		Il2CppCodeGenWriteBarrier(&___groundCheck_5, value);
	}

	inline static int32_t get_offset_of_groundCheckRadius_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___groundCheckRadius_6)); }
	inline float get_groundCheckRadius_6() const { return ___groundCheckRadius_6; }
	inline float* get_address_of_groundCheckRadius_6() { return &___groundCheckRadius_6; }
	inline void set_groundCheckRadius_6(float value)
	{
		___groundCheckRadius_6 = value;
	}

	inline static int32_t get_offset_of_whatIsGround_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___whatIsGround_7)); }
	inline LayerMask_t3236759763  get_whatIsGround_7() const { return ___whatIsGround_7; }
	inline LayerMask_t3236759763 * get_address_of_whatIsGround_7() { return &___whatIsGround_7; }
	inline void set_whatIsGround_7(LayerMask_t3236759763  value)
	{
		___whatIsGround_7 = value;
	}

	inline static int32_t get_offset_of_isGrounded_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___isGrounded_8)); }
	inline bool get_isGrounded_8() const { return ___isGrounded_8; }
	inline bool* get_address_of_isGrounded_8() { return &___isGrounded_8; }
	inline void set_isGrounded_8(bool value)
	{
		___isGrounded_8 = value;
	}

	inline static int32_t get_offset_of_respawnPosition_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___respawnPosition_9)); }
	inline Vector3_t4282066566  get_respawnPosition_9() const { return ___respawnPosition_9; }
	inline Vector3_t4282066566 * get_address_of_respawnPosition_9() { return &___respawnPosition_9; }
	inline void set_respawnPosition_9(Vector3_t4282066566  value)
	{
		___respawnPosition_9 = value;
	}

	inline static int32_t get_offset_of_theLevelManager_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___theLevelManager_10)); }
	inline LevelManager_t2278695849 * get_theLevelManager_10() const { return ___theLevelManager_10; }
	inline LevelManager_t2278695849 ** get_address_of_theLevelManager_10() { return &___theLevelManager_10; }
	inline void set_theLevelManager_10(LevelManager_t2278695849 * value)
	{
		___theLevelManager_10 = value;
		Il2CppCodeGenWriteBarrier(&___theLevelManager_10, value);
	}

	inline static int32_t get_offset_of_hurtSound_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___hurtSound_11)); }
	inline AudioSource_t1740077639 * get_hurtSound_11() const { return ___hurtSound_11; }
	inline AudioSource_t1740077639 ** get_address_of_hurtSound_11() { return &___hurtSound_11; }
	inline void set_hurtSound_11(AudioSource_t1740077639 * value)
	{
		___hurtSound_11 = value;
		Il2CppCodeGenWriteBarrier(&___hurtSound_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
