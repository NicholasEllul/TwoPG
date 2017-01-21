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

// GameInfoController
struct  GameInfoController_t2956698770  : public MonoBehaviour_t1158329972
{
public:
	// System.String GameInfoController::objName
	String_t* ___objName_2;

public:
	inline static int32_t get_offset_of_objName_2() { return static_cast<int32_t>(offsetof(GameInfoController_t2956698770, ___objName_2)); }
	inline String_t* get_objName_2() const { return ___objName_2; }
	inline String_t** get_address_of_objName_2() { return &___objName_2; }
	inline void set_objName_2(String_t* value)
	{
		___objName_2 = value;
		Il2CppCodeGenWriteBarrier(&___objName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
