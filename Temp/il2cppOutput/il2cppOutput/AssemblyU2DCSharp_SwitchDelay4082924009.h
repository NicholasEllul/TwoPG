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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SwitchDelay
struct  SwitchDelay_t4082924009  : public MonoBehaviour_t1158329972
{
public:
	// System.String SwitchDelay::sceneName
	String_t* ___sceneName_2;
	// System.Single SwitchDelay::timeToWait
	float ___timeToWait_3;

public:
	inline static int32_t get_offset_of_sceneName_2() { return static_cast<int32_t>(offsetof(SwitchDelay_t4082924009, ___sceneName_2)); }
	inline String_t* get_sceneName_2() const { return ___sceneName_2; }
	inline String_t** get_address_of_sceneName_2() { return &___sceneName_2; }
	inline void set_sceneName_2(String_t* value)
	{
		___sceneName_2 = value;
		Il2CppCodeGenWriteBarrier(&___sceneName_2, value);
	}

	inline static int32_t get_offset_of_timeToWait_3() { return static_cast<int32_t>(offsetof(SwitchDelay_t4082924009, ___timeToWait_3)); }
	inline float get_timeToWait_3() const { return ___timeToWait_3; }
	inline float* get_address_of_timeToWait_3() { return &___timeToWait_3; }
	inline void set_timeToWait_3(float value)
	{
		___timeToWait_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
