#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerController
struct PlayerController_t2866526589;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.UI.Text
struct Text_t9039225;
// UnityEngine.UI.Image
struct Image_t538875265;
// UnityEngine.Sprite
struct Sprite_t3199167241;
// ResetOnRespawn[]
struct ResetOnRespawnU5BU5D_t1002198399;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// LevelManager
struct  LevelManager_t2278695849  : public MonoBehaviour_t667441552
{
public:
	// System.Single LevelManager::waitToRespawn
	float ___waitToRespawn_2;
	// PlayerController LevelManager::thePlayer
	PlayerController_t2866526589 * ___thePlayer_3;
	// UnityEngine.GameObject LevelManager::deathSplosion
	GameObject_t3674682005 * ___deathSplosion_4;
	// System.Int32 LevelManager::coinCount
	int32_t ___coinCount_5;
	// UnityEngine.AudioSource LevelManager::coinSound
	AudioSource_t1740077639 * ___coinSound_6;
	// UnityEngine.UI.Text LevelManager::coinText
	Text_t9039225 * ___coinText_7;
	// System.Int32 LevelManager::currentCoins
	int32_t ___currentCoins_8;
	// UnityEngine.UI.Image LevelManager::heart1
	Image_t538875265 * ___heart1_9;
	// UnityEngine.UI.Image LevelManager::heart2
	Image_t538875265 * ___heart2_10;
	// UnityEngine.UI.Image LevelManager::heart3
	Image_t538875265 * ___heart3_11;
	// UnityEngine.Sprite LevelManager::heartFull
	Sprite_t3199167241 * ___heartFull_12;
	// UnityEngine.Sprite LevelManager::heartHalf
	Sprite_t3199167241 * ___heartHalf_13;
	// UnityEngine.Sprite LevelManager::heartEmpty
	Sprite_t3199167241 * ___heartEmpty_14;
	// System.Int32 LevelManager::maxHealth
	int32_t ___maxHealth_15;
	// System.Int32 LevelManager::healthCount
	int32_t ___healthCount_16;
	// System.Boolean LevelManager::respawning
	bool ___respawning_17;
	// ResetOnRespawn[] LevelManager::objectsToReset
	ResetOnRespawnU5BU5D_t1002198399* ___objectsToReset_18;
	// UnityEngine.GameObject LevelManager::gameOverScreen
	GameObject_t3674682005 * ___gameOverScreen_19;
	// UnityEngine.GameObject LevelManager::victoryScreen
	GameObject_t3674682005 * ___victoryScreen_20;
	// UnityEngine.UI.Text LevelManager::livesText
	Text_t9039225 * ___livesText_21;
	// System.Int32 LevelManager::startingLives
	int32_t ___startingLives_22;
	// System.Int32 LevelManager::currentLives
	int32_t ___currentLives_23;
	// UnityEngine.AudioSource LevelManager::levelMusic
	AudioSource_t1740077639 * ___levelMusic_24;
	// UnityEngine.AudioSource LevelManager::gameOverMusic
	AudioSource_t1740077639 * ___gameOverMusic_25;
	// UnityEngine.AudioSource LevelManager::levelVictoryMusic
	AudioSource_t1740077639 * ___levelVictoryMusic_26;

public:
	inline static int32_t get_offset_of_waitToRespawn_2() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___waitToRespawn_2)); }
	inline float get_waitToRespawn_2() const { return ___waitToRespawn_2; }
	inline float* get_address_of_waitToRespawn_2() { return &___waitToRespawn_2; }
	inline void set_waitToRespawn_2(float value)
	{
		___waitToRespawn_2 = value;
	}

	inline static int32_t get_offset_of_thePlayer_3() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___thePlayer_3)); }
	inline PlayerController_t2866526589 * get_thePlayer_3() const { return ___thePlayer_3; }
	inline PlayerController_t2866526589 ** get_address_of_thePlayer_3() { return &___thePlayer_3; }
	inline void set_thePlayer_3(PlayerController_t2866526589 * value)
	{
		___thePlayer_3 = value;
		Il2CppCodeGenWriteBarrier(&___thePlayer_3, value);
	}

	inline static int32_t get_offset_of_deathSplosion_4() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___deathSplosion_4)); }
	inline GameObject_t3674682005 * get_deathSplosion_4() const { return ___deathSplosion_4; }
	inline GameObject_t3674682005 ** get_address_of_deathSplosion_4() { return &___deathSplosion_4; }
	inline void set_deathSplosion_4(GameObject_t3674682005 * value)
	{
		___deathSplosion_4 = value;
		Il2CppCodeGenWriteBarrier(&___deathSplosion_4, value);
	}

	inline static int32_t get_offset_of_coinCount_5() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___coinCount_5)); }
	inline int32_t get_coinCount_5() const { return ___coinCount_5; }
	inline int32_t* get_address_of_coinCount_5() { return &___coinCount_5; }
	inline void set_coinCount_5(int32_t value)
	{
		___coinCount_5 = value;
	}

	inline static int32_t get_offset_of_coinSound_6() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___coinSound_6)); }
	inline AudioSource_t1740077639 * get_coinSound_6() const { return ___coinSound_6; }
	inline AudioSource_t1740077639 ** get_address_of_coinSound_6() { return &___coinSound_6; }
	inline void set_coinSound_6(AudioSource_t1740077639 * value)
	{
		___coinSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___coinSound_6, value);
	}

	inline static int32_t get_offset_of_coinText_7() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___coinText_7)); }
	inline Text_t9039225 * get_coinText_7() const { return ___coinText_7; }
	inline Text_t9039225 ** get_address_of_coinText_7() { return &___coinText_7; }
	inline void set_coinText_7(Text_t9039225 * value)
	{
		___coinText_7 = value;
		Il2CppCodeGenWriteBarrier(&___coinText_7, value);
	}

	inline static int32_t get_offset_of_currentCoins_8() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___currentCoins_8)); }
	inline int32_t get_currentCoins_8() const { return ___currentCoins_8; }
	inline int32_t* get_address_of_currentCoins_8() { return &___currentCoins_8; }
	inline void set_currentCoins_8(int32_t value)
	{
		___currentCoins_8 = value;
	}

	inline static int32_t get_offset_of_heart1_9() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___heart1_9)); }
	inline Image_t538875265 * get_heart1_9() const { return ___heart1_9; }
	inline Image_t538875265 ** get_address_of_heart1_9() { return &___heart1_9; }
	inline void set_heart1_9(Image_t538875265 * value)
	{
		___heart1_9 = value;
		Il2CppCodeGenWriteBarrier(&___heart1_9, value);
	}

	inline static int32_t get_offset_of_heart2_10() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___heart2_10)); }
	inline Image_t538875265 * get_heart2_10() const { return ___heart2_10; }
	inline Image_t538875265 ** get_address_of_heart2_10() { return &___heart2_10; }
	inline void set_heart2_10(Image_t538875265 * value)
	{
		___heart2_10 = value;
		Il2CppCodeGenWriteBarrier(&___heart2_10, value);
	}

	inline static int32_t get_offset_of_heart3_11() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___heart3_11)); }
	inline Image_t538875265 * get_heart3_11() const { return ___heart3_11; }
	inline Image_t538875265 ** get_address_of_heart3_11() { return &___heart3_11; }
	inline void set_heart3_11(Image_t538875265 * value)
	{
		___heart3_11 = value;
		Il2CppCodeGenWriteBarrier(&___heart3_11, value);
	}

	inline static int32_t get_offset_of_heartFull_12() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___heartFull_12)); }
	inline Sprite_t3199167241 * get_heartFull_12() const { return ___heartFull_12; }
	inline Sprite_t3199167241 ** get_address_of_heartFull_12() { return &___heartFull_12; }
	inline void set_heartFull_12(Sprite_t3199167241 * value)
	{
		___heartFull_12 = value;
		Il2CppCodeGenWriteBarrier(&___heartFull_12, value);
	}

	inline static int32_t get_offset_of_heartHalf_13() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___heartHalf_13)); }
	inline Sprite_t3199167241 * get_heartHalf_13() const { return ___heartHalf_13; }
	inline Sprite_t3199167241 ** get_address_of_heartHalf_13() { return &___heartHalf_13; }
	inline void set_heartHalf_13(Sprite_t3199167241 * value)
	{
		___heartHalf_13 = value;
		Il2CppCodeGenWriteBarrier(&___heartHalf_13, value);
	}

	inline static int32_t get_offset_of_heartEmpty_14() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___heartEmpty_14)); }
	inline Sprite_t3199167241 * get_heartEmpty_14() const { return ___heartEmpty_14; }
	inline Sprite_t3199167241 ** get_address_of_heartEmpty_14() { return &___heartEmpty_14; }
	inline void set_heartEmpty_14(Sprite_t3199167241 * value)
	{
		___heartEmpty_14 = value;
		Il2CppCodeGenWriteBarrier(&___heartEmpty_14, value);
	}

	inline static int32_t get_offset_of_maxHealth_15() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___maxHealth_15)); }
	inline int32_t get_maxHealth_15() const { return ___maxHealth_15; }
	inline int32_t* get_address_of_maxHealth_15() { return &___maxHealth_15; }
	inline void set_maxHealth_15(int32_t value)
	{
		___maxHealth_15 = value;
	}

	inline static int32_t get_offset_of_healthCount_16() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___healthCount_16)); }
	inline int32_t get_healthCount_16() const { return ___healthCount_16; }
	inline int32_t* get_address_of_healthCount_16() { return &___healthCount_16; }
	inline void set_healthCount_16(int32_t value)
	{
		___healthCount_16 = value;
	}

	inline static int32_t get_offset_of_respawning_17() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___respawning_17)); }
	inline bool get_respawning_17() const { return ___respawning_17; }
	inline bool* get_address_of_respawning_17() { return &___respawning_17; }
	inline void set_respawning_17(bool value)
	{
		___respawning_17 = value;
	}

	inline static int32_t get_offset_of_objectsToReset_18() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___objectsToReset_18)); }
	inline ResetOnRespawnU5BU5D_t1002198399* get_objectsToReset_18() const { return ___objectsToReset_18; }
	inline ResetOnRespawnU5BU5D_t1002198399** get_address_of_objectsToReset_18() { return &___objectsToReset_18; }
	inline void set_objectsToReset_18(ResetOnRespawnU5BU5D_t1002198399* value)
	{
		___objectsToReset_18 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToReset_18, value);
	}

	inline static int32_t get_offset_of_gameOverScreen_19() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___gameOverScreen_19)); }
	inline GameObject_t3674682005 * get_gameOverScreen_19() const { return ___gameOverScreen_19; }
	inline GameObject_t3674682005 ** get_address_of_gameOverScreen_19() { return &___gameOverScreen_19; }
	inline void set_gameOverScreen_19(GameObject_t3674682005 * value)
	{
		___gameOverScreen_19 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverScreen_19, value);
	}

	inline static int32_t get_offset_of_victoryScreen_20() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___victoryScreen_20)); }
	inline GameObject_t3674682005 * get_victoryScreen_20() const { return ___victoryScreen_20; }
	inline GameObject_t3674682005 ** get_address_of_victoryScreen_20() { return &___victoryScreen_20; }
	inline void set_victoryScreen_20(GameObject_t3674682005 * value)
	{
		___victoryScreen_20 = value;
		Il2CppCodeGenWriteBarrier(&___victoryScreen_20, value);
	}

	inline static int32_t get_offset_of_livesText_21() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___livesText_21)); }
	inline Text_t9039225 * get_livesText_21() const { return ___livesText_21; }
	inline Text_t9039225 ** get_address_of_livesText_21() { return &___livesText_21; }
	inline void set_livesText_21(Text_t9039225 * value)
	{
		___livesText_21 = value;
		Il2CppCodeGenWriteBarrier(&___livesText_21, value);
	}

	inline static int32_t get_offset_of_startingLives_22() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___startingLives_22)); }
	inline int32_t get_startingLives_22() const { return ___startingLives_22; }
	inline int32_t* get_address_of_startingLives_22() { return &___startingLives_22; }
	inline void set_startingLives_22(int32_t value)
	{
		___startingLives_22 = value;
	}

	inline static int32_t get_offset_of_currentLives_23() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___currentLives_23)); }
	inline int32_t get_currentLives_23() const { return ___currentLives_23; }
	inline int32_t* get_address_of_currentLives_23() { return &___currentLives_23; }
	inline void set_currentLives_23(int32_t value)
	{
		___currentLives_23 = value;
	}

	inline static int32_t get_offset_of_levelMusic_24() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___levelMusic_24)); }
	inline AudioSource_t1740077639 * get_levelMusic_24() const { return ___levelMusic_24; }
	inline AudioSource_t1740077639 ** get_address_of_levelMusic_24() { return &___levelMusic_24; }
	inline void set_levelMusic_24(AudioSource_t1740077639 * value)
	{
		___levelMusic_24 = value;
		Il2CppCodeGenWriteBarrier(&___levelMusic_24, value);
	}

	inline static int32_t get_offset_of_gameOverMusic_25() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___gameOverMusic_25)); }
	inline AudioSource_t1740077639 * get_gameOverMusic_25() const { return ___gameOverMusic_25; }
	inline AudioSource_t1740077639 ** get_address_of_gameOverMusic_25() { return &___gameOverMusic_25; }
	inline void set_gameOverMusic_25(AudioSource_t1740077639 * value)
	{
		___gameOverMusic_25 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverMusic_25, value);
	}

	inline static int32_t get_offset_of_levelVictoryMusic_26() { return static_cast<int32_t>(offsetof(LevelManager_t2278695849, ___levelVictoryMusic_26)); }
	inline AudioSource_t1740077639 * get_levelVictoryMusic_26() const { return ___levelVictoryMusic_26; }
	inline AudioSource_t1740077639 ** get_address_of_levelVictoryMusic_26() { return &___levelVictoryMusic_26; }
	inline void set_levelVictoryMusic_26(AudioSource_t1740077639 * value)
	{
		___levelVictoryMusic_26 = value;
		Il2CppCodeGenWriteBarrier(&___levelVictoryMusic_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
