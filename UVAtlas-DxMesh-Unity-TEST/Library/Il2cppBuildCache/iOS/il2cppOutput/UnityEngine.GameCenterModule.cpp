﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5;
// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49;
// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B;
// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<System.Boolean,System.Object>
struct Action_2_t4E94B0FCA1084D7868DB11A50767A4916CA3D3FB;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard[]
struct GcLeaderboardU5BU5D_t3680FC46C1DC6D830D99BD08FC946D62140B0B31;
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F;
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3;
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F;
// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D;
// UnityEngine.SocialPlatforms.IAchievement
struct IAchievement_tB5F481CB68CBDE785E796E6FE0457D9EA7A5C986;
// UnityEngine.SocialPlatforms.IAchievementDescription
struct IAchievementDescription_t3B0831EC194F0E304AA0073BDAA7B3E90BE13B3F;
// UnityEngine.SocialPlatforms.ILeaderboard
struct ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93;
// UnityEngine.SocialPlatforms.ILocalUser
struct ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t95B1CFEB3094570AFF240C7CDD61A3A5D0169E86;
// UnityEngine.SocialPlatforms.IUserProfile
struct IUserProfile_tF23DFE5CF90A1020C168F5751F7C4F2B628E22E3;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1;

IL2CPP_EXTERN_C RuntimeClass* AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeScope_t20CB388177E885D6B11816946D623907E276F08E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral023C61CBC6B5B20519E94C2D7DF0CAE83164CB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral0EB9CEC404FAEC84F4591C2F0DAF1F030A3878B0;
IL2CPP_EXTERN_C String_t* _stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968;
IL2CPP_EXTERN_C String_t* _stringLiteral410946CD131353B68F194902EF06C27382525682;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A;
IL2CPP_EXTERN_C String_t* _stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E;
IL2CPP_EXTERN_C String_t* _stringLiteral5FE7915692E0675AD0BF063D16336FF430832152;
IL2CPP_EXTERN_C String_t* _stringLiteral66A9B6842DC1D465CA5CFAF30DE6EDFAC6DF04E8;
IL2CPP_EXTERN_C String_t* _stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA;
IL2CPP_EXTERN_C String_t* _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
IL2CPP_EXTERN_C String_t* _stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5;
IL2CPP_EXTERN_C String_t* _stringLiteral882BAF03B0FD95D4EBE6743DD230FAF39A3ED9BC;
IL2CPP_EXTERN_C String_t* _stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B;
IL2CPP_EXTERN_C String_t* _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62;
IL2CPP_EXTERN_C String_t* _stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929;
IL2CPP_EXTERN_C String_t* _stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A;
IL2CPP_EXTERN_C String_t* _stringLiteralA2DEA6E90B0DC1F971A74DE11F62EA8333A737B9;
IL2CPP_EXTERN_C String_t* _stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241;
IL2CPP_EXTERN_C String_t* _stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959;
IL2CPP_EXTERN_C String_t* _stringLiteralBBFFE2B018FE9C481B67387513F728E577370086;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
IL2CPP_EXTERN_C String_t* _stringLiteralFABA1134F66E53549701470F4075C6577B953CCA;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278;
IL2CPP_EXTERN_C String_t* _stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_mEBF6CAF1B381E482329CEE02CB25A980B145CB3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_mA63888DA29B85D439999BB5CAACC65C2539BE191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m9AE0F3B20150C0C9F14CCAEF54A67A6E8F47E04A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612;
struct AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5;
struct GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94;
struct GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F;
struct IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3;
struct IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1;
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042;
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43;
struct ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t48670A4A557D138A8C338D0B799AEE0AB575434C 
{
};

// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GcLeaderboardU5BU5D_t3680FC46C1DC6D830D99BD08FC946D62140B0B31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;
};

struct List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30_StaticFields
{
	// T[] System.Collections.Generic.List`1::_emptyArray
	GcLeaderboardU5BU5D_t3680FC46C1DC6D830D99BD08FC946D62140B0B31* ____emptyArray_5;
};

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9  : public RuntimeObject
{
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
};
struct Il2CppArrayBounds;

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F  : public RuntimeObject
{
};

