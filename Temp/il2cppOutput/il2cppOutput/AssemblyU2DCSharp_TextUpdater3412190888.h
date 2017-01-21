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
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_TextUpdater_TEAM3238627160.h"
#include "AssemblyU2DCSharp_TextUpdater_GAME3803277653.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextUpdater
struct  TextUpdater_t3412190888  : public MonoBehaviour_t1158329972
{
public:
	// TextUpdater/TEAM TextUpdater::colour
	int32_t ___colour_2;
	// System.Single TextUpdater::seconds
	float ___seconds_3;
	// TextUpdater/GAME TextUpdater::currentGame
	int32_t ___currentGame_6;
	// System.String TextUpdater::lastScene
	String_t* ___lastScene_7;
	// UnityEngine.UI.Text TextUpdater::_score
	Text_t356221433 * ____score_8;

public:
	inline static int32_t get_offset_of_colour_2() { return static_cast<int32_t>(offsetof(TextUpdater_t3412190888, ___colour_2)); }
	inline int32_t get_colour_2() const { return ___colour_2; }
	inline int32_t* get_address_of_colour_2() { return &___colour_2; }
	inline void set_colour_2(int32_t value)
	{
		___colour_2 = value;
	}

	inline static int32_t get_offset_of_seconds_3() { return static_cast<int32_t>(offsetof(TextUpdater_t3412190888, ___seconds_3)); }
	inline float get_seconds_3() const { return ___seconds_3; }
	inline float* get_address_of_seconds_3() { return &___seconds_3; }
	inline void set_seconds_3(float value)
	{
		___seconds_3 = value;
	}

	inline static int32_t get_offset_of_currentGame_6() { return static_cast<int32_t>(offsetof(TextUpdater_t3412190888, ___currentGame_6)); }
	inline int32_t get_currentGame_6() const { return ___currentGame_6; }
	inline int32_t* get_address_of_currentGame_6() { return &___currentGame_6; }
	inline void set_currentGame_6(int32_t value)
	{
		___currentGame_6 = value;
	}

	inline static int32_t get_offset_of_lastScene_7() { return static_cast<int32_t>(offsetof(TextUpdater_t3412190888, ___lastScene_7)); }
	inline String_t* get_lastScene_7() const { return ___lastScene_7; }
	inline String_t** get_address_of_lastScene_7() { return &___lastScene_7; }
	inline void set_lastScene_7(String_t* value)
	{
		___lastScene_7 = value;
		Il2CppCodeGenWriteBarrier(&___lastScene_7, value);
	}

	inline static int32_t get_offset_of__score_8() { return static_cast<int32_t>(offsetof(TextUpdater_t3412190888, ____score_8)); }
	inline Text_t356221433 * get__score_8() const { return ____score_8; }
	inline Text_t356221433 ** get_address_of__score_8() { return &____score_8; }
	inline void set__score_8(Text_t356221433 * value)
	{
		____score_8 = value;
		Il2CppCodeGenWriteBarrier(&____score_8, value);
	}
};

struct TextUpdater_t3412190888_StaticFields
{
public:
	// System.Int32 TextUpdater::blueScore
	int32_t ___blueScore_4;
	// System.Int32 TextUpdater::redScore
	int32_t ___redScore_5;

public:
	inline static int32_t get_offset_of_blueScore_4() { return static_cast<int32_t>(offsetof(TextUpdater_t3412190888_StaticFields, ___blueScore_4)); }
	inline int32_t get_blueScore_4() const { return ___blueScore_4; }
	inline int32_t* get_address_of_blueScore_4() { return &___blueScore_4; }
	inline void set_blueScore_4(int32_t value)
	{
		___blueScore_4 = value;
	}

	inline static int32_t get_offset_of_redScore_5() { return static_cast<int32_t>(offsetof(TextUpdater_t3412190888_StaticFields, ___redScore_5)); }
	inline int32_t get_redScore_5() const { return ___redScore_5; }
	inline int32_t* get_address_of_redScore_5() { return &___redScore_5; }
	inline void set_redScore_5(int32_t value)
	{
		___redScore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
