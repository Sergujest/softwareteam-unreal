// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInterstitialAd;
enum class EAdMobError : uint8;
class UBannerView;
class UShowRewardedVideo;
struct FAdMobAdRequest;
class ULoadRewardedVideoAd;
class UPauseRewardedVideo;
class UResumeRewardedVideo;
struct FAdSize;
class UCreateBannerView;
class ULoadAdBannerView;
class UHideAdBannerView;
class UShowBannerView;
class UPauseBannerView;
class UResumeBannerView;
class UMoveToBannerView;
class UCreateInterstitialAd;
class ULoadAdInterstitial;
class UShowInterstitial;
#ifdef FIREBASEFEATURES_AdMobNodes_generated_h
#error "AdMobNodes.generated.h already included, missing '#pragma once' in AdMobNodes.h"
#endif
#define FIREBASEFEATURES_AdMobNodes_generated_h

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_299_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultCreateInterstitial_Parms \
{ \
	UInterstitialAd* InterstitialAd; \
	EAdMobError Error; \
}; \
static inline void FDynMultCreateInterstitial_DelegateWrapper(const FMulticastScriptDelegate& DynMultCreateInterstitial, UInterstitialAd* InterstitialAd, const EAdMobError Error) \
{ \
	_Script_FirebaseFeatures_eventDynMultCreateInterstitial_Parms Parms; \
	Parms.InterstitialAd=InterstitialAd; \
	Parms.Error=Error; \
	DynMultCreateInterstitial.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_111_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultCreateBanner_Parms \
{ \
	UBannerView* BannerView; \
	EAdMobError Error; \
}; \
static inline void FDynMultCreateBanner_DelegateWrapper(const FMulticastScriptDelegate& DynMultCreateBanner, UBannerView* BannerView, const EAdMobError Error) \
{ \
	_Script_FirebaseFeatures_eventDynMultCreateBanner_Parms Parms; \
	Parms.BannerView=BannerView; \
	Parms.Error=Error; \
	DynMultCreateBanner.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_13_DELEGATE \
struct _Script_FirebaseFeatures_eventDynMultAdMobCallback_Parms \
{ \
	EAdMobError Error; \
}; \
static inline void FDynMultAdMobCallback_DelegateWrapper(const FMulticastScriptDelegate& DynMultAdMobCallback, const EAdMobError Error) \
{ \
	_Script_FirebaseFeatures_eventDynMultAdMobCallback_Parms Parms; \
	Parms.Error=Error; \
	DynMultAdMobCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowRewardedVideo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowRewardedVideo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShowRewardedVideo(); \
	friend struct Z_Construct_UClass_UShowRewardedVideo_Statics; \
public: \
	DECLARE_CLASS(UShowRewardedVideo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UShowRewardedVideo)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUShowRewardedVideo(); \
	friend struct Z_Construct_UClass_UShowRewardedVideo_Statics; \
public: \
	DECLARE_CLASS(UShowRewardedVideo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UShowRewardedVideo)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShowRewardedVideo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowRewardedVideo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShowRewardedVideo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowRewardedVideo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShowRewardedVideo(UShowRewardedVideo&&); \
	NO_API UShowRewardedVideo(const UShowRewardedVideo&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShowRewardedVideo(UShowRewardedVideo&&); \
	NO_API UShowRewardedVideo(const UShowRewardedVideo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShowRewardedVideo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowRewardedVideo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShowRewardedVideo)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_15_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UShowRewardedVideo>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadRewardedVideoAd);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadRewardedVideoAd);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadRewardedVideoAd(); \
	friend struct Z_Construct_UClass_ULoadRewardedVideoAd_Statics; \
public: \
	DECLARE_CLASS(ULoadRewardedVideoAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULoadRewardedVideoAd)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_INCLASS \
private: \
	static void StaticRegisterNativesULoadRewardedVideoAd(); \
	friend struct Z_Construct_UClass_ULoadRewardedVideoAd_Statics; \
public: \
	DECLARE_CLASS(ULoadRewardedVideoAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULoadRewardedVideoAd)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadRewardedVideoAd(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadRewardedVideoAd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadRewardedVideoAd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadRewardedVideoAd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadRewardedVideoAd(ULoadRewardedVideoAd&&); \
	NO_API ULoadRewardedVideoAd(const ULoadRewardedVideoAd&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadRewardedVideoAd(ULoadRewardedVideoAd&&); \
	NO_API ULoadRewardedVideoAd(const ULoadRewardedVideoAd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadRewardedVideoAd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadRewardedVideoAd); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoadRewardedVideoAd)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_38_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class ULoadRewardedVideoAd>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPauseRewardedVideo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPauseRewardedVideo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseRewardedVideo(); \
	friend struct Z_Construct_UClass_UPauseRewardedVideo_Statics; \
public: \
	DECLARE_CLASS(UPauseRewardedVideo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UPauseRewardedVideo)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_INCLASS \
private: \
	static void StaticRegisterNativesUPauseRewardedVideo(); \
	friend struct Z_Construct_UClass_UPauseRewardedVideo_Statics; \
public: \
	DECLARE_CLASS(UPauseRewardedVideo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UPauseRewardedVideo)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseRewardedVideo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseRewardedVideo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseRewardedVideo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseRewardedVideo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseRewardedVideo(UPauseRewardedVideo&&); \
	NO_API UPauseRewardedVideo(const UPauseRewardedVideo&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseRewardedVideo(UPauseRewardedVideo&&); \
	NO_API UPauseRewardedVideo(const UPauseRewardedVideo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseRewardedVideo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseRewardedVideo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPauseRewardedVideo)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_65_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_68_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UPauseRewardedVideo>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResumeRewardedVideo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResumeRewardedVideo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResumeRewardedVideo(); \
	friend struct Z_Construct_UClass_UResumeRewardedVideo_Statics; \
public: \
	DECLARE_CLASS(UResumeRewardedVideo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UResumeRewardedVideo)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUResumeRewardedVideo(); \
	friend struct Z_Construct_UClass_UResumeRewardedVideo_Statics; \
public: \
	DECLARE_CLASS(UResumeRewardedVideo, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UResumeRewardedVideo)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResumeRewardedVideo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResumeRewardedVideo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResumeRewardedVideo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResumeRewardedVideo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResumeRewardedVideo(UResumeRewardedVideo&&); \
	NO_API UResumeRewardedVideo(const UResumeRewardedVideo&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResumeRewardedVideo(UResumeRewardedVideo&&); \
	NO_API UResumeRewardedVideo(const UResumeRewardedVideo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResumeRewardedVideo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResumeRewardedVideo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UResumeRewardedVideo)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_88_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_91_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UResumeRewardedVideo>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateBannerView);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateBannerView);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateBannerView(); \
	friend struct Z_Construct_UClass_UCreateBannerView_Statics; \
public: \
	DECLARE_CLASS(UCreateBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCreateBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUCreateBannerView(); \
	friend struct Z_Construct_UClass_UCreateBannerView_Statics; \
public: \
	DECLARE_CLASS(UCreateBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCreateBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateBannerView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateBannerView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateBannerView(UCreateBannerView&&); \
	NO_API UCreateBannerView(const UCreateBannerView&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateBannerView(UCreateBannerView&&); \
	NO_API UCreateBannerView(const UCreateBannerView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateBannerView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Banner() { return STRUCT_OFFSET(UCreateBannerView, Banner); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_113_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_116_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UCreateBannerView>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadAd);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadAd);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadAdBannerView(); \
	friend struct Z_Construct_UClass_ULoadAdBannerView_Statics; \
public: \
	DECLARE_CLASS(ULoadAdBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULoadAdBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_INCLASS \
private: \
	static void StaticRegisterNativesULoadAdBannerView(); \
	friend struct Z_Construct_UClass_ULoadAdBannerView_Statics; \
public: \
	DECLARE_CLASS(ULoadAdBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULoadAdBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadAdBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadAdBannerView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadAdBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadAdBannerView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadAdBannerView(ULoadAdBannerView&&); \
	NO_API ULoadAdBannerView(const ULoadAdBannerView&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadAdBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadAdBannerView(ULoadAdBannerView&&); \
	NO_API ULoadAdBannerView(const ULoadAdBannerView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadAdBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadAdBannerView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadAdBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Banner() { return STRUCT_OFFSET(ULoadAdBannerView, Banner); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_144_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_147_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class ULoadAdBannerView>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHide);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHide);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHideAdBannerView(); \
	friend struct Z_Construct_UClass_UHideAdBannerView_Statics; \
public: \
	DECLARE_CLASS(UHideAdBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UHideAdBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_INCLASS \
private: \
	static void StaticRegisterNativesUHideAdBannerView(); \
	friend struct Z_Construct_UClass_UHideAdBannerView_Statics; \
public: \
	DECLARE_CLASS(UHideAdBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UHideAdBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHideAdBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHideAdBannerView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHideAdBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHideAdBannerView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHideAdBannerView(UHideAdBannerView&&); \
	NO_API UHideAdBannerView(const UHideAdBannerView&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHideAdBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHideAdBannerView(UHideAdBannerView&&); \
	NO_API UHideAdBannerView(const UHideAdBannerView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHideAdBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHideAdBannerView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHideAdBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Banner() { return STRUCT_OFFSET(UHideAdBannerView, Banner); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_171_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_174_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UHideAdBannerView>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShow);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShow);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShowBannerView(); \
	friend struct Z_Construct_UClass_UShowBannerView_Statics; \
public: \
	DECLARE_CLASS(UShowBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UShowBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_INCLASS \
private: \
	static void StaticRegisterNativesUShowBannerView(); \
	friend struct Z_Construct_UClass_UShowBannerView_Statics; \
public: \
	DECLARE_CLASS(UShowBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UShowBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShowBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowBannerView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShowBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowBannerView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShowBannerView(UShowBannerView&&); \
	NO_API UShowBannerView(const UShowBannerView&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShowBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShowBannerView(UShowBannerView&&); \
	NO_API UShowBannerView(const UShowBannerView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShowBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowBannerView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Banner() { return STRUCT_OFFSET(UShowBannerView, Banner); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_196_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_199_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UShowBannerView>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPause);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPause);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPauseBannerView(); \
	friend struct Z_Construct_UClass_UPauseBannerView_Statics; \
public: \
	DECLARE_CLASS(UPauseBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UPauseBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_INCLASS \
private: \
	static void StaticRegisterNativesUPauseBannerView(); \
	friend struct Z_Construct_UClass_UPauseBannerView_Statics; \
public: \
	DECLARE_CLASS(UPauseBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UPauseBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseBannerView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseBannerView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseBannerView(UPauseBannerView&&); \
	NO_API UPauseBannerView(const UPauseBannerView&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPauseBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPauseBannerView(UPauseBannerView&&); \
	NO_API UPauseBannerView(const UPauseBannerView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPauseBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPauseBannerView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPauseBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Banner() { return STRUCT_OFFSET(UPauseBannerView, Banner); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_222_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_225_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UPauseBannerView>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResume);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResume);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUResumeBannerView(); \
	friend struct Z_Construct_UClass_UResumeBannerView_Statics; \
public: \
	DECLARE_CLASS(UResumeBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UResumeBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_INCLASS \
private: \
	static void StaticRegisterNativesUResumeBannerView(); \
	friend struct Z_Construct_UClass_UResumeBannerView_Statics; \
public: \
	DECLARE_CLASS(UResumeBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UResumeBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResumeBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResumeBannerView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResumeBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResumeBannerView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResumeBannerView(UResumeBannerView&&); \
	NO_API UResumeBannerView(const UResumeBannerView&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UResumeBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UResumeBannerView(UResumeBannerView&&); \
	NO_API UResumeBannerView(const UResumeBannerView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UResumeBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UResumeBannerView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UResumeBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Banner() { return STRUCT_OFFSET(UResumeBannerView, Banner); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_247_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_250_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UResumeBannerView>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveTo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveTo);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMoveToBannerView(); \
	friend struct Z_Construct_UClass_UMoveToBannerView_Statics; \
public: \
	DECLARE_CLASS(UMoveToBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UMoveToBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_INCLASS \
private: \
	static void StaticRegisterNativesUMoveToBannerView(); \
	friend struct Z_Construct_UClass_UMoveToBannerView_Statics; \
public: \
	DECLARE_CLASS(UMoveToBannerView, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UMoveToBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoveToBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoveToBannerView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoveToBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveToBannerView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoveToBannerView(UMoveToBannerView&&); \
	NO_API UMoveToBannerView(const UMoveToBannerView&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMoveToBannerView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMoveToBannerView(UMoveToBannerView&&); \
	NO_API UMoveToBannerView(const UMoveToBannerView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMoveToBannerView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMoveToBannerView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMoveToBannerView)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Banner() { return STRUCT_OFFSET(UMoveToBannerView, Banner); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_272_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_275_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UMoveToBannerView>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateInterstitialAd);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateInterstitialAd);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCreateInterstitialAd(); \
	friend struct Z_Construct_UClass_UCreateInterstitialAd_Statics; \
public: \
	DECLARE_CLASS(UCreateInterstitialAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCreateInterstitialAd)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_INCLASS \
private: \
	static void StaticRegisterNativesUCreateInterstitialAd(); \
	friend struct Z_Construct_UClass_UCreateInterstitialAd_Statics; \
public: \
	DECLARE_CLASS(UCreateInterstitialAd, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UCreateInterstitialAd)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateInterstitialAd(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateInterstitialAd) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateInterstitialAd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateInterstitialAd); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateInterstitialAd(UCreateInterstitialAd&&); \
	NO_API UCreateInterstitialAd(const UCreateInterstitialAd&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCreateInterstitialAd(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCreateInterstitialAd(UCreateInterstitialAd&&); \
	NO_API UCreateInterstitialAd(const UCreateInterstitialAd&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCreateInterstitialAd); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCreateInterstitialAd); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCreateInterstitialAd)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Interstitial() { return STRUCT_OFFSET(UCreateInterstitialAd, Interstitial); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_301_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_304_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UCreateInterstitialAd>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLoadAd);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLoadAd);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoadAdInterstitial(); \
	friend struct Z_Construct_UClass_ULoadAdInterstitial_Statics; \
public: \
	DECLARE_CLASS(ULoadAdInterstitial, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULoadAdInterstitial)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_INCLASS \
private: \
	static void StaticRegisterNativesULoadAdInterstitial(); \
	friend struct Z_Construct_UClass_ULoadAdInterstitial_Statics; \
public: \
	DECLARE_CLASS(ULoadAdInterstitial, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(ULoadAdInterstitial)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadAdInterstitial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadAdInterstitial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadAdInterstitial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadAdInterstitial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadAdInterstitial(ULoadAdInterstitial&&); \
	NO_API ULoadAdInterstitial(const ULoadAdInterstitial&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoadAdInterstitial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoadAdInterstitial(ULoadAdInterstitial&&); \
	NO_API ULoadAdInterstitial(const ULoadAdInterstitial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoadAdInterstitial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoadAdInterstitial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoadAdInterstitial)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Interstitial() { return STRUCT_OFFSET(ULoadAdInterstitial, Interstitial); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_331_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_334_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class ULoadAdInterstitial>();

#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_SPARSE_DATA
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShow);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShow);


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShowInterstitial(); \
	friend struct Z_Construct_UClass_UShowInterstitial_Statics; \
public: \
	DECLARE_CLASS(UShowInterstitial, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UShowInterstitial)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_INCLASS \
private: \
	static void StaticRegisterNativesUShowInterstitial(); \
	friend struct Z_Construct_UClass_UShowInterstitial_Statics; \
public: \
	DECLARE_CLASS(UShowInterstitial, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FirebaseFeatures"), NO_API) \
	DECLARE_SERIALIZER(UShowInterstitial)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShowInterstitial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowInterstitial) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShowInterstitial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowInterstitial); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShowInterstitial(UShowInterstitial&&); \
	NO_API UShowInterstitial(const UShowInterstitial&); \
public:


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShowInterstitial(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShowInterstitial(UShowInterstitial&&); \
	NO_API UShowInterstitial(const UShowInterstitial&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShowInterstitial); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowInterstitial); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowInterstitial)


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Interstitial() { return STRUCT_OFFSET(UShowInterstitial, Interstitial); }


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_358_PROLOG
#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_RPC_WRAPPERS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_INCLASS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_SPARSE_DATA \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h_361_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIREBASEFEATURES_API UClass* StaticClass<class UShowInterstitial>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_FirebaseFeatures_Source_FirebaseFeatures_Private_AdMob_AdMobNodes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
