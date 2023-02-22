// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Reversi/ReversiGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReversiGameModeBase() {}
// Cross Module References
	REVERSI_API UClass* Z_Construct_UClass_AReversiGameModeBase_NoRegister();
	REVERSI_API UClass* Z_Construct_UClass_AReversiGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Reversi();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AReversiGameModeBase::execSetTimeLimit)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTimeLimit(Z_Param_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReversiGameModeBase::execGetGameBoard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetGameBoard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AReversiGameModeBase::execChangeMenuWidget)
	{
		P_GET_OBJECT(UClass,Z_Param_NewWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeMenuWidget(Z_Param_NewWidgetClass);
		P_NATIVE_END;
	}
	void AReversiGameModeBase::StaticRegisterNativesAReversiGameModeBase()
	{
		UClass* Class = AReversiGameModeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeMenuWidget", &AReversiGameModeBase::execChangeMenuWidget },
			{ "GetGameBoard", &AReversiGameModeBase::execGetGameBoard },
			{ "SetTimeLimit", &AReversiGameModeBase::execSetTimeLimit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics
	{
		struct ReversiGameModeBase_eventChangeMenuWidget_Parms
		{
			TSubclassOf<UUserWidget>  NewWidgetClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewWidgetClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass = { "NewWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReversiGameModeBase_eventChangeMenuWidget_Parms, NewWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::NewProp_NewWidgetClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "UMG Game" },
		{ "Comment", "/** Remove the current menu widget and create a new one from the specified class, if provided. */" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
		{ "ToolTip", "Remove the current menu widget and create a new one from the specified class, if provided." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReversiGameModeBase, nullptr, "ChangeMenuWidget", nullptr, nullptr, sizeof(ReversiGameModeBase_eventChangeMenuWidget_Parms), Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReversiGameModeBase_GetGameBoard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReversiGameModeBase_GetGameBoard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReversiGameModeBase_GetGameBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReversiGameModeBase, nullptr, "GetGameBoard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReversiGameModeBase_GetGameBoard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReversiGameModeBase_GetGameBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReversiGameModeBase_GetGameBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReversiGameModeBase_GetGameBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics
	{
		struct ReversiGameModeBase_eventSetTimeLimit_Parms
		{
			float Time;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReversiGameModeBase_eventSetTimeLimit_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AReversiGameModeBase, nullptr, "SetTimeLimit", nullptr, nullptr, sizeof(ReversiGameModeBase_eventSetTimeLimit_Parms), Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AReversiGameModeBase_NoRegister()
	{
		return AReversiGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AReversiGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlackDisc_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BlackDisc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhiteDisc_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_WhiteDisc;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidgetTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Turn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Turn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StartingWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndingWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EndingWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReversiGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Reversi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AReversiGameModeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AReversiGameModeBase_ChangeMenuWidget, "ChangeMenuWidget" }, // 2886559205
		{ &Z_Construct_UFunction_AReversiGameModeBase_GetGameBoard, "GetGameBoard" }, // 2786225920
		{ &Z_Construct_UFunction_AReversiGameModeBase_SetTimeLimit, "SetTimeLimit" }, // 2552677808
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ReversiGameModeBase.h" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_BlackDisc_MetaData[] = {
		{ "Category", "ReversiGameModeBase" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_BlackDisc = { "BlackDisc", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiGameModeBase, BlackDisc), METADATA_PARAMS(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_BlackDisc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_BlackDisc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WhiteDisc_MetaData[] = {
		{ "Category", "ReversiGameModeBase" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WhiteDisc = { "WhiteDisc", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiGameModeBase, WhiteDisc), METADATA_PARAMS(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WhiteDisc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WhiteDisc_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_TimeLimit_MetaData[] = {
		{ "Category", "ReversiGameModeBase" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiGameModeBase, TimeLimit), METADATA_PARAMS(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_TimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_TimeLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WidgetTimer_MetaData[] = {
		{ "Category", "ReversiGameModeBase" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WidgetTimer = { "WidgetTimer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiGameModeBase, WidgetTimer), METADATA_PARAMS(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WidgetTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WidgetTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_Turn_MetaData[] = {
		{ "Category", "ReversiGameModeBase" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_Turn = { "Turn", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiGameModeBase, Turn), METADATA_PARAMS(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_Turn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_Turn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData[] = {
		{ "Category", "UMG Game" },
		{ "Comment", "/** The widget class we will use as our menu when the game starts. */" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
		{ "ToolTip", "The widget class we will use as our menu when the game starts." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_StartingWidgetClass = { "StartingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiGameModeBase, StartingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_StartingWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_EndingWidgetClass_MetaData[] = {
		{ "Category", "UMG Game" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_EndingWidgetClass = { "EndingWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiGameModeBase, EndingWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_EndingWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_EndingWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Comment", "/** The widget instance that we are using as our menu. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ReversiGameModeBase.h" },
		{ "ToolTip", "The widget instance that we are using as our menu." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AReversiGameModeBase, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_CurrentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReversiGameModeBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_BlackDisc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WhiteDisc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_TimeLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_WidgetTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_Turn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_StartingWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_EndingWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReversiGameModeBase_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReversiGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReversiGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AReversiGameModeBase_Statics::ClassParams = {
		&AReversiGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AReversiGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AReversiGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReversiGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReversiGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AReversiGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AReversiGameModeBase, 2432120067);
	template<> REVERSI_API UClass* StaticClass<AReversiGameModeBase>()
	{
		return AReversiGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AReversiGameModeBase(Z_Construct_UClass_AReversiGameModeBase, &AReversiGameModeBase::StaticClass, TEXT("/Script/Reversi"), TEXT("AReversiGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReversiGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
