#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499;
// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E;
// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3;
// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17;
// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC;
// System.Collections.Generic.HashSet`1<System.String>
struct HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178;
// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras>
struct List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE;
// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D;
// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A;
// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2;
// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D;
// GoogleMobileAds.Api.AdValue
struct AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD;
// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// GoogleMobileAds.Common.IAdErrorClient
struct IAdErrorClient_t1070A9DCB8BBE68B67D9ECBC19949CDF415AD2BF;
// GoogleMobileAds.IClientFactory
struct IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252;
// GoogleMobileAds.Common.IInitializationStatusClient
struct IInitializationStatusClient_t8FB5AA028F4FF61A5B8952A9D5546BC331877A9D;
// GoogleMobileAds.Common.IInterstitialClient
struct IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784;
// GoogleMobileAds.Common.ILoadAdErrorClient
struct ILoadAdErrorClient_t82CFD9A1EFB235DD188F81112DF3EAE96806A8D9;
// GoogleMobileAds.Common.IMobileAdsClient
struct IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F;
// GoogleMobileAds.Common.IRewardedAdClient
struct IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE;
// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD;
// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC;
// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62;
// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5;
// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511;
// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
IL2CPP_EXTERN_C String_t* _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
IL2CPP_EXTERN_C String_t* _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__0_mD9AB20C1FFAEAD6A626A6BBCDFD48A3DF9DF2DB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__1_mBA91FE835789507100A2CC4E8E854119F23952DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__2_m7850866C3C79A5D4A3089CAB06307BC70C759358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__3_m4A3C7126A706F3E3D5F283824AAD5227F45932DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__4_m734625FBF51CD2C8436A9956714F9E292FF7517B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__5_m221190AE61A632B50FBD86597A674450BEC0DD76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InterstitialAd_U3CInterstitialAdU3Em__6_m46F6D45ECC414351A8396C8E8C8FAEC66A474F83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MobileAds_GetClientFactory_mFFE5F0E6ACE1CC37323A3EE6A188A55872AC8479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__0_m4FD384A761281F475F9E2218F9C67FAE0B6D680B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__1_mE790647E69FE71BD265705C2EE567EAC0BACDF86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__2_m8B50377DBBC149247995ABFF7DA7A6D0F9B700D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__3_m24EBE0A4DFE9050EC5B1E375E0F4E24CA7E3D3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__4_m13C7A88EA72D423A7344C30A2D38D27851A7CFC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__5_m63B410882F4A64A35EF48E1F4E88C38210E84F1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__6_mBDCA1D60EFC88A7B2A101CE6847F37384CE4E85D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__7_m3B9289109237C593AAAA7660A4A9E657B6290ED5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewardedAd_U3CRewardedAdU3Em__8_m22E2ED99D3ABD0AE9E78CF74DAEE8620367178F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tE42916054522E4DD6B63B142419C43597A882300 
{
};

// GoogleMobileAds.Api.AdError
struct AdError_tA3BF7518349885A73447524367693A096B3DD1AE  : public RuntimeObject
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Api.AdError::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.AdRequest
struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D  : public RuntimeObject
{
	// System.Collections.Generic.HashSet`1<System.String> GoogleMobileAds.Api.AdRequest::<Keywords>k__BackingField
	HashSet_1_tEFC6605F7DE53F71946C33FD371E53C3100F2178* ___U3CKeywordsU3Ek__BackingField_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> GoogleMobileAds.Api.AdRequest::<Extras>k__BackingField
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___U3CExtrasU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<GoogleMobileAds.Api.Mediation.MediationExtras> GoogleMobileAds.Api.AdRequest::<MediationExtras>k__BackingField
	List_1_t5E2EB19AA6B9CFA733A67F57AF74DCBE981C3376* ___U3CMediationExtrasU3Ek__BackingField_3;
};

struct AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D_StaticFields
{
	// System.String GoogleMobileAds.Api.AdRequest::<Version>k__BackingField
	String_t* ___U3CVersionU3Ek__BackingField_0;
};
struct Il2CppArrayBounds;

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// GoogleMobileAds.Api.InitializationStatus
struct InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInitializationStatusClient GoogleMobileAds.Api.InitializationStatus::client
	RuntimeObject* ___client_0;
};

