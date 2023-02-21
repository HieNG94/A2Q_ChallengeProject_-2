// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef REVERSI_ReversiBase_generated_h
#error "ReversiBase.generated.h already included, missing '#pragma once' in ReversiBase.h"
#endif
#define REVERSI_ReversiBase_generated_h

#define Reversi_Source_Reversi_ReversiBase_h_12_SPARSE_DATA
#define Reversi_Source_Reversi_ReversiBase_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateBoard);


#define Reversi_Source_Reversi_ReversiBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateBoard);


#define Reversi_Source_Reversi_ReversiBase_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAReversiBase(); \
	friend struct Z_Construct_UClass_AReversiBase_Statics; \
public: \
	DECLARE_CLASS(AReversiBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reversi"), NO_API) \
	DECLARE_SERIALIZER(AReversiBase)


#define Reversi_Source_Reversi_ReversiBase_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAReversiBase(); \
	friend struct Z_Construct_UClass_AReversiBase_Statics; \
public: \
	DECLARE_CLASS(AReversiBase, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Reversi"), NO_API) \
	DECLARE_SERIALIZER(AReversiBase)


#define Reversi_Source_Reversi_ReversiBase_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AReversiBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AReversiBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReversiBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReversiBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReversiBase(AReversiBase&&); \
	NO_API AReversiBase(const AReversiBase&); \
public:


#define Reversi_Source_Reversi_ReversiBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AReversiBase(AReversiBase&&); \
	NO_API AReversiBase(const AReversiBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AReversiBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AReversiBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AReversiBase)


#define Reversi_Source_Reversi_ReversiBase_h_12_PRIVATE_PROPERTY_OFFSET
#define Reversi_Source_Reversi_ReversiBase_h_9_PROLOG
#define Reversi_Source_Reversi_ReversiBase_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Reversi_Source_Reversi_ReversiBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Reversi_Source_Reversi_ReversiBase_h_12_SPARSE_DATA \
	Reversi_Source_Reversi_ReversiBase_h_12_RPC_WRAPPERS \
	Reversi_Source_Reversi_ReversiBase_h_12_INCLASS \
	Reversi_Source_Reversi_ReversiBase_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Reversi_Source_Reversi_ReversiBase_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Reversi_Source_Reversi_ReversiBase_h_12_PRIVATE_PROPERTY_OFFSET \
	Reversi_Source_Reversi_ReversiBase_h_12_SPARSE_DATA \
	Reversi_Source_Reversi_ReversiBase_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Reversi_Source_Reversi_ReversiBase_h_12_INCLASS_NO_PURE_DECLS \
	Reversi_Source_Reversi_ReversiBase_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> REVERSI_API UClass* StaticClass<class AReversiBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Reversi_Source_Reversi_ReversiBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
