#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenuController
struct  MainMenuController_t2486335374  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MainMenuController::timeToWait
	float ___timeToWait_3;
	// UnityEngine.AudioClip MainMenuController::soundToPlay
	AudioClip_t1932558630 * ___soundToPlay_4;
	// UnityEngine.GameObject MainMenuController::objToShow
	GameObject_t1756533147 * ___objToShow_5;
	// UnityEngine.GameObject MainMenuController::objToHide
	GameObject_t1756533147 * ___objToHide_6;
	// System.Single MainMenuController::volume
	float ___volume_7;
	// UnityEngine.AudioSource MainMenuController::_soundEffect
	AudioSource_t1135106623 * ____soundEffect_8;

public:
	inline static int32_t get_offset_of_timeToWait_3() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___timeToWait_3)); }
	inline float get_timeToWait_3() const { return ___timeToWait_3; }
	inline float* get_address_of_timeToWait_3() { return &___timeToWait_3; }
	inline void set_timeToWait_3(float value)
	{
		___timeToWait_3 = value;
	}

	inline static int32_t get_offset_of_soundToPlay_4() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___soundToPlay_4)); }
	inline AudioClip_t1932558630 * get_soundToPlay_4() const { return ___soundToPlay_4; }
	inline AudioClip_t1932558630 ** get_address_of_soundToPlay_4() { return &___soundToPlay_4; }
	inline void set_soundToPlay_4(AudioClip_t1932558630 * value)
	{
		___soundToPlay_4 = value;
		Il2CppCodeGenWriteBarrier(&___soundToPlay_4, value);
	}

	inline static int32_t get_offset_of_objToShow_5() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___objToShow_5)); }
	inline GameObject_t1756533147 * get_objToShow_5() const { return ___objToShow_5; }
	inline GameObject_t1756533147 ** get_address_of_objToShow_5() { return &___objToShow_5; }
	inline void set_objToShow_5(GameObject_t1756533147 * value)
	{
		___objToShow_5 = value;
		Il2CppCodeGenWriteBarrier(&___objToShow_5, value);
	}

	inline static int32_t get_offset_of_objToHide_6() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___objToHide_6)); }
	inline GameObject_t1756533147 * get_objToHide_6() const { return ___objToHide_6; }
	inline GameObject_t1756533147 ** get_address_of_objToHide_6() { return &___objToHide_6; }
	inline void set_objToHide_6(GameObject_t1756533147 * value)
	{
		___objToHide_6 = value;
		Il2CppCodeGenWriteBarrier(&___objToHide_6, value);
	}

	inline static int32_t get_offset_of_volume_7() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ___volume_7)); }
	inline float get_volume_7() const { return ___volume_7; }
	inline float* get_address_of_volume_7() { return &___volume_7; }
	inline void set_volume_7(float value)
	{
		___volume_7 = value;
	}

	inline static int32_t get_offset_of__soundEffect_8() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374, ____soundEffect_8)); }
	inline AudioSource_t1135106623 * get__soundEffect_8() const { return ____soundEffect_8; }
	inline AudioSource_t1135106623 ** get_address_of__soundEffect_8() { return &____soundEffect_8; }
	inline void set__soundEffect_8(AudioSource_t1135106623 * value)
	{
		____soundEffect_8 = value;
		Il2CppCodeGenWriteBarrier(&____soundEffect_8, value);
	}
};

struct MainMenuController_t2486335374_StaticFields
{
public:
	// System.Boolean MainMenuController::hidden
	bool ___hidden_2;

public:
	inline static int32_t get_offset_of_hidden_2() { return static_cast<int32_t>(offsetof(MainMenuController_t2486335374_StaticFields, ___hidden_2)); }
	inline bool get_hidden_2() const { return ___hidden_2; }
	inline bool* get_address_of_hidden_2() { return &___hidden_2; }
	inline void set_hidden_2(bool value)
	{
		___hidden_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
