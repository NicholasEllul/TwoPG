#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Winner
struct  Winner_t1142938707  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.SpriteRenderer Winner::_mySpriteRenderer
	SpriteRenderer_t1209076198 * ____mySpriteRenderer_2;

public:
	inline static int32_t get_offset_of__mySpriteRenderer_2() { return static_cast<int32_t>(offsetof(Winner_t1142938707, ____mySpriteRenderer_2)); }
	inline SpriteRenderer_t1209076198 * get__mySpriteRenderer_2() const { return ____mySpriteRenderer_2; }
	inline SpriteRenderer_t1209076198 ** get_address_of__mySpriteRenderer_2() { return &____mySpriteRenderer_2; }
	inline void set__mySpriteRenderer_2(SpriteRenderer_t1209076198 * value)
	{
		____mySpriteRenderer_2 = value;
		Il2CppCodeGenWriteBarrier(&____mySpriteRenderer_2, value);
	}
};

struct Winner_t1142938707_StaticFields
{
public:
	// System.String Winner::lastScene
	String_t* ___lastScene_3;

public:
	inline static int32_t get_offset_of_lastScene_3() { return static_cast<int32_t>(offsetof(Winner_t1142938707_StaticFields, ___lastScene_3)); }
	inline String_t* get_lastScene_3() const { return ___lastScene_3; }
	inline String_t** get_address_of_lastScene_3() { return &___lastScene_3; }
	inline void set_lastScene_3(String_t* value)
	{
		___lastScene_3 = value;
		Il2CppCodeGenWriteBarrier(&___lastScene_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
