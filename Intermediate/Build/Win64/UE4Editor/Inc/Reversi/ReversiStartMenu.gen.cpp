// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Reversi/ReversiStartMenu.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReversiStartMenu() {}
// Cross Module References
	REVERSI_API UClass* Z_Construct_UClass_AReversiStartMenu_NoRegister();
	REVERSI_API UClass* Z_Construct_UClass_AReversiStartMenu();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Reversi();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AReversiStartMenu::StaticRegisterNativesAReversiStartMenu()
	{
	}
	UClass* Z_Construct_UClass_AReversiStartMenu_NoRegister()
	{
		return AReversiStartMenu::StaticClass();
	}
	struct Z_Construct_UClass_AReversiStartMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuBoard_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuBoard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MenuCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReversiStartMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Reversi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiStartMenu_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ReversiStartMenu.h" },
		{ "ModuleRelativePath", "ReversiStartMenu.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuBoard_MetaData[] = {
		{ "Category", "ReversiStartMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReversiStartMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuBoard = { "MenuBoard", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiStartMenu, MenuBoard), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuBoard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuBoard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuCamera_MetaData[] = {
		{ "Category", "ReversiStartMenu" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReversiStartMenu.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuCamera = { "MenuCamera", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiStartMenu, MenuCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReversiStartMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuBoard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiStartMenu_Statics::NewProp_MenuCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReversiStartMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReversiStartMenu>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReversiStartMenu_Statics::ClassParams = {
		&AReversiStartMenu::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AReversiStartMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AReversiStartMenu_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AReversiStartMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiStartMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReversiStartMenu()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReversiStartMenu_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReversiStartMenu, 2361165858);
	template<> REVERSI_API UClass* StaticClass<AReversiStartMenu>()
	{
		return AReversiStartMenu::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReversiStartMenu(Z_Construct_UClass_AReversiStartMenu, &AReversiStartMenu::StaticClass, TEXT("/Script/Reversi"), TEXT("AReversiStartMenu"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReversiStartMenu);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
