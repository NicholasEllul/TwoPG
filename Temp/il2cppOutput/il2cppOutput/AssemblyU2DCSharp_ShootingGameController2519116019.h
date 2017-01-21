#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Object
struct Object_t1021602117;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ShootingGameController_STARTINGD2891301137.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShootingGameController
struct  ShootingGameController_t2519116019  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform ShootingGameController::location
	Transform_t3275118058 * ___location_2;
	// System.Single ShootingGameController::movementSpeed
	float ___movementSpeed_3;
	// System.Int32 ShootingGameController::limitUpper
	int32_t ___limitUpper_4;
	// System.Int32 ShootingGameController::limitLower
	int32_t ___limitLower_5;
	// ShootingGameController/STARTINGDIRECTION ShootingGameController::start
	int32_t ___start_6;
	// UnityEngine.AudioClip ShootingGameController::replenish
	AudioClip_t1932558630 * ___replenish_9;
	// UnityEngine.AudioSource ShootingGameController::audioPlayer
	AudioSource_t1135106623 * ___audioPlayer_10;
	// System.Int32 ShootingGameController::numberOfBlockers
	int32_t ___numberOfBlockers_12;
	// UnityEngine.Object ShootingGameController::blockerPrefab
	Object_t1021602117 * ___blockerPrefab_13;

public:
	inline static int32_t get_offset_of_location_2() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019, ___location_2)); }
	inline Transform_t3275118058 * get_location_2() const { return ___location_2; }
	inline Transform_t3275118058 ** get_address_of_location_2() { return &___location_2; }
	inline void set_location_2(Transform_t3275118058 * value)
	{
		___location_2 = value;
		Il2CppCodeGenWriteBarrier(&___location_2, value);
	}

	inline static int32_t get_offset_of_movementSpeed_3() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019, ___movementSpeed_3)); }
	inline float get_movementSpeed_3() const { return ___movementSpeed_3; }
	inline float* get_address_of_movementSpeed_3() { return &___movementSpeed_3; }
	inline void set_movementSpeed_3(float value)
	{
		___movementSpeed_3 = value;
	}

	inline static int32_t get_offset_of_limitUpper_4() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019, ___limitUpper_4)); }
	inline int32_t get_limitUpper_4() const { return ___limitUpper_4; }
	inline int32_t* get_address_of_limitUpper_4() { return &___limitUpper_4; }
	inline void set_limitUpper_4(int32_t value)
	{
		___limitUpper_4 = value;
	}

	inline static int32_t get_offset_of_limitLower_5() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019, ___limitLower_5)); }
	inline int32_t get_limitLower_5() const { return ___limitLower_5; }
	inline int32_t* get_address_of_limitLower_5() { return &___limitLower_5; }
	inline void set_limitLower_5(int32_t value)
	{
		___limitLower_5 = value;
	}

	inline static int32_t get_offset_of_start_6() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019, ___start_6)); }
	inline int32_t get_start_6() const { return ___start_6; }
	inline int32_t* get_address_of_start_6() { return &___start_6; }
	inline void set_start_6(int32_t value)
	{
		___start_6 = value;
	}

	inline static int32_t get_offset_of_replenish_9() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019, ___replenish_9)); }
	inline AudioClip_t1932558630 * get_replenish_9() const { return ___replenish_9; }
	inline AudioClip_t1932558630 ** get_address_of_replenish_9() { return &___replenish_9; }
	inline void set_replenish_9(AudioClip_t1932558630 * value)
	{
		___replenish_9 = value;
		Il2CppCodeGenWriteBarrier(&___replenish_9, value);
	}

	inline static int32_t get_offset_of_audioPlayer_10() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019, ___audioPlayer_10)); }
	inline AudioSource_t1135106623 * get_audioPlayer_10() const { return ___audioPlayer_10; }
	inline AudioSource_t1135106623 ** get_address_of_audioPlayer_10() { return &___audioPlayer_10; }
	inline void set_audioPlayer_10(AudioSource_t1135106623 * value)
	{
		___audioPlayer_10 = value;
		Il2CppCodeGenWriteBarrier(&___audioPlayer_10, value);
	}

	inline static int32_t get_offset_of_numberOfBlockers_12() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019, ___numberOfBlockers_12)); }
	inline int32_t get_numberOfBlockers_12() const { return ___numberOfBlockers_12; }
	inline int32_t* get_address_of_numberOfBlockers_12() { return &___numberOfBlockers_12; }
	inline void set_numberOfBlockers_12(int32_t value)
	{
		___numberOfBlockers_12 = value;
	}

	inline static int32_t get_offset_of_blockerPrefab_13() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019, ___blockerPrefab_13)); }
	inline Object_t1021602117 * get_blockerPrefab_13() const { return ___blockerPrefab_13; }
	inline Object_t1021602117 ** get_address_of_blockerPrefab_13() { return &___blockerPrefab_13; }
	inline void set_blockerPrefab_13(Object_t1021602117 * value)
	{
		___blockerPrefab_13 = value;
		Il2CppCodeGenWriteBarrier(&___blockerPrefab_13, value);
	}
};

struct ShootingGameController_t2519116019_StaticFields
{
public:
	// System.Int32 ShootingGameController::redAmmo
	int32_t ___redAmmo_7;
	// System.Int32 ShootingGameController::blueAmmo
	int32_t ___blueAmmo_8;
	// System.Boolean ShootingGameController::refilling
	bool ___refilling_11;

public:
	inline static int32_t get_offset_of_redAmmo_7() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019_StaticFields, ___redAmmo_7)); }
	inline int32_t get_redAmmo_7() const { return ___redAmmo_7; }
	inline int32_t* get_address_of_redAmmo_7() { return &___redAmmo_7; }
	inline void set_redAmmo_7(int32_t value)
	{
		___redAmmo_7 = value;
	}

	inline static int32_t get_offset_of_blueAmmo_8() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019_StaticFields, ___blueAmmo_8)); }
	inline int32_t get_blueAmmo_8() const { return ___blueAmmo_8; }
	inline int32_t* get_address_of_blueAmmo_8() { return &___blueAmmo_8; }
	inline void set_blueAmmo_8(int32_t value)
	{
		___blueAmmo_8 = value;
	}

	inline static int32_t get_offset_of_refilling_11() { return static_cast<int32_t>(offsetof(ShootingGameController_t2519116019_StaticFields, ___refilling_11)); }
	inline bool get_refilling_11() const { return ___refilling_11; }
	inline bool* get_address_of_refilling_11() { return &___refilling_11; }
	inline void set_refilling_11(bool value)
	{
		___refilling_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
