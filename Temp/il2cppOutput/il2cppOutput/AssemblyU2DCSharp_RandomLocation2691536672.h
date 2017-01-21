#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Random
struct Random_t1170710517;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomLocation
struct  RandomLocation_t2691536672  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform RandomLocation::myTransform
	Transform_t3275118058 * ___myTransform_3;
	// UnityEngine.Vector3 RandomLocation::location
	Vector3_t2243707580  ___location_4;
	// System.Single RandomLocation::myX
	float ___myX_5;
	// System.Single RandomLocation::myY
	float ___myY_6;

public:
	inline static int32_t get_offset_of_myTransform_3() { return static_cast<int32_t>(offsetof(RandomLocation_t2691536672, ___myTransform_3)); }
	inline Transform_t3275118058 * get_myTransform_3() const { return ___myTransform_3; }
	inline Transform_t3275118058 ** get_address_of_myTransform_3() { return &___myTransform_3; }
	inline void set_myTransform_3(Transform_t3275118058 * value)
	{
		___myTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___myTransform_3, value);
	}

	inline static int32_t get_offset_of_location_4() { return static_cast<int32_t>(offsetof(RandomLocation_t2691536672, ___location_4)); }
	inline Vector3_t2243707580  get_location_4() const { return ___location_4; }
	inline Vector3_t2243707580 * get_address_of_location_4() { return &___location_4; }
	inline void set_location_4(Vector3_t2243707580  value)
	{
		___location_4 = value;
	}

	inline static int32_t get_offset_of_myX_5() { return static_cast<int32_t>(offsetof(RandomLocation_t2691536672, ___myX_5)); }
	inline float get_myX_5() const { return ___myX_5; }
	inline float* get_address_of_myX_5() { return &___myX_5; }
	inline void set_myX_5(float value)
	{
		___myX_5 = value;
	}

	inline static int32_t get_offset_of_myY_6() { return static_cast<int32_t>(offsetof(RandomLocation_t2691536672, ___myY_6)); }
	inline float get_myY_6() const { return ___myY_6; }
	inline float* get_address_of_myY_6() { return &___myY_6; }
	inline void set_myY_6(float value)
	{
		___myY_6 = value;
	}
};

struct RandomLocation_t2691536672_StaticFields
{
public:
	// UnityEngine.Random RandomLocation::rng
	Random_t1170710517 * ___rng_2;

public:
	inline static int32_t get_offset_of_rng_2() { return static_cast<int32_t>(offsetof(RandomLocation_t2691536672_StaticFields, ___rng_2)); }
	inline Random_t1170710517 * get_rng_2() const { return ___rng_2; }
	inline Random_t1170710517 ** get_address_of_rng_2() { return &___rng_2; }
	inline void set_rng_2(Random_t1170710517 * value)
	{
		___rng_2 = value;
		Il2CppCodeGenWriteBarrier(&___rng_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
