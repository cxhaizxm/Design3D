// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealEd/Classes/Exporters/PolysExporterT3D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePolysExporterT3D() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UPolysExporterT3D_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UPolysExporterT3D();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UPolysExporterT3D::StaticRegisterNativesUPolysExporterT3D()
	{
	}
	UClass* Z_Construct_UClass_UPolysExporterT3D_NoRegister()
	{
		return UPolysExporterT3D::StaticClass();
	}
	struct Z_Construct_UClass_UPolysExporterT3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPolysExporterT3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPolysExporterT3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Exporters/PolysExporterT3D.h" },
		{ "ModuleRelativePath", "Classes/Exporters/PolysExporterT3D.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPolysExporterT3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPolysExporterT3D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPolysExporterT3D_Statics::ClassParams = {
		&UPolysExporterT3D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPolysExporterT3D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPolysExporterT3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPolysExporterT3D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPolysExporterT3D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPolysExporterT3D, 124546198);
	template<> UNREALED_API UClass* StaticClass<UPolysExporterT3D>()
	{
		return UPolysExporterT3D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPolysExporterT3D(Z_Construct_UClass_UPolysExporterT3D, &UPolysExporterT3D::StaticClass, TEXT("/Script/UnrealEd"), TEXT("UPolysExporterT3D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPolysExporterT3D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
