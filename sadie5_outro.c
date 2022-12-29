#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	float fLocal_7 = 0f;
	float fLocal_8 = 0f;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 24;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	int iLocal_117[2] = { 0, 0 };
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	struct<4> Local_126 = { 0, 0, 0, 0 } ;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_16 = joaat("MES_SADIE5_MALES_01");
	iLocal_17 = -2013410069;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_126);
	}
	__LIB_11__::func_243(&Local_126, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_126))
	{
		__LIB_5__::func_233(&Local_126);
		switch (__LIB_0__::func_57(Local_126))
		{
			case 0:
				if (func_6(&Local_126))
				{
					__LIB_0__::func_19(&Local_126, 1);
				}
				break;
			case 1:
				if (func_8(&Local_126))
				{
					__LIB_0__::func_19(&Local_126, 2);
				}
				break;
			case 2:
				if (func_9(&Local_126))
				{
					__LIB_0__::func_19(&Local_126, 3);
				}
				break;
			case 3:
				func_1(&Local_126);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_126);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					__LIB_1__::func_774(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0)
{
	STREAMING::REQUEST_MODEL(iLocal_16, false);
	TASK::REQUEST_WAYPOINT_RECORDING("sad5_outro");
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("sad5_outro"))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_16))
	{
		return false;
	}
	return true;
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_11(var uParam0)
{
	__LIB_4__::func_269(0);
	return 1;
}

int func_21(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_14))
	{
		iLocal_14 = func_44(11, 1, 0, 0f, 0f, 0f, 0f, 0, 1, 0, 1, 0, 0, -1248623443, 0, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_14, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_14, 130, true);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_14, "sad5_outro", 0, 9224, -1, 0, 0, -1);
		return 0;
	}
	if (__LIB_0__::func_895(Global_1835011[72 /*74*/].f_1) == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
		{
			iLocal_15 = __LIB_1__::func_545(iLocal_16, -766.3174f, -1262.813f, 43.0245f, 272.9365f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::_SET_PED_BODY_COMPONENT(iLocal_15, iLocal_17);
			PED::_UPDATE_PED_VARIATION(iLocal_15, true, true, true, true, false);
			return 0;
		}
		__LIB_4__::func_269(1);
		if (!__LIB_8__::func_783(512))
		{
			return 0;
		}
		HUD::_TEXT_DATABASE_REQUEST("SAD5");
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("SAD5"))
		{
			return 0;
		}
		__LIB_0__::func_928(&uLocal_19, iLocal_15, "SAD5_FINLEY", 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iLocal_15, joaat("SAD5_FINLEY"));
	}
	return 1;
}

bool func_23(var uParam0)
{
	if (__LIB_0__::func_895(Global_1835011[72 /*74*/].f_1) == 0)
	{
		func_49(uParam0);
		if (__LIB_0__::func_94(Global_35, -766.3275f, -1264.055f, 43.0245f, 1) > 100f)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_15);
			return true;
		}
	}
	if (!__LIB_0__::func_1(uLocal_18, 1))
	{
		if (__LIB_0__::func_665(Global_35, iLocal_14, 0, 0) > 150f || !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_14, 0))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_14, 130, false);
			PED::SET_PED_KEEP_TASK(iLocal_14, false);
			__LIB_1__::func_774(11, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			__LIB_0__::func_7(&uLocal_18, 1);
		}
	}
	return false;
}

