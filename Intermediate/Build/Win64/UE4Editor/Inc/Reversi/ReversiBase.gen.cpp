// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Reversi/ReversiBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReversiBase() {}
// Cross Module References
	REVERSI_API UClass* Z_Construct_UClass_AReversiBase_NoRegister();
	REVERSI_API UClass* Z_Construct_UClass_AReversiBase();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Reversi();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AReversiBase::StaticRegisterNativesAReversiBase()
	{
	}
	UClass* Z_Construct_UClass_AReversiBase_NoRegister()
	{
		return AReversiBase::StaticClass();
	}
	struct Z_Construct_UClass_AReversiBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoardBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoardBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfWhite_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfWhite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumOfBlack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumOfBlack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReversiBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Reversi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ReversiBase.h" },
		{ "ModuleRelativePath", "ReversiBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase_MetaData[] = {
		{ "Category", "ReversiBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReversiBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase = { "BoardBase", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiBase, BoardBase), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "ReversiBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReversiBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiBase, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfWhite_MetaData[] = {
		{ "Category", "ReversiBase" },
		{ "ModuleRelativePath", "ReversiBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfWhite = { "NumOfWhite", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiBase, NumOfWhite), METADATA_PARAMS(Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfWhite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfWhite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfBlack_MetaData[] = {
		{ "Category", "ReversiBase" },
		{ "ModuleRelativePath", "ReversiBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfBlack = { "NumOfBlack", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiBase, NumOfBlack), METADATA_PARAMS(Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfBlack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfBlack_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReversiBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiBase_Statics::NewProp_BoardBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiBase_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfWhite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiBase_Statics::NewProp_NumOfBlack,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReversiBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReversiBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReversiBase_Statics::ClassParams = {
		&AReversiBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AReversiBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReversiBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReversiBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReversiBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReversiBase, 1818708125);
	template<> REVERSI_API UClass* StaticClass<AReversiBase>()
	{
		return AReversiBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReversiBase(Z_Construct_UClass_AReversiBase, &AReversiBase::StaticClass, TEXT("/Script/Reversi"), TEXT("AReversiBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReversiBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
