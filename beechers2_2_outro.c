#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4[2] = { 0, 0 };
	int iLocal_7 = 0;
	bool bLocal_8 = false;
	var uLocal_9 = 24;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	bool bLocal_109 = false;
	bool bLocal_110 = false;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	struct<4> Local_114 = { 0, 0, 0, 0 } ;
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
	iLocal_7 = -1679307491;
	iLocal_112 = joaat("A_C_BLUEJAY_01");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_114);
	}
	func_2(&Local_114, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_114))
	{
		__LIB_5__::func_233(&Local_114);
		switch (__LIB_0__::func_57(Local_114))
		{
			case 0:
				if (func_6(&Local_114))
				{
					__LIB_0__::func_19(&Local_114, 1);
				}
				break;
			case 1:
				if (func_8(&Local_114))
				{
					__LIB_0__::func_19(&Local_114, 2);
				}
				break;
			case 2:
				if (func_9(&Local_114))
				{
					__LIB_0__::func_19(&Local_114, 3);
				}
				break;
			case 3:
				func_1(&Local_114);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_114);
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

int func_2(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1->f_1;
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		uParam0->f_2 = *uParam1;
		ANIMSCENE::TAKE_OWNERSHIP_OF_ANIM_SCENE(uParam0->f_2);
		__LIB_4__::func_804(uParam0, 1);
	}
	if (uParam1->f_3)
	{
		__LIB_4__::func_804(uParam0, 2);
	}
	func_19(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_6(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_4[0], true, false))
	{
		iVar0 = 0;
	}
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(func_21()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_22(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_24(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_11(var uParam0)
{
	HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_107))
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_107);
	}
}

void func_19(var uParam0)
{
	iLocal_4[0] = ANIMSCENE::_CREATE_ANIM_SCENE(func_44(0), 0, func_44(1), false, true);
	ANIMSCENE::LOAD_ANIM_SCENE(iLocal_4[0]);
	HUD::_TEXT_DATABASE_REQUEST(func_21());
}

char* func_21()
{
	return "BCH2AUD";
}

int func_22(var uParam0)
{
	ENTITY::SET_ENTITY_COORDS(Global_35, -1629.5f, -1363.2f, 84f, true, false, true, true);
	ENTITY::_0x9587913B9E772D29(Global_35, 0);
	__LIB_1__::func_725();
	return 1;
}

bool func_24(var uParam0)
{
	vector3 vVar0[24];
	__LIB_1__::func_725();
	if (bLocal_109)
	{
		func_46();
	}
	HUD::_0xC9CAEAEEC1256E54(iLocal_7);
	__LIB_0__::func_7(&(Global_1879514.f_6), 16);
	__LIB_0__::func_47(&Global_0, 16);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
	func_49();
	switch (iLocal_3)
	{
		case 0:
			ENTITY::SET_ENTITY_COORDS(Global_35, -1648.6f, -1387.3f, 83.1f, true, false, true, true);
			ENTITY::_0x9587913B9E772D29(Global_35, 0);
			iLocal_4[1] = ANIMSCENE::_CREATE_ANIM_SCENE(func_44(2), 0, func_44(3), false, true);
			ANIMSCENE::LOAD_ANIM_SCENE(iLocal_4[1]);
			STREAMING::REQUEST_MODEL(iLocal_112, false);
			PED::_0xED9582B3DA8F02B4(2);
			iLocal_3 = 1;
			break;
		case 1:
			if (PED::_0x5C16855277819BBF() >= PED::_0x62DE46F061CAA468())
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_112))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_111))
					{
						iLocal_111 = __LIB_1__::func_545(joaat("A_C_BLUEJAY_01"), -1648.3f, -1387f, 83.1f, -150f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
					}
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iLocal_4[1], true, false) && ENTITY::DOES_ENTITY_EXIST(iLocal_111))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_111))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_111, true);
				}
				iLocal_3 = 2;
			}
			break;
		case 2:
			ANIMSCENE::START_ANIM_SCENE(iLocal_4[0]);
			CLOCK::SET_CLOCK_TIME(6, 30, 0);
			__LIB_17__::func_568(3);
			break;
		case 3:
			if (!CAM::IS_SCREEN_FADING_IN() && !CAM::IS_SCREEN_FADED_IN())
			{
				CAM::DO_SCREEN_FADE_IN(1000);
			}
			if (!bLocal_109)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_4[0]) >= 4f)
				{
					bLocal_109 = true;
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_4[0]))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_4[1], "player", Global_35, 0);
				ANIMSCENE::START_ANIM_SCENE(iLocal_4[1]);
				__LIB_17__::func_568(4);
			}
			break;
		case 4:
			if (iLocal_108 < 2)
			{
				CAM::DO_SCREEN_FADE_OUT(0);
				iLocal_108++;
				if (iLocal_108 == 2)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
			}
			if (!bLocal_8)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_TIME(iLocal_4[1]) >= 26f)
				{
					__LIB_0__::func_928(&uLocal_9, Global_35, "JOHN", 0);
					StringCopy(&cVar0, func_53(), 24);
					__LIB_1__::func_104(&uLocal_9, cVar0, 0, -1, 0, 0);
					bLocal_8 = true;
				}
			}
			if ((ANIMSCENE::_0x005E6F28DD7ED58D(iLocal_4[1], "player") || ANIMSCENE::_0xF94692EB9DC15D74(iLocal_4[1], 0)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_4[1], false))
			{
				if (iLocal_113 == 2)
				{
					iLocal_113 = 3;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_111))
					{
						TASK::TASK_FLY_TO_COORD(iLocal_111, 2f, -1552f, -1457.9f, 93f, 1, 0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_111);
					}
					func_46();
				}
				return true;
			}
			break;
	}
	return false;
}

