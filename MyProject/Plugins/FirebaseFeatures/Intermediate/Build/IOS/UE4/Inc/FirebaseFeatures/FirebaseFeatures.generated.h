// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIREBASEFEATURES_FirebaseFeatures_generated_h
#error "FirebaseFeatures.generated.h already included, missing '#pragma once' in FirebaseFeatures.h"
#endif
#define FIREBASEFEATURES_FirebaseFeatures_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Public_FirebaseFeatures_h


#define FOREACH_ENUM_ELINKMATCHSTRENGTH(op) \
	op(ELinkMatchStrength::NoMatch) \
	op(ELinkMatchStrength::WeakMatch) \
	op(ELinkMatchStrength::StrongMatch) \
	op(ELinkMatchStrength::PerfectMatch) 

enum class ELinkMatchStrength : uint8;
template<> FIREBASEFEATURES_API UEnum* StaticEnum<ELinkMatchStrength>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
