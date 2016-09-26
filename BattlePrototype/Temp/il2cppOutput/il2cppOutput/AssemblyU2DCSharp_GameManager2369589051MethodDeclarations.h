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

// GameManager
struct GameManager_t2369589051;
// UnityEngine.UI.Image
struct Image_t538875265;
// System.String
struct String_t;
// Player
struct Player_t2393081601;
// Tile
struct Tile_t2606798;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_UI_Image538875265.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_Player2393081601.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_Tile2606798.h"

// System.Void GameManager::.ctor()
extern "C"  void GameManager__ctor_m4112277136 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameManager GameManager::getInstance()
extern "C"  GameManager_t2369589051 * GameManager_getInstance_m3592271633 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::initBattle()
extern "C"  void GameManager_initBattle_m2671170108 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::updateHealth(UnityEngine.UI.Image,System.Single)
extern "C"  void GameManager_updateHealth_m3013034374 (GameManager_t2369589051 * __this, Image_t538875265 * ___bar0, float ___newValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::resetBattle()
extern "C"  void GameManager_resetBattle_m1511580469 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::resetRound()
extern "C"  void GameManager_resetRound_m2873839635 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::setPlayerNext(System.String)
extern "C"  void GameManager_setPlayerNext_m3269045438 (GameManager_t2369589051 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::setEnemyNext(System.String)
extern "C"  void GameManager_setEnemyNext_m2972510325 (GameManager_t2369589051 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::setCurrentPlayer(Player)
extern "C"  void GameManager_setCurrentPlayer_m4132026731 (GameManager_t2369589051 * __this, Player_t2393081601 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Player GameManager::getCurrentPlayer()
extern "C"  Player_t2393081601 * GameManager_getCurrentPlayer_m3573864060 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameManager::mDistance(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  int32_t GameManager_mDistance_m3135828174 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___v10, Vector3_t4282066566  ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::moveCurrentPlayer(Tile)
extern "C"  void GameManager_moveCurrentPlayer_m2925288297 (GameManager_t2369589051 * __this, Tile_t2606798 * ___destTile0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::generateMap()
extern "C"  void GameManager_generateMap_m1863251957 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::generatePlayer()
extern "C"  void GameManager_generatePlayer_m1735053322 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::enterBattleScene(Player,Player)
extern "C"  void GameManager_enterBattleScene_m555084630 (GameManager_t2369589051 * __this, Player_t2393081601 * ___self0, Player_t2393081601 * ___enemy1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Awake()
extern "C"  void GameManager_Awake_m54915059 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C"  void GameManager_Update_m358434429 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::<initBattle>m__2()
extern "C"  void GameManager_U3CinitBattleU3Em__2_m3156031923 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::<initBattle>m__3()
extern "C"  void GameManager_U3CinitBattleU3Em__3_m3156032884 (GameManager_t2369589051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
