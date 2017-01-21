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
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_Rotate_DIRECTION3717782373.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Rotate
struct  Rotate_t4255939431  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Rotate::updateSpeedConstantly
	bool ___updateSpeedConstantly_2;
	// Rotate/DIRECTION Rotate::startDirection
	int32_t ___startDirection_3;
	// UnityEngine.AudioClip Rotate::crash
	AudioClip_t1932558630 * ___crash_4;
	// System.Single Rotate::volume
	float ___volume_5;
	// System.Boolean Rotate::fixedSpeed
	bool ___fixedSpeed_6;
	// System.Int32 Rotate::_rotationCoefficiant
	int32_t ____rotationCoefficiant_7;
	// System.Int32 Rotate::_thrust
	int32_t ____thrust_8;
	// UnityEngine.Rigidbody2D Rotate::rb
	Rigidbody2D_t502193897 * ___rb_9;
	// UnityEngine.AudioSource Rotate::_audi
	AudioSource_t1135106623 * ____audi_10;
	// System.Boolean Rotate::_clicked
	bool ____clicked_11;

public:
	inline static int32_t get_offset_of_updateSpeedConstantly_2() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___updateSpeedConstantly_2)); }
	inline bool get_updateSpeedConstantly_2() const { return ___updateSpeedConstantly_2; }
	inline bool* get_address_of_updateSpeedConstantly_2() { return &___updateSpeedConstantly_2; }
	inline void set_updateSpeedConstantly_2(bool value)
	{
		___updateSpeedConstantly_2 = value;
	}

	inline static int32_t get_offset_of_startDirection_3() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___startDirection_3)); }
	inline int32_t get_startDirection_3() const { return ___startDirection_3; }
	inline int32_t* get_address_of_startDirection_3() { return &___startDirection_3; }
	inline void set_startDirection_3(int32_t value)
	{
		___startDirection_3 = value;
	}

	inline static int32_t get_offset_of_crash_4() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___crash_4)); }
	inline AudioClip_t1932558630 * get_crash_4() const { return ___crash_4; }
	inline AudioClip_t1932558630 ** get_address_of_crash_4() { return &___crash_4; }
	inline void set_crash_4(AudioClip_t1932558630 * value)
	{
		___crash_4 = value;
		Il2CppCodeGenWriteBarrier(&___crash_4, value);
	}

	inline static int32_t get_offset_of_volume_5() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___volume_5)); }
	inline float get_volume_5() const { return ___volume_5; }
	inline float* get_address_of_volume_5() { return &___volume_5; }
	inline void set_volume_5(float value)
	{
		___volume_5 = value;
	}

	inline static int32_t get_offset_of_fixedSpeed_6() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___fixedSpeed_6)); }
	inline bool get_fixedSpeed_6() const { return ___fixedSpeed_6; }
	inline bool* get_address_of_fixedSpeed_6() { return &___fixedSpeed_6; }
	inline void set_fixedSpeed_6(bool value)
	{
		___fixedSpeed_6 = value;
	}

	inline static int32_t get_offset_of__rotationCoefficiant_7() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ____rotationCoefficiant_7)); }
	inline int32_t get__rotationCoefficiant_7() const { return ____rotationCoefficiant_7; }
	inline int32_t* get_address_of__rotationCoefficiant_7() { return &____rotationCoefficiant_7; }
	inline void set__rotationCoefficiant_7(int32_t value)
	{
		____rotationCoefficiant_7 = value;
	}

	inline static int32_t get_offset_of__thrust_8() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ____thrust_8)); }
	inline int32_t get__thrust_8() const { return ____thrust_8; }
	inline int32_t* get_address_of__thrust_8() { return &____thrust_8; }
	inline void set__thrust_8(int32_t value)
	{
		____thrust_8 = value;
	}

	inline static int32_t get_offset_of_rb_9() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ___rb_9)); }
	inline Rigidbody2D_t502193897 * get_rb_9() const { return ___rb_9; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_9() { return &___rb_9; }
	inline void set_rb_9(Rigidbody2D_t502193897 * value)
	{
		___rb_9 = value;
		Il2CppCodeGenWriteBarrier(&___rb_9, value);
	}

	inline static int32_t get_offset_of__audi_10() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ____audi_10)); }
	inline AudioSource_t1135106623 * get__audi_10() const { return ____audi_10; }
	inline AudioSource_t1135106623 ** get_address_of__audi_10() { return &____audi_10; }
	inline void set__audi_10(AudioSource_t1135106623 * value)
	{
		____audi_10 = value;
		Il2CppCodeGenWriteBarrier(&____audi_10, value);
	}

	inline static int32_t get_offset_of__clicked_11() { return static_cast<int32_t>(offsetof(Rotate_t4255939431, ____clicked_11)); }
	inline bool get__clicked_11() const { return ____clicked_11; }
	inline bool* get_address_of__clicked_11() { return &____clicked_11; }
	inline void set__clicked_11(bool value)
	{
		____clicked_11 = value;
	}
};

struct Rotate_t4255939431_StaticFields
{
public:
	// System.Boolean Rotate::controlsEnabled
	bool ___controlsEnabled_12;
	// System.Byte Rotate::scoreDebug
	uint8_t ___scoreDebug_13;
	// System.Boolean Rotate::paused
	bool ___paused_14;

public:
	inline static int32_t get_offset_of_controlsEnabled_12() { return static_cast<int32_t>(offsetof(Rotate_t4255939431_StaticFields, ___controlsEnabled_12)); }
	inline bool get_controlsEnabled_12() const { return ___controlsEnabled_12; }
	inline bool* get_address_of_controlsEnabled_12() { return &___controlsEnabled_12; }
	inline void set_controlsEnabled_12(bool value)
	{
		___controlsEnabled_12 = value;
	}

	inline static int32_t get_offset_of_scoreDebug_13() { return static_cast<int32_t>(offsetof(Rotate_t4255939431_StaticFields, ___scoreDebug_13)); }
	inline uint8_t get_scoreDebug_13() const { return ___scoreDebug_13; }
	inline uint8_t* get_address_of_scoreDebug_13() { return &___scoreDebug_13; }
	inline void set_scoreDebug_13(uint8_t value)
	{
		___scoreDebug_13 = value;
	}

	inline static int32_t get_offset_of_paused_14() { return static_cast<int32_t>(offsetof(Rotate_t4255939431_StaticFields, ___paused_14)); }
	inline bool get_paused_14() const { return ___paused_14; }
	inline bool* get_address_of_paused_14() { return &___paused_14; }
	inline void set_paused_14(bool value)
	{
		___paused_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
