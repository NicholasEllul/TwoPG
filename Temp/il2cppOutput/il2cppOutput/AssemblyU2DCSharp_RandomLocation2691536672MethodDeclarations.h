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

// RandomLocation
struct RandomLocation_t2691536672;
// UnityEngine.Random
struct Random_t1170710517;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Random1170710517.h"

// System.Void RandomLocation::.ctor()
extern "C"  void RandomLocation__ctor_m862296457 (RandomLocation_t2691536672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 RandomLocation::generatorHelper(System.Int32)
extern "C"  int32_t RandomLocation_generatorHelper_m1445671995 (RandomLocation_t2691536672 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single RandomLocation::generator(UnityEngine.Random,System.Int32,System.Int32)
extern "C"  float RandomLocation_generator_m726354610 (RandomLocation_t2691536672 * __this, Random_t1170710517 * ___rngg0, int32_t ___lowerBound1, int32_t ___upperBound2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RandomLocation::Start()
extern "C"  void RandomLocation_Start_m579650753 (RandomLocation_t2691536672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void RandomLocation::Update()
extern "C"  void RandomLocation_Update_m3551003434 (RandomLocation_t2691536672 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
