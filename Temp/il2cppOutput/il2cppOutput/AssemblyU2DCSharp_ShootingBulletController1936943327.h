#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Object
struct Object_t1021602117;
// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_ShootingBulletController_ID1712771177.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShootingBulletController
struct  ShootingBulletController_t1936943327  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject ShootingBulletController::redGuy
	GameObject_t1756533147 * ___redGuy_2;
	// UnityEngine.GameObject ShootingBulletController::blueGuy
	GameObject_t1756533147 * ___blueGuy_3;
	// System.Int32 ShootingBulletController::frame
	int32_t ___frame_4;
	// UnityEngine.GameObject ShootingBulletController::myObj
	GameObject_t1756533147 * ___myObj_5;
	// System.Single ShootingBulletController::bulletSpeed
	float ___bulletSpeed_8;
	// ShootingBulletController/ID ShootingBulletController::myId
	int32_t ___myId_9;
	// UnityEngine.Object ShootingBulletController::bulletPrefab
	Object_t1021602117 * ___bulletPrefab_10;
	// UnityEngine.Quaternion ShootingBulletController::myRotation
	Quaternion_t4030073918  ___myRotation_11;
	// UnityEngine.Vector3 ShootingBulletController::offset
	Vector3_t2243707580  ___offset_12;
	// System.Boolean ShootingBulletController::shot
	bool ___shot_13;
	// UnityEngine.AudioClip ShootingBulletController::shoot
	AudioClip_t1932558630 * ___shoot_14;
	// UnityEngine.AudioSource ShootingBulletController::audioPlayer
	AudioSource_t1135106623 * ___audioPlayer_15;
	// UnityEngine.AudioClip ShootingBulletController::hit
	AudioClip_t1932558630 * ___hit_16;