int func_44(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_75(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_3__::func_921(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_49(var uParam0)
{
	__LIB_1__::func_573(iLocal_15, "SAD5_FINLEY", 5f, 0, 0, 4);
	PED::SET_PED_RESET_FLAG(iLocal_15, 49, true);
	if (__LIB_0__::func_665(Global_35, iLocal_15, 1, 1) > 6f)
	{
		if (__LIB_0__::func_481(1))
		{
			__LIB_0__::func_82(1, 0, 0);
		}
	}
	switch (iLocal_120)
	{
		case 0:
			if (__LIB_0__::func_48(Global_35, iLocal_15, 5f, 1))
			{
				if (!__LIB_0__::func_75(&uLocal_123))
				{
					__LIB_1__::func_148(&uLocal_123);
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(iLocal_15, ENTITY::GET_ENTITY_COORDS(iLocal_15, true, false), 2f, false, false, false, false);
					__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("SAD5_JRETURN"), 0, -1, 0, 0);
				}
			}
			if (__LIB_0__::func_265(&uLocal_123) > IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(13, 17)))
			{
				if (iLocal_121 != 0 && iLocal_122 != 0)
				{
					__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("SAD5_GOAWAY"), 0, -1, 0, 0);
				}
				else
				{
					__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("SAD5_JRETURN"), 0, -1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_123);
			}
			if (__LIB_9__::func_331(PLAYER::PLAYER_ID(), iLocal_15))
			{
				if (!__LIB_0__::func_139(iLocal_117[0]))
				{
					iLocal_117[0] = __LIB_1__::func_877("INTERACT_GREET", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_14__::func_343(iLocal_117[0], iLocal_15, 0, 0, 1);
				}
				if (!__LIB_0__::func_139(iLocal_117[1]))
				{
					iLocal_117[1] = __LIB_1__::func_877("INTERACT_INSULT", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_14__::func_343(iLocal_117[1], iLocal_15, 0, 0, 1);
				}
				if (iLocal_121 > 2)
				{
					if (!func_103(iLocal_117[0]))
					{
						__LIB_5__::func_793(iLocal_117[0], 1);
					}
				}
				if (iLocal_122 > 2)
				{
					if (!func_103(iLocal_117[1]))
					{
						__LIB_5__::func_793(iLocal_117[1], 1);
					}
				}
			}
			else
			{
				if (__LIB_0__::func_139(iLocal_117[0]))
				{
					__LIB_1__::func_748(&(iLocal_117[0]), 1, 1);
				}
				if (__LIB_0__::func_139(iLocal_117[1]))
				{
					__LIB_1__::func_748(&(iLocal_117[1]), 1, 1);
				}
			}
			if (__LIB_0__::func_139(iLocal_117[0]) && __LIB_5__::func_645(iLocal_117[0], 1))
			{
				if (__LIB_0__::func_481(1))
				{
					__LIB_0__::func_82(1, 0, 0);
				}
				if (iLocal_121 == 0)
				{
					__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("SAD5_ILOPOS1"), 0, -1, 0, 0);
				}
				else if (iLocal_121 == 1)
				{
					__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("SAD5_ILOPOS2"), 0, -1, 0, 0);
				}
				else if (iLocal_121 == 2)
				{
					__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("SAD5_ILOPOS3"), 0, -1, 0, 0);
				}
				iLocal_121++;
				iLocal_120++;
			}
			if (__LIB_0__::func_139(iLocal_117[1]) && __LIB_5__::func_645(iLocal_117[1], 1))
			{
				if (__LIB_0__::func_481(1))
				{
					__LIB_0__::func_82(1, 0, 0);
				}
				if (iLocal_122 == 0)
				{
					__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("SAD5_ILONEG1"), 0, -1, 0, 0);
				}
				else if (iLocal_122 == 1)
				{
					__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("SAD5_ILONEG2"), 0, -1, 0, 0);
				}
				else if (iLocal_122 == 2)
				{
					__LIB_2__::func_813(&uLocal_19, __LIB_1__::func_344("SAD5_ILONEG3"), 0, -1, 0, 0);
				}
				iLocal_122++;
				iLocal_120++;
			}
			break;
		case 1:
			if (!__LIB_0__::func_481(1))
			{
				iLocal_120 = 0;
				__LIB_1__::func_148(&uLocal_123);
				if (func_103(iLocal_117[0]))
				{
					__LIB_5__::func_793(iLocal_117[0], 0);
				}
				if (func_103(iLocal_117[1]))
				{
					__LIB_5__::func_793(iLocal_117[1], 0);
				}
			}
			else
			{
				if (!func_103(iLocal_117[0]))
				{
					__LIB_5__::func_793(iLocal_117[0], 1);
				}
				if (!func_103(iLocal_117[1]))
				{
					__LIB_5__::func_793(iLocal_117[1], 1);
				}
			}
			break;
	}
}

void func_75(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_75(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_75(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_103(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_139(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	return !HUD::_UIPROMPT_IS_ENABLED(Global_1945938[iVar0 /*18*/].f_3);
}

