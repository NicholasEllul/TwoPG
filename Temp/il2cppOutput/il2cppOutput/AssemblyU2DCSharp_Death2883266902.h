#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Death
struct  Death_t2883266902  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animation Death::animEH
	Animation_t2068071072 * ___animEH_6;
	// UnityEngine.AudioClip Death::grunt
	AudioClip_t1932558630 * ___grunt_7;
	// UnityEngine.Vector2 Death::_respawnLocation
	Vector2_t2243707579  ____respawnLocation_8;
	// UnityEngine.Quaternion Death::_respawnRotation
	Quaternion_t4030073918  ____respawnRotation_9;
	// UnityEngine.AudioSource Death::_audi
	AudioSource_t1135106623 * ____audi_10;

public:
	inline static int32_t get_offset_of_animEH_6() { return static_cast<int32_t>(offsetof(Death_t2883266902, ___animEH_6)); }
	inline Animation_t2068071072 * get_animEH_6() const { return ___animEH_6; }
	inline Animation_t2068071072 ** get_address_of_animEH_6() { return &___animEH_6; }
	inline void set_animEH_6(Animation_t2068071072 * value)
	{
		___animEH_6 = value;
		Il2CppCodeGenWriteBarrier(&___animEH_6, value);
	}

	inline static int32_t get_offset_of_grunt_7() { return static_cast<int32_t>(offsetof(Death_t2883266902, ___grunt_7)); }
	inline AudioClip_t1932558630 * get_grunt_7() const { return ___grunt_7; }
	inline AudioClip_t1932558630 ** get_address_of_grunt_7() { return &___grunt_7; }
	inline void set_grunt_7(AudioClip_t1932558630 * value)
	{
		___grunt_7 = value;
		Il2CppCodeGenWriteBarrier(&___grunt_7, value);
	}

	inline static int32_t get_offset_of__respawnLocation_8() { return static_cast<int32_t>(offsetof(Death_t2883266902, ____respawnLocation_8)); }
	inline Vector2_t2243707579  get__respawnLocation_8() const { return ____respawnLocation_8; }
	inline Vector2_t2243707579 * get_address_of__respawnLocation_8() { return &____respawnLocation_8; }
	inline void set__respawnLocation_8(Vector2_t2243707579  value)
	{
		____respawnLocation_8 = value;
	}

	inline static int32_t get_offset_of__respawnRotation_9() { return static_cast<int32_t>(offsetof(Death_t2883266902, ____respawnRotation_9)); }
	inline Quaternion_t4030073918  get__respawnRotation_9() const { return ____respawnRotation_9; }
	inline Quaternion_t4030073918 * get_address_of__respawnRotation_9() { return &____respawnRotation_9; }
	inline void set__respawnRotation_9(Quaternion_t4030073918  value)
	{
		____respawnRotation_9 = value;
	}

	inline static int32_t get_offset_of__audi_10() { return static_cast<int32_t>(offsetof(Death_t2883266902, ____audi_10)); }
	inline AudioSource_t1135106623 * get__audi_10() const { return ____audi_10; }
	inline AudioSource_t1135106623 ** get_address_of__audi_10() { return &____audi_10; }
	inline void set__audi_10(AudioSource_t1135106623 * value)
	{
		____audi_10 = value;
		Il2CppCodeGenWriteBarrier(&____audi_10, value);
	}
};

struct Death_t2883266902_StaticFields
{
public:
	// System.Boolean Death::alive
	bool ___alive_2;
	// System.Byte Death::scoreToWin
	uint8_t ___scoreToWin_3;
	// System.Byte Death::RedScore
	uint8_t ___RedScore_4;
	// System.Byte Death::BlueScore
	uint8_t ___BlueScore_5;

public:
	inline static int32_t get_offset_of_alive_2() { return static_cast<int32_t>(offsetof(Death_t2883266902_StaticFields, ___alive_2)); }
	inline bool get_alive_2() const { return ___alive_2; }
	inline bool* get_address_of_alive_2() { return &___alive_2; }
	inline void set_alive_2(bool value)
	{
		___alive_2 = value;
	}

	inline static int32_t get_offset_of_scoreToWin_3() { return static_cast<int32_t>(offsetof(Death_t2883266902_StaticFields, ___scoreToWin_3)); }
	inline uint8_t get_scoreToWin_3() const { return ___scoreToWin_3; }
	inline uint8_t* get_address_of_scoreToWin_3() { return &___scoreToWin_3; }
	inline void set_scoreToWin_3(uint8_t value)
	{
		___scoreToWin_3 = value;
	}

	inline static int32_t get_offset_of_RedScore_4() { return static_cast<int32_t>(offsetof(Death_t2883266902_StaticFields, ___RedScore_4)); }
	inline uint8_t get_RedScore_4() const { return ___RedScore_4; }
	inline uint8_t* get_address_of_RedScore_4() { return &___RedScore_4; }
	inline void set_RedScore_4(uint8_t value)
	{
		___RedScore_4 = value;
	}

	inline static int32_t get_offset_of_BlueScore_5() { return static_cast<int32_t>(offsetof(Death_t2883266902_StaticFields, ___BlueScore_5)); }
	inline uint8_t get_BlueScore_5() const { return ___BlueScore_5; }
	inline uint8_t* get_address_of_BlueScore_5() { return &___BlueScore_5; }
	inline void set_BlueScore_5(uint8_t value)
	{
		___BlueScore_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