struct GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields
{
	// System.Action`2<System.Boolean,System.String> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * ___s_AuthenticateCallback_0;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* ___s_adCache_1;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* ___s_friends_2;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* ___s_users_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___s_ResetAchievements_4;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * ___m_LocalUser_5;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 * ___m_GcBoards_6;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_5;
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

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<>c__DisplayClass21_0
struct U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1  : public RuntimeObject
{
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<>c__DisplayClass21_0::callback
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback_0;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * ___current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___MaxValue_32;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_StaticFields
{
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;
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

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 
{
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086 
{
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Title
	String_t* ___m_Title_1;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Image
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___m_Image_2;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_AchievedDescription
	String_t* ___m_AchievedDescription_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_4;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Hidden
	int32_t ___m_Hidden_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Points
	int32_t ___m_Points_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	char* ___m_Title_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___m_Image_2;
	char* ___m_AchievedDescription_3;
	char* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	Il2CppChar* ___m_Title_1;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___m_Image_2;
	Il2CppChar* ___m_AchievedDescription_3;
	Il2CppChar* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F 
{
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 
{
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userName
	String_t* ___userName_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::teamID
	String_t* ___teamID_1;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::gameID
	String_t* ___gameID_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::isFriend
	int32_t ___isFriend_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::image
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_pinvoke
{
	char* ___userName_0;
	char* ___teamID_1;
	char* ___gameID_2;
	int32_t ___isFriend_3;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_com
{
	Il2CppChar* ___userName_0;
	Il2CppChar* ___teamID_1;
	Il2CppChar* ___gameID_2;
	int32_t ___isFriend_3;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image_4;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// UnityEngine.SocialPlatforms.Range
struct Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 
{
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B  : public RuntimeObject
{
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Completed
	bool ___m_Completed_0;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Hidden
	bool ___m_Hidden_1;
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::m_LastReportedDate
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___m_LastReportedDate_2;
	// System.String UnityEngine.SocialPlatforms.Impl.Achievement::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_3;
	// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::<percentCompleted>k__BackingField
	double ___U3CpercentCompletedU3Ek__BackingField_4;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D  : public RuntimeObject
{
	// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_InternalLeaderboard
	intptr_t ___m_InternalLeaderboard_0;
	// UnityEngine.SocialPlatforms.Impl.Leaderboard UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_GenericLeaderboard
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * ___m_GenericLeaderboard_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_pinvoke
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * ___m_GenericLeaderboard_1;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_com
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * ___m_GenericLeaderboard_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53  : public RuntimeObject
{
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;
};

// UnityEngine.SocialPlatforms.TimeScope
struct TimeScope_t20CB388177E885D6B11816946D623907E276F08E 
{
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___2;
};

// UnityEngine.SocialPlatforms.UserScope
struct UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0 
{
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___2;
};

// UnityEngine.SocialPlatforms.UserState
struct UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C 
{
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___2;
};

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71  : public RuntimeObject
{
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_11;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29  : public RuntimeObject
{
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_legacyID
	String_t* ___m_legacyID_2;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_3;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_4;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___m_Image_5;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_gameID
	String_t* ___m_gameID_6;
};

// System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>
struct Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>
struct Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.SocialPlatforms.IScore[]>
struct Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B  : public MulticastDelegate_t
{
};

// System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>
struct Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78  : public MulticastDelegate_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`2<System.Boolean,System.String>
struct Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D  : public MulticastDelegate_t
{
};

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD  : public UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29
{
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___m_Friends_7;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_8;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_9;
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A  : public RuntimeArray
{
	ALIGN_FIELD (8) UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * m_Items[1];

	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.Impl.Score[]
struct ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2  : public RuntimeArray
{
	ALIGN_FIELD (8) Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * m_Items[1];

	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5  : public RuntimeArray
{
	ALIGN_FIELD (8) AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * m_Items[1];

	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievementDescription[]
struct IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[]
struct GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94  : public RuntimeArray
{
	ALIGN_FIELD (8) GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4  m_Items[1];

	inline GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Identifier_0), (void*)NULL);
	}
	inline GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Identifier_0), (void*)NULL);
	}
};
// UnityEngine.SocialPlatforms.Impl.Achievement[]
struct AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612  : public RuntimeArray
{
	ALIGN_FIELD (8) Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * m_Items[1];

	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.IAchievement[]
struct IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.SocialPlatforms.GameCenter.GcScoreData[]
struct GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F  : public RuntimeArray
{
	ALIGN_FIELD (8) GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F  m_Items[1];

	inline GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Category_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FormattedValue_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_PlayerID_5), (void*)NULL);
		#endif
	}
	inline GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Category_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_FormattedValue_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_PlayerID_5), (void*)NULL);
		#endif
	}
};


// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m5387D08742D6C89CAB31D981C0F63C08D70AB3AD_gshared (Action_2_t4E94B0FCA1084D7868DB11A50767A4916CA3D3FB * __this, bool ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m910EDF0572CB2F28E45048A2EB215E25296E58BD_gshared (Action_2_t4E94B0FCA1084D7868DB11A50767A4916CA3D3FB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A  List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D * __this, const RuntimeMethod* method);

// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B (Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m12A26F8BDE41F4B55A645BB1D4038E81A877E680 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mDAAF12B06B939DDAAB6F10E8CB40B21C48A94F30 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m353D113C22BFA80F0E9A1DBEC40E4EF4984AC4EC (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63 (bool* __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF5F8CF4E71CD46ADBCC58E5A3AFA715B3E5F9D4A (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method);
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m18A74E7A97AEBD079DA90A210C02C6CE47B44FFC (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, String_t* ___id0, double ___percent1, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method);
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339 (double* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_completed_m5A625BD69E129E468D83A98CF4CAA4AA28E0B2BF (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m343030FB2BE6636313A09DEDCB02BE0ADB5E3A8E (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method);
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  Achievement_get_lastReportedDate_mEACB3BADB0996AF967B26378FA48BC964E68F091 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method);
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m196C3AEC0457C25D95B16309E12AB246D054CB67 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m4EB337E95791A795A79F2C75F909E64747B682B5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_mE98806AB14F770F2A9CBA7E1024052FA259D43E5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_m222DBD457CA6F5629758C211668917507B316DB3 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_mA35899496122E49F7333BB5F5B5B6AE0E68F017E (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method);
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B (int64_t* __this, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mCA767E4E990F5CB9657921695D4983D721BEA751 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method);
// System.String System.UInt32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154 (uint32_t* __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m3649D0E00F816E2712CA936DDBC55ADBC336BBF1 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___name0, String_t* ___teamId1, String_t* ___gameId2, bool ___friend3, int32_t ___state4, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image5, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0 (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 * __this, UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___array0, int32_t ___number1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, String_t* ___id0, String_t* ___title1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3 (GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086 * __this, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, const RuntimeMethod* method);
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_mE4B26ACD8E4220F645864036B7F9AD2E7D746B85 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, String_t* ___id0, double ___percentCompleted1, bool ___completed2, bool ___hidden3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___lastReportedDate4, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4 (GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 * __this, const RuntimeMethod* method);
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E (GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_SetImage_m16FC76EE05781DB25586A64D3B0D6CE3E6213CF5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>::Invoke(!0)
inline void Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67 (Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 * __this, IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 *, IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_PopulateLocalUser_m515CBF35A27FA7F5873C236B8C7CDE226FB5F839 (const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::Invoke(!0,!1)
inline void Action_2_Invoke_mEBF6CAF1B381E482329CEE02CB25A980B145CB3E (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * __this, bool ___arg10, String_t* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D *, bool, String_t*, const RuntimeMethod*))Action_2_Invoke_m5387D08742D6C89CAB31D981C0F63C08D70AB3AD_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeClearArray_m3F2C8854EB63AE16CC62EA55FA9621EEEC889FAC (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___array0, int32_t ___size1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeSetUserImage_mC41DE236FBD6A8FAA86053E8114004ECE7638257 (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___array0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___texture1, int32_t ___number2, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetFriends_m369BCB8021FB5A359B11D2ACB2F1CCD3DFBF0F6B (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___friends0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Boolean>::Invoke(!0)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>::Invoke(!0)
inline void Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65 (Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 * __this, IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 *, IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared)(__this, ___obj0, method);
}
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IScore[]>::Invoke(!0)
inline void Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37 (Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B * __this, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B *, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared)(__this, ___obj0, method);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadFriends_m1EB5C35E82F8408E36C3DB47356D6198E6516203 (RuntimeObject * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m88E5FDE6B93424368864BF746056A7FC84B7D830 (U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Boolean,System.String>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mA63888DA29B85D439999BB5CAACC65C2539BE191 (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_m910EDF0572CB2F28E45048A2EB215E25296E58BD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Authenticate_m20B972476A98E4DC285612EE25D77B156A781EED (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_m6D2AE6DFC61CEC39842944D970E2B2B5547CBE97 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetAuthenticated_m5D7A9F8E5D366FBA79F17D8F145A11FCB736CD36 (const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_m1A7992E986F32450A1A97409AF772DC3A0F47E44 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * __this, bool ___value0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserName_m25B73FE26ECF4E377AE567B7D08E36AD0400EA6D (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m107512A03197354BAF98514ED92D647F4FC778DA (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserID_mA06FF3D7F55FD66F63F13D796C2CE4F75C5052D3 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m32F417A48D4FDC4ED180EA2AD92F875996DA3353 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserGameID_m50723F3AB1DF0ADF196CE3802A59D39827DDACEE (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserGameID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserGameID_m9A90E716F9DB8138181F748243D7BB12BCCAA2D5 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LegacyUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_LegacyUserID_m0FAEDABEB8196642D0ACBEEFFAAA0A34C971FCAA (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetLegacyUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetLegacyUserID_m3A0B0F4DD6782D40B5CF6D575B670EC96396F030 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetIsUnderage_m9B4B89CF2DE9A5200EA9703C6C340854E7302F45 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m84D3621386D7E917F7D4AD7D2C00DE8CA8AD278C (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * GameCenterPlatform_GetUserImage_mC24801D65578DA05FC1367DE548D57E6C10858C4 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievementDescriptions_m25895D2455BE47558511DA3353A78728045BBB7A (RuntimeObject * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportProgress_mC287DD08303ADC0C0AA5CDD7E64A19A23CF9CC65 (String_t* ___id0, double ___progress1, RuntimeObject * ___callback2, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievements_mE1DE7A99AC5421D83A90891545A13154503A24C8 (RuntimeObject * ___callback0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportScore_m5BD67253E46A7B04DBABB10AE74D92EEBFB34CA4 (int64_t ___score0, String_t* ___category1, RuntimeObject * ___callback2, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadScores_m2F9795BEEBAADBFD30835FDCA37120CAF01E4D39 (String_t* ___category0, RuntimeObject * ___callback1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard__ctor_mE6ABD1A5D616A3371023FB53BAAA34C638081632 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * ___board0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Add(!0)
inline void List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6 (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 * __this, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 *, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D *, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared)(__this, ___item0, method);
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Leaderboard_GetUserFilter_m859FFF97FCAF7D42B215AA0166FCB6B8B0025FF3 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Internal_LoadScores_m94273C598B909F6E518E4C6A0A1EEFA83BD2ECAD (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___userIDs3, int32_t ___playerScope4, int32_t ___timeScope5, RuntimeObject * ___callback6, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::GetEnumerator()
inline Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77  List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77  (*) (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 *, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::get_Current()
inline GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_inline (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 * __this, const RuntimeMethod* method)
{
	return ((  GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * (*) (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 *, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Contains_m08D3F5665F1A25DBDC41B9D98461D5DBB98DCD48 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * ___board0, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Loading_m089B19A42B7EA2AB31481F2CA81E47279ABF0E75 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::MoveNext()
inline bool Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 *, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::Dispose()
inline void Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3 (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77 *, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_get_localUser_m3EEB7917C0629DBADEE2DCF8E979BBA09A83AF92 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowAchievementsUI_m2570D8A2789253DC03808182E5DDB12F6F3CAA78 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowLeaderboardUI_m8E07D464AA4195EA8391BE3906804B6ECD05742F (const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>::Invoke(!0)
inline void Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223 (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 * __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 *, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_LoadUsers_m999E05472208C579E960909336F9A62CB91D7BDB (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___userIds0, RuntimeObject * ___callback1, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_mFB0608CFF4A090982904F495B84A91DC0FAC5B73 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m9EA819E3F3EA4B91F8998D54EF2F5B2B1E29976F (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ResetAllAchievements_mC15426C08E5DC78F2B3F0AA8FA7DF8E1CC28C9D9 (const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowDefaultAchievementBanner_m4F1DFCD4CB1C1C807B8612D20D87EB10A47B9E79 (bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowSpecificLeaderboardUI_m8020D079A7C759AA9223588CC35501ADEE137096 (String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>::.ctor()
inline void List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 *, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Dispose_m115757D5DFB8FFE4CD11F2D20244965F992A950C (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m0ACEEFFAD67AE7F7DC644DD034F5F2C431265943 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___scores0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetLocalUserScore_m424D44D0AFCBA825FA9604E8BBB538854E1E0C4E (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, RuntimeObject* ___score0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetMaxRange_m1C820B01C8989228954B466EDC4C1B8DC95EDE5B (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, uint32_t ___maxRange0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_mF9ECC4ECBF137AF4C5AD6A2338AB8786D86EADF2 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, String_t* ___title0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GcLeaderboard_GcLeaderboard_LoadScores_m20BF42809E9482C25142F588CE9BB9E8C41F6AEF (RuntimeObject * ___self0, String_t* ___category1, int32_t ___from2, int32_t ___count3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___userIDs4, int32_t ___playerScope5, int32_t ___timeScope6, RuntimeObject * ___callback7, const RuntimeMethod* method);
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_GcLeaderboard_Loading_mD5B7534593974433AB2CFD090697855AA782E4DE (intptr_t ___leaderboard0, const RuntimeMethod* method);
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_GcLeaderboard_Dispose_mE88BED6761601809CBFC8B8B88D49FB599E5EE74 (intptr_t ___leaderboard0, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Range::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B (Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___fromValue0;
		__this->___from_0 = L_0;
		int32_t L_1 = ___valueCount1;
		__this->___count_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B_AdjustorThunk (RuntimeObject * __this, int32_t ___fromValue0, int32_t ___valueCount1, const RuntimeMethod* method)
{
	Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6 *>(__this + _offset);
	Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B(_thisAdjusted, ___fromValue0, ___valueCount1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser__ctor_m6D2AE6DFC61CEC39842944D970E2B2B5547CBE97 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_0 = NULL;
	{
		UserProfile__ctor_m12A26F8BDE41F4B55A645BB1D4038E81A877E680(__this, NULL);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_0 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_0;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_1 = V_0;
		__this->___m_Friends_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Friends_7), (void*)L_1);
		__this->___m_Authenticated_8 = (bool)0;
		__this->___m_Underage_9 = (bool)0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetFriends(UnityEngine.SocialPlatforms.IUserProfile[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetFriends_m369BCB8021FB5A359B11D2ACB2F1CCD3DFBF0F6B (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * __this, IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* ___friends0, const RuntimeMethod* method)
{
	{
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_0 = ___friends0;
		__this->___m_Friends_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Friends_7), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetAuthenticated(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetAuthenticated_m1A7992E986F32450A1A97409AF772DC3A0F47E44 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->___m_Authenticated_8 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.LocalUser::SetUnderage(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalUser_SetUnderage_m84D3621386D7E917F7D4AD7D2C00DE8CA8AD278C (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->___m_Underage_9 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::get_authenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool LocalUser_get_authenticated_m3121DA81FF48CFFB4024ADECEE98F8E686497C54 (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Authenticated_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
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
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m12A26F8BDE41F4B55A645BB1D4038E81A877E680 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_UserName_0 = _stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserName_0), (void*)_stringLiteral5ECA19F316C4BF30DC6AFDC7822F68EDF20BDA1E);
		__this->___m_ID_1 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ID_1), (void*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->___m_legacyID_2 = _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_legacyID_2), (void*)_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		__this->___m_IsFriend_3 = (bool)0;
		__this->___m_State_4 = 3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_0 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_0, ((int32_t)32), ((int32_t)32), /*hidden argument*/NULL);
		__this->___m_Image_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_5), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::.ctor(System.String,System.String,System.String,System.Boolean,UnityEngine.SocialPlatforms.UserState,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile__ctor_m3649D0E00F816E2712CA936DDBC55ADBC336BBF1 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___name0, String_t* ___teamId1, String_t* ___gameId2, bool ___friend3, int32_t ___state4, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image5, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___name0;
		__this->___m_UserName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserName_0), (void*)L_0);
		String_t* L_1 = ___teamId1;
		__this->___m_ID_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ID_1), (void*)L_1);
		String_t* L_2 = ___gameId2;
		__this->___m_gameID_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_gameID_6), (void*)L_2);
		bool L_3 = ___friend3;
		__this->___m_IsFriend_3 = L_3;
		int32_t L_4 = ___state4;
		__this->___m_State_4 = L_4;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_5 = ___image5;
		__this->___m_Image_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_5), (void*)L_5);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_ToString_mEB091241EC114F4F42D2CE15F127B83556EBE45D (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = UserProfile_get_userName_mDAAF12B06B939DDAAB6F10E8CB40B21C48A94F30(__this, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		bool L_8;
		L_8 = UserProfile_get_isFriend_m353D113C22BFA80F0E9A1DBEC40E4EF4984AC4EC(__this, NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_0), NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_7;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10;
		int32_t L_12;
		L_12 = UserProfile_get_state_mF5F8CF4E71CD46ADBCC58E5A3AFA715B3E5F9D4A(__this, NULL);
		V_1 = L_12;
		Il2CppFakeBox<int32_t> L_13(UserState_t4C54A6F5CE00515F37F91DFB88AEB8FC56C6934C_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_14;
		L_14 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2 *)(&L_13), NULL);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		String_t* L_15;
		L_15 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_11, NULL);
		V_2 = L_15;
		goto IL_0061;
	}

IL_0061:
	{
		String_t* L_16 = V_2;
		return L_16;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserName_m107512A03197354BAF98514ED92D647F4FC778DA (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___name0;
		__this->___m_UserName_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserName_0), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserID_m32F417A48D4FDC4ED180EA2AD92F875996DA3353 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->___m_ID_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ID_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetLegacyUserID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetLegacyUserID_m3A0B0F4DD6782D40B5CF6D575B670EC96396F030 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->___m_legacyID_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_legacyID_2), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetUserGameID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetUserGameID_m9A90E716F9DB8138181F748243D7BB12BCCAA2D5 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___id0;
		__this->___m_gameID_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_gameID_6), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.UserProfile::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_0 = ___image0;
		__this->___m_Image_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_5), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_userName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_userName_mDAAF12B06B939DDAAB6F10E8CB40B21C48A94F30 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_UserName_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336 (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_ID_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::get_isFriend()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UserProfile_get_isFriend_m353D113C22BFA80F0E9A1DBEC40E4EF4984AC4EC (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_IsFriend_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UserProfile_get_state_mF5F8CF4E71CD46ADBCC58E5A3AFA715B3E5F9D4A (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_State_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double,System.Boolean,System.Boolean,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_mE4B26ACD8E4220F645864036B7F9AD2E7D746B85 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, String_t* ___id0, double ___percentCompleted1, bool ___completed2, bool ___hidden3, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___lastReportedDate4, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___id0;
		Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline(__this, L_0, NULL);
		double L_1 = ___percentCompleted1;
		Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline(__this, L_1, NULL);
		bool L_2 = ___completed2;
		__this->___m_Completed_0 = L_2;
		bool L_3 = ___hidden3;
		__this->___m_Hidden_1 = L_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_4 = ___lastReportedDate4;
		__this->___m_LastReportedDate_2 = L_4;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m18A74E7A97AEBD079DA90A210C02C6CE47B44FFC (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, String_t* ___id0, double ___percent1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___id0;
		Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline(__this, L_0, NULL);
		double L_1 = ___percent1;
		Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline(__this, L_1, NULL);
		__this->___m_Hidden_1 = (bool)0;
		__this->___m_Completed_0 = (bool)0;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_2 = ((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_31;
		__this->___m_LastReportedDate_2 = L_2;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement__ctor_m9EA819E3F3EA4B91F8998D54EF2F5B2B1E29976F (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968);
		s_Il2CppMethodInitialized = true;
	}
	{
		Achievement__ctor_m18A74E7A97AEBD079DA90A210C02C6CE47B44FFC(__this, _stringLiteral2C3323E6A37819D4C4AC310608DA4CF7FB13A968, (0.0), NULL);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_ToString_m15B103F95C549FCED0D581FBACD73E47310C9EAC (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		double L_5;
		L_5 = Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline(__this, NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = Double_ToString_m7499A5D792419537DCB9470A3675CEF5117DE339((&V_0), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_4;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		bool L_9;
		L_9 = Achievement_get_completed_m5A625BD69E129E468D83A98CF4CAA4AA28E0B2BF(__this, NULL);
		V_1 = L_9;
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		bool L_13;
		L_13 = Achievement_get_hidden_m343030FB2BE6636313A09DEDCB02BE0ADB5E3A8E(__this, NULL);
		V_1 = L_13;
		String_t* L_14;
		L_14 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_17;
		L_17 = Achievement_get_lastReportedDate_mEACB3BADB0996AF967B26378FA48BC964E68F091(__this, NULL);
		V_2 = L_17;
		String_t* L_18;
		L_18 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A((&V_2), NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_16, NULL);
		V_3 = L_19;
		goto IL_007d;
	}

IL_007d:
	{
		String_t* L_20 = V_3;
		return L_20;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Achievement::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::get_percentCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->___U3CpercentCompletedU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Achievement::set_percentCompleted(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_completed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_completed_m5A625BD69E129E468D83A98CF4CAA4AA28E0B2BF (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Completed_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Achievement_get_hidden_m343030FB2BE6636313A09DEDCB02BE0ADB5E3A8E (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Hidden_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::get_lastReportedDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  Achievement_get_lastReportedDate_mEACB3BADB0996AF967B26378FA48BC964E68F091 (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method)
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_0 = __this->___m_LastReportedDate_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_1 = V_0;
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
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::.ctor(System.String,System.String,UnityEngine.Texture2D,System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, String_t* ___id0, String_t* ___title1, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image2, String_t* ___achievedDescription3, String_t* ___unachievedDescription4, bool ___hidden5, int32_t ___points6, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___id0;
		AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411_inline(__this, L_0, NULL);
		String_t* L_1 = ___title1;
		__this->___m_Title_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Title_0), (void*)L_1);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_2 = ___image2;
		__this->___m_Image_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_1), (void*)L_2);
		String_t* L_3 = ___achievedDescription3;
		__this->___m_AchievedDescription_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_AchievedDescription_2), (void*)L_3);
		String_t* L_4 = ___unachievedDescription4;
		__this->___m_UnachievedDescription_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UnachievedDescription_3), (void*)L_4);
		bool L_5 = ___hidden5;
		__this->___m_Hidden_4 = L_5;
		int32_t L_6 = ___points6;
		__this->___m_Points_5 = L_6;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_ToString_m25F3CC08322EAB311EDBC23D85F067387706DE02 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	String_t* V_2 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline(__this, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		String_t* L_5;
		L_5 = AchievementDescription_get_title_m196C3AEC0457C25D95B16309E12AB246D054CB67(__this, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_4;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		String_t* L_8;
		L_8 = AchievementDescription_get_achievedDescription_m4EB337E95791A795A79F2C75F909E64747B682B5(__this, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_7;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11;
		L_11 = AchievementDescription_get_unachievedDescription_mE98806AB14F770F2A9CBA7E1024052FA259D43E5(__this, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		int32_t L_14;
		L_14 = AchievementDescription_get_points_m222DBD457CA6F5629758C211668917507B316DB3(__this, NULL);
		V_0 = L_14;
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_13;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral960E5E7F211EFF3243DF14EDD1901DC9EF314D62);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		bool L_18;
		L_18 = AchievementDescription_get_hidden_mA35899496122E49F7333BB5F5B5B6AE0E68F017E(__this, NULL);
		V_1 = L_18;
		String_t* L_19;
		L_19 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63((&V_1), NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)L_19);
		String_t* L_20;
		L_20 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_17, NULL);
		V_2 = L_20;
		goto IL_0080;
	}

IL_0080:
	{
		String_t* L_21 = V_2;
		return L_21;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::SetImage(UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_SetImage_m16FC76EE05781DB25586A64D3B0D6CE3E6213CF5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___image0, const RuntimeMethod* method)
{
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_0 = ___image0;
		__this->___m_Image_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Image_1), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.AchievementDescription::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_title()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_title_m196C3AEC0457C25D95B16309E12AB246D054CB67 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_Title_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_achievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_achievedDescription_m4EB337E95791A795A79F2C75F909E64747B682B5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_AchievedDescription_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_unachievedDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_unachievedDescription_mE98806AB14F770F2A9CBA7E1024052FA259D43E5 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		String_t* L_0 = __this->___m_UnachievedDescription_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_hidden()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AchievementDescription_get_hidden_mA35899496122E49F7333BB5F5B5B6AE0E68F017E (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0 = __this->___m_Hidden_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::get_points()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AchievementDescription_get_points_m222DBD457CA6F5629758C211668917507B316DB3 (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Points_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mCA767E4E990F5CB9657921695D4983D721BEA751 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, String_t* ___leaderboardID0, int64_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int64_t L_1 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_2;
		L_2 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31(__this, L_0, L_1, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, (-1), NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, String_t* ___leaderboardID0, int64_t ___value1, String_t* ___userID2, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  ___date3, String_t* ___formattedValue4, int32_t ___rank5, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___leaderboardID0;
		Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB_inline(__this, L_0, NULL);
		int64_t L_1 = ___value1;
		Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3_inline(__this, L_1, NULL);
		String_t* L_2 = ___userID2;
		__this->___m_UserID_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserID_2), (void*)L_2);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_3 = ___date3;
		__this->___m_Date_0 = L_3;
		String_t* L_4 = ___formattedValue4;
		__this->___m_FormattedValue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FormattedValue_1), (void*)L_4);
		int32_t L_5 = ___rank5;
		__this->___m_Rank_3 = L_5;
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_ToString_m497A4E6B7AA8D2B8433137127949781736A16037 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral410946CD131353B68F194902EF06C27382525682);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral410946CD131353B68F194902EF06C27382525682);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral410946CD131353B68F194902EF06C27382525682);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		int32_t* L_3 = (&__this->___m_Rank_3);
		String_t* L_4;
		L_4 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_3, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_4);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_2;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFD0688D658BDAA1EF7BA141817A3905C0BC5A278);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		int64_t L_7;
		L_7 = Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E_inline(__this, NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Int64_ToString_m284E4E55662818E38654309A41C2B07CD436F36B((&V_0), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = L_6;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralFABA1134F66E53549701470F4075C6577B953CCA);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = L_9;
		String_t* L_11;
		L_11 = Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A_inline(__this, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_10;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteralAFD46100DAA7F6D6A369D7A5F84A5FA79E317241);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		String_t* L_14 = __this->___m_UserID_2;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_13;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB5727DA2F60DABC5DD1D782B1F1DC1BDEA95E959);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_15;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D * L_17 = (&__this->___m_Date_0);
		String_t* L_18;
		L_18 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_18);
		String_t* L_19;
		L_19 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_16, NULL);
		V_1 = L_19;
		goto IL_0078;
	}

IL_0078:
	{
		String_t* L_20 = V_1;
		return L_20;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___U3CleaderboardIDU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CleaderboardIDU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->___U3CvalueU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3 (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
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
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard__ctor_mFB0608CFF4A090982904F495B84A91DC0FAC5B73 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E);
		s_Il2CppMethodInitialized = true;
	}
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline(__this, _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E, NULL);
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Range__ctor_m54D7381A4A3634B7B0AF0847B848EBB8786B876B((&L_0), 1, ((int32_t)10), /*hidden argument*/NULL);
		Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA_inline(__this, L_0, NULL);
		Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A_inline(__this, 0, NULL);
		Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE_inline(__this, 2, NULL);
		__this->___m_Loading_0 = (bool)0;
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * L_1 = (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 *)il2cpp_codegen_object_new(Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		Score__ctor_mCA767E4E990F5CB9657921695D4983D721BEA751(L_1, _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E, ((int64_t)((int64_t)0)), /*hidden argument*/NULL);
		__this->___m_LocalUserScore_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalUserScore_1), (void*)L_1);
		__this->___m_MaxRange_2 = 0;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_2 = (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)SZArrayNew(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var, (uint32_t)0);
		V_0 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_2;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_3 = V_0;
		__this->___m_Scores_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scores_3), (void*)L_3);
		__this->___m_Title_4 = _stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Title_4), (void*)_stringLiteral6DD798540816CF95355537E350E0B22DB63ACF5E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___m_UserIDs_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UserIDs_5), (void*)L_4);
		return;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_ToString_m13D23F36219548442D56D029B561F628305F3500 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeScope_t20CB388177E885D6B11816946D623907E276F08E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		s_Il2CppMethodInitialized = true;
	}
	Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFF16DFE5E3F78763F7473407939171C7C65328F2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		String_t* L_3;
		L_3 = Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770_inline(__this, NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral96B7C4CAD78D8BDC3D70F23EC85D52AFF9426929);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		String_t* L_6 = __this->___m_Title_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_5;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralA0C1E38BE79F8142BF907FB75677A8AC15D1843A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		bool* L_9 = (&__this->___m_Loading_0);
		String_t* L_10;
		L_10 = Boolean_ToString_m6646C8026B1DF381A1EE8CD13549175E9703CC63(L_9, NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral1273820123770263EB0C9B1F3C361D88BB39757C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  L_13;
		L_13 = Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline(__this, NULL);
		V_0 = L_13;
		int32_t* L_14 = (&(&V_0)->___from_0);
		String_t* L_15;
		L_15 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_14, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_16;
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  L_18;
		L_18 = Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline(__this, NULL);
		V_0 = L_18;
		int32_t* L_19 = (&(&V_0)->___count_1);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralCC5F82AE0F16A83943027ABCFF930C191D836C24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = L_21;
		uint32_t* L_23 = (&__this->___m_MaxRange_2);
		String_t* L_24;
		L_24 = UInt32_ToString_mB6FA6D2459C82ADCF285C55363491D9669A80154(L_23, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_24);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_22;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteral6DDC2671B007E4E57EFC9045010218AC5C5816C5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = L_25;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_27 = __this->___m_Scores_3;
		NullCheck(L_27);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length)));
		String_t* L_28;
		L_28 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_28);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_26;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)_stringLiteral4FEC6C4846D0D96A0075252A785C42336C923A3A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_29;
		int32_t L_31;
		L_31 = Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1_inline(__this, NULL);
		V_2 = L_31;
		Il2CppFakeBox<int32_t> L_32(UserScope_tD27617E6435462ACDBA346FC900FA351797D09E0_il2cpp_TypeInfo_var, (&V_2));
		String_t* L_33;
		L_33 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2 *)(&L_32), NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_33);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_30;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteral5FE7915692E0675AD0BF063D16336FF430832152);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		int32_t L_36;
		L_36 = Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E_inline(__this, NULL);
		V_3 = L_36;
		Il2CppFakeBox<int32_t> L_37(TimeScope_t20CB388177E885D6B11816946D623907E276F08E_il2cpp_TypeInfo_var, (&V_3));
		String_t* L_38;
		L_38 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2 *)(&L_37), NULL);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_38);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_35;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (String_t*)_stringLiteral92B920AAF5157084026DBA053D7E944B6E1EAF6B);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_41 = __this->___m_UserIDs_5;
		NullCheck(L_41);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_41)->max_length)));
		String_t* L_42;
		L_42 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (String_t*)L_42);
		String_t* L_43;
		L_43 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_40, NULL);
		V_4 = L_43;
		goto IL_011a;
	}

IL_011a:
	{
		String_t* L_44 = V_4;
		return L_44;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetLocalUserScore(UnityEngine.SocialPlatforms.IScore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetLocalUserScore_m424D44D0AFCBA825FA9604E8BBB538854E1E0C4E (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, RuntimeObject* ___score0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___score0;
		__this->___m_LocalUserScore_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_LocalUserScore_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetMaxRange(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetMaxRange_m1C820B01C8989228954B466EDC4C1B8DC95EDE5B (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, uint32_t ___maxRange0, const RuntimeMethod* method)
{
	{
		uint32_t L_0 = ___maxRange0;
		__this->___m_MaxRange_2 = L_0;
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetScores(UnityEngine.SocialPlatforms.IScore[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetScores_m0ACEEFFAD67AE7F7DC644DD034F5F2C431265943 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* ___scores0, const RuntimeMethod* method)
{
	{
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_0 = ___scores0;
		__this->___m_Scores_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Scores_3), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_SetTitle_mF9ECC4ECBF137AF4C5AD6A2338AB8786D86EADF2 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, String_t* ___title0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___title0;
		__this->___m_Title_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Title_4), (void*)L_0);
		return;
	}
}
// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::GetUserFilter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Leaderboard_GetUserFilter_m859FFF97FCAF7D42B215AA0166FCB6B8B0025FF3 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___m_UserIDs_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = V_0;
		return L_1;
	}
}
// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_userScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1 (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->___U3CuserScopeU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_userScope(UnityEngine.SocialPlatforms.UserScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::get_range()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  L_0 = __this->___U3CrangeU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_range(UnityEngine.SocialPlatforms.Range)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  ___value0, const RuntimeMethod* method)
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  L_0 = ___value0;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::get_timeScope()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->___U3CtimeScopeU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void UnityEngine.SocialPlatforms.Impl.Leaderboard::set_timeScope(UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
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
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_pinvoke(const GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535& unmarshaled, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_pinvoke& marshaled)
{
	Exception_t* ___image_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_4Exception, NULL);
}
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_pinvoke_back(const GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_pinvoke& marshaled, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535& unmarshaled)
{
	Exception_t* ___image_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_pinvoke_cleanup(GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_com(const GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535& unmarshaled, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_com& marshaled)
{
	Exception_t* ___image_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_4Exception, NULL);
}
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_com_back(const GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_com& marshaled, GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535& unmarshaled)
{
	Exception_t* ___image_4Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'image' of type 'GcUserProfileData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___image_4Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
IL2CPP_EXTERN_C void GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshal_com_cleanup(GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535_marshaled_com& marshaled)
{
}
// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0 (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	String_t* G_B3_3 = NULL;
	{
		String_t* L_0 = __this->___userName_0;
		String_t* L_1 = __this->___teamID_1;
		String_t* L_2 = __this->___gameID_2;
		int32_t L_3 = __this->___isFriend_3;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		G_B1_2 = L_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			G_B2_2 = L_0;
			goto IL_001f;
		}
	}
	{
		G_B3_0 = 0;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0020:
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_4 = __this->___image_4;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * L_5 = (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 *)il2cpp_codegen_object_new(UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29_il2cpp_TypeInfo_var);
		UserProfile__ctor_m3649D0E00F816E2712CA936DDBC55ADBC336BBF1(L_5, G_B3_3, G_B3_2, G_B3_1, (bool)G_B3_0, 3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_002f;
	}

IL_002f:
	{
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 *>(__this + _offset);
	UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * _returnValue;
	_returnValue = GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 * __this, UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___array0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66A9B6842DC1D465CA5CFAF30DE6EDFAC6DF04E8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_0 = ___array0;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_1 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_0);
		NullCheck(L_1);
		int32_t L_2 = ___number1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) <= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_3 = ___number1;
		G_B3_0 = ((((int32_t)((((int32_t)L_3) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 0;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_5 = ___array0;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_6 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_5);
		int32_t L_7 = ___number1;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * L_8;
		L_8 = GcUserProfileData_ToUserProfile_m887526D751D39B2B34AA0BE6C79509C2A50BEFF0(__this, NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 *)L_8);
		goto IL_002d;
	}

IL_0022:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral66A9B6842DC1D465CA5CFAF30DE6EDFAC6DF04E8, NULL);
	}

IL_002d:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB_AdjustorThunk (RuntimeObject * __this, UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___array0, int32_t ___number1, const RuntimeMethod* method)
{
	GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535 *>(__this + _offset);
	GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB(_thisAdjusted, ___array0, ___number1, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_pinvoke(const GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086& unmarshaled, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception, NULL);
}
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_pinvoke_back(const GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_pinvoke& marshaled, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086& unmarshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_pinvoke_cleanup(GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_com(const GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086& unmarshaled, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_com& marshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception, NULL);
}
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_com_back(const GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_com& marshaled, GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086& unmarshaled)
{
	Exception_t* ___m_Image_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Image' of type 'GcAchievementDescriptionData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Image_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
IL2CPP_EXTERN_C void GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshal_com_cleanup(GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086_marshaled_com& marshaled)
{
}
// UnityEngine.SocialPlatforms.Impl.AchievementDescription UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::ToAchievementDescription()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3 (GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * G_B2_2 = NULL;
	String_t* G_B2_3 = NULL;
	String_t* G_B2_4 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * G_B1_2 = NULL;
	String_t* G_B1_3 = NULL;
	String_t* G_B1_4 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * G_B3_3 = NULL;
	String_t* G_B3_4 = NULL;
	String_t* G_B3_5 = NULL;
	{
		String_t* L_0 = __this->___m_Identifier_0;
		String_t* L_1 = __this->___m_Title_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_2 = __this->___m_Image_2;
		String_t* L_3 = __this->___m_AchievedDescription_3;
		String_t* L_4 = __this->___m_UnachievedDescription_4;
		int32_t L_5 = __this->___m_Hidden_5;
		G_B1_0 = L_4;
		G_B1_1 = L_3;
		G_B1_2 = L_2;
		G_B1_3 = L_1;
		G_B1_4 = L_0;
		if (!L_5)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_3;
			G_B2_2 = L_2;
			G_B2_3 = L_1;
			G_B2_4 = L_0;
			goto IL_002a;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		goto IL_002b;
	}

IL_002a:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
	}

IL_002b:
	{
		int32_t L_6 = __this->___m_Points_6;
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * L_7 = (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 *)il2cpp_codegen_object_new(AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9_il2cpp_TypeInfo_var);
		AchievementDescription__ctor_mB5F9A234974FEC3BB146511929791A1D8846E2EF(L_7, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, (bool)G_B3_0, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		goto IL_0039;
	}

IL_0039:
	{
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086 *>(__this + _offset);
	AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * _returnValue;
	_returnValue = GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_pinvoke(const GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4& unmarshaled, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_pinvoke_back(const GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_pinvoke& marshaled, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Identifier_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Identifier_0));
	double unmarshaled_m_PercentCompleted_temp_1 = 0.0;
	unmarshaled_m_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_PercentCompleted_1 = unmarshaled_m_PercentCompleted_temp_1;
	int32_t unmarshaled_m_Completed_temp_2 = 0;
	unmarshaled_m_Completed_temp_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Completed_2 = unmarshaled_m_Completed_temp_2;
	int32_t unmarshaled_m_Hidden_temp_3 = 0;
	unmarshaled_m_Hidden_temp_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_Hidden_3 = unmarshaled_m_Hidden_temp_3;
	int32_t unmarshaled_m_LastReportedDate_temp_4 = 0;
	unmarshaled_m_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate_4;
	unmarshaled.___m_LastReportedDate_4 = unmarshaled_m_LastReportedDate_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_pinvoke_cleanup(GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_com(const GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4& unmarshaled, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_com& marshaled)
{
	marshaled.___m_Identifier_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Identifier_0);
	marshaled.___m_PercentCompleted_1 = unmarshaled.___m_PercentCompleted_1;
	marshaled.___m_Completed_2 = unmarshaled.___m_Completed_2;
	marshaled.___m_Hidden_3 = unmarshaled.___m_Hidden_3;
	marshaled.___m_LastReportedDate_4 = unmarshaled.___m_LastReportedDate_4;
}
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_com_back(const GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_com& marshaled, GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4& unmarshaled)
{
	unmarshaled.___m_Identifier_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Identifier_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Identifier_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Identifier_0));
	double unmarshaled_m_PercentCompleted_temp_1 = 0.0;
	unmarshaled_m_PercentCompleted_temp_1 = marshaled.___m_PercentCompleted_1;
	unmarshaled.___m_PercentCompleted_1 = unmarshaled_m_PercentCompleted_temp_1;
	int32_t unmarshaled_m_Completed_temp_2 = 0;
	unmarshaled_m_Completed_temp_2 = marshaled.___m_Completed_2;
	unmarshaled.___m_Completed_2 = unmarshaled_m_Completed_temp_2;
	int32_t unmarshaled_m_Hidden_temp_3 = 0;
	unmarshaled_m_Hidden_temp_3 = marshaled.___m_Hidden_3;
	unmarshaled.___m_Hidden_3 = unmarshaled_m_Hidden_temp_3;
	int32_t unmarshaled_m_LastReportedDate_temp_4 = 0;
	unmarshaled_m_LastReportedDate_temp_4 = marshaled.___m_LastReportedDate_4;
	unmarshaled.___m_LastReportedDate_4 = unmarshaled_m_LastReportedDate_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
IL2CPP_EXTERN_C void GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshal_com_cleanup(GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Identifier_0);
	marshaled.___m_Identifier_0 = NULL;
}
// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4 (GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * V_1 = NULL;
	double G_B2_0 = 0.0;
	String_t* G_B2_1 = NULL;
	double G_B1_0 = 0.0;
	String_t* G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	double G_B3_1 = 0.0;
	String_t* G_B3_2 = NULL;
	int32_t G_B5_0 = 0;
	double G_B5_1 = 0.0;
	String_t* G_B5_2 = NULL;
	int32_t G_B4_0 = 0;
	double G_B4_1 = 0.0;
	String_t* G_B4_2 = NULL;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	double G_B6_2 = 0.0;
	String_t* G_B6_3 = NULL;
	{
		String_t* L_0 = __this->___m_Identifier_0;
		double L_1 = __this->___m_PercentCompleted_1;
		int32_t L_2 = __this->___m_Completed_2;
		G_B1_0 = L_1;
		G_B1_1 = L_0;
		if (!L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_0;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0019;
	}

IL_0018:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0019:
	{
		int32_t L_3 = __this->___m_Hidden_3;
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		if (!L_3)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			G_B5_2 = G_B3_2;
			goto IL_0024;
		}
	}
	{
		G_B6_0 = 1;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0025;
	}

IL_0024:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0025:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201((&L_4), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_LastReportedDate_4;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_6;
		L_6 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), ((double)((double)L_5)), NULL);
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * L_7 = (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B *)il2cpp_codegen_object_new(Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
		Achievement__ctor_mE4B26ACD8E4220F645864036B7F9AD2E7D746B85(L_7, G_B6_3, G_B6_2, (bool)G_B6_1, (bool)G_B6_0, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		goto IL_004c;
	}

IL_004c:
	{
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcAchievementData_tBA953A0889E78C0050ED548758B7AF25F12799D4 *>(__this + _offset);
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * _returnValue;
	_returnValue = GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_pinvoke(const GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F& unmarshaled, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_pinvoke_back(const GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_pinvoke& marshaled, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Category_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_Category_0));
	uint32_t unmarshaled_m_ValueLow_temp_1 = 0;
	unmarshaled_m_ValueLow_temp_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueLow_1 = unmarshaled_m_ValueLow_temp_1;
	int32_t unmarshaled_m_ValueHigh_temp_2 = 0;
	unmarshaled_m_ValueHigh_temp_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_ValueHigh_2 = unmarshaled_m_ValueHigh_temp_2;
	int32_t unmarshaled_m_Date_temp_3 = 0;
	unmarshaled_m_Date_temp_3 = marshaled.___m_Date_3;
	unmarshaled.___m_Date_3 = unmarshaled_m_Date_temp_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_FormattedValue_4), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_FormattedValue_4));
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_PlayerID_5), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_PlayerID_5));
	int32_t unmarshaled_m_Rank_temp_6 = 0;
	unmarshaled_m_Rank_temp_6 = marshaled.___m_Rank_6;
	unmarshaled.___m_Rank_6 = unmarshaled_m_Rank_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_pinvoke_cleanup(GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_com(const GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F& unmarshaled, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_com& marshaled)
{
	marshaled.___m_Category_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_Category_0);
	marshaled.___m_ValueLow_1 = unmarshaled.___m_ValueLow_1;
	marshaled.___m_ValueHigh_2 = unmarshaled.___m_ValueHigh_2;
	marshaled.___m_Date_3 = unmarshaled.___m_Date_3;
	marshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_FormattedValue_4);
	marshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_PlayerID_5);
	marshaled.___m_Rank_6 = unmarshaled.___m_Rank_6;
}
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_com_back(const GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_com& marshaled, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F& unmarshaled)
{
	unmarshaled.___m_Category_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_Category_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_Category_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_Category_0));
	uint32_t unmarshaled_m_ValueLow_temp_1 = 0;
	unmarshaled_m_ValueLow_temp_1 = marshaled.___m_ValueLow_1;
	unmarshaled.___m_ValueLow_1 = unmarshaled_m_ValueLow_temp_1;
	int32_t unmarshaled_m_ValueHigh_temp_2 = 0;
	unmarshaled_m_ValueHigh_temp_2 = marshaled.___m_ValueHigh_2;
	unmarshaled.___m_ValueHigh_2 = unmarshaled_m_ValueHigh_temp_2;
	int32_t unmarshaled_m_Date_temp_3 = 0;
	unmarshaled_m_Date_temp_3 = marshaled.___m_Date_3;
	unmarshaled.___m_Date_3 = unmarshaled_m_Date_temp_3;
	unmarshaled.___m_FormattedValue_4 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_FormattedValue_4);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_FormattedValue_4), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_FormattedValue_4));
	unmarshaled.___m_PlayerID_5 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_PlayerID_5);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_PlayerID_5), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_PlayerID_5));
	int32_t unmarshaled_m_Rank_temp_6 = 0;
	unmarshaled_m_Rank_temp_6 = marshaled.___m_Rank_6;
	unmarshaled.___m_Rank_6 = unmarshaled_m_Rank_temp_6;
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcScoreData
IL2CPP_EXTERN_C void GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshal_com_cleanup(GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_Category_0);
	marshaled.___m_Category_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_FormattedValue_4);
	marshaled.___m_FormattedValue_4 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_PlayerID_5);
	marshaled.___m_PlayerID_5 = NULL;
}
// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E (GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * V_1 = NULL;
	{
		String_t* L_0 = __this->___m_Category_0;
		int32_t L_1 = __this->___m_ValueHigh_2;
		uint32_t L_2 = __this->___m_ValueLow_1;
		String_t* L_3 = __this->___m_PlayerID_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DateTime__ctor_mA66CE5141E86C5BC75F79543F99A7BD77B420201((&L_4), ((int32_t)1970), 1, 1, 0, 0, 0, 0, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->___m_Date_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D  L_6;
		L_6 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_0), ((double)((double)L_5)), NULL);
		String_t* L_7 = __this->___m_FormattedValue_4;
		int32_t L_8 = __this->___m_Rank_6;
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * L_9 = (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 *)il2cpp_codegen_object_new(Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53_il2cpp_TypeInfo_var);
		Score__ctor_mD90E3983F2E8AF6001AB7C5E54497752F21E0F31(L_9, L_0, ((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int64_t)((int64_t)L_1))<<(int32_t)((int32_t)32))), (int64_t)((int64_t)((uint64_t)L_2)))), L_3, L_6, L_7, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		goto IL_0052;
	}

IL_0052:
	{
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * L_10 = V_1;
		return L_10;
	}
}
IL2CPP_EXTERN_C  Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F * _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F *>(__this + _offset);
	Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * _returnValue;
	_returnValue = GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearAchievementDescriptions(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ClearAchievementDescriptions_mFC1EA8309028E0924972B226438470B9007D92E0 (int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1;
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_1 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1;
		NullCheck(L_1);
		int32_t L_2 = ___size0;
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = ___size0;
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_5 = (AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)SZArrayNew(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var, (uint32_t)L_4);
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1), (void*)L_5);
	}

IL_0027:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescription(UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetAchievementDescription_m530A5F9FDDD2C0007A58FC9E68F8C21EC48FFB15 (GcAchievementDescriptionData_t9C5BBAB764F0088FE40698EB33FE79D5173B2086  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1;
		int32_t L_1 = ___number1;
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * L_2;
		L_2 = GcAchievementDescriptionData_ToAchievementDescription_mA95A2FA7D828072E68C98ADBED56D66FAA59AEA3((&___data0), NULL);
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_2);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 *)L_2);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetAchievementDescriptionImage(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetAchievementDescriptionImage_m21884A1BD6385140C991949EFFC896404EF5BA95 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0EB9CEC404FAEC84F4591C2F0DAF1F030A3878B0);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1;
		NullCheck(L_0);
		int32_t L_1 = ___number1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)))) <= ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = ___number1;
		G_B3_0 = ((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral0EB9CEC404FAEC84F4591C2F0DAF1F030A3878B0, NULL);
		goto IL_0032;
	}

IL_0024:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_4 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1;
		int32_t L_5 = ___number1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_8 = ___texture0;
		NullCheck(L_7);
		AchievementDescription_SetImage_m16FC76EE05781DB25586A64D3B0D6CE3E6213CF5(L_7, L_8, NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerAchievementDescriptionCallback(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerAchievementDescriptionCallback_mBBF292A4186082DE2BD7EBF5F786594E4564C9A4 (Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA2DEA6E90B0DC1F971A74DE11F62EA8333A737B9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 * L_0 = ___callback0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_1 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1;
		G_B3_0 = ((!(((RuntimeObject*)(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_3 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1;
		NullCheck(L_3);
		V_1 = (bool)((((int32_t)(((RuntimeArray*)L_3)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA2DEA6E90B0DC1F971A74DE11F62EA8333A737B9, NULL);
	}

IL_002c:
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 * L_5 = ___callback0;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_6 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1;
		V_2 = (IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1*)L_6;
		IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* L_7 = V_2;
		NullCheck(L_5);
		Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67(L_5, L_7, Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_RuntimeMethod_var);
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AuthenticateCallbackWrapper(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_AuthenticateCallbackWrapper_m030305128E55F176608EA02E1E2552909A7BFA44 (int32_t ___result0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_Invoke_mEBF6CAF1B381E482329CEE02CB25A980B145CB3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * G_B3_0 = NULL;
	Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * G_B4_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m515CBF35A27FA7F5873C236B8C7CDE226FB5F839(NULL);
		Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback_0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback_0;
		int32_t L_3 = ___result0;
		G_B2_0 = L_2;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			G_B3_0 = L_2;
			goto IL_0020;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0021;
	}

IL_0020:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0021:
	{
		String_t* L_4 = ___error1;
		NullCheck(G_B4_1);
		Action_2_Invoke_mEBF6CAF1B381E482329CEE02CB25A980B145CB3E(G_B4_1, (bool)G_B4_0, L_4, Action_2_Invoke_mEBF6CAF1B381E482329CEE02CB25A980B145CB3E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback_0 = (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback_0), (void*)(Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D *)NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearFriends(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ClearFriends_m5A9B4FE4208774C7767D3EF233274E1C6A386F09 (int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size0;
		GameCenterPlatform_SafeClearArray_m3F2C8854EB63AE16CC62EA55FA9621EEEC889FAC((&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends_2), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriends(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetFriends_m9B06BB8D8CF682E23E6A8FB91670EC68C38B4398 (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number1;
		GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB((&___data0), (&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends_2), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetFriendImage(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetFriendImage_mC34CA45D3A0D10096BD37B2247619B01862FD371 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_0 = ___texture0;
		int32_t L_1 = ___number1;
		GameCenterPlatform_SafeSetUserImage_mC41DE236FBD6A8FAA86053E8114004ECE7638257((&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends_2), L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerFriendsCallbackWrapper(System.Action`1<System.Boolean>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerFriendsCallbackWrapper_m2ED663BBC2B8F74E037B1278DD3D72D714B7FCB4 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback0, int32_t ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_1 = NULL;
	bool V_2 = false;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * G_B5_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * G_B6_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends_2;
		V_0 = (bool)((!(((RuntimeObject*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_3 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends_2;
		V_1 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_3;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_4 = V_1;
		NullCheck(L_2);
		LocalUser_SetFriends_m369BCB8021FB5A359B11D2ACB2F1CCD3DFBF0F6B(L_2, L_4, NULL);
	}

IL_001f:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_5 = ___callback0;
		V_2 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)L_5) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_7 = ___callback0;
		int32_t L_8 = ___result1;
		G_B4_0 = L_7;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			G_B5_0 = L_7;
			goto IL_002f;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0030;
	}

IL_002f:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
	}

IL_0030:
	{
		NullCheck(G_B6_1);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(G_B6_1, (bool)G_B6_0, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
	}

IL_0036:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::AchievementCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>,UnityEngine.SocialPlatforms.GameCenter.GcAchievementData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_AchievementCallbackWrapper_m1E3513F7AEC65F3F7EAE2F3883767C013093E44B (Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 * ___callback0, GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral882BAF03B0FD95D4EBE6743DD230FAF39A3ED9BC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* V_1 = NULL;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* V_5 = NULL;
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* L_2 = ___result1;
		NullCheck(L_2);
		V_2 = (bool)((((int32_t)(((RuntimeArray*)L_2)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral882BAF03B0FD95D4EBE6743DD230FAF39A3ED9BC, NULL);
	}

IL_001e:
	{
		GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* L_4 = ___result1;
		NullCheck(L_4);
		AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* L_5 = (AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612*)(AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612*)SZArrayNew(AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		V_1 = L_5;
		V_3 = 0;
		goto IL_003e;
	}

IL_002b:
	{
		AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* L_6 = V_1;
		int32_t L_7 = V_3;
		GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* L_8 = ___result1;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * L_10;
		L_10 = GcAchievementData_ToAchievement_mCE88D5DB0AD1F428DFA7C6B6288F1EAC1B4382C4(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_10);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B *)L_10);
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003e:
	{
		int32_t L_12 = V_3;
		GcAchievementDataU5BU5D_t5BF7D855B06B4DF9F56BA26AC9DAA1FB16EB5F94* L_13 = ___result1;
		NullCheck(L_13);
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))? 1 : 0);
		bool L_14 = V_4;
		if (L_14)
		{
			goto IL_002b;
		}
	}
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 * L_15 = ___callback0;
		AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* L_16 = V_1;
		V_5 = (IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3*)L_16;
		IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* L_17 = V_5;
		NullCheck(L_15);
		Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65(L_15, L_17, Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_RuntimeMethod_var);
	}

IL_0057:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ProgressCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ProgressCallbackWrapper_mEDA52DE039187237EBE9C68F9927B0E2FE303599 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_2 = ___callback0;
		bool L_3 = ___success1;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(L_2, L_3, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ScoreCallbackWrapper_mFB255ED6101BF11FAC8243FFFC7519D8007E820E (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_2 = ___callback0;
		bool L_3 = ___success1;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(L_2, L_3, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ScoreLoaderCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IScore[]>,UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ScoreLoaderCallbackWrapper_mD443A4F13366527344A2312132357A948D9E97D2 (Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B * ___callback0, GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* ___result1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_4 = NULL;
	{
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_2 = ___result1;
		NullCheck(L_2);
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_3 = (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)SZArrayNew(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_1 = L_3;
		V_2 = 0;
		goto IL_002a;
	}

IL_0017:
	{
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_4 = V_1;
		int32_t L_5 = V_2;
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_6 = ___result1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * L_8;
		L_8 = GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 *)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_10 = V_2;
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_11 = ___result1;
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B * L_13 = ___callback0;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_14 = V_1;
		V_4 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_14;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_15 = V_4;
		NullCheck(L_13);
		Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37(L_13, L_15, Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37_RuntimeMethod_var);
	}

IL_0041:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.LoadFriends(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_LoadFriends_m2588423AB4981E834EDBF91FAFBC14B34CE5A315 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, RuntimeObject* ___user0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_2 = ___callback1;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_4 = ___callback1;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(L_4, (bool)0, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_0028;
	}

IL_0021:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_5 = ___callback1;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_LoadFriends_m1EB5C35E82F8408E36C3DB47356D6198E6516203(L_5, NULL);
	}

IL_0028:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_mD2BD6C6784B53686B875E94B35538729377EEC0C (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, RuntimeObject* ___user0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_mA63888DA29B85D439999BB5CAACC65C2539BE191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m9AE0F3B20150C0C9F14CCAEF54A67A6E8F47E04A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1 * L_0 = (U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass21_0__ctor_m88E5FDE6B93424368864BF746056A7FC84B7D830(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1 * L_1 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_2 = ___callback1;
		NullCheck(L_1);
		L_1->___callback_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callback_0), (void*)L_2);
		RuntimeObject* L_3 = ___user0;
		U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1 * L_4 = V_0;
		Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * L_5 = (Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D *)il2cpp_codegen_object_new(Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D_il2cpp_TypeInfo_var);
		Action_2__ctor_mA63888DA29B85D439999BB5CAACC65C2539BE191(L_5, L_4, ((intptr_t)U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m9AE0F3B20150C0C9F14CCAEF54A67A6E8F47E04A_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_mA63888DA29B85D439999BB5CAACC65C2539BE191_RuntimeMethod_var);
		InterfaceActionInvoker2< RuntimeObject*, Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * >::Invoke(1 /* System.Void UnityEngine.SocialPlatforms.ISocialPlatform::Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`2<System.Boolean,System.String>) */, ISocialPlatform_tA236686987B4CB8A0694EEBAB4D7EB57CBABA254_il2cpp_TypeInfo_var, __this, L_3, L_5);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate(UnityEngine.SocialPlatforms.ILocalUser,System.Action`2<System.Boolean,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate_m00EE28E82D18463D20F3938E89FF9EC634C14E57 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, RuntimeObject* ___user0, Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_2_t8EADE87044ADE97906736D729EA2E3EF97F34F3D * L_0 = ___callback1;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_AuthenticateCallback_0), (void*)L_0);
		GameCenterPlatform_Authenticate_m20B972476A98E4DC285612EE25D77B156A781EED(NULL);
		return;
	}
}
// UnityEngine.SocialPlatforms.ILocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::get_localUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_get_localUser_m3EEB7917C0629DBADEE2DCF8E979BBA09A83AF92 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t G_B5_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		V_0 = (bool)((((RuntimeObject*)(LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_2 = (LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD *)il2cpp_codegen_object_new(LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD_il2cpp_TypeInfo_var);
		LocalUser__ctor_m6D2AE6DFC61CEC39842944D970E2B2B5547CBE97(L_2, /*hidden argument*/NULL);
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5), (void*)L_2);
	}

IL_0017:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = GameCenterPlatform_GetAuthenticated_m5D7A9F8E5D366FBA79F17D8F145A11FCB736CD36(NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_4 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = UserProfile_get_id_m16A4060A0C7E4480F68D6915E6FAB15EAE973336(L_4, NULL);
		bool L_6;
		L_6 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_5, _stringLiteralF944DCD635F9801F7AC90A407FBC479964DEC024, NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_0035;
	}

IL_0034:
	{
		G_B5_0 = 0;
	}

IL_0035:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_PopulateLocalUser_m515CBF35A27FA7F5873C236B8C7CDE226FB5F839(NULL);
	}

IL_003f:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_8 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		V_2 = L_8;
		goto IL_0047;
	}

IL_0047:
	{
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::PopulateLocalUser()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_PopulateLocalUser_m515CBF35A27FA7F5873C236B8C7CDE226FB5F839 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		bool L_1;
		L_1 = GameCenterPlatform_GetAuthenticated_m5D7A9F8E5D366FBA79F17D8F145A11FCB736CD36(NULL);
		NullCheck(L_0);
		LocalUser_SetAuthenticated_m1A7992E986F32450A1A97409AF772DC3A0F47E44(L_0, L_1, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		String_t* L_3;
		L_3 = GameCenterPlatform_Internal_UserName_m25B73FE26ECF4E377AE567B7D08E36AD0400EA6D(NULL);
		NullCheck(L_2);
		UserProfile_SetUserName_m107512A03197354BAF98514ED92D647F4FC778DA(L_2, L_3, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_4 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		String_t* L_5;
		L_5 = GameCenterPlatform_Internal_UserID_mA06FF3D7F55FD66F63F13D796C2CE4F75C5052D3(NULL);
		NullCheck(L_4);
		UserProfile_SetUserID_m32F417A48D4FDC4ED180EA2AD92F875996DA3353(L_4, L_5, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_6 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		String_t* L_7;
		L_7 = GameCenterPlatform_Internal_UserGameID_m50723F3AB1DF0ADF196CE3802A59D39827DDACEE(NULL);
		NullCheck(L_6);
		UserProfile_SetUserGameID_m9A90E716F9DB8138181F748243D7BB12BCCAA2D5(L_6, L_7, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_8 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		String_t* L_9;
		L_9 = GameCenterPlatform_Internal_LegacyUserID_m0FAEDABEB8196642D0ACBEEFFAAA0A34C971FCAA(NULL);
		NullCheck(L_8);
		UserProfile_SetLegacyUserID_m3A0B0F4DD6782D40B5CF6D575B670EC96396F030(L_8, L_9, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_10 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		bool L_11;
		L_11 = GameCenterPlatform_GetIsUnderage_m9B4B89CF2DE9A5200EA9703C6C340854E7302F45(NULL);
		NullCheck(L_10);
		LocalUser_SetUnderage_m84D3621386D7E917F7D4AD7D2C00DE8CA8AD278C(L_10, L_11, NULL);
		LocalUser_t55C68E98993F86B6FBB7A25F28EB989CD7E6A3AD * L_12 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_LocalUser_5;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_13;
		L_13 = GameCenterPlatform_GetUserImage_mC24801D65578DA05FC1367DE548D57E6C10858C4(NULL);
		NullCheck(L_12);
		UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221(L_12, L_13, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievementDescriptions(System.Action`1<UnityEngine.SocialPlatforms.IAchievementDescription[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadAchievementDescriptions_m2ABE78471BB5B0FD49A5E640881F940411EF2E7D (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* V_2 = NULL;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 * L_2 = ___callback0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 * L_4 = ___callback0;
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_5 = (AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)SZArrayNew(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1*)L_5;
		IAchievementDescriptionU5BU5D_tA09B03FB7807D9E82F5DBB3D88F4761CB6EFBDD1* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67(L_4, L_6, Action_1_Invoke_mACDC11E62A95308B0F480575D14D797153B04D67_RuntimeMethod_var);
	}

IL_0026:
	{
		goto IL_002f;
	}

IL_0028:
	{
		Action_1_t8739D9AE03007E7B95C8FA61FA2FA5829D864C49 * L_7 = ___callback0;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalLoadAchievementDescriptions_m25895D2455BE47558511DA3353A78728045BBB7A(L_7, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportProgress(System.String,System.Double,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ReportProgress_m84D8EA9E8FF51493E28468EDB8FB330D112725C7 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, String_t* ___id0, double ___progress1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_2 = ___callback2;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_4 = ___callback2;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(L_4, (bool)0, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0021:
	{
		String_t* L_5 = ___id0;
		double L_6 = ___progress1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_7 = ___callback2;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalReportProgress_mC287DD08303ADC0C0AA5CDD7E64A19A23CF9CC65(L_5, L_6, L_7, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadAchievements(System.Action`1<UnityEngine.SocialPlatforms.IAchievement[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadAchievements_m23EED7C060A33D403C9F91F5F95CFA2C12AB90B9 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* V_2 = NULL;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 * L_2 = ___callback0;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 * L_4 = ___callback0;
		AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612* L_5 = (AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612*)(AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612*)SZArrayNew(AchievementU5BU5D_tED830B37019AED404F90055C55FB9C9877735612_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3*)L_5;
		IAchievementU5BU5D_t2EB94CCAA33FED505799D764256677258220CEA3* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65(L_4, L_6, Action_1_Invoke_m3B42EB0FEB05F6E27F4EB4AB807AB453FA021E65_RuntimeMethod_var);
	}

IL_0026:
	{
		goto IL_002f;
	}

IL_0028:
	{
		Action_1_t4AB51E58A5F757E5EB04E408FD37B7BE6D34B0B5 * L_7 = ___callback0;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalLoadAchievements_mE1DE7A99AC5421D83A90891545A13154503A24C8(L_7, NULL);
	}

IL_002f:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ReportScore(System.Int64,System.String,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ReportScore_mC2F686533059939CF30468D9D46E14C84AABAF2E (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, int64_t ___score0, String_t* ___board1, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_2 = ___callback2;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_4 = ___callback2;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(L_4, (bool)0, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
	}

IL_001f:
	{
		goto IL_002a;
	}

IL_0021:
	{
		int64_t L_5 = ___score0;
		String_t* L_6 = ___board1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_7 = ___callback2;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalReportScore_m5BD67253E46A7B04DBABB10AE74D92EEBFB34CA4(L_5, L_6, L_7, NULL);
	}

IL_002a:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(System.String,System.Action`1<UnityEngine.SocialPlatforms.IScore[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadScores_mC159C539D06107214560137F98CB37C14013B48D (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, String_t* ___category0, Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_2 = NULL;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B * L_2 = ___callback1;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B * L_4 = ___callback1;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_5 = (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)SZArrayNew(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_5;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37(L_4, L_6, Action_1_Invoke_m402C3DC89D0185A2D6E9C5FB8A19973A7DF1DA37_RuntimeMethod_var);
	}

IL_0026:
	{
		goto IL_0030;
	}

IL_0028:
	{
		String_t* L_7 = ___category0;
		Action_1_t13978691E30388B826A6BB4A269D21E9CF995A4B * L_8 = ___callback1;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_InternalLoadScores_m2F9795BEEBAADBFD30835FDCA37120CAF01E4D39(L_7, L_8, NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadScores(UnityEngine.SocialPlatforms.ILeaderboard,System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadScores_m12ED827C5C14AE481BDFB6C12DC973A46CF53056 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, RuntimeObject* ___board0, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * V_0 = NULL;
	GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_3 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_2 = ___callback1;
		V_4 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_0021;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_4 = ___callback1;
		NullCheck(L_4);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(L_4, (bool)0, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
	}

IL_0021:
	{
		goto IL_0082;
	}

IL_0023:
	{
		RuntimeObject* L_5 = ___board0;
		V_0 = ((Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 *)CastclassClass((RuntimeObject*)L_5, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var));
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_6 = V_0;
		GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * L_7 = (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D *)il2cpp_codegen_object_new(GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_il2cpp_TypeInfo_var);
		GcLeaderboard__ctor_mE6ABD1A5D616A3371023FB53BAAA34C638081632(L_7, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 * L_8 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_GcBoards_6;
		GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * L_9 = V_1;
		NullCheck(L_8);
		List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6(L_8, L_9, List_1_Add_mCA3DB2EFCC889D9C7267FBA2E292AC54312F5EA6_RuntimeMethod_var);
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_10 = V_0;
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11;
		L_11 = Leaderboard_GetUserFilter_m859FFF97FCAF7D42B215AA0166FCB6B8B0025FF3(L_10, NULL);
		V_2 = L_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = V_2;
		NullCheck(L_12);
		V_5 = (bool)((((int32_t)(((RuntimeArray*)L_12)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0051;
		}
	}
	{
		V_2 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)NULL;
	}

IL_0051:
	{
		GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * L_14 = V_1;
		RuntimeObject* L_15 = ___board0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.SocialPlatforms.ILeaderboard::get_id() */, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_15);
		RuntimeObject* L_17 = ___board0;
		NullCheck(L_17);
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  L_18;
		L_18 = InterfaceFuncInvoker0< Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_17);
		int32_t L_19 = L_18.___from_0;
		RuntimeObject* L_20 = ___board0;
		NullCheck(L_20);
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  L_21;
		L_21 = InterfaceFuncInvoker0< Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  >::Invoke(2 /* UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.ILeaderboard::get_range() */, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_20);
		int32_t L_22 = L_21.___count_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = V_2;
		RuntimeObject* L_24 = ___board0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.ILeaderboard::get_userScope() */, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_24);
		RuntimeObject* L_26 = ___board0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(3 /* UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.ILeaderboard::get_timeScope() */, ILeaderboard_t62C479C3D29C80B4143F9EBA159EF2ECCA8D3C93_il2cpp_TypeInfo_var, L_26);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_28 = ___callback1;
		NullCheck(L_14);
		GcLeaderboard_Internal_LoadScores_m94273C598B909F6E518E4C6A0A1EEFA83BD2ECAD(L_14, L_16, L_19, L_22, L_23, L_25, L_27, L_28, NULL);
	}

IL_0082:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LeaderboardCallbackWrapper(System.Action`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LeaderboardCallbackWrapper_m1649B9086337504F3E9C92EFC7A14EC33A0945C8 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback0, bool ___success1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_2 = ___callback0;
		bool L_3 = ___success1;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(L_2, L_3, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetLoading(UnityEngine.SocialPlatforms.ILeaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetLoading_m8B553D2C428CCC0172953A741C624A1A5F344617 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, RuntimeObject* ___board0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77  V_2;
	memset((&V_2), 0, sizeof(V_2));
	GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0063;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 * L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_GcBoards_6;
		NullCheck(L_2);
		Enumerator_tB6B6259AD8B5022472BDC50A62EDE7E4DD79BC77  L_3;
		L_3 = List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C(L_2, List_1_GetEnumerator_mE5236B316CC097373903CF5BBD4BDB5EC818493C_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_001e:
	try
	{// begin try (depth: 1)
		{
			goto IL_0045;
		}

IL_0020:
		{
			GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * L_4;
			L_4 = Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_inline((&V_2), Enumerator_get_Current_m569C649AE623699490239346569195E4F8FBD85C_RuntimeMethod_var);
			V_3 = L_4;
			GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * L_5 = V_3;
			RuntimeObject* L_6 = ___board0;
			NullCheck(L_5);
			bool L_7;
			L_7 = GcLeaderboard_Contains_m08D3F5665F1A25DBDC41B9D98461D5DBB98DCD48(L_5, ((Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 *)CastclassClass((RuntimeObject*)L_6, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var)), NULL);
			V_4 = L_7;
			bool L_8 = V_4;
			if (!L_8)
			{
				goto IL_0044;
			}
		}

IL_003b:
		{
			GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * L_9 = V_3;
			NullCheck(L_9);
			bool L_10;
			L_10 = GcLeaderboard_Loading_m089B19A42B7EA2AB31481F2CA81E47279ABF0E75(L_9, NULL);
			V_1 = L_10;
			IL2CPP_LEAVE(0x99, FINALLY_0050);
		}

IL_0044:
		{
		}

IL_0045:
		{
			bool L_11;
			L_11 = Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C((&V_2), Enumerator_MoveNext_mDC16B1E5DD861D919D0EE93BF0C906D81CB7073C_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_0020;
			}
		}

IL_004e:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0050);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0050;
	}

FINALLY_0050:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3((&V_2), Enumerator_Dispose_m8113B8C26560E0C3B81072CE806A0E0927A7F6E3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(80)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(80)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x99, IL_0063)
		IL2CPP_JUMP_TBL(0x95, IL_005f)
	}

IL_005f:
	{
		V_1 = (bool)0;
		goto IL_0063;
	}

IL_0063:
	{
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::VerifyAuthentication()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		RuntimeObject* L_0;
		L_0 = GameCenterPlatform_get_localUser_m3EEB7917C0629DBADEE2DCF8E979BBA09A83AF92(__this, NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean UnityEngine.SocialPlatforms.ILocalUser::get_authenticated() */, ILocalUser_t8D7F34634AF940D34302E4F415AD50C7132EB7F6_il2cpp_TypeInfo_var, L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral697DAE71CF742F2932950075B1D260B4A087E7BA, NULL);
		V_1 = (bool)0;
		goto IL_0027;
	}

IL_0023:
	{
		V_1 = (bool)1;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_3 = V_1;
		return L_3;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowAchievementsUI_m0401580BA149B7E30547E7E05DC4644CB7E2DBA6 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0016;
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowAchievementsUI_m2570D8A2789253DC03808182E5DDB12F6F3CAA78(NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowLeaderboardUI_m10D84DC004496337D2927EA748EEEE0689FF6284 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		goto IL_0016;
	}

IL_0010:
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_ShowLeaderboardUI_m8E07D464AA4195EA8391BE3906804B6ECD05742F(NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ClearUsers(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ClearUsers_mD07BEA5DE18FFE16AB24B58BC25ECC2162E48AF1 (int32_t ___size0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		int32_t L_0 = ___size0;
		GameCenterPlatform_SafeClearArray_m3F2C8854EB63AE16CC62EA55FA9621EEEC889FAC((&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users_3), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUser(UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetUser_m06A17FCCC11FA6C2C98CE7CE838622D173DB2401 (GcUserProfileData_tCDEF4010D44CB370077CE47055C89CD9E808A535  ___data0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		int32_t L_0 = ___number1;
		GcUserProfileData_AddToArray_m9CC6C97BD081C9EC250AAA5E9BDCD398AF724BFB((&___data0), (&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users_3), L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SetUserImage(UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SetUserImage_mEACDE90F767F0A0716AFEE720F0C5E03A33E7268 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___texture0, int32_t ___number1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_0 = ___texture0;
		int32_t L_1 = ___number1;
		GameCenterPlatform_SafeSetUserImage_mC41DE236FBD6A8FAA86053E8114004ECE7638257((&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users_3), L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerUsersCallbackWrapper(System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerUsersCallbackWrapper_m5D6D81C96398BADB38D69AE72B21D3C5BEF4DD36 (Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_1 = NULL;
	{
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 * L_0 = ___callback0;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 * L_2 = ___callback0;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_3 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users_3;
		V_1 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_3;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_4 = V_1;
		NullCheck(L_2);
		Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223(L_2, L_4, Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_RuntimeMethod_var);
	}

IL_0017:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadUsers(System.String[],System.Action`1<UnityEngine.SocialPlatforms.IUserProfile[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadUsers_m616D01C1A67469537A3F2D02DC934D57CE4B01A2 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___userIds0, Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 * ___callback1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* V_2 = NULL;
	{
		bool L_0;
		L_0 = GameCenterPlatform_VerifyAuthentication_mC223F7D625EB6B61E71D4BE11B43BC9F18D37DE9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 * L_2 = ___callback1;
		V_1 = (bool)((!(((RuntimeObject*)(Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 *)L_2) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 * L_4 = ___callback1;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_5 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)0);
		V_2 = (IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43*)L_5;
		IUserProfileU5BU5D_t0179D2FF9BD9F78A4E0A10AE350DC1F19E5FCB43* L_6 = V_2;
		NullCheck(L_4);
		Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223(L_4, L_6, Action_1_Invoke_m321772158DAAE72E39838DA8E743807650E28223_RuntimeMethod_var);
	}

IL_0026:
	{
		goto IL_0030;
	}

IL_0028:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = ___userIds0;
		Action_1_tC1B1CEF95B17CEB3AF8A8A9D527A20083D38DD78 * L_8 = ___callback1;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_Internal_LoadUsers_m999E05472208C579E960909336F9A62CB91D7BDB(L_7, L_8, NULL);
	}

IL_0030:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeSetUserImage(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,UnityEngine.Texture2D,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeSetUserImage_mC41DE236FBD6A8FAA86053E8114004ECE7638257 (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___array0, Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * ___texture1, int32_t ___number2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral023C61CBC6B5B20519E94C2D7DF0CAE83164CB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBFFE2B018FE9C481B67387513F728E577370086);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_0 = ___array0;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_1 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_0);
		NullCheck(L_1);
		int32_t L_2 = ___number2;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))) <= ((int32_t)L_2)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___number2;
		G_B3_0 = ((((int32_t)L_3) < ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 1;
	}

IL_000f:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral023C61CBC6B5B20519E94C2D7DF0CAE83164CB4A, NULL);
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_5 = (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 *)il2cpp_codegen_object_new(Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4_il2cpp_TypeInfo_var);
		Texture2D__ctor_m3BA82E87442B7F69E118477069AE11101B9DF796(L_5, ((int32_t)76), ((int32_t)76), /*hidden argument*/NULL);
		___texture1 = L_5;
	}

IL_002b:
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_6 = ___array0;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_7 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_6);
		NullCheck(L_7);
		int32_t L_8 = ___number2;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))) <= ((int32_t)L_8)))
		{
			goto IL_003b;
		}
	}
	{
		int32_t L_9 = ___number2;
		G_B8_0 = ((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003c;
	}

IL_003b:
	{
		G_B8_0 = 0;
	}

IL_003c:
	{
		V_1 = (bool)G_B8_0;
		bool L_10 = V_1;
		if (!L_10)
		{
			goto IL_004d;
		}
	}
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_11 = ___array0;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_12 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_11);
		int32_t L_13 = ___number2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		UserProfile_t3EF35349E23201EF9F3C5956C44384FA45C1EF29 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * L_16 = ___texture1;
		NullCheck(L_15);
		UserProfile_SetImage_mEBC25331E4B4E201DB02A0442C473829E07D6221(L_15, L_16, NULL);
		goto IL_0058;
	}

IL_004d:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralBBFFE2B018FE9C481B67387513F728E577370086, NULL);
	}

IL_0058:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::SafeClearArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_SafeClearArray_m3F2C8854EB63AE16CC62EA55FA9621EEEC889FAC (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** ___array0, int32_t ___size1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_0 = ___array0;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_1 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_0);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_2 = ___array0;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_3 = *((UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A**)L_2);
		NullCheck(L_3);
		int32_t L_4 = ___size1;
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_0 = (bool)G_B3_0;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_001e;
		}
	}
	{
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A** L_6 = ___array0;
		int32_t L_7 = ___size1;
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_8 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)L_7);
		*((RuntimeObject **)L_6) = (RuntimeObject *)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_6, (void*)(RuntimeObject *)L_8);
	}

IL_001e:
	{
		return;
	}
}
// UnityEngine.SocialPlatforms.ILeaderboard UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateLeaderboard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_CreateLeaderboard_m4D487F47156DF1F0EE7DA44946D4ED48936689BB (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_0 = (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 *)il2cpp_codegen_object_new(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71_il2cpp_TypeInfo_var);
		Leaderboard__ctor_mFB0608CFF4A090982904F495B84A91DC0FAC5B73(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_1 = V_0;
		V_1 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.SocialPlatforms.IAchievement UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::CreateAchievement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameCenterPlatform_CreateAchievement_mD92E4A555CBCE298E00F99220CF3930DE64DE35B (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * L_0 = (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B *)il2cpp_codegen_object_new(Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B_il2cpp_TypeInfo_var);
		Achievement__ctor_m9EA819E3F3EA4B91F8998D54EF2F5B2B1E29976F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * L_1 = V_0;
		V_1 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		RuntimeObject* L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::TriggerResetAchievementCallback(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_TriggerResetAchievementCallback_m974E37996477654351E01C2902390BEECA5550CF (bool ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_0 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_ResetAchievements_4;
		V_0 = (bool)((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_2 = ((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_ResetAchievements_4;
		bool L_3 = ___result0;
		NullCheck(L_2);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(L_2, L_3, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Authenticate_m20B972476A98E4DC285612EE25D77B156A781EED (const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Authenticate_m20B972476A98E4DC285612EE25D77B156A781EED_ftn) ();
	static GameCenterPlatform_Authenticate_m20B972476A98E4DC285612EE25D77B156A781EED_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Authenticate_m20B972476A98E4DC285612EE25D77B156A781EED_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Authenticate()");
	_il2cpp_icall_func();
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetAuthenticated_m5D7A9F8E5D366FBA79F17D8F145A11FCB736CD36 (const RuntimeMethod* method)
{
	typedef bool (*GameCenterPlatform_GetAuthenticated_m5D7A9F8E5D366FBA79F17D8F145A11FCB736CD36_ftn) ();
	static GameCenterPlatform_GetAuthenticated_m5D7A9F8E5D366FBA79F17D8F145A11FCB736CD36_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_GetAuthenticated_m5D7A9F8E5D366FBA79F17D8F145A11FCB736CD36_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetAuthenticated()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserName_m25B73FE26ECF4E377AE567B7D08E36AD0400EA6D (const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserName_m25B73FE26ECF4E377AE567B7D08E36AD0400EA6D_ftn) ();
	static GameCenterPlatform_Internal_UserName_m25B73FE26ECF4E377AE567B7D08E36AD0400EA6D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserName_m25B73FE26ECF4E377AE567B7D08E36AD0400EA6D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserName()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserID_mA06FF3D7F55FD66F63F13D796C2CE4F75C5052D3 (const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserID_mA06FF3D7F55FD66F63F13D796C2CE4F75C5052D3_ftn) ();
	static GameCenterPlatform_Internal_UserID_mA06FF3D7F55FD66F63F13D796C2CE4F75C5052D3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserID_mA06FF3D7F55FD66F63F13D796C2CE4F75C5052D3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserID()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_UserGameID_m50723F3AB1DF0ADF196CE3802A59D39827DDACEE (const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_UserGameID_m50723F3AB1DF0ADF196CE3802A59D39827DDACEE_ftn) ();
	static GameCenterPlatform_Internal_UserGameID_m50723F3AB1DF0ADF196CE3802A59D39827DDACEE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_UserGameID_m50723F3AB1DF0ADF196CE3802A59D39827DDACEE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_UserGameID()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.String UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LegacyUserID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameCenterPlatform_Internal_LegacyUserID_m0FAEDABEB8196642D0ACBEEFFAAA0A34C971FCAA (const RuntimeMethod* method)
{
	typedef String_t* (*GameCenterPlatform_Internal_LegacyUserID_m0FAEDABEB8196642D0ACBEEFFAAA0A34C971FCAA_ftn) ();
	static GameCenterPlatform_Internal_LegacyUserID_m0FAEDABEB8196642D0ACBEEFFAAA0A34C971FCAA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LegacyUserID_m0FAEDABEB8196642D0ACBEEFFAAA0A34C971FCAA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LegacyUserID()");
	String_t* icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameCenterPlatform_GetIsUnderage_m9B4B89CF2DE9A5200EA9703C6C340854E7302F45 (const RuntimeMethod* method)
{
	typedef bool (*GameCenterPlatform_GetIsUnderage_m9B4B89CF2DE9A5200EA9703C6C340854E7302F45_ftn) ();
	static GameCenterPlatform_GetIsUnderage_m9B4B89CF2DE9A5200EA9703C6C340854E7302F45_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_GetIsUnderage_m9B4B89CF2DE9A5200EA9703C6C340854E7302F45_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetIsUnderage()");
	bool icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * GameCenterPlatform_GetUserImage_mC24801D65578DA05FC1367DE548D57E6C10858C4 (const RuntimeMethod* method)
{
	typedef Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * (*GameCenterPlatform_GetUserImage_mC24801D65578DA05FC1367DE548D57E6C10858C4_ftn) ();
	static GameCenterPlatform_GetUserImage_mC24801D65578DA05FC1367DE548D57E6C10858C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_GetUserImage_mC24801D65578DA05FC1367DE548D57E6C10858C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::GetUserImage()");
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4 * icallRetVal = _il2cpp_icall_func();
	return icallRetVal;
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_LoadFriends_m1EB5C35E82F8408E36C3DB47356D6198E6516203 (RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_LoadFriends_m1EB5C35E82F8408E36C3DB47356D6198E6516203_ftn) (RuntimeObject *);
	static GameCenterPlatform_LoadFriends_m1EB5C35E82F8408E36C3DB47356D6198E6516203_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_LoadFriends_m1EB5C35E82F8408E36C3DB47356D6198E6516203_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::LoadFriends(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievementDescriptions_m25895D2455BE47558511DA3353A78728045BBB7A (RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalLoadAchievementDescriptions_m25895D2455BE47558511DA3353A78728045BBB7A_ftn) (RuntimeObject *);
	static GameCenterPlatform_InternalLoadAchievementDescriptions_m25895D2455BE47558511DA3353A78728045BBB7A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalLoadAchievementDescriptions_m25895D2455BE47558511DA3353A78728045BBB7A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievementDescriptions(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadAchievements_mE1DE7A99AC5421D83A90891545A13154503A24C8 (RuntimeObject * ___callback0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalLoadAchievements_mE1DE7A99AC5421D83A90891545A13154503A24C8_ftn) (RuntimeObject *);
	static GameCenterPlatform_InternalLoadAchievements_mE1DE7A99AC5421D83A90891545A13154503A24C8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalLoadAchievements_mE1DE7A99AC5421D83A90891545A13154503A24C8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadAchievements(System.Object)");
	_il2cpp_icall_func(___callback0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportProgress_mC287DD08303ADC0C0AA5CDD7E64A19A23CF9CC65 (String_t* ___id0, double ___progress1, RuntimeObject * ___callback2, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalReportProgress_mC287DD08303ADC0C0AA5CDD7E64A19A23CF9CC65_ftn) (String_t*, double, RuntimeObject *);
	static GameCenterPlatform_InternalReportProgress_mC287DD08303ADC0C0AA5CDD7E64A19A23CF9CC65_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalReportProgress_mC287DD08303ADC0C0AA5CDD7E64A19A23CF9CC65_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportProgress(System.String,System.Double,System.Object)");
	_il2cpp_icall_func(___id0, ___progress1, ___callback2);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalReportScore_m5BD67253E46A7B04DBABB10AE74D92EEBFB34CA4 (int64_t ___score0, String_t* ___category1, RuntimeObject * ___callback2, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalReportScore_m5BD67253E46A7B04DBABB10AE74D92EEBFB34CA4_ftn) (int64_t, String_t*, RuntimeObject *);
	static GameCenterPlatform_InternalReportScore_m5BD67253E46A7B04DBABB10AE74D92EEBFB34CA4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalReportScore_m5BD67253E46A7B04DBABB10AE74D92EEBFB34CA4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalReportScore(System.Int64,System.String,System.Object)");
	_il2cpp_icall_func(___score0, ___category1, ___callback2);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_InternalLoadScores_m2F9795BEEBAADBFD30835FDCA37120CAF01E4D39 (String_t* ___category0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_InternalLoadScores_m2F9795BEEBAADBFD30835FDCA37120CAF01E4D39_ftn) (String_t*, RuntimeObject *);
	static GameCenterPlatform_InternalLoadScores_m2F9795BEEBAADBFD30835FDCA37120CAF01E4D39_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_InternalLoadScores_m2F9795BEEBAADBFD30835FDCA37120CAF01E4D39_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::InternalLoadScores(System.String,System.Object)");
	_il2cpp_icall_func(___category0, ___callback1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowAchievementsUI_m2570D8A2789253DC03808182E5DDB12F6F3CAA78 (const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowAchievementsUI_m2570D8A2789253DC03808182E5DDB12F6F3CAA78_ftn) ();
	static GameCenterPlatform_Internal_ShowAchievementsUI_m2570D8A2789253DC03808182E5DDB12F6F3CAA78_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowAchievementsUI_m2570D8A2789253DC03808182E5DDB12F6F3CAA78_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowAchievementsUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_ShowLeaderboardUI_m8E07D464AA4195EA8391BE3906804B6ECD05742F (const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_ShowLeaderboardUI_m8E07D464AA4195EA8391BE3906804B6ECD05742F_ftn) ();
	static GameCenterPlatform_Internal_ShowLeaderboardUI_m8E07D464AA4195EA8391BE3906804B6ECD05742F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_ShowLeaderboardUI_m8E07D464AA4195EA8391BE3906804B6ECD05742F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_ShowLeaderboardUI()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_Internal_LoadUsers_m999E05472208C579E960909336F9A62CB91D7BDB (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___userIds0, RuntimeObject * ___callback1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_Internal_LoadUsers_m999E05472208C579E960909336F9A62CB91D7BDB_ftn) (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, RuntimeObject *);
	static GameCenterPlatform_Internal_LoadUsers_m999E05472208C579E960909336F9A62CB91D7BDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_Internal_LoadUsers_m999E05472208C579E960909336F9A62CB91D7BDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::Internal_LoadUsers(System.String[],System.Object)");
	_il2cpp_icall_func(___userIds0, ___callback1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ResetAllAchievements_mC15426C08E5DC78F2B3F0AA8FA7DF8E1CC28C9D9 (const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_ResetAllAchievements_mC15426C08E5DC78F2B3F0AA8FA7DF8E1CC28C9D9_ftn) ();
	static GameCenterPlatform_ResetAllAchievements_mC15426C08E5DC78F2B3F0AA8FA7DF8E1CC28C9D9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_ResetAllAchievements_mC15426C08E5DC78F2B3F0AA8FA7DF8E1CC28C9D9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements()");
	_il2cpp_icall_func();
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowDefaultAchievementBanner_m4F1DFCD4CB1C1C807B8612D20D87EB10A47B9E79 (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_ShowDefaultAchievementBanner_m4F1DFCD4CB1C1C807B8612D20D87EB10A47B9E79_ftn) (bool);
	static GameCenterPlatform_ShowDefaultAchievementBanner_m4F1DFCD4CB1C1C807B8612D20D87EB10A47B9E79_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_ShowDefaultAchievementBanner_m4F1DFCD4CB1C1C807B8612D20D87EB10A47B9E79_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementBanner(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ResetAllAchievements(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ResetAllAchievements_m156692A6235E505894A9C40EB6864414277D0C90 (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * ___callback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_0 = ___callback0;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_ResetAchievements_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_ResetAchievements_4), (void*)L_0);
		GameCenterPlatform_ResetAllAchievements_mC15426C08E5DC78F2B3F0AA8FA7DF8E1CC28C9D9(NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowDefaultAchievementCompletionBanner(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowDefaultAchievementCompletionBanner_m7335AE6D96A8126E369D3CF0F3581BAF08C4CF00 (bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowDefaultAchievementBanner_m4F1DFCD4CB1C1C807B8612D20D87EB10A47B9E79(L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowLeaderboardUI(System.String,UnityEngine.SocialPlatforms.TimeScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowLeaderboardUI_m3508CE4760382751BD4DE3064472948579E333CB (String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___leaderboardID0;
		int32_t L_1 = ___timeScope1;
		il2cpp_codegen_runtime_class_init_inline(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		GameCenterPlatform_ShowSpecificLeaderboardUI_m8020D079A7C759AA9223588CC35501ADEE137096(L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform_ShowSpecificLeaderboardUI_m8020D079A7C759AA9223588CC35501ADEE137096 (String_t* ___leaderboardID0, int32_t ___timeScope1, const RuntimeMethod* method)
{
	typedef void (*GameCenterPlatform_ShowSpecificLeaderboardUI_m8020D079A7C759AA9223588CC35501ADEE137096_ftn) (String_t*, int32_t);
	static GameCenterPlatform_ShowSpecificLeaderboardUI_m8020D079A7C759AA9223588CC35501ADEE137096_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GameCenterPlatform_ShowSpecificLeaderboardUI_m8020D079A7C759AA9223588CC35501ADEE137096_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::ShowSpecificLeaderboardUI(System.String,System.Int32)");
	_il2cpp_icall_func(___leaderboardID0, ___timeScope1);
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform__ctor_m341814BE3C4AC9683D3C828F744775C56E3B37A8 (GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameCenterPlatform__cctor_m6FA1E62C4DAFFDCE1885B5240E0FF2332542B580 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5* L_0 = (AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5*)SZArrayNew(AchievementDescriptionU5BU5D_t6B3ED222FB06DD89115602C955A2CD98E000CCC5_il2cpp_TypeInfo_var, (uint32_t)0);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_adCache_1), (void*)L_0);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_1 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)0);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_friends_2), (void*)L_1);
		UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A* L_2 = (UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A*)SZArrayNew(UserProfileU5BU5D_tCE4194A0D6665FFF7943DDC3B0B9301D57F84A6A_il2cpp_TypeInfo_var, (uint32_t)0);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___s_users_3), (void*)L_2);
		List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 * L_3 = (List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30 *)il2cpp_codegen_object_new(List_1_tC0F62C6753434D94B7A8CFEB0E642E533349DD30_il2cpp_TypeInfo_var);
		List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA(L_3, /*hidden argument*/List_1__ctor_m5CC4EDCF787094C31DECA9B3401859DA94CC81BA_RuntimeMethod_var);
		((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_GcBoards_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_StaticFields*)il2cpp_codegen_static_fields_for(GameCenterPlatform_tF95E5DA7B46424313E1812B6B80DE102ABB1F96F_il2cpp_TypeInfo_var))->___m_GcBoards_6), (void*)L_3);
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
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<>c__DisplayClass21_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0__ctor_m88E5FDE6B93424368864BF746056A7FC84B7D830 (U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<>c__DisplayClass21_0::<UnityEngine.SocialPlatforms.ISocialPlatform.Authenticate>b__0(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass21_0_U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Eb__0_m9AE0F3B20150C0C9F14CCAEF54A67A6E8F47E04A (U3CU3Ec__DisplayClass21_0_t9AE48FD34643B3E83D69BD45882795E81C13E0A1 * __this, bool ___success0, String_t* ___error1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C * L_0 = __this->___callback_0;
		bool L_1 = ___success0;
		NullCheck(L_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F(L_0, L_1, Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_RuntimeMethod_var);
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
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_pinvoke(const GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D& unmarshaled, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception, NULL);
}
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_pinvoke_back(const GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_pinvoke& marshaled, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D& unmarshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_pinvoke_cleanup(GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_com(const GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D& unmarshaled, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_com& marshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception, NULL);
}
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_com_back(const GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_com& marshaled, GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D& unmarshaled)
{
	Exception_t* ___m_GenericLeaderboard_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_GenericLeaderboard' of type 'GcLeaderboard': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_GenericLeaderboard_1Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
IL2CPP_EXTERN_C void GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshal_com_cleanup(GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::.ctor(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard__ctor_mE6ABD1A5D616A3371023FB53BAAA34C638081632 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * ___board0, const RuntimeMethod* method)
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_0 = ___board0;
		__this->___m_GenericLeaderboard_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_GenericLeaderboard_1), (void*)L_0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Finalize_mFB136BB37E37121BCC3288CED360961840FC4663 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, const RuntimeMethod* method)
{
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
	}

IL_0001:
	try
	{// begin try (depth: 1)
		GcLeaderboard_Dispose_m115757D5DFB8FFE4CD11F2D20244965F992A950C(__this, NULL);
		IL2CPP_LEAVE(0x19, FINALLY_000b);
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{// begin finally (depth: 1)
		Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
		IL2CPP_END_FINALLY(11)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x19, IL_0013)
	}

IL_0013:
	{
		return;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Contains(UnityEngine.SocialPlatforms.Impl.Leaderboard)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Contains_m08D3F5665F1A25DBDC41B9D98461D5DBB98DCD48 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * ___board0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_0 = __this->___m_GenericLeaderboard_1;
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_1 = ___board0;
		V_0 = (bool)((((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 *)L_0) == ((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 *)L_1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetScores(UnityEngine.SocialPlatforms.GameCenter.GcScoreData[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetScores_mEBD889F27BCC226B108D4BB5DD6E24C3BF893F24 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* ___scoreDatas0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* V_4 = NULL;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_0 = __this->___m_GenericLeaderboard_1;
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_004b;
		}
	}
	{
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_2 = ___scoreDatas0;
		NullCheck(L_2);
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_3 = (ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2*)SZArrayNew(ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_1 = L_3;
		V_2 = 0;
		goto IL_002f;
	}

IL_001c:
	{
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_4 = V_1;
		int32_t L_5 = V_2;
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_6 = ___scoreDatas0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * L_8;
		L_8 = GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 *)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_2;
		GcScoreDataU5BU5D_t73EDE233B036EA48B05818A06E102FFD5FCC6B1F* L_11 = ___scoreDatas0;
		NullCheck(L_11);
		V_3 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))? 1 : 0);
		bool L_12 = V_3;
		if (L_12)
		{
			goto IL_001c;
		}
	}
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_13 = __this->___m_GenericLeaderboard_1;
		ScoreU5BU5D_tA28C0ADDF2AA24B073A82D85601CC0DEF6B491F2* L_14 = V_1;
		V_4 = (IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042*)L_14;
		IScoreU5BU5D_t72B1FC43A0166FFFA30AF4E10BCA837E34A6B042* L_15 = V_4;
		NullCheck(L_13);
		Leaderboard_SetScores_m0ACEEFFAD67AE7F7DC644DD034F5F2C431265943(L_13, L_15, NULL);
	}

IL_004b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetLocalScore(UnityEngine.SocialPlatforms.GameCenter.GcScoreData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetLocalScore_mE4B7C301194F99B8CE19D4514825303AAEA54CDB (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, GcScoreData_t90ADB5BBE4EF7B4B1E0503E9E0934EA2ED254F0F  ___scoreData0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_0 = __this->___m_GenericLeaderboard_1;
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_2 = __this->___m_GenericLeaderboard_1;
		Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * L_3;
		L_3 = GcScoreData_ToScore_m14704CC9F232CE249D9C85D2E8D330ADBE1C459E((&___scoreData0), NULL);
		NullCheck(L_2);
		Leaderboard_SetLocalUserScore_m424D44D0AFCBA825FA9604E8BBB538854E1E0C4E(L_2, L_3, NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetMaxRange(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetMaxRange_m387A4CB1A33D2B3C4A5ED16B8877F00D0AA44B80 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, uint32_t ___maxRange0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_0 = __this->___m_GenericLeaderboard_1;
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_2 = __this->___m_GenericLeaderboard_1;
		uint32_t L_3 = ___maxRange0;
		NullCheck(L_2);
		Leaderboard_SetMaxRange_m1C820B01C8989228954B466EDC4C1B8DC95EDE5B(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::SetTitle(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_SetTitle_m979181BD4D8E63155ECB306F3E9FE90CE0973208 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, String_t* ___title0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_0 = __this->___m_GenericLeaderboard_1;
		V_0 = (bool)((!(((RuntimeObject*)(Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * L_2 = __this->___m_GenericLeaderboard_1;
		String_t* L_3 = ___title0;
		NullCheck(L_2);
		Leaderboard_SetTitle_mF9ECC4ECBF137AF4C5AD6A2338AB8786D86EADF2(L_2, L_3, NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Internal_LoadScores(System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Internal_LoadScores_m94273C598B909F6E518E4C6A0A1EEFA83BD2ECAD (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, String_t* ___category0, int32_t ___from1, int32_t ___count2, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___userIDs3, int32_t ___playerScope4, int32_t ___timeScope5, RuntimeObject * ___callback6, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___category0;
		int32_t L_1 = ___from1;
		int32_t L_2 = ___count2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___userIDs3;
		int32_t L_4 = ___playerScope4;
		int32_t L_5 = ___timeScope5;
		RuntimeObject * L_6 = ___callback6;
		intptr_t L_7;
		L_7 = GcLeaderboard_GcLeaderboard_LoadScores_m20BF42809E9482C25142F588CE9BB9E8C41F6AEF(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		__this->___m_InternalLeaderboard_0 = L_7;
		return;
	}
}
// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GcLeaderboard_GcLeaderboard_LoadScores_m20BF42809E9482C25142F588CE9BB9E8C41F6AEF (RuntimeObject * ___self0, String_t* ___category1, int32_t ___from2, int32_t ___count3, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___userIDs4, int32_t ___playerScope5, int32_t ___timeScope6, RuntimeObject * ___callback7, const RuntimeMethod* method)
{
	typedef intptr_t (*GcLeaderboard_GcLeaderboard_LoadScores_m20BF42809E9482C25142F588CE9BB9E8C41F6AEF_ftn) (RuntimeObject *, String_t*, int32_t, int32_t, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, int32_t, int32_t, RuntimeObject *);
	static GcLeaderboard_GcLeaderboard_LoadScores_m20BF42809E9482C25142F588CE9BB9E8C41F6AEF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_GcLeaderboard_LoadScores_m20BF42809E9482C25142F588CE9BB9E8C41F6AEF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_LoadScores(System.Object,System.String,System.Int32,System.Int32,System.String[],System.Int32,System.Int32,System.Object)");
	intptr_t icallRetVal = _il2cpp_icall_func(___self0, ___category1, ___from2, ___count3, ___userIDs4, ___playerScope5, ___timeScope6, ___callback7);
	return icallRetVal;
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Loading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_Loading_m089B19A42B7EA2AB31481F2CA81E47279ABF0E75 (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		intptr_t L_0 = __this->___m_InternalLeaderboard_0;
		bool L_1;
		L_1 = GcLeaderboard_GcLeaderboard_Loading_mD5B7534593974433AB2CFD090697855AA782E4DE(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GcLeaderboard_GcLeaderboard_Loading_mD5B7534593974433AB2CFD090697855AA782E4DE (intptr_t ___leaderboard0, const RuntimeMethod* method)
{
	typedef bool (*GcLeaderboard_GcLeaderboard_Loading_mD5B7534593974433AB2CFD090697855AA782E4DE_ftn) (intptr_t);
	static GcLeaderboard_GcLeaderboard_Loading_mD5B7534593974433AB2CFD090697855AA782E4DE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_GcLeaderboard_Loading_mD5B7534593974433AB2CFD090697855AA782E4DE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Loading(System.IntPtr)");
	bool icallRetVal = _il2cpp_icall_func(___leaderboard0);
	return icallRetVal;
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_Dispose_m115757D5DFB8FFE4CD11F2D20244965F992A950C (GcLeaderboard_t4C8666E37C725723182101E6F36DFAB20D581E9D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->___m_InternalLeaderboard_0;
		GcLeaderboard_GcLeaderboard_Dispose_mE88BED6761601809CBFC8B8B88D49FB599E5EE74(L_0, NULL);
		__this->___m_InternalLeaderboard_0 = (0);
		return;
	}
}
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GcLeaderboard_GcLeaderboard_Dispose_mE88BED6761601809CBFC8B8B88D49FB599E5EE74 (intptr_t ___leaderboard0, const RuntimeMethod* method)
{
	typedef void (*GcLeaderboard_GcLeaderboard_Dispose_mE88BED6761601809CBFC8B8B88D49FB599E5EE74_ftn) (intptr_t);
	static GcLeaderboard_GcLeaderboard_Dispose_mE88BED6761601809CBFC8B8B88D49FB599E5EE74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GcLeaderboard_GcLeaderboard_Dispose_mE88BED6761601809CBFC8B8B88D49FB599E5EE74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::GcLeaderboard_Dispose(System.IntPtr)");
	_il2cpp_icall_func(___leaderboard0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_id_mF2FB90F3D2F1F38DBDB449C956B8B35BAF6108EE_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Achievement_set_percentCompleted_mFB33E191E8D7557E178EEC6DB80B616C268824BD_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, double ___value0, const RuntimeMethod* method)
{
	{
		double L_0 = ___value0;
		__this->___U3CpercentCompletedU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Achievement_get_id_m0BDCED7ECE8BA170E619212CB2D23BD28322A0A6_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Achievement_get_percentCompleted_mC0BFB768F39C110F2A851B5089C300E1C879D860_inline (Achievement_t723EE724DCEBFAE9555CDC909FDA84F71EB5719B * __this, const RuntimeMethod* method)
{
	{
		double L_0 = __this->___U3CpercentCompletedU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AchievementDescription_set_id_m48924C51CD1E02F0416AC540DC2214E4D64AF411_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AchievementDescription_get_id_mC954988F8344E3B7E316D15EBD240A85D06A77C7_inline (AchievementDescription_t0D2306DF6EE55C872DB06E6855D7B1AE0E6DDEF9 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_leaderboardID_m6F297139EFA0D2AA106B58FA267AFF7A147A85DB_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CleaderboardIDU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CleaderboardIDU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Score_set_value_m7332E2AAE1792ECEA5016FA51F4E4403CDA120C3_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->___U3CvalueU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t Score_get_value_m2978563520D7392815E60349F89A5A1B5516DE5E_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->___U3CvalueU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Score_get_leaderboardID_m46C97C5AFC37C00BFBEE51457BD6149B874E114A_inline (Score_t9ED78BAAA0A342F85A3473CCF95CE31E6BF03D53 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___U3CleaderboardIDU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_id_m384FB70C2196021186F68CDCB7EA91DF88129719_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CidU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CidU3Ek__BackingField_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_range_mD56709B5A37AEEB0BA5D6702261CA840891849EA_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  ___value0, const RuntimeMethod* method)
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  L_0 = ___value0;
		__this->___U3CrangeU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_userScope_m43E61AEA535770AB7D3A6E67B72917D954CB048A_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CuserScopeU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Leaderboard_set_timeScope_m3248C6661CA59EDF283927C63D9030FD1763E3EE_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CtimeScopeU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Leaderboard_get_id_mA5577E5D07BEE409EF2CDE6177AEB90547554770_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->___U3CidU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  Leaderboard_get_range_m98008ADA839E76C8D69D152F7FC6EDBF2F6985DB_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	{
		Range_tDDBAD7CBDC5DD273DA4330F4E9CDF24C62F16ED6  L_0 = __this->___U3CrangeU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_userScope_m84E19D835910E26104D25567BA0B1C6A518FC5C1_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->___U3CuserScopeU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Leaderboard_get_timeScope_mB7893524B11F9CF2C739B269C6CA34F19B1FC95E_inline (Leaderboard_tBDB34CC6F79318BE6D7761015C70C8A5CC64EC71 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->___U3CtimeScopeU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->___current_3;
		return L_0;
	}
}
