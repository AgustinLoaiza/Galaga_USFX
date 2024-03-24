// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Galaga_USFX/ComponenteMovimientoNaves.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponenteMovimientoNaves() {}
// Cross Module References
	GALAGA_USFX_API UClass* Z_Construct_UClass_UComponenteMovimientoNaves_NoRegister();
	GALAGA_USFX_API UClass* Z_Construct_UClass_UComponenteMovimientoNaves();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Galaga_USFX();
// End Cross Module References
	void UComponenteMovimientoNaves::StaticRegisterNativesUComponenteMovimientoNaves()
	{
	}
	UClass* Z_Construct_UClass_UComponenteMovimientoNaves_NoRegister()
	{
		return UComponenteMovimientoNaves::StaticClass();
	}
	struct Z_Construct_UClass_UComponenteMovimientoNaves_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovimientoComun_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovimientoComun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponenteMovimientoNaves_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Galaga_USFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimientoNaves_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ComponenteMovimientoNaves.h" },
		{ "ModuleRelativePath", "ComponenteMovimientoNaves.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponenteMovimientoNaves_Statics::NewProp_MovimientoComun_MetaData[] = {
		{ "Comment", "//Definimos la velocidad de las naves\n" },
		{ "ModuleRelativePath", "ComponenteMovimientoNaves.h" },
		{ "ToolTip", "Definimos la velocidad de las naves" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UComponenteMovimientoNaves_Statics::NewProp_MovimientoComun = { "MovimientoComun", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UComponenteMovimientoNaves, MovimientoComun), METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimientoNaves_Statics::NewProp_MovimientoComun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimientoNaves_Statics::NewProp_MovimientoComun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponenteMovimientoNaves_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponenteMovimientoNaves_Statics::NewProp_MovimientoComun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponenteMovimientoNaves_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponenteMovimientoNaves>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UComponenteMovimientoNaves_Statics::ClassParams = {
		&UComponenteMovimientoNaves::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComponenteMovimientoNaves_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimientoNaves_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UComponenteMovimientoNaves_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponenteMovimientoNaves_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponenteMovimientoNaves()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UComponenteMovimientoNaves_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UComponenteMovimientoNaves, 323214336);
	template<> GALAGA_USFX_API UClass* StaticClass<UComponenteMovimientoNaves>()
	{
		return UComponenteMovimientoNaves::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UComponenteMovimientoNaves(Z_Construct_UClass_UComponenteMovimientoNaves, &UComponenteMovimientoNaves::StaticClass, TEXT("/Script/Galaga_USFX"), TEXT("UComponenteMovimientoNaves"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponenteMovimientoNaves);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