// GoogleMobileAds.Api.InterstitialAd
struct InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC  : public RuntimeObject
{
	// GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.Api.InterstitialAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.InterstitialAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.InterstitialAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.InterstitialAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.InterstitialAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_9;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// GoogleMobileAds.Api.MobileAds
struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5  : public RuntimeObject
{
	// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::client
	RuntimeObject* ___client_0;
};

struct MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields
{
	// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::clientFactory
	RuntimeObject* ___clientFactory_1;
	// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::instance
	MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* ___instance_2;
};

// GoogleMobileAds.Api.RewardedAd
struct RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09  : public RuntimeObject
{
	// GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.Api.RewardedAd::client
	RuntimeObject* ___client_0;
	// System.String GoogleMobileAds.Api.RewardedAd::adUnitId
	String_t* ___adUnitId_1;
	// System.Boolean GoogleMobileAds.Api.RewardedAd::isLoaded
	bool ___isLoaded_2;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdLoaded
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdLoaded_3;
	// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToLoad
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___OnAdFailedToLoad_4;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdOpening
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdOpening_5;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdClosed
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdClosed_6;
	// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs> GoogleMobileAds.Api.RewardedAd::OnAdFailedToShow
	EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* ___OnAdFailedToShow_7;
	// System.EventHandler`1<System.EventArgs> GoogleMobileAds.Api.RewardedAd::OnAdDidRecordImpression
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___OnAdDidRecordImpression_8;
	// System.EventHandler`1<GoogleMobileAds.Api.Reward> GoogleMobileAds.Api.RewardedAd::OnUserEarnedReward
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___OnUserEarnedReward_9;
	// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs> GoogleMobileAds.Api.RewardedAd::OnPaidEvent
	EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* ___OnPaidEvent_10;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0
struct U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E  : public RuntimeObject
{
	// System.Action`1<GoogleMobileAds.Api.InitializationStatus> GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::initCompleteAction
	Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction_0;
};

// GoogleMobileAds.Common.AdErrorClientEventArgs
struct AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::<AdErrorClient>k__BackingField
	RuntimeObject* ___U3CAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdErrorEventArgs
struct AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdError GoogleMobileAds.Api.AdErrorEventArgs::<AdError>k__BackingField
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___U3CAdErrorU3Ek__BackingField_1;
	// System.String GoogleMobileAds.Api.AdErrorEventArgs::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
};

// GoogleMobileAds.Api.AdFailedToLoadEventArgs
struct AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::<LoadAdError>k__BackingField
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___U3CLoadAdErrorU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.AdValueEventArgs
struct AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Api.AdValue GoogleMobileAds.Api.AdValueEventArgs::<AdValue>k__BackingField
	AdValue_t3D87DDD4D06FAAA212BD2119CA464B4F0FEBBCFD* ___U3CAdValueU3Ek__BackingField_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// GoogleMobileAds.Api.LoadAdError
struct LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62  : public AdError_tA3BF7518349885A73447524367693A096B3DD1AE
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Api.LoadAdError::client
	RuntimeObject* ___client_1;
};

// GoogleMobileAds.Common.LoadAdErrorClientEventArgs
struct LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::<LoadAdErrorClient>k__BackingField
	RuntimeObject* ___U3CLoadAdErrorClientU3Ek__BackingField_1;
};

// GoogleMobileAds.Api.Reward
struct Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.String GoogleMobileAds.Api.Reward::<Type>k__BackingField
	String_t* ___U3CTypeU3Ek__BackingField_1;
	// System.Double GoogleMobileAds.Api.Reward::<Amount>k__BackingField
	double ___U3CAmountU3Ek__BackingField_2;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>
struct Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499  : public MulticastDelegate_t
{
};

