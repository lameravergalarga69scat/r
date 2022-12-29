#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> Local_3 = { 0, 0 } ;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 867074004;
	var uLocal_15 = -1167561544;
	var uLocal_16 = 0;
	vector3 vLocal_17 = { 0f, 0f, 0f };
	vector3 vLocal_20 = { 0f, 0f, 0f };
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25[1] = { 0 };
	int iLocal_27 = 0;
	int iLocal_28[1] = { 0 };
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	bool bLocal_33 = false;
	float fLocal_34 = 0f;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	uLocal_23 = ScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_3);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1(&Local_3);
	}
	iLocal_24 = ScriptParam_0.f_1;
	vLocal_17 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	iLocal_27 = func_2();
	if (__LIB_0__::func_314(iLocal_27))
	{
		func_1(&Local_3);
	}
	if ((__LIB_0__::func_28() && !__LIB_1__::func_187(49)) && __LIB_0__::func_438() >= 9)
	{
		func_1(&Local_3);
	}
	while (func_7())
	{
		if (__LIB_0__::func_296(4096, 0, 1))
		{
			func_1(&Local_3);
		}
		else if (func_9(&Local_3))
		{
			func_1(&Local_3);
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_3);
}

void func_1(var uParam0)
{
	__LIB_1__::func_951(&(uParam0->f_8));
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, true, false);
		}
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_8));
	}
	SCRIPTS::_0xE7282390542F570D(uLocal_23);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	int iVar0;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_24))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iLocal_24));
	}
	return COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("ROCK_CARVINGS"), 0);
}

bool func_7()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_1(&Local_3);
		return false;
	}
	return true;
}

