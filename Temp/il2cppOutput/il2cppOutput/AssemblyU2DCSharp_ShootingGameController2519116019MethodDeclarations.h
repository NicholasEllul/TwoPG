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

// ShootingGameController
struct ShootingGameController_t2519116019;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void ShootingGameController::.ctor()
extern "C"  void ShootingGameController__ctor_m1413265122 (ShootingGameController_t2519116019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShootingGameController::SpawnBlockers(System.Int32)
extern "C"  void ShootingGameController_SpawnBlockers_m2611948845 (ShootingGameController_t2519116019 * __this, int32_t ___counter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShootingGameController::toggleInfoText(System.String,System.Boolean)
extern "C"  void ShootingGameController_toggleInfoText_m319083754 (ShootingGameController_t2519116019 * __this, String_t* ___objName0, bool ___status1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ShootingGameController::AmmoRegen(System.Single)
extern "C"  Il2CppObject * ShootingGameController_AmmoRegen_m2230309834 (ShootingGameController_t2519116019 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShootingGameController::CheckAmmo()
extern "C"  void ShootingGameController_CheckAmmo_m1643496860 (ShootingGameController_t2519116019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShootingGameController::ToggleDirection()
extern "C"  void ShootingGameController_ToggleDirection_m2524013313 (ShootingGameController_t2519116019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShootingGameController::Start()
extern "C"  void ShootingGameController_Start_m2562949022 (ShootingGameController_t2519116019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShootingGameController::Update()
extern "C"  void ShootingGameController_Update_m4235758235 (ShootingGameController_t2519116019 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ShootingGameController::.cctor()
extern "C"  void ShootingGameController__cctor_m4060419717 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