// System.Action`1<GoogleMobileAds.Api.InitializationStatus>
struct Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>
struct EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>
struct EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>
struct EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>
struct EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>
struct EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<GoogleMobileAds.Api.Reward>
struct EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC  : public MulticastDelegate_t
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mFFE5F0E6ACE1CC37323A3EE6A188A55872AC8479 (const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0 (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9 (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64 (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.ILoadAdErrorClient GoogleMobileAds.Common.LoadAdErrorClientEventArgs::get_LoadAdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06 (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* __this, RuntimeObject* ___sender0, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*, RuntimeObject*, AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IAdErrorClient GoogleMobileAds.Common.AdErrorClientEventArgs::get_AdErrorClient()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdErrorEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* __this, RuntimeObject* ___sender0, AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3*, RuntimeObject*, AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*, RuntimeObject*, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m548A54D38DB335760BFC1303BC76C0B5F23AC018 (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10 (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* MobileAds_get_Instance_m24B6476391F6A08AE60B4C8F43CD0BD11A91C320 (const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC006F130CC140CE80CA285AAD5974413D196CCD3 (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void GoogleMobileAds.Common.MobileAdsEventExecutor::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAdsEventExecutor_Initialize_mC709241C3C961D263D46BC73FBFB66E07AEB2AC6 (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D (const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67 (Type_t* ___type0, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, RuntimeObject* ___client0, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Api.InitializationStatus>::Invoke(T)
inline void Action_1_Invoke_m790B395C4CBEA3E5F364964EAC8520817D5C9A92_inline (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* __this, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE*, InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::.ctor(System.Object,System.IntPtr)
inline void EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146 (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*, RuntimeObject*, intptr_t, const RuntimeMethod*))EventHandler_1__ctor_mBA2E748CFBA7A0EEC0A373A6F634D3B5774EA370_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.EventHandler`1<GoogleMobileAds.Api.Reward>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m8B60E1EAE8DD8802908DF7398D18814BD5F2F903_inline (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*, RuntimeObject*, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdError::.ctor(GoogleMobileAds.Common.IAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		return;
	}
}
// System.String GoogleMobileAds.Api.AdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AdError_ToString_mD2183315C9A1F6504900AD43F22BB385765FA9F9 (AdError_tA3BF7518349885A73447524367693A096B3DD1AE* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.AdErrorEventArgs::set_AdError(GoogleMobileAds.Api.AdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531 (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___value0, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = ___value0;
		__this->___U3CAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06 (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.LoadAdError GoogleMobileAds.Api.AdFailedToLoadEventArgs::get_LoadAdError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* AdFailedToLoadEventArgs_get_LoadAdError_m1024EE5A736DAF310FEE838CEBA91D921ACB919D (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = __this->___U3CLoadAdErrorU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.AdFailedToLoadEventArgs::set_LoadAdError(GoogleMobileAds.Api.LoadAdError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___value0, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___value0;
		__this->___U3CLoadAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InitializationStatus::.ctor(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15 (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___client0;
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.InterstitialAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd__ctor_m34ED4838C150810ED0636722A4399B0AA52146A9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__0_mD9AB20C1FFAEAD6A626A6BBCDFD48A3DF9DF2DB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__1_mBA91FE835789507100A2CC4E8E854119F23952DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__2_m7850866C3C79A5D4A3089CAB06307BC70C759358_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__3_m4A3C7126A706F3E3D5F283824AAD5227F45932DD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__4_m734625FBF51CD2C8436A9956714F9E292FF7517B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__5_m221190AE61A632B50FBD86597A674450BEC0DD76_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InterstitialAd_U3CInterstitialAdU3Em__6_m46F6D45ECC414351A8396C8E8C8FAEC66A474F83_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFFE5F0E6ACE1CC37323A3EE6A188A55872AC8479(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* GoogleMobileAds.Common.IInterstitialClient GoogleMobileAds.IClientFactory::BuildInterstitialClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->___client_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_1);
		String_t* L_2 = ___adUnitId0;
		__this->___adUnitId_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adUnitId_1), (void*)L_2);
		__this->___isLoaded_2 = (bool)0;
		RuntimeObject* L_3 = __this->___client_0;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(14 /* System.Void GoogleMobileAds.Common.IInterstitialClient::CreateInterstitialAd() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__0_mD9AB20C1FFAEAD6A626A6BBCDFD48A3DF9DF2DB7_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->___client_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_7, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__1_mBA91FE835789507100A2CC4E8E854119F23952DF_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_9, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__2_m7850866C3C79A5D4A3089CAB06307BC70C759358_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_11, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__3_m4A3C7126A706F3E3D5F283824AAD5227F45932DD_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->___client_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_13 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_13, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__4_m734625FBF51CD2C8436A9956714F9E292FF7517B_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_15 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_15, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__5_m221190AE61A632B50FBD86597A674450BEC0DD76_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->___client_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_17 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_17, __this, (intptr_t)((void*)InterstitialAd_U3CInterstitialAdU3Em__6_m46F6D45ECC414351A8396C8E8C8FAEC66A474F83_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IInterstitialClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_16, L_17);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdLoaded_mAF7AA2A0B6727784355A00BD3E9CCDC2A15E837D (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdLoaded_m91C35A6E06656E5654EF283678A7865C238BB4FC (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdFailedToLoad_m7E29DD3BC938CB8CE07BD72CD9E516FD4B145525 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_4);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdFailedToLoad_mE3B77178758E9D191422324F4529BE71B59724C9 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_4);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdOpening_m959F3574110E01E5E986D7AB584A9E62E65D7F97 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdOpening_m9BDE013724D1AC139CB1BA5B926342F70BF677D2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_add_OnAdClosed_m4EC3CE8A13F80FBCF0868C421B85E3394A627DCF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_remove_OnAdClosed_m1ACD7753DE0DF8499C6BB968EF86274F0D57B1C2 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_LoadAd_mE7FE14FCDE21B4728A824701D09C095C2B673117 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		String_t* L_1 = __this->___adUnitId_1;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(15 /* System.Void GoogleMobileAds.Common.IInterstitialClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.InterstitialAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InterstitialAd_IsLoaded_m089B07194BDCBBF19780DB17D5AC9E44D7A851C7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoaded_2;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Show_m70188D3BE2543E7A0B58579A5991DA5A9E11CBAB (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___isLoaded_2 = (bool)0;
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IInterstitialClient::Show() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_Destroy_m5C5C9367FF6A3500C3B61FD2BDBE5B6AF2FF0778 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(17 /* System.Void GoogleMobileAds.Common.IInterstitialClient::DestroyInterstitial() */, IInterstitialClient_t18D2E5ED7E33938C3CC2556409B01959F8E4C784_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__0_mD9AB20C1FFAEAD6A626A6BBCDFD48A3DF9DF2DB7 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		__this->___isLoaded_2 = (bool)1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_3;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__1_mBA91FE835789507100A2CC4E8E854119F23952DF (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_1, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_4;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__2(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__2_m7850866C3C79A5D4A3089CAB06307BC70C759358 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_5;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__3_m4A3C7126A706F3E3D5F283824AAD5227F45932DD (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_6;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__4(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__4_m734625FBF51CD2C8436A9956714F9E292FF7517B (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_1, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_3 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToShow_7;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__5(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__5_m221190AE61A632B50FBD86597A674450BEC0DD76 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_8;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.InterstitialAd::<InterstitialAd>m__6(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InterstitialAd_U3CInterstitialAdU3Em__6_m46F6D45ECC414351A8396C8E8C8FAEC66A474F83 (InterstitialAd_t41640B3957C2B66FA5F6F38A4805393B6B013FEC* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_9;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.LoadAdError::.ctor(GoogleMobileAds.Common.ILoadAdErrorClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, RuntimeObject* ___client0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___client0;
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(__this, L_0, NULL);
		RuntimeObject* L_1 = ___client0;
		__this->___client_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_1), (void*)L_1);
		return;
	}
}
// System.String GoogleMobileAds.Api.LoadAdError::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* LoadAdError_ToString_mC2DBA6C870EEBF993492FF04A29F4AE567D45C53 (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___client_1;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10 (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetMobileAdsClient_m548A54D38DB335760BFC1303BC76C0B5F23AC018(NULL);
		__this->___client_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Api.MobileAds GoogleMobileAds.Api.MobileAds::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* MobileAds_get_Instance_m24B6476391F6A08AE60B4C8F43CD0BD11A91C320 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_0 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_1 = (MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5*)il2cpp_codegen_object_new(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		MobileAds__ctor_mE209BFED2C4B3EDEA77A1D92FA94E692454F9B10(L_1, NULL);
		((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2), (void*)L_1);
	}

IL_0014:
	{
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_2 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___instance_2;
		return L_2;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds::Initialize(System.Action`1<GoogleMobileAds.Api.InitializationStatus>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MobileAds_Initialize_m0669FF1DDB182D0ACA91E08D6B0871A26867B1AA (Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* ___initCompleteAction0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* V_0 = NULL;
	{
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_0 = (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E*)il2cpp_codegen_object_new(U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74(L_0, NULL);
		V_0 = L_0;
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_1 = V_0;
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_2 = ___initCompleteAction0;
		NullCheck(L_1);
		L_1->___initCompleteAction_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___initCompleteAction_0), (void*)L_2);
		MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5* L_3;
		L_3 = MobileAds_get_Instance_m24B6476391F6A08AE60B4C8F43CD0BD11A91C320(NULL);
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___client_0;
		U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* L_5 = V_0;
		Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* L_6 = (Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499*)il2cpp_codegen_object_new(Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_mC006F130CC140CE80CA285AAD5974413D196CCD3(L_6, L_5, (intptr_t)((void*)U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_1_t2C0F993ABBCCB1EEED0F494A48A590F2616E0499* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IMobileAdsClient::Initialize(System.Action`1<GoogleMobileAds.Common.IInitializationStatusClient>) */, IMobileAdsClient_tA147A8D3D422203A033C8F34FE931A06B1FEB97F_il2cpp_TypeInfo_var, L_4, L_6);
		il2cpp_codegen_runtime_class_init_inline(MobileAdsEventExecutor_t1185FA76E60746A4BF6150BBFC4BD17B123F380A_il2cpp_TypeInfo_var);
		MobileAdsEventExecutor_Initialize_mC709241C3C961D263D46BC73FBFB66E07AEB2AC6(NULL);
		return;
	}
}
// GoogleMobileAds.IClientFactory GoogleMobileAds.Api.MobileAds::GetClientFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetClientFactory_mFFE5F0E6ACE1CC37323A3EE6A188A55872AC8479 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_GetClientFactory_mFFE5F0E6ACE1CC37323A3EE6A188A55872AC8479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1;
		if (L_0)
		{
			goto IL_0056;
		}
	}
	{
		V_0 = (String_t*)NULL;
		int32_t L_1;
		L_1 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0022;
		}
	}
	{
		V_0 = _stringLiteral1E40C18D8AC4A6D9A62D3A099D09AF791342A6DB;
		goto IL_003f;
	}

IL_0022:
	{
		int32_t L_2;
		L_2 = Application_get_platform_m1AB34E71D9885B120F6021EB2B11DCB28CD6008D(NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0039;
		}
	}
	{
		V_0 = _stringLiteralBDD22D9991854F9B5ADA35715330812319A1362B;
		goto IL_003f;
	}

IL_0039:
	{
		V_0 = _stringLiteralB0496525135724A6D7138AB94BD6661514AD7DAE;
	}

IL_003f:
	{
		String_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = il2cpp_codegen_get_type(L_3, Type_GetType_m80C621C4D91A89DDEE6D3DDF343925B30F99BC45_RuntimeMethod_var, MobileAds_GetClientFactory_mFFE5F0E6ACE1CC37323A3EE6A188A55872AC8479_RuntimeMethod_var);
		V_1 = L_4;
		Type_t* L_5 = V_1;
		RuntimeObject* L_6;
		L_6 = Activator_CreateInstance_m0A28F274256F1444949E372089034D9FB66FBD67(L_5, NULL);
		((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1), (void*)((RuntimeObject*)Castclass((RuntimeObject*)L_6, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var)));
	}

IL_0056:
	{
		RuntimeObject* L_7 = ((MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_StaticFields*)il2cpp_codegen_static_fields_for(MobileAds_tE6A198EF1FBB6C42E5C1062E4B6CD5FB5B5494D5_il2cpp_TypeInfo_var))->___clientFactory_1;
		return L_7;
	}
}
// GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.Api.MobileAds::GetMobileAdsClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MobileAds_GetMobileAdsClient_m548A54D38DB335760BFC1303BC76C0B5F23AC018 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFFE5F0E6ACE1CC37323A3EE6A188A55872AC8479(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* GoogleMobileAds.Common.IMobileAdsClient GoogleMobileAds.IClientFactory::MobileAdsInstance() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0__ctor_m6DFCA2A06E9120467C5E1B941B84435F48BC9D74 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Api.MobileAds/<Initialize>c__AnonStorey0::<>m__0(GoogleMobileAds.Common.IInitializationStatusClient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeU3Ec__AnonStorey0_U3CU3Em__0_m8D6DA3278704BF784A5424EF89AAAC90A79F4414 (U3CInitializeU3Ec__AnonStorey0_tB4B8A1B8DEFDACD5B03BCA0CB64B49A6218E956E* __this, RuntimeObject* ___initStatusClient0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_0 = __this->___initCompleteAction_0;
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		Action_1_t61953204BFE962922BA541482E3ECC9BB03FC8EE* L_1 = __this->___initCompleteAction_0;
		RuntimeObject* L_2 = ___initStatusClient0;
		InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD* L_3 = (InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD*)il2cpp_codegen_object_new(InitializationStatus_t550D061D96119B8458B9FC389FBA74A1DBEB1DDD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		InitializationStatus__ctor_m1ECBC8D450C9F80E7D8A8F960722F3ED05AD2F15(L_3, L_2, NULL);
		NullCheck(L_1);
		Action_1_Invoke_m790B395C4CBEA3E5F364964EAC8520817D5C9A92_inline(L_1, L_3, NULL);
	}

IL_001c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Api.RewardedAd::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd__ctor_m1070740DC6E2FBC47C0F16E8FFCAF39BB5EC8BAD (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, String_t* ___adUnitId0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__0_m4FD384A761281F475F9E2218F9C67FAE0B6D680B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__1_mE790647E69FE71BD265705C2EE567EAC0BACDF86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__2_m8B50377DBBC149247995ABFF7DA7A6D0F9B700D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__3_m24EBE0A4DFE9050EC5B1E375E0F4E24CA7E3D3CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__4_m13C7A88EA72D423A7344C30A2D38D27851A7CFC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__5_m63B410882F4A64A35EF48E1F4E88C38210E84F1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__6_mBDCA1D60EFC88A7B2A101CE6847F37384CE4E85D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__7_m3B9289109237C593AAAA7660A4A9E657B6290ED5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RewardedAd_U3CRewardedAdU3Em__8_m22E2ED99D3ABD0AE9E78CF74DAEE8620367178F9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0;
		L_0 = MobileAds_GetClientFactory_mFFE5F0E6ACE1CC37323A3EE6A188A55872AC8479(NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* GoogleMobileAds.Common.IRewardedAdClient GoogleMobileAds.IClientFactory::BuildRewardedAdClient() */, IClientFactory_tB916FBC5880467FBFDF41CE059EF0D7057307252_il2cpp_TypeInfo_var, L_0);
		__this->___client_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___client_0), (void*)L_1);
		String_t* L_2 = ___adUnitId0;
		__this->___adUnitId_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adUnitId_1), (void*)L_2);
		__this->___isLoaded_2 = (bool)0;
		RuntimeObject* L_3 = __this->___client_0;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(16 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::CreateRewardedAd() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_3);
		RuntimeObject* L_4 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_5 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_5, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__0_m4FD384A761281F475F9E2218F9C67FAE0B6D680B_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(0 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_4, L_5);
		RuntimeObject* L_6 = __this->___client_0;
		EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* L_7 = (EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50*)il2cpp_codegen_object_new(EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		EventHandler_1__ctor_m84AB604E47D9F39CDB26057A3A6202C0E096F5C9(L_7, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__1_mE790647E69FE71BD265705C2EE567EAC0BACDF86_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		InterfaceActionInvoker1< EventHandler_1_tCA9CA1333E3C6F3F7AFFC7AB4401ABC3F1049D50* >::Invoke(2 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Common.LoadAdErrorClientEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_6, L_7);
		RuntimeObject* L_8 = __this->___client_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_9 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_9, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__2_m8B50377DBBC149247995ABFF7DA7A6D0F9B700D5_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_10 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_11 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_11, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__3_m24EBE0A4DFE9050EC5B1E375E0F4E24CA7E3D3CB_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(10 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidPresentFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_10, L_11);
		RuntimeObject* L_12 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_13 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_13, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__4_m13C7A88EA72D423A7344C30A2D38D27851A7CFC2_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(12 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidDismissFullScreenContent(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_14 = __this->___client_0;
		EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* L_15 = (EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E*)il2cpp_codegen_object_new(EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		EventHandler_1__ctor_mEB4BDC01DF31AFC470842A776CABEA9053594C64(L_15, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__5_m63B410882F4A64A35EF48E1F4E88C38210E84F1B_RuntimeMethod_var), NULL);
		NullCheck(L_14);
		InterfaceActionInvoker1< EventHandler_1_tE6F594B79408473D4004D4405BB5C5CFBA966E5E* >::Invoke(8 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdFailedToPresentFullScreenContent(System.EventHandler`1<GoogleMobileAds.Common.AdErrorClientEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_14, L_15);
		RuntimeObject* L_16 = __this->___client_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_17 = (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)il2cpp_codegen_object_new(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		EventHandler_1__ctor_mCB95906E90473A2BABEBC6C286D9268E255A8BC0(L_17, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__6_mBDCA1D60EFC88A7B2A101CE6847F37384CE4E85D_RuntimeMethod_var), NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* >::Invoke(14 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnAdDidRecordImpression(System.EventHandler`1<System.EventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_16, L_17);
		RuntimeObject* L_18 = __this->___client_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_19 = (EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)il2cpp_codegen_object_new(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		EventHandler_1__ctor_mB759CACFB208DA7C79637A2B4F041209D3CEC146(L_19, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__7_m3B9289109237C593AAAA7660A4A9E657B6290ED5_RuntimeMethod_var), NULL);
		NullCheck(L_18);
		InterfaceActionInvoker1< EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* >::Invoke(6 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_18, L_19);
		RuntimeObject* L_20 = __this->___client_0;
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_21 = (EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693*)il2cpp_codegen_object_new(EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		EventHandler_1__ctor_mAC3332BF3C27BFE2740FB2AC88CA48AA21E2627C(L_21, __this, (intptr_t)((void*)RewardedAd_U3CRewardedAdU3Em__8_m22E2ED99D3ABD0AE9E78CF74DAEE8620367178F9_RuntimeMethod_var), NULL);
		NullCheck(L_20);
		InterfaceActionInvoker1< EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* >::Invoke(4 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::add_OnPaidEvent(System.EventHandler`1<GoogleMobileAds.Api.AdValueEventArgs>) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_20, L_21);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdLoaded_mD0B12FB2ABBDE30E8732E99B5C779433E6BAD6F6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdLoaded(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdLoaded_mE88357C807E78FE3B707A546F9B30B3093C00DE6 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdLoaded_3);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdFailedToLoad_mB26D105153B1DB189E66011AABA403D89431895B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_4);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdFailedToLoad(System.EventHandler`1<GoogleMobileAds.Api.AdFailedToLoadEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdFailedToLoad_m41BD7D8E336FF59C55E8551EF6050B73524A5304 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_0 = NULL;
	EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17** L_2 = (&__this->___OnAdFailedToLoad_4);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_3 = V_1;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_6 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*>(L_2, ((EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)Castclass((RuntimeObject*)L_5, EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_8 = V_0;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_8) == ((RuntimeObject*)(EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdOpening_mD07D6D5227A775A714601F6E5632DE6466956E57 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdOpening(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdOpening_m3E59A310DEA1D14AE4AAE19435A4D24869120DA5 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdOpening_5);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnAdClosed_mACC55256BAE633DB7C82568589572958F0EC2C50 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnAdClosed(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnAdClosed_mC8EE3841BDB00AB65A340756A9DBD6F18A167617 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___OnAdClosed_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::add_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_add_OnUserEarnedReward_mB60E7A9832C6D85C8F0BF788A019E684C72A6989 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_9);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m8B9D24CED35033C7FC56501DFE650F5CB7FF012C(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::remove_OnUserEarnedReward(System.EventHandler`1<GoogleMobileAds.Api.Reward>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_remove_OnUserEarnedReward_m42D91A51C9CA31961FCE210034CAC29AF2F56254 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_0 = NULL;
	EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* V_1 = NULL;
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_9;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC** L_2 = (&__this->___OnUserEarnedReward_9);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_3 = V_1;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m40506877934EC1AD4ADAE57F5E97AF0BC0F96116(L_3, L_4, NULL);
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_6 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*>(L_2, ((EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)Castclass((RuntimeObject*)L_5, EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_8 = V_0;
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_8) == ((RuntimeObject*)(EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::LoadAd(GoogleMobileAds.Api.AdRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_LoadAd_m47B97DF0CABB6A9C4F75D61C39149B20C5E95DDB (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___client_0;
		String_t* L_1 = __this->___adUnitId_1;
		AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* L_2 = ___request0;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, AdRequest_tB2AC2CD266CFD5D636C917BC2D938BE96E72BF4D* >::Invoke(17 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::LoadAd(System.String,GoogleMobileAds.Api.AdRequest) */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Boolean GoogleMobileAds.Api.RewardedAd::IsLoaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewardedAd_IsLoaded_m9D2D719FA8F83759B06DCD846E6A09D4002E45F9 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___isLoaded_2;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_Show_mF937659797435830409614A6B7A9CC29FA031948 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___isLoaded_2 = (bool)0;
		RuntimeObject* L_0 = __this->___client_0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(18 /* System.Void GoogleMobileAds.Common.IRewardedAdClient::Show() */, IRewardedAdClient_t949F7B5C9EE80E93832663274F37DF3171FCADDE_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__0(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__0_m4FD384A761281F475F9E2218F9C67FAE0B6D680B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		__this->___isLoaded_2 = (bool)1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdLoaded_3;
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdLoaded_3;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__1(System.Object,GoogleMobileAds.Common.LoadAdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__1_mE790647E69FE71BD265705C2EE567EAC0BACDF86 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* V_0 = NULL;
	AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* V_1 = NULL;
	{
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_0 = __this->___OnAdFailedToLoad_4;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline(L_1, NULL);
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_3 = (LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62*)il2cpp_codegen_object_new(LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LoadAdError__ctor_m616B349928B08AD5C222B3136301B43465DE2A8F(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_tEA623A2209829AC843EEAEAFA70ED005E7D09D17* L_4 = __this->___OnAdFailedToLoad_4;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_5 = (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2*)il2cpp_codegen_object_new(AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdFailedToLoadEventArgs__ctor_m5C9152A46AA29747DDF6DE8D09CB75D788B02E06(L_5, NULL);
		V_1 = L_5;
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_6 = V_1;
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_7 = V_0;
		NullCheck(L_6);
		AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline(L_6, L_7, NULL);
		AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_mFD205FC6EB8381A363F2879B12608B4938DBC5DE_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__2(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__2_m8B50377DBBC149247995ABFF7DA7A6D0F9B700D5 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_1, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_3 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToShow_7;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__3(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__3_m24EBE0A4DFE9050EC5B1E375E0F4E24CA7E3D3CB (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdOpening_5;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdOpening_5;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__4(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__4_m13C7A88EA72D423A7344C30A2D38D27851A7CFC2 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdClosed_6;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdClosed_6;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__5(System.Object,GoogleMobileAds.Common.AdErrorClientEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__5_m63B410882F4A64A35EF48E1F4E88C38210E84F1B (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* ___args1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AdError_tA3BF7518349885A73447524367693A096B3DD1AE* V_0 = NULL;
	AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* V_1 = NULL;
	{
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_0 = __this->___OnAdFailedToShow_7;
		if (!L_0)
		{
			goto IL_0031;
		}
	}
	{
		AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* L_1 = ___args1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline(L_1, NULL);
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_3 = (AdError_tA3BF7518349885A73447524367693A096B3DD1AE*)il2cpp_codegen_object_new(AdError_tA3BF7518349885A73447524367693A096B3DD1AE_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		AdError__ctor_m15B953B294A80F8AF84ECECC285670B48A188F07(L_3, L_2, NULL);
		V_0 = L_3;
		EventHandler_1_t593257C5033982AD2B263F7A0B0FC937B82BFEF3* L_4 = __this->___OnAdFailedToShow_7;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_5 = (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A*)il2cpp_codegen_object_new(AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AdErrorEventArgs__ctor_mA9D3596FD8D78F86EAEDD58975F1EA3F5EAA2A13(L_5, NULL);
		V_1 = L_5;
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_6 = V_1;
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_7 = V_0;
		NullCheck(L_6);
		AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline(L_6, L_7, NULL);
		AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* L_8 = V_1;
		NullCheck(L_4);
		EventHandler_1_Invoke_m4945A6FCAE5EE083107847536C1D5E0C7BB0A393_inline(L_4, __this, L_8, NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__6(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__6_mBDCA1D60EFC88A7B2A101CE6847F37384CE4E85D (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___OnAdDidRecordImpression_8;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = __this->___OnAdDidRecordImpression_8;
		EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__7(System.Object,GoogleMobileAds.Api.Reward)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__7_m3B9289109237C593AAAA7660A4A9E657B6290ED5 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_0 = __this->___OnUserEarnedReward_9;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_t2CE28DD464FEA7CA750218186087659B7122DBAC* L_1 = __this->___OnUserEarnedReward_9;
		Reward_t0F20A888BB23A15D26BEF02E5C367B31ECB87511* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m8B60E1EAE8DD8802908DF7398D18814BD5F2F903_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Api.RewardedAd::<RewardedAd>m__8(System.Object,GoogleMobileAds.Api.AdValueEventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewardedAd_U3CRewardedAdU3Em__8_m22E2ED99D3ABD0AE9E78CF74DAEE8620367178F9 (RewardedAd_t6D9A2A205821D735AB48061D75AC8DC4E3FA5D09* __this, RuntimeObject* ___sender0, AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* ___args1, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_0 = __this->___OnPaidEvent_10;
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		EventHandler_1_tD03F309FAB5E0E541F6A0F22703239208016F693* L_1 = __this->___OnPaidEvent_10;
		AdValueEventArgs_tFE4F97B850E2D4EF184678E9861479BA39B1299D* L_2 = ___args1;
		NullCheck(L_1);
		EventHandler_1_Invoke_m0F6B2328B04963C9ABA23553B1B0376E83A248DF_inline(L_1, __this, L_2, NULL);
	}

IL_0018:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LoadAdErrorClientEventArgs_get_LoadAdErrorClient_m0D8BE9C6EABF53908FFC893F742D512A063DFA69_inline (LoadAdErrorClientEventArgs_t620986A0A396DB96DE025A536B77350BCAF9BEF2* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CLoadAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdFailedToLoadEventArgs_set_LoadAdError_mA714B09D79CA9FB166B7A8D2AAF50A56EFCAEDCF_inline (AdFailedToLoadEventArgs_tE066F90E1243641A362F1F7BBACACA2EFE3C38D2* __this, LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* ___value0, const RuntimeMethod* method) 
{
	{
		LoadAdError_t22654493F27C801157B803019F04E69E66CD4A62* L_0 = ___value0;
		__this->___U3CLoadAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLoadAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AdErrorClientEventArgs_get_AdErrorClient_mCF46AD61FF8A16FF1EEFE8372CBD6F369F6CF9EF_inline (AdErrorClientEventArgs_t911564D6B3C88F90B85A38EAF26518E4ED46212D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CAdErrorClientU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AdErrorEventArgs_set_AdError_m6660FBA277B3E60543768A146F04311BEE407531_inline (AdErrorEventArgs_t1DBA3607C875036E80F31EE6AC928BB12D34D32A* __this, AdError_tA3BF7518349885A73447524367693A096B3DD1AE* ___value0, const RuntimeMethod* method) 
{
	{
		AdError_tA3BF7518349885A73447524367693A096B3DD1AE* L_0 = ___value0;
		__this->___U3CAdErrorU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAdErrorU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