char* func_44(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@titles@title_gen_fewdayslater_onblack";
		case 1:
			return "";
		case 2:
			return "script@story@BE22@ig@IG7_Morning_After_PTL@Outro_PTL";
		case 3:
			return "";
	}
	return "";
}

void func_46()
{
	switch (iLocal_113)
	{
		case 0:
			iLocal_113 = 1;
			break;
		case 1:
			iLocal_107 = INTERIOR::GET_INTERIOR_AT_COORDS(-1642.2f, -1361.4f, 85.1f);
			if (INTERIOR::IS_VALID_INTERIOR(iLocal_107) && INTERIOR::IS_INTERIOR_READY(iLocal_107))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_107);
				iLocal_113 = 2;
			}
			break;
		case 2:
			break;
		case 3:
			INTERIOR::UNPIN_INTERIOR(iLocal_107);
			iLocal_113 = 4;
			break;
	}
}

void func_49()
{
	int iVar0;
	int iVar1;
	struct<11> Var2;
	if (!bLocal_110)
	{
		Var2.f_10 = 7;
		Var2.f_3 = 1;
		Var2.f_4 = 1;
		Var2.f_2 = 1;
		Var2 = 1;
		Var2.f_1 = 1;
		Var2.f_9 = -26.81f;
		Var2.f_6 = { -1643.34f, -1377.769f, 84.0527f };
		iVar0 = func_71(&iVar1, &Var2);
		if (iVar1 == 2)
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar0, -1643.34f, -1377.769f, 84.0527f, -26.81f, true, false, true);
			ENTITY::_0x9587913B9E772D29(iVar0, 0);
			PHYSICS::_0x06AADE17334F7A40(iVar0, -1643.34f, -1377.769f, 84.0527f);
			bLocal_110 = true;
		}
	}
}

char* func_53()
{
	return "BCH2_WHEREUNC";
}

int func_71(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<6> Var10;
	int iVar16;
	int iVar17;
	uParam1->f_10 = __LIB_0__::func_97(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (__LIB_0__::func_86(uParam1->f_6))
		{
		}
	}
	bVar0 = __LIB_0__::func_28();
	if (*uParam1)
	{
		if (bVar0 && !__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
		{
			if (__LIB_1__::func_105(5))
			{
				__LIB_1__::func_162(5);
				__LIB_19__::func_638(5);
				__LIB_0__::func_149(0);
				__LIB_0__::func_148(0);
			}
		}
	}
	if (__LIB_0__::func_979(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[37 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && __LIB_1__::func_25(Global_1835011[43 /*74*/].f_1, 1)) && !__LIB_1__::func_25(Global_1835011[44 /*74*/].f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				__LIB_1__::func_54(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!__LIB_1__::func_105(0) && __LIB_1__::func_105(1))
			{
				__LIB_19__::func_613(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (__LIB_0__::func_988())
			{
				__LIB_0__::func_989();
			}
			__LIB_0__::func_149(0);
			__LIB_0__::func_148(0);
			__LIB_0__::func_150(uParam1->f_6);
		}
	}
	if (!__LIB_0__::func_797(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((__LIB_0__::func_821(uParam1->f_10) == 0 || __LIB_0__::func_809(uParam1->f_10) == 0) || __LIB_0__::func_815(uParam1->f_10) == 0)
			{
				__LIB_2__::func_308(uParam1->f_10);
			}
			__LIB_1__::func_106(uParam1->f_10);
			__LIB_0__::func_822(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = __LIB_0__::func_398(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (__LIB_0__::func_797(iVar1))
	{
		bVar3 = true;
		if (__LIB_1__::func_52(iVar1))
		{
			bVar4 = true;
		}
		if (__LIB_1__::func_53(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (ENTITY::_IS_ENTITY_FROZEN(iVar2))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			}
			if (!__LIB_0__::func_86(uParam1->f_6))
			{
				ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
				ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
				ENTITY::_0x9587913B9E772D29(iVar2, 0);
			}
		}
	}
	if (__LIB_1__::func_107(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!PED::_0xA0BC8FAED8CFEB3C(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = PLAYER::PLAYER_ID();
			iVar7 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar6);
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (iVar7 != iVar2)
				{
					PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, 0);
				}
			}
			Var8 = { __LIB_19__::func_614(uParam1->f_10) };
			Var10 = { __LIB_19__::func_549() };
			__LIB_2__::func_299(iVar2, &Var8, &Var10, 0);
			PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar6, iVar2);
			PED::SET_PED_CONFIG_FLAG(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!__LIB_0__::func_823(uParam1->f_10))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, true, true);
		__LIB_0__::func_824(uParam1->f_10);
		if (uParam1->f_2 && !__LIB_0__::func_86(uParam1->f_6))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar2, false);
			PHYSICS::_0x0348469DAA17576C(iVar2);
			ENTITY::SET_ENTITY_COORDS(iVar2, uParam1->f_6, false, true, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar2, uParam1->f_9);
			ENTITY::_0x9587913B9E772D29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	__LIB_1__::func_108(uParam1->f_10);
	if (__LIB_0__::func_823(uParam1->f_10))
	{
		iVar16 = __LIB_0__::func_825(uParam1->f_10);
		iVar17 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

