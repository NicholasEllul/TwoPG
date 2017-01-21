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

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ScoreUpdater_TEAM1011447527.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreUpdater
struct  ScoreUpdater_t355582433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text ScoreUpdater::_score
	Text_t356221433 * ____score_4;
	// ScoreUpdater/TEAM ScoreUpdater::colour
	int32_t ___colour_5;

public:
	inline static int32_t get_offset_of__score_4() { return static_cast<int32_t>(offsetof(ScoreUpdater_t355582433, ____score_4)); }
	inline Text_t356221433 * get__score_4() const { return ____score_4; }
	inline Text_t356221433 ** get_address_of__score_4() { return &____score_4; }
	inline void set__score_4(Text_t356221433 * value)
	{
		____score_4 = value;
		Il2CppCodeGenWriteBarrier(&____score_4, value);
	}

	inline static int32_t get_offset_of_colour_5() { return static_cast<int32_t>(offsetof(ScoreUpdater_t355582433, ___colour_5)); }
	inline int32_t get_colour_5() const { return ___colour_5; }
	inline int32_t* get_address_of_colour_5() { return &___colour_5; }
	inline void set_colour_5(int32_t value)
	{
		___colour_5 = value;
	}
};

struct ScoreUpdater_t355582433_StaticFields
{
public:
	// System.Int32 ScoreUpdater::blueScore
	int32_t ___blueScore_2;
	// System.Int32 ScoreUpdater::redScore
	int32_t ___redScore_3;

public:
	inline static int32_t get_offset_of_blueScore_2() { return static_cast<int32_t>(offsetof(ScoreUpdater_t355582433_StaticFields, ___blueScore_2)); }
	inline int32_t get_blueScore_2() const { return ___blueScore_2; }
	inline int32_t* get_address_of_blueScore_2() { return &___blueScore_2; }
	inline void set_blueScore_2(int32_t value)
	{
		___blueScore_2 = value;
	}

	inline static int32_t get_offset_of_redScore_3() { return static_cast<int32_t>(offsetof(ScoreUpdater_t355582433_StaticFields, ___redScore_3)); }
	inline int32_t get_redScore_3() const { return ___redScore_3; }
	inline int32_t* get_address_of_redScore_3() { return &___redScore_3; }
	inline void set_redScore_3(int32_t value)
	{
		___redScore_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
