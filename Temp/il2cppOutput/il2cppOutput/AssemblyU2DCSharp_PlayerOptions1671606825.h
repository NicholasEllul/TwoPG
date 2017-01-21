#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_PlayerOptions_INFO639085482.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerOptions
struct  PlayerOptions_t1671606825  : public MonoBehaviour_t1158329972
{
public:
	// PlayerOptions/INFO PlayerOptions::identity
	int32_t ___identity_2;
	// UnityEngine.UI.Text PlayerOptions::_infoText
	Text_t356221433 * ____infoText_6;
	// System.String PlayerOptions::_myName
	String_t* ____myName_7;

public:
	inline static int32_t get_offset_of_identity_2() { return static_cast<int32_t>(offsetof(PlayerOptions_t1671606825, ___identity_2)); }
	inline int32_t get_identity_2() const { return ___identity_2; }
	inline int32_t* get_address_of_identity_2() { return &___identity_2; }
	inline void set_identity_2(int32_t value)
	{
		___identity_2 = value;
	}

	inline static int32_t get_offset_of__infoText_6() { return static_cast<int32_t>(offsetof(PlayerOptions_t1671606825, ____infoText_6)); }
	inline Text_t356221433 * get__infoText_6() const { return ____infoText_6; }
	inline Text_t356221433 ** get_address_of__infoText_6() { return &____infoText_6; }
	inline void set__infoText_6(Text_t356221433 * value)
	{
		____infoText_6 = value;
		Il2CppCodeGenWriteBarrier(&____infoText_6, value);
	}

	inline static int32_t get_offset_of__myName_7() { return static_cast<int32_t>(offsetof(PlayerOptions_t1671606825, ____myName_7)); }
	inline String_t* get__myName_7() const { return ____myName_7; }
	inline String_t** get_address_of__myName_7() { return &____myName_7; }
	inline void set__myName_7(String_t* value)
	{
		____myName_7 = value;
		Il2CppCodeGenWriteBarrier(&____myName_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