public:
	inline static int32_t get_offset_of_redGuy_2() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___redGuy_2)); }
	inline GameObject_t1756533147 * get_redGuy_2() const { return ___redGuy_2; }
	inline GameObject_t1756533147 ** get_address_of_redGuy_2() { return &___redGuy_2; }
	inline void set_redGuy_2(GameObject_t1756533147 * value)
	{
		___redGuy_2 = value;
		Il2CppCodeGenWriteBarrier(&___redGuy_2, value);
	}

	inline static int32_t get_offset_of_blueGuy_3() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___blueGuy_3)); }
	inline GameObject_t1756533147 * get_blueGuy_3() const { return ___blueGuy_3; }
	inline GameObject_t1756533147 ** get_address_of_blueGuy_3() { return &___blueGuy_3; }
	inline void set_blueGuy_3(GameObject_t1756533147 * value)
	{
		___blueGuy_3 = value;
		Il2CppCodeGenWriteBarrier(&___blueGuy_3, value);
	}

	inline static int32_t get_offset_of_frame_4() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___frame_4)); }
	inline int32_t get_frame_4() const { return ___frame_4; }
	inline int32_t* get_address_of_frame_4() { return &___frame_4; }
	inline void set_frame_4(int32_t value)
	{
		___frame_4 = value;
	}

	inline static int32_t get_offset_of_myObj_5() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___myObj_5)); }
	inline GameObject_t1756533147 * get_myObj_5() const { return ___myObj_5; }
	inline GameObject_t1756533147 ** get_address_of_myObj_5() { return &___myObj_5; }
	inline void set_myObj_5(GameObject_t1756533147 * value)
	{
		___myObj_5 = value;
		Il2CppCodeGenWriteBarrier(&___myObj_5, value);
	}

	inline static int32_t get_offset_of_bulletSpeed_8() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___bulletSpeed_8)); }
	inline float get_bulletSpeed_8() const { return ___bulletSpeed_8; }
	inline float* get_address_of_bulletSpeed_8() { return &___bulletSpeed_8; }
	inline void set_bulletSpeed_8(float value)
	{
		___bulletSpeed_8 = value;
	}

	inline static int32_t get_offset_of_myId_9() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___myId_9)); }
	inline int32_t get_myId_9() const { return ___myId_9; }
	inline int32_t* get_address_of_myId_9() { return &___myId_9; }
	inline void set_myId_9(int32_t value)
	{
		___myId_9 = value;
	}

	inline static int32_t get_offset_of_bulletPrefab_10() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___bulletPrefab_10)); }
	inline Object_t1021602117 * get_bulletPrefab_10() const { return ___bulletPrefab_10; }
	inline Object_t1021602117 ** get_address_of_bulletPrefab_10() { return &___bulletPrefab_10; }
	inline void set_bulletPrefab_10(Object_t1021602117 * value)
	{
		___bulletPrefab_10 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_10, value);
	}

	inline static int32_t get_offset_of_myRotation_11() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___myRotation_11)); }
	inline Quaternion_t4030073918  get_myRotation_11() const { return ___myRotation_11; }
	inline Quaternion_t4030073918 * get_address_of_myRotation_11() { return &___myRotation_11; }
	inline void set_myRotation_11(Quaternion_t4030073918  value)
	{
		___myRotation_11 = value;
	}

	inline static int32_t get_offset_of_offset_12() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___offset_12)); }
	inline Vector3_t2243707580  get_offset_12() const { return ___offset_12; }
	inline Vector3_t2243707580 * get_address_of_offset_12() { return &___offset_12; }
	inline void set_offset_12(Vector3_t2243707580  value)
	{
		___offset_12 = value;
	}

	inline static int32_t get_offset_of_shot_13() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___shot_13)); }
	inline bool get_shot_13() const { return ___shot_13; }
	inline bool* get_address_of_shot_13() { return &___shot_13; }
	inline void set_shot_13(bool value)
	{
		___shot_13 = value;
	}

	inline static int32_t get_offset_of_shoot_14() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___shoot_14)); }
	inline AudioClip_t1932558630 * get_shoot_14() const { return ___shoot_14; }
	inline AudioClip_t1932558630 ** get_address_of_shoot_14() { return &___shoot_14; }
	inline void set_shoot_14(AudioClip_t1932558630 * value)
	{
		___shoot_14 = value;
		Il2CppCodeGenWriteBarrier(&___shoot_14, value);
	}

	inline static int32_t get_offset_of_audioPlayer_15() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___audioPlayer_15)); }
	inline AudioSource_t1135106623 * get_audioPlayer_15() const { return ___audioPlayer_15; }
	inline AudioSource_t1135106623 ** get_address_of_audioPlayer_15() { return &___audioPlayer_15; }
	inline void set_audioPlayer_15(AudioSource_t1135106623 * value)
	{
		___audioPlayer_15 = value;
		Il2CppCodeGenWriteBarrier(&___audioPlayer_15, value);
	}

	inline static int32_t get_offset_of_hit_16() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327, ___hit_16)); }
	inline AudioClip_t1932558630 * get_hit_16() const { return ___hit_16; }
	inline AudioClip_t1932558630 ** get_address_of_hit_16() { return &___hit_16; }
	inline void set_hit_16(AudioClip_t1932558630 * value)
	{
		___hit_16 = value;
		Il2CppCodeGenWriteBarrier(&___hit_16, value);
	}
};

struct ShootingBulletController_t1936943327_StaticFields
{
public:
	// System.Int32 ShootingBulletController::RedAmmo
	int32_t ___RedAmmo_6;
	// System.Int32 ShootingBulletController::BlueAmmo
	int32_t ___BlueAmmo_7;

public:
	inline static int32_t get_offset_of_RedAmmo_6() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327_StaticFields, ___RedAmmo_6)); }
	inline int32_t get_RedAmmo_6() const { return ___RedAmmo_6; }
	inline int32_t* get_address_of_RedAmmo_6() { return &___RedAmmo_6; }
	inline void set_RedAmmo_6(int32_t value)
	{
		___RedAmmo_6 = value;
	}

	inline static int32_t get_offset_of_BlueAmmo_7() { return static_cast<int32_t>(offsetof(ShootingBulletController_t1936943327_StaticFields, ___BlueAmmo_7)); }
	inline int32_t get_BlueAmmo_7() const { return ___BlueAmmo_7; }
	inline int32_t* get_address_of_BlueAmmo_7() { return &___BlueAmmo_7; }
	inline void set_BlueAmmo_7(int32_t value)
	{
		___BlueAmmo_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
