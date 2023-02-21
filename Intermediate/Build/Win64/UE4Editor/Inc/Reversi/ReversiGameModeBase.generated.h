// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef REVERSI_ReversiGameModeBase_generated_h
#error "ReversiGameModeBase.generated.h already included, missing '#pragma once' in ReversiGameModeBase.h"
#endif
#define REVERSI_ReversiGameModeBase_generated_h

#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_SPARSE_DATA
#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeMenuWidget);


#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReversiGameModeBase(); \
	friend struct Z_Construct_UClass_AReversiGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AReversiGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reversi"), NO_API) \
	DECLARE_SERIALIZER(AReversiGameModeBase)


#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAReversiGameModeBase(); \
	friend struct Z_Construct_UClass_AReversiGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AReversiGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reversi"), NO_API) \
	DECLARE_SERIALIZER(AReversiGameModeBase)


#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReversiGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReversiGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReversiGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReversiGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReversiGameModeBase(AReversiGameModeBase&&); \
	NO_API AReversiGameModeBase(const AReversiGameModeBase&); \
public:


#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReversiGameModeBase(AReversiGameModeBase&&); \
	NO_API AReversiGameModeBase(const AReversiGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReversiGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReversiGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReversiGameModeBase)


#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WidgetClasses() { return STRUCT_OFFSET(AReversiGameModeBase, WidgetClasses); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(AReversiGameModeBase, CurrentWidget); }


#define Reversi_Source_Reversi_ReversiGameModeBase_h_12_PROLOG
#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_SPARSE_DATA \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_RPC_WRAPPERS \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_INCLASS \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Reversi_Source_Reversi_ReversiGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_SPARSE_DATA \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Reversi_Source_Reversi_ReversiGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REVERSI_API UClass* StaticClass<class AReversiGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Reversi_Source_Reversi_ReversiGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
