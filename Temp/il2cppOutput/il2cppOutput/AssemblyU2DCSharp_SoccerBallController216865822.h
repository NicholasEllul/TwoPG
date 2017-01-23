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
// UnityEngine.AudioSource
struct AudioSource_t1135106623;
// UnityEngine.Animation
struct Animation_t2068071072;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_t13116344;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "mscorlib_System_Nullable_1_gen506773894.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SoccerBallController
struct  SoccerBallController_t216865822  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioClip SoccerBallController::goalSound
	AudioClip_t1932558630 * ___goalSound_2;
	// UnityEngine.AudioClip SoccerBallController::kickSound
	AudioClip_t1932558630 * ___kickSound_3;
	// UnityEngine.AudioSource SoccerBallController::soundPlayer
	AudioSource_t1135106623 * ___soundPlayer_8;
	// UnityEngine.Animation SoccerBallController::ballAnimator
	Animation_t2068071072 * ___ballAnimator_9;
	// System.Boolean SoccerBallController::ballIsActive
	bool ___ballIsActive_10;
	// UnityEngine.CircleCollider2D SoccerBallController::ballCollider
	CircleCollider2D_t13116344 * ___ballCollider_11;
	// UnityEngine.Vector3 SoccerBallController::startPosition
	Vector3_t2243707580  ___startPosition_12;
	// System.Nullable`1<UnityEngine.Vector2> SoccerBallController::rememberVelocity
	Nullable_1_t506773894  ___rememberVelocity_13;
	// UnityEngine.Transform SoccerBallController::ballPos
	Transform_t3275118058 * ___ballPos_14;
	// UnityEngine.Rigidbody2D SoccerBallController::ballPhysics
	Rigidbody2D_t502193897 * ___ballPhysics_15;
	// UnityEngine.Vector2 SoccerBallController::velocity
	Vector2_t2243707579  ___velocity_16;
	// UnityEngine.Vector2 SoccerBallController::lastPos
	Vector2_t2243707579  ___lastPos_17;

public:
	inline static int32_t get_offset_of_goalSound_2() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___goalSound_2)); }
	inline AudioClip_t1932558630 * get_goalSound_2() const { return ___goalSound_2; }
	inline AudioClip_t1932558630 ** get_address_of_goalSound_2() { return &___goalSound_2; }
	inline void set_goalSound_2(AudioClip_t1932558630 * value)
	{
		___goalSound_2 = value;
		Il2CppCodeGenWriteBarrier(&___goalSound_2, value);
	}

	inline static int32_t get_offset_of_kickSound_3() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___kickSound_3)); }
	inline AudioClip_t1932558630 * get_kickSound_3() const { return ___kickSound_3; }
	inline AudioClip_t1932558630 ** get_address_of_kickSound_3() { return &___kickSound_3; }
	inline void set_kickSound_3(AudioClip_t1932558630 * value)
	{
		___kickSound_3 = value;
		Il2CppCodeGenWriteBarrier(&___kickSound_3, value);
	}

	inline static int32_t get_offset_of_soundPlayer_8() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___soundPlayer_8)); }
	inline AudioSource_t1135106623 * get_soundPlayer_8() const { return ___soundPlayer_8; }
	inline AudioSource_t1135106623 ** get_address_of_soundPlayer_8() { return &___soundPlayer_8; }
	inline void set_soundPlayer_8(AudioSource_t1135106623 * value)
	{
		___soundPlayer_8 = value;
		Il2CppCodeGenWriteBarrier(&___soundPlayer_8, value);
	}

	inline static int32_t get_offset_of_ballAnimator_9() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___ballAnimator_9)); }
	inline Animation_t2068071072 * get_ballAnimator_9() const { return ___ballAnimator_9; }
	inline Animation_t2068071072 ** get_address_of_ballAnimator_9() { return &___ballAnimator_9; }
	inline void set_ballAnimator_9(Animation_t2068071072 * value)
	{
		___ballAnimator_9 = value;
		Il2CppCodeGenWriteBarrier(&___ballAnimator_9, value);
	}

	inline static int32_t get_offset_of_ballIsActive_10() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___ballIsActive_10)); }
	inline bool get_ballIsActive_10() const { return ___ballIsActive_10; }
	inline bool* get_address_of_ballIsActive_10() { return &___ballIsActive_10; }
	inline void set_ballIsActive_10(bool value)
	{
		___ballIsActive_10 = value;
	}

	inline static int32_t get_offset_of_ballCollider_11() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___ballCollider_11)); }
	inline CircleCollider2D_t13116344 * get_ballCollider_11() const { return ___ballCollider_11; }
	inline CircleCollider2D_t13116344 ** get_address_of_ballCollider_11() { return &___ballCollider_11; }
	inline void set_ballCollider_11(CircleCollider2D_t13116344 * value)
	{
		___ballCollider_11 = value;
		Il2CppCodeGenWriteBarrier(&___ballCollider_11, value);
	}

	inline static int32_t get_offset_of_startPosition_12() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___startPosition_12)); }
	inline Vector3_t2243707580  get_startPosition_12() const { return ___startPosition_12; }
	inline Vector3_t2243707580 * get_address_of_startPosition_12() { return &___startPosition_12; }
	inline void set_startPosition_12(Vector3_t2243707580  value)
	{
		___startPosition_12 = value;
	}

	inline static int32_t get_offset_of_rememberVelocity_13() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___rememberVelocity_13)); }
	inline Nullable_1_t506773894  get_rememberVelocity_13() const { return ___rememberVelocity_13; }
	inline Nullable_1_t506773894 * get_address_of_rememberVelocity_13() { return &___rememberVelocity_13; }
	inline void set_rememberVelocity_13(Nullable_1_t506773894  value)
	{
		___rememberVelocity_13 = value;
	}

	inline static int32_t get_offset_of_ballPos_14() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___ballPos_14)); }
	inline Transform_t3275118058 * get_ballPos_14() const { return ___ballPos_14; }
	inline Transform_t3275118058 ** get_address_of_ballPos_14() { return &___ballPos_14; }
	inline void set_ballPos_14(Transform_t3275118058 * value)
	{
		___ballPos_14 = value;
		Il2CppCodeGenWriteBarrier(&___ballPos_14, value);
	}

	inline static int32_t get_offset_of_ballPhysics_15() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___ballPhysics_15)); }
	inline Rigidbody2D_t502193897 * get_ballPhysics_15() const { return ___ballPhysics_15; }
	inline Rigidbody2D_t502193897 ** get_address_of_ballPhysics_15() { return &___ballPhysics_15; }
	inline void set_ballPhysics_15(Rigidbody2D_t502193897 * value)
	{
		___ballPhysics_15 = value;
		Il2CppCodeGenWriteBarrier(&___ballPhysics_15, value);
	}

	inline static int32_t get_offset_of_velocity_16() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___velocity_16)); }
	inline Vector2_t2243707579  get_velocity_16() const { return ___velocity_16; }
	inline Vector2_t2243707579 * get_address_of_velocity_16() { return &___velocity_16; }
	inline void set_velocity_16(Vector2_t2243707579  value)
	{
		___velocity_16 = value;
	}

	inline static int32_t get_offset_of_lastPos_17() { return static_cast<int32_t>(offsetof(SoccerBallController_t216865822, ___lastPos_17)); }
	inline Vector2_t2243707579  get_lastPos_17() const { return ___lastPos_17; }
	inline Vector2_t2243707579 * get_address_of_lastPos_17() { return &___lastPos_17; }
	inline void set_lastPos_17(Vector2_t2243707579  value)
	{
		___lastPos_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