bool func_9(var uParam0)
{
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (__LIB_0__::func_448(iLocal_27))
			{
				func_1(uParam0);
			}
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			func_21();
			if (__LIB_3__::func_510(&uLocal_25, &iLocal_28, 1, vLocal_17, 5f) > 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_25[0]))
				{
					PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), uLocal_25[0], 0);
					PLAYER::_0x6ECFC621A168424C(uLocal_25[0], uLocal_25[0], 0, 0);
				}
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			func_23(iLocal_27, &vLocal_20);
			if (iLocal_27 == joaat("ROCK_01_GRZ"))
			{
				fLocal_34 = 4.5f;
			}
			else if (iLocal_27 == joaat("ROCK_02_CML"))
			{
				fLocal_34 = 3f;
			}
			else if (iLocal_27 == joaat("ROCK_04_BGV"))
			{
				fLocal_34 = 3f;
			}
			else
			{
				fLocal_34 = 4.5f;
			}
			if ((PED::_IS_PED_CLIMBING_LADDER(Global_35) || PED::IS_PED_ON_MOUNT(Global_35)) || __LIB_0__::func_103())
			{
				__LIB_1__::func_748(&(Local_3.f_1), 1, 1);
			}
			else
			{
				if (__LIB_0__::func_94(Global_35, vLocal_20, 1) < fLocal_34)
				{
					func_27(&Local_3);
					func_28(&Local_3, "COLLECTIBLE_ROCK_CARVING_CONTEXT");
				}
				if (__LIB_2__::func_694(&(Local_3.f_1), "DISCO_EXAMINE", vLocal_20, 0, joaat("INPUT_CONTEXT_Y"), fLocal_34, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
					{
						PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
					}
					__LIB_0__::func_442(iLocal_27);
					__LIB_4__::func_124(48);
					WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 1, 0);
					TASK::TASK_SWAP_WEAPON(Global_35, 1, 0, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
					HUD::_HIDE_HUD_COMPONENT(474191950);
					GRAPHICS::_0x1C6306E5BC25C29C();
					Global_16 = 1;
					__LIB_0__::func_19(uParam0, 4);
				}
			}
			break;
		case 3:
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_30, true, 0, false);
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iLocal_31, true, 1, false);
			GRAPHICS::_0x1C6306E5BC25C29C();
			if (iLocal_30 == joaat("WEAPON_UNARMED") && iLocal_31 == joaat("WEAPON_UNARMED"))
			{
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			func_32(uParam0);
			GRAPHICS::_0x1C6306E5BC25C29C();
			__LIB_0__::func_19(uParam0, 5);
			break;
		case 5:
			GRAPHICS::_0x1C6306E5BC25C29C();
			if (func_33(uParam0))
			{
				__LIB_0__::func_19(uParam0, 6);
			}
			break;
		case 6:
			GRAPHICS::_0x1C6306E5BC25C29C();
			__LIB_0__::func_19(uParam0, 7);
			break;
		case 7:
			GRAPHICS::_0x1C6306E5BC25C29C();
			__LIB_0__::func_19(uParam0, 8);
			break;
		case 8:
			GRAPHICS::_0x1C6306E5BC25C29C();
			if (func_34(uParam0))
			{
				HUD::_DISPLAY_HUD_COMPONENT(474191950);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				if (!__LIB_1__::func_707(__LIB_1__::func_35(iLocal_27, 5), 1, 0))
				{
					func_37(__LIB_1__::func_35(iLocal_27, 5), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				MAP::_0xD8C7162AB2E2AF45(__LIB_14__::func_295(iLocal_27));
				if (__LIB_0__::func_438() >= 10)
				{
					__LIB_1__::func_832(49, 0, 0, 0, 0, 0, -1, 0);
					__LIB_1__::func_450(49, 0, 0, 0, 0, -1, 0);
				}
				func_41(uParam0);
				Global_16 = 0;
				__LIB_0__::func_703(0, 10);
				__LIB_0__::func_19(uParam0, 9);
			}
			break;
		case 9:
			if (__LIB_1__::func_707(__LIB_1__::func_35(iLocal_27, 5), 1, 0))
			{
				__LIB_0__::func_19(uParam0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_21()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iLocal_28[iVar0] = __LIB_1__::func_35(iLocal_27, 0);
		iVar0++;
	}
}

void func_23(int iParam0, var uParam1)
{
	*uParam1 = { COLLECTION::_0x1F1DD794908C2BFA(iParam0) };
}

void func_27(var uParam0)
{
	int iVar0;
	if (__LIB_0__::func_139(uParam0->f_1))
	{
		iVar0 = __LIB_0__::func_17(uParam0->f_1);
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_SET_GROUP(Global_1945938[iVar0 /*18*/].f_3, joaat("DISCO_ROCK"), 0);
		}
	}
}

void func_28(var uParam0, char* sParam1)
{
	int iVar0;
	if (__LIB_0__::func_139(uParam0->f_1))
	{
		iVar0 = __LIB_0__::func_17(uParam0->f_1);
		if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
		{
			HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, joaat("DISCO_ROCK"), sParam1, 0);
		}
	}
}

void func_32(var uParam0)
{
	STREAMING::REQUEST_MODEL(uParam0->f_11, false);
	STREAMING::REQUEST_MODEL(uParam0->f_12, false);
	STREAMING::REQUEST_ANIM_DICT(__LIB_14__::func_296(0));
	STREAMING::REQUEST_ANIM_DICT(__LIB_14__::func_296(1));
	if (TXD::_DOES_STREAMED_TXD_EXIST(func_76()))
	{
		TXD::_REQUEST_STREAMED_TXD(func_76(), false);
	}
}

bool func_33(var uParam0)
{
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_11) && !STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
	{
		return false;
	}
	if (TXD::_DOES_STREAMED_TXD_EXIST(func_76()) && !TXD::_HAS_STREAMED_TXD_LOADED(func_76()))
	{
		return false;
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(__LIB_14__::func_296(0)) && STREAMING::HAS_ANIM_DICT_LOADED(__LIB_14__::func_296(1)))
	{
		return true;
	}
	return false;
}

