#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// SoccerBallController
struct SoccerBallController_t216865822;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"

// System.Void SoccerBallController::.ctor()
extern "C"  void SoccerBallController__ctor_m1099345643 (SoccerBallController_t216865822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoccerBallController::SetTransformX(System.Single)
extern "C"  void SoccerBallController_SetTransformX_m4042445174 (SoccerBallController_t216865822 * __this, float ___xPos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoccerBallController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void SoccerBallController_OnCollisionEnter2D_m2014071193 (SoccerBallController_t216865822 * __this, Collision2D_t1539500754 * ___collisionDetect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoccerBallController::OnCollisionExit2D(UnityEngine.Collision2D)
extern "C"  void SoccerBallController_OnCollisionExit2D_m1566610297 (SoccerBallController_t216865822 * __this, Collision2D_t1539500754 * ___collisionDetect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SoccerBallController::waitToReset(System.Single)
extern "C"  Il2CppObject * SoccerBallController_waitToReset_m4012416569 (SoccerBallController_t216865822 * __this, float ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoccerBallController::ResetSoccerBall()
extern "C"  void SoccerBallController_ResetSoccerBall_m3745556440 (SoccerBallController_t216865822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoccerBallController::Start()
extern "C"  void SoccerBallController_Start_m1499174463 (SoccerBallController_t216865822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoccerBallController::FixedUpdate()
extern "C"  void SoccerBallController_FixedUpdate_m1497490294 (SoccerBallController_t216865822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SoccerBallController::Update()
extern "C"  void SoccerBallController_Update_m3902264268 (SoccerBallController_t216865822 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
