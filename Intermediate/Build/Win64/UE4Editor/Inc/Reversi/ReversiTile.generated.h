// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FKey;
#ifdef REVERSI_ReversiTile_generated_h
#error "ReversiTile.generated.h already included, missing '#pragma once' in ReversiTile.h"
#endif
#define REVERSI_ReversiTile_generated_h

#define Reversi_Source_Reversi_ReversiTile_h_12_SPARSE_DATA
#define Reversi_Source_Reversi_ReversiTile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTileClicked);


#define Reversi_Source_Reversi_ReversiTile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTileClicked);


#define Reversi_Source_Reversi_ReversiTile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReversiTile(); \
	friend struct Z_Construct_UClass_AReversiTile_Statics; \
public: \
	DECLARE_CLASS(AReversiTile, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reversi"), NO_API) \
	DECLARE_SERIALIZER(AReversiTile)


#define Reversi_Source_Reversi_ReversiTile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAReversiTile(); \
	friend struct Z_Construct_UClass_AReversiTile_Statics; \
public: \
	DECLARE_CLASS(AReversiTile, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reversi"), NO_API) \
	DECLARE_SERIALIZER(AReversiTile)


#define Reversi_Source_Reversi_ReversiTile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReversiTile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReversiTile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReversiTile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReversiTile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReversiTile(AReversiTile&&); \
	NO_API AReversiTile(const AReversiTile&); \
public:


#define Reversi_Source_Reversi_ReversiTile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReversiTile(AReversiTile&&); \
	NO_API AReversiTile(const AReversiTile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReversiTile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReversiTile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReversiTile)


#define Reversi_Source_Reversi_ReversiTile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Tile() { return STRUCT_OFFSET(AReversiTile, Tile); } \
	FORCEINLINE static uint32 __PPO__Disc() { return STRUCT_OFFSET(AReversiTile, Disc); } \
	FORCEINLINE static uint32 __PPO__BoxComponent() { return STRUCT_OFFSET(AReversiTile, BoxComponent); } \
	FORCEINLINE static uint32 __PPO__PrevMoveParticleSystem() { return STRUCT_OFFSET(AReversiTile, PrevMoveParticleSystem); }


#define Reversi_Source_Reversi_ReversiTile_h_9_PROLOG
#define Reversi_Source_Reversi_ReversiTile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Reversi_Source_Reversi_ReversiTile_h_12_PRIVATE_PROPERTY_OFFSET \
	Reversi_Source_Reversi_ReversiTile_h_12_SPARSE_DATA \
	Reversi_Source_Reversi_ReversiTile_h_12_RPC_WRAPPERS \
	Reversi_Source_Reversi_ReversiTile_h_12_INCLASS \
	Reversi_Source_Reversi_ReversiTile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Reversi_Source_Reversi_ReversiTile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Reversi_Source_Reversi_ReversiTile_h_12_PRIVATE_PROPERTY_OFFSET \
	Reversi_Source_Reversi_ReversiTile_h_12_SPARSE_DATA \
	Reversi_Source_Reversi_ReversiTile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Reversi_Source_Reversi_ReversiTile_h_12_INCLASS_NO_PURE_DECLS \
	Reversi_Source_Reversi_ReversiTile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REVERSI_API UClass* StaticClass<class AReversiTile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Reversi_Source_Reversi_ReversiTile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