bool func_34(var uParam0)
{
	char* sVar0;
	char* sVar1;
	sVar0 = __LIB_14__::func_296(0);
	sVar1 = __LIB_14__::func_297(0);
	__LIB_18__::func_785(uParam0, 0);
	__LIB_18__::func_786(uParam0, 0);
	if (!bLocal_32)
	{
		if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar0, sVar1, 1))
		{
			__LIB_14__::func_298(uParam0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9) && TXD::_DOES_STREAMED_TXD_EXIST(func_76()))
			{
				OBJECT::_SET_APPLY_OBJECT_TXD(uParam0->f_9, func_76(), 0, 0);
			}
			__LIB_14__::func_299(uParam0);
			__LIB_14__::func_300(uParam0);
			__LIB_14__::func_301(uParam0);
			ENTITY::PLAY_ENTITY_ANIM(uParam0->f_9, __LIB_14__::func_302(1), __LIB_14__::func_296(1), 8f, false, true, false, 0f, 0);
			TASK::TASK_PLAY_ANIM(Global_35, sVar0, sVar1, 16f, -4f, -1, 67108880, 0f, false, 4096, false, "Satchel_and_ik_hand_helpers_filter", false);
			bLocal_32 = true;
		}
	}
	else if (func_85(0))
	{
		return true;
	}
	return false;
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!__LIB_9__::func_785(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_4__::func_465(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_37(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		__LIB_7__::func_501(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!__LIB_9__::func_784(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_1__::func_833(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				func_125(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (func_126())
			{
				__LIB_4__::func_127(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_4__::func_469(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			func_125(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
			}
			__LIB_4__::func_468(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_37(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_37(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_37(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_37(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_37(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_37(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_37(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				__LIB_7__::func_501(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_37(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_37(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_7__::func_685(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_9__::func_8(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_37(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_4__::func_120(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_4__::func_463(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

void func_41(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_13))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_13));
	}
	if (__LIB_3__::func_510(&uLocal_25, &iLocal_28, 1, vLocal_17, 5f) > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_25[0]))
		{
			PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uLocal_25[0]);
			PLAYER::_0xDC5E09D012D759C4(uLocal_25[0], uLocal_25[0], 0);
		}
	}
}

int func_76()
{
	char* sVar0;
	if (__LIB_0__::func_181())
	{
		sVar0 = "UI_NOTE_ROCK_CARVING_JN";
	}
	else
	{
		sVar0 = "UI_NOTE_ROCK_CARVING_AR";
	}
	return MISC::GET_HASH_KEY(sVar0);
}

bool func_85(int iParam0)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	sVar1 = __LIB_14__::func_296(iParam0);
	sVar2 = __LIB_14__::func_297(iParam0);
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, sVar1, sVar2, 1))
	{
		if (!bLocal_33)
		{
			bLocal_33 = true;
		}
	}
	else if (bLocal_33)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_125(int iParam0)
{
	bool bVar0;
	bVar0 = __LIB_0__::func_192(iParam0, -2017733358);
	if (__LIB_1__::func_762() < 3)
	{
		if (bVar0)
		{
			if (__LIB_1__::func_763(__LIB_0__::func_432(iParam0), iParam0))
			{
				__LIB_1__::func_424(79, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
			else
			{
				__LIB_1__::func_424(78, __LIB_0__::func_776(__LIB_0__::func_432(iParam0)), 1);
			}
		}
		else
		{
			__LIB_1__::func_424(80, __LIB_0__::func_776(func_253(iParam0)), 1);
		}
	}
}

bool func_126()
{
	if (((((func_254(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_1"), 400) || func_254(joaat("DOCUMENT_ARTHUR_MINOR_BOUNTY_2"), 400)) || func_254(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_1"), 400)) || func_254(joaat("DOCUMENT_ARTHUR_HIGH_BOUNTY_2"), 400)) || func_254(joaat("DOCUMENT_ARTHUR_HAS_POSTER_1"), 400)) || func_254(joaat("DOCUMENT_ARTHUR_HAS_POSTER_2"), 400))
	{
		return true;
	}
	return false;
}

int func_253(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_BEAVER_TOOTH_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BEAVER_TOOTH");
		case joaat("PROVISION_BISON_HORN_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BISON_HORN");
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_BUCK_ANTLER");
		case joaat("PROVISION_COUGAR_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COUGAR_FANG");
		case joaat("PROVISION_COYOTE_FANG_LEGENDARY"):
			return joaat("PROVISION_TRINKET_COYOTE_FANG");
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return joaat("PROVISION_TRINKET_ELK_ANTLER");
			return joaat("PROVISION_TRINKET_FOX_CLAW");
			return joaat("PROVISION_TRINKET_LION_PAW");
			return joaat("PROVISION_TRINKET_MOOSE_ANTLER");
			return joaat("PROVISION_TRINKET_PANTHER_EYE");
			return joaat("PROVISION_TRINKET_PRONGHORN_ANTLER");
			return joaat("PROVISION_TRINKET_RAM_HORN");
			return joaat("PROVISION_TRINKET_WOLF_HEART");
			return 0;
		}
bool func_254(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_437(iParam0);
	if (iVar0 != -15)
	{
		__LIB_1__::func_446(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !__LIB_1__::func_426(iVar0, 1);
	}
	return false;
}

