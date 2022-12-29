char[] func_0()
{
	return "pbl_p5_action_a";
}

char[] func_1()
{
	return "pbl_p6_p1_action_a";
}

char[] func_2()
{
	return "pbl_p6_p2_action_a";
}

char[] func_3()
{
	return "pbl_p7_action_a";
}

char[] func_4()
{
	return "pbl_p7_action_b";
}

char[] func_5()
{
	return "pbl_p7_action_c";
}

char[] func_6()
{
	return "pbl_p8_p1_action_a";
}

char[] func_7()
{
	return "pbl_p8_p2_action_a";
}

char[] func_8()
{
	return "pbl_p9_p1_action_a";
}

char[] func_9()
{
	return "pbl_p9_p2_action_a";
}

char[] func_10()
{
	return "pbl_p9_p2_action_b";
}

char[] func_11()
{
	return "pbl_p9_p3_action_a";
}

char[] func_12()
{
	return "pbl_p9_p3_action_b";
}

char[] func_13()
{
	return "pbl_idle_b";
}

char[] func_14()
{
	return "pbl_idle_c";
}

char[] func_15()
{
	return "pbl_idle_d";
}

char[] func_16()
{
	return "pbl_idle_e";
}

char[] func_17()
{
	return "pbl_idle_f";
}

char* func_18()
{
	return "pbl_action_a";
}

void func_19()
{
	if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}
}

void func_20(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
		else
		{
			PED::DELETE_PED(iParam0);
		}
	}
}

void func_21()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar4 = ENTITY::_0x886171A12F400B89(iLocal_172, iVar0, 1);
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar0);
		iVar2 = iVar1;
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			if (((PED::IS_PED_HUMAN(iVar2) && !PED::IS_PED_A_PLAYER(iVar2)) && iVar2 != iLocal_163) && PED::_IS_PED_USING_SCENARIO_HASH(iVar2, joaat("WORLD_HUMAN_STAND_WAITING")))
			{
				if (!TASK::_0xBEDBE39B5FD98FD6(iVar2) && !PED::_0x77525BBF433F2CD6(iVar2))
				{
					TASK::_TASK_MOVE_IN_TRAFFIC(iVar2, -1082130432 /* Float: -1f */, 0, 0);
					iVar6++;
				}
			}
			iVar5++;
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

int func_22(int iParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 1;
	}
	bVar0 = ANIMSCENE::_0x1F0E401031E20146(*iParam0, sParam1);
	if (bVar0)
	{
		return 1;
	}
	bVar1 = ANIMSCENE::_0xA9016536015DE29D(*iParam0, sParam1);
	if (!bVar1)
	{
		return 1;
	}
	bVar2 = ANIMSCENE::_0x23E33CB9F4A3F547(*iParam0, sParam1);
	if (!bVar2)
	{
		return 1;
	}
	bVar3 = ANIMSCENE::_0x0DF57F86FE71DBE5(*iParam0, sParam1);
	if (bVar2 || bVar3)
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(*iParam0, sParam1);
	}
	return 0;
}

bool func_23()
{
	if (__LIB_0__::func_393(Global_35, iLocal_172, 0, 1))
	{
		return true;
	}
	return false;
}

char* func_24()
{
	return "script@specialped@pddww_dorothea_wicklow@ig@ig_1";
}

void func_25(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	if (!__LIB_0__::func_27(*iParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), iParam7);
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), iParam8);
		return;
	}
	if (__LIB_0__::func_27(*iParam1, iParam3))
	{
		if (!__LIB_0__::func_27(*iParam1, iParam4))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), iParam7);
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam6, 0f, 0f, 0f, 0, iParam8);
			__LIB_1__::func_336(iParam1, iParam4);
		}
	}
	else if (__LIB_0__::func_27(*iParam1, iParam4))
	{
		PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), iParam8);
		PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam5, 0f, 0f, 0f, 0, iParam7);
		__LIB_0__::func_516(iParam1, iParam4);
	}
}

void func_26(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	char* sVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || Global_1935630.f_12)
	{
		return;
	}
	sVar0 = __LIB_16__::func_795(iParam3);
	if (fParam4 == 0f)
	{
		if (__LIB_0__::func_48(iParam0, Global_35, 15f, 1))
		{
			if (!__LIB_0__::func_27(*iParam1, iParam2))
			{
				if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
				{
					__LIB_1__::func_336(iParam1, iParam2);
				}
			}
		}
		else if (__LIB_0__::func_27(*iParam1, iParam2))
		{
			AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
			__LIB_0__::func_516(iParam1, iParam2);
		}
	}
	else if (fParam4 <= 15f)
	{
		if (!__LIB_0__::func_27(*iParam1, iParam2))
		{
			if (AUDIO::_0x6339C1EA3979B5F7(sVar0, "special_ped_scenes"))
			{
				__LIB_1__::func_336(iParam1, iParam2);
			}
		}
	}
	else if (__LIB_0__::func_27(*iParam1, iParam2))
	{
		AUDIO::_0x9428447DED71FC7E("special_ped_scenes");
		__LIB_0__::func_516(iParam1, iParam2);
	}
}

bool func_27(int iParam0, int iParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (__LIB_16__::func_815(iParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

int func_28(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	if (*iParam3 >= iParam4)
	{
		return 0;
	}
	if (*uParam1)
	{
		if (!__LIB_0__::func_75(uParam2))
		{
			__LIB_0__::func_268(uParam2, 0f);
			return 0;
		}
		else if (__LIB_1__::func_871(uParam2) > iParam6)
		{
			__LIB_0__::func_37(uParam2);
			*iParam3++;
			*uParam1 = 0;
			return 0;
		}
		else
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
	{
		if (fParam7 == 0f)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
			{
				return 0;
			}
			fParam7 = __LIB_0__::func_665(*iParam0, Global_35, 1, 1);
		}
		if (iParam5 == 0)
		{
			if (fParam7 >= 0f && fParam7 < 10f)
			{
				iParam5 = 249295937;
			}
			else if (fParam7 >= 10f && fParam7 < 20f)
			{
				iParam5 = 1715123483;
			}
			else if (fParam7 >= 20f && fParam7 < 30f)
			{
				iParam5 = 1891783641;
			}
			else if (fParam7 >= 30f && fParam7 < 50f)
			{
				iParam5 = joaat("SONAR_OVERHEARD_BEAT_BIG");
			}
			else
			{
				iParam5 = 1515458263;
			}
		}
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam5, *iParam0);
		*uParam1 = 1;
		return 1;
	}
	return 0;
}

void func_29(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return;
	}
	if (__LIB_0__::func_27(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && __LIB_8__::func_964(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = __LIB_0__::func_23();
	__LIB_1__::func_336(iParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

bool func_30(int iParam0, int iParam1, float fParam2, int iParam3)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (__LIB_16__::func_833(iParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

void func_31()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_163) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_163) && ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_75(&uLocal_152))
	{
		__LIB_0__::func_268(&uLocal_152, 0f);
	}
	else if (__LIB_1__::func_871(&uLocal_152) >= 1000)
	{
		fLocal_155 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_163, true, false), __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), true);
		fLocal_156 = fLocal_155;
		__LIB_0__::func_37(&uLocal_152);
	}
}

void func_32(int iParam0, int iParam1)
{
	if (__LIB_0__::func_27(iParam0, iParam1))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_NEG"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON_POS"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		__LIB_1__::func_725();
		HUD::_0xC9CAEAEEC1256E54(-1679307491);
		if (!PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 174, true);
		}
		__LIB_16__::func_836();
	}
	else if (PED::GET_PED_CONFIG_FLAG(Global_35, 174, true))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 174, false);
	}
}

bool func_33(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return false;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!__LIB_16__::func_833(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return false;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
		if (!__LIB_0__::func_255(iVar1, 0))
		{
			__LIB_16__::func_796(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return true;
	}
	return false;
}

bool func_34(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*iParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*iParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(*iParam0))
	{
		return true;
	}
	return false;
}

int func_35(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*iParam2)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	if (!bParam8)
	{
		*uParam0 = __LIB_8__::func_931(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*uParam0 = __LIB_8__::func_931(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*iParam2 = 1;
		return 1;
	}
	return 0;
}

bool func_36(float fParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	bool bVar0;
	if (__LIB_13__::func_262(iLocal_163, 0, &uLocal_117, &iLocal_145, 0, 0))
	{
		switch (iLocal_145)
		{
			case 4:
			case 8:
			case 32:
			case 64:
			case 256:
			case 1024:
			case 4096:
			case 8192:
			case 16384:
			case 524288:
				if (fParam0 < fParam3)
				{
					*iParam1 = 1;
				}
				break;
			case 2:
			case 512:
			case 2048:
				if (fParam0 < fParam4)
				{
					*iParam1 = 0;
				}
				break;
			case 16:
			case 128:
				if (fParam0 < fParam4)
				{
					*iParam1 = 1;
				}
				break;
			default:
				if (fParam0 < fParam4)
				{
					*iParam1 = 1;
				}
				break;
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((((((((((PED::IS_PED_INJURED(iLocal_163) || PED::IS_PED_RAGDOLL(iLocal_163)) || TASK::IS_PED_GETTING_UP(iLocal_163)) || PED::_IS_PED_LASSOED(iLocal_163)) || PED::IS_PED_BEING_STEALTH_KILLED(iLocal_163)) || PED::_0xEF3A8772F085B4AA(iLocal_163)) || PED::IS_PED_BEING_STUNNED(iLocal_163, 0)) || PED::_IS_PED_FALLING_2(iLocal_163)) || PED::_IS_PED_HOGTIED(iLocal_163)) || TASK::_0xF330A5C062B29BED(iLocal_163)) || PED::IS_PED_PRONE(iLocal_163))
		{
			*iParam2 = 0;
		}
		else
		{
			*iParam2 = 1;
		}
		__LIB_16__::func_789(8);
		return true;
	}
	return false;
}

bool func_37(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(*uParam0))
	{
		*uParam1 = __LIB_0__::func_895(*uParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_38(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE((*uParam0)[iVar0 /*36*/]);
		}
		iVar0++;
	}
}

float func_39(var uParam0)
{
	int iVar0;
	switch (uParam0->f_146.f_349)
	{
		case 1:
			iVar0 = uParam0->f_146[uParam0->f_146.f_181 /*36*/];
			break;
		case 2:
			iVar0 = uParam0->f_146[uParam0->f_146.f_237 /*36*/];
			break;
		case 3:
			iVar0 = uParam0->f_146[uParam0->f_146.f_265 /*36*/];
			break;
		case 4:
			iVar0 = uParam0->f_146[uParam0->f_146.f_293 /*36*/];
			break;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return 0f;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return 0f;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iVar0, false))
	{
		return ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iVar0);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		return 1f;
	}
	return 0f;
}

bool func_40(int iParam0)
{
	if (__LIB_0__::func_27(Local_14.f_134, 32))
	{
		return true;
	}
	return false;
}

void func_41(var uParam0, int iParam1)
{
	uParam0->f_355 = iParam1;
}

bool func_42(var uParam0, int iParam1, bool bParam2)
{
	switch (uParam0->f_146.f_349)
	{
		case 1:
			*iParam1 = uParam0->f_146[uParam0->f_146.f_181 /*36*/];
			break;
		case 2:
			*iParam1 = uParam0->f_146[uParam0->f_146.f_237 /*36*/];
			break;
		case 3:
			*iParam1 = uParam0->f_146[uParam0->f_146.f_265 /*36*/];
			break;
		case 4:
			*iParam1 = uParam0->f_146[uParam0->f_146.f_293 /*36*/];
			break;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam1))
	{
		*iParam1 = -1;
		return false;
	}
	if (bParam2 && ((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam1, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam1, false)) || ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*iParam1, false)))
	{
		*iParam1 = -1;
		return false;
	}
	return true;
}

char* func_43(var uParam0)
{
	switch (uParam0->f_146.f_349)
	{
		case 1:
			return uParam0->f_146.f_181.f_12;
		case 2:
			return uParam0->f_146.f_237.f_12;
		case 3:
			return uParam0->f_146.f_265.f_12;
		case 4:
			return uParam0->f_146.f_293.f_12;
	}
	return "";
}

int func_44(int iParam0, int iParam1, var uParam2, vector3 vParam3)
{
	if (*uParam2)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	*iParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam3, true, true, false, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

int func_45(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

int func_46(int iParam0)
{
	return iParam0->f_146.f_349;
}

void func_47(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!__LIB_0__::func_1(*iParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		return;
	}
	if (__LIB_0__::func_1(*iParam1, iParam3))
	{
		if (!__LIB_0__::func_1(*iParam1, iParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam6, 0f, 0f, 0f, 0, sParam8);
			}
			__LIB_1__::func_336(iParam1, iParam4);
		}
	}
	else if (__LIB_0__::func_1(*iParam1, iParam4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam5, 0f, 0f, 0f, 0, sParam7);
		}
		__LIB_0__::func_516(iParam1, iParam4);
	}
}

bool func_48(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

void func_49(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar0 /*36*/], false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE((*uParam0)[iVar0 /*36*/], false);
		}
		iVar0++;
	}
}

void func_50(bool bParam0)
{
	if (bParam0)
	{
		iLocal_579 = 2;
	}
	else
	{
		iLocal_579 = (iLocal_579 - 1);
		if (iLocal_579 < 0)
		{
			iLocal_579 = 0;
		}
	}
}

void func_51(var uParam0)
{
	uParam0->f_352 = 0;
}

bool func_52(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_351, iParam1);
}

void func_53(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_6 = iParam1;
	uParam0->f_6.f_1 = iParam2;
}

void func_54(var uParam0)
{
	uParam0->f_351 = 0;
}

bool func_55()
{
	if (iLocal_579 <= 0 && __LIB_16__::func_808(&Local_14) < 1.9f)
	{
		return true;
	}
	return false;
}

bool func_56(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_352, iParam1);
}

void func_57(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		__LIB_16__::func_847(iParam0, iParam1);
	}
	iParam0->f_41[iParam1 /*59*/].f_56 = iParam2;
}

void func_58(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, char* sParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (__LIB_0__::func_181())
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = iParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = iParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = iParam11;
	uParam0->f_13 = iParam12;
	uParam0->f_14 = sParam13;
	uParam0->f_15 = iParam14;
	uParam0->f_16 = iParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

void func_59(var uParam0, int iParam1)
{
	__LIB_1__::func_683(&(uParam0->f_351), iParam1);
}

bool func_60(var uParam0, var uParam1)
{
	__LIB_16__::func_824(uParam1, &(uParam0->f_209));
	return true;
}

void func_61(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		uParam0->f_352 = 0;
		__LIB_1__::func_683(&(uParam0->f_352), iParam1);
	}
	else
	{
		__LIB_1__::func_683(&(uParam0->f_352), iParam1);
	}
}

int func_62(var uParam0, int iParam1, var uParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 1;
	}
	if (!bParam8)
	{
		*uParam0 = __LIB_8__::func_931(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*uParam0 = __LIB_8__::func_931(iParam1, vParam3, fParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam2 = 1;
		return 1;
	}
	return 0;
}

void func_63(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, char* sParam11)
{
	if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		return;
	}
	*uParam0 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(uParam1, vParam2, vParam5, vParam8, sParam11);
}

bool func_64(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(*uParam0))
	{
		__LIB_1__::func_532(*uParam0, *uParam1);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_65()
{
	if (__LIB_3__::func_417(Global_35) || __LIB_11__::func_394(Global_35))
	{
		return true;
	}
	return false;
}

int func_66()
{
	if (__LIB_3__::func_417(Global_35) || __LIB_11__::func_394(Global_35))
	{
		if (!__LIB_0__::func_163(Global_35, -208384378))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, __LIB_0__::func_147(), __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
		}
		return 0;
	}
	else if ((!__LIB_3__::func_417(Global_35) && !__LIB_11__::func_394(Global_35)) && !__LIB_0__::func_163(Global_35, -208384378))
	{
		return 1;
	}
	return 0;
}

bool func_67(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_581(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_581(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_581(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_581(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_581(uParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_581(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_5__::func_219(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_5__::func_219(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_581(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (__LIB_16__::func_934(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || __LIB_16__::func_949(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_268(&(uParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(uParam2->f_13)) >= uParam2->f_16)
					{
						__LIB_0__::func_37(&(uParam2->f_13));
						__LIB_1__::func_581(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_37(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_581(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_581(uParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_581(uParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_581(uParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*uParam2, 2) || __LIB_0__::func_27(*uParam2, 4)) || __LIB_0__::func_27(*uParam2, 8)) || __LIB_0__::func_27(*uParam2, 16)) || __LIB_0__::func_27(*uParam2, 32)) || __LIB_0__::func_27(*uParam2, 64)) || __LIB_0__::func_27(*uParam2, 128)) || __LIB_0__::func_27(*uParam2, 256)) || __LIB_0__::func_27(*uParam2, 512)) || __LIB_0__::func_27(*uParam2, 1024)) || __LIB_0__::func_27(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

char[] func_68(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_IDLE_A";
			break;
		case 1:
			sVar0 = "pbl_IDLE_B";
			break;
		case 2:
			sVar0 = "pbl_IDLE_C";
			break;
		case 3:
			sVar0 = "pbl_IDLE_D";
			break;
		case 4:
			sVar0 = "pbl_IDLE_E";
			break;
		case 5:
			sVar0 = "pbl_IDLE_F";
			break;
		case 6:
			sVar0 = "pbl_IDLE_G";
			break;
		case 7:
			sVar0 = "pbl_IDLE_H";
			break;
		case 8:
			sVar0 = "pbl_IDLE_I";
			break;
		case 9:
			sVar0 = "pbl_IDLE_J";
			break;
	}
	return sVar0;
}

bool func_69(var uParam0)
{
	if ((((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_205, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_206, true, false)) && HUD::_TEXT_DATABASE_HAS_LOADED("SPGV")) && HUD::_TEXT_DATABASE_HAS_LOADED("SPGVNAU")) && STREAMING::HAS_MODEL_LOADED(uParam0->f_143)) && PED::_0x5C16855277819BBF() == 1) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(uParam0->f_212))
	{
		uParam0->f_194 = 0;
		return true;
	}
	return false;
}

char[] func_70(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_WILDERNESS_A";
			break;
		case 1:
			sVar0 = "pbl_WILDERNESS_B";
			break;
		case 2:
			sVar0 = "pbl_WILDERNESS_C";
			break;
		case 3:
			sVar0 = "pbl_WILDERNESS_D";
			break;
		case 4:
			sVar0 = "pbl_WILDERNESS_E";
			break;
		case 5:
			sVar0 = "pbl_WILDERNESS_F";
			break;
		case 6:
			sVar0 = "pbl_WILDERNESS_G";
			break;
		case 7:
			sVar0 = "pbl_WILDERNESS_H";
			break;
		case 8:
			sVar0 = "pbl_WILDERNESS_I";
			break;
		case 9:
			sVar0 = "pbl_WILDERNESS_J";
			break;
		case 10:
			sVar0 = "pbl_WILDERNESS_K";
			break;
		case 11:
			sVar0 = "pbl_WILDERNESS_L";
			break;
		case 12:
			sVar0 = "pbl_WILDERNESS_M";
			break;
		case 13:
			sVar0 = "pbl_WILDERNESS_N";
			break;
		case 14:
			sVar0 = "pbl_WILDERNESS_O";
			break;
		case 15:
			sVar0 = "pbl_WILDERNESS_P";
			break;
	}
	return sVar0;
}

char[] func_71(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_SEARCH_TOWN_A";
			break;
		case 1:
			sVar0 = "pbl_SEARCH_TOWN_B";
			break;
		case 2:
			sVar0 = "pbl_SEARCH_TOWN_C";
			break;
		case 3:
			sVar0 = "pbl_SEARCH_TOWN_D";
			break;
		case 4:
			sVar0 = "pbl_SEARCH_TOWN_E";
			break;
		case 5:
			sVar0 = "pbl_SEARCH_TOWN_F";
			break;
	}
	return sVar0;
}

char[] func_72(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_RETURN_TO_SEARCH_A";
			break;
		case 1:
			sVar0 = "pbl_RETURN_TO_SEARCH_B";
			break;
		case 2:
			sVar0 = "pbl_RETURN_TO_SEARCH_C";
			break;
		case 3:
			sVar0 = "pbl_RETURN_TO_SEARCH_D";
			break;
		case 4:
			sVar0 = "pbl_RETURN_TO_SEARCH_E";
			break;
		case 5:
			sVar0 = "pbl_RETURN_TO_SEARCH_F";
			break;
	}
	return sVar0;
}

void func_73(var uParam0)
{
	uParam0->f_204++;
	if (uParam0->f_204 > 9)
	{
		uParam0->f_204 = 0;
	}
	uParam0->f_128 = uParam0->f_204;
}

char[] func_74(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "pbl_action";
			break;
	}
	return sVar0;
}

struct<2> func_75(var uParam0)
{
	struct<2> Var0;
	if (!__LIB_0__::func_27(uParam0->f_195, 1))
	{
		Var0 = "INSULT_MALE_CONV_PART1";
		Var0.f_1 = 2;
	}
	else if (__LIB_0__::func_27(uParam0->f_195, 1) && !__LIB_0__::func_27(uParam0->f_195, 2))
	{
		Var0 = "INSULT_GAVINSFRIEND_CONV_PART1";
		Var0.f_1 = 2;
	}
	else if (__LIB_0__::func_27(uParam0->f_195, 2) && !__LIB_0__::func_27(uParam0->f_195, 4))
	{
		Var0 = "INSULT_MET_EARLIER_CONV_PART1";
		Var0.f_1 = 1;
	}
	else if (__LIB_0__::func_27(uParam0->f_195, 4) && !__LIB_0__::func_27(uParam0->f_195, 8))
	{
		Var0 = "INSULT_MET_EARLIER_CONV_PART1";
		Var0.f_1 = 2;
	}
	else if (__LIB_0__::func_27(uParam0->f_195, 8) && !__LIB_0__::func_27(uParam0->f_195, 16))
	{
		Var0 = "INSULT_MALE_CONV_PART1";
		Var0.f_1 = 11;
	}
	else if (__LIB_0__::func_27(uParam0->f_195, 16) && !__LIB_0__::func_27(uParam0->f_195, 32))
	{
		Var0 = "INSULT_MUSICIAN_CONV_PART1";
		Var0.f_1 = 4;
	}
	return Var0;
}

int func_76(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 60;
		case 2:
			return 150;
		default:
			break;
	}
	return 0;
}

char* func_77(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return "spd_gav_rhodes";
		case 38:
			return "spd_gav_blackwater";
		case 126:
			return "spd_gav_macfarlane";
		case 5:
			return "spd_gav_saintdenis";
		default:
			break;
	}
	return "";
}

char* func_78(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return "spd_gav_talltrees";
		case 10:
			return "spd_gav_roanoke";
		case 15:
			return "spd_gav_cholla_springs";
		default:
			break;
	}
	return "";
}

char* func_79()
{
	return "script@specialped@pdgvn_gavins_friend@ig@ig_1@ig_1";
}

void func_80(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_194, 1))
	{
		uParam0->f_201 = 1;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 2))
	{
		uParam0->f_201 = 2;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 4))
	{
		uParam0->f_201 = 3;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 8))
	{
		uParam0->f_201 = 4;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 16))
	{
		uParam0->f_201 = 5;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 32))
	{
		uParam0->f_201 = 6;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 64))
	{
		uParam0->f_201 = 0;
		return;
	}
	uParam0->f_201 = 0;
}

void func_81(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_194, 128))
	{
		uParam0->f_200 = 1;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 256))
	{
		uParam0->f_200 = 2;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 512))
	{
		uParam0->f_200 = 3;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 1024))
	{
		uParam0->f_200 = 4;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 2048))
	{
		uParam0->f_200 = 5;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 4096))
	{
		uParam0->f_200 = 6;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 8192))
	{
		uParam0->f_200 = 7;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 16384))
	{
		uParam0->f_200 = 8;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 32768))
	{
		uParam0->f_200 = 0;
		return;
	}
	uParam0->f_200 = 0;
}

void func_82(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_194, 4194304))
	{
		uParam0->f_203 = 1;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 8388608))
	{
		uParam0->f_203 = 2;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 16777216))
	{
		uParam0->f_203 = 3;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 33554432))
	{
		uParam0->f_203 = 4;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 67108864))
	{
		uParam0->f_203 = 5;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 134217728))
	{
		uParam0->f_203 = 0;
		return;
	}
	uParam0->f_203 = 0;
}

void func_83(var uParam0)
{
	if (__LIB_0__::func_27(uParam0->f_194, 65536))
	{
		uParam0->f_202 = 1;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 131072))
	{
		uParam0->f_202 = 2;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 262144))
	{
		uParam0->f_202 = 3;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 524288))
	{
		uParam0->f_202 = 4;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 1048576))
	{
		uParam0->f_202 = 5;
		return;
	}
	else if (__LIB_0__::func_27(uParam0->f_194, 2097152))
	{
		uParam0->f_202 = 0;
		return;
	}
	uParam0->f_202 = 0;
}

void func_84(var uParam0)
{
	struct<14> Var0;
	if (uParam0->f_214 < 10f)
	{
		Var0.f_4 = -1;
		Var0.f_8 = 2;
		Var0.f_9 = 1;
		Var0.f_10 = 1;
		Var0.f_11 = 1;
		Var0.f_13 = 1;
		Var0.f_14 = 2;
		Var0.f_15 = 2;
		Var0.f_16 = 3;
		Var0.f_19 = 3;
		Var0.f_20 = 1;
		Var0.f_21 = 3;
		Var0.f_22 = 3;
		Var0 = { 0f, 0f, 0f };
		Var0.f_3 = Global_35;
		Var0.f_4 = 21030;
		Var0.f_8 = 4;
		Var0.f_13 = 3;
		Var0.f_7 = 5000;
		_NAMESPACE29::_0x66F9EB44342BB4C5(uParam0->f_144, &Var0);
	}
}

struct<11> func_85(int iParam0)
{
	struct<11> Var0;
	float fVar11;
	fVar11 = 6f;
	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 1407.135f, -1373.595f, 80.78f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1358.015f, -1369.316f, 78.3282f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 1358.015f, -1369.316f, 78.3282f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 3:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -1826.825f, -424.025f, 159.689f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 4:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1826.825f, -424.025f, 159.689f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 5:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -1826.825f, -424.025f, 159.689f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 6:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -272.9171f, 633.0108f, 112.46f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 7:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -272.9171f, 633.0108f, 112.46f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 8:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -272.9171f, 633.0108f, 112.46f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 15:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 2590.084f, -1348.206f, 45.193f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 90f, 90f, 90f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 16:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2563.835f, -1378.423f, 45.1925f };
			Var0.f_4 = { 0f, 0f, 346.5068f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 17:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2563.835f, -1378.423f, 45.1925f };
			Var0.f_4 = { 0f, 0f, 346.5068f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 9:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -1988.987f, -1637.129f, 116.1275f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 10:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1988.987f, -1637.129f, 116.1275f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 11:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -1988.987f, -1637.129f, 116.1275f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 12:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -799.974f, -1330.227f, 42.6291f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 80f, 80f, 80f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 13:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -773.2449f, -1329.082f, 42.6291f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 14:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -773.2449f, -1329.082f, 42.6291f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 18:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -1408.907f, -2314.77f, 42.1056f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 19:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1408.907f, -2314.77f, 42.1056f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 20:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -1408.907f, -2314.77f, 42.1056f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 21:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -2350.174f, -2392.17f, 61.172f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 70f, 70f, 70f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 22:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -2378.475f, -2378.621f, 61.1724f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 23:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2378.475f, -2378.621f, 61.1724f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 24:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -3674.969f, -2619.971f, -14.8162f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 25:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -3674.969f, -2619.971f, -14.8162f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 26:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -3674.969f, -2619.971f, -14.8162f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 27:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -2336.584f, -1264.266f, 147.062f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 28:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -2338.21f, -1271.362f, 147.062f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 29:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -2338.21f, -1271.362f, 147.062f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 30:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 1295.802f, -200.3015f, 99.0642f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 31:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1295.802f, -200.3015f, 99.0642f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 32:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 1295.802f, -200.3015f, 99.0642f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 33:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 2420.433f, 1020.558f, 87.236f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 110f, 110f, 110f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 34:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 2428.864f, 1015.729f, 85.6131f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 35:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 2428.864f, 1015.729f, 85.6131f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 36:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -1565.447f, -2695.09f, 64.7772f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 60f, 60f, 60f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 37:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -1565.447f, -2695.09f, 64.7772f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 38:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -1565.447f, -2695.09f, 64.7772f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
		case 39:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { -3158.572f, -3010.584f, 3.689f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 100f, 100f, 100f };
			Var0.f_10 = "GAVINRandomEventBlock";
			break;
		case 40:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { -3157.477f, -2981.991f, 4.6224f };
			Var0.f_4 = { 0f, 0f, 48.00007f };
			Var0.f_7 = { fVar11, fVar11, 10f };
			Var0.f_10 = "GAVINTrigger";
			break;
		case 41:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { -3157.477f, -2981.991f, 4.6224f };
			Var0.f_4 = { 0f, 0f, 45.48975f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "GAVINStayAway";
			break;
	}
	return Var0;
}

void func_86(var uParam0, var uParam1, int iParam2)
{
	__LIB_1__::func_993(&(uParam0->f_193), 4096);
	__LIB_1__::func_993(&(uParam0->f_193), 8192);
	__LIB_1__::func_993(&(uParam0->f_193), 16384);
	__LIB_1__::func_993(&(uParam0->f_193), 32768);
	*uParam1 = iParam2;
}

void func_87(var uParam0)
{
	if (!__LIB_0__::func_27(uParam0->f_193, 256))
	{
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(uParam0->f_144) > 1.5f)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_144, 1.5f);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_206))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_206, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(uParam0->f_206) > uParam0->f_213)
				{
					TASK::CLEAR_PED_TASKS(uParam0->f_144, true, false);
					__LIB_1__::func_727(uParam0->f_144, 1);
					__LIB_1__::func_581(&(uParam0->f_193), 256);
				}
			}
		}
		if ((uParam0->f_214 > 10f && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uParam0->f_144))
		{
			TASK::CLEAR_PED_TASKS(uParam0->f_144, true, false);
			__LIB_1__::func_727(uParam0->f_144, 1);
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_206, false);
			__LIB_1__::func_581(&(uParam0->f_193), 256);
		}
	}
}

void func_88(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(uParam0->f_142))
	{
		switch (*uParam1)
		{
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 21:
			case 22:
			case 23:
			case 24:
			case 31:
				break;
			case 32:
			case 33:
				break;
			case 34:
				break;
			case 25:
			case 26:
			case 27:
			case 28:
			case 29:
			case 30:
			case 36:
				if (__LIB_0__::func_27(uParam0->f_195, 8))
				{
					__LIB_16__::func_783(11, 1);
				}
				if (__LIB_0__::func_27(uParam0->f_195, 32))
				{
					__LIB_16__::func_783(11, 12);
				}
				break;
			case 37:
				break;
		}
	}
}

struct<6> func_89(var uParam0, var uParam1, bool bParam2)
{
	struct<6> Var0;
	var uVar6;
	if (!bParam2)
	{
		switch (uParam0->f_127)
		{
			case 105:
				Var0 = { 1358.015f, -1369.316f, 178.3282f };
				Var0.f_3 = { 0f, 0f, 300.6034f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 26:
				Var0 = { -1826.825f, -424.025f, 259.689f };
				Var0.f_3 = { 0f, 0f, 101.0226f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 76:
				Var0 = { -272.9171f, 633.0108f, 212.46f };
				Var0.f_3 = { 0f, 0f, 131.3773f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 5:
				Var0 = { 2563.835f, -1378.423f, 45.1925f };
				Var0.f_3 = { 0f, 0f, 346.5068f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 110:
				Var0 = { -1988.987f, -1637.129f, 216.1275f };
				Var0.f_3 = { 0f, 0f, 261.0204f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 38:
				Var0 = { -773.2449f, -1329.082f, 142.6291f };
				Var0.f_3 = { 0f, 0f, 191.3503f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 127:
				Var0 = { -1408.907f, -2314.77f, 142.1056f };
				Var0.f_3 = { 0f, 0f, 86.7896f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 126:
				Var0 = { -2378.475f, -2378.621f, 161.1724f };
				Var0.f_3 = { 0f, 0f, 185.2923f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
			case 120:
				Var0 = { -3674.969f, -2619.971f, 94.8162f };
				Var0.f_3 = { 0f, 0f, 4.9799f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
				Var0.f_2 = uVar6;
				return Var0;
		}
		switch (__LIB_16__::func_787(11))
		{
			case 12:
				Var0 = { -2338.21f, -1271.362f, 247.062f };
				Var0.f_3 = { 0f, 0f, 356.6931f };
				break;
			case 11:
				Var0 = { 1295.802f, -200.3015f, 199.0642f };
				Var0.f_3 = { 0f, 0f, 1.8815f };
				break;
			case 10:
				Var0 = { 2428.864f, 1015.729f, 185.6131f };
				Var0.f_3 = { 0f, 0f, 304.652f };
				break;
			case 16:
				Var0 = { -1565.447f, -2695.09f, 164.7772f };
				Var0.f_3 = { 0f, 0f, 340.7221f };
				break;
			case 15:
				Var0 = { -3157.477f, -2981.991f, 104.6224f };
				Var0.f_3 = { 0f, 0f, 86.239f };
				break;
		}
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar6, false);
		Var0.f_2 = uVar6;
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
		Var0.f_3 = { 0f, 0f, 0f };
		Var0.f_3.f_2 = ENTITY::GET_ENTITY_HEADING(*uParam1);
	}
	return Var0;
}

void func_90(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 8388608);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 8388608);
	}
}

bool func_91(var uParam0, var uParam1, char* sParam2, bool bParam3)
{
	if (!__LIB_0__::func_27(uParam0->f_193, 8192))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false))
		{
			ANIMSCENE::START_ANIM_SCENE(*uParam1);
		}
		else
		{
			__LIB_1__::func_581(&(uParam0->f_193), 8192);
		}
		return false;
	}
	if (__LIB_0__::func_27(uParam0->f_193, 32768))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_BASE", 1))
		{
			if (__LIB_16__::func_863(uParam1, uParam0->f_217))
			{
				uParam0->f_217 = sParam2;
				return true;
			}
		}
		if (uParam0->f_129 == 33)
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(*uParam1, false))
			{
				return true;
			}
		}
		return false;
	}
	else
	{
		if (!__LIB_0__::func_27(uParam0->f_193, 16384))
		{
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam1, sParam2))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
				}
				return false;
			}
			else
			{
				__LIB_1__::func_581(&(uParam0->f_193), 16384);
			}
		}
		if (bParam3)
		{
			if (uParam0->f_214 > 60f)
			{
				return false;
			}
		}
		if (!__LIB_0__::func_27(uParam0->f_193, 32768))
		{
			if (!ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "Internal_loop", false, false);
				return false;
			}
			else
			{
				__LIB_1__::func_581(&(uParam0->f_193), 32768);
			}
		}
	}
	return false;
}

void func_92(var uParam0)
{
	if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_150, true, 0))
	{
		if (!__LIB_0__::func_27(uParam0->f_193, 8))
		{
			__LIB_1__::func_581(&(uParam0->f_193), 8);
		}
	}
	else
	{
		__LIB_1__::func_993(&(uParam0->f_193), 8);
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		__LIB_1__::func_471(&(uParam0->f_240[0 /*17*/]), 9);
		__LIB_1__::func_471(&(uParam0->f_240[1 /*17*/]), 9);
	}
}

bool func_93(var uParam0, var uParam1)
{
	if (__LIB_16__::func_876(uParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "cs_gavin", uParam0->f_144, 0);
		if (!__LIB_0__::func_181())
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_zero", Global_35, 0);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam1, "player_three", Global_35, 0);
		}
		return true;
	}
	return false;
}

int func_94(var uParam0)
{
	switch (uParam0->f_200)
	{
		case 0:
			__LIB_1__::func_581(&(uParam0->f_194), 1);
			break;
		case 1:
			__LIB_1__::func_581(&(uParam0->f_194), 2);
			break;
		case 2:
			__LIB_1__::func_581(&(uParam0->f_194), 4);
			break;
		case 3:
			__LIB_1__::func_581(&(uParam0->f_194), 8);
			break;
		case 4:
			__LIB_1__::func_581(&(uParam0->f_194), 16);
			break;
		case 5:
			__LIB_1__::func_581(&(uParam0->f_194), 32);
			break;
		case 6:
			__LIB_1__::func_581(&(uParam0->f_194), 64);
			break;
	}
	switch (uParam0->f_201)
	{
		case 0:
			__LIB_1__::func_581(&(uParam0->f_194), 128);
			break;
		case 1:
			__LIB_1__::func_581(&(uParam0->f_194), 256);
			break;
		case 2:
			__LIB_1__::func_581(&(uParam0->f_194), 512);
			break;
		case 3:
			__LIB_1__::func_581(&(uParam0->f_194), 1024);
			break;
		case 4:
			__LIB_1__::func_581(&(uParam0->f_194), 2048);
			break;
		case 5:
			__LIB_1__::func_581(&(uParam0->f_194), 4096);
			break;
		case 6:
			__LIB_1__::func_581(&(uParam0->f_194), 8192);
			break;
		case 7:
			__LIB_1__::func_581(&(uParam0->f_194), 16384);
			break;
		case 8:
			__LIB_1__::func_581(&(uParam0->f_194), 32768);
			break;
	}
	switch (uParam0->f_202)
	{
		case 0:
			__LIB_1__::func_581(&(uParam0->f_194), 65536);
			break;
		case 1:
			__LIB_1__::func_581(&(uParam0->f_194), 131072);
			break;
		case 2:
			__LIB_1__::func_581(&(uParam0->f_194), 262144);
			break;
		case 3:
			__LIB_1__::func_581(&(uParam0->f_194), 524288);
			break;
		case 4:
			__LIB_1__::func_581(&(uParam0->f_194), 1048576);
			break;
		case 5:
			__LIB_1__::func_581(&(uParam0->f_194), 2097152);
			break;
	}
	switch (uParam0->f_203)
	{
		case 0:
			__LIB_1__::func_581(&(uParam0->f_194), 4194304);
			break;
		case 1:
			__LIB_1__::func_581(&(uParam0->f_194), 8388608);
			break;
		case 2:
			__LIB_1__::func_581(&(uParam0->f_194), 16777216);
			break;
		case 3:
			__LIB_1__::func_581(&(uParam0->f_194), 33554432);
			break;
		case 4:
			__LIB_1__::func_581(&(uParam0->f_194), 67108864);
			break;
		case 5:
			__LIB_1__::func_581(&(uParam0->f_194), 134217728);
			break;
	}
	if (__LIB_0__::func_6(uParam0->f_142))
	{
		__LIB_7__::func_448(uParam0->f_142, uParam0->f_194);
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_95(var uParam0)
{
	if (__LIB_0__::func_6(uParam0->f_142))
	{
		uParam0->f_194 = __LIB_5__::func_297(uParam0->f_142);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

struct<4> func_96(var uParam0, int iParam1)
{
	struct<4> Var0;
	switch (iParam1)
	{
		case 0:
			Var0 = { __LIB_16__::func_870(11, 0, 0) };
			break;
		case 1:
			switch (uParam0->f_127)
			{
				case 105:
					Var0 = { 1358.015f, -1369.316f, 78.3282f };
					Var0.f_3 = 300.6034f;
					return Var0;
				case 26:
					Var0 = { -1826.825f, -424.025f, 159.689f };
					Var0.f_3 = 101.0226f;
					return Var0;
				case 76:
					Var0 = { -272.9171f, 633.0108f, 112.46f };
					Var0.f_3 = 131.3773f;
					return Var0;
				case 5:
					Var0 = { 2563.835f, -1378.423f, 45.1925f };
					Var0.f_3 = 346.5068f;
					return Var0;
				case 110:
					Var0 = { -1988.987f, -1637.129f, 116.1275f };
					Var0.f_3 = 261.0204f;
					return Var0;
				case 38:
					Var0 = { -773.2449f, -1329.082f, 42.6291f };
					Var0.f_3 = 191.3503f;
					return Var0;
				case 127:
					Var0 = { -1408.907f, -2314.77f, 42.1056f };
					Var0.f_3 = 86.7896f;
					return Var0;
				case 126:
					Var0 = { -2378.475f, -2378.621f, 61.1724f };
					Var0.f_3 = 185.2923f;
					return Var0;
				case 120:
					Var0 = { -3674.969f, -2619.971f, -14.8162f };
					Var0.f_3 = 4.9799f;
					return Var0;
			}
			switch (__LIB_16__::func_787(11))
			{
				case 12:
					Var0 = { -2338.21f, -1271.362f, 147.062f };
					Var0.f_3 = 356.6931f;
					break;
				case 11:
					Var0 = { 1295.802f, -200.3015f, 99.0642f };
					Var0.f_3 = 1.8815f;
					break;
				case 10:
					Var0 = { 2428.864f, 1015.729f, 85.6131f };
					Var0.f_3 = 304.652f;
					break;
				case 16:
					Var0 = { -1565.447f, -2695.09f, 64.7772f };
					Var0.f_3 = 340.7221f;
					break;
				case 15:
					Var0 = { -3157.477f, -2981.991f, 4.6224f };
					Var0.f_3 = 86.239f;
					break;
			}
			break;
	}
	return Var0;
}

void func_97(var uParam0, int iParam1)
{
	if (__LIB_0__::func_27(uParam0->f_193, 32) && uParam0->f_210 >= 4)
	{
		return;
	}
	if (iParam1 >= 3 && iParam1 <= 24)
	{
		if (__LIB_16__::func_867(&(uParam0->f_144), &(uParam0->f_215), &(uParam0->f_139), &(uParam0->f_210), 4, 0, 4000, 0))
		{
			__LIB_1__::func_581(&(uParam0->f_193), 32);
		}
	}
}

void func_98(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_149))
	{
		__LIB_1__::func_544(uParam0->f_149);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_151))
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_151);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_151);
	}
	__LIB_0__::func_172(Global_1396257[11 /*638*/][0 /*48*/].f_47);
	__LIB_0__::func_172(uParam0->f_149);
	__LIB_0__::func_172(uParam0->f_150);
	__LIB_0__::func_172(uParam0->f_151);
	__LIB_0__::func_172(uParam0->f_152);
}

bool func_99()
{
	if (PED::_IS_PED_CARRYING(Global_35) || __LIB_17__::func_65())
	{
		return true;
	}
	return false;
}

void func_100(var uParam0)
{
	__LIB_2__::func_602(&(uParam0->f_240[0 /*17*/]), "GAV_UC_TALK", "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(uParam0->f_240[1 /*17*/]), "GAV_UC_NEG", "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_101(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!__LIB_0__::func_27(uParam0->f_193, 1024))
		{
			__LIB_2__::func_451(&(uParam0->f_219), 0);
			__LIB_2__::func_411(&(uParam0->f_240[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(uParam0->f_240[1 /*17*/]), 1, 0);
			uParam0->f_296 = 2;
			__LIB_1__::func_581(&(uParam0->f_193), 1024);
		}
	}
	else if (__LIB_0__::func_27(uParam0->f_193, 1024))
	{
		__LIB_2__::func_451(&(uParam0->f_219), 0);
		__LIB_2__::func_411(&(uParam0->f_240[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(uParam0->f_240[1 /*17*/]), 0, 0);
		uParam0->f_296 = 3;
		__LIB_1__::func_993(&(uParam0->f_193), 1024);
	}
}

bool func_102(int iParam0, int iParam1)
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
	{
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::_TRIGGER_SONAR_BLIP_2(iParam1, *iParam0);
		return true;
	}
	return false;
}

bool func_103(int iParam0, int iParam1)
{
	return __LIB_0__::func_1(Global_40.f_11623[iParam0 /*8*/].f_1, iParam1);
}

char* func_104()
{
	return "GREET_GENERAL";
}

bool func_105(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_683(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_683(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_683(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_683(iParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_683(iParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_683(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_683(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > iParam2->f_17)
			{
				if (__LIB_16__::func_973(&iParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || __LIB_16__::func_975(&iParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(iParam2->f_13)))
					{
						__LIB_0__::func_268(&(iParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(iParam2->f_13)) >= iParam2->f_16)
					{
						__LIB_0__::func_37(&(iParam2->f_13));
						__LIB_1__::func_683(iParam2, 512);
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(iParam2->f_13)))
					{
						__LIB_0__::func_37(&(iParam2->f_13));
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_683(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_683(iParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_683(iParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_683(iParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*iParam2, 2) || __LIB_0__::func_27(*iParam2, 4)) || __LIB_0__::func_27(*iParam2, 8)) || __LIB_0__::func_27(*iParam2, 16)) || __LIB_0__::func_27(*iParam2, 32)) || __LIB_0__::func_27(*iParam2, 64)) || __LIB_0__::func_27(*iParam2, 128)) || __LIB_0__::func_27(*iParam2, 256)) || __LIB_0__::func_27(*iParam2, 512)) || __LIB_0__::func_27(*iParam2, 1024)) || __LIB_0__::func_27(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

int func_106(var uParam0, int iParam1, vector3 vParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam0 = OBJECT::CREATE_OBJECT(iParam1, vParam2, true, true, false, false, true);
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_107(var uParam0, vector3 vParam1, int iParam4)
{
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	if (ENTITY::_0x59B57C4B06531E1E(vParam1, iParam4, *uParam0, 2) > 0)
	{
		ITEMSET::_CLEAR_ITEMSET(*uParam0);
		return true;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

void func_108(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)
{
	if (!__LIB_0__::func_1(*uParam1, iParam2))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		return;
	}
	if (__LIB_0__::func_1(*uParam1, iParam3))
	{
		if (!__LIB_0__::func_1(*uParam1, iParam4))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
			{
				PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam7);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
			{
				PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam6, 0f, 0f, 0f, 0, sParam8);
			}
			__LIB_0__::func_7(uParam1, iParam4);
		}
	}
	else if (__LIB_0__::func_1(*uParam1, iParam4))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
		{
			PLAYER::_0xC67A4910425F11F1(PLAYER::PLAYER_ID(), sParam8);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7) && !MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
		{
			PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), iParam0, sParam5, 0f, 0f, 0f, 0, sParam7);
		}
		__LIB_0__::func_8(uParam1, iParam4);
	}
}

bool func_109()
{
	if (((!__LIB_17__::func_99() && !__LIB_0__::func_163(Global_35, -208384378)) && (!ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_147()) || !ENTITY::IS_ENTITY_IN_AIR(__LIB_0__::func_147(), 1))) && (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35)) || !ENTITY::IS_ENTITY_IN_AIR(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), 1)))
	{
		return true;
	}
	if (__LIB_17__::func_65())
	{
		__LIB_17__::func_66();
	}
	else if (PED::_IS_PED_CARRYING(Global_35))
	{
		if (!__LIB_0__::func_163(Global_35, -208384378))
		{
			TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35), __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), 1f, 8);
		}
	}
	return false;
}

void func_110(int* iParam0, var uParam1, int iParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	iParam0->f_14 = iParam2;
	__LIB_1__::func_471(iParam0, 1);
	__LIB_16__::func_872(iParam0, uParam1, sParam3, uParam4, iParam5, iParam6, iParam7, bParam8, 0);
}

bool func_111(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 1 && PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2048)
	{
		return true;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	return false;
}

char[] func_112()
{
	return "pl_sit_loop_base";
}

char[] func_113()
{
	return "pl_cower_loop_base";
}

char[] func_114()
{
	return "pl_stand_to_sit";
}

void func_115(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		return;
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iParam0->f_158[0], 0, 1);
}

char* func_116()
{
	return "script@specialped@pdjeb_joe_butler@ig@ig_1@ig_1";
}

char[] func_117()
{
	return "pl_sit_to_stand";
}

char* func_118()
{
	return "script_special_ped@pdjeb_joe_butler@ig@ig1";
}

void func_119(int iParam0, int iParam1)
{
	iParam0->f_282 = 0;
	*iParam0 = iParam1;
}

char[] func_120()
{
	return "pbl_P10_Loop01";
}

char[] func_121()
{
	return "pbl_P10_loop02";
}

char[] func_122()
{
	return "pbl_P11_T01_Loop01";
}

char[] func_123()
{
	return "pbl_P1_T01_Loop01";
}

char[] func_124()
{
	return "pbl_P11_T01_Loop02";
}

char[] func_125()
{
	return "pbl_P11_T02_Loop01";
}

char[] func_126()
{
	return "pbl_P8_T03_Loop03";
}

char[] func_127()
{
	return "pbl_P1_T02_Loop01";
}

char[] func_128()
{
	return "pbl_P1_T01_Loop02";
}

char[] func_129()
{
	return "pbl_P1_T02_Loop02";
}

char[] func_130()
{
	return "pbl_P8_T03_Loop01";
}

char[] func_131()
{
	return "pbl_P8_T03_Loop02";
}

char[] func_132()
{
	return "pbl_P1_T02_Loop03";
}

char[] func_133()
{
	return "pbl_P1_T01_Loop03";
}

char[] func_134()
{
	return "pbl_P2_Loop02";
}

char[] func_135()
{
	return "pbl_P3_Loop01";
}

char[] func_136()
{
	return "pbl_P4_Loop01";
}

char[] func_137()
{
	return "pbl_P1_T01_Loop04";
}

char[] func_138()
{
	return "pbl_P4_T03_Loop02";
}

char[] func_139()
{
	return "pbl_P5_Loop01";
}

char[] func_140()
{
	return "pbl_P5_Loop02";
}

char[] func_141()
{
	return "pbl_P2_Loop01";
}

char[] func_142()
{
	return "pbl_P1_T01_Loop05";
}

char[] func_143()
{
	return "pbl_P6_T02_Loop01";
}

char[] func_144()
{
	return "pbl_P6_T03_Loop01";
}

char[] func_145()
{
	return "pbl_P7_Loop01";
}

char[] func_146()
{
	return "pbl_P1_T01_Loop06";
}

char[] func_147()
{
	return "pbl_P8_T05_Loop01";
}

char[] func_148()
{
	return "pbl_P9_Loop01";
}

char[] func_149()
{
	return "pbl_P9_Loop02";
}

char[] func_150()
{
	return "pbl_sit_to_cower";
}

char[] func_151()
{
	return "pl_enter_cower";
}

int func_152(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_RESET_FLAG(iParam0, 49, true);
		return 1;
	}
	return 0;
}

bool func_153(int iParam0)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0->f_170))
	{
		return false;
	}
	if (__LIB_1__::func_205(Global_35, iParam0->f_170, 1, 0))
	{
		return true;
	}
	return false;
}

void func_154(int iParam0, int iParam1)
{
	__LIB_11__::func_399(&(Global_1396257[iParam0 /*638*/].f_626), iParam1, 0);
}

bool func_155(var uParam0, var uParam1, float fParam2, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar0 * Vector(fParam2, fParam2, fParam2) };
	if (__LIB_17__::func_107(uParam1, vVar3, iParam3))
	{
		return true;
	}
	return false;
}

bool func_156(int iParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;
	bool bVar1;
	switch (iParam0->f_282)
	{
		case 0:
			if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(*uParam1, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				ANIMSCENE::START_ANIM_SCENE(*uParam1);
			}
			else
			{
				iParam0->f_282 = 1;
			}
			break;
		case 1:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				bVar0 = true;
			}
			if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				bVar1 = true;
			}
			if (!bVar0 && !bVar1)
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam1, sParam2);
			}
			if (bVar1)
			{
				iParam0->f_282 = 3;
			}
			if (bVar0)
			{
				iParam0->f_282 = 2;
			}
			break;
		case 2:
			if (bParam5)
			{
				if (!__LIB_16__::func_878(&(iParam0->f_158[0]), 50f, iParam0->f_175))
				{
					return false;
				}
			}
			if (ANIMSCENE::_0x23E33CB9F4A3F547(*uParam1, sParam2))
			{
				bVar0 = true;
			}
			if (ANIMSCENE::_0x1F0E401031E20146(*uParam1, sParam2))
			{
				bVar1 = true;
			}
			if (!bVar1 && bVar0)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(*uParam1, sParam2, true);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop", bParam3, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*uParam1, "internal_loop_end", bParam4, false);
				return false;
			}
			else if (bVar1)
			{
				iParam0->f_282 = 3;
			}
			break;
		case 3:
			if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base_end", 1) && !bParam4)
			{
				if (__LIB_16__::func_863(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_base", 1) && bParam4)
			{
				if (__LIB_16__::func_863(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_sit_loop_base", 1) && bParam4)
			{
				if (__LIB_16__::func_863(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			else if (ANIMSCENE::_0x8D81E7824B7753F7(*uParam1, "s_cower_loop_base", 1) && bParam4)
			{
				if (__LIB_16__::func_863(uParam1, iParam0->f_173))
				{
					iParam0->f_173 = sParam2;
					return true;
				}
			}
			break;
	}
	return false;
}

void func_157(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]) && ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if (!__LIB_0__::func_75(&(iParam0->f_140)))
	{
		__LIB_0__::func_268(&(iParam0->f_140), 0f);
	}
	else if (__LIB_1__::func_871(&(iParam0->f_140)) >= 1000)
	{
		iParam0->f_175 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0->f_158[0], true, false), __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), true);
		__LIB_0__::func_37(&(iParam0->f_140));
	}
}

void func_158(int iParam0)
{
	if (__LIB_0__::func_27(iParam0->f_180, 128) && iParam0->f_184 >= 3)
	{
		return;
	}
	if (*iParam0 >= 7 && *iParam0 <= 36)
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_178) >= 0.8f)
		{
			return;
		}
		if (iParam0->f_183 < 2)
		{
			if (__LIB_16__::func_867(&(iParam0->f_158[0]), &(iParam0->f_187), &(iParam0->f_143), &(iParam0->f_184), 3, 0, 7000, 0))
			{
				__LIB_1__::func_581(&(iParam0->f_180), 128);
			}
		}
	}
}

void func_159(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_158[0]))
	{
		return;
	}
	if (((!__LIB_0__::func_27(iParam0->f_180, 16) || iParam0->f_175 > 10f) || __LIB_0__::func_27(iParam0->f_180, 16384)) || __LIB_3__::func_291(Global_35, 1))
	{
		if (__LIB_0__::func_75(&(iParam0->f_146)))
		{
			__LIB_0__::func_37(&(iParam0->f_146));
		}
		return;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_158[0]))
	{
		if (__LIB_0__::func_75(&(iParam0->f_146)))
		{
			__LIB_0__::func_37(&(iParam0->f_146));
		}
		return;
	}
	if (!__LIB_0__::func_75(&(iParam0->f_146)))
	{
		__LIB_0__::func_268(&(iParam0->f_146), 0f);
	}
	else if (__LIB_1__::func_871(&(iParam0->f_146)) >= 12000)
	{
		__LIB_0__::func_37(&(iParam0->f_146));
		__LIB_5__::func_469(iParam0->f_158[0], "PLAYER_STILL_HANGING", -417894478, Global_35, 0, "JOE_BUTLER", 0, 1);
		iParam0->f_186++;
		if (!__LIB_0__::func_27(iParam0->f_180, 16384) && iParam0->f_186 >= 2)
		{
			__LIB_1__::func_581(&(iParam0->f_180), 16384);
		}
	}
}

void func_160(int iParam0)
{
	if (__LIB_14__::func_126(29, 1) || iParam0->f_185 >= 2)
	{
		return;
	}
	if (!__LIB_0__::func_75(&(iParam0->f_131)))
	{
		iParam0->f_174 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(8, 12));
		__LIB_0__::func_268(&(iParam0->f_131), 0f);
	}
	else if (__LIB_0__::func_265(&(iParam0->f_131)) > iParam0->f_174)
	{
		__LIB_5__::func_469(iParam0->f_158[0], "GENERIC_FRIGHTENED_HIGH", -417894478, Global_35, 0, "JOE_BUTLER", 0, 1);
		iParam0->f_185++;
		__LIB_0__::func_268(&(iParam0->f_131), 0f);
		__LIB_0__::func_37(&(iParam0->f_131));
	}
}

bool func_161(var uParam0, vector3 vParam1, float fParam4, var uParam5, int iParam6, int iParam7, float fParam8)
{
	int iVar0;
	switch (*uParam5)
	{
		case 0:
			if (!__LIB_0__::func_163(*uParam0, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, vParam1, 1f, iParam6, fParam4, iParam7, 0);
				TASK::TASK_ACHIEVE_HEADING(0, fParam4, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(*uParam0, iVar0);
				PED::SET_PED_KEEP_TASK(*uParam0, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
			else
			{
				*uParam5 = 1;
			}
			break;
		case 1:
			if (__LIB_3__::func_501(*uParam0, vParam1, fParam4, iParam7, fParam8, 0) || TASK::GET_SCRIPT_TASK_STATUS(*uParam0, 242628503, true) == 8)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_162(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	if (bParam1)
	{
		Var0 = "JB1_UC_GIVE";
		Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	}
	else
	{
		Var0 = "SPD_UC_GRT";
		Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	}
	Var2 = "SPD_UC_ANT";
	Var2.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
	__LIB_17__::func_110(&(iParam0->f_211[0 /*17*/]), Var0, 100, "", Var0.f_1, 0, 0, 0, 1);
	__LIB_16__::func_872(&(iParam0->f_211[1 /*17*/]), Var2, "", Var2.f_1, 0, 0, 0, 1, 0);
}

char* func_163()
{
	return "pbl_Interactive01";
}

struct<4> func_164(int iParam0)
{
	struct<4> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = { 1320.167f, -1291.738f, 75.23311f };
			Var0.f_3 = 68.748f;
			break;
		case 1:
			Var0 = { 1320.96f, -1290.723f, 75.27775f };
			Var0.f_3 = 68.748f;
			break;
		case 2:
			Var0 = { 1319.546f, -1291.098f, 76.1904f };
			Var0.f_3 = -119.68f;
			break;
		case 3:
			Var0 = { 1321.58f, -1290.592f, 76.39468f };
			Var0.f_3 = 0f;
			break;
	}
	return Var0;
}

struct<11> func_165(int iParam0)
{
	struct<11> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = joaat("VOLSPHERE");
			Var0.f_1 = { 1320.787f, -1291.887f, 75.307f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 55f, 55f, 55f };
			Var0.f_10 = "RandomEventBlock";
			break;
		case 1:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1318.473f, -1290.612f, 84.303f };
			Var0.f_4 = { 0f, 0f, -25.67596f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "Trigger";
			break;
		case 2:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 1321.154f, -1291.387f, 79.97336f };
			Var0.f_4 = { 0f, 0f, 65f };
			Var0.f_7 = { 3f, 6f, 10f };
			Var0.f_10 = "StayAway";
			break;
		case 3:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1316.051f, -1289.458f, 78.75141f };
			Var0.f_4 = { 0f, 0f, 155f };
			Var0.f_7 = { 6f, 8f, 6f };
			Var0.f_10 = "LookIKVolume";
			break;
		case 4:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1319.544f, -1291.433f, 84.30341f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 10f };
			Var0.f_10 = "Focus";
			break;
		case 5:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1320.894f, -1291.958f, 76.3277f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1f, 1f, 10f };
			Var0.f_10 = "Grief";
			break;
		case 6:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1320.894f, -1291.958f, 76.3277f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 1.85f, 1.85f, 10f };
			Var0.f_10 = "Grief";
			break;
		case 7:
			Var0 = joaat("VOLBOX");
			Var0.f_1 = { 1325.705f, -1322.965f, 76.01214f };
			Var0.f_4 = { 0f, 0f, 74.99999f };
			Var0.f_7 = { 11f, 12f, 9f };
			Var0.f_10 = "Gunsmith";
			break;
		case 8:
			Var0 = joaat("VOLCYLINDER");
			Var0.f_1 = { 1320.371f, -1318.493f, 78.10471f };
			Var0.f_4 = { 0f, 0f, 0f };
			Var0.f_7 = { 3f, 3f, 3f };
			Var0.f_10 = "Gunsmith2";
			break;
	}
	return Var0;
}

void func_166(int iParam0)
{
	if ((__LIB_0__::func_27(iParam0->f_180, 131072) || __LIB_0__::func_27(iParam0->f_180, 1024)) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0->f_158[0]))
	{
		return;
	}
	if (*iParam0 >= 4 && *iParam0 <= 37)
	{
		__LIB_1__::func_581(&(iParam0->f_180), 131072);
		__LIB_17__::func_119(iParam0, 5);
	}
	else if (*iParam0 >= 38 && *iParam0 <= 47)
	{
		if (__LIB_16__::func_876(&(iParam0->f_178)))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "JOE_BUTLER", iParam0->f_158[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Cup", iParam0->f_160, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "COIN", iParam0->f_161, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0->f_178, "internal_loop_end", false, false);
			__LIB_1__::func_581(&(iParam0->f_180), 131072);
			__LIB_17__::func_119(iParam0, 5);
		}
		else if (!__LIB_0__::func_27(iParam0->f_180, 262144))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_178, true, false) || !ANIMSCENE::_IS_ANIM_SCENE_LOADING(iParam0->f_178, true))
			{
				ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_178, 0);
			}
			__LIB_1__::func_581(&(iParam0->f_180), 262144);
		}
	}
}

struct<2> func_167()
{
	struct<2> Var0;
	switch (__LIB_11__::func_133(14))
	{
		case 0:
			Var0 = "INSULT_JOEBUTLER_CONV_PART1";
			Var0.f_1 = 1;
			break;
		case 1:
			Var0 = "INSULT_JOEBUTLER_CONV_PART1";
			Var0.f_1 = 2;
			break;
		case 2:
			Var0 = "INSULT_JOEBUTLER_CONV_PART2";
			Var0.f_1 = 2;
			break;
		case 3:
			Var0 = "INSULT_MALE_CONV_PART1";
			Var0.f_1 = 6;
			break;
	}
	return Var0;
}

bool func_168(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ITEMSET::IS_ITEMSET_VALID(*uParam0))
	{
		*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	}
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam2, iParam6, *uParam0, 1);
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, *uParam0);
		*iParam1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
			{
				if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
				{
					if (__LIB_0__::func_394(Global_35, *iParam1, 0))
					{
					}
					else
					{
						ITEMSET::_CLEAR_ITEMSET(*uParam0);
						return true;
					}
				}
			}
		}
		iVar1++;
	}
	ITEMSET::_CLEAR_ITEMSET(*uParam0);
	return false;
}

void func_169(int iParam0)
{
	if (__LIB_0__::func_27(iParam0->f_180, 1024))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
		__LIB_16__::func_836();
		__LIB_3__::func_102(&(iParam0->f_211));
		__LIB_1__::func_725();
		__LIB_17__::func_152(Global_35);
		__LIB_17__::func_152(iParam0->f_158[0]);
	}
}

void func_170(int iParam0, var uParam1)
{
	switch (*uParam1)
	{
		case 0:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 7);
			break;
		case 1:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 8);
			break;
		case 2:
			*uParam1++;
			if (__LIB_0__::func_181())
			{
				__LIB_17__::func_119(iParam0, 32);
			}
			else
			{
				__LIB_17__::func_119(iParam0, 9);
			}
			break;
		case 3:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 10);
			break;
		case 4:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 11);
			break;
		case 5:
			*uParam1++;
			if (__LIB_0__::func_181())
			{
				__LIB_17__::func_119(iParam0, 34);
			}
			else
			{
				__LIB_17__::func_119(iParam0, 12);
			}
			break;
		case 6:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 13);
			break;
		case 7:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 14);
			break;
		case 8:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 15);
			break;
		case 9:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 16);
			break;
		case 10:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 17);
			break;
		case 11:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 18);
			break;
		case 12:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 19);
			break;
		case 13:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 20);
			break;
		case 14:
			*uParam1++;
			if (__LIB_0__::func_181())
			{
				__LIB_17__::func_119(iParam0, 14);
			}
			else
			{
				__LIB_17__::func_119(iParam0, 21);
			}
			break;
		case 15:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 22);
			break;
		case 16:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 23);
			break;
		case 17:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 24);
			break;
		case 18:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 25);
			break;
		case 19:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 26);
			break;
		case 20:
			*uParam1++;
			if (__LIB_0__::func_181())
			{
				__LIB_17__::func_119(iParam0, 17);
			}
			else
			{
				__LIB_17__::func_119(iParam0, 27);
			}
			break;
		case 21:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 28);
			break;
		case 22:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 29);
			break;
		case 23:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 30);
			break;
		case 24:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 31);
			break;
		case 25:
			*uParam1++;
			if (__LIB_0__::func_181())
			{
				__LIB_17__::func_119(iParam0, 22);
			}
			else
			{
				__LIB_17__::func_119(iParam0, 32);
			}
			break;
		case 26:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 33);
			break;
		case 27:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 34);
			break;
		case 28:
			*uParam1++;
			__LIB_17__::func_119(iParam0, 35);
			break;
		case 29:
			*uParam1 = 0;
			__LIB_17__::func_119(iParam0, 36);
			break;
		case 30:
			__LIB_17__::func_119(iParam0, 37);
			break;
		default:
			break;
	}
}

void func_171(int iParam0, bool bParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	if (bParam1)
	{
		Var0 = "SPD_UC_GRT";
		Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	}
	else
	{
		Var0 = "SPD_UC_GRT";
		Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
	}
	Var2 = "SPD_UC_ANT";
	Var2.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
	__LIB_16__::func_872(&(iParam0->f_211[0 /*17*/]), Var0, "", Var0.f_1, 0, 0, 0, 1, 0);
	__LIB_16__::func_872(&(iParam0->f_211[1 /*17*/]), Var2, "", Var2.f_1, 0, 0, 0, 1, 0);
}

void func_172(int iParam0)
{
	if ((((!ENTITY::IS_ENTITY_DEAD(Global_35) && !ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0])) && __LIB_0__::func_27(iParam0->f_180, 4)) && !__LIB_0__::func_27(iParam0->f_180, 16)) && !__LIB_0__::func_27(iParam0->f_180, 32))
	{
		__LIB_16__::func_948(&(iParam0->f_164), &(iParam0->f_155), &(iParam0->f_188));
		__LIB_16__::func_832(1);
		if (!__LIB_0__::func_27(iParam0->f_180, 1024))
		{
			__LIB_1__::func_581(&(iParam0->f_180), 1024);
			__LIB_14__::func_644(14, 32768);
			HUD::_HIDE_HUD_COMPONENT(724769646);
		}
		if (__LIB_0__::func_154(__LIB_0__::func_153(Global_35, 0, 1, 0)) || __LIB_0__::func_154(__LIB_0__::func_153(Global_35, 1, 1, 0)))
		{
			WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 0);
			return;
		}
		if (!__LIB_17__::func_109())
		{
			return;
		}
		if (__LIB_17__::func_161(&Global_35, 1319.544f, -1291.12f, 76.1169f, -115.09f, &(iParam0->f_281), 20000, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */))
		{
			if (!__LIB_0__::func_27(iParam0->f_180, 32))
			{
				__LIB_16__::func_832(0);
				__LIB_1__::func_581(&(iParam0->f_180), 32);
			}
		}
	}
}

void func_173(int iParam0, bool bParam1)
{
	__LIB_16__::func_840(14);
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_155))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_155);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_156))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_156);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iParam0->f_157))
	{
		ITEMSET::DESTROY_ITEMSET(iParam0->f_157);
	}
	__LIB_16__::func_839(&(iParam0->f_283));
	if (__LIB_0__::func_6(iParam0->f_149) && (__LIB_0__::func_702(iParam0->f_149) || __LIB_1__::func_44(iParam0->f_149)))
	{
		__LIB_1__::func_559(iParam0->f_149, 0, 2);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_178, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_178, "Crutch", iParam0->f_162);
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0->f_162, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_179, false))
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iParam0->f_179, "Crutch", iParam0->f_162);
		ENTITY::APPLY_FORCE_TO_ENTITY(iParam0->f_162, 1, 0f, 0f, 0.5f, 0f, 0f, -0.1f, 0, true, true, true, false, true);
	}
	__LIB_16__::func_832(0);
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_163))
	{
		__LIB_1__::func_544(iParam0->f_163);
		VOLUME::_DELETE_VOLUME(iParam0->f_163);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_165))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_165);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_165);
		VOLUME::_DELETE_VOLUME(iParam0->f_165);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_164))
	{
		POPULATION::_0x74C2B3DC0B294102(iParam0->f_164);
		POPULATION::_0xA1CFB35069D23C23(iParam0->f_164);
		VOLUME::_DELETE_VOLUME(iParam0->f_164);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_166))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_166);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_167))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_167);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_168))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_168);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_169))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_169);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0->f_170))
	{
		VOLUME::_DELETE_VOLUME(iParam0->f_170);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][0 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][0 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][1 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][1 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][2 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][2 /*48*/].f_47);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1396257[14 /*638*/][3 /*48*/].f_47))
	{
		VOLUME::_DELETE_VOLUME(Global_1396257[14 /*638*/][3 /*48*/].f_47);
	}
	if (bParam1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_178))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_178);
		}
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_179))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_179);
		}
		if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0->f_158[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_158[0], 0f);
				PED::_0x39A2FC5AF55A52B1(iParam0->f_158[0], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iParam0->f_158[0]));
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_158[0]))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0->f_158[0], 153, false);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iParam0->f_158[0], 0f);
			PED::DELETE_PED(&(iParam0->f_158[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_160))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_160));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_161))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_161));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_162))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iParam0->f_162));
		}
		if (__LIB_1__::func_565(&(iParam0->f_172)))
		{
			GRAPHICS::_0x9CF1836C03FB67A2(&(iParam0->f_172), 1);
		}
		PLAYER::_0xC67A4910425F11F1(PLAYER::GET_PLAYER_INDEX(), "JoeBubble");
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_174(var uParam0, var uParam1, float fParam2, int iParam3)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar1 * Vector(fParam2, fParam2, fParam2) };
	if (__LIB_17__::func_168(uParam1, &uVar0, vVar4, fParam2, iParam3))
	{
		return true;
	}
	return false;
}

int func_175(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		return 1;
	}
	return 0;
}

void func_176(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_4 = iParam1;
	uParam0->f_4.f_1 = iParam2;
}

bool func_177(int iParam0, int iParam1)
{
	if (__LIB_17__::func_48(iParam0))
	{
		*iParam1 = iParam0;
		return true;
	}
	return false;
}

void func_178(int iParam0)
{
	if (!__LIB_0__::func_58(iParam0) || __LIB_0__::func_1(iParam0->f_134, iParam0->f_136))
	{
		return;
	}
	if (iParam0->f_137 < 2)
	{
		if (__LIB_16__::func_802(&(iParam0->f_3), 249295937))
		{
			__LIB_0__::func_11(iParam0);
			__LIB_0__::func_7(&(iParam0->f_134), iParam0->f_136);
		}
	}
}

void func_179(var uParam0, var uParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	if (uParam0->f_35)
	{
		return;
	}
	uParam0->f_3 = uParam1;
	uParam0->f_4 = sParam2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		uParam0->f_5 = iParam3;
		if (__LIB_0__::func_181())
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				uParam0->f_6 = "JOHN";
			}
			else
			{
				uParam0->f_6 = sParam4;
			}
			uParam0->f_23 = 0;
			uParam0->f_24 = 0;
		}
		else
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				uParam0->f_6 = "ARTHUR";
			}
			else
			{
				uParam0->f_6 = sParam5;
			}
			uParam0->f_23 = 1;
			uParam0->f_24 = "b_PlayerArthur";
		}
	}
	uParam0->f_7 = iParam6;
	uParam0->f_8 = iParam7;
	uParam0->f_9 = iParam8;
	uParam0->f_10 = iParam9;
	uParam0->f_11 = iParam10;
	uParam0->f_12 = iParam11;
	uParam0->f_13 = iParam12;
	uParam0->f_14 = iParam13;
	uParam0->f_15 = iParam14;
	uParam0->f_16 = iParam15;
	uParam0->f_17 = iParam16;
	uParam0->f_18 = iParam17;
}

void func_180(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_350 = iParam1;
	if (bParam2)
	{
		__LIB_17__::func_54(uParam0);
	}
}

void func_181(int iParam0, int iParam1, bool bParam2)
{
	if (!__LIB_16__::func_816(iParam1))
	{
		return;
	}
	if (__LIB_16__::func_818(iParam0) == iParam1)
	{
		if (bParam2)
		{
			if (__LIB_16__::func_819(iParam0, iParam1) != 1)
			{
				__LIB_17__::func_57(iParam0, iParam1, 1, 1);
			}
		}
		else if (__LIB_16__::func_819(&Local_14, iParam1) != __LIB_2__::func_340(3, 0, 0))
		{
			__LIB_17__::func_57(&Local_14, iParam1, __LIB_2__::func_340(3, 0, 0), 1);
		}
	}
}

bool func_182(var uParam0)
{
	if (((__LIB_17__::func_56(&(uParam0->f_146), 2) || __LIB_17__::func_56(&(uParam0->f_146), 4)) || __LIB_17__::func_56(&(uParam0->f_146), 1)) || __LIB_17__::func_56(&(uParam0->f_146), 8))
	{
		return true;
	}
	return false;
}

bool func_183(var uParam0, int iParam1, var uParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return true;
	}
	if (!bParam8)
	{
		*uParam0 = __LIB_4__::func_205(iParam1, vParam3, bParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*uParam0 = __LIB_4__::func_205(iParam1, vParam3, bParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam2 = 1;
		return true;
	}
	return false;
}

int func_184(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	*uParam0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_0x886171A12F400B89(iParam4, *uParam0, 1);
	if (iVar5 > 0)
	{
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar0 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, *uParam0);
			iVar1 = iVar0;
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar3 < *uParam1) && iVar3 < iParam3)
			{
				if (__LIB_2__::func_444(iVar1, bParam5, bParam6, 1, 0, 0) && !DECORATOR::DECOR_EXIST_ON(iVar1, "bIgnoreThisPed"))
				{
					if (!__LIB_0__::func_208(iVar1, uParam2))
					{
						bVar2 = false;
						if (iParam7 != -1)
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < POPULATION::GET_NUM_MODELS_IN_POPULATION_SET(iParam7))
							{
								if (PED::IS_PED_MODEL(iVar1, POPULATION::GET_PED_MODEL_NAME_IN_POPULATION_SET(iParam7, iVar6)))
								{
									bVar2 = true;
								}
								else
								{
									iVar6++;
								}
							}
						}
						else
						{
							bVar2 = true;
						}
						if (bVar2)
						{
							(*uParam1)[iVar3] = iVar1;
							iVar3++;
						}
					}
				}
			}
			iVar4++;
		}
	}
	if (iVar3 >= (iParam3 - 1) && iVar5 >= iParam3)
	{
	}
	ITEMSET::DESTROY_ITEMSET(*uParam0);
	return iVar3;
}

void func_185(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam1)
	{
		if (!bParam2)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam0, "internal_loop", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam0, "internal_loop_end", false, false);
		}
		else
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam0, "internal_loop", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam0, "internal_loop_end", true, false);
		}
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam0, "b_breakout", false, false);
	}
}

int func_186(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*iParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*iParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_187()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_253) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 40) == 0)
	{
		fLocal_258 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_253, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true);
	}
}

void func_188(var uParam0)
{
	uParam0->f_1 = 1;
	uParam0->f_2 = 1;
	uParam0->f_4 = 1;
	uParam0->f_5 = 1;
	uParam0->f_6 = 1;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 1;
	uParam0->f_10 = 1;
	uParam0->f_11 = 1.75f;
	uParam0->f_12 = 2.25f;
	uParam0->f_16 = 45000;
}

char* func_189()
{
	return "pbl_PDSFW_IG1_P2_BOOK_TO_DRINK";
}

char* func_190()
{
	return "pbl_PDSFW_IG1_P2_BOOK_TO_SMOKE";
}

char* func_191()
{
	return "pbl_PDSFW_IG1_P2_BOOK_STAND";
}

char* func_192()
{
	return "pbl_PDSFW_IG1_P2_BOOK_QUICK_EXIT";
}

char* func_193()
{
	return "pbl_BOOK_Cower_Left_Behind";
}

void func_194()
{
	int iVar0;
	AUDIO::STOP_PED_SPEAKING(iLocal_253, false);
	bLocal_305 = true;
	PED::SET_PED_CONFIG_FLAG(iLocal_253, 44, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_253, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_COWER(0, -1, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_253, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	PED::SET_PED_KEEP_TASK(iLocal_253, true);
}

char[] func_195()
{
	return "pbl_BOOK_Cower_Right_Behind";
}

char[] func_196()
{
	return "pbl_BOOK_Cower_Right";
}

char[] func_197()
{
	return "pbl_BOOK_Quick_Stand";
}

char[] func_198()
{
	return "pbl_BOOK_Run_Front";
}

char[] func_199()
{
	return "pbl_BOOK_Run_Left";
}

char[] func_200()
{
	return "pbl_PDSFW_IG1_P2_BOOK_SIT";
}

char[] func_201()
{
	return "pbl_PDSFW_IG1_P9_BOOK_IM_BORED";
}

char[] func_202()
{
	return "pbl_PDSFW_IG1_P4_BOOK_EVELYN_MILLER";
}

char[] func_203()
{
	return "pbl_PDSFW_IG1_P4_BOOK_DRIVEL";
}

char[] func_204()
{
	return "pbl_PDSFW_IG1_P2_BOOK_SIGH";
}

char[] func_205()
{
	return "pbl_PDSFW_IG1_P2_BOOK_SHOULDER";
}

char[] func_206()
{
	return "pbl_PDSFW_IG1_P2_BOOK_PAGE";
}

char[] func_207()
{
	return "pbl_PDSFW_IG1_P2_BOOK_LOOKING";
}

char[] func_208()
{
	return "pbl_PDSFW_IG1_P2_BOOK_FRUSTRATED";
}

char[] func_209()
{
	return "pbl_PDSFW_IG1_P9_Bloody_Drink";
}

char[] func_210()
{
	return "pbl_PDSFW_IG1_P2_DRINK_TO_BOOK";
}

char[] func_211()
{
	return "pbl_PDSFW_IG1_P2_DRINK_TO_CIG";
}

char[] func_212()
{
	return "pbl_PDSFW_IG1_P2_DRINK_QUICK_EXIT";
}

char[] func_213()
{
	return "pbl_DRINKING_Cower_Left_Behind";
}

char[] func_214()
{
	return "pbl_DRINKING_Cower_Right_Behind";
}

char[] func_215()
{
	return "pbl_DRINKING_Cower_Right";
}

char[] func_216()
{
	return "pbl_DRINKING_Quick_Stand";
}

char[] func_217()
{
	return "pbl_DRINKING_Run_Front";
}

char[] func_218()
{
	return "pbl_DRINKING_Run_Left";
}

char[] func_219()
{
	return "pbl_PDSFW_IG1_P9_DRINK_SOMETHING_TO_EAT";
}

char[] func_220()
{
	return "pbl_PDSFW_IG1_P8_DRINK_NOT_DRUNK";
}

char[] func_221()
{
	return "pbl_PDSFW_IG1_P5_DRINK_MY_GOD";
}

char[] func_222()
{
	return "pbl_PDSFW_IG1_P3_DRINK_HAVE_A_WOMAN";
}

char[] func_223()
{
	return "pbl_PDSFW_IG1_P2_DRINK_THE_VOTE";
}

char[] func_224()
{
	return "pbl_PDSFW_IG1_P2_DRINK_SWIRL";
}

char[] func_225()
{
	return "pbl_PDSFW_IG1_P2_DRINK_LOOK_AROUND";
}

char[] func_226()
{
	return "pbl_PDSFW_IG1_P2_DRINK_COCAINE";
}

char[] func_227()
{
	return "pbl_PDSFW_IG1_P2_DRINK_ADJUST";
}

char[] func_228()
{
	return "pbl_PDSFW_IG1_P10_DRINK_THIS_WORLD";
}

char[] func_229()
{
	return "pbl_PDSFW_IG1_P9_Little_Shit";
}

char[] func_230()
{
	return "pbl_PDSFW_IG1_P2_SMOKE_TO_BOOK";
}

char[] func_231()
{
	return "pbl_PDSFW_IG1_P2_CIG_TO_DRINK";
}

char[] func_232()
{
	return "pbl_PDSFW_IG1_P2_SMOKE_QUICK_EXIT";
}

char[] func_233()
{
	return "pbl_SMOKING_Cower_Left_Behind";
}

char[] func_234()
{
	return "pbl_SMOKING_Cower_Right_Behind";
}

char[] func_235()
{
	return "pbl_SMOKING_Cower_Right";
}

char[] func_236()
{
	return "pbl_SMOKING_Quick_Stand";
}

char[] func_237()
{
	return "pbl_SMOKING_Run_Front";
}

char[] func_238()
{
	return "pbl_SMOKING_Run_Left";
}

char[] func_239()
{
	return "pbl_PDSFW_IG1_P8_SMOKING_TOM";
}

char[] func_240()
{
	return "pbl_PDSFW_IG1_P7_SMOKING_BURNT_NOVEL";
}

char[] func_241()
{
	return "pbl_PDSFW_IG1_P6_SMOKING_YOU_KNOW";
}

char[] func_242()
{
	return "pbl_PDSFW_IG1_P6_SMOKING_BORING";
}

char[] func_243()
{
	return "pbl_PDSFW_IG1_P5_SMOKING_TOM";
}

char[] func_244()
{
	return "pbl_PDSFW_IG1_P5_SMOKING_DRIED_UP_HAG";
}

char[] func_245()
{
	return "pbl_PDSFW_IG1_P2_SMOKING_SIGH";
}

char[] func_246()
{
	return "pbl_PDSFW_IG1_P2_SMOKING_LOOK_UP_LT";
}

char[] func_247()
{
	return "pbl_PDSFW_IG1_P2_SMOKING_LOOKING_AROUND";
}

char[] func_248()
{
	return "pbl_PDSFW_IG1_P1_CIG_GOOD_WOMAN";
}

char[] func_249()
{
	return "pbl_PDSFW_IG1_P1_CIG_DARLING_DARLING";
}

char[] func_250()
{
	return "pbl_PDSFW_IG1_P10_SMOKING_I_FEEL_LIKE";
}

char[] func_251()
{
	return "pbl_PDSFW_IG1_P9_Life_Is_Hard";
}

void func_252(int iParam0)
{
	if (!__LIB_16__::func_816(iParam0))
	{
		return;
	}
	__LIB_2__::func_451(&(Local_317[iParam0 /*58*/]), 0);
}

bool func_253(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 2)
			{
				iLocal_16 = 2;
				__LIB_9__::func_438(9);
			}
			else
			{
				iLocal_16 = 1;
				__LIB_9__::func_438(8);
			}
			return true;
		case 2:
			if (iParam1 == 0)
			{
				iLocal_16 = 0;
				__LIB_9__::func_438(54);
			}
			else
			{
				iLocal_16 = 1;
				__LIB_9__::func_438(55);
			}
			return true;
		case 1:
			if (iParam1 == 0)
			{
				iLocal_16 = 0;
				__LIB_9__::func_438(30);
			}
			else
			{
				iLocal_16 = 2;
				__LIB_9__::func_438(31);
			}
			return true;
	}
	return false;
}

bool func_254(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_16__::func_816(iParam0))
	{
		return false;
	}
	if (Local_317[iParam0 /*58*/].f_57 == -1)
	{
		return false;
	}
	iVar0 = Local_317[iParam0 /*58*/].f_57;
	if (!__LIB_16__::func_817(iVar0))
	{
		return false;
	}
	*iParam1 = iVar0;
	return true;
}

bool func_255()
{
	if ((((((((iLocal_14 > 2 && iLocal_14 != 4) && (iLocal_14 < 7 || iLocal_14 > 28)) && iLocal_14 != 30) && iLocal_14 != 31) && (iLocal_14 < 45 || iLocal_14 > 52)) && iLocal_14 != 54) && iLocal_14 != 55) && iLocal_14 < 67)
	{
		return true;
	}
	return false;
}

char* func_256()
{
	return "script@specialped@pdsfw_lillianpowell@ig@ig_1@ig_1";
}

float func_257(int iParam0)
{
	if (iParam0 == 6)
	{
		return 0.5f;
	}
	return 0.9f;
}

int func_258()
{
	return iLocal_376;
}

int func_259(int iParam0)
{
	return Local_317[iParam0 /*58*/].f_56;
}

void func_260(int iParam0)
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_255) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(*iParam0, "p_cigaretteholder01x", false) == iLocal_255)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*iParam0, "p_cigaretteholder01x", iLocal_255);
			__LIB_2__::func_919(iLocal_255, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_256) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(*iParam0, "p_cs_book03x", false) == iLocal_256)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*iParam0, "p_cs_book03x", iLocal_256);
			__LIB_2__::func_919(iLocal_256, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_257) && ANIMSCENE::_GET_ANIM_SCENE_OBJECT(*iParam0, "p_glass06x", false) == iLocal_257)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(*iParam0, "p_glass06x", iLocal_257);
			__LIB_2__::func_919(iLocal_257, 1, 1);
		}
	}
}

void func_261(int iParam0)
{
	if (!__LIB_16__::func_816(iParam0))
	{
		return;
	}
	iLocal_376 = iParam0;
}

bool func_262(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_5__::func_771(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19))
	{
		iVar0 = __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19);
	}
	else
	{
		iVar0 = 0;
	}
	if (__LIB_5__::func_771(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20))
	{
		iVar1 = __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20);
	}
	else
	{
		iVar1 = 23;
	}
	if (iVar0 > 0 || iVar1 < 23)
	{
		iVar2 = __LIB_0__::func_41(__LIB_0__::func_23());
		if (iVar0 < iVar1)
		{
			if (iVar2 < iVar0 || iVar2 >= iVar1)
			{
				return true;
			}
		}
		else if (iVar2 >= iVar1 && iVar2 < iVar0)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_263()
{
	return __LIB_1__::func_344("STDRG_LILPLY_BR");
}

void func_264(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "cs_lillianpowell", iLocal_253, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "p_cigaretteholder01x", iLocal_255, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "p_cs_book03x", iLocal_256, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "p_glass06x", iLocal_257, 0);
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "cs_lillianpowell", iLocal_253, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "p_cigaretteholder01x", iLocal_255, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "p_cs_book03x", iLocal_256, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "p_glass06x", iLocal_257, 0);
			if (__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "JOHN", Global_35, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(*iParam0, "b_PlayerArthur", true, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*iParam0, "ARTHUR", Global_35, 0);
			}
			break;
	}
}

void func_265()
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(0, 5, iLocal_276);
	iLocal_276 = iVar0;
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_438(13);
			break;
		case 1:
			__LIB_9__::func_438(14);
			break;
		case 2:
			__LIB_9__::func_438(15);
			break;
		case 3:
			__LIB_9__::func_438(16);
			break;
		case 4:
			__LIB_9__::func_438(17);
			break;
	}
}

void func_266()
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(1, 8, iLocal_312);
	iVar0 = __LIB_0__::func_309(iVar0, 1, 7);
	iLocal_312 = iVar0;
	__LIB_1__::func_265(iLocal_253, "PLAYER_STILL_HANGING", -417894478, Global_35, 1, "LILLIAN_POWELL", iVar0, 1);
}

void func_267()
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(1, 3, iLocal_314);
	iVar0 = __LIB_0__::func_309(iVar0, 1, 2);
	iLocal_314 = iVar0;
	__LIB_1__::func_265(iLocal_253, "PLAYER_LOITERING", -417894478, Global_35, 1, "LILLIAN_POWELL", iVar0, 1);
}

void func_268()
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(1, 6, iLocal_313);
	iVar0 = __LIB_0__::func_309(iVar0, 1, 5);
	iLocal_313 = iVar0;
	__LIB_1__::func_265(iLocal_253, "HEY_IM_TALKING", -417894478, Global_35, 1, "LILLIAN_POWELL", iVar0, 1);
}

int func_269(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!__LIB_16__::func_936(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*iParam0, true, false) };
		if (!__LIB_0__::func_255(iVar1, 0))
		{
			__LIB_16__::func_796(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

bool func_270()
{
	if (__LIB_2__::func_934(137, 0))
	{
		iLocal_254 = __LIB_2__::func_963(137);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_254))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_271(int iParam0, int iParam1, char[4] cParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (!__LIB_16__::func_816(iParam0))
	{
		return;
	}
	if (!__LIB_16__::func_817(iParam1))
	{
		return;
	}
	__LIB_2__::func_602(&(Local_317[iParam0 /*58*/].f_21[iParam1 /*17*/]), cParam2, sParam3, iParam4, iParam5, iParam6, 0, 1, 0);
	if (bParam7)
	{
		__LIB_16__::func_835(&(Local_317[iParam0 /*58*/]), iParam1, 1);
	}
}

void func_272()
{
	__LIB_4__::func_356(&iLocal_253, &(Local_317[0 /*58*/]), &(Local_317[0 /*58*/].f_21), 1, 1);
}

int func_273(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam2, true))
	{
		*iParam1 = 1;
		return 1;
	}
	if (Global_1935630.f_39 > 0 || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
	{
		if (__LIB_13__::func_262(*iParam2, 0, uParam0, iParam1, 0, 0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (*uParam3 < 0 || *uParam3 > 4)
	{
		*uParam3 = 0;
	}
	switch (*uParam3)
	{
		case 0:
			*uParam3++;
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(*iParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(*iParam2)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(*iParam2))
			{
				*iParam1 = 2;
				return 1;
			}
			break;
		case 1:
			*uParam3++;
			if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), *iParam2, 1000))
			{
				*iParam1 = 4;
				return 1;
			}
			break;
		case 2:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_EXPLOSION"), ENTITY::GET_ENTITY_COORDS(*iParam2, false, true), fParam4))
			{
				*iParam1 = 16;
				return 1;
			}
			break;
		case 3:
			*uParam3++;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_FIRE"), ENTITY::GET_ENTITY_COORDS(*iParam2, false, true), fParam4))
			{
				*iParam1 = 16;
				return 1;
			}
			break;
		case 4:
			*uParam3 = 0;
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_POTENTIAL_BLAST"), ENTITY::GET_ENTITY_COORDS(*iParam2, false, true), fParam4))
			{
				*iParam1 = 16;
				return 1;
			}
			break;
	}
	return 0;
}

void func_274()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_259))
	{
		iLocal_259 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(2636.664f, -1230.215f, 52.456f, 0f, 0f, 0f, 22f, 22f, 22f, "RandomEventBlock");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_260))
	{
		iLocal_260 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2636.5f, -1229.468f, 53.84846f, 0f, 0f, 0f, 2f, 2f, 2f, "Trigger");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_262))
	{
		iLocal_262 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2637.288f, -1230.672f, 54.36793f, 0f, 0f, 0f, 4.5f, 2.252276f, 4f, "StayAway");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_261))
	{
		iLocal_261 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2635.716f, -1227.369f, 56.10125f, 0f, 0f, 0f, 6f, 7f, 4f, "ForceActivity");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_263))
	{
		iLocal_263 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2632.984f, -1226.895f, 61.39866f, 0f, 0f, 0f, 18f, 15f, 20f, "Speech");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_264))
	{
		iLocal_264 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2637.288f, -1230.323f, 54.36793f, 0f, 0f, 0f, 3f, 3f, 6f, "Focus");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_266))
	{
		iLocal_266 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("NoSit");
		VOLUME::_0x39816F6F94F385AD(iLocal_266, 2637.194f, -1230.109f, 53.81625f, 0f, 0f, 0f, 4.827326f, 3.346102f, 3.082269f);
		VOLUME::_0x39816F6F94F385AD(iLocal_266, 2636.479f, -1228.052f, 53.87238f, 0f, 0f, 0f, 3.766305f, 1f, 3.082421f);
	}
}

bool func_275()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_263))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_263, true, 0))
	{
		return false;
	}
	return true;
}

char* func_276()
{
	return "pbl_smoking_base_reset";
}

bool func_277()
{
	if (fLocal_258 <= 8f && __LIB_0__::func_27(iLocal_272, 1073741824 /* Float: 2f */))
	{
		return true;
	}
	return false;
}

bool func_278()
{
	vector3 vVar0;
	if (__LIB_0__::func_393(Global_35, iLocal_261, 0, 1))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
		if (vVar0.z <= 58f)
		{
			return true;
		}
	}
	return false;
}

bool func_279()
{
	if (((iLocal_14 == 38 || iLocal_14 == 39) || iLocal_14 == 40) || iLocal_14 == 29)
	{
		return true;
	}
	return false;
}

void func_280(int iParam0)
{
	if (__LIB_0__::func_27(iLocal_272, 8192))
	{
		return;
	}
	if (*iParam0 >= 10 && *iParam0 <= 66)
	{
		if (iLocal_274 < 2)
		{
			if (__LIB_17__::func_102(&iLocal_253, 249295937))
			{
				__LIB_1__::func_683(&iLocal_272, 8192);
			}
		}
	}
}

void func_281(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_17__::func_252(iParam0);
	}
	Local_317[iParam0 /*58*/].f_56 = iParam1;
}

void func_282()
{
	if (__LIB_0__::func_27(iLocal_272, 67108864))
	{
		__LIB_1__::func_681(&iLocal_272, 67108864);
		__LIB_1__::func_681(&iLocal_272, 268435456);
	}
}

void func_283()
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(0, 3, iLocal_275);
	iLocal_275 = iVar0;
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_438(38);
			break;
		case 1:
			__LIB_9__::func_438(39);
			break;
		case 2:
			__LIB_9__::func_438(40);
			break;
	}
}

void func_284()
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(0, (2 - 1), iLocal_269);
	iLocal_269 = iVar0;
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_438(75);
			break;
		case 1:
			__LIB_9__::func_438(76);
			break;
		default:
			break;
	}
}

void func_285()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	fVar2 = 0f;
	if (__LIB_0__::func_27(iLocal_272, 2097152))
	{
		switch (iLocal_16)
		{
			case 2:
				__LIB_1__::func_683(&iLocal_272, 4194304);
				__LIB_9__::func_438(68);
				return;
			case 1:
				__LIB_1__::func_683(&iLocal_272, 4194304);
				__LIB_9__::func_438(50);
				return;
			case 0:
				__LIB_1__::func_683(&iLocal_272, 4194304);
				__LIB_9__::func_438(22);
				return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_253) && ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		iVar0 = __LIB_3__::func_547(iLocal_253, Global_35, 0f);
		iVar1 = __LIB_3__::func_547(iLocal_253, Global_35, 1f);
		fVar2 = __LIB_0__::func_665(iLocal_253, Global_35, 1, 1);
	}
	if (iVar0 == 0)
	{
		if (iVar1 == 3)
		{
			iVar3 = 1;
		}
		else if (iVar1 == 2)
		{
			iVar3 = 0;
		}
	}
	else if (iVar0 == 1)
	{
		if (iVar1 == 3)
		{
			iVar3 = 3;
		}
		else if (iVar1 == 2)
		{
			iVar3 = 2;
		}
	}
	switch (iVar3)
	{
		case 0:
			__LIB_1__::func_683(&iLocal_272, 4194304);
			switch (iLocal_16)
			{
				case 2:
					if (fVar2 >= 4.58f)
					{
						__LIB_9__::func_438(71);
					}
					else
					{
						__LIB_9__::func_438(69);
					}
					break;
				case 1:
					if (fVar2 >= 4.58f)
					{
						__LIB_9__::func_438(49);
					}
					else
					{
						__LIB_9__::func_438(47);
					}
					break;
				case 0:
					if (fVar2 >= 4.58f)
					{
						__LIB_9__::func_438(25);
					}
					else
					{
						__LIB_9__::func_438(23);
					}
					break;
			}
			break;
		case 1:
			__LIB_1__::func_683(&iLocal_272, 4194304);
			switch (iLocal_16)
			{
				case 2:
					if (fVar2 >= 4.58f)
					{
						__LIB_9__::func_438(71);
					}
					else
					{
						__LIB_9__::func_438(70);
					}
					break;
				case 1:
					if (fVar2 >= 4.58f)
					{
						__LIB_9__::func_438(49);
					}
					else
					{
						__LIB_9__::func_438(48);
					}
					break;
				case 0:
					if (fVar2 >= 4.58f)
					{
						__LIB_9__::func_438(25);
					}
					else
					{
						__LIB_9__::func_438(24);
					}
					break;
			}
			break;
		case 2:
			__LIB_1__::func_683(&iLocal_272, 4194304);
			switch (iLocal_16)
			{
				case 2:
					__LIB_9__::func_438(74);
					break;
				case 1:
					__LIB_9__::func_438(52);
					break;
				case 0:
					__LIB_9__::func_438(28);
					break;
			}
			break;
		case 3:
			__LIB_1__::func_683(&iLocal_272, 4194304);
			switch (iLocal_16)
			{
				case 2:
					__LIB_9__::func_438(73);
					break;
				case 1:
					__LIB_9__::func_438(51);
					break;
				case 0:
					__LIB_9__::func_438(27);
					break;
			}
			break;
	}
}

int func_286()
{
	if (!__LIB_17__::func_270())
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_253) && ENTITY::DOES_ENTITY_EXIST(iLocal_254))
	{
		__LIB_0__::func_928(&uLocal_115, iLocal_254, "NBX_Bartender", 0);
		__LIB_0__::func_928(&uLocal_115, iLocal_253, "LILLIAN_POWELL", 0);
		__LIB_1__::func_683(&iLocal_272, 262144);
		return 1;
	}
	return 0;
}

bool func_287(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_683(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_683(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_683(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_683(iParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_683(iParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_683(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_5__::func_219(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_5__::func_219(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_683(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > iParam2->f_17)
			{
				if (__LIB_16__::func_973(&iParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || __LIB_17__::func_269(&iParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(iParam2->f_13)))
					{
						__LIB_0__::func_268(&(iParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(iParam2->f_13)) >= iParam2->f_16)
					{
						__LIB_0__::func_37(&(iParam2->f_13));
						__LIB_1__::func_683(iParam2, 512);
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(iParam2->f_13)))
					{
						__LIB_0__::func_37(&(iParam2->f_13));
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_683(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_683(iParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_683(iParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_683(iParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*iParam2, 2) || __LIB_0__::func_27(*iParam2, 4)) || __LIB_0__::func_27(*iParam2, 8)) || __LIB_0__::func_27(*iParam2, 16)) || __LIB_0__::func_27(*iParam2, 32)) || __LIB_0__::func_27(*iParam2, 64)) || __LIB_0__::func_27(*iParam2, 128)) || __LIB_0__::func_27(*iParam2, 256)) || __LIB_0__::func_27(*iParam2, 512)) || __LIB_0__::func_27(*iParam2, 1024)) || __LIB_0__::func_27(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

char* func_288()
{
	return "pbl_drinking_base_reset";
}

void func_289(int iParam0, bool bParam1)
{
	if (!__LIB_16__::func_816(iParam0))
	{
		return;
	}
	if (__LIB_17__::func_258() == iParam0)
	{
		if (bParam1)
		{
			if (__LIB_17__::func_259(iParam0) != 1)
			{
				__LIB_17__::func_281(iParam0, 1, 1);
			}
		}
		else if (__LIB_17__::func_259(iParam0) != __LIB_2__::func_340(3, 0, 0))
		{
			__LIB_17__::func_281(iParam0, __LIB_2__::func_340(3, 0, 0), 1);
		}
	}
}

int func_290(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	if (*uParam2)
	{
		return 1;
	}
	if (!__LIB_17__::func_177(iParam1, &iVar0))
	{
		return 0;
	}
	if ((uParam0[iVar0 /*36*/])->f_35)
	{
		*uParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && (ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar0 /*36*/], true) || ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar0 /*36*/], true, false)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam0[iVar0 /*36*/])->f_2))
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], (uParam0[iVar0 /*36*/])->f_2);
			*uParam2 = 1;
		}
		else
		{
			ANIMSCENE::RESET_ANIM_SCENE((*uParam0)[iVar0 /*36*/], 0);
			*uParam2 = 1;
		}
	}
	return 1;
}

bool func_291(var uParam0, var uParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	uVar0 = *uParam1;
	if (bParam2)
	{
		if (__LIB_17__::func_56(uParam0, 2))
		{
			return true;
		}
		if (__LIB_17__::func_56(uParam0, 1))
		{
			return true;
		}
	}
	if (!__LIB_17__::func_177(uVar0, &iVar1))
	{
		return true;
	}
	if ((uParam0[iVar1 /*36*/])->f_35)
	{
		return true;
	}
	if (uParam1->f_26 == 1)
	{
		return true;
	}
	else if (uParam1->f_26 == 2)
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_12))
	{
		uParam1->f_26 = 1;
		return true;
	}
	if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar1 /*36*/]) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING((*uParam0)[iVar1 /*36*/], true)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED((*uParam0)[iVar1 /*36*/], true, false))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D((*uParam0)[iVar1 /*36*/], uParam1->f_12))
		{
			uParam1->f_26 = 1;
			return true;
		}
		else
		{
			uParam1->f_26 = 2;
			return false;
		}
	}
	return false;
}

int func_292(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0->f_209;
	if (uParam0->f_209.f_27)
	{
		return 1;
	}
	if (__LIB_17__::func_177(iVar0, &iVar1))
	{
		if (__LIB_16__::func_829(uParam0[iVar1 /*36*/], uParam0->f_209.f_12) || uParam0->f_209.f_26 == 1)
		{
			uParam0->f_209.f_27 = 1;
			return 1;
		}
	}
	return 0;
}

void func_293(var uParam0, int iParam1)
{
	__LIB_16__::func_980(&(uParam0->f_352), iParam1);
}

void func_294(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_349 = iParam1;
	__LIB_17__::func_180(uParam0, 0, 1);
	if (bParam2)
	{
		__LIB_17__::func_51(uParam0);
	}
}

bool func_295(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		BUILTIN::WAIT(0);
		if (!bParam7)
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			*uParam0 = __LIB_8__::func_931(iParam1, vParam2, fParam5, 0, 1, bParam6, 1, 1, bParam8, 1, 1, 0, 0);
		}
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return false;
	}
	if (PED::_0xA0BC8FAED8CFEB3C(*uParam0))
	{
		return true;
	}
	return false;
}

bool func_296(int iParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (uParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_581(uParam2, 2);
			}
		}
		if (uParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_581(uParam2, 4);
			}
		}
		if (uParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_581(uParam2, 8);
			}
		}
		if (uParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_581(uParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (uParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_581(uParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_581(uParam2, 32);
				}
			}
		}
		if (uParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_14__::func_432(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_14__::func_432(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_581(uParam2, 64);
					}
				}
			}
		}
		if (uParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > uParam2->f_17)
			{
				if (__LIB_16__::func_934(&uParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || __LIB_16__::func_949(&uParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_268(&(uParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(uParam2->f_13)) >= uParam2->f_16)
					{
						__LIB_0__::func_37(&(uParam2->f_13));
						__LIB_1__::func_581(uParam2, 512);
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(uParam2->f_13)))
					{
						__LIB_0__::func_37(&(uParam2->f_13));
					}
					uParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (uParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_581(uParam2, 1024);
			}
		}
		if (uParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_581(uParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_581(uParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_581(uParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*uParam2, 2) || __LIB_0__::func_27(*uParam2, 4)) || __LIB_0__::func_27(*uParam2, 8)) || __LIB_0__::func_27(*uParam2, 16)) || __LIB_0__::func_27(*uParam2, 32)) || __LIB_0__::func_27(*uParam2, 64)) || __LIB_0__::func_27(*uParam2, 128)) || __LIB_0__::func_27(*uParam2, 256)) || __LIB_0__::func_27(*uParam2, 512)) || __LIB_0__::func_27(*uParam2, 1024)) || __LIB_0__::func_27(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

void func_297(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	var uVar0[1];
	var uVar2[2];
	if (ENTITY::IS_ENTITY_DEAD(*uParam2))
	{
		return;
	}
	if (Global_1935630.f_12)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	uVar2[0] = Global_35;
	uVar2[1] = *uParam2;
	if (!__LIB_0__::func_75(uParam4))
	{
		__LIB_0__::func_268(uParam4, 0f);
	}
	else if (__LIB_1__::func_871(uParam4) > 1000)
	{
		if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
		{
			if (__LIB_17__::func_184(uParam0, &uVar0, &uVar2, 5, iParam1, 0, 0, -1) > 0)
			{
				uParam3->f_3 = uVar0[0];
				__LIB_0__::func_268(uParam4, 0f);
			}
			else
			{
				return;
			}
		}
		else
		{
			uParam3->f_3 = Global_35;
			__LIB_0__::func_268(uParam4, 0f);
		}
	}
	*uParam3 = { 0f, 0f, 0f };
	uParam3->f_4 = 21030;
	uParam3->f_8 = 4;
	uParam3->f_17 = 2;
	uParam3->f_18 = 1;
	uParam3->f_19 = 3;
	uParam3->f_20 = 1;
	uParam3->f_21 = 3;
	uParam3->f_22 = 1;
	uParam3->f_13 = 3;
	uParam3->f_7 = iParam5;
	_NAMESPACE29::_0x66F9EB44342BB4C5(*uParam2, uParam3);
}

void func_298(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 330, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 413, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
	}
}

int func_299(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	if (((PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, bParam6, bParam7) && (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iVar0))) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == *uParam0)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 0, iParam1);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 0, iParam2);
		PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 7, 0, iParam3);
		return 1;
	}
	if (bParam4)
	{
		__LIB_6__::func_675();
	}
	return 0;
}

void func_300(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (__LIB_0__::func_1(*uParam2, uParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && __LIB_8__::func_964(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = __LIB_0__::func_23();
	__LIB_0__::func_7(uParam2, uParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

int func_301(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!__LIB_17__::func_168(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!__LIB_0__::func_255(iVar1, 0))
		{
			__LIB_16__::func_796(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

void func_302(int iParam0, int iParam1)
{
	iParam0->f_203 = iParam1;
}

void func_303(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3) || !ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return;
	}
	if ((MISC::GET_FRAME_COUNT() % 40) == 0)
	{
		uParam0->f_201 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true);
	}
}

void func_304(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE((*uParam0)[iVar0 /*36*/]);
		}
		iVar0++;
	}
}

void func_305(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 2)
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_58 = iParam2;
}

int func_306(int iParam0)
{
	return iParam0->f_160;
}

bool func_307(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 4)
	{
		return false;
	}
	return true;
}

void func_308(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar0 /*36*/], false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE((*uParam0)[iVar0 /*36*/], false);
		}
		iVar0++;
	}
}

int func_309(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 4)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

void func_310(var uParam0)
{
	uParam0->f_316 = 0;
}

void func_311(int iParam0, int iParam1)
{
	if (!__LIB_16__::func_817(iParam1))
	{
		return;
	}
	__LIB_2__::func_451(&(iParam0->f_41[iParam1 /*59*/]), 0);
}

bool func_312(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_315, iParam1);
}

void func_313(var uParam0)
{
	uParam0->f_315 = 0;
}

bool func_314(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_316, iParam1);
}

void func_315(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(uParam0, 4194304);
	}
	else
	{
		__LIB_0__::func_8(uParam0, 4194304);
	}
}

bool func_316(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(iParam0->f_197, iParam1);
}

void func_317(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_16__::func_817(iParam1))
	{
		return;
	}
	iParam0->f_41[iParam1 /*59*/].f_57 = iParam2;
}

void func_318(int iParam0, int iParam1)
{
	if (!__LIB_16__::func_817(iParam1))
	{
		return;
	}
	iParam0->f_160 = iParam1;
}

bool func_319(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_16__::func_817(iParam1))
	{
		return false;
	}
	if (iParam0->f_41[iParam1 /*59*/].f_58 == -1)
	{
		return false;
	}
	iVar0 = iParam0->f_41[iParam1 /*59*/].f_58;
	if (!__LIB_16__::func_817(iVar0))
	{
		return false;
	}
	*iParam2 = iVar0;
	return true;
}

bool func_320(var uParam0, var uParam1)
{
	__LIB_16__::func_824(uParam1, &(uParam0->f_173));
	return true;
}

void func_321(var uParam0, bool bParam1)
{
	if (bParam1 || !__LIB_0__::func_75(uParam0))
	{
		__LIB_16__::func_869(uParam0);
	}
}

void func_322(int iParam0, int iParam1, int iParam2, char[4] cParam3, char* sParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	if (!__LIB_16__::func_817(iParam1))
	{
		return;
	}
	if (!__LIB_16__::func_817(iParam2))
	{
		return;
	}
	__LIB_2__::func_602(&(iParam0->f_41[iParam1 /*59*/].f_21[iParam2 /*17*/]), cParam3, sParam4, iParam5, iParam6, iParam7, 0, 1, 0);
	if (bParam8)
	{
		__LIB_16__::func_835(&(iParam0->f_41[iParam1 /*59*/]), iParam2, 1);
	}
}

bool func_323(var uParam0, int iParam1, var uParam2, vector3 vParam3, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (*uParam2)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return true;
	}
	if (!bParam8)
	{
		*uParam0 = __LIB_8__::func_931(iParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, 1, 0, 0, 0, 0);
	}
	else
	{
		*uParam0 = __LIB_8__::func_931(iParam1, vParam3, iParam6, 0, 1, bParam7, 1, 1, bParam9, 1, 1, 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		*uParam2 = 1;
		return true;
	}
	return false;
}

void func_324(int iParam0)
{
	if (__LIB_0__::func_58(iParam0))
	{
		__LIB_17__::func_297(&(iParam0->f_163), iParam0->f_164, &(iParam0->f_3), &(iParam0->f_165), &(iParam0->f_190), 5000);
	}
}

struct<4> func_325(int iParam0)
{
	return __LIB_0__::func_429(joaat("CHARACTER"), __LIB_0__::func_217(), -1591664384, iParam0);
}

bool func_326(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<4> Var4;
	Var4 = __LIB_0__::func_790(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	DATAFILE::_0x91DED5DD64BB2691(&Var4);
	if (!DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		return false;
	}
	DATAFILE::_0xA63CD20F19B961AB(&bVar2, &Var4, -1516819610);
	DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804.f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		__LIB_0__::func_947(uParam0, __LIB_0__::func_461(iVar0), 1);
	}
	while (DATAFILE::_0xED4413CEE1BF142C(&Var4))
	{
		if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = __LIB_0__::func_161(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, joaat("COMPONENT")))
			{
			}
			else
			{
				Global_1946804.f_2612[Global_1946804.f_2652] = iVar1;
				Global_1946804.f_2652++;
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bParam5)
				{
					if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = joaat("BASE");
					}
					else
					{
						Jump @343; //curOff = 278
						if (!DATAFILE::_0x44B3A36933AC009C(&iVar0, &Var4, 1194786549))
						{
							if (__LIB_0__::func_948(iVar3) && __LIB_0__::func_220(uParam0->f_1[iVar1 /*3*/], iVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804.f_2652)
						{
							__LIB_14__::func_14(uParam0, uParam0->f_1[Global_1946804.f_2612[iVar1] /*3*/], Global_1946804.f_2612[iVar1], 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

int func_327(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!__LIB_16__::func_765(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_328(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	if (__LIB_0__::func_1(*iParam2, iParam3))
	{
		return;
	}
	Global_40.f_11623[iParam0 /*8*/].f_6++;
	if (Global_40.f_11623[iParam0 /*8*/].f_6 == 1 && __LIB_8__::func_964(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION"))) < 5)
	{
		__LIB_0__::func_15(__LIB_0__::func_14(joaat("SPECIAL_PED_INTERACTION")), 1);
	}
	Global_40.f_11623[iParam0 /*8*/].f_3 = __LIB_0__::func_23();
	__LIB_1__::func_336(iParam2, iParam3);
	Global_1396257[iParam0 /*638*/].f_631 = 1;
}

bool func_329(int iParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, var uParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return __LIB_2__::func_214(iParam0, iParam1, sParam2, sParam3, fParam4, uParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

bool func_330(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (iParam2->f_1)
		{
			if (((__LIB_0__::func_64(0) == 1 || __LIB_0__::func_64(0) == 2) || __LIB_0__::func_64(0) == 8) || __LIB_0__::func_1(Global_1935630, 2048))
			{
				__LIB_1__::func_683(iParam2, 2);
			}
		}
		if (iParam2->f_2)
		{
			if (__LIB_0__::func_64(0) == 11)
			{
				__LIB_1__::func_683(iParam2, 4);
			}
		}
		if (iParam2->f_4)
		{
			if (__LIB_0__::func_64(0) == 6)
			{
				__LIB_1__::func_683(iParam2, 8);
			}
		}
		if (iParam2->f_5)
		{
			if (Global_1394141.f_1328)
			{
				__LIB_1__::func_683(iParam2, 16);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (iParam2->f_6)
		{
			if (!(__LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19) == 0 && __LIB_0__::func_41(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20) == 23))
			{
				iVar0 = __LIB_0__::func_23();
				iVar1 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_19;
				iVar2 = Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_20;
				if (__LIB_0__::func_41(iVar2) > __LIB_0__::func_41(iVar1))
				{
					if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 || __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
					{
						__LIB_1__::func_683(iParam2, 32);
					}
				}
				else if (__LIB_0__::func_41(iVar0) > __LIB_0__::func_41(iVar2) + 1 && __LIB_0__::func_41(iVar0) < __LIB_0__::func_41(iVar1))
				{
					__LIB_1__::func_683(iParam2, 32);
				}
			}
		}
		if (iParam2->f_7)
		{
			bVar3 = false;
			if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40 != 4)
			{
				if (Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0] != -1 || Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1] != -1)
				{
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
					{
						bVar3 = true;
					}
				}
				if (!bVar3)
				{
					if (!__LIB_16__::func_784(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_40))
					{
						__LIB_1__::func_683(iParam2, 64);
					}
				}
			}
		}
		if (iParam2->f_8)
		{
			if (MISC::GET_GAME_TIMER() > iParam2->f_17)
			{
				if (__LIB_16__::func_850(&uParam3, &(iParam2->f_18), iParam2->f_11, iParam2->f_12) || __LIB_16__::func_858(&uParam3, &(iParam2->f_20), &(iParam2->f_19), iParam2->f_11, iParam2->f_12, 2048))
				{
					if (!__LIB_0__::func_75(&(iParam2->f_13)))
					{
						__LIB_0__::func_268(&(iParam2->f_13), 0f);
					}
					else if (__LIB_1__::func_871(&(iParam2->f_13)) >= iParam2->f_16)
					{
						__LIB_0__::func_37(&(iParam2->f_13));
						__LIB_1__::func_683(iParam2, 512);
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
				else
				{
					if (__LIB_0__::func_75(&(iParam2->f_13)))
					{
						__LIB_0__::func_37(&(iParam2->f_13));
					}
					iParam2->f_17 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (iParam2->f_9)
		{
			if (__LIB_2__::func_7())
			{
				__LIB_1__::func_683(iParam2, 1024);
			}
		}
		if (iParam2->f_10)
		{
			if (__LIB_16__::func_785())
			{
				__LIB_1__::func_683(iParam2, 2048);
			}
		}
		if (__LIB_0__::func_1(Global_1935630, 16384) || Global_1430231.f_4)
		{
			__LIB_1__::func_683(iParam2, 128);
		}
		if (__LIB_8__::func_747(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_683(iParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_27(*iParam2, 2) || __LIB_0__::func_27(*iParam2, 4)) || __LIB_0__::func_27(*iParam2, 8)) || __LIB_0__::func_27(*iParam2, 16)) || __LIB_0__::func_27(*iParam2, 32)) || __LIB_0__::func_27(*iParam2, 64)) || __LIB_0__::func_27(*iParam2, 128)) || __LIB_0__::func_27(*iParam2, 256)) || __LIB_0__::func_27(*iParam2, 512)) || __LIB_0__::func_27(*iParam2, 1024)) || __LIB_0__::func_27(*iParam2, 2048))
	{
		return true;
	}
	return false;
}

void func_331()
{
	int iVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	__LIB_3__::func_150(Global_35, &iVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_4__::func_144(0);
	__LIB_1__::func_835(7);
	__LIB_3__::func_916(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_3__::func_916(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_3__::func_916(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_3__::func_228(Global_35, &iVar0);
}

char* func_332()
{
	return "script@specialped@pdtmd_timothy_donahue@ig@ig_1@ig_1_selling_books";
}

void func_333(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_0x6F1F0B17109309DA(iParam0, sParam1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam1, bParam2, false);
	}
}

bool func_334(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bVar0 = ANIMSCENE::_IS_ANIM_SCENE_LOADED(*iParam0, true, false);
	bVar1 = ANIMSCENE::_IS_ANIM_SCENE_STARTED(*iParam0, false);
	if (bVar0 || bVar1)
	{
		return true;
	}
	bVar3 = ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*iParam0);
	bVar2 = ANIMSCENE::_IS_ANIM_SCENE_LOADING(*iParam0, true);
	if ((bVar3 && !bVar0) && !bVar2)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(*iParam0);
		return false;
	}
	if (bVar2)
	{
	}
	if (!bVar3)
	{
	}
	return false;
}

char[] func_335()
{
	return "pbl_p2_loop01";
}

char[] func_336()
{
	return "pbl_p2_loop02";
}

char[] func_337()
{
	return "pbl_p3_loop01";
}

char[] func_338()
{
	return "pbl_p4_loop01";
}

char[] func_339()
{
	return "pbl_p5_loop01";
}

char[] func_340()
{
	return "pbl_p6_loop01";
}

char[] func_341()
{
	return "pbl_p6_loop02";
}

char[] func_342()
{
	return "pbl_p1_loop02";
}

char[] func_343()
{
	return "pbl_p7_loop01";
}

char[] func_344()
{
	return "pbl_p8_p1_loop01";
}

char[] func_345()
{
	return "pbl_p1_loop03";
}

char[] func_346()
{
	return "pbl_p8_p2_loop01";
}

char[] func_347()
{
	return "pbl_p9_p1_loop01";
}

char[] func_348()
{
	return "pbl_p9_p2_loop01";
}

char[] func_349()
{
	return "pbl_p1_loop04";
}

char[] func_350()
{
	return "pbl_p9_p2_loop02";
}

char[] func_351()
{
	return "pbl_p10_loop01";
}

char[] func_352()
{
	return "pbl_p1_loop05";
}

char[] func_353()
{
	return "pbl_p11_P2_loop01";
}

char[] func_354()
{
	return "pbl_p12_loop01";
}

char[] func_355()
{
	return "pbl_p13_loop01";
}

char[] func_356()
{
	return "pbl_p1_loop06";
}

struct<2> func_357(int iParam0)
{
	struct<2> Var0;
	switch (iParam0)
	{
		case 0:
			Var0 = "INTERACT_GREET";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 1:
			Var0 = "INTERACT_INSULT";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
		case 2:
			Var0 = "TM1_UC_BUY";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_POS");
			break;
		case 3:
			Var0 = "GREET_NEG";
			Var0.f_1 = joaat("INPUT_INTERACT_LOCKON_NEG");
			break;
	}
	return Var0;
}

void func_358(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	bool bVar0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		bVar0 = true;
	}
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		if (__LIB_0__::func_393(Global_35, iParam1, 0, 1) || __LIB_0__::func_393(Global_35, iParam2, 0, 1))
		{
			if (!__LIB_0__::func_1(*iParam3, iParam4))
			{
				TASK::TASK_LOOK_AT_ENTITY(*uParam0, Global_35, -1, 2108, 51, 0);
				__LIB_1__::func_336(iParam3, iParam4);
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (__LIB_0__::func_1(*iParam3, iParam4))
		{
			__LIB_3__::func_10(*uParam0);
			__LIB_0__::func_516(iParam3, iParam4);
		}
	}
}

char* func_359()
{
	if (__LIB_0__::func_113())
	{
		return "ARTHUR";
	}
	else if (__LIB_0__::func_181())
	{
		return "JOHN";
	}
	return "";
}

bool func_360(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, float fParam5, int iParam6)
{
	int iVar0;
	vector3 vVar1;
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam1, sParam2, &vVar1, false, sParam3, 2))
	{
		if (!bLocal_14)
		{
			if (!__LIB_0__::func_163(Global_35, 242628503))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_SWAP_WEAPON(0, 0, 1, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, iParam6, fParam5, 4194304, vVar1.f_3.f_2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam0, 0, -1f, -1f, -1f);
				TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, 1069379748 /* Float: 1.48f */, 0, 0, 20000, -1082130432 /* Float: -1f */);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar0);
				PED::SET_PED_KEEP_TASK(Global_35, true);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				bLocal_14 = true;
			}
		}
		else if ((bParam4 && !__LIB_0__::func_163(Global_35, 242628503)) || (((!bParam4 && ENTITY::IS_ENTITY_AT_COORD(Global_35, vVar1, 2.5f, 2.5f, 3f, false, true, 0)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35)) && !AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)))
		{
			bLocal_14 = false;
			return true;
		}
	}
	return false;
}

char* func_361(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_113())
	{
		if (bParam1)
		{
			*iParam0 = 2;
			return "INSULT_DONAHUE_CONV_PART1";
		}
		else
		{
			*iParam0 = 1;
			return "INSULT_DONAHUE_CONV_PART1";
		}
	}
	else if (bParam1)
	{
		*iParam0 = 8;
		return "INSULT_MALE_CONV_PART1";
	}
	else
	{
		*iParam0 = 16;
		return "INSULT_MALE_CONV_PART1";
	}
	return "INSULT_MALE_CONV_PART1";
}

void func_362(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!__LIB_0__::func_75(&uLocal_19))
		{
			__LIB_0__::func_268(&uLocal_19, 0f);
		}
		else if (__LIB_1__::func_871(&uLocal_19) >= 1000)
		{
			fLocal_17 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), __LIB_1__::func_974(PLAYER::GET_PLAYER_INDEX()), false);
			__LIB_0__::func_37(&uLocal_19);
		}
	}
}

int func_363(int iParam0, int iParam1, var uParam2, float fParam3)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0) && VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam0, true, 0) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam1, true, 0))
		{
			if (!__LIB_0__::func_75(uParam2))
			{
				__LIB_1__::func_283(uParam2, 1);
			}
			else if (__LIB_0__::func_264(uParam2) > fParam3)
			{
				__LIB_0__::func_37(uParam2);
				return 1;
			}
		}
		else
		{
			__LIB_0__::func_37(uParam2);
			return 0;
		}
	}
	return 2;
}

int func_364(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_9__::func_844(1, 5, 3);
	if ((MISC::IS_BIT_SET(iParam0, 1) && MISC::IS_BIT_SET(iParam0, 2)) && MISC::IS_BIT_SET(iParam0, 4))
	{
		iParam0 = 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, iVar0))
	{
		return iVar0;
	}
	return -1;
}

void func_365(int* iParam0, var uParam1, var uParam2)
{
	int iVar0;
	char* sVar1;
	var uVar2;
	iVar0 = __LIB_2__::func_511(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (uParam1[iVar0 /*17*/])->f_13;
		uVar2 = (uParam1[iVar0 /*17*/])->f_15;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			__LIB_17__::func_329(Global_35, *uParam2, sVar1, "", -1082130432 /* Float: -1f */, uVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

int func_366(var uParam0, var uParam1, var uParam2, float fParam3, float fParam4, int iParam5)
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	vVar2 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) + vVar2 * Vector(fParam3, fParam3, fParam3) };
	if (!__LIB_16__::func_868(uParam2, &iVar1, vVar5, fParam3, fParam4))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			POPULATION::_0x74C2B3DC0B294102(*uParam1);
			POPULATION::_0xA1CFB35069D23C23(*uParam1);
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
		return 0;
	}
	else
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			fVar0 = (fParam4 + 1f);
			*uParam1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar5, 0f, 0f, 0f, fVar0, fVar0, fVar0, "SPDClearWagonsMount");
			POPULATION::_0xB56D41A694E42E86(*uParam1, iParam5 | 2228255, 0, 0, -1, -1, 10);
			POPULATION::_0x18262CAFEBB5FBE1(*uParam1, iParam5, 0, 0, -1, -1, 0);
		}
		vVar8 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
		if (!__LIB_0__::func_255(iVar1, 0))
		{
			__LIB_16__::func_796(&iVar1, vVar8, 1083179008 /* Float: 4.5f */);
		}
		return 1;
	}
	return 0;
}

void func_367(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE((*uParam0)[iVar0 /*36*/]);
		}
		iVar0++;
	}
}

int func_368(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam0;
	iVar1 = -1;
	if (iVar0 >= 0 && iVar0 < 1)
	{
		iVar1 = iVar0;
	}
	return iVar1;
}

bool func_369(int iParam0)
{
	int iVar0;
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 1)
	{
		return false;
	}
	return true;
}

void func_370(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST((*uParam0)[iVar0 /*36*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED((*uParam0)[iVar0 /*36*/], false))
		{
			ANIMSCENE::ABORT_ANIM_SCENE((*uParam0)[iVar0 /*36*/], false);
		}
		iVar0++;
	}
}

void func_371(var uParam0)
{
	uParam0->f_208 = 0;
}

bool func_372(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_207, iParam1);
}

void func_373(var uParam0)
{
	uParam0->f_207 = 0;
}

bool func_374(var uParam0, int iParam1)
{
	return __LIB_0__::func_27(uParam0->f_208, iParam1);
}

bool func_375(var uParam0, var uParam1)
{
	__LIB_16__::func_824(uParam1, &(uParam0->f_65));
	return true;
}

int func_376(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 105;
		case 1:
			return 76;
		case 4:
			return 69;
		case 2:
			return 78;
		case 6:
			return 26;
		case 3:
			return 5;
		case 5:
			return 38;
		case 7:
			return 92;
		case 8:
			return 120;
		case 9:
			return 126;
		case 10:
			return 115;
		default:
			break;
	}
	return -1;
}

bool func_377(var uParam0)
{
	return __LIB_0__::func_1(uParam0->f_318, 1);
}

int func_378(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			break;
		case 1:
			return __LIB_11__::func_826(iParam1);
		default:
			break;
	}
	return -1;
}

bool func_379(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			if (__LIB_3__::func_751(21))
			{
				return false;
			}
			return true;
		case 76:
			return true;
		case 69:
			return true;
		case 26:
			return true;
		case 5:
			return true;
		case 38:
			return true;
		case 120:
			return false;
		case 126:
			return false;
		case 115:
			return false;
		case 92:
			return false;
	}
	return false;
}

void func_380(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			__LIB_14__::func_222(Global_40.f_11922[iVar0], 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_716(1);
	}
}

bool func_381(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < Global_1898330)
	{
		if (__LIB_0__::func_6(Global_1898330[iVar0]) && __LIB_0__::func_702(Global_1898330[iVar0]))
		{
			iVar1 = __LIB_0__::func_700(Global_1898330[iVar0]);
			if (iVar1 == 1 || iVar1 == 8)
			{
				if ((__LIB_3__::func_919(iVar0, 64) || __LIB_3__::func_919(iVar0, 16)) || __LIB_3__::func_919(iVar0, 32))
				{
					if (!__LIB_0__::func_1(uParam0->f_318, 8))
					{
						__LIB_0__::func_7(&(uParam0->f_318), 8);
					}
					return false;
				}
			}
		}
		iVar0++;
	}
	if (__LIB_0__::func_1(uParam0->f_318, 8))
	{
	}
	return true;
}

void func_382(int iParam0, float fParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!__LIB_0__::func_293(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = __LIB_0__::func_198(BUILTIN::CEIL(Global_40.f_11095[iParam0]));
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(Global_35, __LIB_3__::func_130(iParam0), iVar0);
	__LIB_7__::func_557(__LIB_0__::func_657(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= __LIB_3__::func_131(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		__LIB_1__::func_240(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		__LIB_1__::func_240(__LIB_3__::func_132(iParam0), 1);
	}
	sVar1 = __LIB_3__::func_133(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

bool func_383()
{
	int iVar0;
	iVar0 = 0;
	return iVar0;
}

void func_384(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

void func_385()
{
	var uVar0;
	NETWORK::NETWORK_SET_RICH_PRESENCE(0, &uVar0, 1, 0);
}

void func_386(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = Global_1572887.f_282.f_1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 15)
	{
		if (MISC::IS_BIT_SET(iVar0, iVar1))
		{
		}
		iVar1++;
	}
	if (Global_1572887.f_282.f_2 != -1)
	{
	}
	if (Global_1572887.f_282.f_3 != -1)
	{
	}
	if (Global_1572887.f_282.f_4 != -1)
	{
	}
	if (Global_1572887.f_282.f_5 != -1)
	{
	}
	if (Global_1572887.f_282.f_6 != -1)
	{
	}
	if (Global_1572887.f_282.f_8 != 0)
	{
	}
}

var func_387(var uParam0, int iParam1)
{
	var uVar0;
	uParam0->f_2 = iParam1;
	uVar0 = DATAFILE::_DATAFILE_GET_NUM_NODES(uParam0);
	return uVar0;
}

bool func_388(var uParam0, int iParam1)
{
	bool bVar0;
	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(uParam0->f_1), uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_389(var uParam0, int iParam1, var uParam2)
{
	bool bVar0;
	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_STRING(uParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_390(var uParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	uParam0->f_2 = iParam1;
	bVar0 = DATAFILE::_DATAFILE_GET_BOOL(bParam2, uParam0);
	if (bVar0)
	{
		return true;
	}
	return false;
}

void func_391(var uParam0, int iParam1)
{
	uParam0->f_4 = (uParam0->f_4 || iParam1);
}

bool func_392(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

bool func_393()
{
	if (NETWORK::_0xFBE782B3165AC8EC(1377133516))
	{
		return true;
	}
	return false;
}

void func_394()
{
	int iVar0;
	iVar0 = (MISC::GET_GAME_TIMER() / 1000);
	Global_1898068.f_6 = iVar0;
}

int func_395(int iParam0)
{
	struct<4> Var0;
	Var0 = Global_1058888.f_43923.f_283.f_4898;
	Var0.f_2 = 1593794963;
	Var0.f_3 = iParam0;
	return DATAFILE::_DATAFILE_GET_NUM_NODES(&Var0);
}

bool func_396(int iParam0, int iParam1, var uParam2, float fParam3)
{
	struct<5> Var0;
	Var0 = Global_1058888.f_43923.f_283.f_4898;
	Var0.f_2 = 160165798;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 1576253240;
		DATAFILE::_DATAFILE_GET_VECTOR(uParam2, &Var0);
		Var0.f_2 = -55481687;
		DATAFILE::_DATAFILE_GET_FLOAT(fParam3, &Var0);
		return true;
	}
	return false;
}

void func_397(bool bParam0)
{
	if (bParam0)
	{
		__LIB_16__::func_326(128);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_16__::func_327(2);
	}
	__LIB_16__::func_328(1);
}

void func_398(var uParam0)
{
	int iVar0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0, __LIB_10__::func_770(83));
	if (__LIB_0__::func_30(iVar0))
	{
		UIFEED::_0x2F901291EF177B02(iVar0, 1);
	}
}

void func_399()
{
	struct<19> Var0;
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!GANG::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
		{
			return;
		}
	}
	if (NETWORK::_0x8FB7C254CFCBF78E(&(Global_1572887.f_252)))
	{
		NETWORK::_0xE72E5C1289BD1F40(&(Global_1572887.f_252));
	}
	Var0.f_5 = 2;
	Var0.f_12 = -1;
	Var0.f_17 = -1;
	Global_1572887.f_252 = { Var0 };
}

void func_400()
{
	Global_1572887.f_164.f_60 = MISC::GET_GAME_TIMER();
}

void func_401(int iParam0, int iParam1)
{
	Global_1572864.f_16 = iParam0;
	Global_1572864.f_17 = iParam1;
}

void func_402(int iParam0)
{
	Global_1572887.f_12 = iParam0;
}

void func_403(int iParam0)
{
	NETWORK::_0x704F92B3AF20D857(iParam0);
}

void func_404(int iParam0)
{
	if (Global_1572887.f_12 == 0)
	{
		return;
	}
	Global_40.f_1 = iParam0;
	TELEMETRY::_0x9BEE018A63FFFAD9(iParam0);
}

void func_405()
{
	Global_21 = 0;
}

bool func_406(char* sParam0, int iParam1, var uParam2)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return false;
	}
	*uParam2 = SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return true;
}

bool func_407()
{
	return Global_1900383.f_443;
}

void func_408(var uParam0)
{
	DATAFILE::_DATAFILE_UNLOAD(*uParam0);
}

void func_409(int iParam0, var uParam1, var uParam2)
{
	switch (__LIB_0__::func_317())
	{
		case 2:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 681.5647f, -1167.61f, 44.9204f };
					*uParam2 = 197.2448f;
					break;
				case 1:
					*uParam1 = { 810.8986f, -969.9656f, 53.016f };
					*uParam2 = 134.2209f;
					break;
				case 2:
					*uParam1 = { 864.3746f, -943.9187f, 56.2085f };
					*uParam2 = 150.086f;
					break;
				case 3:
					*uParam1 = { 933.3844f, -911.3843f, 59.72f };
					*uParam2 = 135.8932f;
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { -67.4627f, 7.3844f, 92.8657f };
					*uParam2 = 131.3534f;
					break;
				case 1:
					*uParam1 = { -116.7554f, 188.6082f, 93.8397f };
					*uParam2 = 140.8986f;
					break;
				case 2:
					*uParam1 = { -87.3227f, 244.034f, 101.5532f };
					*uParam2 = 177.536f;
					break;
				case 3:
					*uParam1 = { -68.581f, 371.115f, 112.856f };
					*uParam2 = 206.1627f;
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 1786.846f, -1789.869f, 48.3654f };
					*uParam2 = 243.2151f;
					break;
				case 1:
					*uParam1 = { 1579.342f, -1728.154f, 53.9348f };
					*uParam2 = 246.6603f;
					break;
				case 2:
					*uParam1 = { 1453.837f, -1691.054f, 65.0555f };
					*uParam2 = 234.7165f;
					break;
				case 3:
					*uParam1 = { 1287f, -1603.052f, 64.1451f };
					*uParam2 = 273.4906f;
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					*uParam1 = { 2374.944f, 1312.075f, 107.3511f };
					*uParam2 = 35.4268f;
					break;
				case 1:
					*uParam1 = { 2394.57f, 1225.873f, 100.4456f };
					*uParam2 = 329.851f;
					break;
				case 2:
					*uParam1 = { 2406.418f, 1114.158f, 95.6929f };
					*uParam2 = 21.6707f;
					break;
				case 3:
					*uParam1 = { 2391.831f, 1001.5f, 87.3075f };
					*uParam2 = 346.1555f;
					break;
			}
			break;
		default:
			*uParam1 = { 0f, 0f, 0f };
			break;
	}
}

char* func_410()
{
	return "script@common@cnv_camp@grief@knockout@knockout";
}

char* func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pbl_griefing_ko_back_leadin";
		case 1:
			return "pbl_griefing_ko_back_noleadin";
		case 2:
			return "pbl_griefing_ko_front";
		case 3:
			return "pbl_griefing_ko_back_noleadin";
		default:
			break;
	}
	return "pbl_griefing_ko_back_leadin";
}

char* func_412()
{
	return "CUT_THAT_OUT";
}

void func_413()
{
	vector3 vVar0;
	int iVar3;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1f);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	}
	vVar0.f_2 = (vVar0.z - 2f);
	iVar3 = CAM::GET_RENDERING_CAM();
	if (CAM::DOES_CAM_EXIST(iVar3))
	{
		CAM::POINT_CAM_AT_COORD(iVar3, vVar0);
		CAM::SHAKE_CAM(iVar3, "HAND_SHAKE", 1f);
	}
}

int func_414(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 11;
		case 2:
			return 30;
		case 3:
			return 33;
		case 4:
			return 37;
		case 7:
			return 40;
		case 6:
			return 50;
		case 8:
			return 57;
		case 9:
			return 62;
		case 10:
			return 77;
		case 11:
			return 93;
		case 12:
			return 107;
		case 13:
			return 114;
		case 14:
			return 117;
		case 15:
			return 120;
		case 16:
			return 126;
		default:
			break;
	}
	return -1;
}

int func_415(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 29;
		case 2:
			return 32;
		case 3:
			return 36;
		case 4:
			return 39;
		case 7:
			return 49;
		case 6:
			return 56;
		case 8:
			return 61;
		case 9:
			return 76;
		case 10:
			return 92;
		case 11:
			return 106;
		case 12:
			return 113;
		case 13:
			return 116;
		case 14:
			return 119;
		case 15:
			return 125;
		case 16:
			return 127;
		default:
			break;
	}
	return -1;
}

int func_416(var uParam0)
{
	switch (Global_1897952.f_41)
	{
		case 11:
			if (Global_1894899.f_4 != 9)
			{
				Global_1894899.f_4 = 9;
			}
			else
			{
				Global_1894899.f_4 = 77;
				*uParam0 = 1;
			}
			return 1;
		case 2:
			if (Global_1894899.f_4 != 3)
			{
				Global_1894899.f_4 = 3;
			}
			*uParam0 = 1;
			return 1;
		case 0:
			if (Global_1894899.f_4 != 95)
			{
				Global_1894899.f_4 = 95;
			}
			*uParam0 = 1;
			return 1;
		case 9:
		case 10:
			if (Global_1894899.f_4 != 128)
			{
				Global_1894899.f_4 = 128;
			}
			*uParam0 = 1;
			return 1;
		case 13:
			if (Global_1894899.f_4 != 117)
			{
				Global_1894899.f_4 = 117;
			}
			else
			{
				Global_1894899.f_4 = 129;
				*uParam0 = 1;
			}
			return 1;
	}
	return 0;
}

int func_417(int iParam0)
{
	switch (iParam0)
	{
		case 16:
			return 1474106589;
		case 31:
			return 1979340260;
		case 24:
			return -656861063;
		case 38:
			return 2073023198;
		case 18:
			return 1735191955;
		case 23:
			return 215480587;
		case 44:
			return 545498183;
		case 26:
			return 428613469;
		case 40:
			return 532401286;
		case 30:
			return 1740117339;
		case 4:
			return -1116738159;
		case 22:
			return -1730421200;
		case 5:
			return -1394664008;
		case 10:
			return -325788416;
		case 36:
			return -792566558;
		case 1:
			return -2089448537;
		case 6:
			return 82527577;
		case 7:
			return 1515744307;
		case 41:
			return -2110824426;
		case 43:
			return 1268001912;
		case 42:
			return 205568929;
		case 21:
			return -1173041902;
		case 45:
			return 2133877879;
		case 46:
			return -1408667066;
		case 47:
			return 1374995365;
		case 48:
			return 1837393665;
		case 49:
			return -1585921053;
		case 50:
			return -876779166;
		default:
			break;
	}
	return 0;
}

int func_418(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return 0;
	}
	SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sParam0, &uParam1, 10, iParam11);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

int func_419(char* sParam0, int iParam1)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
	{
		return 0;
	}
	SCRIPTS::REQUEST_SCRIPT(sParam0);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
	{
		return 0;
	}
	SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
	return 1;
}

bool func_420(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	if (Global_1894899.f_8)
	{
		return false;
	}
	return Global_1888801[iParam0 /*35*/].f_19;
}

void func_421(int iParam0)
{
	if (iParam0 != -1 && Global_1894899.f_2 != iParam0)
	{
		TELEMETRY::_0xCD6F8A0335D821F9(__LIB_9__::func_28(iParam0));
	}
	Global_1894899.f_2 = iParam0;
}

char* func_422(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return "camp_Lakay";
		case 6:
			return "camp_BeaverHollow";
		case 0:
			return "camp_Colter";
		case 2:
			return "camp_ClemensPoint";
		case 1:
			return "camp_HorseshoeOverlook";
		case 4:
			return "camp_Guarma";
		case 3:
			return "camp_ShadyBelle";
		case 7:
			return "camp_PronghornRanch";
		case 8:
			return "camp_BeechersHope";
		default:
			break;
	}
	return "";
}

void func_423(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		*uParam1 = Global_23118[iParam0 /*11*/].f_4;
		uParam1->f_1 = Global_23118[iParam0 /*11*/].f_4.f_1;
		uParam1->f_2 = Global_23118[iParam0 /*11*/].f_4.f_2;
		uParam1->f_3 = Global_23118[iParam0 /*11*/].f_4.f_3;
		uParam1->f_4 = Global_23118[iParam0 /*11*/].f_4.f_4;
		uParam1->f_5 = Global_23118[iParam0 /*11*/].f_4.f_5;
		return;
	}
	*uParam1 = Global_1058888.f_40615[iParam0 /*11*/].f_4;
	uParam1->f_1 = Global_1058888.f_40615[iParam0 /*11*/].f_4.f_1;
	uParam1->f_2 = Global_1058888.f_40615[iParam0 /*11*/].f_4.f_2;
	uParam1->f_3 = Global_1058888.f_40615[iParam0 /*11*/].f_4.f_3;
	uParam1->f_4 = Global_1058888.f_40615[iParam0 /*11*/].f_4.f_4;
	uParam1->f_5 = Global_1058888.f_40615[iParam0 /*11*/].f_4.f_5;
}

bool func_424(var uParam0)
{
	return __LIB_0__::func_1(uParam0->f_5, 2);
}

void func_425(int iParam0, var uParam1)
{
	if (Global_1572887.f_12 == -1)
	{
		Global_23118[iParam0 /*11*/].f_4 = *uParam1;
		Global_23118[iParam0 /*11*/].f_4.f_1 = uParam1->f_1;
		Global_23118[iParam0 /*11*/].f_4.f_2 = uParam1->f_2;
		Global_23118[iParam0 /*11*/].f_4.f_3 = uParam1->f_3;
		Global_23118[iParam0 /*11*/].f_4.f_4 = uParam1->f_4;
		Global_23118[iParam0 /*11*/].f_4.f_5 = uParam1->f_5;
		return;
	}
	Global_1058888.f_40615[iParam0 /*11*/].f_4 = *uParam1;
	Global_1058888.f_40615[iParam0 /*11*/].f_4.f_1 = uParam1->f_1;
	Global_1058888.f_40615[iParam0 /*11*/].f_4.f_2 = uParam1->f_2;
	Global_1058888.f_40615[iParam0 /*11*/].f_4.f_3 = uParam1->f_3;
	Global_1058888.f_40615[iParam0 /*11*/].f_4.f_4 = uParam1->f_4;
	Global_1058888.f_40615[iParam0 /*11*/].f_4.f_5 = uParam1->f_5;
}

void func_426()
{
	__LIB_17__::func_400();
	__LIB_16__::func_303(-1);
	__LIB_16__::func_328(0);
	Global_1572887.f_164.f_61 = 0;
	if (Global_1572887.f_164.f_83 == 2)
	{
		Global_1572887.f_164.f_83 = 0;
	}
}

void func_427(int iParam0)
{
	if (iParam0 != 0)
	{
		__LIB_17__::func_401(iParam0, -1);
	}
	__LIB_0__::func_319(4);
	__LIB_17__::func_384(1);
}

void func_428(int iParam0, int iParam1)
{
	Global_1572887.f_282 = iParam0;
	Global_1572887.f_282.f_1 = iParam1;
	__LIB_17__::func_386(28);
}

void func_429()
{
	if (__LIB_0__::func_2() == -1)
	{
		if (!__LIB_0__::func_720(18, &(Global_1935689.f_10225)))
		{
			return;
		}
	}
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689.f_10225, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689.f_10225, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689.f_10225, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_DATAFILE_REGISTER_QUERY(Global_1935689.f_10225, 3, "satchel_elements/name(id=%x):description0");
}

var func_430()
{
	if (__LIB_0__::func_1(Global_1347343.f_11, 512))
	{
		return Global_2621440[0 /*12066*/].f_9.f_13;
	}
	return Global_2621440[1 /*12066*/].f_9.f_13;
}

Vector3 func_431()
{
	if (__LIB_0__::func_1(Global_1347343.f_11, 512))
	{
		return Global_2621440[0 /*12066*/].f_9.f_7;
	}
	return Global_2621440[1 /*12066*/].f_9.f_7;
}

void func_432(int iParam0)
{
	int iVar0;
	if (__LIB_1__::func_888(iParam0, 1) || __LIB_1__::func_888(iParam0, 2))
	{
		iVar0 = __LIB_0__::func_816(iParam0);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
		{
			if (__LIB_1__::func_888(iParam0, 1))
			{
				__LIB_0__::func_566(iVar0, 0);
				__LIB_3__::func_457(iVar0, 0);
				__LIB_16__::func_192(iParam0, 1);
			}
			if (__LIB_1__::func_888(iParam0, 2))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				VOLUME::_DELETE_VOLUME(iVar0);
				__LIB_16__::func_192(iParam0, 2);
			}
		}
	}
}

void func_433(int iParam0)
{
	__LIB_4__::func_133(iParam0, -1);
	__LIB_4__::func_134(iParam0, -15);
}

void func_434(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_898(iParam0))
	{
		if (__LIB_0__::func_1(Global_1934765.f_20, iParam2))
		{
			iVar0 = __LIB_0__::func_559(iParam1);
			if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
			{
				POPULATION::_0xA1CFB35069D23C23(iVar0);
				POPULATION::_0x74C2B3DC0B294102(iVar0);
				__LIB_0__::func_8(&(Global_1934765.f_20), iParam2);
			}
		}
	}
	else if (!__LIB_0__::func_1(Global_1934765.f_20, iParam2))
	{
		iVar1 = __LIB_0__::func_559(iParam1);
		if (VOLUME::_DOES_VOLUME_EXIST(iVar1))
		{
			POPULATION::_0x18262CAFEBB5FBE1(iVar1, iParam3, 0, 0, -1, -1, 0);
			POPULATION::_0xB56D41A694E42E86(iVar1, iParam3, 0, 0, -1, -1, 0);
			__LIB_0__::func_7(&(Global_1934765.f_20), iParam2);
		}
	}
}

void func_435(bool bParam0)
{
	__LIB_10__::func_754(-1452136643, bParam0);
	__LIB_10__::func_754(-744260705, bParam0);
	__LIB_10__::func_754(1424293412, bParam0);
	__LIB_10__::func_754(1060557512, bParam0);
	__LIB_10__::func_754(-362403544, bParam0);
	__LIB_10__::func_754(-592147003, bParam0);
	__LIB_10__::func_754(2056145270, bParam0);
	__LIB_10__::func_754(748826019, bParam0);
	__LIB_10__::func_754(366542865, bParam0);
	__LIB_10__::func_754(-1508467572, bParam0);
	__LIB_10__::func_754(-1220264217, bParam0);
	__LIB_10__::func_754(-990258606, bParam0);
	__LIB_10__::func_754(-1508467572, bParam0);
	__LIB_10__::func_754(-1220264217, bParam0);
	__LIB_10__::func_754(-990258606, bParam0);
	__LIB_10__::func_754(-665583358, bParam0);
	__LIB_10__::func_754(-282972514, bParam0);
	__LIB_10__::func_754(-64632667, bParam0);
	__LIB_10__::func_754(314111435, bParam0);
	__LIB_10__::func_754(24859476, bParam0);
	__LIB_10__::func_754(340621560, bParam0);
	__LIB_10__::func_754(1266707689, bParam0);
	__LIB_10__::func_754(434145706, bParam0);
	__LIB_10__::func_754(654746614, bParam0);
	__LIB_10__::func_754(1965736001, bParam0);
	__LIB_10__::func_754(1650694835, bParam0);
	__LIB_10__::func_754(1891284833, bParam0);
	__LIB_10__::func_754(1576931820, bParam0);
	__LIB_10__::func_754(1812999696, bParam0);
	__LIB_10__::func_754(-1184151355, bParam0);
	__LIB_10__::func_754(-946313953, bParam0);
	__LIB_10__::func_754(-889100155, bParam0);
	__LIB_10__::func_754(-1296418825, bParam0);
	__LIB_10__::func_754(352816221, !bParam0);
	__LIB_10__::func_754(1128622296, !bParam0);
	__LIB_10__::func_754(979982112, !bParam0);
	__LIB_10__::func_754(1756640181, !bParam0);
	__LIB_10__::func_754(1557076971, !bParam0);
	__LIB_10__::func_754(1913538153, !bParam0);
	__LIB_10__::func_754(-1603329230, !bParam0);
	__LIB_10__::func_754(-1892843345, !bParam0);
	__LIB_10__::func_754(241205019, !bParam0);
}

void func_436(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	__LIB_16__::func_202(__LIB_1__::func_905(iParam0), iParam1);
}

void func_437(int iParam0)
{
	int iVar0;
	int iVar1;
	if (iParam0 == 6)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(iVar0)))
			{
				if (iVar1 == -1)
				{
					iVar1 = iVar0;
				}
				else if (__LIB_0__::func_665(__LIB_0__::func_271(iVar0), Global_35, 1, 1) > __LIB_0__::func_665(__LIB_0__::func_271(iVar1), Global_35, 1, 1))
				{
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 != -1)
	{
		__LIB_1__::func_265(__LIB_0__::func_271(iVar1), "GENERIC_SYMPATHIZE_ON_DISPUTE", joaat("SPEECH_PARAMS_ADD_BLIP"), 0, 1, 0, 0, 1);
	}
}

void func_438()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
		{
			PED::_0xA7DC9266ED6A4E51(__LIB_0__::func_271(iVar0));
		}
		iVar0++;
	}
}

void func_439()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	vector3 vVar7;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	vVar0.f_2 = (vVar0.z + 0.5f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false);
	vVar3 = { 0f, 0f, 0f };
	iVar6 = __LIB_0__::func_271(Global_1357549.f_1645);
	vVar7 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_HEADING(Global_35), 0f, -1.5f, 0f) };
	ENTITY::SET_ENTITY_VISIBLE(iVar6, false);
	MISC::GET_GROUND_Z_FOR_3D_COORD(vVar7, &(vVar7.f_2), false);
	ENTITY::SET_ENTITY_COORDS(iVar6, vVar7, true, false, true, true);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		vVar3.f_2 = ENTITY::GET_ENTITY_HEADING(Global_35);
	}
	vVar7.f_2 = (vVar7.z + 0.25f);
	if (__LIB_1__::func_205(iVar6, Global_1357549.f_1663[0], 1, 0) || __LIB_1__::func_205(Global_35, Global_1357549.f_1663[0], 1, 0))
	{
		vVar3.f_2 = (vVar3.z + 90f);
		if (__LIB_0__::func_317() == 2)
		{
			vVar0 = { 659.2351f, -1251.625f, 42.6868f };
		}
		else if (__LIB_0__::func_317() == 1)
		{
			vVar0 = { -123.8883f, -31.9883f, 94.8056f };
		}
		else if (__LIB_0__::func_317() == 6)
		{
			vVar0 = { 2357.898f, 1372.787f, 105.298f };
		}
	}
	if (__LIB_1__::func_205(iVar6, Global_1357549.f_1663[1], 1, 0) || __LIB_1__::func_205(Global_35, Global_1357549.f_1663[1], 1, 0))
	{
		vVar3.f_2 = (vVar3.z + 90f);
		if (__LIB_0__::func_317() == 2)
		{
			vVar0 = { 659.2351f, -1251.625f, 42.6868f };
		}
		else if (__LIB_0__::func_317() == 1)
		{
			vVar0 = { -123.8883f, -31.9883f, 94.8056f };
		}
		else if (__LIB_0__::func_317() == 6)
		{
			vVar0 = { 2346.387f, 1352.174f, 105.0121f };
		}
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Global_1357549.f_1636, vVar0, vVar3, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549.f_1636, "player_one", Global_35, 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Global_1357549.f_1636, "CS_GENSTORYMALE", iVar6, 0);
}

void func_440()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (__LIB_0__::func_272(__LIB_0__::func_271(iVar0), 0))
		{
			if (PED::GET_PED_CONFIG_FLAG(__LIB_0__::func_271(iVar0), 343, true))
			{
				PED::SET_PED_CONFIG_FLAG(__LIB_0__::func_271(iVar0), 343, false);
			}
		}
		iVar0++;
	}
}

int func_441(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 12:
			return -1360990987;
		case 11:
			return 162953686;
		default:
			break;
	}
	return __LIB_10__::func_806(iParam0);
}

bool func_442(int iParam0, int iParam1)
{
	int iVar0;
	if (Global_1934266.f_26 != iParam0)
	{
		Global_1934266.f_26 = iParam0;
		iVar0 = iParam1;
		if (!__LIB_0__::func_630(iParam1))
		{
			iVar0 = __LIB_10__::func_29(iParam0);
		}
		if (!__LIB_0__::func_630(iVar0))
		{
			iVar0 = __LIB_1__::func_905(__LIB_0__::func_979(Global_36));
		}
		if (!__LIB_0__::func_630(iVar0))
		{
			return false;
		}
		LAW::_SET_LAW_REGION(PLAYER::PLAYER_ID(), Global_1934266.f_26, __LIB_8__::func_977(iVar0));
		return true;
	}
	return false;
}

void func_443(int iParam0)
{
	if (iParam0 == 14)
	{
		if (PED::_0xA454D234E45BB6E5(__LIB_0__::func_271(14), PLAYER::GET_PLAYER_INDEX()))
		{
			Global_1357549.f_1648 = 1;
		}
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(__LIB_0__::func_271(13)) == 0)
	{
		if (Global_1357549.f_1648 && !PED::_0xA454D234E45BB6E5(__LIB_0__::func_271(14), PLAYER::GET_PLAYER_INDEX()))
		{
			Global_1357549.f_1648 = 0;
			if (__LIB_0__::func_665(__LIB_0__::func_271(14), __LIB_0__::func_271(13), 1, 1) < 20f)
			{
				__LIB_1__::func_265(__LIB_0__::func_271(13), "DISPUTE_INTERVENE_CAMP_MALE", 334581534, Global_35, 1, 0, 0, 1);
			}
		}
	}
}

bool func_444(int iParam0)
{
	int iVar0;
	if (__LIB_6__::func_733(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	iVar0 = -1;
	if (!__LIB_3__::func_87(iParam0, &iVar0))
	{
		return false;
	}
	if (__LIB_6__::func_254(iParam0))
	{
	}
	if (PED::_0x1E017404784AA6A3(Global_35, iParam0))
	{
		__LIB_6__::func_259(iParam0, 1);
		return true;
	}
	return false;
}

void func_445()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		if (__LIB_3__::func_322(iVar0) != 0)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_36308[iVar0]))
			{
				__LIB_10__::func_793(iVar0);
			}
		}
		iVar0++;
	}
}

bool func_446()
{
	if (__LIB_10__::func_804(-524145696))
	{
		if (__LIB_8__::func_344(809554858))
		{
			return true;
		}
		__LIB_10__::func_805(-524145696);
	}
	if (__LIB_10__::func_804(-1223121209))
	{
		if (__LIB_8__::func_344(-451832572))
		{
			return true;
		}
		__LIB_10__::func_805(-1223121209);
	}
	if (__LIB_10__::func_804(-1053549743))
	{
		if (__LIB_8__::func_344(1033721560) || __LIB_2__::func_157(__LIB_0__::func_559(105), Global_36))
		{
			return true;
		}
		__LIB_10__::func_805(-1053549743);
	}
	if (__LIB_10__::func_804(1649996811))
	{
		if (__LIB_8__::func_344(joaat("BEE_01_CAMP")))
		{
			return true;
		}
		__LIB_10__::func_805(1649996811);
	}
	if (__LIB_10__::func_804(1478132521))
	{
		if (__LIB_10__::func_750(398639187, 1120403456 /* Float: 100f */))
		{
			return true;
		}
		__LIB_10__::func_805(1478132521);
	}
	return false;
}

int func_447(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_20(iParam0))
	{
		return 0;
	}
	if (!__LIB_1__::func_902(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!__LIB_10__::func_823((iVar1 + iVar0), 0))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_448(int iParam0)
{
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	__LIB_16__::func_379();
	switch (iParam0)
	{
		case 0:
			__LIB_16__::func_380(5, joaat("ANIMALS_ALLIGATOR"));
			__LIB_16__::func_380(10, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(11, joaat("ANIMALS_ALLIGATOR"));
			__LIB_16__::func_380(12, joaat("ANIMALS_BOAR"));
			__LIB_16__::func_380(13, joaat("ANIMALS_FOX"));
			__LIB_16__::func_380(7, joaat("ANIMALS_PELICAN"));
			break;
		case 1:
			__LIB_16__::func_380(5, joaat("ANIMALS_MOOSE"));
			__LIB_16__::func_380(10, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(11, joaat("ANIMALS_WOLF"));
			__LIB_16__::func_380(12, joaat("ANIMALS_RABBIT"));
			__LIB_16__::func_380(13, joaat("ANIMALS_COYOTES"));
			__LIB_16__::func_380(7, joaat("ANIMALS_HAWKS"));
			break;
		case 2:
			__LIB_16__::func_380(5, joaat("ANIMALS_TURTLE"));
			__LIB_16__::func_380(10, joaat("ANIMALS_POSSUMS"));
			__LIB_16__::func_380(11, joaat("ANIMALS_ALLIGATOR"));
			__LIB_16__::func_380(12, joaat("ANIMALS_POSSUMS"));
			__LIB_16__::func_380(13, joaat("ANIMALS_FOX"));
			__LIB_16__::func_380(7, joaat("ANIMALS_SONGBIRD"));
			break;
		case 3:
			__LIB_16__::func_380(5, joaat("ANIMALS_COYOTES"));
			__LIB_16__::func_380(10, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(11, joaat("ANIMALS_WOLF"));
			__LIB_16__::func_380(12, joaat("ANIMALS_RABBIT"));
			__LIB_16__::func_380(13, joaat("ANIMALS_COYOTES"));
			__LIB_16__::func_380(7, joaat("ANIMALS_VULTURES"));
			break;
		case 4:
			__LIB_16__::func_380(5, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(10, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(11, joaat("ANIMALS_WOLF"));
			__LIB_16__::func_380(12, joaat("ANIMALS_RACCOON"));
			__LIB_16__::func_380(13, joaat("ANIMALS_COYOTES"));
			__LIB_16__::func_380(7, joaat("ANIMALS_HAWKS"));
			__LIB_16__::func_380(8, joaat("ANIMALS_BUFFALO"));
			break;
		case 5:
		case 6:
		case 7:
			__LIB_16__::func_380(5, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(10, joaat("ANIMALS_FOX"));
			__LIB_16__::func_380(11, joaat("ANIMALS_COUGAR"));
			__LIB_16__::func_380(12, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(13, joaat("ANIMALS_FOX"));
			__LIB_16__::func_380(7, joaat("ANIMALS_EAGLES"));
			break;
		case 8:
			__LIB_16__::func_380(5, joaat("ANIMALS_BOAR"));
			__LIB_16__::func_380(10, joaat("ANIMALS_BOAR"));
			__LIB_16__::func_380(11, joaat("ANIMALS_SNAKE"));
			__LIB_16__::func_380(12, joaat("ANIMAL_HEN"));
			__LIB_16__::func_380(13, joaat("ANIMALS_BOAR"));
			__LIB_16__::func_380(7, joaat("ANIMALS_SEAGULL"));
			break;
		case 9:
			__LIB_16__::func_380(5, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(10, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(11, joaat("ANIMALS_COUGAR"));
			__LIB_16__::func_380(12, joaat("ANIMALS_BOAR"));
			__LIB_16__::func_380(13, joaat("ANIMALS_COYOTES"));
			__LIB_16__::func_380(7, joaat("ANIMALS_HAWKS"));
			__LIB_16__::func_380(8, joaat("ANIMALS_BUFFALO"));
			break;
		case 10:
			__LIB_16__::func_380(5, joaat("ANIMALS_COYOTES"));
			__LIB_16__::func_380(10, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(11, joaat("ANIMALS_COUGAR"));
			__LIB_16__::func_380(12, joaat("ANIMALS_RABBIT"));
			__LIB_16__::func_380(13, joaat("ANIMALS_COYOTES"));
			__LIB_16__::func_380(7, joaat("ANIMALS_HAWKS"));
			break;
		case 11:
			__LIB_16__::func_380(5, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(10, joaat("ANIMALS_TURKEYS_WILD"));
			__LIB_16__::func_380(11, joaat("ANIMALS_FOX"));
			__LIB_16__::func_380(12, joaat("ANIMALS_RACCOON"));
			__LIB_16__::func_380(13, joaat("ANIMALS_FOX"));
			__LIB_16__::func_380(7, joaat("ANIMALS_DUCKS"));
			break;
		case 12:
			__LIB_16__::func_380(5, joaat("ANIMALS_DEER"));
			__LIB_16__::func_380(10, joaat("ANIMALS_FOX"));
			__LIB_16__::func_380(11, joaat("ANIMALS_BEAR"));
			__LIB_16__::func_380(12, joaat("ANIMALS_RABBIT"));
			__LIB_16__::func_380(13, joaat("ANIMALS_COYOTES"));
			__LIB_16__::func_380(7, joaat("ANIMALS_SONGBIRD"));
			break;
	}
}

void func_449(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_16__::func_196(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			__LIB_1__::func_940((iVar1 + iVar0), 0);
			iVar0++;
		}
	}
}

void func_450(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];
	if (!__LIB_2__::func_757())
	{
		return;
	}
	sVar1 = __LIB_14__::func_223(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!__LIB_0__::func_630(iParam4))
	{
		if (__LIB_0__::func_20(iParam0))
		{
			iParam4 = __LIB_1__::func_905(__LIB_1__::func_882(iParam0));
		}
		else
		{
			iParam4 = __LIB_1__::func_905(iParam1);
		}
	}
	if (__LIB_0__::func_630(iParam4))
	{
		iVar3 = __LIB_1__::func_931(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = __LIB_1__::func_907(__LIB_1__::func_906(iParam2));
	}
	else if ((__LIB_0__::func_622(iParam1, 2) || __LIB_1__::func_932(iParam4, 2)) && !Global_1894899.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1894899.f_9 = 1;
	}
	else if ((__LIB_0__::func_20(iParam0) && __LIB_0__::func_21(iParam0, 16777216)) && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1894899.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1894899.f_9)
	{
		sVar2 = MISC::_CREATE_VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1894899.f_9 = 1;
	}
	else
	{
		iVar4 = __LIB_0__::func_41(__LIB_0__::func_23());
		iVar5 = __LIB_0__::func_42(__LIB_0__::func_23());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_36);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(674, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), sVar9, __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = __LIB_1__::func_908(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::_CREATE_VAR_STRING(162, sVar8, iVar4, __LIB_1__::func_925(&cVar6, joaat("COLOR_PURE_WHITE")), __LIB_1__::func_925(&cVar10, joaat("COLOR_PURE_WHITE")));
		}
		Global_1894899.f_9 = 0;
	}
	Global_1934266.f_148 = __LIB_1__::func_909(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_451(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (__LIB_16__::func_195(iParam0, &iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 < (iVar2 - iVar1) + 1)
		{
			if (__LIB_16__::func_246((iVar1 + iVar0)))
			{
				__LIB_1__::func_940((iVar1 + iVar0), 0);
			}
			iVar0++;
		}
	}
}

int func_452(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1[9];
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	iVar0 = -1;
	switch (iParam0)
	{
		case 6:
		case 12:
		case 24:
		case 25:
			iVar1[0] = -1;
			iVar1[1] = -1;
			iVar1[2] = -1;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 10:
			iVar1[0] = 7;
			iVar1[1] = 1;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 15:
		case 16:
		case 20:
		case 22:
			iVar1[0] = 3;
			iVar1[1] = 2;
			iVar1[2] = 8;
			iVar1[3] = 9;
			iVar1[4] = 7;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 13:
		case 14:
			iVar1[0] = 1;
			iVar1[1] = 7;
			iVar1[2] = 3;
			iVar1[3] = -1;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		case 3:
			iVar1[0] = 2;
			iVar1[1] = 9;
			iVar1[2] = 1;
			iVar1[3] = 8;
			iVar1[4] = -1;
			iVar1[5] = -1;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
		default:
			iVar1[0] = 7;
			iVar1[1] = 3;
			iVar1[2] = 1;
			iVar1[3] = 9;
			iVar1[4] = 2;
			iVar1[5] = 8;
			iVar1[6] = -1;
			iVar1[7] = -1;
			iVar1[8] = -1;
			break;
	}
	iVar13 = 0;
	while (iVar13 < 9)
	{
		if (iVar1[iVar13] != -1)
		{
			if (__LIB_1__::func_307(iVar1[iVar13], 1, 1) && __LIB_0__::func_959(iVar1[iVar13], 0) == 0)
			{
				vVar14 = { ENTITY::GET_ENTITY_COORDS(__LIB_0__::func_271(iVar1[iVar13]), true, false) };
				if (CAM::IS_SPHERE_VISIBLE(vVar14, 1.25f) == 0 || bParam1 == 0)
				{
					iVar12 = INTERIOR::GET_INTERIOR_FROM_ENTITY(__LIB_0__::func_271(iVar1[iVar13]));
					iVar11 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
					if (iVar11 == iVar12)
					{
						if (iParam0 != iVar1[iVar13])
						{
							if (iVar0 == -1)
							{
								if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(iVar1[iVar13]), 1, 1) < 25f || bParam1)
								{
									iVar0 = iVar1[iVar13];
								}
							}
							else if (iVar1[iVar13] != -1)
							{
								if (__LIB_0__::func_665(Global_35, __LIB_0__::func_271(iVar0), 1, 1) > __LIB_0__::func_665(Global_35, __LIB_0__::func_271(iVar1[iVar13]), 1, 1))
								{
									iVar0 = iVar1[iVar13];
								}
							}
						}
					}
				}
			}
		}
		iVar13++;
	}
	if (iVar0 == -1)
	{
		if ((MISC::GET_FRAME_COUNT() % 300) == 0)
		{
		}
	}
	return iVar0;
}

void func_453()
{
	int iVar0;
	__LIB_10__::func_808();
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_0__::func_401(-1253110600);
		__LIB_0__::func_401(-1402083909);
	}
	iVar0 = -1;
	if (__LIB_0__::func_898(704802028))
	{
		__LIB_0__::func_401(-1012618146);
		__LIB_0__::func_401(-722030448);
		__LIB_5__::func_441("nav_mesh_beech_shack");
		__LIB_0__::func_401(-1253110600);
		__LIB_0__::func_401(-1402083909);
		__LIB_0__::func_401(1970695826);
		__LIB_0__::func_401(-382865315);
		__LIB_0__::func_401(-904669171);
		__LIB_0__::func_401(774601424);
		__LIB_0__::func_401(-584332967);
		__LIB_0__::func_401(-1615103170);
		__LIB_0__::func_401(1256771838);
		__LIB_0__::func_401(-1765152778);
		__LIB_0__::func_401(-2072231077);
		__LIB_0__::func_401(19217583);
	}
	else if (__LIB_0__::func_898(588987611))
	{
		__LIB_0__::func_401(-1012618146);
		__LIB_0__::func_401(-722030448);
		__LIB_0__::func_401(1757739778);
		__LIB_5__::func_441("nav_mesh_beech_shack_with_fire");
		__LIB_0__::func_401(578474998);
		__LIB_0__::func_401(-1253110600);
		__LIB_0__::func_401(-1402083909);
		__LIB_0__::func_401(1970695826);
		__LIB_0__::func_401(-382865315);
	}
	else if (__LIB_0__::func_898(2008888900))
	{
		__LIB_0__::func_401(-1012618146);
		__LIB_0__::func_401(1757739778);
		__LIB_5__::func_441("nav_mesh_beech_shack_with_fire");
		__LIB_0__::func_401(joaat("BEE_01_CAMP"));
		__LIB_0__::func_401(578474998);
		__LIB_0__::func_401(-1253110600);
		__LIB_0__::func_401(-1402083909);
		__LIB_0__::func_401(1970695826);
		__LIB_0__::func_401(-382865315);
		__LIB_0__::func_400(-722030448);
	}
	else if (__LIB_0__::func_898(1649996811))
	{
		__LIB_0__::func_401(joaat("BEE_01_CAMP"));
		__LIB_5__::func_441("nav_mesh_beech_camp_with_rubble");
		__LIB_0__::func_401(578474998);
		__LIB_0__::func_401(-1253110600);
		__LIB_0__::func_401(-1402083909);
		__LIB_0__::func_401(1970695826);
		__LIB_0__::func_401(-382865315);
		__LIB_0__::func_401(2111816145);
	}
	else if (__LIB_0__::func_898(227918160))
	{
		__LIB_0__::func_401(joaat("BEE_01_CAMP"));
		__LIB_0__::func_401(-1253110600);
		__LIB_0__::func_401(-1402083909);
		__LIB_0__::func_401(1970695826);
		__LIB_0__::func_401(-382865315);
		__LIB_0__::func_401(578474998);
		__LIB_5__::func_441("nav_mesh_beech_camp_with_supplies");
	}
	else if (__LIB_0__::func_898(168171957))
	{
		__LIB_0__::func_401(joaat("BEE_01_CAMP"));
		__LIB_0__::func_401(-1667461262);
		__LIB_0__::func_401(-974480336);
		__LIB_0__::func_401(411742897);
		__LIB_0__::func_401(1344772301);
		__LIB_0__::func_401(1467774743);
		__LIB_0__::func_401(43335376);
		__LIB_5__::func_441("nav_mesh_beech_house_finished");
		__LIB_0__::func_401(-284612948);
		__LIB_0__::func_401(-1325016116);
		__LIB_0__::func_401(578474998);
		__LIB_4__::func_495(111);
		__LIB_4__::func_495(116);
		__LIB_4__::func_495(100);
		__LIB_4__::func_495(101);
	}
	else if (__LIB_0__::func_898(1193080109))
	{
		__LIB_0__::func_401(-1667461262);
		__LIB_0__::func_401(411742897);
		__LIB_0__::func_401(1344772301);
		__LIB_0__::func_401(1467774743);
		__LIB_0__::func_401(joaat("BEE_01_BARN_STAGE05"));
		__LIB_0__::func_401(578474998);
		__LIB_0__::func_401(43335376);
		__LIB_0__::func_401(1353861354);
		__LIB_0__::func_401(1205945639);
		__LIB_5__::func_441("nav_mesh_beech_barn_finished");
		__LIB_0__::func_401(-284612948);
		__LIB_0__::func_401(431365499);
		__LIB_0__::func_401(276582710);
		__LIB_0__::func_401(1191890045);
		__LIB_0__::func_401(1864768904);
		__LIB_0__::func_401(-692583342);
		__LIB_0__::func_401(-918785150);
		__LIB_4__::func_495(116);
		__LIB_4__::func_495(100);
		__LIB_4__::func_495(102);
		__LIB_4__::func_495(103);
		if (__LIB_1__::func_185(75) && !__LIB_5__::func_783(119))
		{
			__LIB_4__::func_495(118);
		}
		else
		{
			__LIB_4__::func_524(118);
		}
		__LIB_4__::func_495(104);
		__LIB_4__::func_495(105);
		__LIB_4__::func_495(111);
		if (__LIB_5__::func_783(108))
		{
			__LIB_4__::func_524(107);
		}
		else
		{
			__LIB_4__::func_495(107);
		}
	}
	else if (__LIB_0__::func_898(-639037538))
	{
		__LIB_0__::func_401(-1667461262);
		__LIB_0__::func_401(411742897);
		__LIB_0__::func_401(1467774743);
		__LIB_0__::func_401(joaat("BEE_01_BARN_STAGE05"));
		__LIB_0__::func_401(1353861354);
		__LIB_5__::func_441("nav_mesh_beech_house_decor");
		__LIB_0__::func_401(578474998);
		__LIB_0__::func_401(1236917971);
		__LIB_0__::func_401(43335376);
		__LIB_0__::func_401(-284612948);
		__LIB_0__::func_401(-2090209059);
		__LIB_0__::func_401(1977031606);
		__LIB_0__::func_401(1929454697);
		__LIB_0__::func_401(938290967);
		__LIB_0__::func_401(1532009326);
		__LIB_0__::func_401(1344772301);
		__LIB_0__::func_401(-918785150);
		__LIB_0__::func_401(-692583342);
		__LIB_0__::func_401(joaat("BEE_CRAFTINGFIRE01"));
		__LIB_10__::func_741(joaat("BEE_CRAFTINGFIRE01"));
		__LIB_0__::func_401(-1860722801);
		__LIB_0__::func_401(637627640);
		__LIB_0__::func_401(349494711);
		__LIB_4__::func_495(117);
		__LIB_4__::func_495(116);
		__LIB_4__::func_495(100);
		__LIB_4__::func_495(109);
		__LIB_4__::func_495(102);
		__LIB_4__::func_495(110);
		__LIB_4__::func_495(106);
		if (!__LIB_5__::func_783(119))
		{
			__LIB_4__::func_495(118);
		}
		else
		{
			__LIB_4__::func_524(118);
		}
		__LIB_4__::func_495(111);
	}
	else if (__LIB_0__::func_898(-491981251))
	{
		__LIB_0__::func_401(-1667461262);
		__LIB_0__::func_401(411742897);
		__LIB_0__::func_401(1467774743);
		__LIB_0__::func_401(joaat("BEE_01_BARN_STAGE05"));
		__LIB_0__::func_401(1353861354);
		__LIB_5__::func_441("nav_mesh_beech_house_decor");
		__LIB_0__::func_401(578474998);
		__LIB_0__::func_401(1236917971);
		__LIB_0__::func_401(43335376);
		__LIB_0__::func_401(-284612948);
		__LIB_0__::func_401(-2090209059);
		__LIB_0__::func_401(1977031606);
		__LIB_0__::func_401(1929454697);
		__LIB_0__::func_401(938290967);
		__LIB_0__::func_401(1532009326);
		__LIB_0__::func_401(1344772301);
		__LIB_0__::func_401(-918785150);
		__LIB_0__::func_401(-692583342);
		__LIB_0__::func_401(joaat("BEE_CRAFTINGFIRE01"));
		__LIB_10__::func_741(joaat("BEE_CRAFTINGFIRE01"));
		__LIB_0__::func_401(-1860722801);
		__LIB_0__::func_401(637627640);
		__LIB_0__::func_401(349494711);
		__LIB_4__::func_495(117);
		__LIB_4__::func_495(116);
		__LIB_4__::func_495(100);
		__LIB_4__::func_495(109);
		__LIB_4__::func_495(102);
		__LIB_4__::func_495(110);
		if (__LIB_5__::func_783(108))
		{
			__LIB_4__::func_524(107);
		}
		else
		{
			__LIB_4__::func_495(107);
		}
		if (!__LIB_5__::func_783(119))
		{
			__LIB_4__::func_495(118);
		}
		else
		{
			__LIB_4__::func_524(118);
		}
		__LIB_4__::func_495(111);
	}
	else if (__LIB_0__::func_898(-618620429))
	{
		__LIB_0__::func_401(-1667461262);
		__LIB_0__::func_401(411742897);
		__LIB_0__::func_401(1467774743);
		__LIB_0__::func_401(joaat("BEE_01_BARN_STAGE05"));
		__LIB_0__::func_401(1353861354);
		__LIB_5__::func_441("nav_mesh_beech_house_completed");
		__LIB_0__::func_401(578474998);
		__LIB_0__::func_401(1236917971);
		__LIB_0__::func_401(43335376);
		__LIB_0__::func_401(-284612948);
		__LIB_0__::func_401(349494711);
		__LIB_0__::func_401(1965249616);
		__LIB_0__::func_401(-2021605623);
		__LIB_0__::func_401(1649902358);
		__LIB_0__::func_401(1169279648);
		__LIB_0__::func_401(1532009326);
		__LIB_0__::func_401(1344772301);
		__LIB_0__::func_401(-918785150);
		__LIB_0__::func_401(-692583342);
		__LIB_0__::func_401(joaat("BEE_CRAFTINGFIRE01"));
		__LIB_10__::func_741(joaat("BEE_CRAFTINGFIRE01"));
		__LIB_0__::func_401(-1860722801);
		__LIB_0__::func_401(637627640);
		__LIB_0__::func_401(-218940381);
		if (!__LIB_5__::func_783(119))
		{
			__LIB_4__::func_495(118);
		}
		else
		{
			__LIB_4__::func_524(118);
		}
		__LIB_4__::func_495(117);
		__LIB_4__::func_495(116);
		__LIB_4__::func_495(100);
		__LIB_4__::func_495(109);
		__LIB_4__::func_495(102);
		__LIB_4__::func_495(112);
		__LIB_4__::func_495(113);
		__LIB_4__::func_495(111);
		__LIB_4__::func_495(113);
		if (__LIB_5__::func_783(115))
		{
			__LIB_4__::func_524(114);
		}
		else
		{
			__LIB_4__::func_495(114);
		}
	}
	if (Global_1934765.f_300 != iVar0)
	{
		if (Global_1934765.f_300 != -1)
		{
			MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_BEECHERSHOPE"));
		}
		MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_BEECHERSHOPE"), -1640f, -1370f, 0, iVar0);
		Global_1934765.f_300 = iVar0;
	}
}

void func_454()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_0__::func_898(664571177))
	{
		__LIB_8__::func_783(941);
		__LIB_8__::func_783(943);
		__LIB_8__::func_783(944);
		__LIB_8__::func_783(942);
		__LIB_0__::func_123(941, 32);
		__LIB_10__::func_823(941, 0);
		__LIB_0__::func_123(943, 32);
		__LIB_10__::func_823(943, 0);
		__LIB_0__::func_123(944, 32);
		__LIB_10__::func_823(944, 0);
		__LIB_0__::func_123(942, 32);
		__LIB_10__::func_823(942, 0);
	}
	else if (!__LIB_0__::func_296(0, 0, 1))
	{
		__LIB_0__::func_121(941, 32);
		__LIB_0__::func_121(943, 32);
		__LIB_0__::func_121(944, 32);
		__LIB_5__::func_458(941);
		__LIB_5__::func_458(943);
		__LIB_5__::func_458(944);
	}
	if (__LIB_1__::func_185(52))
	{
		if (__LIB_1__::func_902(56, &iVar1, &iVar2, 0, 0))
		{
			iVar0 = 0;
			while (iVar0 < (iVar2 - iVar1) + 1)
			{
				__LIB_0__::func_123((iVar1 + iVar0), 32);
				__LIB_8__::func_783((iVar1 + iVar0));
				iVar0++;
			}
		}
	}
	else if (__LIB_1__::func_902(56, &iVar4, &iVar5, 0, 0))
	{
		iVar3 = 0;
		while (iVar3 < (iVar5 - iVar4) + 1)
		{
			__LIB_0__::func_121((iVar4 + iVar3), 32);
			__LIB_5__::func_458((iVar4 + iVar3));
			iVar3++;
		}
	}
	if (__LIB_0__::func_898(1850082804))
	{
		if (__LIB_0__::func_898(-538889627))
		{
			if (!__LIB_0__::func_117(709, 32))
			{
				__LIB_0__::func_123(709, 32);
				__LIB_8__::func_783(709);
			}
		}
	}
	else if (__LIB_0__::func_117(709, 32))
	{
		__LIB_0__::func_121(709, 32);
		if (__LIB_0__::func_898(-538889627))
		{
			__LIB_5__::func_458(709);
		}
	}
	if (__LIB_0__::func_898(-664512648))
	{
		if (!__LIB_0__::func_117(111, 32))
		{
			__LIB_0__::func_123(111, 32);
			__LIB_8__::func_783(111);
		}
		if (!__LIB_0__::func_117(112, 32))
		{
			__LIB_0__::func_123(112, 32);
			__LIB_8__::func_783(112);
		}
		if (!__LIB_0__::func_117(113, 32))
		{
			__LIB_0__::func_123(113, 32);
			__LIB_8__::func_783(113);
		}
		if (!__LIB_0__::func_117(114, 32))
		{
			__LIB_0__::func_123(114, 32);
			__LIB_8__::func_783(114);
		}
	}
	else
	{
		if (__LIB_0__::func_117(111, 32))
		{
			__LIB_0__::func_121(111, 32);
			__LIB_5__::func_458(111);
		}
		if (__LIB_0__::func_117(112, 32))
		{
			__LIB_0__::func_123(112, 32);
			__LIB_5__::func_458(112);
		}
		if (__LIB_0__::func_117(113, 32))
		{
			__LIB_0__::func_123(113, 32);
			__LIB_5__::func_458(113);
		}
		if (__LIB_0__::func_117(114, 32))
		{
			__LIB_0__::func_123(114, 32);
			__LIB_5__::func_458(114);
		}
	}
}

void func_455(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	ENTITY::IS_ENTITY_DEAD(Global_35);
	*iParam0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 0);
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 1));
	*iParam0 = (*iParam0 + ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 = ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 0);
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 1));
	*iParam1 = (*iParam1 + ATTRIBUTE::GET_MAX_ATTRIBUTE_RANK(Global_35, 2));
	*iParam1 += 6;
	iVar0 = __LIB_3__::func_347(joaat("UPGRADE_HEALTH_TANK_1"), 0, 0);
	iVar1 = __LIB_3__::func_347(joaat("UPGRADE_STAMINA_TANK_1"), 0, 0);
	iVar2 = __LIB_3__::func_347(joaat("UPGRADE_DEADEYE_TANK_1"), 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

bool func_456(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	struct<4> Var8;
	__LIB_0__::func_720(15, &Var0);
	Var0.f_2 = -566397848;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var0.f_1), &Var0);
	Var0.f_3 = iParam1;
	Var0.f_2 = 1368867264;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	__LIB_0__::func_720(15, &Var8);
	Var8.f_2 = -1222062814;
	Var8.f_3 = uVar5;
	if (DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&(Var8.f_1), &Var8))
	{
		Var8.f_2 = 939842437;
		if (DATAFILE::_DATAFILE_GET_HASH(&iVar6, &Var8))
		{
			iVar7 = iVar6;
			return __LIB_3__::func_463(iVar7, 1, 0);
		}
	}
	return true;
}

void func_457(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_69(iParam0))
	{
		return;
	}
	iVar0 = __LIB_1__::func_905(iParam0);
	__LIB_16__::func_201(iVar0);
	__LIB_11__::func_319(iVar0, __LIB_1__::func_931(iVar0));
}

void func_458(int iParam0, bool bParam1)
{
	int iVar0[18];
	int iVar19[18];
	int iVar38[6];
	int iVar45[6];
	int iVar52;
	int iVar53;
	bool bVar54;
	bool bVar55;
	iVar0[0] = 2137149309;
	iVar19[0] = -134624703;
	iVar0[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar19[1] = __LIB_1__::func_976();
	iVar0[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar19[2] = __LIB_1__::func_976();
	iVar0[3] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar19[3] = __LIB_1__::func_976();
	iVar0[4] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar19[4] = __LIB_1__::func_976();
	iVar0[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar19[5] = __LIB_1__::func_976();
	iVar0[6] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[6] = -1535722316;
	iVar0[7] = -1145367359; /* GXTEntry: "Pronghorn Leather Table Tops" */
	iVar19[7] = 1547994518;
	iVar0[8] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar19[8] = __LIB_1__::func_976();
	iVar0[9] = -1329287819; /* GXTEntry: "Pronghorn Skull" */
	iVar19[9] = -910918420;
	iVar0[10] = -848232571; /* GXTEntry: "Elk Antlers" */
	iVar19[10] = 495480888;
	iVar0[11] = -804860583; /* GXTEntry: "Scout Fire Ground Cover" */
	iVar19[11] = 2004706822;
	iVar0[12] = 1510372288; /* GXTEntry: "Moose Antlers" */
	iVar19[12] = 884576413;
	iVar0[13] = -7810518; /* GXTEntry: "Hanging Bones" */
	iVar19[13] = 778703691;
	iVar0[14] = -224845272; /* GXTEntry: "Campfire Log Seat Cover" */
	iVar19[14] = -421730990;
	iVar0[15] = 858182906; /* GXTEntry: "Campfire Seat Cover" */
	iVar19[15] = 514406510;
	iVar0[16] = 765991018; /* GXTEntry: "Wolf Skull" */
	iVar19[16] = -327708229;
	iVar0[17] = 708084994; /* GXTEntry: "Snake Skin Banjo Head" */
	iVar19[17] = 1048845581;
	if (iParam0 == 3 && ((__LIB_3__::func_463(iVar0[Global_1357549.f_575], 1, 0) || __LIB_6__::func_114(iVar0[Global_1357549.f_575])) || bParam1))
	{
		if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
		{
			if (!STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
			{
				__LIB_5__::func_993(iVar19[Global_1357549.f_575], 1);
				__LIB_6__::func_28(iVar19[Global_1357549.f_575]);
			}
		}
	}
	else if (__LIB_0__::func_30(iVar19[Global_1357549.f_575]))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(iVar19[Global_1357549.f_575]))
		{
			__LIB_5__::func_993(iVar19[Global_1357549.f_575], 0);
			STREAMING::_REMOVE_IMAP(iVar19[Global_1357549.f_575]);
		}
	}
	iVar38[0] = -1608451354; /* GXTEntry: "Boar Skin Rug" */
	iVar45[0] = 11;
	iVar38[1] = -147867326; /* GXTEntry: "Cougar Pelt Covered Chest" */
	iVar45[1] = 12;
	iVar38[2] = -1262979941; /* GXTEntry: "Ox Hide Rug" */
	iVar45[2] = 13;
	iVar38[3] = -837651311; /* GXTEntry: "Big Horn Ram Skull" */
	iVar45[3] = 14;
	iVar38[4] = -2119627968; /* GXTEntry: "Boar Skin Table Cover" */
	iVar45[4] = 16;
	iVar38[5] = -2089261255; /* GXTEntry: "Alligator Skull" */
	iVar45[5] = 15;
	bVar55 = false;
	iVar52 = 0;
	while (iVar52 < 6)
	{
		if (iParam0 == 3)
		{
			iVar53 = __LIB_6__::func_327(iVar38[iVar52], 3);
			bVar54 = __LIB_6__::func_114(iVar38[iVar52]);
			bVar55 = (iVar53 > 0 || bVar54);
		}
		if (bVar55 || bParam1)
		{
			if (__LIB_5__::func_783(iVar45[iVar52]) == 0)
			{
				__LIB_4__::func_495(iVar45[iVar52]);
			}
		}
		else if (__LIB_5__::func_783(iVar45[iVar52]))
		{
			__LIB_4__::func_524(iVar45[iVar52]);
		}
		iVar52++;
	}
}

bool func_459(int iParam0)
{
	switch (iParam0)
	{
		case 43:
		case 71:
		case 98:
			return true;
		case 9:
		case 79:
			if (__LIB_9__::func_648(iParam0, 1))
			{
				return false;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_460(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar7;
	int iVar8;
	if (!__LIB_0__::func_20(iParam0))
	{
		return;
	}
	bVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1888801[iParam0 /*35*/].f_26)) != false;
	bVar1 = false;
	if (bVar0)
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(&(Global_1888801[iParam0 /*35*/].f_26)))
		{
			SCRIPTS::REQUEST_SCRIPT(&(Global_1888801[iParam0 /*35*/].f_26));
			return;
		}
	}
	iVar2 = Global_1888801[iParam0 /*35*/].f_20;
	bVar7 = iParam0 == __LIB_0__::func_61();
	if ((bVar0 && bVar7) && Global_1879534)
	{
		bVar0 = false;
	}
	switch (iVar2)
	{
		case 3:
			if (__LIB_9__::func_648(iParam0, 1))
			{
				bVar1 = true;
			}
		default:
			break;
	}
	if (bVar0)
	{
		vVar3.x = iParam0;
		iVar8 = 1024;
		if (MISC::GET_HASH_KEY(&(Global_1888801[iParam0 /*35*/].f_26)) != joaat("GENERIC_GHOSTTOWN"))
		{
			if (iVar2 == 8)
			{
				iVar8 = 512;
			}
			else if (bVar7)
			{
				iVar8 = 5000;
			}
			else if (iVar2 == 3)
			{
				iVar8 = 2049;
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar8 = 5500;
		}
		if (Global_1888801[iParam0 /*35*/].f_9 != 0)
		{
			if (SCRIPTS::IS_THREAD_ACTIVE(Global_1888801[iParam0 /*35*/].f_9, false))
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1888801[iParam0 /*35*/].f_9, 523);
				}
				else
				{
					SCRIPTS::_0x7DE4643157AD646C(Global_1888801[iParam0 /*35*/].f_9);
				}
			}
			if (!SCRIPTS::_DOES_THREAD_EXIST(Global_1888801[iParam0 /*35*/].f_9))
			{
				Global_1888801[iParam0 /*35*/].f_9 = 0;
			}
			else
			{
				return;
			}
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Global_1888801[iParam0 /*35*/].f_26))) > 0)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				PLAYER::FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(&(Global_1888801[iParam0 /*35*/].f_26), 523);
			}
			else
			{
				SCRIPTS::_0x7423F7835770F619(MISC::GET_HASH_KEY(&(Global_1888801[iParam0 /*35*/].f_26)));
			}
			return;
		}
		vVar3.f_2 = iParam1;
		Global_1888801[iParam0 /*35*/].f_9 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&(Global_1888801[iParam0 /*35*/].f_26), &vVar3, 4, iVar8);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_1888801[iParam0 /*35*/].f_26));
	}
	__LIB_0__::func_24(iParam0, 1);
	__LIB_0__::func_24(iParam0, 2);
	__LIB_9__::func_582(bVar1);
}

int func_461()
{
	return 47;
}

Vector3 func_462(int iParam0)
{
	switch (iParam0)
	{
		case 78:
			return 2907.465f, 1311.91f, 45.43893f;
		case 76:
			return -275.6f, 805.3f, 119.4f;
		case 38:
			return -763f, -1269.2f, 44.5f;
		case 26:
			return -1809.3f, -349.3f, 164.6f;
		case 5:
			return 2512.3f, -1306f, 48f;
		case 105:
			return 1359.2f, -1302.9f, 77.8f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_463(var uParam0, int iParam1)
{
	__LIB_1__::func_336(&(uParam0->f_19), iParam1);
}

void func_464(int iParam0)
{
	__LIB_1__::func_336(&iLocal_14, iParam0);
}

void func_465(int iParam0)
{
	if (__LIB_0__::func_287(iParam0, 18, 1))
	{
		PED::_0x7D4E70A67A651C71(1);
		__LIB_0__::func_290(iParam0, 18, 1);
	}
}

bool func_466(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_1__::func_652())
	{
		return false;
	}
	if (__LIB_2__::func_84())
	{
		return false;
	}
	if (MISC::IS_STRING_NULL(__LIB_14__::func_262(iParam0)))
	{
		return false;
	}
	if (bParam1)
	{
		if (!__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 0, 1))
		{
			return false;
		}
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1415402, false))
	{
		return false;
	}
	return true;
}

void func_467(int iParam0, int iParam1)
{
	SCRIPTS::REQUEST_SCRIPT(__LIB_14__::func_262(iParam0));
	if (SCRIPTS::HAS_SCRIPT_LOADED(__LIB_14__::func_262(iParam0)))
	{
		Global_1415402 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(__LIB_14__::func_262(iParam0), &iParam1, 1, 1024);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(__LIB_14__::func_262(iParam0));
	}
}

bool func_468(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!__LIB_6__::func_625(iParam0, iParam1, iParam2))
	{
		if (bParam3)
		{
			__LIB_14__::func_353(iParam0, iParam1, iParam2);
		}
		return true;
	}
	return false;
}

bool func_469(int iParam0)
{
	if (!__LIB_0__::func_287(iParam0, 18, 1))
	{
		PED::_0xF008E0BA1FE1D644(1);
		__LIB_0__::func_288(iParam0, 18, 1);
	}
	return PED::_0x5E420FF293EE5472();
}

bool func_470(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_2__::func_767(iParam0, 0))
	{
		return false;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_120(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	VOLUME::_0xE2BE6FFA4A13CBB0(iParam1, iVar0, iParam2);
	return true;
}

void func_471(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if ((MISC::GET_FRAME_COUNT() % 10) != 0)
	{
		return;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	if (!__LIB_0__::func_29(iParam1))
	{
		return;
	}
	iVar0 = __LIB_1__::func_334(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (*iParam4)
		{
			iVar3 = ITEMSET::CREATE_ITEMSET(true);
			iVar1 = ENTITY::_0x84CCF9A12942C83D(iParam2, iVar3, 1, 1, 0, 0);
			iVar4 = 0;
			while (iVar4 < iVar1)
			{
				iVar5 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar3);
				iVar6 = MISC::_GET_PED_FROM_INDEXED_ITEM(iVar5);
				if (!__LIB_0__::func_125(iVar6))
				{
				}
				else if (__LIB_1__::func_16(iVar6))
				{
				}
				else if (__LIB_14__::func_458(iVar6))
				{
				}
				else
				{
					__LIB_14__::func_459(iVar6, iParam0);
					iVar2++;
				}
				iVar4++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar3);
			if (iVar2 < iParam3)
			{
				*iParam4 = 1;
			}
			else
			{
				*iParam4 = 0;
			}
		}
	}
	else
	{
		*iParam4 = 1;
	}
}

void func_472(int iParam0, bool bParam1)
{
	struct<16> Var0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (PLAYER::_0x5B7B97E99F84138B(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (Global_1415404)
	{
		if (!__LIB_1__::func_929("region_town_lockdown_generic"))
		{
			Global_1415404 = SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("REGION_TOWN_LOCKDOWN_GENERIC")) > 0;
		}
		return;
	}
	if (Global_1935630.f_22 || Global_1934266.f_61)
	{
		return;
	}
	if (__LIB_14__::func_274(iParam0))
	{
		if (!bParam1)
		{
		}
		Global_1415404 = 1;
		StringCopy(&(Var0.f_10), "region_town_lockdown_generic", 32);
		Var0.f_15 = 1;
		Var0 = iParam0;
		Var0.f_3 = bParam1;
		Var0.f_14 = 1024;
		__LIB_4__::func_709(Var0, 0);
	}
}

bool func_473(var uParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_0__::func_113())
	{
		return false;
	}
	iVar0 = __LIB_0__::func_12();
	switch (iVar0)
	{
		case 23:
		case 117:
			iVar0 = 26;
			break;
		case 97:
			iVar0 = 105;
			break;
	}
	if (!__LIB_6__::func_625(iVar0, iParam1, 1024))
	{
		if (__LIB_2__::func_815(uParam0) && __LIB_2__::func_140(0))
		{
			__LIB_14__::func_353(iVar0, iParam1, 1024);
			uParam0->f_21 = -1;
			return true;
		}
	}
	return false;
}

void func_474(var uParam0)
{
	int iVar0;
	int iVar1;
	__LIB_1__::func_283(&(uParam0->f_34), 1);
	uParam0->f_40 = { __LIB_1__::func_977() };
	uParam0->f_21 = -1;
	if (__LIB_6__::func_621(uParam0, 16384))
	{
		__LIB_2__::func_802(uParam0, 16384);
	}
	__LIB_2__::func_802(uParam0, 32768);
	__LIB_2__::func_802(uParam0, 1024);
	__LIB_0__::func_37(&uLocal_15);
	if (__LIB_6__::func_621(uParam0, 4096))
	{
		iVar0 = __LIB_0__::func_560(__LIB_0__::func_12(), uParam0->f_24);
		iVar1 = __LIB_1__::func_334(*uParam0);
		if (__LIB_2__::func_799(iVar0) && __LIB_4__::func_856(iVar1, 1))
		{
			__LIB_3__::func_820(iVar0, 0);
			__LIB_2__::func_802(uParam0, 8192);
			__LIB_2__::func_802(uParam0, 4096);
		}
	}
}

float func_475(vector3 vParam0, vector3 vParam3)
{
	vector3 vVar0;
	vVar0 = { vParam3 - vParam0 };
	return MISC::GET_HEADING_FROM_VECTOR_2D(vVar0.x, vVar0.y);
}

bool func_476(char* sParam0)
{
	return AUDIO::IS_SCRIPTED_CONVERSATION_LOADED(sParam0);
}

void func_477(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	__LIB_5__::func_67(uParam0);
	uParam0->f_4 = iParam1;
	__LIB_1__::func_737(uParam0, iParam2, iParam3, iParam4, iParam5);
}

void func_478(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	__LIB_5__::func_111(uParam0, iParam1, sParam2, iParam3, iParam4, bParam5);
}

bool func_479(var uParam0)
{
	if (__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 16777216))
	{
		return false;
	}
	if (!__LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 2))
	{
		return false;
	}
	if (!Global_1935630.f_12)
	{
		return ((TASK::GET_IS_TASK_ACTIVE(Global_35, 3) || __LIB_8__::func_620(Global_35, -2017877118)) || ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1));
	}
	return false;
}

bool func_480(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	bool bVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	if (bParam3)
	{
		uParam0->f_871++;
		if (uParam0->f_871 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_871 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_5__::func_68(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_5__::func_84(uParam0) };
			if (!__LIB_0__::func_86(vVar0))
			{
				__LIB_0__::func_487(uParam0, vVar0);
			}
		}
		return false;
	}
	bVar3 = __LIB_8__::func_619(Global_35, __LIB_0__::func_85(uParam0), 1);
	if (__LIB_0__::func_84(uParam0, 128) || __LIB_0__::func_84(uParam0, 256))
	{
		if ((bVar3 >= __LIB_4__::func_569(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
		{
			if (uParam0->f_889)
			{
				__LIB_1__::func_436();
				uParam0->f_889 = 0;
			}
			__LIB_4__::func_570(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_804);
			}
			__LIB_5__::func_67(uParam0);
			__LIB_4__::func_550(uParam0, 128, 1);
			__LIB_4__::func_550(uParam0, 256, 1);
			__LIB_4__::func_550(uParam0, 4096, 1);
			__LIB_4__::func_550(uParam0, 32768, 1);
			__LIB_4__::func_550(uParam0, 16777216, 1);
		}
	}
	else if (bVar3 <= __LIB_4__::func_547(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804))
			{
				if (__LIB_4__::func_547(uParam0) >= __LIB_4__::func_569(uParam0))
				{
				}
				Var4 = { __LIB_4__::func_571(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_5__::func_69(uParam0);
				}
				Var4 = { __LIB_4__::func_571(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_804 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_800), iVar12, &Var4, false, true);
				__LIB_1__::func_737(uParam0, 0, 0, 0, 0);
				__LIB_0__::func_88(uParam0, 128);
			}
		}
	}
	if (__LIB_0__::func_84(uParam0, 128))
	{
		if (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304))
		{
			return true;
		}
		__LIB_5__::func_350(uParam0);
		if (!uParam0->f_889)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_889 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_804, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_5__::func_65(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_822[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_822[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_822[iVar14 /*9*/].f_8)
						{
							uParam0->f_822[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_804, &(uParam0->f_822[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &(uParam0->f_822[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_804, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_804, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_804, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_804, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_804, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			__LIB_0__::func_88(uParam0, 256);
			__LIB_4__::func_550(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

bool func_481(float fParam0, float fParam1)
{
	if (!__LIB_0__::func_899(fParam0))
	{
		__LIB_4__::func_89(fParam0, 0);
		return false;
	}
	if (__LIB_1__::func_583(fParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_482(var uParam0)
{
	var uVar0;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	iVar16 = __LIB_4__::func_939(uParam0);
	iVar17 = __LIB_5__::func_24(iVar16);
	iVar18 = __LIB_5__::func_279(uParam0, iVar16);
	if (uParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2504)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_11__::func_317(uParam0, &(uParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_4__::func_972(&(uParam0->f_8269[iVar19 /*16*/]));
				}
				else if (__LIB_11__::func_318(uParam0, &(uParam0->f_8269[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_5__::func_29(&(uParam0->f_8269[iVar19 /*16*/]));
					if (iVar19 < (uParam0->f_8269.f_2504 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269[iVar19 /*16*/]), &(uParam0->f_8269[(uParam0->f_8269.f_2504 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269[uParam0->f_8269.f_2504 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2504 = (uParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2505)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_641[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_489(uParam0, &(uParam0->f_8269.f_641[iVar19 /*16*/]), iVar16, iVar17, iVar18, 1))
				{
					__LIB_4__::func_990(&(uParam0->f_8269.f_641[iVar19 /*16*/]));
					if (iVar19 < (uParam0->f_8269.f_2505 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[iVar19 /*16*/]), &(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1) /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[(uParam0->f_8269.f_2505 - 1) /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_641[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2505 = (uParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2506)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_5__::func_489(uParam0, &(uParam0->f_8269.f_1282[iVar19 /*16*/]), iVar16, iVar17, iVar18, 0))
				{
					if (__LIB_1__::func_388(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 1))
					{
						if (__LIB_0__::func_755(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), 4))
						{
							__LIB_4__::func_991(&(uParam0->f_8269));
						}
						if (iVar19 < (uParam0->f_8269.f_2506 - 1))
						{
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), &(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1) /*16*/]), 16);
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[(uParam0->f_8269.f_2506 - 1) /*16*/]), &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							MISC::_COPY_MEMORY(&(uParam0->f_8269.f_1282[iVar19 /*16*/]), &uVar0, 16);
						}
						uParam0->f_8269.f_2506 = (uParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (uParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < uParam0->f_8269.f_2507)
		{
			if (__LIB_0__::func_755(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1048576))
			{
				if (__LIB_11__::func_317(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_9__::func_100(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
					__LIB_0__::func_324(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 1);
				}
				else if (__LIB_11__::func_318(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), iVar16, iVar17, iVar18))
				{
					__LIB_9__::func_100(uParam0, &(uParam0->f_8269.f_2243[iVar19 /*16*/]), 0);
					__LIB_0__::func_324(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), 2);
					if (iVar19 < (uParam0->f_8269.f_2507 - 1))
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), &(uParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), 16);
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 + 1 /*16*/]), &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						MISC::_COPY_MEMORY(&(uParam0->f_8269.f_2243[iVar19 /*16*/]), &uVar0, 16);
					}
					uParam0->f_8269.f_2507 = (uParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

int func_483(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_11__::func_730(uParam0, uParam1))
	{
		return 0;
	}
	if (__LIB_0__::func_31(uParam1->f_10))
	{
		PED::SET_PED_RESET_FLAG(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam1), 53, true);
	}
	__LIB_11__::func_33(uParam1);
	__LIB_5__::func_311(uParam1);
	if (!bParam2)
	{
		__LIB_11__::func_723(uParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_EXPLOSION"):
				__LIB_11__::func_724(uParam0, uParam1, iVar0);
				break;
			case joaat("EVENT_ENTITY_DAMAGED"):
			case 2145012826:
				__LIB_11__::func_725(uParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	__LIB_11__::func_726(uParam0, uParam1);
	__LIB_5__::func_75(uParam1);
	return 0;
}

void func_484(int iParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(vLocal_14.x))
	{
		vLocal_14.x = ITEMSET::CREATE_ITEMSET(false);
	}
}

void func_485(int iParam0, int* iParam1, var uParam2, float fParam3, float fParam4, char* sParam5)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !MISC::IS_BIT_SET(iParam1->f_21, 0))
	{
		return;
	}
	__LIB_13__::func_388(iParam1, *iParam0, iParam1->f_56, 0);
	fVar0 = __LIB_0__::func_514(fParam4 >= 0f, fParam4, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*iParam0, true, false)));
	__LIB_13__::func_387(iParam1, fParam3);
	__LIB_11__::func_655(iParam0, iParam1, uParam2, fVar0);
	__LIB_6__::func_741(iParam1);
	if (MISC::IS_BIT_SET(iParam1->f_21, 20))
	{
		bVar1 = MISC::IS_STRING_NULL_OR_EMPTY(sParam5);
		__LIB_6__::func_785(iParam1, uParam2, iParam0, bVar1, sParam5, fVar0);
		if (!PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			bVar2 = true;
			if (!MISC::IS_BIT_SET(*iParam1, 12))
			{
				bVar2 = __LIB_6__::func_789(iParam1, iParam0);
			}
			if (bVar2 && !MISC::IS_BIT_SET(*iParam1, 13))
			{
				__LIB_3__::func_109(iParam1);
			}
		}
	}
}

float func_486(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	fVar16 = 10000f;
	switch (uParam0->f_1016[iParam1 /*41*/])
	{
		case 0:
			fVar12 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true);
			fVar13 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_4, true);
			vVar0 = { uParam0->f_1016[iParam1 /*41*/].f_4 - uParam0->f_1016[iParam1 /*41*/].f_1 };
			if (__LIB_4__::func_788(&vVar3, uParam0->f_1016[iParam1 /*41*/].f_1, uParam0->f_1016[iParam1 /*41*/].f_4, vVar0, Global_36))
			{
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, Global_36, true);
			}
			if (fVar12 < fVar13 && fVar12 < fVar16)
			{
				return fVar12;
			}
			else if (fVar13 < fVar16)
			{
				return fVar13;
			}
			else
			{
				return fVar16;
			}
			break;
		case 1:
			if (Global_36.f_2 >= uParam0->f_1016[iParam1 /*41*/].f_1.f_2 && Global_36.f_2 <= (uParam0->f_1016[iParam1 /*41*/].f_1.f_2 + uParam0->f_1016[iParam1 /*41*/].f_10))
			{
				__LIB_14__::func_480(uParam0, iParam1, &uVar6, vVar9, &fVar12, &fVar13, &fVar14, &fVar15);
				if (fVar14 < fVar15)
				{
					fVar16 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, uParam0->f_1016[iParam1 /*41*/].f_1, true) - uParam0->f_1016[iParam1 /*41*/].f_11);
					if (fVar16 < 0f)
					{
					}
				}
				if (fVar12 < fVar13 && fVar12 < fVar16)
				{
					return fVar12;
				}
				else if (fVar13 < fVar16)
				{
					return fVar13;
				}
				else
				{
					return fVar16;
				}
			}
			break;
	}
	return 10000f;
}

bool func_487(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_20, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_20, 4);
		__LIB_0__::func_25(iLocal_20, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		__LIB_14__::func_279(iLocal_20);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_20);
		__LIB_2__::func_819(iLocal_20);
		__LIB_2__::func_755(iLocal_20);
		if (!__LIB_2__::func_756(iLocal_20, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_488(int iParam0)
{
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_7__::func_855(18, 952, iLocal_9, iParam0, iLocal_10, iLocal_11, 12, -1082130432 /* Float: -1f */, 0, 0);
		__LIB_2__::func_783();
	}
}

char* func_489(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "script@rcm@txd@ig@ig2_squirrel_on_mantel";
			break;
	}
	return sVar0;
}

char* func_490(int iParam0)
{
	char* sVar0;
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_IG2_MAIN_ACTION";
			break;
		case 1:
			sVar0 = "pl_IG2_PLACE_SQUIRREL";
			break;
		case 2:
			sVar0 = "pl_IG2_PLACE_SQUIRREL2";
			break;
		case 3:
			sVar0 = "pl_IG2_PLACE_SQUIRREL3";
			break;
		case 4:
			sVar0 = "pl_IG2_PLACE_SQUIRREL4";
			break;
	}
	return sVar0;
}

int func_491()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (__LIB_0__::func_448(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_MARITAL"))))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_492()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (__LIB_0__::func_314(COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TAXIDERMY"), joaat("TAXIDERMY_MARITAL"))))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_493(int iParam0)
{
	if (__LIB_0__::func_923(Global_40.f_12019.f_27[__LIB_1__::func_34(iParam0, 15) /*2*/]))
	{
		if (__LIB_1__::func_426(Global_40.f_12019.f_27[__LIB_1__::func_34(iParam0, 15) /*2*/], 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

void func_494(int iParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	int iVar0;
	if (bParam4 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(6, sParam1, sParam2));
}

bool func_495(var uParam0, char* sParam1, char[4] cParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		return false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1) || !ANIMSCENE::_0x0DF57F86FE71DBE5(*uParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(*uParam0, sParam1);
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(*uParam0, sParam1))
	{
		return false;
	}
	return true;
}

bool func_496(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

var func_497()
{
	return Global_1934266.f_26;
}

void func_498()
{
	if (__LIB_0__::func_898(-978957786))
	{
		if (!Global_1934765.f_296)
		{
			MAP::_0x1392105DA88BBFFB(joaat("EXTERIOR_THIEVESLANDINGBOAT"), -1350f, -2300f, 0, 0);
			Global_1934765.f_296 = 1;
		}
	}
	else if (Global_1934765.f_296)
	{
		MAP::_0xE057FEA9A22EB3EE(joaat("EXTERIOR_THIEVESLANDINGBOAT"));
		Global_1934765.f_296 = 0;
	}
}

bool func_499(int iParam0)
{
	if (iParam0 == 0)
	{
		__LIB_0__::func_11();
		LAW::_0x9BBDCB8DF789EBC1(PLAYER::PLAYER_ID(), 0);
		__LIB_0__::func_24(iLocal_17, 2048);
		if (__LIB_0__::func_69(__LIB_1__::func_898()))
		{
			__LIB_1__::func_883(__LIB_1__::func_898(), 8);
		}
		__LIB_0__::func_25(iLocal_17, 4);
		__LIB_0__::func_25(iLocal_17, 8);
		__LIB_1__::func_899(0);
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_1__::func_900(0);
		}
		__LIB_0__::func_11(iLocal_17);
		__LIB_0__::func_18();
		return false;
	}
	else
	{
		__LIB_2__::func_770(iLocal_17);
		__LIB_2__::func_819(iLocal_17);
		__LIB_2__::func_755(iLocal_17);
		if (!__LIB_2__::func_756(iLocal_17, 0))
		{
			return false;
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

void func_500(var uParam0)
{
	if (uParam0->f_1)
	{
		return;
	}
	__LIB_0__::func_11(uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_501(int iParam0, int iParam1)
{
	if (!__LIB_10__::func_783(iParam0))
	{
		return false;
	}
	return (Global_40.f_9020[iParam0] && iParam1) != 0;
}

void func_502(int iParam0, int iParam1)
{
	if (!__LIB_10__::func_783(iParam0))
	{
		return;
	}
	Global_40.f_9020[iParam0] = (Global_40.f_9020[iParam0] || iParam1);
}

bool func_503(int iParam0)
{
	return __LIB_17__::func_501(iParam0, 2);
}

void func_504(int iParam0)
{
	__LIB_17__::func_502(iParam0, 2);
}

bool func_505(int iParam0)
{
	switch (iParam0)
	{
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			return true;
	}
	return false;
}

bool func_506(int iParam0)
{
	return VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0));
}

void func_507(vector3 vParam0, float fParam3, var uParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { __LIB_2__::func_66(vVar0, vVar3, 0f) };
	vVar9 = { __LIB_2__::func_67(vVar0, vVar3, 0f) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar6, vVar9, uParam4);
}

bool func_508(int iParam0, var uParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_6__::func_118(iParam0) && iParam0 != 14)
	{
		return false;
	}
	if (iParam0 != 14)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			if (__LIB_1__::func_992(Global_35, VEHICLE::_0x1E8A921112891651(Global_1425371[iParam0 /*373*/].f_1), 1) < (fParam2 * fParam2))
			{
				return true;
			}
			*uParam1 = VEHICLE::_0x6E585A616ABB8401(Global_1425371[iParam0 /*373*/].f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (__LIB_0__::func_232(Global_35, *uParam1, 1) < (fParam2 * fParam2))
		{
			return true;
		}
		if (iParam3 < 0)
		{
			iVar0 = VEHICLE::_0x671A07C9A1CD50A5(*uParam1);
		}
		else
		{
			iVar0 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam1, iParam3);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (__LIB_0__::func_232(Global_35, iVar0, 1) < (fParam2 * fParam2))
			{
				return true;
			}
		}
		iVar1 = VEHICLE::_0x60B7D1DCC312697D(*uParam1);
		if (iVar1 > 3)
		{
			iVar1 = (iVar1 / 2);
			iVar2 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam1, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_0__::func_232(Global_35, iVar2, 1) < (fParam2 * fParam2))
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_509(int iParam0, vector3 vParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (AUDIO::_0xE368E8422C860BA7("Coal_Fall", "Annesburg_Coal_Chute_Sounds", -2) && AUDIO::_0x84848E1C0FC67DBB(iParam0))
	{
		AUDIO::_0xDCF5BA95BBF0FABA(iParam0, "Coal_Fall", vParam1, "Annesburg_Coal_Chute_Sounds", 0, 0, 1);
	}
}

void func_510(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!AUDIO::_0x84848E1C0FC67DBB(iParam0))
	{
		AUDIO::_0x3210BCB36AF7621B(iParam0);
	}
}

int func_511(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_83(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1879534.f_7300)
	{
		if (!MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 2))
		{
			if (MISC::IS_BIT_SET(Global_1879534.f_7301.f_2[iVar0 /*4*/], 1))
			{
				switch (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/])
				{
					case -2093459088:
						if (Global_1879534.f_1911[Global_1879534.f_7301.f_2[iVar0 /*4*/].f_1 /*3*/].f_2 == iParam0)
						{
							return 1;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_512(int iParam0, int iParam1)
{
	int iVar0;
	if (!__LIB_2__::func_824(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0 /*26*/][iVar0 /*5*/].f_3 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_513(int iParam0)
{
	__LIB_8__::func_981(iParam0, 16);
}

char* func_514(int iParam0)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	sVar0 = "script@respawn@sky@SkyTL_";
	sVar1 = __LIB_0__::func_67(__LIB_0__::func_98(__LIB_12__::func_182(iParam0), __LIB_12__::func_125(), 1, 63));
	sVar2 = __LIB_0__::func_67(__LIB_0__::func_98(sVar0, sVar1, 1, 63));
	return sVar2;
}

void func_515()
{
	Global_1347343.f_11 |= 128;
}

bool func_516(var uParam0)
{
	if ((((((PED::IS_PED_PERFORMING_MELEE_ACTION(*uParam0, 1, 0) || PED::IS_PED_PERFORMING_MELEE_ACTION(*uParam0, 128, 0)) || PED::IS_PED_PERFORMING_MELEE_ACTION(*uParam0, 512, 0)) || PED::IS_PED_PERFORMING_MELEE_ACTION(*uParam0, 8192, 0)) || PED::IS_PED_PERFORMING_MELEE_ACTION(*uParam0, 8192, joaat("AR_GRAPPLE_ATTACK"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(*uParam0, 8192, joaat("AR_GRAPPLE_ATTACK_V2"))) || PED::IS_PED_PERFORMING_MELEE_ACTION(*uParam0, 8192, joaat("AR_GRAPPLE_ATTACK_V3")))
	{
		return true;
	}
	return false;
}

bool func_517(int iParam0)
{
	return (iParam0 % 2) == 0;
}

void func_518()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar1 = 932;
	iVar2 = 952;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		__LIB_8__::func_783((iVar1 + iVar0));
		__LIB_0__::func_123(iVar0, 32);
		iVar0++;
	}
}

int func_519(var uParam0, vector3 vParam1, char* sParam4, char* sParam5, int iParam6, float fParam7, float fParam8, bool bParam9, bool bParam10)
{
	char cVar0[64];
	if (Global_1935630.f_12)
	{
		return 0;
	}
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return 0;
	}
	if (!__LIB_8__::func_864(PLAYER::PLAYER_PED_ID(), vParam1, fParam8, 1, 1))
	{
		StringCopy(&cVar0, sParam5, 64);
		__LIB_5__::func_589(uParam0, cVar0, 1, 0);
		return 1;
	}
	else if (!__LIB_8__::func_864(PLAYER::PLAYER_PED_ID(), vParam1, fParam7, 1, 1))
	{
		if (!__LIB_5__::func_443(uParam0, iParam6))
		{
			__LIB_5__::func_578(uParam0, sParam4, bParam9);
			__LIB_5__::func_470(uParam0, iParam6);
		}
		return 1;
	}
	else if (__LIB_5__::func_443(uParam0, iParam6))
	{
		__LIB_5__::func_471(uParam0, iParam6);
		if (!__LIB_5__::func_445(uParam0))
		{
			if (bParam10)
			{
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				__LIB_5__::func_446(uParam0);
			}
		}
		else
		{
			__LIB_5__::func_447(uParam0);
		}
	}
	return 0;
}

int func_520(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	var uVar0;
	struct<11> Var1;
	Var1.f_10 = 7;
	Var1 = iParam0;
	Var1.f_1 = iParam1;
	Var1.f_2 = iParam2;
	Var1.f_6 = { fParam3, fParam4, fParam5 };
	Var1.f_9 = fParam6;
	return __LIB_4__::func_720(&uVar0, &Var1);
}

void func_521(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar1, bParam1);
		}
		iVar0++;
	}
}

int func_522(var uParam0)
{
	int iVar0[5];
	int iVar6;
	int iVar7;
	iVar6 = 0;
	while (iVar6 <= (*uParam0 - 1))
	{
		if ((uParam0[iVar6 /*5*/])->f_4 < (uParam0[iVar6 /*5*/])->f_3)
		{
			iVar0[iVar7] = iVar6;
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 > 0)
	{
		return iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar7)];
	}
	return -1;
}

void func_523(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if ((VEHICLE::_IS_DRAFT_VEHICLE(iParam0) || __LIB_4__::func_831(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			VEHICLE::_0xD826690B5CF3BEFF(iParam0, 1f);
			VEHICLE::_0x850CE59DEC2028F3(iParam0, 1);
			VEHICLE::_0x6090A031C69F384E(iParam0, 1);
		}
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK(iParam0, true);
		VEHICLE::SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(iParam0, true);
		VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(iParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iParam0, false);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam0, true);
		if (VEHICLE::_0xE777DDF3E78397E8(iParam0) > 0)
		{
			VEHICLE::SET_VEHICLE_CAN_BREAK(iParam0, true);
		}
	}
}

void func_524(var uParam0, char* sParam1, int iParam2, bool bParam3)
{
	vector3 vVar0[24];
	StringCopy(&cVar0, sParam1, 24);
	__LIB_1__::func_104(&(uParam0->f_5310), cVar0, 1, iParam2, bParam3, 0);
}

bool func_525(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	if (!__LIB_0__::func_899(&(uParam0->f_13109)))
	{
		__LIB_4__::func_89(&(uParam0->f_13109), 0);
	}
	else if (__LIB_1__::func_583(&(uParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (__LIB_3__::func_358(uParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < __LIB_4__::func_955(uParam0->f_5421))
		{
			iVar2 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = __LIB_4__::func_956(uParam0->f_5421, iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !PED::_0xA0BC8FAED8CFEB3C(iVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2), iVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar5))
						{
							if (!PED::_0xA0BC8FAED8CFEB3C(iVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iLocal_14))
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_14);
		iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
		if (ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar7))
			{
				iVar8 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar8) && !PED::_0xA0BC8FAED8CFEB3C(iVar8))
				{
					iVar0 = 0;
				}
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(iVar7) && ENTITY::IS_ENTITY_A_VEHICLE(iVar7)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7)))
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					iVar10 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7), iVar9);
					if (!ENTITY::IS_ENTITY_DEAD(iVar10))
					{
						if (!PED::_0xA0BC8FAED8CFEB3C(iVar10))
						{
							iVar0 = 0;
						}
					}
					iVar9++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_526(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	if (((__LIB_0__::func_2() != -1 || __LIB_4__::func_939(uParam0) == 25) || __LIB_4__::func_939(uParam0) == 26) || Global_1935630.f_12)
	{
		return 0;
	}
	bVar0 = __LIB_5__::func_331(uParam0, __LIB_4__::func_939(uParam0), 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(uParam0->f_5423[iVar1 /*65*/])))
		{
			if (__LIB_5__::func_58(uParam0->f_5423[iVar1 /*65*/].f_7, iParam1))
			{
				__LIB_11__::func_835(uParam0, &(uParam0->f_5423[iVar1 /*65*/]), bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

bool func_527(var uParam0, int iParam1, char[4] cParam2, int iParam3, char[4] cParam4, char[4] cParam5, int iParam6, float fParam7, float fParam8)
{
	char cVar0[64];
	char cVar8[64];
	bool bVar16;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	StringCopy(&cVar0, "HORSE_RET", 64);
	if (__LIB_0__::func_48(Global_35, iParam1, fParam7, 1))
	{
		StringCopy(&cVar0, "HORSE_MOUNT", 64);
	}
	StringCopy(&cVar8, "HORSE_FAIL", 64);
	bVar16 = __LIB_11__::func_833(uParam0, iParam1, cVar0, cVar8, 512, cParam2, cParam4, cParam5);
	if (__LIB_4__::func_938(uParam0) != 1 && __LIB_4__::func_937(uParam0, 64))
	{
		__LIB_10__::func_936(uParam0, iParam1, iParam6, bVar16, iParam3);
		__LIB_4__::func_969(uParam0, 64);
		if (bVar16)
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 1);
		}
		else
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
		}
	}
	if (bVar16)
	{
		if (!__LIB_0__::func_86(uParam0->f_5304) && __LIB_0__::func_94(iParam1, uParam0->f_5304, 1) >= fParam8)
		{
			if (__LIB_0__::func_163(iParam1, 2043986356))
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
			}
			__LIB_1__::func_538(1);
		}
		PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iParam1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
		return true;
	}
	return false;
}

void func_528(var uParam0)
{
	__LIB_4__::func_945(uParam0, 1);
	__LIB_4__::func_945(uParam0, 2);
	uParam0->f_607 = uParam0->f_607;
}

void func_529(int iParam0)
{
	if (Global_1900383.f_378 != iParam0)
	{
	}
	Global_1900383.f_378 = iParam0;
}

void func_530(var uParam0, int iParam1)
{
	__LIB_11__::func_747(uParam0, iParam1);
	__LIB_5__::func_292(uParam0, iParam1, 26);
}

int func_531(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (__LIB_5__::func_261(uParam0))
	{
		if (!__LIB_4__::func_988(&(uParam0->f_7375), iParam1, 4))
		{
			__LIB_5__::func_17(&(uParam0->f_7375), iParam1, 4);
			return 1;
		}
	}
	return __LIB_9__::func_444(&(uParam0->f_7375), iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_532()
{
	if (STREAMING::_0x8A3945405B31048F() > 0.6f)
	{
		__LIB_5__::func_521(0.6f);
	}
}

bool func_533(var uParam0, int iParam1, var uParam2, var uParam3, char* sParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1) && iParam9 == joaat("BLIP_STYLE_COMPANION"))
	{
		iParam9 = 408396114;
	}
	bVar0 = __LIB_8__::func_818(uParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), uParam2, uParam3, 1, sParam4, iParam5, fParam7, fParam8);
	if (__LIB_4__::func_938(uParam0) != 1 && __LIB_4__::func_937(uParam0, 64))
	{
		if (bParam10)
		{
			__LIB_10__::func_936(uParam0, iParam1, iParam9, bVar0, iParam6);
		}
		__LIB_4__::func_969(uParam0, 64);
	}
	return bVar0;
}

void func_534(bool bParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_0__::func_105(1);
	if (bParam7)
	{
		__LIB_0__::func_82(1, 0, 0);
	}
	HUD::_DISPLAY_HUD_COMPONENT(724769646);
	HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam8)
		{
			CAM::DESTROY_ALL_CAMS(false);
		}
		if (bParam1)
		{
			if (bParam2)
			{
				CAM::RENDER_SCRIPT_CAMS(false, true, iParam5, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1f);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam3, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1f);
			}
		}
		if (bParam0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
		}
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (bParam6)
	{
	}
}

void func_535(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, joaat("REL_GANG_DUTCHS"));
			PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 35, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 36, true);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			}
		}
	}
}

bool func_536(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return true;
			}
			break;
		case 1:
			if (bParam2)
			{
				return true;
			}
			break;
		case 2:
			if (bParam3)
			{
				return true;
			}
			break;
		case 3:
			if (bParam4)
			{
				return true;
			}
			break;
		case 4:
			if (bParam5)
			{
				return true;
			}
			break;
		case 5:
			if (bParam6)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_537()
{
	return iLocal_30;
}

void func_538(float fParam0, float fParam1, float fParam2)
{
	*fParam0 = (*fParam0 + ((((fParam1 - *fParam0) * fParam2) * 30f) * BUILTIN::TIMESTEP()));
}

void func_539(float fParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, float fParam13, float fParam14, bool bParam15)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	bool bVar13;
	float fVar14;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	vVar6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam2, vVar0) };
	fVar9 = BUILTIN::VDIST(vVar0, vVar3);
	fVar10 = 0f;
	fVar11 = (fParam11 - fParam8);
	fVar12 = (fParam8 - fParam9);
	if (vVar6.y < 1f)
	{
		if (fVar9 > fParam5)
		{
			bVar13 = false;
			if (fVar9 > fParam6)
			{
				if (fVar9 > (fParam6 * 2f))
				{
					bVar13 = true;
				}
				fVar9 = fParam6;
			}
			fVar10 = ((fVar9 - fParam5) / (fParam6 - fParam5));
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2) || bVar13)
			{
				*fParam0 = (fParam9 - ((fParam9 - fParam10) * fVar10));
			}
			else
			{
				*fParam0 = fParam9;
			}
		}
		else if (fVar9 > fParam4)
		{
			fVar10 = ((fVar9 - fParam4) / (fParam5 - fParam4));
			*fParam0 = (fParam8 - (fVar12 * fVar10));
		}
		else
		{
			if (fVar9 < fParam3)
			{
				fVar9 = fParam3;
			}
			fVar10 = ((fParam4 - fVar9) / (fParam4 - fParam3));
			if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()) && bParam15)
			{
				*fParam0 = (fParam8 + ((fVar10 * fVar11) * 2f));
			}
			else
			{
				*fParam0 = (fParam8 + (fVar10 * fVar11));
			}
		}
	}
	else
	{
		if (fVar9 > fParam7)
		{
			fVar9 = fParam7;
		}
		fVar10 = (fVar9 / fParam7);
		if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()) && bParam15)
		{
			*fParam0 = ((fParam8 * 2f) + fVar10);
		}
		else
		{
			*fParam0 = (fParam8 + fVar10);
			if (*fParam0 > 1.7f)
			{
				*fParam0 = 1.7f;
			}
		}
	}
	if (bParam12)
	{
		fVar14 = fParam13;
		if (PLAYER::_0xB16223CB7DA965F0(PLAYER::PLAYER_ID()) && bParam15)
		{
			fParam14 = (fParam14 * 2f);
			fParam13 = (fParam13 * 2f);
		}
		if (*fParam0 > 1f)
		{
			fVar14 = (fParam13 + ((fParam14 - fParam13) * (*fParam0 - 1f)));
		}
		fVar14 = fVar14;
	}
}

bool func_540(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = 0f;
	fVar1 = 0f;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(ENTITY::GET_ENTITY_COORDS(*iParam0, true, false), &fVar0, &fVar1);
			if (MISC::ABSF((fVar0 - 0.5f)) < fParam1)
			{
				if (MISC::ABSF((fVar1 - 0.5f)) < fParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

void func_541(bool bParam0)
{
	int iVar0;
	int iVar1;
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true, 0, true);
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true, 1, true);
	if (iVar0 != joaat("WEAPON_UNARMED") || iVar1 != joaat("WEAPON_UNARMED"))
	{
		WEAPON::_HIDE_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 2, false);
		TASK::TASK_SWAP_WEAPON(PLAYER::PLAYER_PED_ID(), 1, 1, 0, 0);
	}
	if (bParam0)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 249, true);
	}
}

void func_542(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!PED::IS_PED_INJURED(*iParam0))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_PLAYER_ENEMY"));
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 29, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 35, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 46, true);
			PED::SET_PED_TARGET_LOSS_RESPONSE(*iParam0, 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*iParam0, true, 0f);
			if (bParam1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, false);
			}
		}
	}
}

bool func_543(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	vector3 vVar0;
	float fVar3;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		fVar3 = BUILTIN::VDIST(vVar0, vParam2);
		if (fVar3 < fParam5 || ENTITY::IS_ENTITY_AT_COORD(iParam0, vParam2, fParam5, fParam5, fParam5, false, true, 0))
		{
			if (__LIB_1__::func_205(PLAYER::PLAYER_PED_ID(), iParam1, 1, 0))
			{
				if (bParam6)
				{
					if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false, false))
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
	}
	return false;
}

bool func_544(var uParam0)
{
	int iVar0;
	iVar0 = AICOVERPOINT::_0x53E4D0C079CA6855(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

int func_545(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	iVar0 = PED::_0x0BCD4091C8EABA42(*uParam0, vParam2, iParam5, iParam6, iParam7, iParam11, iParam12, !bParam13);
	*uParam0 = -1;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (PED::IS_PED_HUMAN(iVar0))
	{
		if (bParam13)
		{
			WEAPON::_0x899A04AFCC725D04(iVar0, WEAPON::_0xD42514C182121C23(iParam1));
		}
		if (PED::IS_PED_MALE(iVar0) && !bParam9)
		{
			__LIB_0__::func_169(iVar0, 0, 1);
		}
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(iParam1))
	{
		if (bParam10)
		{
			__LIB_0__::func_170(iVar0, 1);
		}
		else
		{
			__LIB_11__::func_30(iVar0);
		}
	}
	return iVar0;
}

void func_546(char[4] cParam0, char* sParam1, int iParam2)
{
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	__LIB_9__::func_484(cParam0, MISC::GET_HASH_KEY(sParam1), iParam2);
}

bool func_547(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (__LIB_8__::func_616(cParam0))
	{
		if (!__LIB_4__::func_988(&(cParam0->f_7375), iParam1, 4))
		{
			__LIB_5__::func_17(&(cParam0->f_7375), iParam1, 4);
			return true;
		}
	}
	return __LIB_6__::func_911(&(cParam0->f_7375), iParam1, sParam2, iParam3, bParam4, bParam5);
}

bool func_548(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3, char[4] cParam4, char[4] cParam5, int iParam6, float fParam7, float fParam8)
{
	char cVar0[64];
	char cVar8[64];
	bool bVar16;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	StringCopy(&cVar0, "HORSE_RET", 64);
	if (__LIB_0__::func_48(Global_35, iParam1, fParam7, 1))
	{
		StringCopy(&cVar0, "HORSE_MOUNT", 64);
	}
	StringCopy(&cVar8, "HORSE_FAIL", 64);
	bVar16 = __LIB_14__::func_477(cParam0, iParam1, cVar0, cVar8, 512, cParam2, cParam4, cParam5);
	if (__LIB_6__::func_863(cParam0) != 1 && __LIB_6__::func_862(cParam0, 64))
	{
		__LIB_9__::func_411(cParam0, iParam1, iParam6, bVar16, iParam3);
		__LIB_6__::func_887(cParam0, 64);
		if (bVar16)
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 1);
		}
		else
		{
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 33, 2, 0);
		}
	}
	if (bVar16)
	{
		if (!__LIB_0__::func_86(cParam0->f_5304) && __LIB_0__::func_94(iParam1, cParam0->f_5304, 1) >= fParam8)
		{
			if (__LIB_0__::func_163(iParam1, 2043986356))
			{
				TASK::CLEAR_PED_TASKS(iParam1, true, false);
			}
			__LIB_1__::func_538(1);
		}
		PLAYER::_0xC71D07C96946E263(PLAYER::PLAYER_ID(), iParam1);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LEAD_ANIMAL"), false);
		return true;
	}
	return false;
}

void func_549(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 233, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, false, 0f);
			PED::SET_PED_CAN_RAGDOLL(iParam0, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 128);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 16);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iParam0, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 286, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 35, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 77, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 24, false);
		}
	}
}

void func_550(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_752();
	__LIB_0__::func_16(uParam0);
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

void func_551(int iParam0)
{
	iLocal_0 = iParam0;
}

int func_552(int iParam0)
{
	switch (iParam0)
	{
		case 23:
		case 28:
		case 75:
		case 105:
			return 0;
		case 5:
		case 69:
		case 76:
		case 78:
			return 1;
	}
	return 0;
}

bool func_553(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { __LIB_2__::func_3(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return __LIB_0__::func_975(iParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, bParam4) };
	return __LIB_0__::func_939(iParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_554(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar1, true, 0, false);
	if (iVar1 != joaat("WEAPON_UNARMED"))
	{
		if (!__LIB_0__::func_163(iParam0, 716706914))
		{
			WEAPON::_HIDE_PED_WEAPONS(iParam0, 2, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0, 0, 0, 0, 0);
		}
		iVar0 = 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar2, true, 1, false);
	if (iVar2 != joaat("WEAPON_UNARMED"))
	{
		if (!__LIB_0__::func_163(iParam0, 716706914))
		{
			WEAPON::_HIDE_PED_WEAPONS(iParam0, 2, false);
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 1, false, false);
			TASK::TASK_SWAP_WEAPON(iParam0, 0, 0, 0, 0);
		}
		iVar0 = 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 716706914, true) != 8)
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_555(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (bParam1)
		{
			__LIB_2__::func_788(iParam0[iVar0], 1, 0, 1);
		}
		else
		{
			__LIB_2__::func_426(iParam0[iVar0]);
		}
		iVar0++;
	}
}

Vector3 func_556(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	if (fParam3 > fParam4)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f) };
	return vParam0 + __LIB_3__::func_803(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4));
}

bool func_557(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!__LIB_7__::func_437(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_48(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return PED::_0x9D9473CB82D83A30(iParam0, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0) == 1;
	}
	return PED::_0x7F9B9791D4CB71F6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_558(char[4] cParam0, bool bParam1)
{
	if (__LIB_6__::func_862(cParam0, 128) && __LIB_0__::func_91())
	{
		return true;
	}
	if (__LIB_9__::func_401(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!__LIB_0__::func_0(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_559(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_9__::func_381(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_900(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_560(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_899(&(iParam1->f_13)))
	{
		fVar12 = __LIB_1__::func_583(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_10__::func_902(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_9__::func_381(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_2__::func_259(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_4__::func_101(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_561()
{
	__LIB_6__::func_416(0, 0, 1103626240 /* Float: 25f */);
}

bool func_562(int iParam0, int iParam1, int iParam2)
{
	if (__LIB_1__::func_201(iParam0, iParam2))
	{
		__LIB_6__::func_810(iParam0, iParam1, iParam2);
		if (!__LIB_6__::func_804(iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_563(int iParam0)
{
	__LIB_5__::func_410(iParam0, 262144);
	if (__LIB_11__::func_444(iParam0))
	{
		__LIB_5__::func_410(iParam0, 65536);
		return true;
	}
	return false;
}

bool func_564(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { __LIB_2__::func_3(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	__LIB_14__::func_479(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_565(int iParam0)
{
	__LIB_11__::func_445(iParam0);
	__LIB_0__::func_8(&Global_1935630, 32768);
	__LIB_9__::func_837(iParam0);
	__LIB_2__::func_259(&(iParam0->f_2884));
	if (__LIB_4__::func_682())
	{
		__LIB_4__::func_782();
	}
	if (__LIB_5__::func_176(iParam0, 524288))
	{
		__LIB_0__::func_7(&Global_1935630, 524288);
	}
	else if (!__LIB_5__::func_176(iParam0, 32768))
	{
		Global_43805 = iParam0->f_958.f_1684;
	}
	__LIB_5__::func_413(&(iParam0->f_428), &(iParam0->f_958));
	if (__LIB_2__::func_27(iParam0, 262144))
	{
		if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 4))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(4), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 2))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(2), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 8))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(8), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 16))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(16), 0, 0);
		}
		else if (__LIB_0__::func_90(&(Global_1835011[*iParam0 /*74*/].f_29), 32))
		{
			CLOCK::SET_CLOCK_TIME(__LIB_4__::func_735(32), 0, 0);
		}
	}
}

bool func_566(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return false;
	}
	return __LIB_0__::func_1(Global_40.f_9829[iParam0 /*4*/].f_2, iParam1);
}

bool func_567(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!__LIB_4__::func_848(iParam0, iParam1, iParam2))
	{
		if (bParam3)
		{
			__LIB_4__::func_849(iParam0, iParam1, iParam2);
		}
		return true;
	}
	return false;
}

void func_568(int iParam0)
{
	iLocal_3 = iParam0;
}

void func_569()
{
	Global_1425351.f_17 = 0;
}

void func_570(struct<2> Param0, bool bParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), bParam2);
				}
			}
		}
		iVar0++;
	}
}

void func_571(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					PED::SET_PED_ACCURACY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), iParam2);
				}
			}
		}
		iVar0++;
	}
}

bool func_572(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_0__::func_399(iParam0, 1, 0, 0);
	iVar1 = __LIB_0__::func_399(iParam0, 1, 1, 0);
	if (iVar0 == joaat("WEAPON_UNARMED") && iVar1 == joaat("WEAPON_UNARMED"))
	{
		return true;
	}
	return false;
}

int func_573(var uParam0, float fParam1)
{
	if ((((((!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())) && !PED::IS_PED_AIMING_FROM_COVER(Global_35)) && !PED::IS_PED_SHOOTING(Global_35)) && !PED::IS_PED_RELOADING(Global_35))
	{
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_148(uParam0);
		}
		else if (__LIB_0__::func_264(uParam0) >= fParam1)
		{
			return 1;
		}
		else if (((fParam1 > 15f && __LIB_3__::func_996(Global_35)) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_5__::func_264(Global_35)))) && __LIB_0__::func_264(uParam0) < (fParam1 - 15f))
		{
			__LIB_0__::func_268(uParam0, (fParam1 - 15f));
		}
	}
	else if (__LIB_0__::func_75(uParam0))
	{
		__LIB_0__::func_37(uParam0);
	}
	return 0;
}

bool func_574(char[4] cParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam1 <= -1 || iParam1 >= 27)
	{
		return false;
	}
	if (!bParam2)
	{
		__LIB_6__::func_868(cParam0, 512);
	}
	__LIB_8__::func_679(cParam0, __LIB_6__::func_864(cParam0), iParam1);
	if (bParam3)
	{
		__LIB_8__::func_670(cParam0, iParam1, 2);
	}
	if (bParam4)
	{
		__LIB_11__::func_100(cParam0);
	}
	return true;
}

bool func_575(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_10__::func_555(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_228(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_10__::func_556(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_576(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		MISC::_0xE98D55C5983F2509(*iParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_4__::func_452(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_368(*iParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			return true;
		}
		__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*iParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*iParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_3__::func_101(iParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*iParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*iParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*iParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*iParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*iParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*iParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_577(int iParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*iParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_10__::func_370(*iParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*iParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_4__::func_452(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_4__::func_101(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_578(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2284)
		{
			if (uParam0->f_865[iVar0 /*18*/].f_7)
			{
				__LIB_11__::func_440(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_865[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_5__::func_80(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_11__::func_441(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_4__::func_575(uParam0, uParam0->f_2074))
		{
			__LIB_11__::func_323(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_2081;
	while (iVar0 <= (uParam0->f_2284 - 1))
	{
		if (uParam0->f_865[iVar0 /*18*/].f_7)
		{
			__LIB_11__::func_440(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_865[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_5__::func_80(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_11__::func_441(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_2081 = iVar0 + 1;
					}
					else
					{
						uParam0->f_2081 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

bool func_579(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	Var0 = { __LIB_6__::func_907(iParam1) };
	Var8 = { __LIB_0__::func_865(iParam1) };
	return __LIB_11__::func_868(cParam0, __LIB_0__::func_271(iParam1), &Var0, &Var8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

bool func_580()
{
	if (PED::_0xB91AB3BE7F655D49(Global_35))
	{
		return true;
	}
	return false;
}

void func_581(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	fVar1 = (fParam0 - fVar0);
	if (fVar1 > 180f)
	{
		fVar1 = (fVar1 - 360f);
	}
	fVar2 = (fParam1 + fVar1);
	fVar3 = (fParam2 + fVar1);
	fVar4 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
	if (fVar4 >= fVar2 && fVar4 <= fVar3)
	{
		CAM::_CLAMP_GAMEPLAY_CAM_YAW(fVar2, fVar3);
	}
}

bool func_582(int iParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= (*uParam1 - 1))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, (*uParam1)[iVar0], true, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_583(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!__LIB_0__::func_272((*uParam0)[iVar1], iParam1))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_584(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;
	bool bVar18;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar1 = __LIB_14__::func_233(iParam0, &iVar0);
	if (iVar1 == -1)
	{
		ITEMSET::DESTROY_ITEMSET(iVar0);
		return;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = __LIB_14__::func_234(iVar3, iVar0);
		if (!__LIB_0__::func_272(iVar4, 0))
		{
		}
		else
		{
			if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
			{
				vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 1f, 0f, 0f) - Global_36 };
				vVar11 = { ENTITY::GET_ENTITY_COORDS(iVar4, true, false) };
				vVar14 = { vVar11 - Global_36 };
				vVar8.f_2 = 0f;
				vVar14.f_2 = 0f;
				vVar8 = { vVar8 / FtoV(BUILTIN::VMAG(vVar8)) };
				vVar14 = { vVar14 / FtoV(BUILTIN::VMAG(vVar14)) };
				fVar17 = __LIB_2__::func_977(vVar8, vVar14);
				fVar17 = (fVar17 / MISC::ABSF(fVar17));
				vVar5 = { vVar11 + Vector(fVar17, fVar17, fVar17) * vVar8 * Vector(fParam4, fParam4, fParam4) };
			}
			else
			{
				vVar5 = { vParam1 };
			}
			bVar18 = PED::_0x268B3AEBF032A88D(iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			TASK::OPEN_SEQUENCE_TASK(&iVar2);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar5, 1f, -1, 0.25f, 0, 40000f);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, bVar18);
			TASK::CLOSE_SEQUENCE_TASK(iVar2);
			TASK::TASK_PERFORM_SEQUENCE(iVar4, iVar2);
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
}

int func_585(char[4] cParam0)
{
	if ((__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_875(cParam0, 2)) || __LIB_6__::func_875(cParam0, 1))
	{
	}
	return 1;
}

int func_586(char[4] cParam0)
{
	if (__LIB_6__::func_862(cParam0, 8))
	{
	}
	return 1;
}

var func_587(char[4] cParam0)
{
	return cParam0->f_7375.f_804;
}

void func_588(var uParam0, var uParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0) && __LIB_0__::func_272(*uParam0, 2))
	{
		if (!MAP::DOES_BLIP_EXIST(*uParam1))
		{
			*uParam1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), *uParam0);
			if (bParam2)
			{
				MAP::_BLIP_SET_MODIFIER(*uParam1, -1034486097);
			}
		}
	}
}

int func_589(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = *iParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if ((bParam2 || ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar1])) && !__LIB_0__::func_272((*iParam0)[iVar1], iParam1))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

float func_590(var uParam0)
{
	float fVar0;
	float fVar1;
	if (!__LIB_4__::func_566(uParam0))
	{
		return 0f;
	}
	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_804);
	fVar1 = ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_804);
	return (fVar0 - fVar1);
}

int func_591(int iParam0)
{
	return Global_1905944.f_22[iParam0 /*9*/].f_8;
}

bool func_592(char[4] cParam0, bool bParam1)
{
	if (__LIB_6__::func_862(cParam0, 128) && __LIB_0__::func_91())
	{
		return true;
	}
	if (__LIB_5__::func_28(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!__LIB_0__::func_0(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_593(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	if (!__LIB_2__::func_618(&(cParam0->f_13109)))
	{
		__LIB_8__::func_901(&(cParam0->f_13109), 0);
	}
	else if (__LIB_5__::func_51(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (__LIB_3__::func_358(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < __LIB_4__::func_955(cParam0->f_5421))
		{
			iVar2 = __LIB_4__::func_956(cParam0->f_5421, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					iVar3 = __LIB_4__::func_956(cParam0->f_5421, iVar1);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3) && !PED::_0xA0BC8FAED8CFEB3C(iVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_A_VEHICLE(iVar2)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar5 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar2), iVar4);
						if (!ENTITY::IS_ENTITY_DEAD(iVar5))
						{
							if (!PED::_0xA0BC8FAED8CFEB3C(iVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(iLocal_14))
	{
		iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iLocal_14);
		iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
		if (ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar7))
			{
				iVar8 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar8) && !PED::_0xA0BC8FAED8CFEB3C(iVar8))
				{
					iVar0 = 0;
				}
			}
			else if ((!ENTITY::IS_ENTITY_DEAD(iVar7) && ENTITY::IS_ENTITY_A_VEHICLE(iVar7)) && VEHICLE::_IS_DRAFT_VEHICLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7)))
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					iVar10 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7), iVar9);
					if (!ENTITY::IS_ENTITY_DEAD(iVar10))
					{
						if (!PED::_0xA0BC8FAED8CFEB3C(iVar10))
						{
							iVar0 = 0;
						}
					}
					iVar9++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_594(char[4] cParam0, int iParam1)
{
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
	{
		if (MAP::DOES_BLIP_EXIST(cParam0->f_5303))
		{
			MAP::REMOVE_BLIP(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		__LIB_8__::func_670(cParam0, iParam1, 2);
		__LIB_6__::func_876(cParam0, 0);
		__LIB_14__::func_320(cParam0, 0);
		__LIB_6__::func_868(cParam0, 8);
		__LIB_6__::func_887(cParam0, -2147483648);
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 67108864);
		__LIB_6__::func_887(cParam0, 4);
		__LIB_6__::func_887(cParam0, 8192);
		__LIB_6__::func_887(cParam0, 536870912);
		__LIB_6__::func_881(cParam0, 4);
		__LIB_0__::func_869(0);
		__LIB_0__::func_868(0);
		__LIB_6__::func_887(cParam0, 2);
		__LIB_0__::func_769();
		cParam0->f_5302 = 0;
		__LIB_9__::func_35(cParam0);
		if ((__LIB_9__::func_40(cParam0) == 25 || __LIB_9__::func_40(cParam0) == 26) && __LIB_0__::func_13(32768))
		{
			__LIB_8__::func_665(cParam0, 524288);
		}
		if (__LIB_0__::func_2() == 0)
		{
			if (PED::_0xB655DB7582AEC805(Global_35))
			{
				__LIB_1__::func_965(0);
				PED::_0xF6262491C7704A63(Global_35, 0);
			}
			else if (Global_1935630.f_12)
			{
				__LIB_5__::func_113(1, 1);
			}
		}
	}
}

bool func_595(int iParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	__LIB_1__::func_448(iParam0, vParam1, 0, iParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = PED::GET_MOUNT(iParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
	}
	bVar4 = __LIB_0__::func_94(iParam0, vParam1, 1);
	if (!__LIB_2__::func_618(iParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				__LIB_8__::func_901(iParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		__LIB_2__::func_608(iParam4);
	}
	if (__LIB_2__::func_618(iParam4))
	{
		if (bParam14)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && VEHICLE::_IS_DRAFT_VEHICLE(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iVar2, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar3, 1f);
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iVar2, PED::_0x46BF2A810679D6E6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (__LIB_5__::func_51(iParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				PLAYER::SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(PLAYER::PLAYER_ID());
				PLAYER::_0x9F9A829C6751F3C7(PLAYER::PLAYER_ID(), 28, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !__LIB_0__::func_491(iParam0, 501393341))
			{
				if (PED::IS_PED_ON_MOUNT(iParam0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, 0, 0, 0, 0, 0);
					return true;
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !__LIB_0__::func_491(iParam0, -828834893))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iParam0, 0, 0);
					return true;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (TASK::GET_IS_TASK_ACTIVE(iParam0, 8))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
			}
			PED::SET_PED_RESET_FLAG(iParam0, 175, true);
		}
	}
	return false;
}

void func_596(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	__LIB_14__::func_325(cParam0, &cParam1, "", bParam9, bParam10);
}

void func_597(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_1__::func_22(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			__LIB_14__::func_326(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_598(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	iVar2 = 0;
	if (__LIB_0__::func_78(uParam0) > 3)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_2284)
		{
			if (uParam0->f_865[iVar0 /*18*/].f_7)
			{
				__LIB_14__::func_327(uParam0, iVar0, iParam1);
			}
			else if (uParam0->f_865[iVar0 /*18*/].f_6)
			{
				bVar1 = __LIB_5__::func_80(uParam0, iVar0);
				if (bVar1)
				{
					__LIB_14__::func_328(uParam0, iVar0, iParam1);
				}
			}
			iVar0++;
		}
		if (!__LIB_4__::func_575(uParam0, uParam0->f_2074))
		{
			__LIB_11__::func_790(uParam0, -1, 0, 1);
		}
		return;
	}
	iVar0 = uParam0->f_2081;
	while (iVar0 <= (uParam0->f_2284 - 1))
	{
		if (uParam0->f_865[iVar0 /*18*/].f_7)
		{
			__LIB_14__::func_327(uParam0, iVar0, iParam1);
		}
		else if (uParam0->f_865[iVar0 /*18*/].f_6)
		{
			bVar1 = __LIB_5__::func_80(uParam0, iVar0);
			if (bVar1)
			{
				__LIB_14__::func_328(uParam0, iVar0, iParam1);
				iVar2++;
				if (iVar2 > 5)
				{
					if (iVar0 + 1 < 30)
					{
						uParam0->f_2081 = iVar0 + 1;
					}
					else
					{
						uParam0->f_2081 = 0;
					}
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_599(vector3 vParam0, vector3 vParam3, int iParam6)
{
	vector3 vVar0;
	vector3 vVar3;
	PED::CLEAR_PED_NON_CREATION_AREA();
	vVar0 = { __LIB_2__::func_66(vParam0, vParam3, iParam6) };
	vVar3 = { __LIB_2__::func_67(vParam0, vParam3, iParam6) };
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(vVar0, vVar3, 0);
}

int func_600(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	char* sVar0;
	if (__LIB_0__::func_27(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (__LIB_0__::func_27(uParam0->f_1, 16))
			{
				__LIB_4__::func_114(uParam0, vParam1, iParam4, iParam5);
			}
			else
			{
				__LIB_13__::func_119(uParam0, vParam1, iParam4, iParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(joaat("SCR_DISTANCE_SMOKE"));
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(joaat("SCR_DISTANCE_SMOKE")))
	{
		if (!__LIB_0__::func_27(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = __LIB_3__::func_965(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = __LIB_3__::func_965(__LIB_3__::func_713(iParam4));
				if (uParam0->f_3 > 10f)
				{
					uParam0->f_3 = 10f;
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = __LIB_3__::func_714(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 15f)), BUILTIN::FLOOR((uParam0->f_5 + 15f))));
				uParam0->f_5 = (uParam0->f_5 / 255f);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, __LIB_3__::func_715(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (__LIB_1__::func_874(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 15f))
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					__LIB_0__::func_7(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_0x9DDC222D85D5AF2A(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				__LIB_0__::func_7(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

int func_601(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (__LIB_0__::func_131(uParam0[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam0[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_693(uParam0[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (__LIB_0__::func_132(uParam1[iVar1 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam1[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!__LIB_4__::func_694(uParam1[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (__LIB_0__::func_132(uParam2[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam2[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_695(uParam2[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (__LIB_0__::func_132(uParam3[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam3[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_689(uParam3[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (__LIB_4__::func_688(uParam4->f_1, iParam12))
	{
		if (!__LIB_4__::func_690(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar1 /*67*/]))
		{
			if (__LIB_4__::func_688((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (__LIB_0__::func_286(uParam5[iVar1 /*67*/]))
				{
					if (!__LIB_4__::func_793(uParam5[iVar1 /*67*/]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (__LIB_0__::func_132(uParam5[iVar1 /*67*/]))
		{
			if (__LIB_4__::func_688((uParam5[iVar1 /*67*/])->f_3, iParam12))
			{
				if (__LIB_0__::func_286(uParam5[iVar1 /*67*/]))
				{
					if (__LIB_4__::func_793(uParam5[iVar1 /*67*/]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (__LIB_0__::func_132(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/])))
							{
								if (!__LIB_4__::func_696(&((uParam5[iVar1 /*67*/])->f_4[iVar2 /*3*/]), (uParam5[iVar1 /*67*/])->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1 = (iVar1 + 1);
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (__LIB_0__::func_131(uParam6[iVar1 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam6[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!__LIB_4__::func_697(uParam6[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (__LIB_0__::func_131(uParam7[iVar1 /*5*/]))
		{
			if (__LIB_4__::func_688((uParam7[iVar1 /*5*/])->f_4, iParam12))
			{
				if (!__LIB_4__::func_698(uParam7[iVar1 /*5*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (__LIB_0__::func_132(uParam8[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam8[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_699(uParam8[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (__LIB_0__::func_282(uParam9[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam9[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_700(uParam9[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (__LIB_0__::func_132(uParam10[iVar1 /*4*/]))
		{
			if (__LIB_4__::func_688((uParam10[iVar1 /*4*/])->f_3, iParam12))
			{
				if (!__LIB_4__::func_701(uParam10[iVar1 /*4*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (__LIB_0__::func_132(uParam11[iVar1 /*3*/]))
		{
			if (__LIB_4__::func_688((uParam11[iVar1 /*3*/])->f_2, iParam12))
			{
				if (!__LIB_4__::func_702(uParam11[iVar1 /*3*/]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_602(int iParam0)
{
	__LIB_5__::func_410(iParam0, 262144);
	if (__LIB_11__::func_761(iParam0))
	{
		__LIB_5__::func_410(iParam0, 65536);
		return true;
	}
	return false;
}

bool func_603(char* sParam0)
{
	HUD::_TEXT_DATABASE_REQUEST(sParam0);
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sParam0);
		return false;
	}
	return true;
}

void func_604(int iParam0, int iParam1)
{
	Global_1914319.f_3[iParam0 /*446*/].f_33 = iParam1;
}

int func_605(int iParam0)
{
	if (!__LIB_14__::func_346(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return 0;
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			return 1;
	}
	return -1;
}

void func_606()
{
	if (Local_14 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_14.f_6);
		STREAMING::REQUEST_MODEL(Local_14, false);
		Local_14.f_16 = 1;
	}
}

bool func_607()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_14.f_6))
	{
		return STREAMING::HAS_ANIM_DICT_LOADED(Local_14.f_6);
	}
	return true;
}

void func_608(var uParam0, int iParam1, vector3 vParam2)
{
	if (*uParam0 == 0)
	{
		if (STREAMING::IS_MODEL_VALID(iParam1))
		{
			*uParam0 = ENTITY::_0x6F3068258A499E52(iParam1, vParam2, 7);
		}
	}
}

void func_609()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_7, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_7, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_8, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_8, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_9, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_14.f_17, Local_14.f_6, Local_14.f_9, -1000f);
		}
	}
	if (Local_14.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_14.f_6))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_14.f_6);
		}
		Local_14.f_16 = 0;
	}
	if (Local_14.f_18 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(Local_14.f_18);
	}
}

void func_610(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (ENTITY::_0x1FF441D7954F8709(*uParam0))
	{
		ENTITY::_0xD2B9C78537ED5759(*uParam0);
	}
}

bool func_611(int iParam0)
{
	return __LIB_0__::func_27(iLocal_49, iParam0);
}

void func_612(int iParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::_0x6D5F9E69BA1BE783(iParam0);
	}
}

bool func_613(int iParam0)
{
	if (__LIB_1__::func_85(iParam0, Global_1310750.f_16073))
	{
		return true;
	}
	return false;
}

int func_614()
{
	return Global_1392135.f_3;
}

void func_615(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (__LIB_0__::func_86(vParam5))
	{
		return;
	}
	Local_14 = iParam0;
	Local_14.f_6 = sParam1;
	Local_14.f_7 = sParam2;
	Local_14.f_8 = sParam3;
	Local_14.f_9 = sParam4;
	Local_14.f_11 = { vParam5 };
	Local_14.f_10 = sParam8;
	Local_14.f_15 = 1;
}

bool func_616()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (Local_14.f_5 <= 0)
	{
		return false;
	}
	iVar1 = __LIB_0__::func_23();
	iVar2 = __LIB_0__::func_41(iVar1);
	iVar3 = __LIB_0__::func_42(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_14.f_5 - 1))
	{
		iVar4 = __LIB_0__::func_41(Local_14.f_1[iVar0]);
		iVar5 = __LIB_0__::func_42(Local_14.f_1[iVar0]);
		if (iVar4 == iVar2 && MISC::ABSI((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_617(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
	{
		return;
	}
	__LIB_0__::func_516(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

void func_618(var uParam0, int iParam1)
{
	__LIB_0__::func_516(&(uParam0->f_16), iParam1);
}

void func_619(var uParam0)
{
	int iVar0;
	iVar0 = __LIB_4__::func_850();
	if (!__LIB_1__::func_917(iVar0))
	{
		return;
	}
	if (__LIB_2__::func_793(iVar0) && __LIB_0__::func_481(1))
	{
		__LIB_0__::func_82(1, 0, 1);
	}
	__LIB_17__::func_463(uParam0, 64);
}

bool func_620(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_147(iParam1);
	iVar1 = (17 + iVar0);
	return __LIB_4__::func_74(iParam0, iParam1) >= Global_1310750[iParam0 /*111*/].f_64[iVar1];
}

bool func_621(int iParam0, var uParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	if ((bParam2 && __LIB_0__::func_2() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!__LIB_14__::func_430(iParam0, uParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_622(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || __LIB_0__::func_255(iParam0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_791(iParam0))
	{
		__LIB_0__::func_37(&uLocal_50);
		return false;
	}
	if (bParam1)
	{
		return true;
	}
	if (__LIB_0__::func_75(&uLocal_50))
	{
		if (__LIB_0__::func_265(&uLocal_50) < 2f)
		{
			return false;
		}
	}
	else
	{
		__LIB_1__::func_283(&uLocal_50, 0);
		return false;
	}
	return true;
}

bool func_623(var uParam0, vector3 vParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&vParam1))
	{
		__LIB_0__::func_928(&uLocal_53, uParam0->f_1, uParam0->f_7, 0);
		if (__LIB_4__::func_931(&uLocal_53, vParam1, uParam0->f_1, Global_35, 1077936128 /* Float: 3f */))
		{
			return true;
		}
	}
	return false;
}

bool func_624(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	fVar0 = 85f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (__LIB_2__::func_138(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = __LIB_1__::func_351(iParam1);
			if (__LIB_2__::func_958(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - iParam1->f_2);
				iVar3 = __LIB_1__::func_352(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						__LIB_2__::func_89(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							__LIB_2__::func_89(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

void func_625(int iParam0, int iParam1)
{
	if (__LIB_0__::func_2() == -1)
	{
		Global_1934182[iParam0 /*18*/].f_7 = iParam1;
		if (!__LIB_10__::func_618(iParam0))
		{
			__LIB_14__::func_356(iParam0);
		}
		__LIB_9__::func_393(16);
		__LIB_9__::func_393(32);
	}
	Global_1934182.f_75 = 0;
}

void func_626(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (__LIB_0__::func_86(vParam1))
	{
		return;
	}
	__LIB_14__::func_354(iParam0);
	Global_1935369.f_5[iParam0 /*11*/].f_1 = { vParam1 };
	Global_1935369.f_5[iParam0 /*11*/].f_4 = iParam4;
	Global_1935369.f_5[iParam0 /*11*/].f_5 = iParam5;
	Global_1935369.f_5[iParam0 /*11*/].f_6 = __LIB_3__::func_125(iParam5, iParam0);
}

void func_627(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1935369.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			__LIB_14__::func_354(iVar0);
		}
		iVar0++;
	}
}

void func_628(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	(uParam0[iParam3 /*45*/])->f_25 = 64f;
	(uParam0[iParam3 /*45*/])->f_26 = 16f;
	(uParam0[iParam3 /*45*/])->f_20 = iParam3;
	__LIB_2__::func_790(uParam0[iParam3 /*45*/]);
	(*uParam0)[iParam3 /*45*/] = iParam1;
	if (bParam4)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			(uParam0[iParam3 /*45*/])->f_3[iVar0 /*3*/] = (*iParam2)[iVar0];
			iVar0++;
		}
		__LIB_17__::func_463(uParam0[iParam3 /*45*/], 128);
	}
	if (!__LIB_0__::func_75(&((uParam0[iParam3 /*45*/])->f_34)))
	{
		__LIB_1__::func_283(&((uParam0[iParam3 /*45*/])->f_34), 1);
	}
	__LIB_17__::func_463(uParam0[iParam3 /*45*/], 32768);
	__LIB_17__::func_463(uParam0[iParam3 /*45*/], 1024);
	(uParam0[iParam3 /*45*/])->f_29 = 1;
	(uParam0[iParam3 /*45*/])->f_21 = -1;
}

bool func_629(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_4__::func_922(iParam0, 16384) && !__LIB_5__::func_779(iParam0, 1))
	{
		return true;
	}
	if (!__LIB_0__::func_29(iParam1))
	{
		return false;
	}
	iVar0 = __LIB_1__::func_334(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_25))
	{
		iVar1 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_25);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_25);
			}
		}
		__LIB_17__::func_470(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_25, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_25, 1, 1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1914319.f_3[iParam0 /*446*/].f_28))
	{
		iVar2 = VOLUME::_0x7FD78DFD0C5D7B9B(Global_1914319.f_3[iParam0 /*446*/].f_28);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			if (iVar2 != iVar0)
			{
				VOLUME::_0x6D5F9E69BA1BE783(Global_1914319.f_3[iParam0 /*446*/].f_28);
			}
		}
		__LIB_17__::func_470(iParam1, Global_1914319.f_3[iParam0 /*446*/].f_28, 1);
		VOLUME::_0x4A8FEFC43FD8AC9B(Global_1914319.f_3[iParam0 /*446*/].f_28, 0, 1);
	}
	Global_1914319.f_3[iParam0 /*446*/].f_21 = iParam1;
	Global_1914319.f_3[iParam0 /*446*/].f_23 = iVar0;
	return true;
}

void func_630(int iParam0)
{
	if (!__LIB_17__::func_466(1, 1))
	{
		return;
	}
	if (!LAW::_0xC7DC5A0A7DF608CB(__LIB_14__::func_211(1)))
	{
		return;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return;
	}
	if (__LIB_1__::func_917(__LIB_0__::func_560(iParam0, 3)))
	{
		if (__LIB_0__::func_94(Global_35, Global_1914319.f_3[3 /*446*/].f_11, 1) > 80f)
		{
			return;
		}
	}
	if (__LIB_1__::func_917(__LIB_0__::func_560(iParam0, 0)))
	{
		if (__LIB_0__::func_94(Global_35, Global_1914319.f_3[0 /*446*/].f_11, 1) > 100f)
		{
			return;
		}
	}
	__LIB_17__::func_467(1, iParam0);
}

char* func_631(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	char* sVar0;
	if (!__LIB_6__::func_621(uParam0, 2))
	{
		if (__LIB_0__::func_113() && !__LIB_2__::func_800())
		{
			if (__LIB_2__::func_140(0) && __LIB_2__::func_815(uParam0))
			{
				sVar0 = __LIB_0__::func_67(Global_1393529.f_288[9 /*8*/]);
				switch (MISC::GET_HASH_KEY(sVar0))
				{
					case joaat("0825_S_M_M_LIVERYWORKER_01_WHITE_01"):
						__LIB_17__::func_463(uParam0, 2);
						uParam0->f_37 = "0825_LIVERY";
						uParam0->f_21 = -1;
						return sParam1;
					case joaat("0826_S_M_M_LIVERYWORKER_01_WHITE_02"):
						uParam0->f_37 = "0826_LIVERY";
						uParam0->f_21 = -1;
						__LIB_17__::func_463(uParam0, 2);
						return sParam2;
					case joaat("0827_S_M_M_LIVERYWORKER_01_WHITE_03"):
						uParam0->f_37 = "0827_LIVERY";
						uParam0->f_21 = -1;
						__LIB_17__::func_463(uParam0, 2);
						return sParam3;
					default:
						break;
				}
				__LIB_2__::func_784();
			}
		}
	}
	return "";
}

void func_632(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	if (Local_14.f_5 >= 3)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	__LIB_0__::func_467(&iVar0, iParam0);
	__LIB_0__::func_468(&iVar0, iParam1);
	__LIB_0__::func_469(&iVar0, iParam2);
	__LIB_11__::func_409(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_14.f_5 - 1))
	{
		__LIB_11__::func_409(&(Local_14.f_1[iVar1]));
		if (Local_14.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_14.f_1[Local_14.f_5] = iVar0;
	Local_14.f_5++;
	__LIB_11__::func_402(&(Local_14.f_1), Local_14.f_5);
}

bool func_633(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	iVar0 = __LIB_0__::func_23();
	iVar1 = __LIB_3__::func_562(iParam0, iParam1);
	__LIB_3__::func_597(iVar0, iVar1, &uVar2, &uVar3, &iVar4, &iVar5, &uVar6, &uVar7);
	if (iVar5 >= iParam2 && iParam2 > 0)
	{
		return true;
	}
	if (iVar4 > iParam3 && iParam3 > 0)
	{
		return true;
	}
	return false;
}

bool func_634(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_293(0, iParam0, 2, 0);
	iVar2 = __LIB_0__::func_933(iVar0);
	if (iVar2 == -15)
	{
		iVar2 = __LIB_0__::func_23();
		__LIB_4__::func_710(&iVar2, 0, 10, 0, 0, 0, 0);
	}
	else
	{
		__LIB_1__::func_446(&iVar2, 0, 0, 20, 0, 0, 0, 0);
	}
	if (__LIB_14__::func_434(iParam0, &iVar1))
	{
		if (__LIB_1__::func_110(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (__LIB_10__::func_708(&iVar1))
	{
		if (__LIB_1__::func_110(iVar1, iVar2, 1))
		{
			iVar2 = iVar1;
		}
	}
	if (__LIB_1__::func_426(iVar2, 1))
	{
		return true;
	}
	return false;
}

bool func_635(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (__LIB_6__::func_625(iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (__LIB_4__::func_933(iParam4))
	{
		if (__LIB_17__::func_468(iParam1, iParam2, iParam3, 1))
		{
			__LIB_17__::func_463(uParam0, 4);
			return true;
		}
	}
	return false;
}

int func_636(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar1 = __LIB_10__::func_47(iParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = __LIB_10__::func_48(iParam0, iVar0);
		if (!__LIB_1__::func_187(iVar2))
		{
			if (__LIB_11__::func_199(iVar2))
			{
				return iVar2;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_637(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (!__LIB_0__::func_5(iParam0))
	{
		return false;
	}
	return __LIB_4__::func_60(Global_1347702[iParam0 /*49*/].f_15);
}

bool func_638(int iParam0, int iParam1)
{
	return __LIB_0__::func_1(Global_1935369.f_5[iParam0 /*11*/].f_7, iParam1);
}

bool func_639(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	if (__LIB_4__::func_848(iParam1, iParam2, iParam3))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_335(iParam4);
	if (iVar0 < 8)
	{
		iVar1 = iVar0;
		iVar0 = iVar1 + 1;
	}
	if (!__LIB_1__::func_200(iParam4))
	{
		if (__LIB_1__::func_187(iParam4) && __LIB_1__::func_194() <= iVar0)
		{
			if (__LIB_17__::func_567(iParam1, iParam2, iParam3, 1))
			{
				__LIB_2__::func_811(uParam0, 4);
				return true;
			}
		}
	}
	return false;
}

char* func_640(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	char* sVar0;
	if (!__LIB_2__::func_792(uParam0, 2))
	{
		if (__LIB_0__::func_113() && !__LIB_2__::func_800())
		{
			if (__LIB_2__::func_140(0) && __LIB_2__::func_815(uParam0))
			{
				sVar0 = __LIB_0__::func_67(Global_1393529.f_288[9 /*8*/]);
				switch (MISC::GET_HASH_KEY(sVar0))
				{
					case joaat("0825_S_M_M_LIVERYWORKER_01_WHITE_01"):
						__LIB_2__::func_811(uParam0, 2);
						uParam0->f_37 = "0825_LIVERY";
						uParam0->f_21 = -1;
						return sParam1;
					case joaat("0826_S_M_M_LIVERYWORKER_01_WHITE_02"):
						uParam0->f_37 = "0826_LIVERY";
						uParam0->f_21 = -1;
						__LIB_2__::func_811(uParam0, 2);
						return sParam2;
					case joaat("0827_S_M_M_LIVERYWORKER_01_WHITE_03"):
						uParam0->f_37 = "0827_LIVERY";
						uParam0->f_21 = -1;
						__LIB_2__::func_811(uParam0, 2);
						return sParam3;
					default:
						break;
				}
				__LIB_2__::func_784();
			}
		}
	}
	return "";
}

bool func_641(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (__LIB_4__::func_848(iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (__LIB_4__::func_933(iParam4))
	{
		if (__LIB_17__::func_567(iParam1, iParam2, iParam3, 1))
		{
			__LIB_2__::func_811(uParam0, 4);
			return true;
		}
	}
	return false;
}

bool func_642(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 15);
}

bool func_643()
{
	return Global_1327590.f_2 >= 5;
}

void func_644(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1428)
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1428[iVar0 /*12*/].f_7))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_1428[iVar0 /*12*/].f_7);
		}
		iVar0++;
	}
}

void func_645(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_642(iParam1))
	{
		return;
	}
	if (!uParam0->f_2100[iParam1 /*6*/])
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2100[iParam1 /*6*/].f_1))
	{
		return;
	}
	if (uParam0->f_2100[iParam1 /*6*/].f_3)
	{
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_2100[iParam1 /*6*/].f_1);
	}
	if (uParam0->f_2100[iParam1 /*6*/].f_4)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_2100[iParam1 /*6*/].f_2, false);
	}
	uParam0->f_2100[iParam1 /*6*/] = 0;
}

bool func_646()
{
	if (__LIB_17__::func_643())
	{
		return false;
	}
	return true;
}

int func_647(var uParam0)
{
	if (Global_1327590.f_10.f_12)
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return 1;
	}
	if (Global_1935630.f_12)
	{
		return 1;
	}
	if (!__LIB_6__::func_969())
	{
		return 1;
	}
	if (__LIB_0__::func_1(Global_1935630, 16384))
	{
		return 1;
	}
	if (__LIB_6__::func_933(2))
	{
		return 1;
	}
	if (Global_18)
	{
		return 1;
	}
	if (__LIB_0__::func_91())
	{
		if (!Global_1327590.f_19735)
		{
			return 1;
		}
	}
	if (__LIB_0__::func_296(1030, 1, 1))
	{
		if (!Global_1327590.f_19734)
		{
			return 1;
		}
	}
	return 0;
}

void func_648(int iParam0, bool bParam1, float fParam2)
{
	if (__LIB_1__::func_22(iParam0))
	{
		if (bParam1)
		{
			__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		else
		{
			__LIB_1__::func_774(iParam0, 0, 0, 0, fParam2, 1, 1, 0, 0, 0, 0);
		}
	}
}

int func_649(var uParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (uParam0->f_1[iVar0 /*5*/] != -1)
		{
		}
		else
		{
			uParam0->f_1[iVar0 /*5*/] = iParam1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_650(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 25);
}

void func_651(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2100)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2100[iVar0 /*6*/].f_1))
		{
		}
		else
		{
			__LIB_17__::func_645(uParam0, iVar0);
			VOLUME::_DELETE_VOLUME(uParam0->f_2100[iVar0 /*6*/].f_1);
		}
		iVar0++;
	}
}

int func_652(int iParam0, int iParam1)
{
	int iVar0;
	if (__LIB_12__::func_612(iParam0))
	{
		return 0;
	}
	if (__LIB_9__::func_121() == iParam0)
	{
		return 0;
	}
	iVar0 = __LIB_6__::func_246(iParam0);
	if (iVar0 == 0)
	{
		return 1;
	}
	if (iVar0 > iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_653(var uParam0)
{
	if (__LIB_1__::func_976(uParam0) || __LIB_17__::func_647(uParam0))
	{
		return true;
	}
	return false;
}

bool func_654(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (!__LIB_17__::func_646())
	{
		return false;
	}
	__LIB_13__::func_483(iParam0, iParam1, iParam2, iParam3, 0);
	return true;
}

void func_655()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		__LIB_17__::func_648(iVar0, 1, -1082130432 /* Float: -1f */);
		iVar0++;
	}
}

int func_656(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_650(iParam1))
	{
		return -1;
	}
	return uParam0->f_1[iParam1 /*5*/];
}

int func_657(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (iParam2 < 0 || iParam2 >= 10)
	{
		return 0;
	}
	if (!__LIB_1__::func_22(iParam1))
	{
		return 0;
	}
	if (bParam3)
	{
		uParam0->f_1428[iParam2 /*12*/].f_7 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_1428[iParam2 /*12*/].f_3, uParam0->f_1428[iParam2 /*12*/].f_1, 0.25f, 0, false);
	}
	else if (iParam5 != 0)
	{
		uParam0->f_1428[iParam2 /*12*/].f_7 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(iParam5, uParam0->f_1428[iParam2 /*12*/].f_1, uParam0->f_1428[iParam2 /*12*/].f_3, uParam0->f_1428[iParam2 /*12*/].f_6, 0, 0, 0);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1428[iParam2 /*12*/].f_7))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(uParam0->f_1428[iParam2 /*12*/].f_7, 23, true);
			TASK::_SET_SCENARIO_POINT_FLAG(uParam0->f_1428[iParam2 /*12*/].f_7, 25, true);
		}
	}
	else
	{
		uParam0->f_1428[iParam2 /*12*/].f_7 = TASK::CREATE_SCENARIO_POINT(uParam0->f_1428[iParam2 /*12*/].f_1, uParam0->f_1428[iParam2 /*12*/].f_3, uParam0->f_1428[iParam2 /*12*/].f_6, 0, 0, 0);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1428[iParam2 /*12*/].f_7))
		{
			TASK::_SET_SCENARIO_POINT_FLAG(uParam0->f_1428[iParam2 /*12*/].f_7, 23, true);
			TASK::_SET_SCENARIO_POINT_FLAG(uParam0->f_1428[iParam2 /*12*/].f_7, 25, true);
		}
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1428[iParam2 /*12*/].f_7))
	{
		if (bParam4)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(__LIB_0__::func_271(iParam1), false, true);
			TASK::_TASK_USE_SCENARIO_POINT(__LIB_0__::func_271(iParam1), uParam0->f_1428[iParam2 /*12*/].f_7, uParam0->f_1428[iParam2 /*12*/].f_2, 0, !bParam4, bParam4, 0, false, -1f, false);
			PED::_0x2208438012482A1A(__LIB_0__::func_271(iParam1), false, false);
		}
		else
		{
			TASK::_TASK_USE_SCENARIO_POINT(__LIB_0__::func_271(iParam1), uParam0->f_1428[iParam2 /*12*/].f_7, uParam0->f_1428[iParam2 /*12*/].f_2, 0, !bParam4, bParam4, 0, false, -1f, false);
		}
		if (uParam0->f_1428[iParam2 /*12*/].f_8 > 0f)
		{
			__LIB_0__::func_268(&(uParam0->f_1428[iParam2 /*12*/].f_9), 0f);
		}
	}
	return 1;
}

bool func_658(var uParam0)
{
	__LIB_17__::func_644(uParam0);
	__LIB_17__::func_651(uParam0);
	__LIB_17__::func_655();
	Global_1327590.f_10 = -1;
	StringCopy(&(Global_1327590.f_10.f_1), "", 64);
	Global_1327590.f_10.f_9 = 0;
	Global_1327590.f_10.f_10 = -1;
	return true;
}

bool func_659(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

void func_660(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (!__LIB_17__::func_650(iParam1))
	{
		return;
	}
	if (uParam0->f_1[iParam1 /*5*/].f_1)
	{
		return;
	}
	iVar0 = __LIB_17__::func_656(uParam0, iParam1);
	if (!__LIB_6__::func_990(iVar0))
	{
		return;
	}
	if (__LIB_17__::func_654(iVar0, 25, iParam2, 1))
	{
		uParam0->f_1[iParam1 /*5*/].f_1 = 1;
	}
}

bool func_661(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_650(iParam1))
	{
		return false;
	}
	if (!uParam0->f_1[iParam1 /*5*/].f_1)
	{
		return false;
	}
	return __LIB_17__::func_652(__LIB_17__::func_656(uParam0, iParam1), 6);
}

bool func_662(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_17__::func_658(uParam0))
	{
		return false;
	}
	return true;
}

int func_663(var uParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1428)
	{
		if (uParam0->f_1428[iVar0 /*12*/])
		{
		}
		else
		{
			uParam0->f_1428[iVar0 /*12*/] = 1;
			uParam0->f_1428[iVar0 /*12*/].f_1 = iParam1;
			uParam0->f_1428[iVar0 /*12*/].f_2 = iParam6;
			uParam0->f_1428[iVar0 /*12*/].f_3 = { vParam2 };
			uParam0->f_1428[iVar0 /*12*/].f_6 = fParam5;
			uParam0->f_1428[iVar0 /*12*/].f_8 = iParam7;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_664(var uParam0, vector3 vParam1, float fParam4, vector3 vParam5, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2100)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2100[iVar0 /*6*/].f_1))
		{
		}
		else
		{
			uParam0->f_2100[iVar0 /*6*/].f_1 = VOLUME::_CREATE_VOLUME_BY_HASH_WITH_CUSTOM_NAME(iParam11, vParam1, 0f, 0f, fParam4, vParam5, "volBlockPeds");
			uParam0->f_2100[iVar0 /*6*/].f_3 = iParam8;
			uParam0->f_2100[iVar0 /*6*/].f_4 = iParam9;
			uParam0->f_2100[iVar0 /*6*/].f_5 = iParam10;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_665(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_642(iParam1))
	{
		return;
	}
	if (uParam0->f_2100[iParam1 /*6*/])
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2100[iParam1 /*6*/].f_1))
	{
		return;
	}
	if (uParam0->f_2100[iParam1 /*6*/].f_3)
	{
		POPULATION::_0xB56D41A694E42E86(uParam0->f_2100[iParam1 /*6*/].f_1, 10208, 0, 0, -1, uParam0->f_2100[iParam1 /*6*/].f_5, 16);
	}
	if (uParam0->f_2100[iParam1 /*6*/].f_4)
	{
		uParam0->f_2100[iParam1 /*6*/].f_2 = PED::_0x4C39C95AE5DB1329(uParam0->f_2100[iParam1 /*6*/].f_1, 0, 2);
	}
	uParam0->f_2100[iParam1 /*6*/] = 1;
}

int func_666(int iParam0, struct<8> Param1, int iParam9)
{
	int iVar0;
	var uVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return 0;
	}
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_59(iParam0);
	if (iVar0 != 0 && __LIB_6__::func_88(iParam0))
	{
		Global_1360165[iParam0 /*1157*/].f_39 = { Param1 };
		PERSCHAR::_0x187D65F3AEC5D679(iVar0, &Param1);
		__LIB_0__::func_288(iParam0, 17, 1);
		if (iParam9 != -1)
		{
			uVar1 = __LIB_0__::func_23();
			__LIB_2__::func_670(&uVar1, 0, 0, iParam9, 0, 0, 0, 0);
			Global_40.f_4942[iParam0 /*60*/].f_46 = uVar1;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 4;
		}
		else
		{
			Global_40.f_4942[iParam0 /*60*/].f_46 = -15;
			Global_40.f_4942[iParam0 /*60*/].f_49 = 0;
		}
		Global_1360165[iParam0 /*1157*/].f_56 = 1;
		return 1;
	}
	return 0;
}

int func_667(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_650(iParam1))
	{
		return 0;
	}
	if (!uParam0->f_1[iParam1 /*5*/].f_1)
	{
		return 0;
	}
	return __LIB_17__::func_652(__LIB_17__::func_656(uParam0, iParam1), 6);
}

bool func_668(var uParam0)
{
	__LIB_17__::func_660(uParam0, iLocal_0, Global_1327590.f_10.f_11);
	if (__LIB_17__::func_661(uParam0, iLocal_0))
	{
		__LIB_17__::func_660(uParam0, iLocal_1, 1);
	}
	if (__LIB_17__::func_661(uParam0, iLocal_1))
	{
		return true;
	}
	return false;
}

bool func_669(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	if ((Global_1327590.f_19685 == 0 || iParam0 == 1) || iParam0 == 20)
	{
		Global_1327590.f_19685 = iParam0;
		Global_1327590.f_19684 = iParam1;
		return true;
	}
	return false;
}

void func_670(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_650(iParam1))
	{
		return;
	}
	if (__LIB_0__::func_75(&(uParam0->f_1[iParam1 /*5*/].f_2)))
	{
		return;
	}
	__LIB_0__::func_268(&(uParam0->f_1[iParam1 /*5*/].f_2), 0f);
}

bool func_671(var uParam0, int iParam1, int iParam2)
{
	if (!__LIB_17__::func_650(iParam1))
	{
		return false;
	}
	return __LIB_0__::func_264(&(uParam0->f_1[iParam1 /*5*/].f_2)) >= IntToFloat(iParam2);
}

void func_672(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_650(iParam1))
	{
		return;
	}
	if (!__LIB_0__::func_75(&(uParam0->f_1[iParam1 /*5*/].f_2)))
	{
		return;
	}
	__LIB_0__::func_37(&(uParam0->f_1[iParam1 /*5*/].f_2));
}

bool func_673()
{
	if (Global_1935436.f_18.f_1)
	{
		return true;
	}
	if ((Global_1935436.f_8 >= 10f && __LIB_16__::func_378()) && __LIB_10__::func_697())
	{
		__LIB_5__::func_836();
		return true;
	}
	return false;
}

void func_674(bool bParam0, int iParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		__LIB_6__::func_163(iVar0, bParam0, iParam1);
		iVar0++;
	}
}

bool func_675(var uParam0, int iParam1)
{
	if (!__LIB_17__::func_650(iParam1))
	{
		return false;
	}
	if (!uParam0->f_1[iParam1 /*5*/].f_1)
	{
		return false;
	}
	return __LIB_17__::func_652(__LIB_17__::func_656(uParam0, iParam1), 4);
}

int func_676(var uParam0, int iParam1, char* sParam2, char* sParam3)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (uParam0->f_127[iVar0 /*20*/] != -1)
		{
		}
		else
		{
			uParam0->f_127[iVar0 /*20*/] = iParam1;
			StringCopy(&(uParam0->f_127[iVar0 /*20*/].f_1), sParam2, 64);
			StringCopy(&(uParam0->f_127[iVar0 /*20*/].f_9), sParam3, 64);
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_677(var uParam0, bool bParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_36)
	{
		if (bParam1 && !MISC::IS_BIT_SET(uParam0->f_5[iVar0 /*3*/].f_1, 5))
		{
		}
		else if (!MAP::DOES_BLIP_EXIST(uParam0->f_5[iVar0 /*3*/].f_2))
		{
		}
		else
		{
			MAP::REMOVE_BLIP(&(uParam0->f_5[iVar0 /*3*/].f_2));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_78)
	{
		if (bParam1 && !MISC::IS_BIT_SET(uParam0->f_37[iVar0 /*4*/].f_2, 5))
		{
		}
		else if (!MAP::DOES_BLIP_EXIST(uParam0->f_37[iVar0 /*4*/].f_3))
		{
		}
		else
		{
			MAP::REMOVE_BLIP(&(uParam0->f_37[iVar0 /*4*/].f_3));
		}
		iVar0++;
	}
	uParam0->f_80 = 1;
}

bool func_678(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 65);
}

bool func_679(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

int func_680(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 50)
	{
		if (uParam0->f_1549[iVar0 /*11*/])
		{
		}
		else
		{
			uParam0->f_1549[iVar0 /*11*/] = 1;
			uParam0->f_1549[iVar0 /*11*/].f_2 = { __LIB_1__::func_344(sParam1) };
			uParam0->f_1549[iVar0 /*11*/].f_5 = iParam2;
			uParam0->f_1549[iVar0 /*11*/].f_6 = iParam3;
			uParam0->f_1549[iVar0 /*11*/].f_7 = iParam4;
			uParam0->f_1549[iVar0 /*11*/].f_8 = iParam5;
			uParam0->f_1549[iVar0 /*11*/].f_9 = iParam6;
			uParam0->f_1549[iVar0 /*11*/].f_10 = iParam7;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_681(int iParam0, bool bParam1)
{
	if (!__LIB_6__::func_55(iParam0, 1048576))
	{
		if (bParam1)
		{
			__LIB_6__::func_59(iParam0, 1048576);
		}
	}
	else if (!bParam1)
	{
		__LIB_6__::func_60(iParam0, 1048576);
	}
}

void func_682(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	if (uParam2->f_36 >= 10)
	{
		return;
	}
	iVar0 = uParam2->f_78;
	uParam2->f_37[iVar0 /*4*/] = iParam0;
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam2->f_37[iVar0 /*4*/].f_2), 5);
	}
	uParam2->f_37[iVar0 /*4*/].f_1 = __LIB_4__::func_824(iParam0);
	if (__LIB_4__::func_826(iParam0))
	{
		MISC::SET_BIT(&(uParam2->f_37[iVar0 /*4*/].f_2), 2);
		if (Global_1347702[iParam0 /*49*/].f_12 & 512 != 0)
		{
			MISC::SET_BIT(&(uParam2->f_37[iVar0 /*4*/].f_2), 3);
		}
	}
	if (Global_1347702[iParam0 /*49*/].f_12 & 131072 != 0)
	{
		MISC::SET_BIT(&(uParam2->f_37[iVar0 /*4*/].f_2), 4);
	}
	uParam2->f_78++;
}

int func_683(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	return PED::_0x94132D7C8D3575C4(iVar0);
}

void func_684(var uParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	if (!__LIB_0__::func_31(iParam1))
	{
		return;
	}
	iVar0 = __LIB_0__::func_271(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			sVar1 = "DUTCH";
			break;
		case 1:
			sVar1 = "JOHN";
			break;
		case 2:
			sVar1 = "JAVIER";
			break;
		case 3:
			sVar1 = "BILL";
			break;
		case 4:
			sVar1 = "UNCLE";
			break;
		case 5:
			sVar1 = "HOSEA";
			break;
		case 6:
			sVar1 = "MICAH_BELL";
			break;
		case 7:
			sVar1 = "CHARLES_SMITH";
			break;
		case 8:
			sVar1 = "SEAN";
			break;
		case 9:
			sVar1 = "LENNY";
			break;
		case 10:
			sVar1 = "KIERAN";
			break;
		case 11:
			sVar1 = "SADIE_ADLER";
			break;
		case 13:
			sVar1 = "ABIGAIL";
			break;
		case 14:
			sVar1 = "JACK";
			break;
		case 15:
			sVar1 = "MARYBETH";
			break;
		case 16:
			sVar1 = "MOLLY";
			break;
		case 17:
			sVar1 = "PEARSON";
			break;
		case 18:
			sVar1 = "STRAUSS";
			break;
		case 19:
			sVar1 = "SUSAN";
			break;
		case 20:
			sVar1 = "KAREN";
			break;
		case 21:
			sVar1 = "SWANSON";
			break;
		case 22:
			sVar1 = "TILLY";
			break;
		case 23:
			sVar1 = "TRELAWNY";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	__LIB_0__::func_928(uParam0, iVar0, sVar1, 0);
}

bool func_685()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	return __LIB_1__::func_220(__LIB_0__::func_61());
}

void func_686(var uParam0)
{
	if (MISC::IS_BIT_SET(uParam0->f_2, 2))
	{
		if (MISC::IS_BIT_SET(uParam0->f_2, 3))
		{
			uParam0->f_3 = MAP::_BLIP_ADD_FOR_RADIUS(uParam0->f_1, __LIB_1__::func_440(*uParam0), Global_1347702[*uParam0 /*49*/].f_18);
		}
		else
		{
			uParam0->f_3 = MAP::_BLIP_ADD_FOR_RADIUS(uParam0->f_1, __LIB_4__::func_816(*uParam0), Global_1347702[*uParam0 /*49*/].f_18);
			MAP::SET_BLIP_SPRITE(uParam0->f_3, Global_1347702[*uParam0 /*49*/].f_36, true);
		}
	}
	else
	{
		uParam0->f_3 = MAP::_BLIP_ADD_FOR_COORD(uParam0->f_1, __LIB_1__::func_440(*uParam0));
		MAP::SET_BLIP_SPRITE(uParam0->f_3, Global_1347702[*uParam0 /*49*/].f_36, true);
	}
	if (MISC::IS_BIT_SET(uParam0->f_2, 4))
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_3, -2074468799);
	}
	if (*uParam0 == 62)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_THOMAS_DOWNES");
	}
	else if (*uParam0 == 95)
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_3, 838722941);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_RHMRB");
	}
	else if (*uParam0 == 42)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_RCFSH");
	}
	else if (*uParam0 == 40)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_RCDIN");
	}
	else if (*uParam0 == 50)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_RCRKF");
	}
	else if ((((*uParam0 == 44 || *uParam0 == 45) || *uParam0 == 46) || *uParam0 == 47) || *uParam0 == 48)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_RCEXO");
	}
	if (Global_1347702[*uParam0 /*49*/].f_12 & 1 != 0)
	{
		MAP::_BLIP_SET_MODIFIER(uParam0->f_3, -1986290853);
	}
	__LIB_5__::func_241(*uParam0);
	MAP::SET_BLIP_FLASH_TIMER(uParam0->f_3, 64, *uParam0);
}

bool func_687(var uParam0)
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("PROP_PLAYER_SLEEP_BED")) && CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	if (BUILTIN::VDIST2(uParam0->f_1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false)) > 62500f)
	{
		return true;
	}
	if (__LIB_17__::func_673() && CAM::IS_SCREEN_FADED_OUT())
	{
		return true;
	}
	return false;
}

void func_688(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = __LIB_0__::func_271(iVar0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			if (!__LIB_1__::func_302(iVar0, -2147483648))
			{
				__LIB_3__::func_121(iVar0, -2147483648, 1, -1);
			}
			if (!__LIB_0__::func_287(iVar0, 51, 0))
			{
				__LIB_0__::func_288(iVar0, 51, 0);
			}
			PED::SET_PED_RESET_FLAG(iVar1, 331, true);
			if (AUDIO::_0x54B187F111D9C6F8(iVar1, 1) || uParam0->f_82[iVar0])
			{
				if (!__LIB_0__::func_287(iVar0, 52, 0))
				{
					__LIB_0__::func_288(iVar0, 52, 0);
				}
			}
			else if (__LIB_0__::func_287(iVar0, 52, 0) && !uParam0->f_82[iVar0])
			{
				if (!__LIB_0__::func_287(iVar0, 46, 1))
				{
					__LIB_0__::func_290(iVar0, 52, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_689(var uParam0)
{
	int iVar0;
	iVar0 = 1673015813;
	if (MISC::IS_BIT_SET(uParam0->f_1, 1))
	{
		iVar0 = -1337945352;
	}
	if (MISC::IS_BIT_SET(uParam0->f_1, 0))
	{
		if (MISC::IS_BIT_SET(uParam0->f_1, 2))
		{
			uParam0->f_2 = MAP::_BLIP_ADD_FOR_AREA(iVar0, __LIB_0__::func_135(*uParam0), __LIB_5__::func_453(*uParam0), __LIB_5__::func_454(*uParam0));
		}
		else
		{
			uParam0->f_2 = MAP::_BLIP_ADD_FOR_COORD(iVar0, __LIB_0__::func_135(*uParam0));
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_1, 2))
	{
		uParam0->f_2 = MAP::_BLIP_ADD_FOR_RADIUS(iVar0, __LIB_5__::func_455(*uParam0), __LIB_5__::func_456(*uParam0));
	}
	else
	{
		uParam0->f_2 = MAP::_BLIP_ADD_FOR_COORD(iVar0, __LIB_1__::func_204(*uParam0));
	}
	MAP::SET_BLIP_SPRITE(uParam0->f_2, Global_1835011[*uParam0 /*74*/].f_26, true);
	MAP::SET_BLIP_FLASH_TIMER(uParam0->f_2, 63, *uParam0);
	MAP::_BLIP_SET_MODIFIER(uParam0->f_2, -1986290853);
}

void func_690(var uParam0, int iParam1)
{
	*uParam0 = __LIB_0__::func_317();
	uParam0->f_4 = iParam1;
	uParam0->f_1 = { __LIB_1__::func_546(*uParam0) };
}

void func_691(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	(uParam0[iParam3 /*45*/])->f_25 = 64f;
	(uParam0[iParam3 /*45*/])->f_26 = 16f;
	(uParam0[iParam3 /*45*/])->f_20 = iParam3;
	__LIB_2__::func_790(uParam0[iParam3 /*45*/]);
	(*uParam0)[iParam3 /*45*/] = iParam1;
	if (bParam4)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			(uParam0[iParam3 /*45*/])->f_3[iVar0 /*3*/] = (*iParam2)[iVar0];
			iVar0++;
		}
		__LIB_2__::func_811(uParam0[iParam3 /*45*/], 128);
	}
	if (!__LIB_0__::func_75(&((uParam0[iParam3 /*45*/])->f_34)))
	{
		__LIB_1__::func_283(&((uParam0[iParam3 /*45*/])->f_34), 1);
	}
	__LIB_2__::func_811(uParam0[iParam3 /*45*/], 32768);
	__LIB_2__::func_811(uParam0[iParam3 /*45*/], 1024);
	(uParam0[iParam3 /*45*/])->f_29 = 1;
	(uParam0[iParam3 /*45*/])->f_21 = -1;
}

int func_692()
{
	return Local_5.f_25;
}

bool func_693()
{
	return Local_5.f_24;
}

void func_694()
{
	Local_5.f_24 = 0;
}

void func_695()
{
	Local_5.f_24 = 1;
}

void func_696(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13)
{
	float fVar0[4];
	int iVar5;
	int iVar6;
	if (VOLUME::_DOES_VOLUME_EXIST(*iParam0))
	{
		return;
	}
	iVar5 = 0;
	iVar6 = 0;
	switch (iParam10)
	{
		case 0:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 1:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar5 = 1;
			break;
		case 2:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar5 = 1;
			break;
		case 3:
			fVar0[0] = 0.35f;
			fVar0[1] = 0f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 4:
			fVar0[0] = 0.45f;
			fVar0[1] = 0.2f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 5:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 0f;
			fVar0[3] = 0f;
			iVar6 = 1;
			break;
		case 6:
			fVar0[0] = 1f;
			fVar0[1] = 1f;
			fVar0[2] = 1f;
			fVar0[3] = 1f;
			iVar6 = 1;
			break;
	}
	*iParam0 = VOLUME::_CREATE_SPEED_VOLUME(iParam11, vParam1, vParam4, vParam7, iVar5, iVar6, &fVar0, iParam12, iParam13);
}

bool func_697(int iParam0)
{
	int iVar0;
	if (__LIB_0__::func_117(iParam0, 32))
	{
		return true;
	}
	if (!__LIB_0__::func_29(iParam0))
	{
		return false;
	}
	iVar0 = __LIB_0__::func_120(iParam0);
	if (!PERSCHAR::_0x800DF3FC913355F3(iVar0))
	{
		return false;
	}
	PERSCHAR::_0x7B204F88F6C3D287(iVar0);
	__LIB_0__::func_123(iParam0, 32);
	return true;
}

int func_698(int iParam0)
{
	if (!__LIB_4__::func_56(iParam0))
	{
		return 0;
	}
	if (__LIB_4__::func_264(iParam0))
	{
		return 0;
	}
	if (((!__LIB_1__::func_200(94) && !__LIB_17__::func_637(94)) && !__LIB_1__::func_200(95)) && !__LIB_17__::func_637(95))
	{
	}
	__LIB_4__::func_262(iParam0, 1);
	return 1;
}

void func_699()
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!__LIB_14__::func_278(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_700(var uParam0)
{
	uParam0->f_4 = 0;
}

bool func_701(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return false;
	}
	return true;
}

void func_702(var uParam0, var uParam1, char[32] cParam2, struct<21> Param10)
{
	__LIB_12__::func_32(uParam0, uParam1, cParam2, Param10);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, __LIB_10__::func_770(15), &(Param10.f_10));
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(21), Param10.f_18);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, __LIB_10__::func_770(22), Param10.f_19);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, __LIB_10__::func_770(23), Param10.f_20);
}

void func_703(int iParam0, int iParam1)
{
	*iParam1 = COLLECTION::_0x922A79CD4A033B8B(iParam0);
}

void func_704(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "loot_empty", true);
	}
}

void func_705(int iParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		*iParam4 = __LIB_3__::func_326(iParam0, vParam1, iParam5, iParam6);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4))
	{
		__LIB_10__::func_533(*iParam4);
	}
}

bool func_706(int iParam0, var uParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;
	if ((bParam2 && __LIB_0__::func_2() == 0) && !UNLOCK::_UNLOCK_IS_VISIBLE(iParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_808(iParam0, uParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::_UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

void func_707(int iParam0)
{
	if (__LIB_14__::func_481(iParam0))
	{
		return;
	}
	uLocal_5 = (uLocal_5 || iParam0);
}

void func_708()
{
	Global_1911667 = 0;
}

bool func_709(struct<2> Param0, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	if (!__LIB_3__::func_358(Param0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (__LIB_0__::func_665(iParam2, iVar1, 1, 1) <= fParam3)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_710(int iParam0)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (PED::_0x0E99E3BF11BB6367(iParam0) && PED::_0x2311F15D971AA680(iParam0) == 1)
		{
			return true;
		}
	}
	return false;
}

int func_711(int iParam0, char* sParam1)
{
	int iVar0;
	iVar0 = __LIB_0__::func_17(*iParam0);
	if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
	{
		HUD::_UIPROMPT_SET_TAG(Global_1945938[iVar0 /*18*/].f_3, sParam1);
		return 1;
	}
	return 0;
}

bool func_712(var uParam0)
{
	if (*uParam0 < 15 && !__LIB_0__::func_86(Global_1934765.f_340[*uParam0 /*4*/].f_1))
	{
		if (!INTERIOR::IS_VALID_INTERIOR(Global_1934765.f_340[*uParam0 /*4*/]))
		{
			Global_1934765.f_340[*uParam0 /*4*/] = INTERIOR::GET_INTERIOR_AT_COORDS(Global_1934765.f_340[*uParam0 /*4*/].f_1);
			if (!INTERIOR::IS_VALID_INTERIOR(Global_1934765.f_340[*uParam0 /*4*/]))
			{
				return false;
			}
		}
	}
	else
	{
		*uParam0 = 0;
		return false;
	}
	return true;
}

int func_713(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	if (!PED::_IS_THIS_MODEL_A_HORSE(iParam0))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	ENTITY::_0x9587913B9E772D29(iVar0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam0));
	return iVar0;
}

bool func_714(int iParam0)
{
	int iVar0;
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar0, 0, 0))
	{
		if (iParam0 == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_715(char[4] cParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_9__::func_80(&(cParam0->f_5239), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_9__::func_88(&(cParam0->f_5239));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5239[iVar0 /*3*/] = cParam1;
	cParam0->f_5239[iVar0 /*3*/].f_2 = (cParam0->f_5239[iVar0 /*3*/].f_2 || iParam2);
}

bool func_716(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	if (Global_1905943)
	{
		return false;
	}
	Global_1905943 = iParam3;
	if (Global_1905943)
	{
	}
	if (Global_1905941 == iParam0)
	{
		return true;
	}
	if (Global_40.f_7729 == iParam0 && !bParam2)
	{
		Global_1905941 = iParam0;
		return true;
	}
	if (Global_40.f_7729 != Global_1905941 && !bParam2)
	{
		return false;
	}
	if (!__LIB_0__::func_450(iParam0))
	{
		return false;
	}
	if (!__LIB_1__::func_122(iParam0) && !bParam2)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_223(iParam0);
	if (iParam0 > 5 && !__LIB_1__::func_87(iVar0, Global_1946804.f_1))
	{
	}
	Global_1905941 = iParam0;
	__LIB_0__::func_828(iParam0, 1024);
	DECORATOR::DECOR_SET_BOOL(Global_35, "outfitChanged", false);
	DECORATOR::DECOR_SET_BOOL(Global_35, "playerChangeOutfits", true);
	if (bParam2)
	{
		__LIB_0__::func_806(iParam0, 32768);
	}
	if (bParam1)
	{
		__LIB_0__::func_806(iParam0, 8192);
	}
	return true;
}

void func_717(var uParam0, bool bParam1, bool bParam2)
{
	if (__LIB_0__::func_272(*uParam0, 0))
	{
		if (*uParam0 != Global_35)
		{
			PED::_SET_PED_BRAWLING_STYLE(*uParam0, joaat("BS_AI_BARBRAWL"));
			__LIB_3__::func_459(*uParam0, 0);
			if (bParam1)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam0, true, true);
			}
		}
		WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), true, 0, false, false);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 249, bParam2);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 258, true);
	}
}

void func_718(char[4] cParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (!__LIB_11__::func_270(cParam0, iParam2, &iVar0))
	{
		return;
	}
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (__LIB_5__::func_31(&(cParam0->f_5423[iVar1 /*65*/])))
		{
			if (cParam0->f_5423[iVar1 /*65*/].f_1 == iParam1)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 != -1 && ENTITY::DOES_ENTITY_EXIST(cParam0->f_5423[iVar0 /*65*/].f_1))
	{
		cParam0->f_5423[iVar2 /*65*/].f_1 = cParam0->f_5423[iVar0 /*65*/].f_1;
	}
	cParam0->f_5423[iVar0 /*65*/].f_1 = iParam1;
	__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 64);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
	{
		__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 8);
	}
	else if (__LIB_8__::func_614(iParam1))
	{
		__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 16);
	}
}

void func_719(char[4] cParam0, int iParam1, int iParam2, bool bParam3)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (bParam3)
		{
			if (!__LIB_11__::func_682(cParam0, iParam1, 128))
			{
				__LIB_11__::func_689(cParam0, iParam1, 128);
			}
		}
		else if (__LIB_11__::func_682(cParam0, iParam1, 128))
		{
			__LIB_11__::func_691(cParam0, iParam1, 128);
		}
	}
}

void func_720(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = __LIB_0__::func_398(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	iVar2 = __LIB_9__::func_812(iVar1);
	if (DECORATOR::DECOR_EXIST_ON(iVar0, "HorseGender"))
	{
		iVar3 = DECORATOR::DECOR_GET_INT(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = __LIB_5__::func_773(iVar0);
		DECORATOR::DECOR_SET_INT(iVar0, "HorseGender", iVar3);
	}
	__LIB_0__::func_811(iParam0, iVar1);
	__LIB_0__::func_810(iParam0, iVar2);
	__LIB_0__::func_812(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = MISC::GET_GAME_TIMER();
		iVar5 = __LIB_0__::func_23();
	}
	__LIB_11__::func_455(iParam0, iParam1);
	__LIB_11__::func_456(iParam0, iVar4);
	__LIB_11__::func_457(iParam0, iVar5);
	iVar6 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(iVar0, 7));
	__LIB_1__::func_442(iParam0, iVar6);
	__LIB_6__::func_144(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (__LIB_9__::func_368(iVar8, &iVar9))
		{
			iVar10 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, iVar9);
			__LIB_11__::func_459(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

void func_721(int iParam0)
{
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	__LIB_5__::func_983(iParam0);
	__LIB_1__::func_442(iParam0, 0);
	__LIB_6__::func_144(iParam0, 0f);
}

void func_722()
{
	__LIB_5__::func_521(0.25f);
}

void func_723(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	iVar2 = 0;
	while (iVar2 < 2)
	{
		if (uParam0->f_2023[iVar2 /*15*/].f_11 && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_2023[iVar2 /*15*/].f_12))
		{
			if (!bVar1)
			{
				iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				bVar1 = true;
			}
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2288) && !uParam0->f_2023[iVar2 /*15*/].f_13)
			{
				PED::_0xE9B168527B337BF0(uParam0->f_2288, uParam0->f_2023[iVar2 /*15*/].f_12);
				POPULATION::_0xF74E134F40192884(uParam0->f_2288, 1);
				uParam0->f_2023[iVar2 /*15*/].f_13 = 1;
			}
			if (!bParam1)
			{
				if (uParam0->f_2077 != 0 || __LIB_4__::func_562(uParam0, 33554432))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (HUD::IS_RADAR_HIDDEN())
					{
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
					}
					uParam0->f_2077 = 0;
					__LIB_4__::func_563(uParam0, 33554432);
				}
				bVar3 = __LIB_0__::func_1(uParam0->f_2023[iVar2 /*15*/].f_10, 131072);
				if (__LIB_0__::func_393(Global_35, uParam0->f_2023[iVar2 /*15*/].f_12, 0, 1))
				{
					if (uParam0->f_2078 >= 0)
					{
						__LIB_10__::func_878(uParam0, uParam0->f_2023[iVar2 /*15*/].f_10, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
						PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
					}
					if (bVar3)
					{
						__LIB_4__::func_636();
					}
					__LIB_5__::func_596(uParam0, iVar2, iVar0, bVar3);
				}
				else if (__LIB_4__::func_637(&(uParam0->f_2023[iVar2 /*15*/])) != 0)
				{
					__LIB_5__::func_596(uParam0, iVar2, iVar0, bVar3);
				}
			}
			else if (__LIB_0__::func_1(uParam0->f_2023[iVar2 /*15*/].f_10, 4))
			{
				if (uParam0->f_2078 >= 0)
				{
					if (((__LIB_8__::func_619(Global_35, uParam0->f_1406[uParam0->f_2078 /*41*/].f_1, 1) > uParam0->f_1406[uParam0->f_2078 /*41*/].f_17 && __LIB_0__::func_393(uParam0->f_2288, uParam0->f_2023[iVar2 /*15*/].f_12, 0, 1)) || uParam0->f_2077 != 0) || __LIB_4__::func_562(uParam0, 33554432))
					{
						iVar4 = 5152;
						if (__LIB_11__::func_693(Global_35, &(uParam0->f_2077), iVar4, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
							uParam0->f_2077 = 0;
							__LIB_4__::func_563(uParam0, 33554432);
						}
						else
						{
							__LIB_4__::func_532(uParam0, 33554432);
						}
					}
				}
			}
		}
		iVar2++;
	}
}

int func_724(var uParam0)
{
	CAM::DO_SCREEN_FADE_OUT(0);
	return 1;
}

bool func_725(int iParam0, int iParam1, char* sParam2)
{
	int iVar0;
	int iVar1;
	Vector3 vVar2;
	Vector3 vVar5;
	iVar0 = -1;
	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar0 = __LIB_10__::func_397(iParam0, sParam2, &vVar2);
				iVar1 = __LIB_10__::func_397(iParam1, sParam2, &vVar5);
				if (iVar0 != -1 && iVar1 != -1)
				{
					return iVar1 > iVar0;
				}
			}
		}
	}
	return false;
}

void func_726(int iParam0, float fParam1, int iParam2, int iParam3, bool bParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, bool bParam10, bool bParam11, float fParam12, int iParam13)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
			{
				if (bParam4)
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iParam0, fParam1, iParam2, iParam3, 0);
				}
				TASK::SET_ENABLE_SPEED_RESTRAIN_FOR_WAYPOINT_RECORDING_LEADER(iParam0, 1);
				TASK::SET_UP_SPEED_RESTRAIN_INFORMATION_FOR_PLAYER_FOLLOWER(iParam0, fParam5, fParam6, fParam7, fParam8, fParam9, bParam11, fParam12, iParam13);
			}
		}
	}
	if (bParam10)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_MELEE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
		}
	}
}

void func_727(float fParam0, float fParam1, float fParam2, bool bParam3)
{
	float fVar0;
	if (*fParam0 != fParam1)
	{
		fVar0 = fParam2;
		if (bParam3)
		{
			fVar0 = (0f + ((fParam2 * 30f) * BUILTIN::TIMESTEP()));
		}
		if ((*fParam0 - fParam1) > fVar0)
		{
			*fParam0 = (*fParam0 - fVar0);
		}
		else if ((*fParam0 - fParam1) < -fVar0)
		{
			*fParam0 = (*fParam0 + fVar0);
		}
		else
		{
			*fParam0 = fParam1;
		}
	}
}

void func_728(char[4] cParam0, char[4] cParam1, var uParam2)
{
	int iVar0;
	if (__LIB_6__::func_872(cParam0, 2097152))
	{
		return;
	}
	iVar0 = __LIB_5__::func_434(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = __LIB_5__::func_461(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0 /*3*/] = cParam1;
	cParam0->f_1020[iVar0 /*3*/].f_2 = (cParam0->f_1020[iVar0 /*3*/].f_2 || uParam2);
}

void func_729(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		__LIB_1__::func_281(iParam0[iVar0], 1, 1);
		iVar0++;
	}
}

void func_730(var uParam0)
{
	int iVar0;
	if (__LIB_1__::func_750(&iVar0))
	{
		if (__LIB_0__::func_144(iVar0, 0))
		{
			if (__LIB_0__::func_357(iVar0) == -525676072)
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("MASKS_LARGE"), 0);
				__LIB_14__::func_161(Global_35, joaat("CLOTHING_ITEM_HAT_NONE"), 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				PED::_SET_PED_COMPONENT_DISABLED(Global_35, joaat("NECKWEAR"), 0);
			}
			if (!__LIB_0__::func_144(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

int func_731(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	if (iParam3 == -358215195)
	{
		Var0 = { __LIB_1__::func_615(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	__LIB_0__::func_922(iParam3);
	return __LIB_14__::func_161(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

int func_732(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_223(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = __LIB_0__::func_998(iParam1);
	}
	if ((bParam3 && __LIB_0__::func_805(iParam1, 4096)) && Global_1946804.f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !__LIB_1__::func_87(iVar0, Global_1946804.f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		__LIB_0__::func_828(Global_40.f_7729, 4096);
		__LIB_0__::func_806(Global_1905941, 4096);
		Global_40.f_7729 = Global_1905941;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request") || DECORATOR::DECOR_EXIST_ON(iParam0, "metaped_outfit_request_name"))
	{
		__LIB_0__::func_207(iParam0);
	}
	__LIB_1__::func_10();
	if (!__LIB_0__::func_58(iParam1))
	{
		__LIB_14__::func_162(iVar0, iParam0, __LIB_0__::func_846(iParam1), 1, 0, 1);
	}
	__LIB_0__::func_660(iParam0);
	return 1;
}

bool func_733(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_4__::func_562(uParam0, 32768))
	{
		return true;
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		uParam0->f_2286 = __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1);
		uParam0->f_2287 = PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true);
		uParam0->f_2289 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1935630.f_40))
			{
				uParam0->f_2288 = Global_1935630.f_40;
			}
			else
			{
				uParam0->f_2288 = PED::GET_MOUNT(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
		}
		uParam0->f_2292 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35);
		__LIB_5__::func_62(uParam0);
	}
	if (__LIB_0__::func_78(uParam0) < 10)
	{
		if (__LIB_0__::func_78(uParam0) == 3)
		{
			__LIB_9__::func_911(uParam0, iParam5, bParam6);
		}
		else if (__LIB_0__::func_78(uParam0) > 3)
		{
			if (__LIB_0__::func_81(uParam0) == 0)
			{
				if (!__LIB_4__::func_562(uParam0, 524288))
				{
					__LIB_9__::func_374(uParam0);
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					__LIB_4__::func_574(uParam0, 4);
					__LIB_0__::func_115(uParam0, 10);
					__LIB_5__::func_382(uParam0, iParam5);
					return true;
				}
			}
			if (!__LIB_4__::func_562(uParam0, 67108864) && !Global_1935630.f_12)
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 16))
			{
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
			}
			CAM::_0x8910C24B7E0046EC();
			__LIB_1__::func_538(0);
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
			if (uParam0->f_2074 >= 0)
			{
				if (!__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2078 /*41*/]), 32768))
				{
					HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
				}
				if (__LIB_4__::func_575(uParam0, uParam0->f_2074))
				{
					if (__LIB_4__::func_576(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2078 /*41*/].f_27, uParam0->f_1735[uParam0->f_2078 /*22*/].f_1, 1065353216 /* Float: 1f */);
				}
				__LIB_9__::func_54(uParam0);
			}
		}
	}
	bVar0 = __LIB_5__::func_500(uParam0, iParam5, bParam6);
	bVar1 = CAM::_0xA24C1D341C6E0D53(1, 0, 0);
	if (bVar0)
	{
		if ((!__LIB_4__::func_562(uParam0, 268435456) && bVar1) && !__LIB_4__::func_562(uParam0, 262144))
		{
			bVar3 = INTERIOR::IS_VALID_INTERIOR(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_1406[uParam0->f_2074 /*41*/].f_1);
				if ((INTERIOR::IS_VALID_INTERIOR(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				__LIB_4__::func_532(uParam0, 131072);
				__LIB_4__::func_532(uParam0, 268435456);
			}
		}
		if (__LIB_4__::func_577(uParam0, 64) || (uParam0->f_2074 >= 0 && !__LIB_0__::func_274(&(uParam0->f_1406[uParam0->f_2074 /*41*/]), 524288)))
		{
			if (CAM::_0xA2B1C7EF759A63CE() > 0f || __LIB_0__::func_81(uParam0) == 0)
			{
				HUD::_0xC9CAEAEEC1256E54(-1679307491);
				CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) == 3 || __LIB_4__::func_562(uParam0, 131072))
	{
		__LIB_4__::func_984(uParam0);
		if (!__LIB_4__::func_562(uParam0, 262144))
		{
			if ((bVar0 && __LIB_4__::func_562(uParam0, 65536)) || __LIB_4__::func_562(uParam0, 131072))
			{
				__LIB_4__::func_532(uParam0, 32768);
				__LIB_4__::func_574(uParam0, 4);
				__LIB_0__::func_115(uParam0, 10);
				uParam0->f_2159 = 1;
				__LIB_5__::func_382(uParam0, iParam5);
				return true;
			}
		}
	}
	if (__LIB_0__::func_78(uParam0) >= 3)
	{
		__LIB_11__::func_110(uParam0, iParam5);
		__LIB_4__::func_578(uParam0);
		if (!__LIB_4__::func_579(uParam0, 1))
		{
			__LIB_5__::func_63(uParam0);
		}
		__LIB_4__::func_580(uParam0);
	}
	switch (__LIB_0__::func_78(uParam0))
	{
		case 0:
			__LIB_5__::func_501(uParam0, Param1, iParam5);
			break;
		case 1:
			__LIB_6__::func_920(uParam0);
			break;
		case 2:
			__LIB_9__::func_379(uParam0);
			break;
		case 3:
			if (__LIB_4__::func_581(uParam0))
			{
				__LIB_3__::func_155(2);
				__LIB_5__::func_377(uParam0, uParam0->f_1406[uParam0->f_2074 /*41*/].f_27, uParam0->f_1735[uParam0->f_2074 /*22*/].f_1, 1065353216 /* Float: 1f */);
				__LIB_2__::func_259(&(uParam0->f_2262));
				__LIB_4__::func_574(uParam0, 1);
				__LIB_4__::func_582();
				__LIB_0__::func_115(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
			if (!__LIB_4__::func_562(uParam0, 67108864))
			{
				PED::SET_PED_RESET_FLAG(Global_35, 25, true);
			}
			PED::SET_PED_RESET_FLAG(Global_35, 264, true);
			PED::SET_PED_RESET_FLAG(Global_35, 321, true);
			if (__LIB_0__::func_78(uParam0) == 5)
			{
				if (__LIB_4__::func_985(uParam0))
				{
					__LIB_4__::func_574(uParam0, 2);
					__LIB_0__::func_115(uParam0, 6);
				}
			}
			if (__LIB_0__::func_78(uParam0) == 6)
			{
				if (__LIB_4__::func_986(uParam0))
				{
					__LIB_4__::func_574(uParam0, 3);
					__LIB_0__::func_115(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || __LIB_9__::func_178(&(uParam0->f_2262)) >= 15f)
			{
				if (__LIB_9__::func_180(uParam0, iParam5))
				{
					if (__LIB_4__::func_583(uParam0))
					{
						uParam0->f_2075 = __LIB_5__::func_64(uParam0);
						__LIB_2__::func_259(&(uParam0->f_2262));
						PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
						HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						__LIB_4__::func_574(uParam0, 6);
						__LIB_0__::func_115(uParam0, 9);
					}
					else
					{
						__LIB_4__::func_574(uParam0, 4);
						__LIB_0__::func_115(uParam0, 10);
						__LIB_5__::func_382(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (__LIB_9__::func_180(uParam0, iParam5))
			{
				__LIB_5__::func_382(uParam0, iParam5);
				__LIB_0__::func_115(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_734(int iParam0)
{
	int iVar0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			PED::_0xED00D72F81CF7278(iVar0, 0, 0);
		}
	}
}

void func_735()
{
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
}

void func_736(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					TASK::TASK_STAND_STILL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), iParam2);
				}
			}
		}
		iVar0++;
	}
}

void func_737(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1), false);
				}
			}
		}
		iVar0++;
	}
}

void func_738(int iParam0, int iParam1, float fParam2)
{
	fParam2 = __LIB_0__::func_251(fParam2, 0f, 1E+09f);
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_2 = fParam2;
}

void func_739(int iParam0, int iParam1, int iParam2)
{
	Global_40.f_1095.f_1[iParam0 /*436*/].f_398[iParam1 /*4*/].f_3 = iParam2;
}

void func_740(int iParam0, float fParam1, float fParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	if (bParam4 && !__LIB_0__::func_139(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_17(iParam0);
	iVar1 = Global_1945938[iVar0 /*18*/].f_3;
	if (!HUD::_UIPROMPT_HAS_MANUAL_MASH_MODE(iVar1))
	{
		return;
	}
	HUD::_UIPROMPT_SET_MASH_MANUAL_MODE_INCREASE_PER_PRESS(iVar1, fParam1);
	HUD::_UIPROMPT_SET_MASH_MANUAL_MODE_DECAY_SPEED(iVar1, fParam2);
	HUD::_UIPROMPT_SET_MASH_MANUAL_MODE_PRESSED_GROWTH_SPEED(iVar1, fParam3);
}

int func_741(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_742(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	iVar1 = __LIB_4__::func_955(Param0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		__LIB_11__::func_370(Param0);
		iVar2 = __LIB_4__::func_956(Param0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			__LIB_0__::func_490(&iVar2, 0);
		}
		iVar0++;
	}
}

void func_743(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		PED::SET_PED_USING_ACTION_MODE(iParam0, bParam1, -1, 0);
	}
}

float func_744(var uParam0)
{
	return __LIB_1__::func_583(&(uParam0->f_600));
}

bool func_745(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_3__::func_358(Param0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					if (__LIB_0__::func_272(iVar2, iParam2))
					{
						return true;
					}
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_746(struct<2> Param0, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	if (!__LIB_0__::func_272(iParam2, 0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (__LIB_0__::func_272(iVar2, 0))
			{
				TASK::TASK_COMBAT_PED(iVar2, iParam2, 0, 0);
			}
		}
		iVar0++;
	}
}

bool func_747()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (PED::_0x285D36C5C72B0569(Global_35) <= 4f || PED::IS_PED_IN_MELEE_COMBAT(Global_35))
	{
		return true;
	}
	return false;
}

void func_748(struct<2> Param0, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_3__::func_358(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_955(Param0))
	{
		iVar1 = __LIB_4__::func_956(Param0, iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar1))
				{
					iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
					if (PED::IS_PED_HUMAN(iVar2) && __LIB_0__::func_272(iVar2, 0))
					{
						WEAPON::_GIVE_WEAPON_TO_PED_2(iVar2, iParam2, iParam3, bParam4, bParam5, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_749(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	struct<2> Var8;
	iVar0 = __LIB_0__::func_786();
	if (iParam3 == joaat("HONOR_EVENT_AMBIENT_KILL") || iParam3 == joaat("HONOR_EVENT_AMBIENT_KO"))
	{
		if (bParam6)
		{
			iParam0 = __LIB_8__::func_677(iParam0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam5))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_override"))
			{
				iParam0 = (DECORATOR::DECOR_GET_INT(iParam5, "honor_override") * -1);
				DECORATOR::DECOR_REMOVE(iParam5, "honor_override");
			}
			else if (DECORATOR::DECOR_EXIST_ON(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - DECORATOR::DECOR_GET_INT(iParam5, "honor_bank"));
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (__LIB_0__::func_293(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!__LIB_0__::func_181())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != joaat("HONOR_EVENT_ANIMAL_BLEEDOUT"))
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = BUILTIN::CEIL((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = BUILTIN::FLOOR((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = __LIB_0__::func_309(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = __LIB_0__::func_786();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == joaat("HONOR_EVENT_CHEAT"))) || bParam7)
	{
		iVar6 = __LIB_0__::func_416(iVar1);
		__LIB_1__::func_454(__LIB_0__::func_417(), 0, 4000);
		__LIB_0__::func_935(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		__LIB_1__::func_427(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_POSITIVE_TOTAL")), 1);
			Global_1347477.f_204 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(iParam5))
			{
				DECORATOR::DECOR_SET_INT(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > __LIB_0__::func_348(14))
				{
					sVar7 = "Honor_Increase_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_GOOD"), 0, joaat("COLOR_PURE_WHITE"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			__LIB_0__::func_15(__LIB_0__::func_14(joaat("HONOR_NEGATIVE_TOTAL")), 1);
			Global_1347477.f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < __LIB_0__::func_348(4))
				{
					sVar7 = "Honor_Decrease_Big";
					GRAPHICS::ANIMPOSTFX_PLAY("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					sParam4 = __LIB_0__::func_418(iParam3);
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					__LIB_0__::func_924(MISC::_CREATE_VAR_STRING(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", MISC::GET_HASH_KEY("TRANSACTION_HONOR_BAD"), 1, joaat("COLOR_RED"), "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { __LIB_0__::func_14(joaat("HONOR_CURRENT")) };
	STATS::STAT_ID_SET_INT(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		TELEMETRY::_TELEMETRY_HONOR(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		__LIB_0__::func_896(10, 1);
	}
}

int func_750(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	int iVar0;
	char* sVar1;
	__LIB_5__::func_486(uParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		iVar0 = __LIB_1__::func_422(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!__LIB_5__::func_491(uParam0, sParam1))
	{
		sVar1 = __LIB_0__::func_958(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		UILOG::_UILOG_SET_HAS_DISPLAYED_CACHED_OBJECTIVE();
		iVar0 = __LIB_0__::func_565(sVar1, iParam3, 0, 0, 0, 1);
	}
	return iVar0;
}

bool func_751(var uParam0, vector3 vParam1, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, bool bParam12)
{
	bool bVar0;
	bool bVar1;
	if (__LIB_0__::func_138(vParam1, 0f, 0f, 0f))
	{
		return false;
	}
	bVar0 = __LIB_5__::func_443(uParam0, 4);
	bVar1 = __LIB_11__::func_727(uParam0, vParam1, sParam4, sParam5, 4, sParam6, iParam7, fParam10, fParam11);
	if (__LIB_4__::func_938(uParam0) != 1 && bParam12)
	{
		if (bVar1)
		{
			if (!bVar0)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_5303));
				}
				uParam0->f_5303 = __LIB_5__::func_442(vParam1, 0);
				iParam9 = iParam9;
				if (ITEMSET::IS_ITEMSET_VALID(iParam8))
				{
					__LIB_5__::func_444(&iParam8, 0);
				}
				__LIB_8__::func_799(uParam0, 0, 0);
				__LIB_5__::func_470(uParam0, 4);
			}
		}
		else if (bVar0)
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_5303));
			}
			if (ITEMSET::IS_ITEMSET_VALID(iParam8))
			{
				__LIB_5__::func_444(&iParam8, 1);
			}
			__LIB_8__::func_799(uParam0, 1, 0);
			__LIB_5__::func_471(uParam0, 4);
		}
		if (MAP::DOES_BLIP_EXIST(uParam0->f_5303))
		{
			if (!__LIB_0__::func_175(MAP::GET_BLIP_COORDS(uParam0->f_5303), vParam1, 1056964608 /* Float: 0.5f */, 1))
			{
				MAP::SET_BLIP_COORDS(uParam0->f_5303, vParam1);
			}
		}
	}
	return bVar1;
}

bool func_752(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, bool bParam10)
{
	bool bVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1) && iParam9 == joaat("BLIP_STYLE_COMPANION"))
	{
		iParam9 = 408396114;
	}
	bVar0 = __LIB_11__::func_727(uParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), sParam2, sParam3, 1, sParam4, iParam5, fParam7, fParam8);
	if (__LIB_4__::func_938(uParam0) != 1 && __LIB_4__::func_937(uParam0, 64))
	{
		if (bParam10)
		{
			__LIB_10__::func_936(uParam0, iParam1, iParam9, bVar0, iParam6);
		}
		__LIB_4__::func_969(uParam0, 64);
	}
	return bVar0;
}

int func_753(var uParam0, var uParam1)
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
	__LIB_9__::func_111(uParam0);
	SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME());
	return 1;
}

bool func_754(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	iVar1 = __LIB_1__::func_47(iParam0);
	if (iVar1 == -1)
	{
		return false;
	}
	iVar4 = __LIB_1__::func_55(iVar1);
	if (iVar4 == -1)
	{
		return false;
	}
	iVar5 = __LIB_1__::func_66(iVar4, iParam4);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_DYNAMIC_SCENARIO"), true);
	PED::SET_PED_RESET_FLAG(Global_35, 219, true);
	PED::SET_PED_RESET_FLAG(Global_35, 220, true);
	PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar5))
	{
		__LIB_1__::func_78(iVar4);
		if (Global_1392915.f_121[iVar1 /*20*/].f_2)
		{
			__LIB_1__::func_211(iVar4, 65536);
		}
		*uParam1 = { Global_1392915[iVar1 /*12*/] };
		uParam1->f_11 = iVar1;
		uParam1->f_12 = iVar4;
		uParam1->f_14 = { uParam1->f_6 };
		uParam1->f_17 = uParam1->f_9;
		uParam1->f_18 = BUILTIN::TO_FLOAT(uParam1->f_10);
		if (iParam3 == 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam1->f_23)
			{
				if (__LIB_1__::func_314(iVar4, uParam1->f_14, uParam1->f_17, iVar0, &iVar2, 0, 0))
				{
					uParam1->f_23[iVar0] = iVar2;
					if (iVar2 == Global_35)
					{
						uParam1->f_30 = iVar0;
					}
				}
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < uParam1->f_23)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_23[iVar0]))
			{
				if (uParam1->f_23[iVar0] == Global_35)
				{
					uParam1->f_30 = iVar0;
				}
			}
			iVar0++;
		}
		if (iParam0 == 0)
		{
			__LIB_1__::func_213(23, 1);
		}
		WEAPON::_HIDE_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 2, false);
		if (uParam1->f_12 != 5 && uParam1->f_12 != 6)
		{
			HUD::_HIDE_HUD_COMPONENT(372886907);
		}
		*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar5, uParam1, 34, 6500);
		__LIB_1__::func_79();
		__LIB_1__::func_227();
		__LIB_1__::func_560(Global_1392915[iVar1 /*12*/].f_4, 1, 0);
		Global_1899528.f_45[iVar4] = __LIB_0__::func_23();
		__LIB_2__::func_670(&(Global_1899528.f_45[iVar4]), 0, 0, Global_1899528.f_53[iVar4], 0, 0, 0, 0);
		__LIB_1__::func_308(iVar1);
		__LIB_1__::func_309(-1, 0, 0, 0, 0);
		if (__LIB_1__::func_80(iVar4, &uVar3))
		{
			__LIB_1__::func_228(uVar3);
		}
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar5);
		return true;
	}
	return false;
}

void func_755(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_13__::func_688(iParam0, 1);
}

bool func_756(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	if (__LIB_1__::func_261(__LIB_1__::func_304(iParam0, __LIB_0__::func_317()), 6f, 4, 1))
	{
		return false;
	}
	if (__LIB_0__::func_750(&(Global_1391438.f_5), 2048))
	{
		return false;
	}
	if (__LIB_10__::func_718(iParam0) == 0)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_317();
	if (iVar0 == 3 && !__LIB_1__::func_185(28))
	{
		return false;
	}
	switch (iVar0)
	{
		case 1:
			if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
		case 3:
			if (__LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
			{
				bVar1 = true;
			}
			break;
	}
	if (bVar1)
	{
		return false;
	}
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	if (iVar2 >= 17 && iVar2 < 21)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 256))
			{
				return false;
			}
			if (!__LIB_10__::func_719(-1341684320))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 10))
			{
				return false;
			}
			if (__LIB_1__::func_250(-1341684320))
			{
				return false;
			}
			break;
		case 1:
			if (__LIB_8__::func_961(joaat("HAI_DOMINOES_01")) == 0 && __LIB_0__::func_317() == 2)
			{
				return false;
			}
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 512))
			{
				return false;
			}
			if (__LIB_1__::func_198(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1))
			{
				return false;
			}
			if (!__LIB_10__::func_719(-1567081107))
			{
				return false;
			}
			if (!(iVar2 > 6 && iVar2 < 20))
			{
				return false;
			}
			if (__LIB_1__::func_250(-1567081107))
			{
				return false;
			}
			break;
		case 2:
			if (!(__LIB_8__::func_961(joaat("HAI_FIVE_FINGER_FILLET_01")) || __LIB_8__::func_961(joaat("HAI_FIVE_FINGER_FILLET_02"))) && __LIB_0__::func_317() < 2)
			{
				return false;
			}
			if (__LIB_0__::func_750(&(Global_1391438.f_5), 1024))
			{
				return false;
			}
			if (!__LIB_10__::func_719(-1511391406))
			{
				return false;
			}
			if (!(iVar2 < 2 || iVar2 > 20))
			{
				return false;
			}
			if (__LIB_1__::func_250(-1511391406))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_757(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (__LIB_1__::func_531(iParam0, iParam1, 0))
		{
			return 0;
		}
	}
	if (iParam3 == -1)
	{
		Global_1360165[iParam0 /*1157*/].f_140 = (Global_1360165[iParam0 /*1157*/].f_140 || iParam1);
	}
	else
	{
		Global_1360165[iParam0 /*1157*/].f_141 = (Global_1360165[iParam0 /*1157*/].f_141 || iParam1);
		Global_1360165[iParam0 /*1157*/].f_142 = Global_1899515;
		__LIB_2__::func_670(&(Global_1360165[iParam0 /*1157*/].f_142), 0, 0, iParam3, 0, 0, 0, 0);
	}
	return 1;
}

bool func_758(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar14;
	struct<32> Var15;
	var uVar49;
	vVar4 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	__LIB_1__::func_65(iParam0, &vVar4, 1);
	vVar4.f_2 = iParam1;
	if (vVar4.y == -1)
	{
		return false;
	}
	iVar14 = __LIB_1__::func_66(vVar4.y, 1);
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar14);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar14))
	{
		if (!__LIB_1__::func_224(vVar4.y))
		{
			__LIB_1__::func_225(vVar4.y);
		}
		iVar1 = __LIB_1__::func_806(&vVar4, 0, iParam10);
		if (iVar1 == -1)
		{
			return false;
		}
		Global_1392915[iVar1 /*12*/].f_2 = iParam1;
		Global_1392915[iVar1 /*12*/].f_6 = { vParam2 };
		Global_1392915[iVar1 /*12*/].f_9 = fParam5;
		Global_1392915[iVar1 /*12*/].f_10 = iParam6;
		iVar0 = Global_1392915[iVar1 /*12*/].f_4;
		if (__LIB_1__::func_241(iVar0) || (!__LIB_0__::func_702(iVar0) && __LIB_0__::func_298(0) != iVar0))
		{
			iVar2 = __LIB_0__::func_80(iVar0);
			if (iVar2 == -1)
			{
				__LIB_1__::func_319(iVar0);
			}
		}
		if (__LIB_0__::func_702(iVar0))
		{
			__LIB_1__::func_297(iVar0);
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar14) > 0)
		{
			if (iParam8 == 1)
			{
				__LIB_1__::func_267(vVar4.y, 0);
			}
			return true;
		}
		Var15 = -1;
		Var15.f_1 = -1;
		Var15.f_2 = -1;
		Var15.f_4 = -1;
		Var15.f_11 = -1;
		Var15.f_12 = -1;
		Var15.f_23 = 6;
		Var15.f_30 = -1;
		Var15.f_31 = 255;
		if (*iParam7 > Var15.f_23)
		{
			return false;
		}
		iVar3 = 0;
		while (iVar3 < Var15.f_23)
		{
			Var15.f_23[iVar3] = 0;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < *iParam7)
		{
			Var15.f_23[iVar3] = (*iParam7)[iVar3];
			iVar3++;
		}
		Var15.f_13 = iParam9;
		if (__LIB_17__::func_754(iParam0, &Var15, &uVar49, 0, 1))
		{
			if (iParam8 == 1)
			{
				__LIB_1__::func_267(vVar4.y, 0);
			}
			return true;
		}
	}
	return false;
}

bool func_759(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	vector3 vVar0;
	float fVar3;
	struct<8> Var4;
	int iVar12;
	bool bVar13;
	int iVar14;
	struct<8> Var15;
	if (bParam3)
	{
		uParam0->f_223++;
		if (uParam0->f_223 < 10)
		{
			return (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304));
		}
		uParam0->f_223 = 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	__LIB_1__::func_534(uParam0, sParam1);
	if (!__LIB_0__::func_84(uParam0, 64))
	{
		if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam0)))
		{
			__LIB_0__::func_88(uParam0, 64);
		}
		else
		{
			vVar0 = { __LIB_1__::func_593(uParam0) };
			if (!__LIB_0__::func_86(vVar0))
			{
				__LIB_0__::func_487(uParam0, vVar0);
			}
		}
		return false;
	}
	fVar3 = __LIB_0__::func_94(Global_35, __LIB_0__::func_85(uParam0), 1);
	if (__LIB_0__::func_84(uParam0, 128) || __LIB_0__::func_84(uParam0, 256))
	{
		if ((fVar3 >= __LIB_1__::func_475(uParam0) && !bParam2) || !ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
		{
			if (uParam0->f_241)
			{
				__LIB_1__::func_436();
				uParam0->f_241 = 0;
			}
			__LIB_1__::func_476(uParam0);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_156);
			}
			__LIB_1__::func_594(uParam0);
			__LIB_1__::func_477(uParam0, 128, 1);
			__LIB_1__::func_477(uParam0, 256, 1);
			__LIB_1__::func_477(uParam0, 4096, 1);
			__LIB_1__::func_477(uParam0, 32768, 1);
			__LIB_1__::func_477(uParam0, 16777216, 1);
		}
	}
	else if (fVar3 <= __LIB_1__::func_478(uParam0) || bParam2)
	{
		if (!__LIB_0__::func_84(uParam0, 128))
		{
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_156))
			{
				if (__LIB_1__::func_478(uParam0) >= __LIB_1__::func_475(uParam0))
				{
				}
				Var4 = { __LIB_1__::func_479(uParam0) };
				if (MISC::IS_STRING_NULL_OR_EMPTY(&Var4))
				{
					__LIB_1__::func_595(uParam0);
				}
				Var4 = { __LIB_1__::func_479(uParam0) };
				iVar12 = 256;
				if (!__LIB_0__::func_84(uParam0, 1))
				{
					iVar12 |= 2048;
				}
				uParam0->f_156 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_152), iVar12, &Var4, false, true);
				__LIB_1__::func_414(uParam0, 0, 0, 0, 0);
				__LIB_0__::func_88(uParam0, 128);
			}
		}
	}
	if (__LIB_0__::func_84(uParam0, 128))
	{
		if (__LIB_0__::func_84(uParam0, 256) && !__LIB_0__::func_84(uParam0, 4194304))
		{
			return true;
		}
		__LIB_1__::func_743(uParam0);
		if (!uParam0->f_241)
		{
			if (__LIB_0__::func_95())
			{
				__LIB_1__::func_36(4096);
				uParam0->f_241 = 1;
			}
		}
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_156, true, false))
		{
			bVar13 = true;
			Var15 = { __LIB_1__::func_589(uParam0) };
			iVar14 = 0;
			while (iVar14 < 4)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_174[iVar14 /*9*/])))
				{
					if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_174[iVar14 /*9*/]), &Var15))
					{
						if (!uParam0->f_174[iVar14 /*9*/].f_8)
						{
							uParam0->f_174[iVar14 /*9*/].f_8 = 1;
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, &(uParam0->f_174[iVar14 /*9*/]));
							bVar13 = false;
						}
						else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &(uParam0->f_174[iVar14 /*9*/])))
						{
							bVar13 = false;
						}
					}
				}
				iVar14++;
			}
			if (!__LIB_0__::func_84(uParam0, 8388608))
			{
				if (ANIMSCENE::_0xA9016536015DE29D(uParam0->f_156, &Var15))
				{
					if (!__LIB_0__::func_84(uParam0, 16777216))
					{
						if ((!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_156, &Var15) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15)) && !ANIMSCENE::_0x1F0E401031E20146(uParam0->f_156, &Var15))
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_156, &Var15);
						}
						__LIB_0__::func_88(uParam0, 16777216);
					}
					if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_156, &Var15))
					{
						bVar13 = false;
					}
				}
			}
			if (!bVar13)
			{
				return false;
			}
			__LIB_0__::func_88(uParam0, 256);
			__LIB_1__::func_477(uParam0, 4194304, 1);
			return true;
		}
	}
	return false;
}

void func_760(var uParam0)
{
	if (!__LIB_0__::func_272(__LIB_0__::func_271(uParam0->f_2), 0))
	{
		return;
	}
	if (!__LIB_0__::func_899(&(uParam0->f_48)))
	{
		__LIB_4__::func_89(&(uParam0->f_48), 0);
	}
	switch (uParam0->f_13)
	{
		case 2:
			if (!__LIB_0__::func_750(&(uParam0->f_10), 1))
			{
				if (!PED::IS_PED_ON_FOOT(Global_35))
				{
					if (!uParam0->f_51)
					{
						uParam0->f_51 = 1;
						__LIB_2__::func_259(&(uParam0->f_48));
					}
					else if (__LIB_1__::func_583(&(uParam0->f_48)) > 5f)
					{
						__LIB_0__::func_63(&(uParam0->f_10), 1, 1);
						__LIB_1__::func_688(uParam0, "departLine", 0, 0, 0, -1);
						__LIB_2__::func_259(&(uParam0->f_48));
					}
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_750(&(uParam0->f_10), 1))
			{
				if (__LIB_1__::func_583(&(uParam0->f_48)) > 4f)
				{
					__LIB_0__::func_63(&(uParam0->f_10), 1, 1);
					__LIB_1__::func_688(uParam0, "departLine", 0, 0, 0, -1);
					__LIB_2__::func_259(&(uParam0->f_48));
				}
				return;
			}
			if (!__LIB_0__::func_750(&(uParam0->f_10), 2))
			{
				if (__LIB_0__::func_94(Global_35, __LIB_1__::func_584(), 1) > 150f)
				{
					__LIB_0__::func_63(&(uParam0->f_10), 2, 1);
					__LIB_1__::func_688(uParam0, "rideBanter", 0, 0, 0, -1);
				}
			}
			break;
		case 4:
			break;
	}
}

void func_761(var uParam0)
{
	__LIB_1__::func_728(uParam0);
	__LIB_1__::func_729(uParam0);
	__LIB_1__::func_730(uParam0);
}

void func_762(int iParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	__LIB_1__::func_857(iParam0, 1);
}

bool func_763(int iParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar14;
	struct<32> Var15;
	var uVar49;
	vVar4 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	__LIB_1__::func_65(iParam0, &vVar4, 1);
	vVar4.f_2 = iParam1;
	if (vVar4.y == -1)
	{
		return false;
	}
	iVar14 = __LIB_1__::func_66(vVar4.y, 1);
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar14);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar14))
	{
		if (!__LIB_1__::func_224(vVar4.y))
		{
			__LIB_1__::func_225(vVar4.y);
		}
		iVar1 = __LIB_1__::func_806(&vVar4, 0, iParam10);
		if (iVar1 == -1)
		{
			return false;
		}
		Global_1392915[iVar1 /*12*/].f_2 = iParam1;
		Global_1392915[iVar1 /*12*/].f_6 = { vParam2 };
		Global_1392915[iVar1 /*12*/].f_9 = uParam5;
		Global_1392915[iVar1 /*12*/].f_10 = iParam6;
		iVar0 = Global_1392915[iVar1 /*12*/].f_4;
		if (__LIB_1__::func_241(iVar0) || (!__LIB_0__::func_702(iVar0) && __LIB_0__::func_298(0) != iVar0))
		{
			iVar2 = __LIB_0__::func_80(iVar0);
			if (iVar2 == -1)
			{
				__LIB_1__::func_319(iVar0);
			}
		}
		if (__LIB_0__::func_702(iVar0))
		{
			__LIB_1__::func_297(iVar0);
		}
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar14) > 0)
		{
			if (iParam8 == 1)
			{
				__LIB_1__::func_267(vVar4.y, 0);
			}
			return true;
		}
		Var15 = -1;
		Var15.f_1 = -1;
		Var15.f_2 = -1;
		Var15.f_4 = -1;
		Var15.f_11 = -1;
		Var15.f_12 = -1;
		Var15.f_23 = 6;
		Var15.f_30 = -1;
		Var15.f_31 = 255;
		if (*iParam7 > Var15.f_23)
		{
			return false;
		}
		iVar3 = 0;
		while (iVar3 < Var15.f_23)
		{
			Var15.f_23[iVar3] = 0;
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < *iParam7)
		{
			Var15.f_23[iVar3] = (*iParam7)[iVar3];
			iVar3++;
		}
		Var15.f_13 = iParam9;
		if (__LIB_1__::func_855(iParam0, &Var15, &uVar49, 0, 1))
		{
			if (iParam8 == 1)
			{
				__LIB_1__::func_267(vVar4.y, 0);
			}
			return true;
		}
	}
	return false;
}

int func_764(var uParam0)
{
	if (uParam0->f_13 == 2)
	{
		if (__LIB_1__::func_243(14))
		{
			uParam0->f_13 = 4;
		}
	}
	return 1;
}

bool func_765(var uParam0)
{
	if (__LIB_1__::func_243(14))
	{
		return false;
	}
	return true;
}

bool func_766(var uParam0)
{
	int iVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_42))
	{
		if (__LIB_0__::func_750(&(uParam0->f_9), 32))
		{
			uParam0->f_42 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_37, 0f, 0f, 0f, uParam0->f_41, uParam0->f_41, uParam0->f_41, "Activity Volume");
		}
		else if (__LIB_0__::func_750(&(uParam0->f_9), 64))
		{
			iVar0 = 0;
			uParam0->f_42 = COMPANION::_0x722FBE08EF5B87BD(uParam0->f_37, 2, iVar0);
		}
		else
		{
			__LIB_9__::func_280(*uParam0, &(uParam0->f_42), uParam0->f_37, uParam0->f_41);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_42) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_42, Global_36))
	{
		return true;
	}
	return false;
}

void func_767()
{
	if (!__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		Local_15.f_56 = __LIB_2__::func_379(&Local_15, 0);
		if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Local_15.f_56, false, joaat("REL_GANG_LEMOYNE_RAIDERS"));
		}
	}
}

void func_768()
{
	int iVar0;
	if (Local_15.f_19 < Local_15.f_215)
	{
		iVar0 = Local_15.f_19;
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (!__LIB_2__::func_25(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15[iVar0], 200f, -1082130432 /* Float: -1f */, Local_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_237(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < (Local_15.f_215 + Local_15.f_216))
	{
		iVar0 = (Local_15.f_19 - Local_15.f_215);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (!__LIB_2__::func_26(&Local_15, iVar0, 8))
			{
				if (__LIB_1__::func_472(Local_15.f_40[iVar0], 200f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_28(&Local_15, iVar0, 8);
				}
			}
		}
	}
	else if (Local_15.f_19 < ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		iVar0 = ((Local_15.f_19 - Local_15.f_215) - Local_15.f_216);
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (!__LIB_2__::func_339(&Local_15, iVar0, 8))
			{
				if (ENTITY::IS_ENTITY_A_VEHICLE(Local_15.f_49[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Local_15.f_49[iVar0]))
				{
					if (__LIB_2__::func_109(Local_15.f_49[iVar0], 200f, -1082130432 /* Float: -1f */))
					{
						__LIB_2__::func_238(&Local_15, iVar0, 8);
					}
				}
			}
		}
	}
	Local_15.f_19++;
	if (Local_15.f_19 >= ((Local_15.f_215 + Local_15.f_216) + Local_15.f_217))
	{
		Local_15.f_19 = 0;
	}
}

void func_769()
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;
	int iVar12;
	int iVar13;
	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < Local_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15[iVar0]))
		{
			if (__LIB_2__::func_247(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(Local_15[iVar0]);
				PED::DELETE_PED(&(Local_15[iVar0]));
			}
			else
			{
				if (__LIB_2__::func_1(Local_15[iVar0], 0, 0))
				{
					if (!__LIB_2__::func_4(&Local_15, 16384))
					{
						__LIB_2__::func_32(&(Local_15[iVar0]));
					}
					__LIB_2__::func_24(Local_15[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_15[iVar0], 5, true);
					PED::_0x24C82EF607105FAA(Local_15[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(Local_15[iVar0], 993130593);
					if (__LIB_2__::func_178(Local_15[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35) || PED::IS_PED_FLEEING(Local_15[iVar0])) || __LIB_2__::func_25(&Local_15, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(Local_15[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(Local_15[iVar0], false, false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(Local_15[iVar0], Global_35, 4, iVar1, -1082130432 /* Float: -1f */, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					}
					else if ((Local_15.f_215 == Local_15.f_216 && __LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true))
					{
						iVar11 = Local_15.f_40[iVar0];
						PED::_0x931B241409216C1F(Local_15.f_40[iVar0], iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, Local_15.f_40[iVar0], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
						if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(Local_15[iVar0], true)))
						{
							if (PED::_GET_SEAT_PED_IS_USING(Local_15[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(Local_15[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, Local_15.f_118[iVar0 /*4*/].f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(Local_15[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!__LIB_0__::func_86(Local_15.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
						}
						else
						{
							if (__LIB_2__::func_33(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432 /* Float: -1f */, -1, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(Local_15[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								__LIB_1__::func_474(Local_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(Local_15[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_15[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(Local_15[iVar0]), -1) == Local_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(Local_15[iVar0]) && !PED::IS_PED_IN_COMBAT(Local_15[iVar0], Global_35)) && !__LIB_2__::func_25(&Local_15, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(Local_15[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_40[iVar0]))
		{
			if (__LIB_2__::func_248(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(Local_15.f_84[iVar0]));
				}
				PED::DELETE_PED(&(Local_15.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_84[iVar0]))
				{
					if (__LIB_2__::func_306(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(Local_15.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(Local_15.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(Local_15.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_84[iVar0]));
					}
				}
				if (__LIB_2__::func_1(Local_15.f_40[iVar0], 0, 1))
				{
					if (__LIB_0__::func_75(&(Local_15.f_247)))
					{
						if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], false), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
							PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(Local_15.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(Local_15.f_40[iVar0], true)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(Local_15.f_40[iVar0], Local_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(Local_15.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_15.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_49[iVar0]))
		{
			if (__LIB_2__::func_734(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(Local_15.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == Local_15.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == Local_15.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_15.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Local_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_52[iVar0]))
		{
			if (__LIB_2__::func_307(&Local_15, Local_15.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(Local_15.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_15.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_770(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, bool bParam12, float fParam13, bool bParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	if (fParam13 <= 0f)
	{
		iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	}
	else
	{
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam13);
	}
	iVar1 = __LIB_2__::func_719(uParam0, iParam1, iParam2, iVar0, bParam7, bParam8, bParam9, iParam10, bParam11, bParam12, bParam14, bParam15);
	__LIB_0__::func_172(iVar0);
	return iVar1;
}

void func_771(var uParam0, var uParam1)
{
	int iVar0;
	if (uParam0->f_1)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (*uParam0 == (*uParam1)[iVar0])
			{
				__LIB_2__::func_691(uParam0, (*uParam1)[iVar0], 0, 30f);
			}
			else
			{
				iVar0++;
			}
		}
	}
}

bool func_772(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, int iParam18, bool bParam19)
{
	int iVar0;
	if (!__LIB_0__::func_139(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = __LIB_2__::func_512(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0, 0);
			__LIB_2__::func_450(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = __LIB_2__::func_513(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		else
		{
			if (__LIB_0__::func_86(vParam2))
			{
				return false;
			}
			*uParam0 = __LIB_1__::func_282(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, iParam18, 0);
		}
		if (fParam8 != 0f)
		{
			__LIB_1__::func_483(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			__LIB_1__::func_382(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (__LIB_0__::func_572(*uParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			__LIB_1__::func_221(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
		{
			__LIB_1__::func_221(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_0__::func_139(*uParam0))
			{
				__LIB_1__::func_748(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && __LIB_1__::func_732(*uParam0, 1)) || (bParam17 && __LIB_0__::func_567(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				__LIB_2__::func_522(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				__LIB_2__::func_590(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		__LIB_1__::func_748(uParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_773(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_2__::func_523(iParam1, uParam2, 0);
		iVar5 = __LIB_10__::func_601(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_774(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_10__::func_602(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_775(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_10__::func_603(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_2__::func_523(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_2__::func_526(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

void func_776(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	__LIB_10__::func_603(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_777(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < uParam0->f_217)
	{
		iVar0 = __LIB_2__::func_541(iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

void func_778(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = __LIB_2__::func_495(uParam0->f_181, iParam2, bParam3);
	if (iVar0 != 0)
	{
		WEAPON::_0x899A04AFCC725D04(iParam1, iVar0);
	}
	else if (bParam3)
	{
		__LIB_2__::func_272(iParam1, iParam2, -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
	else
	{
		__LIB_2__::func_272(iParam1, iParam2, -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	}
}

bool func_779(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;
	if (__LIB_0__::func_58())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	if (Local_15.f_95 <= 9 && Local_15.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_322(&Local_15))
			{
				__LIB_0__::func_380(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447.f_2 & 2 != 0)
	{
		__LIB_0__::func_380(&Global_1393447, 2);
		return false;
	}
	if (Local_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_15.f_95 < 10 && Local_15.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (__LIB_2__::func_131())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!__LIB_0__::func_86(Local_15.f_209))
			{
				if (Local_15.f_20 > 207f)
				{
					if (Local_15.f_223 == 0)
					{
						Local_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (Local_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					Local_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (__LIB_2__::func_672())
		{
			return true;
		}
		if (__LIB_2__::func_415(&uVar5))
		{
			fVar4 = __LIB_2__::func_381();
			iVar3 = 0;
			while (iVar3 < Local_15.f_215)
			{
				if (Local_15.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(Local_15[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

void func_780()
{
	float fVar0;
	if (__LIB_0__::func_65(&Global_1393447, 2))
	{
		__LIB_0__::func_380(&Global_1393447, 2);
	}
	if (__LIB_0__::func_65(&Global_1393447, 16))
	{
		__LIB_0__::func_380(&Global_1393447, 16);
	}
	if (__LIB_0__::func_65(&Global_1393447, 32768))
	{
		__LIB_0__::func_380(&Global_1393447, 32768);
	}
	if (__LIB_2__::func_5())
	{
		if (__LIB_2__::func_4(&Local_15, 4))
		{
			__LIB_2__::func_6(0);
			__LIB_2__::func_149(&Local_15, 4);
		}
	}
	fVar0 = 8f;
	if (Local_15.f_151 == 17)
	{
		fVar0 = 12f;
	}
	if (((!__LIB_0__::func_0() && !__LIB_1__::func_285(&(Local_15.f_250), fVar0)) && !CAM::IS_SCREEN_FADED_OUT()) && !__LIB_2__::func_7())
	{
		__LIB_1__::func_283(&(Local_15.f_250), 0);
		return;
	}
	if (__LIB_1__::func_285(&(Local_15.f_250), fVar0))
	{
	}
	__LIB_2__::func_301(&Local_15);
	__LIB_2__::func_555();
	__LIB_2__::func_310(&Local_15, 0);
	__LIB_2__::func_420();
	__LIB_2__::func_171(&Local_15);
	PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
	__LIB_2__::func_282(&Local_15, 1);
	__LIB_2__::func_273(&Local_15, 0);
	if (Local_15.f_93 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_15.f_93);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(Local_15.f_237))
	{
		__LIB_2__::func_492(&Local_15);
		__LIB_1__::func_544(Local_15.f_237);
	}
	__LIB_2__::func_283(&Local_15, 1);
	if (Local_15.f_95 >= 9 && Local_15.f_95 < 11)
	{
		if (__LIB_2__::func_8(Local_15.f_151))
		{
		}
		else if (__LIB_2__::func_172(Local_15.f_151, 1) || __LIB_2__::func_245(Local_15.f_151, 1))
		{
			__LIB_0__::func_47(&Global_1393447, 2048);
			if (!__LIB_0__::func_75(&(Local_15.f_244)))
			{
				__LIB_0__::func_747(120, 0, 1);
			}
		}
	}
	if (__LIB_2__::func_1(Global_35, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
	}
	if (__LIB_2__::func_1(Local_15.f_56, 0, 0))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_15.f_56, false);
	}
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_2__::func_9(Local_15.f_151)))
	{
		MISC::_0x1096603B519C905F("");
	}
	__LIB_2__::func_10(Local_15.f_151);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_781(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (iParam3 == -1)
	{
		iParam3 = (iParam0->f_216 - 1);
	}
	if (bParam1)
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1(iParam0->f_40[iVar0], 0, 0))
			{
				if (!__LIB_2__::func_566(iParam0, iVar0))
				{
					__LIB_2__::func_723(iParam0, iVar0, 1);
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iParam2;
		while (iVar0 <= iParam3)
		{
			if (__LIB_2__::func_1((*iParam0)[iVar0], 0, 0))
			{
				if (__LIB_2__::func_566(iParam0, iVar0))
				{
					__LIB_2__::func_723(iParam0, iVar0, 0);
				}
			}
			iVar0++;
		}
	}
}

void func_782()
{
	int iVar0;
	__LIB_1__::func_283(&(iLocal_15.f_247), 0);
	if (__LIB_1__::func_285(&(iLocal_15.f_247), 5f))
	{
		__LIB_2__::func_310(&iLocal_15, 0);
	}
	if (__LIB_1__::func_285(&(iLocal_15.f_247), 3f))
	{
		__LIB_2__::func_295(&iLocal_15);
	}
	__LIB_2__::func_685();
	if (!__LIB_2__::func_4(&iLocal_15, 8388608))
	{
		if (!__LIB_2__::func_4(&iLocal_15, 4194304))
		{
			if (iLocal_15.f_181 == 2)
			{
				__LIB_2__::func_206(&iLocal_15, 1.1f);
			}
			else
			{
				__LIB_2__::func_206(&iLocal_15, 1.2f);
			}
			__LIB_2__::func_147(&iLocal_15, 4194304);
		}
		if (__LIB_2__::func_4(&iLocal_15, 4194304))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(Global_35);
			if ((iVar0 < (iLocal_15.f_225 - 60) || IntToFloat(iVar0) < (IntToFloat(iLocal_15.f_225) * 0.7f)) || iVar0 < 80)
			{
				__LIB_2__::func_206(&iLocal_15, 1f);
				__LIB_2__::func_147(&iLocal_15, 8388608);
			}
		}
	}
}

void func_783()
{
	int iVar0;
	int iVar1;
	int iVar2[8];
	int iVar11;
	int iVar12;
	int iVar13;
	iVar1 = 4748164;
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15[iVar0]))
		{
			if (__LIB_2__::func_568(iVar0))
			{
				iVar2[iVar0] = PED::GET_MOUNT(iLocal_15[iVar0]);
				PED::DELETE_PED(&(iLocal_15[iVar0]));
			}
			else
			{
				if (__LIB_2__::func_1(iLocal_15[iVar0], 0, 0))
				{
					if (!__LIB_2__::func_4(&iLocal_15, 16384))
					{
						__LIB_2__::func_32(&(iLocal_15[iVar0]));
					}
					__LIB_2__::func_24(iLocal_15[iVar0], 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_15[iVar0], 5, true);
					PED::_0x24C82EF607105FAA(iLocal_15[iVar0], joaat("AGGRESSIVE"));
					PED::_0xB8B6430EAD2D2437(iLocal_15[iVar0], 993130593);
					if (__LIB_2__::func_178(iLocal_15[iVar0]))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_15[iVar0], joaat("REL_PLAYER_DISLIKE"));
					}
					PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[iVar0], false, 0, false);
					if ((PED::IS_PED_IN_COMBAT(iLocal_15[iVar0], Global_35) || PED::IS_PED_FLEEING(iLocal_15[iVar0])) || __LIB_2__::func_25(&iLocal_15, iVar0, 256))
					{
						if (PED::IS_PED_IN_COMBAT(iLocal_15[iVar0], 0))
						{
							TASK::CLEAR_PED_TASKS(iLocal_15[iVar0], false, false);
							TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_15[iVar0], Global_35, 4, iVar1, -1082130432 /* Float: -1f */, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(iLocal_15[iVar0], true);
					}
					else if ((iLocal_15.f_215 == iLocal_15.f_216 && __LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 1)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_15[iVar0], true))
					{
						iVar11 = iLocal_15.f_40[iVar0];
						PED::_0x931B241409216C1F(iLocal_15.f_40[iVar0], iVar11, 0);
						TASK::OPEN_SEQUENCE_TASK(&iVar12);
						TASK::TASK_MOUNT_ANIMAL(0, iLocal_15.f_40[iVar0], 20000, -1, 2f, 1, 0, 0);
						if (!__LIB_0__::func_86(iLocal_15.f_118[iVar0 /*4*/].f_1))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iLocal_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
						}
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
						__LIB_1__::func_474(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
						PED::SET_PED_KEEP_TASK(iLocal_15[iVar0], true);
					}
					else
					{
						iVar11 = 0;
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_15[iVar0], true) && ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(iLocal_15[iVar0], true)))
						{
							if (PED::_GET_SEAT_PED_IS_USING(iLocal_15[iVar0]) == -1)
							{
								iVar13 = PED::GET_VEHICLE_PED_IS_IN(iLocal_15[iVar0], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								if (!__LIB_0__::func_86(iLocal_15.f_118[iVar0 /*4*/].f_1))
								{
									TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iVar13, iLocal_15.f_118[iVar0 /*4*/].f_1, 7f, 524419, 6, 5f, 7f, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, -1f, 0, 0);
								__LIB_1__::func_474(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
						}
						else if (PED::IS_PED_ON_MOUNT(iLocal_15[iVar0]))
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar12);
							if (!__LIB_0__::func_86(iLocal_15.f_118[iVar0 /*4*/].f_1))
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iLocal_15.f_118[iVar0 /*4*/].f_1, 2f, 20000, 0.25f, 0, 40000f);
							}
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 2.5f, 0, 0);
							__LIB_1__::func_474(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							PED::SET_PED_KEEP_TASK(iLocal_15[iVar0], true);
						}
						else
						{
							if (__LIB_2__::func_564(iVar0))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, iVar1, -1082130432 /* Float: -1f */, -1, 0);
								__LIB_1__::func_474(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
								PED::_0x39A2FC5AF55A52B1(iLocal_15[iVar0], 2000);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar12);
								TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1f, 128, 0);
								__LIB_1__::func_474(iLocal_15[iVar0], &iVar12, 0, 0, 1, 1);
							}
							PED::SET_PED_KEEP_TASK(iLocal_15[iVar0], true);
						}
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_15[iVar0], false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_USING(iLocal_15[iVar0]), -1) == iLocal_15[iVar0])
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_15[iVar0]));
				}
				else if ((!PED::IS_PED_FLEEING(iLocal_15[iVar0]) && !PED::IS_PED_IN_COMBAT(iLocal_15[iVar0], Global_35)) && !__LIB_2__::func_25(&iLocal_15, iVar0, 128))
				{
					PED::_0x39A2FC5AF55A52B1(iLocal_15[iVar0], -1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_15[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_216)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_40[iVar0]))
		{
			if (__LIB_2__::func_569(iVar0, &iVar2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_84[iVar0]))
				{
					OBJECT::DELETE_OBJECT(&(iLocal_15.f_84[iVar0]));
				}
				PED::DELETE_PED(&(iLocal_15.f_40[iVar0]));
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_84[iVar0]))
				{
					if (__LIB_2__::func_692(iVar0))
					{
						OBJECT::DELETE_OBJECT(&(iLocal_15.f_84[iVar0]));
					}
					else
					{
						ENTITY::DETACH_ENTITY(iLocal_15.f_84[iVar0], true, true);
						PHYSICS::ACTIVATE_PHYSICS(iLocal_15.f_84[iVar0]);
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_15.f_84[iVar0]));
					}
				}
				if (__LIB_2__::func_1(iLocal_15.f_40[iVar0], 0, 1))
				{
					if (__LIB_0__::func_75(&(iLocal_15.f_247)))
					{
						if (!__LIB_2__::func_1(PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iVar0], false), 0, 0))
						{
							TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_15.f_40[iVar0], iLocal_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
							PED::SET_PED_KEEP_TASK(iLocal_15.f_40[iVar0], true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(PED::_0xF103823FFE72BB49(iLocal_15.f_40[iVar0])) && !ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(iLocal_15.f_40[iVar0], true)))
					{
						TASK::_TASK_SMART_FLEE_STYLE_COORD(iLocal_15.f_40[iVar0], iLocal_15.f_209, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						PED::SET_PED_KEEP_TASK(iLocal_15.f_40[iVar0], true);
					}
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_15.f_40[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_217)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_49[iVar0]))
		{
			if (__LIB_2__::func_583(iVar0))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_15.f_49[iVar0]));
			}
			else if (PLAYER::GET_PLAYERS_LAST_VEHICLE() == iLocal_15.f_49[iVar0] && PED::GET_VEHICLE_PED_IS_IN(Global_35, true) == iLocal_15.f_49[iVar0])
			{
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_15.f_49[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_218)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_15.f_52[iVar0]))
		{
			if (__LIB_2__::func_307(&iLocal_15, iLocal_15.f_52[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(iLocal_15.f_52[iVar0]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_15.f_52[iVar0]));
			}
		}
		iVar0++;
	}
}

bool func_784(var uParam0, var uParam1, var uParam2, int iParam3)
{
	if (!__LIB_2__::func_618(&uParam0))
	{
		return false;
	}
	if (__LIB_5__::func_28(&uParam0) <= iParam3 + 500)
	{
		return false;
	}
	return true;
}

void func_785(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	__LIB_14__::func_65(iParam0, uParam1, 1);
	__LIB_2__::func_624(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

bool func_786(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_14__::func_65(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_787()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (__LIB_2__::func_167(Local_15[iVar0], 1))
				{
					__LIB_2__::func_73(Local_15[iVar0], &(Local_15.f_22[iVar0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_788()
{
	__LIB_2__::func_104(&(Local_15.f_152), 1);
	__LIB_2__::func_105(&(Local_15.f_152), 1);
	__LIB_2__::func_50(&(Local_15.f_152), 1);
	__LIB_2__::func_51(&(Local_15.f_152), 1);
	__LIB_2__::func_111(&(Local_15.f_152), 1);
	__LIB_2__::func_52(&(Local_15.f_152), 1);
	__LIB_2__::func_250(&(Local_15.f_152), 1);
	__LIB_2__::func_662(&(Local_15.f_152), 1);
	__LIB_2__::func_507(&(Local_15.f_152), 250);
}

int func_789(var uParam0, float fParam1, float fParam2)
{
	int iVar0[3];
	int iVar4;
	int iVar5;
	bool bVar6;
	iVar4 = 0;
	while (iVar4 < uParam0->f_217)
	{
		iVar0[iVar5] = uParam0->f_49[iVar4];
		iVar5++;
		iVar4++;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0[iVar5] = PED::GET_VEHICLE_PED_IS_IN(Global_35, false);
		iVar5++;
	}
	return __LIB_2__::func_669(&iVar0, uParam0->f_209, fParam1, 0, 0, 1084227584 /* Float: 5f */, bVar6, fParam2);
}

bool func_790(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;
	if (__LIB_0__::func_58())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	if (iLocal_15.f_95 <= 9 && iLocal_15.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_205(&iLocal_15))
			{
				__LIB_0__::func_380(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447.f_2 & 2 != 0)
	{
		__LIB_0__::func_380(&Global_1393447, 2);
		return false;
	}
	if (iLocal_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (iLocal_15.f_95 < 10 && iLocal_15.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (__LIB_2__::func_131())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!__LIB_0__::func_86(iLocal_15.f_209))
			{
				if (iLocal_15.f_20 > 207f)
				{
					if (iLocal_15.f_223 == 0)
					{
						iLocal_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (iLocal_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					iLocal_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (__LIB_2__::func_696())
		{
			return true;
		}
		if (__LIB_2__::func_687(&uVar5))
		{
			fVar4 = __LIB_2__::func_578();
			iVar3 = 0;
			while (iVar3 < iLocal_15.f_215)
			{
				if (iLocal_15.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(iLocal_15[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

int func_791(int iParam0)
{
	return __LIB_2__::func_674(&iLocal_15, iParam0);
}

void func_792(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_215)
	{
		if (iVar0 < *uParam1)
		{
			if (!iParam0->f_228[iVar0])
			{
				if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
				{
					if (__LIB_2__::func_398((*iParam0)[iVar0]))
					{
						__LIB_2__::func_603(iParam0[iVar0], uParam1[iVar0 /*21*/], uParam2, 1, 1);
						iParam0->f_228[iVar0] = 1;
					}
				}
				else
				{
					iParam0->f_228[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

void func_793(int iParam0)
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = __LIB_2__::func_674(iParam0, iVar1);
		STREAMING::REQUEST_MODEL(iVar0, false);
		iVar1++;
	}
}

bool func_794(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 1;
	iVar1 = 0;
	while (iVar1 < iParam0->f_215)
	{
		iVar0 = __LIB_2__::func_674(iParam0, iVar1);
		if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iVar2 = 0;
		}
		iVar1++;
	}
	return iVar2;
}

bool func_795(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_695((*iParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_796(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!__LIB_2__::func_688(uParam0, 0))
		{
			__LIB_2__::func_693(uParam0, 0, 1);
		}
		if (!__LIB_2__::func_688(uParam0, 1))
		{
			__LIB_2__::func_693(uParam0, 1, 1);
		}
	}
	else
	{
		if (bParam2 || __LIB_2__::func_688(uParam0, 0))
		{
			__LIB_2__::func_693(uParam0, 0, 0);
		}
		if (bParam2 || __LIB_2__::func_688(uParam0, 1))
		{
			__LIB_2__::func_693(uParam0, 1, 0);
		}
	}
}

bool func_797()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_15.f_215)
	{
		if (__LIB_2__::func_683(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_798(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;
	if (__LIB_0__::func_58())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	if (Local_15.f_95 <= 9 && Local_15.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_322(&Local_15))
			{
				__LIB_0__::func_380(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447.f_2 & 2 != 0)
	{
		__LIB_0__::func_380(&Global_1393447, 2);
		return false;
	}
	if (Local_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_15.f_95 < 10 && Local_15.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (__LIB_2__::func_131())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!__LIB_0__::func_86(Local_15.f_209))
			{
				if (Local_15.f_20 > 207f)
				{
					if (Local_15.f_223 == 0)
					{
						Local_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (Local_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					Local_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (__LIB_2__::func_707())
		{
			return true;
		}
		if (__LIB_2__::func_415(&uVar5))
		{
			fVar4 = __LIB_2__::func_381();
			iVar3 = 0;
			while (iVar3 < Local_15.f_215)
			{
				if (Local_15.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(Local_15[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

bool func_799(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_630((*uParam0)[*uParam3], 0, iParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_800(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_215)
	{
		if (iVar0 < *uParam1)
		{
			if (!uParam0->f_228[iVar0])
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0]))
				{
					if (__LIB_2__::func_398((*uParam0)[iVar0]))
					{
						__LIB_2__::func_603(uParam0[iVar0], uParam1[iVar0 /*21*/], uParam2, 1, 1);
						uParam0->f_228[iVar0] = 1;
					}
				}
				else
				{
					uParam0->f_228[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
}

bool func_801(var uParam0, var uParam1, var uParam2, char* sParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (*uParam1 < 0)
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_215)
		{
			if (__LIB_2__::func_1((*uParam0)[iVar0], 0, 1))
			{
				iVar1++;
				iVar2 = iVar0;
			}
			iVar0++;
		}
		if (iVar1 <= 1)
		{
			if (iVar2 >= 0)
			{
				if (!__LIB_2__::func_25(uParam0, iVar2, 1))
				{
					__LIB_1__::func_148(uParam2);
					*uParam1 = iVar2;
				}
			}
			else if (iVar1 == 0)
			{
				return true;
			}
		}
	}
	else
	{
		if (!__LIB_0__::func_75(uParam2))
		{
			if (__LIB_2__::func_1((*uParam0)[*uParam1], 0, 0))
			{
				TASK::_0x2E1D6D87346BB7D2((*uParam0)[*uParam1], Global_35, 1, 0);
			}
		}
		__LIB_1__::func_283(uParam2, 0);
		if (__LIB_1__::func_285(uParam2, fParam4))
		{
			if (__LIB_2__::func_1((*uParam0)[*uParam1], 0, 1))
			{
				if (__LIB_2__::func_712(uParam0, *uParam1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED((*uParam0)[*uParam1], Global_35, 4, 524292, -1082130432 /* Float: -1f */, -1, 0);
					PED::SET_PED_KEEP_TASK((*uParam0)[*uParam1], true);
					__LIB_1__::func_733((*uParam0)[*uParam1]);
					__LIB_2__::func_56((*uParam0)[*uParam1], 0, 1);
					__LIB_2__::func_303((*uParam0)[*uParam1], Global_35, sParam3, 0, 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					return true;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_802(int iParam0)
{
	if (!__LIB_2__::func_8(iParam0->f_151))
	{
		if (iParam0->f_20 < 60f)
		{
			if (__LIB_2__::func_550(iParam0->f_151, iParam0->f_221))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_803(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	var uVar5;
	if (__LIB_0__::func_58())
	{
		return true;
	}
	if (Global_16)
	{
		return true;
	}
	if (__LIB_0__::func_296(0, 1, 1))
	{
		return true;
	}
	if (Local_15.f_95 <= 9 && Local_15.f_96 & 2097152 == 0)
	{
		if (__LIB_0__::func_65(&Global_1393447, 2))
		{
			if (__LIB_2__::func_205(&Local_15))
			{
				__LIB_0__::func_380(&Global_1393447, 2);
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	else if (Global_1393447.f_2 & 2 != 0)
	{
		__LIB_0__::func_380(&Global_1393447, 2);
		return false;
	}
	if (Local_15.f_96 & 16 != 0)
	{
		return true;
	}
	if (Local_15.f_95 < 10 && Local_15.f_96 & 1048576 == 0)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (__LIB_2__::func_131())
			{
				if (!uParam0->f_8)
				{
					return true;
				}
			}
			if (!__LIB_0__::func_86(Local_15.f_209))
			{
				if (Local_15.f_20 > 207f)
				{
					if (Local_15.f_223 == 0)
					{
						Local_15.f_223 = MISC::GET_GAME_TIMER() + 1000;
						return false;
					}
					else if (Local_15.f_223 < MISC::GET_GAME_TIMER())
					{
						vVar0 = { __LIB_1__::func_974(PLAYER::PLAYER_ID()) };
						return true;
					}
				}
				else
				{
					Local_15.f_223 = 0;
				}
			}
		}
	}
	else
	{
		if (__LIB_2__::func_604())
		{
			return true;
		}
		if (__LIB_2__::func_415(&uVar5))
		{
			fVar4 = __LIB_2__::func_381();
			iVar3 = 0;
			while (iVar3 < Local_15.f_215)
			{
				if (Local_15.f_9[iVar3] < fVar4)
				{
					if (__LIB_2__::func_1(Local_15[iVar3], 0, 1))
					{
						return false;
					}
				}
				iVar3++;
			}
			return true;
		}
	}
	return false;
}

bool func_804(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_2__::func_741((*iParam0)[*uParam3], iParam1, uParam2, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_805()
{
	int iVar0;
	switch (Local_274.f_2)
	{
		case 0:
			__LIB_2__::func_187();
			__LIB_2__::func_730(&Local_15);
			Local_274.f_2 = 1;
			break;
		case 1:
			iVar0 = 1;
			if (!__LIB_2__::func_188())
			{
				iVar0 = 0;
			}
			if (!__LIB_2__::func_731(&Local_15))
			{
				iVar0 = 0;
			}
			return iVar0;
	}
	return false;
}

void func_806()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
			if (!MAP::DOES_BLIP_EXIST(Local_15.f_22[iVar0]))
			{
				if (PED::IS_PED_SHOOTING(Local_15[iVar0]) || __LIB_1__::func_472(Local_15[iVar0], 40f, 12f, Local_15.f_9[iVar0], -1082130432 /* Float: -1f */))
				{
					__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
				}
			}
		}
		iVar0++;
	}
}

void func_807()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!__LIB_2__::func_1(Local_15[iVar0], 0, 1))
		{
		}
		else
		{
			__LIB_2__::func_189(&Local_15, iVar0, joaat("BLIP_STYLE_ENEMY"), 0);
			PED::_SET_PED_CROUCH_MOVEMENT(Local_15[iVar0], false, 0, false);
		}
		iVar0++;
	}
}

void func_808()
{
	__LIB_2__::func_11();
	__LIB_2__::func_742();
}

bool func_809(var uParam0)
{
	PED::_0xF7EA250B9A919E03(-1918659017, uParam0->f_20[1 /*14*/]);
	if (!PED::_0x854BC9B1A1CCD034(-1918659017, uParam0->f_20[1 /*14*/]))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[1 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[1 /*14*/]), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_20[0 /*14*/]))
	{
		__LIB_2__::func_857(&(uParam0->f_20[0 /*14*/]), 1, 1);
	}
	return true;
}

int func_810(var uParam0)
{
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_12))
	{
		return 0;
	}
	return __LIB_2__::func_907(uParam0, uParam0->f_20[0 /*14*/].f_5);
}

int func_811(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return 0;
	}
	Var0 = { __LIB_5__::func_96(iParam0) };
	Var5 = { __LIB_3__::func_0(iParam0, iParam1, Var0, Var0.f_4) };
	if (INVENTORY::_0xCB5D11F9508A928D(iParam0, &Var5, &Var0, iParam1, Var0.f_4, iParam2, 752097756))
	{
		if (__LIB_3__::func_1(iParam1, -839724752) && __LIB_3__::func_2(iParam1, 4))
		{
			if (!__LIB_2__::func_646(42))
			{
				__LIB_3__::func_3(iParam1);
			}
		}
		return 1;
	}
	return 0;
}

Vector3 func_812(int iParam0, int iParam1)
{
	return __LIB_3__::func_36(iParam0, iParam1);
}

void func_813(var uParam0, int iParam1)
{
	uParam0->f_256 = iParam1;
	__LIB_3__::func_45(uParam0, 1);
}

void func_814(var uParam0, int iParam1)
{
	uParam0->f_257 = iParam1;
	__LIB_3__::func_45(uParam0, 2);
}

void func_815(var uParam0, int iParam1)
{
	uParam0->f_258 = iParam1;
	__LIB_3__::func_45(uParam0, 4);
}

Vector3 func_816(var uParam0)
{
	var uVar0;
	vector3 vVar8;
	var uVar11;
	vector3 vVar14;
	MemCopy(&uVar0, {__LIB_3__::func_56(uParam0)}, 8);
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_265))
	{
		uParam0->f_265 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_260), 0, 0, false, true);
	}
	else if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_265, false))
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_265, __LIB_0__::func_731(Global_35), &vVar14, false, 0, 2))
		{
			vVar8 = { vVar14 };
		}
		else
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_265, &vVar8, &uVar11, 2);
		}
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_265);
		return vVar8;
	}
	return 0f, 0f, 0f;
}

void func_817(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4))
	{
		if (__LIB_0__::func_84(uParam0, 16))
		{
			POPULATION::_0xA1CFB35069D23C23(uParam0->f_4);
			POPULATION::_0x74C2B3DC0B294102(uParam0->f_4);
			__LIB_0__::func_136(uParam0);
			PATHFIND::_0xD17672447692478E(uParam0->f_4, 0);
		}
	}
	if (__LIB_0__::func_84(uParam0, 8))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_4);
		__LIB_3__::func_23(uParam0, 8, 1);
	}
	uParam0->f_4 = 0;
	__LIB_3__::func_23(uParam0, 16, 1);
}

void func_818(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_0__::func_137() };
	__LIB_3__::func_43(uParam0, &Var0);
}

struct<8> func_819(var uParam0)
{
	struct<8> Var0;
	Var0 = { __LIB_3__::func_57(uParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		Var0 = { __LIB_0__::func_134() };
	}
	return Var0;
}

void func_820(var uParam0, int iParam1, char* sParam2)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264))
	{
		return;
	}
	if (!__LIB_3__::func_47(uParam0, iParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_3__::func_100(uParam0, iParam1);
	}
	if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, sParam2))
	{
		if (((ENTITY::IS_ENTITY_A_PED(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_264, sParam2, false))) || (ENTITY::IS_ENTITY_AN_OBJECT(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_264, sParam2, false)))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam1) && ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_264, sParam2, false))))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(uParam0->f_264, sParam2, iParam1);
		}
	}
}

void func_821(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) || __LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 2))
		{
			if (__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 1) || ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, &(uParam0->f_13[iVar0 /*12*/].f_1)))
			{
				__LIB_3__::func_62(uParam0, &(uParam0->f_13[iVar0 /*12*/].f_1), uParam0->f_13[iVar0 /*12*/], uParam0->f_13[iVar0 /*12*/].f_9);
				if (bParam1 && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/]))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
					if (iVar1 != Global_35 && !__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 16))
					{
						__LIB_0__::func_142(iVar1);
					}
				}
			}
		}
		iVar0++;
	}
}

struct<4> func_822(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { __LIB_3__::func_36(iParam0, iParam1) };
	Var0.f_3 = __LIB_3__::func_68(iParam0, iParam1);
	return Var0;
}

void func_823(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	if (iParam3 == 0 && !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (ENTITY::IS_ENTITY_DEAD(iParam1) && !bParam5))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		sParam2 = __LIB_1__::func_435(iParam1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
		}
		return;
	}
	iVar0 = __LIB_3__::func_69(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0 /*12*/].f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = __LIB_3__::func_70(uParam0, sParam2);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != iParam1)
		{
			__LIB_3__::func_48(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = __LIB_3__::func_71(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0 /*12*/] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0 /*12*/].f_1), sParam2, 64);
		uParam0->f_13[iVar0 /*12*/].f_9 = iParam3;
		uParam0->f_13[iVar0 /*12*/].f_10 = iParam4;
		if (bParam5)
		{
			__LIB_0__::func_143(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
		else
		{
			__LIB_0__::func_159(&(uParam0->f_13[iVar0 /*12*/]), 2);
		}
	}
}

void func_824(var uParam0, char* sParam1)
{
	int iVar0;
	struct<8> Var1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_264))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_264, true, false))
	{
		return;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, sParam1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_282[iVar0 /*9*/])) && MISC::ARE_STRINGS_EQUAL(sParam1, &(uParam0->f_282[iVar0 /*9*/])))
		{
			Var1 = { uParam0->f_266 };
			uParam0->f_282[iVar0 /*9*/] = { Var1 };
		}
		iVar0++;
	}
	__LIB_3__::func_43(uParam0, sParam1);
	__LIB_3__::func_23(uParam0, 2097152, 1);
	__LIB_0__::func_88(uParam0, 33554432);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_264, sParam1, true);
}

void func_825(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_325 = { vParam1 };
	uParam0->f_328 = iParam4;
	if (__LIB_0__::func_86(vParam1))
	{
		__LIB_3__::func_23(uParam0, 2048, 1);
	}
	else
	{
		__LIB_0__::func_88(uParam0, 2048);
		if (bParam5)
		{
			__LIB_0__::func_88(uParam0, -2147483648);
		}
	}
}

void func_826(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(uParam0->f_13[iVar0 /*12*/]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_13[iVar0 /*12*/])) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]) != Global_35)
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_13[iVar0 /*12*/]);
			if (PED::IS_PED_HUMAN(iVar1))
			{
				if (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_264, &(uParam0->f_13[iVar0 /*12*/].f_1)))
				{
					if (!__LIB_0__::func_107(&(uParam0->f_13[iVar0 /*12*/]), 8))
					{
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 0, 1, 0)))
						{
							if (!__LIB_3__::func_47(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 0)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 0, false, false);
							}
						}
						if (__LIB_0__::func_154(__LIB_0__::func_153(iVar1, 1, 1, 0)))
						{
							if (!__LIB_3__::func_47(uParam0, WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iVar1, 1)))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(iVar1, joaat("WEAPON_UNARMED"), true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_827(var uParam0)
{
	StringCopy(&(uParam0->f_260), "", 32);
	__LIB_3__::func_85(uParam0);
	__LIB_0__::func_487(uParam0, 0f, 0f, 0f);
	__LIB_3__::func_86(uParam0);
}

void func_828(var uParam0, char* sParam1)
{
	struct<8> Var0;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return;
	}
	Var0 = { __LIB_3__::func_25(uParam0) };
	if ((!MISC::ARE_STRINGS_EQUAL(&Var0, sParam1) && ANIMSCENE::_0xA9016536015DE29D(uParam0->f_264, sParam1)) && ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_264, sParam1))
	{
		ANIMSCENE::_0xAE6ADA8FE7E84ACC(uParam0->f_264, sParam1);
	}
}

Vector3 func_829(int iParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { __LIB_3__::func_364(iParam0, Global_35, 1065353216 /* Float: 1f */) };
	vVar3 = { __LIB_0__::func_173(vVar0) };
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + vVar3 * Vector(fParam1, fParam1, fParam1) };
	return vVar6;
}

void func_830()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_17__::func_331();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

bool func_831(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	if (*uParam0 < iParam5 || *uParam0 > iParam6)
	{
		*uParam0 = iParam5;
	}
	iVar0 = 0;
	while (iVar0 < iParam7)
	{
		if (__LIB_3__::func_492((*uParam2)[*uParam0], iParam3, &(uParam0->f_5), uParam4, 0, uParam0->f_98[*uParam0]))
		{
			return true;
		}
		*uParam0++;
		if (*uParam0 > iParam6)
		{
			*uParam0 = iParam5;
		}
		iVar0++;
	}
	return false;
}

void func_832(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_4__::func_453(uParam0[iVar0 /*17*/], bParam1, bParam2);
		iVar0++;
	}
}

int func_833(int iParam0, float fParam1)
{
	int iVar0;
	iVar0 = __LIB_3__::func_577(iParam0);
	if (iVar0 != 0)
	{
		__LIB_3__::func_984(iParam0, fParam1);
		return 1;
	}
	return 0;
}

void func_834(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_BEAR_TRAP_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_BEAR_TRAP_JN"), 0);
			}
			break;
		case 1:
			if (bParam1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_DARK_ALLEY_AMBUSH_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_DARK_ALLEY_AMBUSH_JN"), 0);
			}
			break;
		case 2:
			if (bParam1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_DEAD_JOHN_ALT_1_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_DEAD_JOHN_ALT_1_JN"), 0);
			}
			break;
		case 3:
			if (bParam1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_DEAD_JOHN_ALT_2_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_DEAD_JOHN_ALT_2_JN"), 0);
			}
			break;
		case 4:
			if (bParam1)
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_INBRED_KIDNAP_AR"), 0);
			}
			else
			{
				__LIB_3__::func_904(joaat("JOURNAL_RANDOM_EVENTS_INBRED_KIDNAP_JN"), 0);
			}
			break;
		default:
			break;
	}
}

void func_835(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_7__::func_412();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (__LIB_3__::func_610(iParam0, -2147483648))
	{
		return;
	}
	switch (iParam0)
	{
		case -1:
			return;
		case 29:
			__LIB_3__::func_616(1);
			break;
		case 43:
			__LIB_3__::func_616(2);
			break;
		case 61:
			__LIB_3__::func_616(4);
			break;
		case 73:
			__LIB_3__::func_616(8);
			break;
	}
	AUDIO::_0x3D0BBCCF401B5FDB();
	__LIB_10__::func_821(iParam0, 0);
}

int func_836(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	float fVar0;
	vector3 vVar1;
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (__LIB_3__::func_287())
			{
				return 1;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return 1;
			}
		}
		if (!uParam0->f_48)
		{
			if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (__LIB_3__::func_236(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (__LIB_1__::func_85(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[uParam0->f_188]))
				{
					if (Global_1935630.f_40 != (*uParam1)[uParam0->f_188])
					{
						if ((bParam3 && !ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_188])) || !bParam3)
						{
							if ((uParam0->f_98[uParam0->f_188] * uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return 1;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (__LIB_0__::func_62(Global_36, uParam0->f_51) > fVar0)
				{
					return 1;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (__LIB_0__::func_62(Global_36, vVar1) > fVar0)
				{
					return 1;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam1)[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return 1;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return 0;
}

void func_837(char* sParam0, bool bParam1, bool bParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		Global_1395482.f_11 = { __LIB_1__::func_344(sParam0) };
		if (bParam1)
		{
			__LIB_3__::func_529(8);
		}
		if (bParam2)
		{
			__LIB_3__::func_529(16);
		}
	}
}

bool func_838(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	if (__LIB_8__::func_526(uParam0, uParam1))
	{
		return true;
	}
	if (!__LIB_3__::func_761(uParam0, 1048576))
	{
		if (uParam0->f_82)
		{
			iVar0 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
			iVar1 = (iVar0 - uParam1->f_5);
			fVar2 = __LIB_3__::func_837(uParam0, 0);
			if (IntToFloat(iVar1) >= (fVar2 * 1000f))
			{
				return true;
			}
			if (__LIB_0__::func_239(uParam1, 1048576))
			{
				iVar3 = (iVar0 - uParam1->f_6);
				fVar4 = __LIB_3__::func_837(uParam0, 1);
				if (IntToFloat(iVar3) >= (fVar4 * 1000f))
				{
					return true;
				}
			}
			if (__LIB_0__::func_239(uParam1, 16))
			{
				iVar5 = (iVar0 - uParam1->f_7);
				fVar6 = __LIB_3__::func_837(uParam0, 2);
				if (IntToFloat(iVar5) >= (fVar6 * 1000f))
				{
					return true;
				}
			}
		}
		else
		{
			if (__LIB_1__::func_285(&(uParam1->f_35), __LIB_3__::func_837(uParam0, 0)))
			{
				return true;
			}
			if (__LIB_1__::func_285(&(uParam1->f_38), __LIB_3__::func_837(uParam0, 1)))
			{
				return true;
			}
			if (__LIB_1__::func_285(&(uParam1->f_41), __LIB_3__::func_837(uParam0, 2)))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_839(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_272(*uParam0, 9))
	{
		__LIB_8__::func_529(uParam0, uParam1, 3);
		return true;
	}
	if (!__LIB_0__::func_239(uParam1, 131072) && __LIB_3__::func_742(uParam0->f_1))
	{
		__LIB_3__::func_353(&(uParam0->f_24), 0);
		__LIB_0__::func_240(uParam1, 131072);
	}
	if (!__LIB_0__::func_239(uParam1, 262144))
	{
		if (PED::_0x285D36C5C72B0569(*uParam0) < 0.5f || PED::_0x285D36C5C72B0569(uParam0->f_1) < 0.5f)
		{
			__LIB_3__::func_353(&(uParam0->f_28), 0);
			__LIB_0__::func_240(uParam1, 262144);
		}
	}
	if (!__LIB_0__::func_239(uParam1, 1))
	{
		if ((((((((((ENTITY::IS_ENTITY_DEAD(uParam0->f_1) || __LIB_0__::func_239(uParam1, 4194304)) || __LIB_3__::func_835(uParam0, uParam1)) || __LIB_3__::func_788(uParam0, uParam1, 1)) || __LIB_3__::func_789(uParam0, uParam1, 1)) || __LIB_3__::func_862(uParam0, uParam1, 1)) || __LIB_3__::func_853(uParam0, uParam1, 1)) || __LIB_3__::func_854(uParam0, uParam1, 1)) || __LIB_3__::func_855(uParam0, uParam1, 1)) || __LIB_3__::func_790(uParam0, uParam1, 1)) || (__LIB_3__::func_761(uParam0, 4096) && __LIB_3__::func_856(uParam0, uParam1, 1)))
		{
			__LIB_3__::func_791(uParam1);
			if ((!__LIB_3__::func_761(uParam0, 4096) && __LIB_3__::func_856(uParam0, uParam1, 0)) || __LIB_3__::func_788(uParam0, uParam1, 0))
			{
				__LIB_0__::func_240(uParam1, 128);
				PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 999f);
				TASK::_0x651F0530083C0E5A(uParam0->f_1, 0);
				PED::SET_PED_SHOOT_RATE(uParam0->f_1, 200);
			}
			if (__LIB_3__::func_761(uParam0, 64) && ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_2) || !__LIB_0__::func_272(uParam0->f_2, 1)) || (uParam0->f_2 != uParam0->f_1 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_2, *uParam0, 0, 0))))
			{
				__LIB_8__::func_529(uParam0, uParam1, 5);
				return true;
			}
			else if (__LIB_3__::func_835(uParam0, uParam1))
			{
				__LIB_8__::func_529(uParam0, uParam1, 4);
				return true;
			}
			else if (((__LIB_3__::func_853(uParam0, uParam1, 0) || __LIB_3__::func_792(uParam0, uParam1, 0) >= 2) || __LIB_3__::func_855(uParam0, uParam1, 0)) || ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_8__::func_529(uParam0, uParam1, 1);
				return true;
			}
			else if (__LIB_3__::func_862(uParam0, uParam1, 0))
			{
				__LIB_8__::func_529(uParam0, uParam1, 2);
				return true;
			}
			else if (__LIB_3__::func_792(uParam0, uParam1, 0) == 1)
			{
				if (__LIB_3__::func_761(uParam0, 8192))
				{
					__LIB_8__::func_529(uParam0, uParam1, 1);
				}
				else
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				return true;
			}
			else if (__LIB_3__::func_788(uParam0, uParam1, 0) || __LIB_0__::func_239(uParam1, 4194304))
			{
				if (__LIB_3__::func_761(uParam0, 64))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else if (__LIB_3__::func_761(uParam0, 4096))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else
				{
					__LIB_8__::func_529(uParam0, uParam1, 3);
				}
				return true;
			}
			else
			{
				if (__LIB_3__::func_761(uParam0, 4096) && __LIB_3__::func_856(uParam0, uParam1, 0))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else if (__LIB_3__::func_761(uParam0, 67108864) && __LIB_3__::func_790(uParam0, uParam1, 0))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else if (__LIB_3__::func_761(uParam0, 134217728))
				{
					__LIB_8__::func_529(uParam0, uParam1, 4);
				}
				else
				{
					__LIB_8__::func_529(uParam0, uParam1, 3);
					if (__LIB_0__::func_272(Global_35, 0))
					{
						__LIB_8__::func_531(uParam0, uParam1);
					}
				}
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_840(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_239(uParam1, 1024))
	{
		if (__LIB_3__::func_866(*uParam0, &(uParam0->f_3), __LIB_1__::func_977(), uParam0->f_86, 1097859072 /* Float: 15f */, 2, 1, 0, 0, 1, 1071644672 /* Float: 1.75f */))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 136, true);
			}
			__LIB_0__::func_240(uParam1, 1024);
		}
	}
}

bool func_841(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	if (*iParam1 != *uParam2)
	{
		return false;
	}
	if (iParam5 < 0 || iParam5 >= *iParam1)
	{
		iParam5 = 0;
	}
	if (iParam6 < 0 || iParam6 >= *iParam1)
	{
		iParam6 = (*iParam1 - 1);
	}
	if (__LIB_4__::func_225(uParam0, 1))
	{
		iVar0 = iParam5;
		while (iVar0 <= iParam6)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam2)[iVar0]) && (iParam1[iVar0 /*32*/])->f_1 != 0)
			{
				(*uParam2)[iVar0] = __LIB_3__::func_827(uParam0, iVar0);
				if (!ENTITY::IS_ENTITY_DEAD((*uParam2)[iVar0]))
				{
					if ((iParam1[iVar0 /*32*/])->f_12 != 0)
					{
						(iParam1[iVar0 /*32*/])->f_11 = __LIB_3__::func_827(uParam0, iVar0 + 15);
						__LIB_4__::func_204(&((iParam1[iVar0 /*32*/])->f_11), iParam1[iVar0 /*32*/], bParam3, 1);
						ENTITY::_SET_ENTITY_HEALTH((iParam1[iVar0 /*32*/])->f_11, 400, 0);
						PED::_SET_RANDOM_OUTFIT_VARIATION((iParam1[iVar0 /*32*/])->f_11, true);
						PED::_SET_PED_BODY_COMPONENT((iParam1[iVar0 /*32*/])->f_11, joaat("META_HORSE_SADDLE_ONLY"));
						PED::_UPDATE_PED_VARIATION((iParam1[iVar0 /*32*/])->f_11, true, true, true, true, false);
						if ((iParam1[iVar0 /*32*/])->f_13)
						{
							PED::_SET_PED_ON_MOUNT((*uParam2)[iVar0], (iParam1[iVar0 /*32*/])->f_11, -1, true);
						}
						PED::SET_PED_CONFIG_FLAG((*uParam2)[iVar0], 307, true);
					}
					if ((iParam1[iVar0 /*32*/])->f_10)
					{
						PED::_0x0FB1BA7FF73B41E1((*uParam2)[iVar0], (iParam1[iVar0 /*32*/])->f_4, 0);
					}
					if (bParam4)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&((iParam1[iVar0 /*32*/])->f_23)))
						{
							__LIB_2__::func_133((*uParam2)[iVar0], &((iParam1[iVar0 /*32*/])->f_23), 0);
						}
					}
					if (__LIB_3__::func_841(&((iParam1[iVar0 /*32*/])->f_22)))
					{
						GRAPHICS::_0xDFCE8CE9F3EBE93F((*uParam2)[iVar0]);
					}
					__LIB_4__::func_204(uParam2[iVar0], iParam1[iVar0 /*32*/], bParam3, 0);
				}
			}
			iVar0++;
		}
		__LIB_3__::func_828(uParam0);
		return true;
	}
	return false;
}

void func_842(var uParam0, var uParam1)
{
	if (!__LIB_0__::func_239(uParam1, 65536))
	{
		if (__LIB_17__::func_838(uParam0, uParam1))
		{
			if (__LIB_3__::func_761(uParam0, 524288))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_39))
				{
					if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_39, false))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_1))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_39, uParam0->f_39.f_1, true);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_39.f_2))
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_39, uParam0->f_39.f_2, true, false);
						}
					}
					else
					{
						ANIMSCENE::START_ANIM_SCENE(uParam0->f_39);
					}
				}
			}
			else
			{
				TASK::_0x1F7A9A9C38C13A56(uParam0->f_1);
			}
			__LIB_0__::func_240(uParam1, 65536);
		}
	}
}

bool func_843(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (__LIB_2__::func_362(iParam0, iParam1))
		{
			if (!__LIB_0__::func_27(iParam1->f_10, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 130, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 297, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 178, true);
				__LIB_3__::func_876(uParam2, 0, 0, 1, 0);
				__LIB_1__::func_336(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (__LIB_0__::func_27(iParam1->f_10, 1))
		{
			__LIB_2__::func_363(uParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 315, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(iParam0, 178, false);
			__LIB_0__::func_516(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_844(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_3__::func_877(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

void func_845(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var22;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	__LIB_3__::func_877(iParam0, uParam1, 1);
	__LIB_3__::func_876(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*17*/], &Var22, 17);
		iVar0++;
	}
}

int func_846(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		__LIB_3__::func_879(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_847(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		__LIB_3__::func_879(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

bool func_848(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	bVar1 = false;
	bVar2 = false;
	bVar3 = false;
	bVar4 = iParam10 & 128 != false;
	bVar5 = iParam10 & 64 != false;
	bVar6 = iParam10 & 512 != false;
	bVar7 = PED::IS_PED_ON_FOOT(Global_35);
	bVar8 = PED::IS_PED_INJURED(*uParam0);
	bVar9 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar10 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar10 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar2 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_5__::func_688(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar1 = true;
		}
		if (__LIB_3__::func_878(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar2, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar7, bVar8, bParam15, fVar10, bVar9))
		{
			if (!bParam18 && !bVar3)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar5)
					{
						__LIB_3__::func_876(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar4)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_3__::func_877(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar3 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar6)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar3 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar3;
}

bool func_849(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !__LIB_0__::func_27(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (__LIB_0__::func_27(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && __LIB_0__::func_71(uParam0->f_1))
					{
						__LIB_3__::func_622(uParam0->f_1);
						iVar0 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_1__::func_336(&(uParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				__LIB_0__::func_19(uParam0, 1, iParam1);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (__LIB_3__::func_663(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_3__::func_670(uParam0, iParam1))
				{
					__LIB_4__::func_69();
				}
				__LIB_0__::func_19(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (__LIB_3__::func_670(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, __LIB_0__::func_27(uParam0->f_23, 512), 0, 0);
				}
				__LIB_0__::func_19(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (__LIB_3__::func_664(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
				}
				if (__LIB_0__::func_27(uParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (__LIB_0__::func_665(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				__LIB_0__::func_19(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (__LIB_3__::func_665(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (__LIB_0__::func_27(uParam0->f_23, 8192))
				{
					if (__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
						if (__LIB_0__::func_27(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (__LIB_0__::func_27(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (__LIB_0__::func_27(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					__LIB_1__::func_474(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_0__::func_19(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 128) && __LIB_1__::func_313(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(uParam0->f_11) || !__LIB_0__::func_163(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, __LIB_0__::func_27(uParam0->f_23, 8)) && (!__LIB_0__::func_27(uParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_27(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(uParam0->f_5));
				__LIB_0__::func_19(uParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_850()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_3__::func_150(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	__LIB_4__::func_144(0);
	__LIB_1__::func_835(7);
	__LIB_3__::func_916(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		__LIB_3__::func_916(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		__LIB_3__::func_916(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_851(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_4__::func_43((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_852(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		__LIB_3__::func_934(uParam0[iVar0 /*17*/], bParam1, iParam2);
		iVar0++;
	}
}

int func_853(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	vVar2 = { *uParam0 };
	__LIB_3__::func_398(Global_35, *uParam0, &(uParam0->f_37), 1061158912 /* Float: 0.75f */, 0, 0);
	if (__LIB_3__::func_951(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!__LIB_0__::func_86(uParam0->f_12[iVar0 /*3*/]))
			{
				vVar5 = { uParam0->f_12[iVar0 /*3*/] };
				vVar8 = { MISC::_0x83ACC65D9ACEC5EF(Global_36, vVar2, vVar5, true) };
				if (BUILTIN::VDIST2(Global_36, vVar8) <= (35f * 35f) || BUILTIN::VDIST2(Global_36, uParam0->f_12[iVar0 /*3*/]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = __LIB_3__::func_194(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { uParam0->f_12[iVar1 /*3*/] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return __LIB_3__::func_260(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

void func_854(int iParam0, bool bParam1)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		__LIB_3__::func_933(iParam0, 1088421888 /* Float: 7f */, 0, 0);
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
	}
}

void func_855(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	if (__LIB_1__::func_988(iParam0))
	{
		iVar0 = __LIB_3__::func_945(iParam0, -1);
		if (__LIB_3__::func_946(iVar0))
		{
			Global_1310750.f_13321[iVar0 /*9*/].f_6[iParam1] = iParam2;
		}
	}
}

void func_856(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4)
{
	__LIB_2__::func_603(uParam0, iParam2, uParam3, 1, 1);
	__LIB_3__::func_967(*uParam0, uParam1, iParam4);
}

void func_857()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_17__::func_850();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_858(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (uParam0->f_178 && __LIB_3__::func_988())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!__LIB_1__::func_205(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = __LIB_3__::func_249(uParam0, bVar0);
		__LIB_3__::func_336(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (__LIB_3__::func_280(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
}

int func_859(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	var uVar1;
	if (!__LIB_0__::func_6(iVar0))
	{
		iVar0 = __LIB_1__::func_293(__LIB_3__::func_574(iParam0), iParam1, 3, __LIB_3__::func_575(iParam0));
	}
	if (__LIB_17__::func_833(iParam0, fParam2) && __LIB_14__::func_492(iParam0, &uVar1))
	{
		return 1;
	}
	return 0;
}

void func_860(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		__LIB_4__::func_470(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		__LIB_4__::func_470(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		__LIB_4__::func_470(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		__LIB_4__::func_470(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		__LIB_4__::func_470(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		__LIB_4__::func_470(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		__LIB_4__::func_470(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		__LIB_4__::func_470(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		__LIB_4__::func_470(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		__LIB_4__::func_470(-1, iParam0);
	}
}

int func_861(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	return __LIB_4__::func_21(uParam0, Global_36, iParam1, iParam2, bParam3, iParam4, bParam5);
}

void func_862(int iParam0)
{
	__LIB_4__::func_160(iParam0, 1);
}

void func_863(var uParam0)
{
	if (uParam0->f_35)
	{
		return;
	}
	if (!uParam0->f_8)
	{
		return;
	}
	if (uParam0->f_14 && !uParam0->f_13)
	{
		if (__LIB_0__::func_154(Global_1935630.f_44) || uParam0->f_6)
		{
			if (__LIB_0__::func_139(uParam0->f_36))
			{
				__LIB_1__::func_281(&(uParam0->f_36), 1, 1);
				uParam0->f_13 = 1;
			}
		}
	}
	if (!__LIB_0__::func_899(&(uParam0->f_29)))
	{
		if (__LIB_2__::func_342(uParam0->f_28))
		{
			__LIB_4__::func_89(&(uParam0->f_29), 0);
		}
	}
	else if (uParam0->f_6 && !uParam0->f_1)
	{
		if (__LIB_3__::func_514(&(uParam0->f_29), 3f) && __LIB_2__::func_342(uParam0->f_28))
		{
			__LIB_0__::func_105(1);
			uParam0->f_35 = 1;
			if (!__LIB_3__::func_514(&(uParam0->f_29), 6f) && !uParam0->f_4)
			{
				__LIB_2__::func_355(609);
			}
		}
	}
}

bool func_864(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_4__::func_143(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_865(var uParam0, int* iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		__LIB_2__::func_344(uParam0);
		__LIB_10__::func_928(iParam1, uParam2);
	}
	__LIB_2__::func_56(*uParam0, 1, bParam4);
}

void func_866(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0++;
				}
			}
			__LIB_4__::func_456(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

void func_867(var uParam0, int iParam1)
{
	struct<23> Var0;
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	__LIB_3__::func_440(&Var0, uParam0, 1, iParam1, 2, 1, 2, 1, 0, 0, 0, 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(Global_35, &Var0);
}

void func_868(int iParam0, bool bParam1, bool bParam2)
{
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_6__::func_115(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = __LIB_3__::func_961(iParam0);
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_2() != -1)
		{
		}
		else
		{
			__LIB_3__::func_971(iParam0);
		}
	}
	__LIB_4__::func_109(iParam0, 1);
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_4__::func_121(iParam0, __LIB_4__::func_110());
	}
	__LIB_7__::func_832(iParam0, 1);
	if (bParam2)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

bool func_869(float fParam0)
{
	if (__LIB_0__::func_481(1))
	{
		return true;
	}
	if (__LIB_0__::func_899(&uLocal_0) && !__LIB_9__::func_913(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_870(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		__LIB_3__::func_955(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					__LIB_3__::func_955(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_4__::func_199(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				__LIB_3__::func_955(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_871(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_4__::func_65(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_872()
{
	__LIB_4__::func_229(32);
	__LIB_4__::func_229(64);
	__LIB_4__::func_229(256);
	__LIB_4__::func_229(512);
	__LIB_4__::func_229(4);
	__LIB_4__::func_229(1);
	__LIB_4__::func_229(2);
	__LIB_4__::func_229(1048576);
	__LIB_4__::func_229(2048);
	__LIB_4__::func_229(2097152);
	__LIB_4__::func_229(536870912);
	__LIB_4__::func_229(1073741824 /* Float: 2f */);
	__LIB_9__::func_805(8);
}

void func_873()
{
	__LIB_4__::func_226(32);
	__LIB_4__::func_226(64);
	__LIB_4__::func_226(256);
	__LIB_4__::func_226(512);
	__LIB_4__::func_226(4);
	__LIB_4__::func_226(1);
	__LIB_4__::func_226(2);
	__LIB_4__::func_226(1048576);
	__LIB_4__::func_226(2048);
	__LIB_4__::func_226(2097152);
	__LIB_4__::func_229(4194304);
	__LIB_4__::func_226(536870912);
	__LIB_4__::func_226(1073741824 /* Float: 2f */);
	__LIB_9__::func_817(8);
}

void func_874(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		__LIB_3__::func_142(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	__LIB_3__::func_264(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!__LIB_4__::func_502(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		__LIB_1__::func_222(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		__LIB_1__::func_345();
	}
	if (!__LIB_1__::func_982(uParam0->f_3) && !__LIB_1__::func_85(uParam0->f_3, 256))
	{
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	__LIB_0__::func_172(uParam0->f_173);
	__LIB_0__::func_172(uParam0->f_172);
}

int func_875()
{
	int iVar0;
	if (!__LIB_1__::func_516())
	{
		return 0;
	}
	if (!__LIB_1__::func_610(&iVar0))
	{
		return 0;
	}
	if (!__LIB_4__::func_210(iVar0))
	{
		return 0;
	}
	return __LIB_3__::func_630(iVar0, 0);
}

void func_876(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = __LIB_5__::func_681(-1);
		if (iParam0 == -1)
		{
			return;
		}
	}
	if (__LIB_4__::func_259(iParam0, 1073741824 /* Float: 2f */))
	{
		return;
	}
	__LIB_6__::func_662(iParam0, 0);
	AUDIO::_0x3D0BBCCF401B5FDB();
	__LIB_10__::func_820(iParam0, 0);
}

bool func_877()
{
	STREAMING::REQUEST_ANIM_DICT(__LIB_3__::func_494());
	if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_3__::func_494()))
	{
		return false;
	}
	return true;
}

bool func_878(var uParam0, int iParam1)
{
	return __LIB_4__::func_309(uParam0, uParam0->f_15[iParam1]);
}

bool func_879(var uParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, int iParam7)
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && uParam0->f_1 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12))
			{
				Var2 = { __LIB_3__::func_357(vParam2, bParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = __LIB_4__::func_310(bParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = __LIB_3__::func_403(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (__LIB_3__::func_395(uParam0->f_1, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
					{
						__LIB_1__::func_991(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (STREAMING::HAS_MODEL_LOADED(uParam0->f_1))
			{
				bVar0 = (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { __LIB_3__::func_357(vParam2, bParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = __LIB_4__::func_310(bParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || __LIB_3__::func_325(&(uParam0->f_22)));
					Var2 = { __LIB_3__::func_357(vParam2, bParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = __LIB_4__::func_310(bParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = __LIB_3__::func_403(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, PED::_IS_THIS_MODEL_A_HORSE(uParam0->f_1), uParam0->f_14, 0, 1);
				PED::SET_PED_CONFIG_FLAG(*uParam1, 307, true);
				if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
				{
					if (bVar0)
					{
						__LIB_1__::func_571(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
					{
						__LIB_2__::func_133(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				STREAMING::REQUEST_MODEL(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

int func_880(var uParam0, int iParam1, bool bParam2)
{
	MISC::SET_BIT(&(uParam0->f_8), 4);
	uParam0->f_15[4] = iParam1;
	if (__LIB_3__::func_952(uParam0, iParam1))
	{
		return __LIB_4__::func_306(uParam0, iParam1);
	}
	else
	{
		__LIB_3__::func_637(uParam0, 4, 0);
		return 0;
	}
	if (bParam2)
	{
		__LIB_3__::func_947(uParam0, 4, 1);
	}
	return 1;
}

void func_881(var uParam0, bool bParam1)
{
	int iVar0;
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (__LIB_3__::func_902(uParam0, iVar0, 1))
			{
				if (!__LIB_4__::func_326(uParam0, iVar0))
				{
					__LIB_3__::func_935(uParam0, uParam0->f_15[iVar0]);
					if (!__LIB_13__::func_806(uParam0, iVar0))
					{
					}
				}
			}
			iVar0++;
		}
	}
	if (__LIB_3__::func_902(uParam0, 1, 1))
	{
		if (__LIB_3__::func_642(uParam0->f_1, uParam0->f_9))
		{
			if (!bParam1 || __LIB_4__::func_326(uParam0, 1))
			{
				__LIB_3__::func_903(uParam0, 1);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_13, uParam0->f_7))
		{
			if (!bParam1 || __LIB_4__::func_326(uParam0, 0))
			{
				__LIB_3__::func_903(uParam0, 0);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 2, 1))
	{
		if (__LIB_3__::func_636(uParam0->f_1, uParam0->f_10, 1f))
		{
			if (!bParam1 || __LIB_4__::func_326(uParam0, 2))
			{
				__LIB_3__::func_903(uParam0, 2);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 3, 1))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_14, uParam0->f_11, uParam0->f_12, 1))
		{
			if (!bParam1 || __LIB_4__::func_326(uParam0, 3))
			{
				__LIB_3__::func_903(uParam0, 3);
			}
		}
	}
	if (__LIB_3__::func_902(uParam0, 4, 1))
	{
		if (__LIB_4__::func_326(uParam0, 4))
		{
			__LIB_3__::func_903(uParam0, 4);
		}
	}
	if (uParam0->f_3)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_1, false))
		{
			__LIB_3__::func_437(uParam0);
		}
	}
}

void func_882(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_4__::func_179((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_4__::func_381(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_883(int iParam0)
{
	int iVar0;
	iVar0 = __LIB_3__::func_217(iParam0);
	if (iVar0 != 0)
	{
		__LIB_4__::func_338(-1, 24, 0, iVar0);
	}
}

void func_884(var uParam0)
{
	__LIB_3__::func_553(uParam0, 1);
	__LIB_3__::func_387(uParam0, 1);
	__LIB_2__::func_715(uParam0, 1);
}

void func_885(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (__LIB_4__::func_349(iParam2, 1, 1, 1, 0))
	{
		__LIB_1__::func_336(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	__LIB_2__::func_89(iParam1, 1);
	__LIB_1__::func_345();
}

int func_886()
{
	int iVar0;
	iVar0 = __LIB_4__::func_355();
	if (!__LIB_0__::func_31(iVar0))
	{
		return 0;
	}
	return Global_1360165[iVar0 /*1157*/];
}

bool func_887(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_4__::func_486(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_888(var uParam0, var uParam1, float fParam2, int iParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;
	__LIB_3__::func_398(Global_35, uParam0->f_51, uParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (__LIB_3__::func_193(uParam1, iParam5))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (__LIB_4__::func_489(uParam0, fParam2, 1114636288 /* Float: 60f */, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264 /* Float: 150f */, bParam14, 1))
	{
		return true;
	}
	return false;
}

void func_889(int iParam0, float fParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(fParam1->f_3), 1))
	{
		__LIB_11__::func_82(fParam1);
		if (__LIB_4__::func_396(iParam0, iParam7, iParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, iParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_3__::func_518(fParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam6, iParam9);
	}
}

bool func_890(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_954(uParam0, (*uParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_891(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam2->f_5)
	{
		__LIB_2__::func_521(iParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_216(iParam0, iParam2))
			{
				*iParam3 = 128;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (__LIB_2__::func_479(iParam0, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_217(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (__LIB_2__::func_400(iParam0, iParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam2, 1065353216 /* Float: 1f */))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_219(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (__LIB_2__::func_220(iParam0, iParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || iParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
					{
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && __LIB_2__::func_83(iParam2, iParam0)) && __LIB_2__::func_197(iParam2, iParam0))
				{
					*iParam3 = 2;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam3 = 2;
								__LIB_2__::func_196(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_120(iParam2, iParam0) || (iParam2->f_9 > 0 && (__LIB_0__::func_485() - iParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*iParam3 = 2;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam3 = 2;
							__LIB_2__::func_196(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (__LIB_3__::func_396(iParam2, iParam0))
			{
				*iParam3 = 1024;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (__LIB_4__::func_23(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (__LIB_3__::func_399(iParam0, iParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, iParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (__LIB_2__::func_82(iParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, iParam2))
					{
						*iParam3 = 512;
						__LIB_2__::func_196(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (__LIB_4__::func_24(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					__LIB_2__::func_196(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(iParam2, iParam0))
			{
				*iParam3 = 1;
				__LIB_2__::func_196(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_892(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, float fParam5, int iParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar6;
	if (!__LIB_4__::func_429(uParam2))
	{
		return false;
	}
	if (iParam6 < 0 || iParam6 >= *uParam2)
	{
		iParam6 = 0;
	}
	if (iParam7 < 0 || iParam7 >= *uParam2)
	{
		iParam7 = (*uParam2 - 1);
	}
	iVar0 = iParam6;
	while (iVar0 <= iParam7)
	{
		if ((uParam2[iVar0 /*32*/])->f_1 != 0)
		{
			if (bParam3 && !__LIB_3__::func_325(&((uParam2[iVar0 /*32*/])->f_22)))
			{
				vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, (uParam2[iVar0 /*32*/])->f_6) };
				fVar1 = __LIB_2__::func_709((uParam0->f_51.f_3 + (uParam2[iVar0 /*32*/])->f_9));
			}
			else
			{
				vVar3 = { (uParam2[iVar0 /*32*/])->f_6 };
				fVar1 = __LIB_2__::func_709((uParam2[iVar0 /*32*/])->f_9);
			}
			if (!__LIB_3__::func_195(&((uParam2[iVar0 /*32*/])->f_22)))
			{
				__LIB_2__::func_106(&vVar3, 1, 10, 0);
			}
			if ((uParam2[iVar0 /*32*/])->f_12 != 0)
			{
				if (!(uParam2[iVar0 /*32*/])->f_19 && !__LIB_3__::func_325(&((uParam2[iVar0 /*32*/])->f_22)))
				{
					vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(uParam0->f_51, uParam0->f_51.f_3, (uParam2[iVar0 /*32*/])->f_15) };
					fVar2 = __LIB_2__::func_709((uParam0->f_51.f_3 + (uParam2[iVar0 /*32*/])->f_18));
					__LIB_2__::func_106(&vVar6, 1, 10, 0);
				}
				else
				{
					vVar6 = { (uParam2[iVar0 /*32*/])->f_15 };
					fVar2 = __LIB_2__::func_709((uParam2[iVar0 /*32*/])->f_18);
				}
				__LIB_3__::func_826(uParam1, iVar0 + 15, (uParam2[iVar0 /*32*/])->f_12, vVar6, fVar2, iParam4, fParam5, 0, 1, 0);
			}
			__LIB_3__::func_826(uParam1, iVar0, (uParam2[iVar0 /*32*/])->f_1, vVar3, fVar1, iParam4, fParam5, (uParam2[iVar0 /*32*/])->f_2, 1, (uParam2[iVar0 /*32*/])->f_5);
		}
		iVar0++;
	}
	return true;
}

bool func_893(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (__LIB_3__::func_464((*iParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_894(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		__LIB_2__::func_344(uParam0);
		__LIB_6__::func_699(iParam1, uParam2);
	}
	__LIB_2__::func_56(*uParam0, 1, bParam4);
}

void func_895(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (__LIB_4__::func_459(Global_35, iParam0, &uVar0))
		{
			__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

void func_896(int iParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(uParam1->f_3), 1))
	{
		__LIB_3__::func_565(uParam1);
		if (__LIB_4__::func_396(iParam0, iParam7, iParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_2__::func_524(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), uParam1, iParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_2__::func_496(uParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam6, iParam9);
	}
}

bool func_897(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar0 = 30f;
	fVar1 = 150f;
	if (__LIB_1__::func_85(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (__LIB_1__::func_923())
			{
				fVar0 = 15f;
			}
		}
		if (__LIB_3__::func_182(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && __LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (!__LIB_3__::func_182(uParam2, fVar1))
		{
			if (!__LIB_2__::func_117(Global_1310750[uParam2->f_3 /*111*/].f_38))
			{
				return false;
			}
		}
		if (!__LIB_3__::func_281(uParam2->f_3, 2) && __LIB_3__::func_290(2))
		{
			return false;
		}
		if (__LIB_1__::func_85(iParam0, 4194304) || __LIB_1__::func_85(iParam0, 33554432))
		{
			if (__LIB_4__::func_491(1))
			{
				return false;
			}
		}
	}
	if (__LIB_1__::func_376(Global_35))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 1, 1) && !__LIB_1__::func_271(iParam0))
	{
		return false;
	}
	if (!*uParam1 && __LIB_1__::func_85(iParam0, 128))
	{
		if (PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID()))
		{
			return false;
		}
		if (__LIB_3__::func_291(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 1, 0, 1))
		{
			return false;
		}
		if (__LIB_3__::func_183())
		{
			return false;
		}
		iVar2 = __LIB_3__::func_250(__LIB_0__::func_12());
		if (__LIB_0__::func_625(iVar2))
		{
			if (__LIB_3__::func_184(Global_36, iVar2))
			{
				return false;
			}
		}
		if (__LIB_3__::func_251(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (__LIB_3__::func_263(&(uParam2->f_91), 0, 1084227584 /* Float: 5f */, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_898(var uParam0, int iParam1)
{
	return __LIB_4__::func_481(uParam0, uParam0->f_15[iParam1]);
}

void func_899(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	MISC::SET_BIT(&(uParam0->f_8), 1);
	uParam0->f_15[1] = iParam1;
	uParam0->f_9 = __LIB_0__::func_55(iParam2 < 0, 0, iParam2);
	if (bParam4)
	{
		if (!__LIB_3__::func_944(uParam0, iParam1))
		{
			if (!__LIB_4__::func_481(uParam0, iParam1))
			{
				__LIB_3__::func_935(uParam0, iParam1);
			}
		}
	}
	if (bParam3)
	{
		__LIB_3__::func_947(uParam0, 1, 1);
	}
}

void func_900(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	MISC::SET_BIT(&(uParam0->f_8), 0);
	uParam0->f_15[0] = iParam1;
	uParam0->f_13 = uParam2;
	uParam0->f_7 = uParam3;
	if (bParam5)
	{
		if (!__LIB_3__::func_944(uParam0, iParam1))
		{
			if (!__LIB_4__::func_481(uParam0, iParam1))
			{
				__LIB_3__::func_935(uParam0, iParam1);
			}
		}
	}
	if (bParam4)
	{
		__LIB_3__::func_947(uParam0, 0, 1);
	}
}

void func_901(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	MISC::SET_BIT(&(uParam0->f_8), 2);
	uParam0->f_15[2] = iParam1;
	uParam0->f_10 = uParam2;
	if (bParam4)
	{
		if (!__LIB_3__::func_944(uParam0, iParam1))
		{
			if (!__LIB_4__::func_481(uParam0, iParam1))
			{
				__LIB_3__::func_935(uParam0, iParam1);
			}
		}
	}
	if (bParam3)
	{
		__LIB_3__::func_947(uParam0, 2, 1);
	}
}

void func_902(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	MISC::SET_BIT(&(uParam0->f_8), 3);
	uParam0->f_15[3] = iParam1;
	uParam0->f_11 = uParam3;
	uParam0->f_12 = uParam4;
	uParam0->f_14 = uParam2;
	if (bParam6)
	{
		if (!__LIB_3__::func_944(uParam0, iParam1))
		{
			if (!__LIB_4__::func_481(uParam0, iParam1))
			{
				__LIB_3__::func_935(uParam0, iParam1);
			}
		}
	}
	if (bParam5)
	{
		__LIB_3__::func_947(uParam0, 3, 1);
	}
}

bool func_903(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_17__::func_897(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_904(vector3 vParam0, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10)
{
	bool bVar0;
	int iVar1;
	float fVar2;
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam3))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam3);
			if (!PED::_0x5102307CE88798EB(iVar1))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
			}
			if (CAM::IS_GAMEPLAY_CAM_RENDERING())
			{
				fVar2 = __LIB_3__::func_441(iParam10);
				if (fVar2 < 0f)
				{
					if (PED::IS_TRACKED_PED_VISIBLE(iVar1))
					{
						bVar0 = true;
					}
				}
				else if (PED::_0x164CECC59E70DF86(iVar1, fVar2))
				{
					bVar0 = true;
				}
			}
		}
		else
		{
			bVar0 = __LIB_9__::func_690(iParam4, PLAYER::PLAYER_PED_ID(), iParam3);
		}
	}
	else
	{
		bVar0 = __LIB_9__::func_691(iParam4, PLAYER::PLAYER_PED_ID(), vParam0);
	}
	if (bVar0)
	{
		*fParam6 = 1;
		if (*iParam5 != 0f)
		{
		}
		if (*iParam5 <= 0f)
		{
			*iParam5 = __LIB_0__::func_36();
		}
		else if ((__LIB_0__::func_36() - *iParam5) > fParam7)
		{
			*iParam5 = 0f;
			return true;
		}
	}
	else if (*iParam4 == 2 && iParam4->f_4)
	{
		if (!bParam9)
		{
			*iParam5 = 0f;
		}
	}
	else
	{
		*fParam6 = 1;
	}
	return false;
}

void func_905(int iParam0, float fParam1, vector3 vParam2, bool bParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, bool bParam12, bool bParam13, float fParam14)
{
	if (__LIB_0__::func_51(&(fParam1->f_3), 1))
	{
		__LIB_4__::func_498(fParam1);
		if (__LIB_3__::func_517(iParam0, fParam7, fParam11, bParam12, bParam13, fParam14))
		{
			__LIB_1__::func_539();
		}
	}
	if (__LIB_4__::func_97(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam1, fParam7))
	{
		CAM::SET_GAMEPLAY_PED_HINT(iParam0, Vector(0f, 0f, 0f) + vParam2, bParam5, iParam8, iParam9, iParam10);
		__LIB_3__::func_518(fParam1, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6, iParam9);
	}
}

bool func_906(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_4__::func_122(iParam1, uParam2, 0);
		iVar5 = __LIB_3__::func_349(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_907(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			__LIB_1__::func_775(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		__LIB_11__::func_838(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			__LIB_1__::func_708(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_908(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		__LIB_12__::func_97(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		__LIB_12__::func_97(iParam1, 1);
		__LIB_1__::func_856(iParam0);
	}
}

int func_909(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iParam1 == -1)
	{
		iParam1 = uParam0->f_23;
	}
	else
	{
		iParam1 = __LIB_0__::func_259(uParam0->f_23, iParam1);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		iVar0 = (iVar0 + __LIB_4__::func_889(*(uParam0[iVar2 /*2*/])));
		if ((*uParam0)[iVar2 /*2*/] == 14)
		{
			iVar1++;
		}
		iVar2++;
	}
	while (iVar0 > 21 && iVar1 > 0)
	{
		iVar0 = (iVar0 - 10);
		iVar1 = (iVar1 - 1);
	}
	return iVar0;
}

void func_910()
{
	int iVar0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!__LIB_14__::func_280(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_911(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!__LIB_0__::func_5(iParam0))
	{
		return 1;
	}
	if (!__LIB_0__::func_627(iParam0, 0))
	{
		if (iParam1 == 0)
		{
			return 1;
		}
		__LIB_4__::func_471(iParam0, 0);
	}
	if (bParam2)
	{
		if (!__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 1024))
		{
			__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 1024);
		}
	}
	if (bParam4 && !__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 8192))
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 8192);
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1347702[iParam0 /*49*/].f_42, false))
	{
		if (__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 64))
		{
			return 1;
		}
		return 0;
	}
	if (!__LIB_5__::func_353(iParam0))
	{
		__LIB_1__::func_319(Global_1347702[iParam0 /*49*/].f_15);
	}
	else if (bParam3 && !__LIB_5__::func_545(Global_1347702[iParam0 /*49*/].f_15))
	{
		__LIB_5__::func_506(Global_1347702[iParam0 /*49*/].f_15);
	}
	if (!__LIB_0__::func_1(Global_1347702[iParam0 /*49*/].f_13, 256))
	{
		__LIB_0__::func_7(&(Global_1347702[iParam0 /*49*/].f_13), 256);
	}
	return 0;
}

void func_912(var uParam0, int iParam1)
{
	if (__LIB_5__::func_623())
	{
		Global_1357504 = uParam0->f_89;
		HUD::_DISPLAY_HUD_COMPONENT(-1404924319);
	}
	Global_1357503 = 0;
	__LIB_5__::func_624(0);
	GRAPHICS::_0xF5793BB386E1FF9C(0);
	ANIMSCENE::_0xCDCD7B2D49AEE73A(0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_32))
	{
		CAM::DESTROY_CAM(uParam0->f_32, false);
	}
	SCRIPTS::SET_NO_LOADING_SCREEN(false);
	HUD::_DISPLAY_HUD_COMPONENT(959420967);
	Global_1357507 = 0;
	Global_1357508 = 0;
	AUDIO::_0x531A78D6BF27014B("CAMERA_SOUNDSET");
	if (!__LIB_5__::func_623())
	{
		PED::CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Global_35);
	}
	STREAMING::REMOVE_CLIP_SET(__LIB_5__::func_630());
	STREAMING::REMOVE_ANIM_DICT(__LIB_5__::func_631());
	GRAPHICS::_0xF1142E5D64B47802(false, false);
	GRAPHICS::_0x614682E715ADBAAC();
	GRAPHICS::_0xD45547D8396F002A();
	__LIB_5__::func_652(uParam0);
	__LIB_0__::func_105(1);
	MAP::DISPLAY_RADAR(true);
	HUD::_TEXT_DATABASE_DELETE("CAMERA");
	if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == joaat("CAMERA_PHOTOMODE"))
	{
		__LIB_5__::func_632();
		Global_1935496.f_127 = 1;
	}
}

bool func_913(var uParam0)
{
	if (Global_1357509 == 1)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		Global_1357509 = 0;
		return false;
	}
	if (!__LIB_5__::func_623())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.33f)
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				return false;
			}
			if (PED::_0x7FC84E85D98F063D(Global_35))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				return false;
			}
		}
	}
	if (!__LIB_5__::func_623())
	{
		if (__LIB_2__::func_800())
		{
			if (__LIB_5__::func_633(19) || __LIB_5__::func_650(Global_1914319.f_16855.f_1))
			{
			}
			else
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
				return false;
			}
		}
	}
	if (!__LIB_5__::func_623())
	{
		if (FIRE::IS_ENTITY_ON_FIRE(Global_35))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Global_35) || PED::IS_PED_INJURED(Global_35)) || ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!__LIB_5__::func_623())
	{
		if (!__LIB_3__::func_463(joaat("WEAPON_KIT_CAMERA"), 1, 0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
		if (__LIB_5__::func_619(uParam0) == 8)
		{
		}
		if ((__LIB_5__::func_619(uParam0) != 8 && __LIB_5__::func_619(uParam0) != 9) && __LIB_5__::func_619(uParam0) != 10)
		{
			if (__LIB_0__::func_399(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_CAMERA"))
			{
				if (__LIB_5__::func_634(uParam0) == 0)
				{
					return false;
				}
			}
		}
	}
	if (__LIB_3__::func_64())
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		return false;
	}
	if (!__LIB_5__::func_623())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(Global_35, true)))
		{
			__LIB_0__::func_45("CAM_VEH", 10000, 0, 0, 0, 1);
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			return false;
		}
	}
	return true;
}

void func_914(var uParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::SET_INPUT_EXCLUSIVE(0, joaat("INPUT_FRONTEND_LT"));
	if ((((__LIB_5__::func_619(uParam0) == 8 || __LIB_5__::func_619(uParam0) == 9) || __LIB_5__::func_619(uParam0) == 10) || __LIB_5__::func_619(uParam0) == 5) || __LIB_5__::func_619(uParam0) == 6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	}
	if (!uParam0->f_107 == 3)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		__LIB_1__::func_538(0);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_GAME_MENU_EXTRA_OPTION"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	if (CAM::DOES_CAM_EXIST(uParam0->f_31) && CAM::IS_CAM_ACTIVE(uParam0->f_31))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
	if (Global_1357503 == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SECONDARY_SPECIAL_ABILITY_SECONDARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), false);
}

void func_915(var uParam0, int iParam1)
{
	uParam0->f_107 = iParam1;
	__LIB_5__::func_635(uParam0);
}

void func_916()
{
	if (__LIB_5__::func_623())
	{
		HUD::_TEXT_DATABASE_REQUEST("CAMERA");
	}
	else
	{
		HUD::_TEXT_DATABASE_REQUEST("CAMERA");
		STREAMING::REQUEST_ANIM_DICT(__LIB_5__::func_631());
		STREAMING::REQUEST_CLIP_SET(__LIB_5__::func_630());
		GRAPHICS::_0x5199405EABFBD7F0("CameraViewfinder");
		GRAPHICS::_0x5199405EABFBD7F0("CameraTransitionBlink");
	}
}

bool func_917(int iParam0, int iParam1)
{
	int iVar0;
	iVar0 = 1;
	if (__LIB_5__::func_623())
	{
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("CAMERA"))
		{
			if ((MISC::_GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(&Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
		if (AUDIO::_0xD9130842D7226045("Photo_Mode_Sounds", 0) == 0)
		{
			if ((MISC::_GET_SYSTEM_TIME() - iParam1) > 5000)
			{
				MISC::SET_BIT(&Global_1357505, 8);
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraViewfinder"))
		{
			iVar0 = 0;
		}
		if (GRAPHICS::_0xBF2DD155B2ADCD0A("CameraTransitionBlink"))
		{
			iVar0 = 0;
		}
		if (!HUD::_TEXT_DATABASE_HAS_LOADED("CAMERA"))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_CLIP_SET_LOADED(__LIB_5__::func_630()))
		{
			iVar0 = 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_5__::func_631()))
		{
			iVar0 = 0;
		}
		if (!AUDIO::_0xD9130842D7226045("CAMERA_SOUNDSET", 0))
		{
			if ((MISC::GET_GAME_TIMER() - iParam0) > 7000)
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

int func_918(var uParam0)
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_CONTEXT_RT")) && !__LIB_5__::func_625(uParam0, 32))
	{
		AUDIO::_PLAY_SOUND_FROM_ENTITY("CLICK", Global_35, "CAMERA_SOUNDSET", false, 0, 0);
		__LIB_5__::func_626(1);
		__LIB_5__::func_627(uParam0, 32);
	}
	return 1;
}

bool func_919(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_INTERACT_LOCKON")))
		{
			if (__LIB_2__::func_349(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				__LIB_1__::func_471(iParam1, 0);
				__LIB_14__::func_648(iParam1, uParam2, __LIB_1__::func_489(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_920(vector3 vParam0, int iParam3)
{
	int iVar0;
	if (iParam3 == -1)
	{
		iParam3 = __LIB_0__::func_979(vParam0);
	}
	iVar0 = __LIB_3__::func_554(iParam3, 0, 0, 0);
	if (__LIB_11__::func_162(iVar0, vParam0, 0))
	{
		return true;
	}
	return false;
}

void func_921(int* iParam0, var uParam1)
{
	int iVar0;
	struct<17> Var1;
	struct<10> Var19;
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var19.f_2 = 570;
	Var19.f_3 = 1065353216;
	Var19.f_4 = -1082130432;
	Var19.f_9 = 2;
	__LIB_14__::func_648(iParam0, uParam1, 1);
	__LIB_5__::func_684(uParam1, 0, 1, 1, 0);
	MISC::_COPY_MEMORY(iParam0, &Var1, 18);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		MISC::_COPY_MEMORY(uParam1[iVar0 /*11*/], &Var19, 11);
		iVar0++;
	}
}

int func_922(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_271(iParam0);
	if (MAP::DOES_BLIP_EXIST(__LIB_4__::func_244(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		iVar1 = __LIB_4__::func_244(iParam0);
		__LIB_5__::func_747(iParam0, &iVar1);
		return iVar1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(MAP::GET_BLIP_FROM_ENTITY(iVar0)))
		{
		}
		iVar1 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_COMPANION"), iVar0);
		Global_1360165[iParam0 /*1157*/].f_2 = iVar1;
		__LIB_5__::func_747(iParam0, &iVar1);
	}
	return iVar1;
}

int func_923(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 6)
	{
		return __LIB_5__::func_701(Global_1393237.f_11[iParam0 /*30*/].f_12);
	}
	return 0;
}

bool func_924(vector3 vParam0, int iParam3, bool bParam4)
{
	if (__LIB_5__::func_676(vParam0) || __LIB_5__::func_733(iParam3, 524288))
	{
		return true;
	}
	if (__LIB_5__::func_658(iParam3))
	{
		return true;
	}
	if (bParam4)
	{
		if (Global_1393237.f_8 + 1 > Global_1393237.f_6)
		{
			return false;
		}
	}
	else if (Global_1393237.f_7 + 1 > Global_1393237.f_6)
	{
		return false;
	}
	if (__LIB_0__::func_296(50, 0, 1))
	{
		return false;
	}
	if (bParam4)
	{
		if (__LIB_5__::func_655())
		{
			return false;
		}
	}
	return true;
}

bool func_925(int iParam0, bool bParam1)
{
	if (__LIB_1__::func_394(PLAYER::PLAYER_ID(), 0, 1, 1))
	{
		return true;
	}
	if (__LIB_1__::func_923())
	{
		return true;
	}
	if (__LIB_5__::func_733(iParam0, 4096) || __LIB_5__::func_733(iParam0, 131072))
	{
		return true;
	}
	return false;
}

float func_926(vector3 vParam0, int iParam3)
{
	float fVar0;
	if (iParam3 == -1)
	{
		iParam3 = __LIB_0__::func_979(vParam0);
	}
	switch (iParam3)
	{
		case 9:
			if (!__LIB_5__::func_727(vParam0))
			{
				fVar0 = 140f;
			}
			else
			{
				fVar0 = 180f;
			}
			break;
		default:
			fVar0 = 140f;
			break;
	}
	return fVar0;
}

float func_927(vector3 vParam0, int iParam3)
{
	float fVar0;
	if (iParam3 == -1)
	{
		iParam3 = __LIB_0__::func_979(vParam0);
	}
	switch (iParam3)
	{
		case 9:
			if (!__LIB_5__::func_727(vParam0))
			{
				fVar0 = 75f;
			}
			else
			{
				fVar0 = 80f;
			}
			break;
		case 10:
			fVar0 = 50f;
			break;
		default:
			fVar0 = 75f;
			break;
	}
	return fVar0;
}

float func_928(vector3 vParam0, int iParam3)
{
	float fVar0;
	if (iParam3 == -1)
	{
		iParam3 = __LIB_0__::func_979(vParam0);
	}
	switch (iParam3)
	{
		case 9:
			if (!__LIB_5__::func_727(vParam0))
			{
				fVar0 = 35f;
			}
			else
			{
				fVar0 = 50f;
			}
			break;
		case 10:
			fVar0 = 25f;
			break;
		default:
			fVar0 = 35f;
			break;
	}
	return fVar0;
}

void func_929()
{
	if (!__LIB_0__::func_86(Global_1393237.f_200))
	{
		if (!__LIB_5__::func_731(Global_1393237.f_200))
		{
			__LIB_1__::func_222(Global_1393237.f_200, 0);
		}
	}
	Global_1393237.f_200 = { 0f, 0f, 0f };
}

void func_930(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, bool bParam5)
{
	if (iParam1 > -1 && iParam1 < 12)
	{
		if (bParam5)
		{
			__LIB_3__::func_502(iParam0, __LIB_4__::func_307(), __LIB_4__::func_313(iParam1), 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, iParam4, 0);
		}
		else
		{
			__LIB_3__::func_502(iParam0, __LIB_4__::func_308(), __LIB_4__::func_313(iParam1), 1148846080 /* Float: 1000f */, -1065353216 /* Float: -4f */, iParam4, 0);
		}
		if (bParam2)
		{
			__LIB_4__::func_178(iParam0, fParam3);
		}
	}
	else
	{
		__LIB_4__::func_437(iParam0, bParam2, fParam3, iParam4, bParam5);
	}
}

bool func_931(bool bParam0, vector3 vParam1, int iParam4, int iParam5)
{
	bool bVar0;
	if (bParam0)
	{
		if (iParam4 == -1)
		{
			iParam4 = __LIB_0__::func_979(vParam1);
		}
		bVar0 = iParam4 == 10;
		if (!bVar0)
		{
			if (Global_1393237.f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237.f_1) < __LIB_10__::func_690(iParam5))
			{
				return false;
			}
		}
		else if (Global_1393237.f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237.f_1) < 961920)
		{
			return false;
		}
		if (Global_1393237.f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2) < __LIB_5__::func_665()
			{
				return false;
			}
		}
	}
	else
	{
		if (Global_1393237 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237) < __LIB_10__::func_691())
		{
			return false;
		}
		if (Global_1393237.f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2) < __LIB_5__::func_665()
			{
				return false;
			}
		}
	}
	if (MISC::GET_GAME_TIMER() < Global_1393237.f_4)
	{
		return false;
	}
	return true;
}

void func_932(int iParam0, bool bParam1)
{
	int iVar0;
	if (!__LIB_0__::func_31(iParam0))
	{
		return;
	}
	if (!__LIB_0__::func_699(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_167(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam1);
	__LIB_1__::func_551(iParam0, 0);
	__LIB_17__::func_922(iParam0, 1, 0, 0, 0);
}

int func_933(vector3 vParam0, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	if (bParam4)
	{
		iVar2 = 3;
		iVar3 = 5;
	}
	else
	{
		iVar2 = 0;
		iVar3 = 2;
	}
	iVar1 = iVar2;
	while (iVar1 <= iVar3)
	{
		if (BUILTIN::VDIST(Global_1393237.f_11[iVar1 /*30*/].f_3, vParam0) < 10f)
		{
			*bParam3 = 0;
			return iVar1;
		}
		if ((iVar0 == -1 && !__LIB_5__::func_759(iVar1)) && (__LIB_5__::func_770(iVar1) || (!bParam4 && __LIB_0__::func_636(Global_1393237.f_11[iVar1 /*30*/].f_3, Global_36) > 2000f)))
		{
			*bParam3 = 1;
			iVar0 = iVar1;
		}
		iVar1++;
	}
	if (!__LIB_5__::func_754(iVar0, 32768))
	{
		__LIB_5__::func_766(iVar0);
	}
	return iVar0;
}

void func_934()
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (__LIB_5__::func_770(iVar0))
		{
			if (!__LIB_0__::func_86(Global_1393237.f_11[iVar0 /*30*/].f_3) && !__LIB_5__::func_754(iVar0, 1))
			{
				__LIB_1__::func_222(Global_1393237.f_11[iVar0 /*30*/].f_3, 0);
			}
		}
		else if (__LIB_5__::func_754(iVar0, 8192))
		{
			if (__LIB_5__::func_760(iVar0))
			{
				iVar1 = __LIB_5__::func_756(Global_1393237.f_11[iVar0 /*30*/].f_3, 0);
				if (iVar1 >= 0)
				{
					if (VOLUME::_0xF6A8A652A6B186CD(Global_1911670[iVar1]))
					{
						if (VOLUME::_0xF6CE6F9C3897804E(Global_1911670[iVar1]) > 45f)
						{
							__LIB_1__::func_222(Global_1393237.f_11[iVar0 /*30*/].f_3, 0);
							__LIB_2__::func_862(Global_1393237.f_11[iVar0 /*30*/].f_3, 45f, "sCampfireAllDead", 0, 0, 1, 0, -1082130432 /* Float: -1f */);
							__LIB_3__::func_532(iVar0, 4194304, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_935(vector3 vParam0)
{
	int iVar0;
	iVar0 = __LIB_5__::func_762(vParam0);
	if (iVar0 < 0)
	{
		return false;
	}
	return __LIB_5__::func_754(iVar0, 1);
}

bool func_936(bool bParam0, vector3 vParam1, int iParam4, int iParam5)
{
	bool bVar0;
	if (bParam0)
	{
		if (iParam4 == -1)
		{
			iParam4 = __LIB_0__::func_979(vParam1);
		}
		bVar0 = iParam4 == 10;
		if (!bVar0)
		{
			if (Global_1393237.f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237.f_1) < __LIB_5__::func_764(iParam5))
			{
				return false;
			}
		}
		else if (Global_1393237.f_1 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237.f_1) < 961920)
		{
			return false;
		}
		if (Global_1393237.f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2) < __LIB_5__::func_665()
			{
				return false;
			}
		}
	}
	else
	{
		if (Global_1393237 != 0 && (MISC::GET_GAME_TIMER() - Global_1393237) < __LIB_5__::func_765())
		{
			return false;
		}
		if (Global_1393237.f_2 != 0)
		{
			if (MISC::GET_GAME_TIMER() - Global_1393237.f_2) < __LIB_5__::func_665()
			{
				return false;
			}
		}
	}
	if (MISC::GET_GAME_TIMER() < Global_1393237.f_4)
	{
		return false;
	}
	return true;
}

void func_937(int iParam0, bool bParam1)
{
	int iVar0;
	SCRIPTS::_0xE7282390542F570D(uLocal_16);
	if (__LIB_0__::func_2() != -1)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	iVar0 = __LIB_1__::func_976();
	if (iVar0 != 0)
	{
		Global_1393237.f_9 = (Global_1393237.f_9 - 1);
		if (Global_1393237.f_9 < 0)
		{
			Global_1393237.f_9 = 0;
		}
	}
	else if (iVar0 == 0)
	{
		Global_1393237.f_10 = (Global_1393237.f_10 - 1);
		if (Global_1393237.f_10 < 0)
		{
			Global_1393237.f_10 = 0;
		}
	}
	if (bParam1)
	{
		__LIB_5__::func_766(iParam0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_938()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_976();
	if (iVar0 != 0)
	{
		Global_1393237.f_9++;
		if (Global_1393237.f_9 > 1)
		{
			return true;
		}
	}
	if (iVar0 == 0)
	{
		Global_1393237.f_10++;
		if (Global_1393237.f_10 > 1)
		{
			return true;
		}
		iVar1 = 3;
		while (iVar1 <= 5)
		{
			if (__LIB_5__::func_759(iVar1))
			{
				iVar2++;
			}
			iVar1++;
		}
		if (iVar2 > 0)
		{
			return true;
		}
	}
	return false;
}

bool func_939(vector3 vParam0)
{
	int iVar0;
	if (__LIB_0__::func_86(Global_1393237.f_200))
	{
		return false;
	}
	if (__LIB_5__::func_676(vParam0))
	{
		return false;
	}
	if (iLocal_14 == -1)
	{
		iLocal_14 = __LIB_0__::func_979(vParam0);
	}
	iVar0 = __LIB_5__::func_761(iLocal_14);
	return BUILTIN::VDIST(Global_1393237.f_200, vParam0) < (__LIB_5__::func_660(__LIB_1__::func_976(), iVar0, 0) + 20f);
}

bool func_940(vector3 vParam0, int iParam3)
{
	int iVar0;
	float fVar1;
	int iVar2;
	if (iLocal_14 == -1)
	{
		iLocal_14 = __LIB_0__::func_979(vParam0);
	}
	iVar2 = __LIB_5__::func_761(iLocal_14);
	iVar0 = 0;
	while (iVar0 < Global_1393237.f_11)
	{
		if (iVar0 != iParam3)
		{
			if (!__LIB_0__::func_86(Global_1393237.f_11[iVar0 /*30*/].f_3))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_1393237.f_11[iVar0 /*30*/].f_3, true);
				if (fVar1 < __LIB_5__::func_660(__LIB_1__::func_976(), iVar2, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_941(vector3 vParam0)
{
	if (__LIB_17__::func_935(vParam0))
	{
		return false;
	}
	if (__LIB_5__::func_676(vParam0))
	{
		return true;
	}
	return false;
}

void func_942(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	if ((MISC::GET_FRAME_COUNT() % 50) == 0)
	{
		if (__LIB_6__::func_201())
		{
			if (__LIB_5__::func_975(4) == 0)
			{
				__LIB_5__::func_775(4);
			}
		}
		else if (__LIB_5__::func_975(4))
		{
			__LIB_5__::func_976(4);
		}
	}
	if (__LIB_5__::func_975(4))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam0))
		{
			if (!__LIB_2__::func_776())
			{
				if (__LIB_6__::func_202(&vVar0, &vVar3, &vVar6))
				{
					*uParam0 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vVar0, vVar3, vVar6);
					VOLUME::_0x5B23DFF8E0948BB2(*uParam0, 1);
				}
			}
		}
		else if (__LIB_2__::func_776())
		{
			VOLUME::_DELETE_VOLUME(*uParam0);
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(*uParam0))
	{
		VOLUME::_DELETE_VOLUME(*uParam0);
	}
	if ((MISC::GET_FRAME_COUNT() % 50) == 0)
	{
		if (__LIB_6__::func_203())
		{
			if (__LIB_5__::func_975(32) == 0)
			{
				__LIB_5__::func_775(32);
			}
		}
		else if (__LIB_5__::func_975(32))
		{
			__LIB_5__::func_976(32);
		}
	}
	if (__LIB_5__::func_975(32))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(*uParam1))
		{
			if (!__LIB_2__::func_776())
			{
				if (__LIB_6__::func_204(&vVar0, &vVar3, &vVar6))
				{
					*uParam1 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLBOX"), vVar0, vVar3, vVar6);
					VOLUME::_0x5B23DFF8E0948BB2(*uParam1, 1);
				}
			}
		}
		else if (__LIB_2__::func_776())
		{
			VOLUME::_DELETE_VOLUME(*uParam1);
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(*uParam1))
	{
		VOLUME::_DELETE_VOLUME(*uParam1);
	}
}

int func_943(var uParam0, int iParam1)
{
	if (__LIB_6__::func_587((uParam0[iLocal_3513 /*8*/])->f_3))
	{
		if (!(uParam0[iLocal_3513 /*8*/])->f_2)
		{
			if ((*uParam0)[iLocal_3513 /*8*/] == 0)
			{
				(*uParam0)[iLocal_3513 /*8*/] = ENTITY::_0x6F3068258A499E52((uParam0[iLocal_3513 /*8*/])->f_6, (uParam0[iLocal_3513 /*8*/])->f_3, iParam1);
				return 0;
			}
			else if (!ENTITY::_0x1FF441D7954F8709((*uParam0)[iLocal_3513 /*8*/]))
			{
				return 0;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST((uParam0[iLocal_3513 /*8*/])->f_1))
			{
				(uParam0[iLocal_3513 /*8*/])->f_1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA((*uParam0)[iLocal_3513 /*8*/]));
				return 0;
			}
			else if (!(uParam0[iLocal_3513 /*8*/])->f_2)
			{
				(uParam0[iLocal_3513 /*8*/])->f_2 = 1;
				return 1;
			}
		}
		else
		{
			if ((uParam0[iLocal_3513 /*8*/])->f_7 > 5)
			{
				if (!ENTITY::_0x1FF441D7954F8709((*uParam0)[iLocal_3513 /*8*/]))
				{
					(uParam0[iLocal_3513 /*8*/])->f_2 = 0;
				}
				(uParam0[iLocal_3513 /*8*/])->f_7 = 0;
			}
			(uParam0[iLocal_3513 /*8*/])->f_7++;
		}
	}
	else
	{
		if ((uParam0[iLocal_3513 /*8*/])->f_2)
		{
			__LIB_6__::func_194(uParam0);
			(uParam0[iLocal_3513 /*8*/])->f_2 = 0;
		}
		if ((*uParam0)[iLocal_3513 /*8*/] != 0)
		{
			(*uParam0)[iLocal_3513 /*8*/] = 0;
		}
	}
	iLocal_3513++;
	if (iLocal_3513 >= 3)
	{
		iLocal_3513 = 0;
	}
	return 0;
}

void func_944(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = __LIB_0__::func_271(0);
		if (!__LIB_0__::func_272(iVar0, 0))
		{
			if (__LIB_4__::func_635(1048576))
			{
				__LIB_5__::func_858();
			}
			return;
		}
	}
	if (__LIB_1__::func_198(joaat("CSTAG_EVENT_BLOCK_MUSIC_CYLINDER"), 1))
	{
		if (!__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
		{
			if (__LIB_4__::func_635(1048576))
			{
				__LIB_5__::func_858();
			}
			return;
		}
	}
	if (__LIB_4__::func_635(1048576))
	{
		if (Global_1357549.f_1832 == -1)
		{
			if (!AUDIO::_0xE368E8422C860BA7(&(Global_1357549.f_1841), &(Global_1357549.f_1833), -2))
			{
			}
			else
			{
				Global_1357549.f_1832 = AUDIO::_0x0556C784FA056628(&(Global_1357549.f_1841), &(Global_1357549.f_1833));
			}
		}
		else
		{
			if (!__LIB_0__::func_75(&(Global_1357549.f_1845)))
			{
				__LIB_1__::func_283(&(Global_1357549.f_1845), 1);
				AUDIO::PLAY_STREAM_FROM_POSITION(__LIB_6__::func_634(__LIB_0__::func_317()), Global_1357549.f_1832);
			}
			if (__LIB_0__::func_265(&(Global_1357549.f_1845)) > IntToFloat(Global_1357549.f_1844) || !AUDIO::IS_STREAM_PLAYING(Global_1357549.f_1832))
			{
				__LIB_5__::func_858();
			}
		}
	}
}

Vector3 func_945(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, float fParam10, int iParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	fVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = __LIB_1__::func_699();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!__LIB_1__::func_120(Global_1310720.f_21))
	{
		fParam10 = iParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			fVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((fVar3 < fVar2 && fVar3 > fParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_6__::func_629(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					fVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_946(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	if (__LIB_6__::func_288())
	{
		if (__LIB_6__::func_10() == 0)
		{
			return;
		}
		bParam0 = true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if (__LIB_6__::func_294() == 0 || bParam0)
		{
			if (__LIB_6__::func_170() && !__LIB_1__::func_44(Global_1835011[4 /*74*/].f_1))
			{
				__LIB_6__::func_596(0, 1, bParam0);
			}
			else
			{
				__LIB_6__::func_596(0, 0, bParam0);
			}
		}
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0 || bParam0)
	{
		if ((__LIB_0__::func_959(1, 0) && __LIB_6__::func_104()) && __LIB_6__::func_11() == 0)
		{
			__LIB_6__::func_596(1, 1, bParam0);
		}
		else
		{
			__LIB_6__::func_596(1, 0, bParam0);
		}
	}
	bVar0 = false;
	if (__LIB_0__::func_592() == 1)
	{
		bVar0 = true;
	}
	iVar1 = __LIB_0__::func_317();
	if (bParam0)
	{
		if (!__LIB_1__::func_533(1048576))
		{
			Global_1357549.f_575 = 18;
			Global_1357549.f_575 = 0;
			while (Global_1357549.f_575 < 18)
			{
				__LIB_6__::func_649(iVar1, 0, 0);
				Global_1357549.f_575++;
			}
			Global_1357549.f_575 = 0;
		}
	}
	else if (__LIB_1__::func_533(1048576))
	{
		__LIB_6__::func_649(iVar1, bParam1, 1);
	}
	if (((__LIB_6__::func_288() && STREAMING::_0xCF45DF50C7775F2A() == 0) && __LIB_0__::func_298(0) == Global_1835011[4 /*74*/].f_1 == 0) && __LIB_6__::func_195())
	{
		__LIB_6__::func_295();
		uVar2 = __LIB_6__::func_12();
		__LIB_6__::func_506(iVar1, &uVar2, bVar0, __LIB_6__::func_148(), bParam1);
		if (__LIB_5__::func_862(10, 0) > 1)
		{
			if (__LIB_1__::func_198(joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"), 0))
			{
				__LIB_1__::func_449(joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"), 1, 0);
			}
		}
		else if (!__LIB_1__::func_198(joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"), 1))
		{
			__LIB_4__::func_253(joaat("CSTAG_DUTCH_TENT_LOW_LEVEL"), 1017034651, 1120952528, -1, 1, 1, 0);
		}
		if ((__LIB_5__::func_862(10, 0) >= 3 && iVar1 == 3) && bVar0)
		{
			__LIB_4__::func_495(6);
		}
		else
		{
			__LIB_4__::func_524(6);
		}
		if (__LIB_6__::func_448(iVar1, bVar0))
		{
			if (((((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1713[0]) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1357549.f_1713[0], true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1713[1])) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1357549.f_1713[1], true, false)) && ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Global_1357549.f_1713[2])) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Global_1357549.f_1713[2], true, false))
			{
				if (((__LIB_6__::func_196(16) != 1 && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1357549.f_1713[0], false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1357549.f_1713[1], false)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Global_1357549.f_1713[2], false))
				{
					if (__LIB_6__::func_196(16) == 2 && __LIB_5__::func_904(256) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549.f_1713[0], "PBL_LEVEL_2", true);
						ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1713[0]);
						__LIB_5__::func_812(256);
					}
					else if (__LIB_6__::func_196(16) == 3 && __LIB_5__::func_904(512) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549.f_1713[1], "PBL_LEVEL_3", true);
						ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1713[1]);
						__LIB_5__::func_812(512);
					}
					else if (__LIB_6__::func_196(16) == 4 && __LIB_5__::func_904(1024) == 0)
					{
						if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
						{
							CAM::DO_SCREEN_FADE_OUT(1);
						}
						if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
						{
							CAM::DO_SCREEN_FADE_IN(7000);
						}
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Global_1357549.f_1713[2], "PBL_LEVEL_4", true);
						ANIMSCENE::START_ANIM_SCENE(Global_1357549.f_1713[2]);
						__LIB_5__::func_812(1024);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_298(0) == Global_1835011[4 /*74*/].f_1)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(825179479) == 0)
		{
			STREAMING::_REQUEST_IMAP(825179479);
		}
	}
}

void func_947(int* iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (MISC::GET_GAME_TIMER() < iParam0->f_19)
	{
		return;
	}
	bVar0 = false;
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_UP")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_UP")))
	{
		bVar0 = true;
		iVar1 = 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_DOWN")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_DOWN")))
	{
		bVar0 = true;
		iVar1 = 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_LEFT")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_LEFT")))
	{
		bVar0 = true;
		iVar1 = 2;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_RIGHT")) || PAD::IS_CONTROL_JUST_PRESSED(2, joaat("INPUT_GAME_MENU_STICK_RIGHT")))
	{
		bVar0 = true;
		iVar1 = 3;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, joaat("INPUT_GAME_MENU_ACCEPT")))
	{
		iParam0->f_860 = 1;
	}
	if (bVar0)
	{
		if (__LIB_6__::func_447(iVar1, &(iParam0->f_35.f_491), iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], &(iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/])))
		{
			if (iParam0->f_35.f_491.f_1 != -1)
			{
				if (iParam0->f_35.f_491.f_5)
				{
					__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
				}
				else
				{
					__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
				}
			}
			if (Global_1357549.f_1894 > 0)
			{
				__LIB_6__::func_3(iVar1);
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
	}
	if (__LIB_0__::func_567(iParam0->f_10, 1))
	{
		bVar2 = false;
		if (iParam0->f_35.f_491.f_5)
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					__LIB_6__::func_657(iParam0, 1, 4, 1, &bVar2);
					if (bVar2)
					{
						__LIB_6__::func_4(0);
					}
					break;
				case 0:
					__LIB_6__::func_657(iParam0, 0, 3, 1, &bVar2);
					if (bVar2)
					{
						__LIB_6__::func_4(1);
					}
					break;
				case 2:
					__LIB_6__::func_657(iParam0, 2, 5, 1, &bVar2);
					if (bVar2)
					{
						__LIB_6__::func_4(2);
					}
					break;
				case 3:
					__LIB_6__::func_657(iParam0, 3, 10, 1, &bVar2);
					break;
				case 4:
					if (__LIB_0__::func_317() == 2 || __LIB_0__::func_317() == 3)
					{
						__LIB_6__::func_657(iParam0, 4, 13, 3, &bVar2);
					}
					break;
				case 5:
					__LIB_6__::func_657(iParam0, 5, 0, 3, &bVar2);
					break;
				case 7:
					__LIB_6__::func_657(iParam0, 7, 14, 1, &bVar2);
					break;
				case 6:
					__LIB_6__::func_657(iParam0, 6, 12, 3, &bVar2);
					break;
			}
		}
		else
		{
			switch (iParam0->f_35.f_491.f_1)
			{
				case 1:
					__LIB_6__::func_612(iParam0, 1, 4, &bVar2);
					break;
				case 0:
					__LIB_6__::func_612(iParam0, 0, 3, &bVar2);
					break;
				case 2:
					__LIB_6__::func_612(iParam0, 2, 5, &bVar2);
					break;
				default:
					break;
			}
		}
		if (bVar2)
		{
			if (iParam0->f_860)
			{
				__LIB_6__::func_5();
				iParam0->f_860 = 0;
			}
			iParam0->f_19 = MISC::GET_GAME_TIMER() + 250;
		}
		else if (iParam0->f_860)
		{
			__LIB_6__::func_6();
			iParam0->f_860 = 0;
		}
	}
}

void func_948(int* iParam0)
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	__LIB_6__::func_359(iParam0);
	__LIB_6__::func_658(iParam0);
	__LIB_6__::func_80(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_11))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_11));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_12))
	{
		OBJECT::DELETE_OBJECT(&(iParam0->f_12));
	}
	if (__LIB_5__::func_927())
	{
		INTERIOR::CLEAR_ROOM_FOR_ENTITY(iParam0->f_864);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		HUD::RELEASE_NAMED_RENDERTARGET("ledger_ct");
		OBJECT::DELETE_OBJECT(&(iParam0->f_864));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_33);
	HUD::_TEXT_DATABASE_DELETE("CPGENAU");
	__LIB_5__::func_928(iParam0->f_1426, &iVar0, &uVar1, &uVar2, &uVar3);
	Global_1357549.f_1723 = 0;
	__LIB_0__::func_289(iVar0, 512, 0);
	if (((__LIB_5__::func_846() == 1 || __LIB_5__::func_846() == 2) || __LIB_5__::func_846() == 3) || __LIB_5__::func_846() == 6)
	{
		__LIB_6__::func_182(&(iParam0->f_1428));
	}
}

int func_949()
{
	__LIB_0__::func_11(&Local_18);
	__LIB_0__::func_11();
	__LIB_6__::func_610(&(Local_18.f_51));
	__LIB_0__::func_11();
	__LIB_5__::func_871();
	__LIB_6__::func_627(1);
	__LIB_0__::func_11();
	__LIB_6__::func_486();
	return 1;
}

Vector3 func_950(float fParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	vVar0 = { __LIB_17__::func_945(Global_36, uParam1, uParam2, 1, 0, 0, 0, 0, 0, 0, fParam0, 10f) };
	return vVar0;
}

void func_951(int* iParam0, var uParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	if (__LIB_0__::func_86(__LIB_5__::func_958()) || __LIB_6__::func_143(1) == 0)
	{
		return;
	}
	sVar0 = "script@ambient@shop@CATALOG_PLAYER";
	sVar1 = "PBL_ENTER";
	sVar2 = "PBL_FLIP_L1";
	sVar3 = "PBL_FLIP_R1";
	if (MISC::IS_BIT_SET(Global_1357549.f_1893, 4))
	{
		sVar4 = "PBL_EXIT_SECTION";
	}
	else
	{
		sVar4 = "PBL_EXIT_INDEX";
	}
	sVar5 = "ledger_ct";
	sVar6 = __LIB_5__::func_959();
	sVar7 = __LIB_6__::func_237(iParam0->f_35.f_491.f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_864))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_33, false);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_33))
		{
			iParam0->f_864 = OBJECT::CREATE_OBJECT(iParam0->f_33, __LIB_5__::func_958(), true, true, false, false, true);
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, __LIB_5__::func_958(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, __LIB_5__::func_960(), 2, true);
			ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_864, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_33);
		}
	}
	else if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar5) == 0)
	{
		HUD::REGISTER_NAMED_RENDERTARGET(sVar5, false);
		HUD::LINK_NAMED_RENDERTARGET(iParam0->f_33);
		if (HUD::IS_NAMED_RENDERTARGET_LINKED(iParam0->f_33))
		{
		}
		else
		{
			if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sVar5))
			{
				HUD::RELEASE_NAMED_RENDERTARGET(sVar5);
			}
			return;
		}
		iVar8 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sVar5);
		HUD::SET_TEXT_RENDER_ID(iVar8);
	}
	if (iParam0->f_20 != 0)
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_35, 0, 1);
			PED::SET_PED_RESET_FLAG(Global_35, 258, true);
		}
		__LIB_1__::func_538(0);
	}
	if (iParam0->f_20 >= 4)
	{
		PAD::_SET_CONTROL_CONTEXT(4, joaat("LEDGER"));
	}
	__LIB_6__::func_591(iParam0, uParam1);
	__LIB_5__::func_961(&(iParam0->f_35), iParam0->f_20);
	switch (iParam0->f_20)
	{
		case 0:
			if (__LIB_0__::func_139(iParam0->f_6))
			{
				if (__LIB_1__::func_732(iParam0->f_6, 1))
				{
					if (__LIB_5__::func_927())
					{
						INTERIOR::FORCE_ROOM_FOR_ENTITY(iParam0->f_864, INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35), INTERIOR::GET_ROOM_KEY_FROM_ENTITY(Global_35));
					}
					__LIB_0__::func_326(8192);
					__LIB_0__::func_326(67108864);
					iParam0->f_858 = 0;
					__LIB_6__::func_359(iParam0);
					__LIB_5__::func_962(0);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_18))
					{
						ANIMSCENE::RESET_ANIM_SCENE(iParam0->f_18, 0);
					}
					iParam0->f_18 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_18);
					__LIB_5__::func_963(&(iParam0->f_35), 0);
					Global_1357549.f_1894 = 0;
					__LIB_5__::func_964(&(iParam0->f_35.f_2), __LIB_0__::func_317());
					__LIB_5__::func_965(&(iParam0->f_35));
					__LIB_5__::func_966();
					MAP::DISPLAY_RADAR(false);
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
					MISC::SET_BIT(&(Global_1357549.f_1893), 0);
					__LIB_6__::func_631(iParam0, 2);
				}
			}
			else if (__LIB_4__::func_635(8192) == 0)
			{
				if ((__LIB_0__::func_317() == 1 || __LIB_0__::func_317() == 2) || __LIB_0__::func_317() == 3)
				{
					if (__LIB_6__::func_143(0))
					{
						iParam0->f_6 = __LIB_1__::func_282("LDGR_TITHE", joaat("INPUT_CONTEXT_X"), __LIB_5__::func_907(__LIB_5__::func_846()), __LIB_5__::func_908(), 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
						__LIB_4__::func_12(iParam0->f_6, 736625733, 0, 1);
					}
				}
			}
			break;
		case 2:
			if ((((ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_18, true, false) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam0->f_18, false)) && __LIB_5__::func_967(&(iParam0->f_35))) && __LIB_5__::func_968()) && __LIB_5__::func_962(1))
			{
				iParam0->f_5 = __LIB_5__::func_826();
				__LIB_6__::func_363(&(iParam0->f_35));
				__LIB_6__::func_614(&(iParam0->f_35.f_2.f_1[0 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				if (__LIB_6__::func_605(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], 0, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					__LIB_5__::func_963(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
					else
					{
						__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
				}
				else
				{
					__LIB_5__::func_963(&(iParam0->f_35), 0);
				}
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iParam0->f_18, "CATALOG", iParam0->f_864, 0);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam0->f_18, __LIB_5__::func_969(iParam0->f_864), __LIB_5__::func_960(), 2);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar1);
				ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(iParam0->f_18, "player", &(iParam0->f_21), false, 0, 2);
				__LIB_6__::func_631(iParam0, 1);
			}
			break;
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 713668775, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Global_35, -208384378, true) != 1)
			{
				__LIB_6__::func_631(iParam0, 3);
			}
			break;
		case 3:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar1, true);
				__LIB_6__::func_631(iParam0, 4);
			}
			break;
		case 4:
			if (__LIB_0__::func_272(Global_35, 0))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
				TASK::TASK_ENTER_ANIM_SCENE(Global_35, iParam0->f_18, "player", sVar1, 1069379748 /* Float: 1.48f */, 1, 128, 20000, -1082130432 /* Float: -1f */);
			}
			__LIB_6__::func_319(&(iParam0->f_35));
			if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
			{
				iParam0->f_3 = 1;
				__LIB_6__::func_320(&(iParam0->f_816), __LIB_0__::func_317(), 0, 1065353216 /* Float: 1f */);
			}
			else
			{
				iParam0->f_3 = 0;
			}
			__LIB_6__::func_631(iParam0, 5);
			__LIB_1__::func_148(&(iParam0->f_813));
			break;
		case 5:
			if (TASK::GET_SCRIPT_TASK_STATUS(Global_35, 1369124074, true) != 1)
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_18) > 0.36f)
				{
					if (!iParam0->f_3)
					{
						__LIB_6__::func_320(&(iParam0->f_816), __LIB_0__::func_317(), 0, 1065353216 /* Float: 1f */);
					}
					__LIB_5__::func_970(&(iParam0->f_35), 0);
					MISC::SET_BIT(&(Global_1357549.f_1893), 1);
					__LIB_6__::func_631(iParam0, 6);
					return;
				}
			}
			if (__LIB_1__::func_871(&(iParam0->f_813)) > 6000)
			{
				__LIB_6__::func_658(iParam0);
				__LIB_6__::func_631(iParam0, 7);
			}
			break;
		case 6:
			__LIB_6__::func_93(&(iParam0->f_816));
			HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-2019190071, "LDGR_TITHE", 1, 0, 0, 0);
			if (__LIB_6__::func_94(iParam0))
			{
				return;
			}
			if (iParam0->f_35.f_772 && __LIB_0__::func_139(iParam0->f_35.f_1))
			{
				if (!__LIB_6__::func_321(iParam0))
				{
					__LIB_5__::func_972(&(iParam0->f_816), __LIB_5__::func_971(__LIB_0__::func_317(), 1), 1);
				}
			}
			else if (__LIB_6__::func_321(iParam0))
			{
				__LIB_5__::func_972(&(iParam0->f_816), __LIB_5__::func_971(__LIB_0__::func_317(), 0), 1);
			}
			__LIB_17__::func_947(iParam0);
			if (__LIB_1__::func_732(iParam0->f_7, 1) && Global_1357549.f_1894 < 3)
			{
				__LIB_5__::func_963(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar2);
				__LIB_6__::func_631(iParam0, 9);
			}
			if (__LIB_1__::func_732(iParam0->f_8, 1) && Global_1357549.f_1894 > 0)
			{
				__LIB_5__::func_963(&(iParam0->f_35), 0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar3);
				__LIB_6__::func_631(iParam0, 11);
			}
			if (__LIB_1__::func_732(iParam0->f_35.f_1, 1))
			{
				__LIB_6__::func_322(&(iParam0->f_35), 1);
			}
			if (__LIB_1__::func_732(iParam0->f_9, 1))
			{
				__LIB_5__::func_963(&(iParam0->f_35), 0);
				__LIB_1__::func_283(&(iParam0->f_810), 0);
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 1);
				ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0->f_18, sVar4);
				__LIB_6__::func_631(iParam0, 8);
			}
			break;
		case 9:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar2))
			{
				Global_1357549.f_1894++;
				__LIB_6__::func_614(&(iParam0->f_35.f_2.f_1[1 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar2, true);
				MISC::SET_BIT(&(Global_1357549.f_1893), 2);
				MISC::SET_BIT(&(Global_1357549.f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 1);
				__LIB_6__::func_631(iParam0, 10);
			}
			break;
		case 11:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar3))
			{
				Global_1357549.f_1894 = (Global_1357549.f_1894 - 1);
				__LIB_6__::func_614(&(iParam0->f_35.f_2.f_1[0 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar3, true);
				MISC::SET_BIT(&(Global_1357549.f_1893), 2);
				MISC::SET_BIT(&(Global_1357549.f_1893), 4);
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 1);
				__LIB_6__::func_631(iParam0, 12);
			}
			break;
		case 10:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_18) > 0.09f)
			{
				__LIB_6__::func_614(&(iParam0->f_35.f_2.f_1[0 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 1;
				if (__LIB_6__::func_605(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					__LIB_5__::func_963(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
					else
					{
						__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
				}
				else
				{
					__LIB_5__::func_963(&(iParam0->f_35), 0);
				}
				__LIB_6__::func_631(iParam0, 13);
			}
			break;
		case 12:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_18) > 0.09f)
			{
				__LIB_6__::func_614(&(iParam0->f_35.f_2.f_1[1 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
				iParam0->f_35.f_491.f_2 = 0;
				if (__LIB_6__::func_605(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
				{
					__LIB_5__::func_963(&(iParam0->f_35), 1);
					if (iParam0->f_35.f_491.f_5)
					{
						__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
					else
					{
						__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
					}
				}
				else
				{
					__LIB_5__::func_963(&(iParam0->f_35), 0);
				}
				__LIB_6__::func_631(iParam0, 13);
			}
			break;
		case 13:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iParam0->f_18) > 0.15f)
			{
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 2);
				MISC::SET_BIT(&(Global_1357549.f_1893), 1);
				__LIB_6__::func_631(iParam0, 6);
			}
			break;
		case 14:
			if (!__LIB_0__::func_75(&(iParam0->f_810)))
			{
				__LIB_1__::func_283(&(iParam0->f_810), 0);
			}
			if (__LIB_1__::func_871(&(iParam0->f_810)) > 2500)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar7))
				{
					iParam0->f_16 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar6, 0, sVar7, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iParam0->f_16);
					iParam0->f_17 = iParam0->f_35.f_491.f_1;
					__LIB_6__::func_631(iParam0, 15);
				}
			}
			break;
		case 15:
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0->f_16, true, false) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(iParam0->f_16, false))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0->f_16, false))
				{
					__LIB_5__::func_780(&(iParam0->f_816));
					MISC::SET_BIT(&(Global_1357549.f_1893), 3);
					MISC::CLEAR_BIT(&(Global_1357549.f_1893), 1);
					__LIB_6__::func_614(&(iParam0->f_35.f_2.f_1[iParam0->f_35.f_491.f_2 /*237*/]), &(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/]), &(iParam0->f_35.f_531));
					if (__LIB_6__::func_605(iParam0->f_35.f_498[Global_1357549.f_1894 /*8*/], iParam0->f_35.f_491.f_2, &(iParam0->f_35.f_2), &(iParam0->f_35.f_491)) && iParam0->f_35.f_491.f_1 != -1)
					{
						if (iParam0->f_35.f_491.f_5)
						{
							__LIB_6__::func_317(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
						}
						else
						{
							__LIB_6__::func_318(&(iParam0->f_35.f_2.f_476), iParam0->f_35.f_491.f_1, iParam0->f_35.f_531[iParam0->f_35.f_491.f_1 /*30*/]);
						}
					}
					__LIB_6__::func_631(iParam0, 16);
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(iParam0->f_16);
					__LIB_5__::func_973();
				}
			}
			break;
		case 16:
			if (__LIB_6__::func_367(iParam0, 0) && ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iParam0->f_16))
			{
				ANIMSCENE::ABORT_ANIM_SCENE(iParam0->f_18, false);
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 3);
				iParam0->f_17 = -1;
				__LIB_0__::func_37(&(iParam0->f_810));
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				__LIB_6__::func_214(iParam0);
				__LIB_6__::func_658(iParam0);
				__LIB_6__::func_631(iParam0, 7);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_16) && ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iParam0->f_16, false))
			{
				__LIB_0__::func_698(134217728);
				__LIB_5__::func_963(&(iParam0->f_35), iParam0->f_35.f_491);
				if (iParam0->f_35.f_773 && iParam0->f_35.f_772)
				{
					__LIB_6__::func_320(&(iParam0->f_816), __LIB_0__::func_317(), 1, 1065353216 /* Float: 1f */);
				}
				else
				{
					__LIB_6__::func_320(&(iParam0->f_816), __LIB_0__::func_317(), 0, 1065353216 /* Float: 1f */);
				}
				MISC::CLEAR_BIT(&(Global_1357549.f_1893), 3);
				MISC::SET_BIT(&(Global_1357549.f_1893), 1);
				iParam0->f_17 = -1;
				__LIB_0__::func_37(&(iParam0->f_810));
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iParam0->f_16))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(iParam0->f_16);
				}
				__LIB_6__::func_631(iParam0, 6);
			}
			break;
		case 7:
			ENTITY::SET_ENTITY_COORDS(iParam0->f_864, __LIB_5__::func_958(), true, false, true, true);
			ENTITY::SET_ENTITY_ROTATION(iParam0->f_864, __LIB_5__::func_960(), 2, true);
			__LIB_6__::func_631(iParam0, 0);
			break;
		case 8:
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0->f_18, sVar4))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0->f_18, sVar4, true);
				__LIB_5__::func_974(&(iParam0->f_35), 0);
				if (__LIB_5__::func_975(64))
				{
					__LIB_5__::func_976(64);
					__LIB_5__::func_775(128);
				}
				__LIB_6__::func_631(iParam0, 17);
			}
			break;
		case 17:
			if (__LIB_0__::func_265(&(iParam0->f_810)) > 0.75f)
			{
				__LIB_0__::func_37(&(iParam0->f_810));
				if (!iParam0->f_3)
				{
					__LIB_5__::func_780(&(iParam0->f_816));
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iParam0->f_18))
			{
				__LIB_6__::func_214(iParam0);
				__LIB_6__::func_658(iParam0);
			}
			break;
	}
}

void func_952()
{
	var uVar0;
	if (__LIB_5__::func_825())
	{
		if (!__LIB_6__::func_56())
		{
			__LIB_6__::func_388(1);
			__LIB_0__::func_698(32);
		}
	}
	else if (__LIB_4__::func_635(32768))
	{
		if (__LIB_1__::func_750(&uVar0))
		{
			if (!__LIB_6__::func_56())
			{
				__LIB_6__::func_388(1);
			}
			__LIB_4__::func_69();
			__LIB_0__::func_326(32);
			__LIB_6__::func_388(0);
		}
		if (__LIB_6__::func_56())
		{
			__LIB_6__::func_388(0);
		}
		if ((__LIB_0__::func_317() == 7 && __LIB_0__::func_181()) && !__LIB_1__::func_185(67))
		{
			if (!__LIB_1__::func_18(-999503751))
			{
				__LIB_0__::func_908(-999503751);
			}
			if (!__LIB_1__::func_18(81053684))
			{
				__LIB_0__::func_908(81053684);
			}
			if (!__LIB_1__::func_18(-1719060085))
			{
				__LIB_0__::func_908(-1719060085);
			}
			if (!__LIB_1__::func_18(-2061583405))
			{
				__LIB_0__::func_908(-2061583405);
			}
		}
	}
	else
	{
		if (!__LIB_6__::func_56())
		{
			__LIB_6__::func_388(1);
			__LIB_0__::func_698(32);
		}
		if ((__LIB_0__::func_317() == 7 && __LIB_0__::func_181()) && !__LIB_1__::func_185(67))
		{
			if (__LIB_1__::func_18(-999503751))
			{
				__LIB_0__::func_907(-999503751);
			}
			if (__LIB_1__::func_18(81053684))
			{
				__LIB_0__::func_907(81053684);
			}
			if (__LIB_1__::func_18(-1719060085))
			{
				__LIB_0__::func_907(-1719060085);
			}
			if (__LIB_1__::func_18(-2061583405))
			{
				__LIB_0__::func_907(-2061583405);
			}
		}
	}
}

void func_953()
{
	__LIB_6__::func_542();
}

void func_954(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	if (iParam0 == -1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, false);
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(*uParam1, true);
	if (iParam0 == 0)
	{
		switch (__LIB_0__::func_317())
		{
			case 1:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 160827397 /* GXTEntry: "Horseshoe Overlook" */);
				break;
			case 2:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 1003809922 /* GXTEntry: "Clemens Point" */);
				break;
			case 3:
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, -518834432 /* GXTEntry: "Shady Belle" */);
				break;
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam1->f_1, 0);
	}
	if (Global_40.f_4283.f_440[iParam0 /*63*/] > 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_2, true);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_2.f_1, MISC::_CREATE_VAR_STRING(2, "CASH_STRING", Global_40.f_4283.f_440[iParam0 /*63*/]));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_2, false);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		__LIB_6__::func_530(iParam0, iVar0, &(uParam1->f_4[iVar0 /*4*/]));
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if (Global_40.f_4283.f_440[1 /*63*/].f_62 == 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, true);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, false);
			}
			break;
		case 1:
			if (Global_40.f_4283.f_440[1 /*63*/].f_62 > 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, true);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_53, false);
			}
			break;
	}
	iVar1 = __LIB_6__::func_15(&(Global_40.f_4283.f_440[iParam0 /*63*/]));
	sVar2 = "CASH_STRING";
	if (iVar1 < 0)
	{
		sVar2 = "CASH_STRING_NEG";
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_53.f_1, MISC::_CREATE_VAR_STRING(2, sVar2, iVar1));
}

bool func_955(var uParam0, var uParam1)
{
	if (__LIB_6__::func_501(&(uParam0->f_55), uParam1))
	{
		uParam1->f_4 = 0;
		return true;
	}
	if (__LIB_6__::func_502(&(uParam0->f_102), uParam1))
	{
		uParam1->f_4 = 1;
		return true;
	}
	if (__LIB_6__::func_502(&(uParam0->f_110), uParam1))
	{
		uParam1->f_4 = 2;
		return true;
	}
	return false;
}

bool func_956(int iParam0, var uParam1, struct<8> Param2, var uParam10)
{
	int iVar0;
	if (!*uParam1)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			switch (uParam1->f_4)
			{
				case 1:
					return false;
				case 2:
					if (uParam1->f_3 == 0 && Param2.f_2 == -1)
					{
						return false;
					}
					if (uParam1->f_3 == 1 && Param2.f_6 == -1)
					{
						return false;
					}
					if (!__LIB_6__::func_16(&((uParam10[uParam1->f_3 /*118*/])->f_102)))
					{
						return false;
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_110.f_7, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_102.f_7, true);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_6;
					}
					else
					{
						uParam1->f_1 = Param2.f_2;
					}
					uParam1->f_4 = 1;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return true;
				case 0:
					if (uParam1->f_5)
					{
						return false;
					}
					iVar0 = __LIB_6__::func_332(&((uParam10[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return false;
					}
					__LIB_6__::func_496(uParam10[uParam1->f_3 /*118*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, true);
					uParam1->f_5 = 1;
					uParam1->f_6 = iVar0;
					return true;
				default:
					break;
			}
			break;
		case 1:
			switch (uParam1->f_4)
			{
				case 2:
					return false;
				case 1:
					if (uParam1->f_3 == 0 && Param2.f_3 == -1)
					{
						return false;
					}
					if (uParam1->f_3 == 1 && Param2.f_7 == -1)
					{
						return false;
					}
					if (!__LIB_6__::func_16(&((uParam10[uParam1->f_3 /*118*/])->f_110)))
					{
						return false;
					}
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_102.f_7, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_110.f_7, true);
					if (uParam1->f_3 == 1)
					{
						uParam1->f_1 = Param2.f_7;
					}
					else
					{
						uParam1->f_1 = Param2.f_3;
					}
					uParam1->f_4 = 2;
					uParam1->f_5 = 1;
					uParam1->f_6 = -1;
					return true;
				case 0:
					if (!uParam1->f_5)
					{
						return false;
					}
					iVar0 = __LIB_6__::func_333(&((uParam10[uParam1->f_3 /*118*/])->f_55));
					if (iVar0 == -1)
					{
						return false;
					}
					__LIB_6__::func_496(uParam10[uParam1->f_3 /*118*/]);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[uParam1->f_3 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, true);
					uParam1->f_5 = 0;
					uParam1->f_6 = iVar0;
					return true;
				default:
					break;
			}
			break;
		case 2:
			if (uParam1->f_3 == 0)
			{
				return false;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_3 != -1 && __LIB_6__::func_16(&((uParam10[0 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_110.f_7, false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_110.f_7, true);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_2 != -1 && __LIB_6__::func_16(&((uParam10[0 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_110.f_7, false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_102.f_7, true);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 1:
					if (Param2.f_2 != -1 && __LIB_6__::func_16(&((uParam10[0 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_102.f_7, false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_102.f_7, true);
						uParam1->f_1 = Param2.f_2;
						uParam1->f_3 = 0;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_3 != -1 && __LIB_6__::func_16(&((uParam10[0 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_102.f_7, false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_110.f_7, true);
						uParam1->f_1 = Param2.f_3;
						uParam1->f_3 = 0;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 0:
					if (Param2.f_1 == -1)
					{
						return false;
					}
					if (uParam1->f_5)
					{
						iVar0 = __LIB_6__::func_332(&((uParam10[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_496(uParam10[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, true);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = __LIB_6__::func_333(&((uParam10[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_496(uParam10[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, true);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					else
					{
						iVar0 = __LIB_6__::func_333(&((uParam10[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_496(uParam10[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, true);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = __LIB_6__::func_332(&((uParam10[0 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_496(uParam10[1 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, true);
							uParam1->f_1 = Param2.f_1;
							uParam1->f_3 = 0;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					return false;
				default:
					break;
			}
			break;
		case 3:
			if (uParam1->f_3 == 1)
			{
				return false;
			}
			switch (uParam1->f_4)
			{
				case 2:
					if (Param2.f_7 != -1 && __LIB_6__::func_16(&((uParam10[1 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_110.f_7, false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_110.f_7, true);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_6 != -1 && __LIB_6__::func_16(&((uParam10[1 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_110.f_7, false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_102.f_7, true);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 1:
					if (Param2.f_6 != -1 && __LIB_6__::func_16(&((uParam10[1 /*118*/])->f_102)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_102.f_7, false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_102.f_7, true);
						uParam1->f_1 = Param2.f_6;
						uParam1->f_3 = 1;
						uParam1->f_4 = 1;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					else if (Param2.f_7 != -1 && __LIB_6__::func_16(&((uParam10[1 /*118*/])->f_110)))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[0 /*118*/])->f_102.f_7, false);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_110.f_7, true);
						uParam1->f_1 = Param2.f_7;
						uParam1->f_3 = 1;
						uParam1->f_4 = 2;
						uParam1->f_5 = 1;
						uParam1->f_6 = -1;
						return true;
					}
					return false;
				case 0:
					if (Param2.f_5 == -1)
					{
						return false;
					}
					if (uParam1->f_5)
					{
						iVar0 = __LIB_6__::func_332(&((uParam10[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_496(uParam10[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, true);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = __LIB_6__::func_333(&((uParam10[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_496(uParam10[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, true);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					else
					{
						iVar0 = __LIB_6__::func_333(&((uParam10[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_496(uParam10[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_55.f_30[iVar0 /*4*/].f_3, true);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 0;
							uParam1->f_6 = iVar0;
							return true;
						}
						iVar0 = __LIB_6__::func_332(&((uParam10[1 /*118*/])->f_55));
						if (iVar0 != -1)
						{
							__LIB_6__::func_496(uParam10[0 /*118*/]);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL((uParam10[1 /*118*/])->f_55.f_5[iVar0 /*6*/].f_5, true);
							uParam1->f_1 = Param2.f_5;
							uParam1->f_3 = 1;
							uParam1->f_4 = 0;
							uParam1->f_5 = 1;
							uParam1->f_6 = iVar0;
							return true;
						}
					}
					break;
			}
			break;
	}
	return false;
}

void func_957(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = __LIB_0__::func_97(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!__LIB_0__::func_293(43))
		{
			return;
		}
	}
	iVar0 = __LIB_0__::func_821(iParam0);
	if (__LIB_5__::func_919(iVar0) || __LIB_5__::func_920(iVar0))
	{
		return;
	}
	iVar1 = __LIB_0__::func_819(iParam0);
	if (iVar1 >= __LIB_5__::func_921(iVar0))
	{
		return;
	}
	if (__LIB_6__::func_299(iParam0, iParam1))
	{
		return;
	}
	if (__LIB_6__::func_300(iParam0, iParam1))
	{
		return;
	}
	fVar2 = __LIB_5__::func_922(iParam0, iParam1);
	fVar3 = __LIB_5__::func_923(iParam1);
	fVar3 = (fVar3 * (1f + Global_40.f_11095.f_68));
	switch (iParam1)
	{
		case 1:
			iVar4 = __LIB_0__::func_398(iParam0);
			if (__LIB_6__::func_84(iVar4, 0))
			{
				fVar3 = (fVar3 * 0.5f);
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (__LIB_5__::func_778())
			{
				fVar3 = (fVar3 * 2f);
			}
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 4:
			Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 = (Global_1900383.f_317.f_2[iParam0 /*5*/].f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = __LIB_0__::func_833(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			__LIB_6__::func_134(iParam1, fVar3);
			break;
	}
	__LIB_9__::func_826(iParam0, fVar3);
	__LIB_5__::func_924(iParam0, iParam1, (fVar2 + fVar3));
}

void func_958(int* iParam0, int iParam1)
{
	if (iParam0->f_20 != iParam1)
	{
		if (__LIB_0__::func_272(Global_35, 0))
		{
			switch (iParam1)
			{
				case 6:
				case 9:
				case 10:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
					if (__LIB_4__::func_385(&Global_35) && __LIB_5__::func_784(joaat("MPC_HIDE_ACTION_HAT")) == -1)
					{
						__LIB_8__::func_941(joaat("MPC_HIDE_ACTION_HAT"), Global_35, 0, 1);
					}
					break;
				default:
					__LIB_8__::func_944(Global_35, joaat("MPC_HIDE_ACTION_HAT"), 1);
					break;
			}
		}
	}
	iParam0->f_20 = iParam1;
}

void func_959(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if ((uParam2[iVar0 /*8*/])->f_1 != uParam1->f_1)
		{
		}
		else if ((uParam2[iVar0 /*8*/])->f_2 != -1 && (uParam2[iVar0 /*8*/])->f_2 != -3)
		{
			if (__LIB_0__::func_62(uParam0->f_1600, __LIB_6__::func_635(uParam2[iVar0 /*8*/])) < __LIB_6__::func_227(uParam2[iVar0 /*8*/]))
			{
				__LIB_1__::func_683(&((uParam2[iVar0 /*8*/])->f_3), 2);
				return;
			}
		}
		iVar0++;
	}
}

void func_960(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_231(&(uParam0->f_1590)))
	{
		iVar0 = __LIB_6__::func_232(&(uParam0->f_1590));
		if (iVar0 != 0)
		{
			iVar1 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(uParam0->f_1600, iVar0, 0.15f, 0, true);
			if (!TASK::_0xEA31F199A73801D3(iVar1))
			{
				uParam0->f_1581 = 8;
				uParam0->f_1590.f_2 = 0;
				return;
			}
		}
	}
	MISC::SET_BIT(&(Global_40.f_4283.f_408), uParam0->f_1644);
	Global_40.f_4283.f_408.f_1 = __LIB_0__::func_23();
	__LIB_6__::func_207(uParam1);
	__LIB_6__::func_221(&(uParam0->f_1590));
	if (uParam0->f_1644 != -1)
	{
		*(uParam1[uParam0->f_1644 /*8*/]) = { uParam0->f_1590 };
		(uParam1[uParam0->f_1644 /*8*/])->f_2 = 6;
		uParam0->f_1644 = -1;
	}
	__LIB_6__::func_208(uParam1);
	if (__LIB_0__::func_139(uParam0->f_1610))
	{
		__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
	{
		VOLUME::_DELETE_VOLUME(uParam0->f_1649);
	}
	__LIB_6__::func_559(1);
	__LIB_4__::func_353();
	__LIB_0__::func_769();
	__LIB_4__::func_226(1073741824 /* Float: 2f */);
	__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2097152);
	__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2048);
	__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 128);
	__LIB_5__::func_547(4);
	__LIB_6__::func_654(uParam0, uParam1);
	__LIB_1__::func_681(&(uParam0->f_1598), 32);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 0);
	PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 0);
	PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
	uParam0->f_1642 = 0;
	uParam0->f_1581 = 2;
}

void func_961(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	if (!bParam2 && !__LIB_0__::func_75(&(uParam0->f_1638)))
	{
		__LIB_1__::func_283(&(uParam0->f_1638), 1);
		GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		uParam0->f_1603 = { 0f, 0f, 0f };
		uParam0->f_1618 = 1;
		if (bParam3 && !__LIB_0__::func_296(0, 0, 1))
		{
			if (bParam4)
			{
				__LIB_1__::func_422("FINISH_CAMP_CHORE_CANCELED", 7500, 1, 0, 0, 0, -1, -1, 0);
			}
			else
			{
				__LIB_1__::func_422("FINISH_CAMP_CHORE_FAILED", 7500, 1, 0, 0, 0, -1, -1, 0);
			}
		}
		return;
	}
	if (uParam0->f_1618 && GRAPHICS::ANIMPOSTFX_IS_RUNNING("CamTransition01"))
	{
		uParam0->f_1627 = VOLUME::_CREATE_VOLUME_CYLINDER(Global_36, 0f, 0f, 0f, 1f, 1f, 3f);
		if (uParam0->f_1582.f_1 == 7)
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
		}
		uParam0->f_1615 = 0;
		TASK::_0x4161648394262FDF(__LIB_6__::func_590(&(uParam0->f_1582)), 0.05f);
		uParam0->f_1618 = 0;
		return;
	}
	if (bParam2)
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
		TASK::_0x4161648394262FDF(__LIB_6__::func_590(&(uParam0->f_1582)), 0.05f);
		TASK::CLEAR_PED_TASKS(Global_35, true, false);
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
		uParam0->f_1603 = { Global_36 };
	}
	if (bParam2 || (__LIB_0__::func_75(&(uParam0->f_1638)) && __LIB_1__::func_871(&(uParam0->f_1638)) > 2))
	{
		if (!uParam0->f_1615)
		{
			uParam0->f_1642 = 0;
			if (__LIB_0__::func_139(uParam0->f_1610))
			{
				__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
			}
			__LIB_6__::func_207(uParam1);
			if (uParam0->f_1643 != -1)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1582.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1582.f_4));
				}
				if (uParam0->f_1582.f_1 == 7)
				{
					__LIB_1__::func_206(Global_36, 3f, 0);
				}
				__LIB_6__::func_312(uParam1, &(uParam0->f_1582));
				__LIB_6__::func_221(&(uParam0->f_1582));
				(uParam1[uParam0->f_1643 /*8*/])->f_2 = 2;
				uParam0->f_1643 = -1;
			}
			if (__LIB_0__::func_27(uParam0->f_1598, 32) && uParam0->f_1644 != -1)
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_1590.f_4))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_1590.f_4));
				}
				__LIB_1__::func_681(&((uParam1[uParam0->f_1644 /*8*/])->f_3), 1);
				uParam0->f_1599 = 0;
				__LIB_1__::func_681(&(uParam0->f_1598), 32);
				TASK::_0x4161648394262FDF(__LIB_6__::func_590(&(uParam0->f_1590)), 0.05f);
				__LIB_6__::func_221(&(uParam0->f_1590));
				(uParam1[uParam0->f_1644 /*8*/])->f_2 = 2;
				__LIB_1__::func_683(&iVar0, 1798);
				__LIB_6__::func_558(uParam1, iVar0, 0);
				uParam0->f_1644 = -1;
			}
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
			{
				POPULATION::_0x74C2B3DC0B294102(uParam0->f_1649);
				POPULATION::_0xA1CFB35069D23C23(uParam0->f_1649);
				VOLUME::_DELETE_VOLUME(uParam0->f_1649);
			}
			__LIB_0__::func_769();
			__LIB_4__::func_226(1073741824 /* Float: 2f */);
			__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2097152);
			__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 2048);
			__LIB_6__::func_60(__LIB_5__::func_824(__LIB_0__::func_12()), 128);
			__LIB_5__::func_547(4);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 3, 2, 0);
			PLAYER::_0x0751D461F06E41CE(PLAYER::GET_PLAYER_INDEX(), 4, 2, 0);
			PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
			__LIB_6__::func_559(1);
			if (!bParam2)
			{
				TASK::_0xFDECCA06E8B81346(Global_35);
				PED::_0x2208438012482A1A(Global_35, false, true);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1627))
			{
				VOLUME::_DELETE_VOLUME(uParam0->f_1627);
			}
			uParam0->f_1615 = 1;
		}
		if (bParam2)
		{
			uParam0->f_1581 = -1;
			__LIB_0__::func_37(&(uParam0->f_1638));
			return;
		}
		if (uParam0->f_1615 && !bParam2)
		{
			if (!__LIB_5__::func_61(18, 6))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("PLAYER_CAMP_CHORES", false);
				uParam0->f_1581 = -1;
				__LIB_6__::func_207(uParam1);
				if (__LIB_0__::func_139(uParam0->f_1611))
				{
					__LIB_0__::func_629(__LIB_0__::func_17(uParam0->f_1611), 0);
				}
			}
			else
			{
				__LIB_6__::func_654(uParam0, uParam1);
			}
			__LIB_0__::func_37(&(uParam0->f_1638));
		}
	}
}

void func_962(var uParam0, var uParam1)
{
	switch (uParam0->f_1582.f_1)
	{
		case 4:
			__LIB_6__::func_639(uParam0, uParam1);
			break;
		case 0:
			__LIB_6__::func_640(uParam0, uParam1);
			break;
		case 1:
			__LIB_6__::func_641(uParam0, uParam1);
			break;
		case 9:
			__LIB_6__::func_642(uParam0, uParam1);
			break;
		case 5:
			__LIB_6__::func_643(uParam0, uParam1);
			break;
		case 6:
			__LIB_6__::func_644(uParam0, uParam1);
			break;
		case 7:
			__LIB_6__::func_568(uParam0, uParam1);
			break;
		case 2:
		case 3:
			__LIB_6__::func_229(uParam0, uParam1);
			break;
		case 10:
			__LIB_6__::func_229(uParam0, uParam1);
			break;
		case 14:
			__LIB_6__::func_642(uParam0, uParam1);
			break;
		case 8:
			__LIB_6__::func_230(uParam0, uParam1);
			break;
	}
}

bool func_963(var uParam0, var uParam1)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = uParam0->f_1642;
	vVar1 = { __LIB_6__::func_635(uParam1[iVar0 /*8*/]) };
	if (__LIB_6__::func_222(uParam1[iVar0 /*8*/], 2))
	{
		if (uParam0->f_1582.f_1 == (uParam1[iVar0 /*8*/])->f_1 && !__LIB_0__::func_86(vVar1))
		{
			if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
			{
				VOLUME::_0x39816F6F94F385AD(uParam0->f_1649, vVar1, 0f, 0f, 0f, 2f, 2f, 3f);
			}
			__LIB_6__::func_315(uParam0, uParam1, vVar1, iVar0, 408396114, joaat("BLIP_OBJECTIVE"), 0);
		}
		else if (MAP::DOES_BLIP_EXIST((uParam1[iVar0 /*8*/])->f_4))
		{
			MAP::REMOVE_BLIP(&((uParam1[iVar0 /*8*/])->f_4));
		}
	}
	uParam0->f_1642++;
	if (uParam0->f_1642 >= *uParam1)
	{
		uParam0->f_1606 = { 0f, 0f, 0f };
		uParam0->f_1609 = 0;
		uParam0->f_1642 = 0;
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
		{
			POPULATION::_0xB56D41A694E42E86(uParam0->f_1649, 10208, 0, 0, -1, -1, 0);
		}
		return true;
	}
	return false;
}

void func_964(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		vVar1 = { __LIB_6__::func_635(uParam0[iVar0 /*8*/]) };
		if (!__LIB_0__::func_86(vVar1))
		{
			TASK::_0x4161648394262FDF(vVar1, 0.05f);
		}
		iVar0++;
	}
}

int func_965()
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_6__::func_634(__LIB_0__::func_317()) };
	if (!__LIB_0__::func_296(0, 0, 1))
	{
		return 0;
	}
	if (__LIB_4__::func_635(1048576))
	{
		return 0;
	}
	if (__LIB_0__::func_592() != 1)
	{
		return 0;
	}
	if ((__LIB_1__::func_198(joaat("CSTAG_FLOW_FIRST_VISIT_MUD1_POST"), 1) || __LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1)) || __LIB_1__::func_198(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
	{
		return 0;
	}
	if (__LIB_5__::func_61(17, 21))
	{
		iVar3 = 5;
	}
	else if (__LIB_5__::func_61(5, 10))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = 0;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 10) > iVar3)
	{
		return 0;
	}
	if (CLOCK::GET_CLOCK_HOURS() < 5 || CLOCK::GET_CLOCK_HOURS() > 22)
	{
		return 0;
	}
	if (__LIB_1__::func_261(vVar0, 5f, 4, 0))
	{
		return 0;
	}
	__LIB_7__::func_140(300);
	return 1;
}

void func_966(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	if (bParam1 && STREAMING::_0xCF45DF50C7775F2A())
	{
		return;
	}
	Var2 = 9;
	Var2.f_1 = 12;
	Var2.f_1.f_13 = 12;
	Var2.f_1.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2.f_1.f_13.f_13.f_13.f_13.f_13.f_13.f_13.f_13 = 12;
	Var2[5 /*13*/][0] = __LIB_1__::func_976();
	Var2[5 /*13*/][1] = __LIB_1__::func_976();
	Var2[5 /*13*/][2] = __LIB_1__::func_976();
	Var2[5 /*13*/][3] = __LIB_1__::func_976();
	Var2[5 /*13*/][4] = __LIB_1__::func_976();
	Var2[5 /*13*/][5] = __LIB_1__::func_976();
	Var2[5 /*13*/][6] = __LIB_1__::func_976();
	Var2[5 /*13*/][7] = __LIB_1__::func_976();
	Var2[5 /*13*/][8] = __LIB_1__::func_976();
	Var2[5 /*13*/][9] = __LIB_1__::func_976();
	Var2[5 /*13*/][10] = __LIB_1__::func_976();
	Var2[5 /*13*/][11] = __LIB_1__::func_976();
	if (__LIB_1__::func_44(Global_1835011[59 /*74*/].f_1))
	{
		Var2[6 /*13*/][0] = __LIB_1__::func_976();
	}
	else
	{
		Var2[6 /*13*/][0] = -828094297;
	}
	Var2[6 /*13*/][1] = 1561231200;
	Var2[6 /*13*/][2] = -407402757;
	Var2[6 /*13*/][3] = -1849681615;
	Var2[6 /*13*/][4] = -981684452;
	Var2[6 /*13*/][5] = 1547347496;
	Var2[6 /*13*/][6] = -1966238128;
	if ((__LIB_0__::func_702(Global_1835011[58 /*74*/].f_1) || __LIB_1__::func_44(Global_1835011[58 /*74*/].f_1)) || __LIB_1__::func_25(Global_1835011[58 /*74*/].f_1, 1))
	{
		Var2[6 /*13*/][7] = __LIB_1__::func_976();
		if (STREAMING::_IS_IMAP_ACTIVE(-1437554707))
		{
			STREAMING::_REMOVE_IMAP(-1437554707);
		}
	}
	else
	{
		Var2[6 /*13*/][7] = -1437554707;
	}
	if (__LIB_1__::func_44(Global_1835011[58 /*74*/].f_1) || __LIB_0__::func_702(Global_1835011[58 /*74*/].f_1))
	{
		if (STREAMING::_IS_IMAP_ACTIVE(-1310355638))
		{
			STREAMING::_REMOVE_IMAP(-1310355638);
		}
		Var2[6 /*13*/][8] = 1387226336;
	}
	else
	{
		if (STREAMING::_IS_IMAP_ACTIVE(1387226336))
		{
			STREAMING::_REMOVE_IMAP(1387226336);
		}
		Var2[6 /*13*/][8] = -1310355638;
	}
	Var2[6 /*13*/][9] = -149795084;
	Var2[6 /*13*/][10] = -419935200;
	Var2[6 /*13*/][11] = -1496155572;
	Var2[0 /*13*/][0] = joaat("COL_01_CHIMNEY_SMOKE_EFFECT");
	Var2[0 /*13*/][1] = joaat("COL_02_CHIMNEY_SMOKE_EFFECT");
	Var2[0 /*13*/][2] = __LIB_1__::func_976();
	Var2[0 /*13*/][3] = __LIB_1__::func_976();
	Var2[0 /*13*/][4] = __LIB_1__::func_976();
	Var2[0 /*13*/][5] = __LIB_1__::func_976();
	Var2[0 /*13*/][6] = __LIB_1__::func_976();
	Var2[0 /*13*/][7] = __LIB_1__::func_976();
	Var2[0 /*13*/][8] = __LIB_1__::func_976();
	Var2[0 /*13*/][9] = __LIB_1__::func_976();
	Var2[0 /*13*/][10] = __LIB_1__::func_976();
	Var2[0 /*13*/][11] = __LIB_1__::func_976();
	Var2[2 /*13*/][0] = 1706275010;
	Var2[2 /*13*/][1] = joaat("DEWCLM_NORMAL_SEATS");
	Var2[2 /*13*/][2] = 1734859244;
	Var2[2 /*13*/][3] = 1309652195;
	Var2[2 /*13*/][4] = -1291679096;
	Var2[2 /*13*/][5] = 1676971154;
	Var2[2 /*13*/][6] = __LIB_6__::func_369();
	Var2[2 /*13*/][7] = -1841279810;
	Var2[2 /*13*/][8] = __LIB_6__::func_145();
	Var2[2 /*13*/][9] = __LIB_6__::func_146();
	Var2[2 /*13*/][10] = __LIB_6__::func_577();
	Var2[2 /*13*/][11] = __LIB_6__::func_578();
	Var2[4 /*13*/][0] = __LIB_1__::func_976();
	Var2[4 /*13*/][1] = __LIB_1__::func_976();
	Var2[4 /*13*/][2] = __LIB_1__::func_976();
	Var2[4 /*13*/][3] = __LIB_1__::func_976();
	Var2[4 /*13*/][4] = __LIB_1__::func_976();
	Var2[4 /*13*/][5] = __LIB_1__::func_976();
	Var2[4 /*13*/][6] = __LIB_1__::func_976();
	Var2[4 /*13*/][7] = __LIB_1__::func_976();
	Var2[4 /*13*/][8] = __LIB_1__::func_976();
	Var2[4 /*13*/][9] = __LIB_1__::func_976();
	Var2[4 /*13*/][10] = __LIB_1__::func_976();
	Var2[4 /*13*/][11] = __LIB_1__::func_976();
	Var2[1 /*13*/][0] = 288413571;
	Var2[1 /*13*/][1] = -441619793;
	Var2[1 /*13*/][2] = joaat("HSO_NORMAL_SEATS");
	Var2[1 /*13*/][3] = __LIB_6__::func_147();
	Var2[1 /*13*/][4] = -80564929;
	Var2[1 /*13*/][5] = -676881895;
	Var2[1 /*13*/][6] = -1445186253;
	Var2[1 /*13*/][7] = -1893724593;
	Var2[1 /*13*/][8] = __LIB_6__::func_579();
	Var2[1 /*13*/][9] = __LIB_6__::func_580();
	Var2[1 /*13*/][10] = __LIB_1__::func_976();
	Var2[1 /*13*/][11] = __LIB_1__::func_976();
	Var2[3 /*13*/][0] = 923572416;
	Var2[3 /*13*/][1] = joaat("SHB_NORMAL_SEATS");
	Var2[3 /*13*/][2] = -1828030290;
	Var2[3 /*13*/][3] = -960337247;
	Var2[3 /*13*/][4] = -299265919;
	Var2[3 /*13*/][5] = __LIB_1__::func_976();
	Var2[3 /*13*/][6] = __LIB_1__::func_976();
	Var2[3 /*13*/][7] = __LIB_1__::func_976();
	Var2[3 /*13*/][8] = __LIB_1__::func_976();
	Var2[3 /*13*/][9] = __LIB_1__::func_976();
	Var2[3 /*13*/][10] = __LIB_1__::func_976();
	Var2[3 /*13*/][11] = __LIB_1__::func_976();
	Var2[7 /*13*/][0] = __LIB_6__::func_97();
	Var2[7 /*13*/][1] = 764025611;
	Var2[7 /*13*/][2] = __LIB_1__::func_976();
	Var2[7 /*13*/][3] = __LIB_1__::func_976();
	Var2[7 /*13*/][4] = __LIB_1__::func_976();
	Var2[7 /*13*/][5] = __LIB_1__::func_976();
	Var2[7 /*13*/][6] = __LIB_1__::func_976();
	Var2[7 /*13*/][7] = __LIB_1__::func_976();
	Var2[7 /*13*/][8] = __LIB_1__::func_976();
	Var2[7 /*13*/][9] = __LIB_1__::func_976();
	Var2[7 /*13*/][10] = __LIB_1__::func_976();
	Var2[7 /*13*/][11] = __LIB_1__::func_976();
	Var2[8 /*13*/][0] = __LIB_1__::func_976();
	Var2[8 /*13*/][1] = __LIB_1__::func_976();
	Var2[8 /*13*/][2] = __LIB_1__::func_976();
	Var2[8 /*13*/][3] = __LIB_1__::func_976();
	Var2[8 /*13*/][4] = __LIB_1__::func_976();
	Var2[8 /*13*/][5] = __LIB_1__::func_976();
	Var2[8 /*13*/][6] = __LIB_1__::func_976();
	Var2[8 /*13*/][7] = __LIB_1__::func_976();
	Var2[8 /*13*/][8] = __LIB_1__::func_976();
	Var2[8 /*13*/][9] = __LIB_1__::func_976();
	Var2[8 /*13*/][10] = __LIB_1__::func_976();
	Var2[8 /*13*/][11] = __LIB_1__::func_976();
	if (iParam0 != 0)
	{
		__LIB_1__::func_408(-1170496998, 0, 0);
	}
	if (iParam0 == 7)
	{
		if (!__LIB_5__::func_886(2))
		{
			if (__LIB_0__::func_273(13, 4, 1))
			{
				__LIB_4__::func_524(128);
				__LIB_4__::func_495(126);
			}
			else
			{
				__LIB_4__::func_524(126);
				__LIB_4__::func_495(128);
			}
		}
		__LIB_4__::func_495(129);
	}
	else
	{
		__LIB_4__::func_524(127);
		__LIB_4__::func_524(126);
		__LIB_4__::func_524(128);
		__LIB_4__::func_524(129);
	}
	if (__LIB_1__::func_185(44))
	{
		__LIB_4__::func_495(28);
		__LIB_4__::func_524(27);
	}
	else
	{
		__LIB_4__::func_495(27);
		__LIB_4__::func_524(28);
	}
	__LIB_17__::func_946(1, bParam1);
	if (iParam0 == 3)
	{
		if (STREAMING::_IS_IMAP_ACTIVE(809554858))
		{
			STREAMING::_REMOVE_IMAP(809554858);
		}
		__LIB_4__::func_495(2);
		__LIB_4__::func_495(7);
		__LIB_4__::func_495(8);
		__LIB_4__::func_524(1);
	}
	else
	{
		__LIB_4__::func_524(2);
		__LIB_4__::func_524(7);
		__LIB_4__::func_524(8);
	}
	if (iParam0 == 3 && __LIB_6__::func_462(joaat("DOCUMENT_BOOK_HUNTING"), 1, 0) == 0)
	{
		__LIB_4__::func_495(10);
	}
	else
	{
		__LIB_4__::func_524(10);
	}
	if (iParam0 == 3 && __LIB_6__::func_462(joaat("DOCUMENT_BOOK_FORAGING"), 1, 0) == 0)
	{
		__LIB_4__::func_495(9);
	}
	else
	{
		__LIB_4__::func_524(9);
	}
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 4) || iParam0 == 7) || iParam0 == 8)
	{
		if (__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
		{
			__LIB_4__::func_495(4);
		}
	}
	else
	{
		__LIB_4__::func_524(4);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			if (Var2[iVar0 /*13*/][iVar1] != __LIB_1__::func_976())
			{
				if (iParam0 == iVar0 && __LIB_0__::func_592() == 1)
				{
					if (!STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
					{
						STREAMING::_REQUEST_IMAP(Var2[iVar0 /*13*/][iVar1]);
					}
				}
				else if (STREAMING::_IS_IMAP_ACTIVE(Var2[iVar0 /*13*/][iVar1]))
				{
					STREAMING::_REMOVE_IMAP(Var2[iVar0 /*13*/][iVar1]);
				}
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_967()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(Global_35, 16, 0, 0, 0, 0);
	}
	PLAYER::_0x8674D138391FFB1B(PLAYER::GET_PLAYER_INDEX(), 1);
	vVar2 = { __LIB_17__::func_950(__LIB_0__::func_317(), &uVar0, &uVar1) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_1__::func_954(0);
	__LIB_5__::func_116();
	__LIB_0__::func_320(6);
	__LIB_0__::func_319(4096);
	Global_1310720.f_6 = 1;
	Global_1310720.f_17 = 8;
	iVar5 = 0;
	while (iVar5 < 27)
	{
		iVar6 = __LIB_0__::func_271(iVar5);
		if (ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			PED::_0x06D26A96CA1BCA75(iVar6, 1, 0f, 0);
		}
		iVar5++;
	}
	__LIB_6__::func_179();
}

void func_968(float fParam0, float fParam1, float fParam2)
{
	__LIB_6__::func_435(fParam0, fParam1, fParam2);
	__LIB_6__::func_600(__LIB_5__::func_826());
	__LIB_6__::func_601(MONEY::_MONEY_GET_CASH_BALANCE());
}

void func_969(int* iParam0, var uParam1)
{
	vector3 vVar0;
	float fVar3;
	bool bVar4;
	vVar0 = { __LIB_5__::func_906(__LIB_5__::func_846()) };
	fVar3 = 5f;
	if (__LIB_0__::func_86(vVar0))
	{
		return;
	}
	if ((__LIB_0__::func_293(26) == 0 || __LIB_2__::func_776()) && !__LIB_4__::func_635(8))
	{
		__LIB_6__::func_359(iParam0);
		return;
	}
	if (__LIB_1__::func_198(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT_ACTIVE"), 1))
	{
		__LIB_6__::func_359(iParam0);
		return;
	}
	if (__LIB_0__::func_592() != 1)
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(*iParam0) && !__LIB_6__::func_126())
	{
		if (!__LIB_4__::func_635(8))
		{
			*iParam0 = MAP::_BLIP_ADD_FOR_COORD(joaat("BLIP_STYLE_SHOP"), vVar0);
			MAP::_BLIP_SET_MODIFIER(*iParam0, 1046501997);
			MAP::SET_BLIP_SPRITE(*iParam0, joaat("BLIP_AMBIENT_TITHING"), true);
			MAP::SET_BLIP_FLASH_TIMER(*iParam0, 66, -1);
			__LIB_5__::func_794(*iParam0, __LIB_0__::func_61());
		}
	}
	__LIB_17__::func_951(iParam0, uParam1);
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0->f_863))
	{
		if ((CLOCK::GET_CLOCK_SECONDS() % 15) == 0)
		{
			iParam0->f_863 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vVar0, joaat("PROP_PLAYER_OPEN_CASHBOX"), fVar3, 1, false);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
	{
		STREAMING::REQUEST_MODEL(joaat("P_MONEYSTACK01X"), false);
		if (STREAMING::HAS_MODEL_LOADED(joaat("P_MONEYSTACK01X")))
		{
			iParam0->f_866 = TASK::_GET_ENTITY_SCENARIO_POINT_IS_ATTACHED_TO(iParam0->f_863);
			__LIB_6__::func_214(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_866))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iParam0->f_866, true);
			}
		}
		return;
	}
	if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iParam0->f_863) || __LIB_4__::func_635(67108864))
	{
		return;
	}
	if (iParam0->f_856 == 0)
	{
		if (__LIB_4__::func_635(8192) == 0)
		{
			if (!__LIB_0__::func_139(iParam0->f_1))
			{
				if (Global_1357549.f_1672 == 0)
				{
					iParam0->f_1 = __LIB_1__::func_282("GIVE_TITHE", joaat("INPUT_CONTEXT_Y"), __LIB_5__::func_907(__LIB_5__::func_846()), __LIB_5__::func_908(), 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_4__::func_12(iParam0->f_1, 736625733, 0, 1);
				}
				else if (__LIB_5__::func_909())
				{
					iParam0->f_1 = __LIB_1__::func_282("ITEM_TITHE", joaat("INPUT_CONTEXT_Y"), __LIB_5__::func_907(__LIB_5__::func_846()), __LIB_5__::func_908(), 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_484(iParam0->f_1, "MONEY_LOANSHARK_ALL_DEBTS", 1);
					__LIB_4__::func_12(iParam0->f_1, 736625733, 0, 1);
				}
				else
				{
					iParam0->f_1 = __LIB_1__::func_282("ITEM_TITHE", joaat("INPUT_CONTEXT_Y"), __LIB_5__::func_907(__LIB_5__::func_846()), __LIB_5__::func_908(), 3, 1, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_5__::func_776(iParam0->f_1, "ITEM_TITHE", __LIB_0__::func_776(Global_1357549.f_1672), 1);
					__LIB_4__::func_12(iParam0->f_1, 736625733, 0, 1);
				}
			}
		}
	}
	if (__LIB_0__::func_94(Global_35, __LIB_5__::func_907(__LIB_5__::func_846()), 1) <= (__LIB_5__::func_908() + 0.25f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 736625733, __LIB_5__::func_910(), 0);
	}
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		bVar4 = false;
		if ((((__LIB_6__::func_298() || __LIB_3__::func_26()) || PED::_IS_PED_CARRYING(Global_35)) || __LIB_3__::func_417(Global_35)) || __LIB_5__::func_911())
		{
			bVar4 = true;
		}
		if (__LIB_0__::func_139(iParam0->f_1))
		{
			__LIB_5__::func_793(iParam0->f_1, bVar4);
		}
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			__LIB_5__::func_793(iParam0->f_6, bVar4);
		}
	}
	if (iParam0->f_856)
	{
		if (__LIB_0__::func_139(iParam0->f_855) == 0)
		{
			iParam0->f_855 = __LIB_2__::func_512("BACK_TITHE", joaat("INPUT_GAME_MENU_CANCEL"), Global_35, 1, 0, 0, 0, 0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
		}
		else if (__LIB_1__::func_732(iParam0->f_855, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND("Back", "HUD_Camp_Status_Sounds", true, 0);
			__LIB_1__::func_748(&(iParam0->f_855), 1, 1);
			__LIB_1__::func_748(&(iParam0->f_883), 1, 1);
			__LIB_1__::func_748(&(iParam0->f_884), 1, 1);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			iParam0->f_856 = 0;
		}
	}
	if (__LIB_5__::func_777(iParam0->f_1, 1) || iParam0->f_2 == 1)
	{
		iParam0->f_2 = 1;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
		if (__LIB_0__::func_139(iParam0->f_1))
		{
			__LIB_1__::func_382(iParam0->f_1, 0, 1);
		}
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			__LIB_1__::func_382(iParam0->f_6, 0, 1);
		}
		if (__LIB_0__::func_75(&(iParam0->f_870)) == 0)
		{
			__LIB_1__::func_283(&(iParam0->f_870), 0);
		}
		if (((__LIB_0__::func_399(Global_35, 1, 0, 0) == joaat("WEAPON_UNARMED") && __LIB_0__::func_399(Global_35, 0, 1, 0) == joaat("WEAPON_UNARMED")) && __LIB_5__::func_912() == 0) && PED::_IS_PED_CARRYING(Global_35) == 0)
		{
			if (PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iParam0->f_863) == 0)
			{
				if (__LIB_0__::func_265(&(iParam0->f_870)) > 0f)
				{
					__LIB_0__::func_326(8192);
					TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
					AUDIO::PLAY_SOUND_FRONTEND("Give_To_Gang", "HUD_Donate_Sounds", true, 0);
					__LIB_6__::func_423(iParam0);
					iParam0->f_2 = 0;
					__LIB_5__::func_812(128);
					__LIB_6__::func_359(iParam0);
				}
			}
		}
		else
		{
			WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
			__LIB_0__::func_268(&(iParam0->f_870), -0.75f);
		}
	}
}

void func_970(var uParam0, var uParam1)
{
	if (uParam0->f_1614)
	{
		return;
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		if (uParam0->f_1582.f_2 > 2 && uParam0->f_1582.f_2 < 5)
		{
			if (TASK::_0x0C3CB2E600C8977D(Global_35, 0) && PED::_IS_PED_USING_SCENARIO_HASH(Global_35, uParam0->f_1582))
			{
				if (uParam0->f_1582.f_2 == 4)
				{
					uParam0->f_1600 = { TASK::_GET_SCENARIO_POINT_COORDS(TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false), true) };
					if (!__LIB_6__::func_226(&(uParam0->f_1582)))
					{
						uParam0->f_1582.f_2 = 5;
						__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
					}
					else
					{
						uParam0->f_1582.f_2 = 0;
						__LIB_1__::func_683(&(uParam0->f_1598), 32);
						(uParam1[uParam0->f_1643 /*8*/])->f_2 = 0;
						uParam0->f_1590 = { uParam0->f_1582 };
						uParam0->f_1644 = uParam0->f_1643;
						__LIB_6__::func_221(&(uParam0->f_1582));
						uParam0->f_1643 = -1;
						uParam0->f_1581 = 3;
						return;
					}
				}
			}
		}
		if (__LIB_1__::func_533(4) && __LIB_0__::func_62(Global_36, uParam0->f_1646) > 10000f)
		{
			uParam0->f_1581 = 11;
			__LIB_17__::func_961(uParam0, uParam1, 0, 1, 1);
			return;
		}
		if (__LIB_0__::func_27(uParam0->f_1598, 32))
		{
			if ((!__LIB_6__::func_297() && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !TASK::_0x0C3CB2E600C8977D(Global_35, 0))
			{
				uParam0->f_1581 = 11;
				__LIB_17__::func_961(uParam0, uParam1, 0, 1, 1);
			}
			if (uParam0->f_1582.f_2 == 5 && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			{
				uParam0->f_1581 = 14;
				return;
			}
		}
		else if (uParam0->f_1581 > 4)
		{
			if (!__LIB_6__::func_297() && !PED::IS_PED_USING_ANY_SCENARIO(Global_35))
			{
				if (uParam0->f_1582.f_2 == 5)
				{
					uParam0->f_1581 = 14;
				}
				else
				{
					uParam0->f_1581 = 11;
					__LIB_17__::func_961(uParam0, uParam1, 0, 1, 1);
				}
			}
		}
	}
}

void func_971(var uParam0, var uParam1)
{
	if (uParam0->f_1582.f_2 > 0 || __LIB_0__::func_27(uParam0->f_1598, 32))
	{
		if (__LIB_0__::func_567(uParam0->f_1610, 1))
		{
			if (__LIB_0__::func_139(uParam0->f_1610))
			{
				__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
			}
			if (__LIB_0__::func_139(uParam0->f_1610))
			{
				__LIB_1__::func_515(uParam0->f_1610, 1);
			}
			uParam0->f_1581 = 11;
			__LIB_17__::func_961(uParam0, uParam1, 0, 1, 1);
		}
	}
}

void func_972(var uParam0, var uParam1)
{
	__LIB_6__::func_553(uParam1);
	if (__LIB_1__::func_533(4))
	{
		__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
		uParam0->f_1581 = 11;
		__LIB_17__::func_961(uParam0, uParam1, 1, 1, 0);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1616))
	{
		TASK::_DELETE_SCENARIO_POINT(uParam0->f_1616);
	}
	GRAPHICS::_0x37D7BDBA89F13959("CamTransition01");
	uParam0->f_1581 = 0;
}

void func_973(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar0 = 0;
	iVar1 = 0;
	if (__LIB_0__::func_27(uParam0->f_1598, 32))
	{
		return;
	}
	__LIB_6__::func_559(1);
	if (!__LIB_0__::func_27(uParam0->f_1598, 1))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_BASE_CHORES", true);
		__LIB_6__::func_313(&iVar0, 331);
		__LIB_1__::func_683(&(uParam0->f_1598), 1);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 128) && !__LIB_0__::func_27(uParam0->f_1598, 8))
	{
		vVar2 = -1;
		vVar2.f_1 = -1;
		vVar2.f_2 = -1;
		__LIB_1__::func_65(21, &vVar2, 1);
		__LIB_1__::func_806(&vVar2, 1, 1);
		__LIB_1__::func_683(&(uParam0->f_1598), 8);
	}
	else if (!__LIB_0__::func_27(uParam0->f_1598, 128) && __LIB_0__::func_27(uParam0->f_1598, 8))
	{
		__LIB_9__::func_420(21, 1);
		__LIB_1__::func_681(&(uParam0->f_1598), 8);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 256) && !__LIB_0__::func_27(uParam0->f_1598, 16))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_MILK_CHORES", true);
		__LIB_6__::func_313(&iVar0, 16);
		__LIB_1__::func_683(&(uParam0->f_1598), 16);
	}
	else if (!__LIB_0__::func_27(uParam0->f_1598, 256) && __LIB_0__::func_27(uParam0->f_1598, 16))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_MILK_CHORES", false);
		__LIB_6__::func_313(&iVar1, 16);
		__LIB_1__::func_681(&(uParam0->f_1598), 16);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 512) && !__LIB_0__::func_27(uParam0->f_1598, 2))
	{
		__LIB_6__::func_313(&iVar0, 16384);
		__LIB_1__::func_683(&(uParam0->f_1598), 2);
	}
	else if (!__LIB_0__::func_27(uParam0->f_1598, 512) && __LIB_0__::func_27(uParam0->f_1598, 2))
	{
		__LIB_6__::func_313(&iVar1, 16384);
		__LIB_1__::func_681(&(uParam0->f_1598), 2);
	}
	if (__LIB_0__::func_27(uParam0->f_1598, 64) && !__LIB_0__::func_27(uParam0->f_1598, 4))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_EGGS_CHORES", true);
		__LIB_6__::func_313(&iVar0, 32);
		__LIB_1__::func_683(&(uParam0->f_1598), 4);
	}
	else if (!__LIB_0__::func_27(uParam0->f_1598, 64) && __LIB_0__::func_27(uParam0->f_1598, 4))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("BCH_GATHER_EGGS_CHORES", false);
		__LIB_6__::func_313(&iVar1, 32);
		__LIB_1__::func_681(&(uParam0->f_1598), 4);
	}
	if (iVar0 != 0)
	{
		__LIB_6__::func_558(uParam1, iVar0, 1);
	}
	if (iVar1 != 0)
	{
		__LIB_6__::func_558(uParam1, iVar1, 0);
	}
}

void func_974(var uParam0, var uParam1)
{
	vector3 vVar0;
	if ((!TASK::_0x0C3CB2E600C8977D(Global_35, 0) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) && !__LIB_0__::func_163(Global_35, -76381094))
	{
		vVar0 = { __LIB_6__::func_234() };
		uParam0->f_1582.f_2 = 5;
		uParam0->f_1614 = 1;
		if (!__LIB_0__::func_86(vVar0))
		{
			uParam0->f_1616 = TASK::CREATE_SCENARIO_POINT(__LIB_6__::func_232(&(uParam0->f_1590)), __LIB_6__::func_234(), __LIB_6__::func_235(), 0, 0, 0);
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0->f_1616, 0, 0, true, false, 0, false, -1f, false);
		}
		else
		{
			uParam0->f_1616 = TASK::CREATE_SCENARIO_POINT(__LIB_6__::func_232(&(uParam0->f_1590)), Global_36, (ENTITY::GET_ENTITY_HEADING(Global_35) - 90f), 0, 0, 0);
			TASK::_TASK_USE_SCENARIO_POINT(Global_35, uParam0->f_1616, 0, 0, true, false, 0, false, -1f, false);
		}
		if (__LIB_0__::func_139(uParam0->f_1610))
		{
			__LIB_1__::func_748(&(uParam0->f_1610), 1, 1);
		}
	}
	if ((__LIB_0__::func_163(Global_35, 993674639) || __LIB_0__::func_163(Global_35, -76381094)) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
	}
	if ((TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1616) && PED::_IS_PED_USING_SCENARIO_POINT(Global_35, uParam0->f_1616)) && TASK::_0x0C3CB2E600C8977D(Global_35, 0))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_4__::func_353();
		__LIB_0__::func_769();
		__LIB_17__::func_960(uParam0, uParam1);
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_1649))
		{
			VOLUME::_DELETE_VOLUME(uParam0->f_1649);
		}
		uParam0->f_1614 = 0;
	}
}

void func_975(var uParam0, var uParam1)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!MISC::IS_BIT_SET(Global_40.f_4283.f_408, iVar0))
		{
		}
		else
		{
			uParam0->f_1630++;
			if ((uParam1[iVar0 /*8*/])->f_1 == 8)
			{
				uParam0->f_1630.f_1++;
			}
			if ((uParam1[iVar0 /*8*/])->f_1 == 6)
			{
				uParam0->f_1630.f_3++;
				Global_40.f_4283.f_408.f_3 = (Global_40.f_4283.f_408.f_3 + 0.25f);
			}
			if ((uParam1[iVar0 /*8*/])->f_1 == 5)
			{
				uParam0->f_1630.f_2++;
				Global_40.f_4283.f_408.f_2 = (Global_40.f_4283.f_408.f_2 + 0.25f);
			}
			if ((uParam1[iVar0 /*8*/])->f_1 == 4)
			{
				uParam0->f_1630.f_4++;
			}
			(uParam1[iVar0 /*8*/])->f_2 = 6;
		}
		iVar0++;
	}
	if ((uParam0->f_1630.f_2 > 0 || uParam0->f_1630.f_3 > 0) && !__LIB_5__::func_904(262144))
	{
		__LIB_1__::func_683(&(uParam0->f_1598), 524288);
	}
	if (uParam0->f_1630.f_2 >= 2)
	{
		__LIB_1__::func_683(&(uParam0->f_1598), 1048576);
	}
	if (uParam0->f_1630.f_3 >= 2)
	{
		__LIB_1__::func_683(&(uParam0->f_1598), 2097152);
	}
	if (Global_40.f_4283.f_408.f_5 >= 2)
	{
		__LIB_1__::func_683(&(uParam0->f_1598), 256);
		__LIB_5__::func_547(268435456);
	}
	if (Global_40.f_4283.f_408.f_6)
	{
		__LIB_5__::func_547(134217728);
		__LIB_9__::func_420(3, 1);
	}
}

void func_976(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	uParam0->f_1630 = 0;
	uParam0->f_1630.f_1 = 0;
	uParam0->f_1598 = 0;
	Global_40.f_4283.f_408.f_6 = 0;
	Global_40.f_4283.f_408.f_5 = 0;
	Global_40.f_4283.f_408 = 0;
	__LIB_5__::func_937(262144);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1619[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_1619[iVar0]));
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	Global_1899848.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(4, 6);
	__LIB_1__::func_65(3, &vVar1, 1);
	__LIB_1__::func_806(&vVar1, 1, 1);
	__LIB_9__::func_420(21, 1);
}

void func_977()
{
	if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DEBT_COLLECTED"), 1))
	{
		if (!__LIB_5__::func_886(8))
		{
			if ((AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_COLLECTED_CONV1") || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_COLLECTED_CONV2")) || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_COLLECTED_CONV3"))
			{
				__LIB_6__::func_799(joaat("CGO_DEBT_COLLECTED_GREETS_PLAYER"));
				__LIB_6__::func_793(18, joaat("CGO_DEBT_COLLECTED_STRAUSS"));
				__LIB_6__::func_549(8);
			}
		}
	}
	if (__LIB_1__::func_198(joaat("CSTAG_FLOW_DEBT_CONTRIBUTED"), 1))
	{
		if (!__LIB_5__::func_886(16))
		{
			if ((((AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV1") || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV2")) || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV3")) || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV4")) || AUDIO::_0x6BFFB7C276866996(Global_35) == joaat("GREET_STRAUSS_CLOSER_DEBT_CONTRIBUTED_CONV5"))
			{
				__LIB_6__::func_799(joaat("CGO_DEBT_CONTRIBUTED_GREETS_PLAYER"));
				__LIB_6__::func_793(18, joaat("CGO_DEBT_CONTRIBUTED_STRAUSS"));
				__LIB_6__::func_549(16);
			}
		}
	}
}

void func_978(int* iParam0, var uParam1)
{
	if (__LIB_5__::func_842())
	{
		__LIB_5__::func_843(iParam0);
		__LIB_5__::func_844(0, 0);
		__LIB_5__::func_845();
	}
	__LIB_6__::func_595(iParam0);
	__LIB_17__::func_969(iParam0, uParam1);
	__LIB_6__::func_536(iParam0);
	__LIB_6__::func_353(iParam0, uParam1);
	if (!__LIB_5__::func_847(__LIB_5__::func_846()))
	{
		return;
	}
	__LIB_6__::func_127(iParam0);
}

bool func_979(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (__LIB_6__::func_625(iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (__LIB_4__::func_933(iParam4))
	{
		if (__LIB_6__::func_685(iParam1, iParam2, iParam3, 1))
		{
			__LIB_2__::func_811(uParam0, 4);
			return true;
		}
	}
	return false;
}

void func_980(int iParam0, int iParam1, var uParam2, char* sParam3, float fParam4, bool bParam5, var uParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11)
{
	float fVar0;
	float fVar1;
	int iVar2;
	if (fParam4 <= 1.25f && __LIB_1__::func_652())
	{
		fVar1 = 15f;
		fVar0 = 20f;
	}
	else
	{
		fVar1 = 25f;
		fVar0 = 35f;
	}
	if (bParam10)
	{
		iVar2 = 25610;
	}
	else
	{
		iVar2 = 25602;
	}
	if (__LIB_0__::func_407(iParam0) && __LIB_1__::func_679(iParam0))
	{
		__LIB_1__::func_640(__LIB_4__::func_656(iParam0));
	}
	if (iParam1 != 0)
	{
		if (__LIB_0__::func_407(iParam1) && __LIB_1__::func_679(iParam1))
		{
			__LIB_1__::func_640(__LIB_4__::func_656(iParam1));
		}
	}
	if (!*bParam5)
	{
		__LIB_1__::func_714();
		__LIB_3__::func_456(iParam0);
		if (iParam1 != 0)
		{
			__LIB_3__::func_456(iParam1);
		}
		if (!PED::DOES_GROUP_EXIST(*uParam2))
		{
			*uParam2 = PED::CREATE_GROUP(2);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
		PED::SET_PED_CONFIG_FLAG(iParam0, 279, true);
		PED::SET_PED_AS_GROUP_LEADER(iParam0, *uParam2, false);
		if (iParam1 != 0)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam1, true);
			PED::SET_PED_CONFIG_FLAG(iParam1, 279, true);
			PED::SET_PED_AS_GROUP_MEMBER(iParam1, *uParam2);
		}
		PED::SET_GROUP_FORMATION(*uParam2, iParam8);
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam3, iParam9, iVar2, -1, 0, 0, -1);
		PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::PLAYER_ID(), iParam0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 4, 2, 0);
		PLAYER::_0xDD33A82352C4652F(PLAYER::PLAYER_ID(), iParam0, 1);
		*bParam5 = 1;
	}
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam0, 0))
		{
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam0, sParam3, iParam9, 25610, -1, 0, 0, -1);
			}
		}
		else
		{
			__LIB_6__::func_713(iParam0, fParam4, 0, 1045220557 /* Float: 0.2f */, 1, 1077936128 /* Float: 3f */, fVar1, fVar0, 1033476506 /* Float: 0.075f */, 1061158912 /* Float: 0.75f */, 1, 1, 1045220557 /* Float: 0.2f */, iParam11);
		}
	}
	if (iParam1 != 0)
	{
		if (__LIB_0__::func_272(iParam1, 0))
		{
			if (!*uParam6)
			{
				if (__LIB_0__::func_665(iParam1, iParam0, 1, 1) > 50f || (bParam7 && __LIB_0__::func_665(iParam1, iParam0, 1, 1) > 10f))
				{
					*uParam6 = 1;
				}
			}
			else
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iParam1, 0))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iParam1, sParam3, 0, 8, -1, 0, 0, -1);
				}
				else
				{
					__LIB_6__::func_808(iParam1, 2.5f);
				}
				if (__LIB_0__::func_665(iParam1, iParam0, 1, 1) < 12f)
				{
					if (!bParam7)
					{
						TASK::CLEAR_PED_TASKS(iParam1, true, false);
						PED::SET_PED_CONFIG_FLAG(iParam1, 279, true);
						PED::SET_PED_AS_GROUP_MEMBER(iParam1, PED::GET_PED_GROUP_INDEX(iParam0));
						*uParam6 = 0;
					}
				}
			}
		}
	}
}

void func_981(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	char[] cVar0[8];
	Global_1572864.f_8 = iParam0;
	Global_1572864.f_9 = iParam9;
	Global_1572864.f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (__LIB_0__::func_700(iParam0) == 1)
	{
		cVar0 = __LIB_0__::func_631(__LIB_0__::func_909(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	else if (__LIB_0__::func_700(iParam0) == 8)
	{
		cVar0 = __LIB_0__::func_632(__LIB_0__::func_957(iParam0));
		TELEMETRY::_TELEMETRY_MISSION_CHECKPOINT(&cVar0, 0, Global_1572864.f_9);
	}
	__LIB_9__::func_786(1, 1);
	__LIB_1__::func_617(1, Param1, Param1.f_3);
	Global_1347394 = { Param5 };
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_303(1f);
}

void func_982(vector3 vParam0, float fParam3, var uParam4, float fParam5)
{
	if (__LIB_0__::func_86(vParam0))
	{
		return;
	}
	if (BUILTIN::VDIST2(Global_36, vParam0) <= (fParam3 * fParam3))
	{
		__LIB_6__::func_828(uParam4, fParam5);
	}
}

void func_983()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		__LIB_6__::func_700();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		__LIB_3__::func_427(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

void func_984(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_804, false)) || ANIMSCENE::_0xEF324E9550A394D5(uParam0->f_804)) || __LIB_0__::func_84(uParam0, 512))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	if ((__LIB_4__::func_988(uParam0, Global_35, 4) || (ANIMSCENE::_0x6F1F0B17109309DA(uParam0->f_804, __LIB_0__::func_731(Global_35)) && ANIMSCENE::_0xB89FCFF19DAFFF28(uParam0->f_804, __LIB_0__::func_731(Global_35)))) || !ANIMSCENE::_0x4B85B3CF91972222(uParam0->f_804))
	{
		if (!__LIB_0__::func_1(uParam0->f_861, 128))
		{
			__LIB_1__::func_625();
		}
		return;
	}
	bVar0 = true;
	iVar1 = UIFEED::_0xC17F69E1418CD11F(9);
	if (iVar1 != 0)
	{
		if (__LIB_0__::func_269(iVar1))
		{
			if (__LIB_0__::func_572(Global_43801, 0))
			{
				bVar0 = false;
			}
		}
	}
	bVar2 = false;
	if (__LIB_0__::func_1(uParam0->f_861, 512))
	{
		bVar2 = true;
	}
	if (__LIB_8__::func_356(bVar0, bVar2))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam0->f_804);
		__LIB_1__::func_625();
	}
}

void func_985(var uParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_6__::func_952(uParam0, iParam1)))
	{
		__LIB_3__::func_459(__LIB_6__::func_952(uParam0, iParam1), 0);
		ENTITY::_0x18FF3110CF47115D(__LIB_6__::func_952(uParam0, iParam1), 7, 0);
		PED::SET_PED_CONFIG_FLAG(__LIB_6__::func_952(uParam0, iParam1), 243, true);
		PED::SET_PED_CONFIG_FLAG(__LIB_6__::func_952(uParam0, iParam1), 385, true);
		AUDIO::DISABLE_PED_PAIN_AUDIO(__LIB_6__::func_952(uParam0, iParam1), true);
		AUDIO::STOP_PED_SPEAKING(__LIB_6__::func_952(uParam0, iParam1), true);
	}
}

bool func_986(var uParam0)
{
	if (!__LIB_7__::func_97(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_111(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_987(var uParam0)
{
	if (!__LIB_7__::func_132(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_112(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_988(var uParam0)
{
	if (!__LIB_7__::func_133(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_112(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_989(var uParam0)
{
	if (!__LIB_7__::func_138(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_111(uParam0))
	{
		return false;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	return true;
}

bool func_990(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(iLocal_51))
	{
		MAP::REMOVE_BLIP(&iLocal_51);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_95))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_95);
	}
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_18)) && bLocal_58)
	{
		MISC::_0xE98D55C5983F2509(__LIB_6__::func_952(uParam0, iLocal_18));
		bLocal_58 = false;
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_63))
	{
		CAM::_0x798BE43C9393632B(&Local_63);
	}
	__LIB_7__::func_205();
	__LIB_7__::func_191(uParam0, &uLocal_99);
	__LIB_1__::func_281(&iLocal_54, 1, 1);
	__LIB_1__::func_281(&iLocal_52, 1, 1);
	__LIB_1__::func_281(&iLocal_53, 1, 1);
	return true;
}

bool func_991(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_177(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_215(uParam0))
	{
		return false;
	}
	return true;
}

bool func_992(var uParam0)
{
	__LIB_1__::func_221(iLocal_52, 0, 1);
	__LIB_1__::func_221(iLocal_53, 0, 1);
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_7__::func_184()) == __LIB_6__::func_952(uParam0, iLocal_18))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		return false;
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_51))
	{
		if (__LIB_0__::func_232(__LIB_6__::func_952(uParam0, iLocal_18), Global_35, 1) <= 225f)
		{
			iLocal_51 = MAP::_BLIP_ADD_FOR_COORD(-678244495, ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_952(uParam0, iLocal_18), true, false));
			MAP::SET_BLIP_SPRITE(iLocal_51, joaat("BLIP_AMBIENT_SECRET"), true);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_95))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_7__::func_30(uParam0, iLocal_39)))
		{
			iLocal_95 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(__LIB_7__::func_30(uParam0, iLocal_39), joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC"), 0f, 0f, 0.5f, -180f, 0, 0, 0);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_95, 23, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_95, 25, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_95, 8, true);
		}
		return false;
	}
	if (__LIB_7__::func_163(uParam0, Local_40, 1, 0))
	{
		__LIB_7__::func_173(uParam0, iLocal_21, 1);
		__LIB_7__::func_183(uParam0, iLocal_26, 1);
		__LIB_7__::func_206(1);
		return true;
	}
	return false;
}

void func_993(var uParam0)
{
	if ((Global_36.f_2 - fLocal_24) <= 0.67f)
	{
		__LIB_7__::func_208();
	}
	if (iLocal_94 == 0)
	{
		if (__LIB_7__::func_148(uParam0, iLocal_20))
		{
			if (!__LIB_7__::func_169(uParam0, iLocal_23))
			{
				__LIB_7__::func_173(uParam0, iLocal_23, 0);
				__LIB_7__::func_183(uParam0, iLocal_28, 1);
				__LIB_7__::func_209(uParam0, &uLocal_99);
			}
		}
		if (__LIB_7__::func_169(uParam0, iLocal_23) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
		{
			__LIB_7__::func_173(uParam0, iLocal_22, 0);
			__LIB_7__::func_183(uParam0, iLocal_25, 1);
			__LIB_7__::func_203(&uLocal_99);
			bLocal_62 = false;
		}
		if (__LIB_7__::func_148(uParam0, iLocal_22))
		{
			__LIB_7__::func_173(uParam0, iLocal_20, 0);
			iLocal_37++;
			__LIB_7__::func_183(uParam0, iLocal_37, 1);
			__LIB_7__::func_188(&uLocal_99, iLocal_37, iLocal_30);
			__LIB_7__::func_210(uParam0, &uLocal_99);
			__LIB_7__::func_211(uParam0, &uLocal_99);
			__LIB_7__::func_206(5);
		}
	}
	else
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && !__LIB_7__::func_169(uParam0, iLocal_22))
		{
			__LIB_7__::func_173(uParam0, iLocal_22, 0);
			__LIB_7__::func_183(uParam0, iLocal_25, 1);
			__LIB_7__::func_203(&uLocal_99);
			bLocal_62 = false;
		}
		if (__LIB_7__::func_148(uParam0, iLocal_22) || ANIMSCENE::_0x1F0E401031E20146(__LIB_7__::func_185(uParam0, iLocal_22), __LIB_7__::func_200(uParam0, iLocal_29)))
		{
			if (bLocal_56)
			{
				bLocal_55 = false;
				bLocal_56 = false;
				__LIB_7__::func_211(uParam0, &uLocal_99);
			}
			iLocal_37++;
			__LIB_7__::func_173(uParam0, iLocal_20, 0);
			__LIB_7__::func_183(uParam0, iLocal_37, 1);
			__LIB_7__::func_188(&uLocal_99, iLocal_37, iLocal_30);
			__LIB_7__::func_210(uParam0, &uLocal_99);
			__LIB_7__::func_211(uParam0, &uLocal_99);
			__LIB_7__::func_206(5);
		}
	}
}

void func_994(var uParam0)
{
	if ((!__LIB_0__::func_139(iLocal_54) && !bLocal_55) && iLocal_37 < iLocal_31)
	{
		iLocal_54 = __LIB_2__::func_403("VIG_LEAVE_CONVERSATION", joaat("INPUT_GAME_MENU_CANCEL"), __LIB_6__::func_952(uParam0, iLocal_18), 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	}
	if (__LIB_1__::func_732(iLocal_54, 1))
	{
		__LIB_1__::func_281(&iLocal_54, 1, 1);
		bLocal_55 = true;
		iLocal_94++;
	}
	if (iLocal_37 >= iLocal_31)
	{
		bLocal_57 = true;
	}
	if (__LIB_7__::func_148(uParam0, iLocal_20))
	{
		if (bLocal_55)
		{
			__LIB_7__::func_173(uParam0, iLocal_23, 0);
			__LIB_7__::func_183(uParam0, iLocal_32, 1);
			__LIB_7__::func_173(uParam0, iLocal_22, 0);
			__LIB_7__::func_183(uParam0, iLocal_35, 1);
			__LIB_7__::func_209(uParam0, &uLocal_99);
			__LIB_7__::func_206(7);
		}
		else if (bLocal_57)
		{
			__LIB_7__::func_173(uParam0, iLocal_22, 0);
			__LIB_7__::func_183(uParam0, iLocal_36, 1);
			__LIB_1__::func_281(&iLocal_54, 1, 1);
			if (!__LIB_7__::func_183(uParam0, iLocal_36, 1))
			{
			}
			__LIB_7__::func_113(uParam0, iLocal_18, 1, 1);
			__LIB_7__::func_206(8);
		}
		else
		{
			__LIB_7__::func_189(uParam0, iLocal_37);
			iLocal_37++;
			__LIB_7__::func_183(uParam0, iLocal_37, 1);
			if (iLocal_30 < iLocal_31)
			{
				iLocal_30++;
				__LIB_7__::func_201(uParam0, iLocal_30);
			}
			if (iLocal_37 >= iLocal_31)
			{
				__LIB_1__::func_221(iLocal_54, 0, 1);
			}
			__LIB_7__::func_188(&uLocal_99, iLocal_37, iLocal_30);
		}
	}
}

bool func_995(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(iLocal_50))
	{
		MAP::REMOVE_BLIP(&iLocal_50);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_94))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_94);
	}
	if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_952(uParam0, iLocal_18)) && bLocal_57)
	{
		MISC::_0xE98D55C5983F2509(__LIB_6__::func_952(uParam0, iLocal_18));
		bLocal_57 = false;
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_62))
	{
		CAM::_0x798BE43C9393632B(&Local_62);
	}
	__LIB_7__::func_220();
	__LIB_7__::func_191(uParam0, &uLocal_98);
	__LIB_1__::func_281(&iLocal_53, 1, 1);
	__LIB_1__::func_281(&iLocal_51, 1, 1);
	__LIB_1__::func_281(&iLocal_52, 1, 1);
	return true;
}

bool func_996(var uParam0)
{
	if (!__LIB_0__::func_0(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_177(uParam0))
	{
		return false;
	}
	if (!__LIB_7__::func_224(uParam0))
	{
		return false;
	}
	return true;
}

bool func_997(var uParam0)
{
	__LIB_1__::func_221(iLocal_51, 0, 1);
	__LIB_1__::func_221(iLocal_52, 0, 1);
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_7__::func_184()) == __LIB_6__::func_952(uParam0, iLocal_18))
		{
			PED::SET_PED_RESET_FLAG(Global_35, 189, true);
		}
		return false;
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_50))
	{
		if (__LIB_0__::func_232(__LIB_6__::func_952(uParam0, iLocal_18), Global_35, 1) <= 225f)
		{
			iLocal_50 = MAP::_BLIP_ADD_FOR_COORD(-678244495, ENTITY::GET_ENTITY_COORDS(__LIB_6__::func_952(uParam0, iLocal_18), true, false));
			MAP::SET_BLIP_SPRITE(iLocal_50, joaat("BLIP_AMBIENT_SECRET"), true);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_94))
	{
		if (ENTITY::DOES_ENTITY_EXIST(__LIB_7__::func_30(uParam0, iLocal_38)))
		{
			iLocal_94 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(__LIB_7__::func_30(uParam0, iLocal_38), joaat("PROP_PLAYER_SEAT_CHAIR_GENERIC"), 0f, 0f, 0.5f, -180f, 0, 0, 0);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_94, 23, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_94, 25, true);
			TASK::_SET_SCENARIO_POINT_FLAG(iLocal_94, 8, true);
		}
		return false;
	}
	if (__LIB_7__::func_163(uParam0, Local_39, 1, 0))
	{
		__LIB_7__::func_173(uParam0, iLocal_21, 1);
		__LIB_7__::func_33(uParam0, iLocal_26, 1);
		__LIB_7__::func_221(1);
		return true;
	}
	return false;
}

void func_998(var uParam0)
{
	if ((Global_36.f_2 - fLocal_24) <= 0.67f)
	{
		__LIB_7__::func_223();
	}
	if (iLocal_93 == 0)
	{
		if (__LIB_7__::func_148(uParam0, iLocal_20))
		{
			if (!__LIB_7__::func_169(uParam0, iLocal_23))
			{
				__LIB_7__::func_173(uParam0, iLocal_23, 0);
				__LIB_7__::func_33(uParam0, iLocal_28, 1);
				__LIB_7__::func_209(uParam0, &uLocal_98);
			}
		}
		if (__LIB_7__::func_169(uParam0, iLocal_23) && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
		{
			__LIB_7__::func_173(uParam0, iLocal_22, 0);
			__LIB_7__::func_33(uParam0, iLocal_25, 1);
			__LIB_7__::func_203(&uLocal_98);
			bLocal_61 = false;
		}
		if (__LIB_7__::func_148(uParam0, iLocal_22))
		{
			__LIB_7__::func_173(uParam0, iLocal_20, 0);
			iLocal_36++;
			__LIB_7__::func_33(uParam0, iLocal_36, 1);
			__LIB_7__::func_188(&uLocal_98, iLocal_36, iLocal_30);
			__LIB_7__::func_210(uParam0, &uLocal_98);
			__LIB_7__::func_211(uParam0, &uLocal_98);
			__LIB_7__::func_221(5);
		}
	}
	else
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) && !__LIB_7__::func_169(uParam0, iLocal_22))
		{
			__LIB_7__::func_173(uParam0, iLocal_22, 0);
			__LIB_7__::func_33(uParam0, iLocal_25, 1);
			__LIB_7__::func_203(&uLocal_98);
			bLocal_61 = false;
		}
		if (__LIB_7__::func_148(uParam0, iLocal_22) || ANIMSCENE::_0x1F0E401031E20146(__LIB_7__::func_185(uParam0, iLocal_22), __LIB_7__::func_200(uParam0, iLocal_29)))
		{
			if (bLocal_55)
			{
				bLocal_54 = false;
				bLocal_55 = false;
				__LIB_7__::func_211(uParam0, &uLocal_98);
			}
			iLocal_36++;
			__LIB_7__::func_173(uParam0, iLocal_20, 0);
			__LIB_7__::func_33(uParam0, iLocal_36, 1);
			__LIB_7__::func_188(&uLocal_98, iLocal_36, iLocal_30);
			__LIB_7__::func_210(uParam0, &uLocal_98);
			__LIB_7__::func_211(uParam0, &uLocal_98);
			__LIB_7__::func_221(5);
		}
	}
}

void func_999(var uParam0)
{
	if ((!__LIB_0__::func_139(iLocal_53) && !bLocal_54) && iLocal_36 < iLocal_31)
	{
		iLocal_53 = __LIB_2__::func_403("VIG_LEAVE_CONVERSATION", joaat("INPUT_GAME_MENU_CANCEL"), __LIB_6__::func_952(uParam0, iLocal_18), 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
	}
	if (__LIB_1__::func_732(iLocal_53, 1))
	{
		__LIB_1__::func_281(&iLocal_53, 1, 1);
		bLocal_54 = true;
		iLocal_93++;
	}
	if (iLocal_36 >= iLocal_31)
	{
		bLocal_56 = true;
	}
	if (__LIB_7__::func_148(uParam0, iLocal_20))
	{
		if (bLocal_54)
		{
			__LIB_7__::func_173(uParam0, iLocal_23, 0);
			__LIB_7__::func_33(uParam0, iLocal_32, 1);
			__LIB_7__::func_173(uParam0, iLocal_22, 0);
			__LIB_7__::func_33(uParam0, iLocal_35, 1);
			__LIB_7__::func_209(uParam0, &uLocal_98);
			__LIB_7__::func_221(7);
		}
		else if (bLocal_56)
		{
			__LIB_1__::func_281(&iLocal_53, 1, 1);
			__LIB_7__::func_113(uParam0, iLocal_18, 1, 1);
			__LIB_7__::func_221(8);
		}
		else
		{
			__LIB_7__::func_189(uParam0, iLocal_36);
			iLocal_36++;
			__LIB_7__::func_33(uParam0, iLocal_36, 1);
			if (iLocal_30 < iLocal_31)
			{
				iLocal_30++;
				__LIB_7__::func_201(uParam0, iLocal_30);
			}
			if (iLocal_36 >= iLocal_31)
			{
				__LIB_1__::func_221(iLocal_53, 0, 1);
			}
			__LIB_7__::func_188(&uLocal_98, iLocal_36, iLocal_30);
		}
	}
}
