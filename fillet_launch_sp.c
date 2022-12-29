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
	var uLocal_14 = 0;
	var uLocal_15 = 1;
	var uLocal_16 = 0;
	var uLocal_17 = 2;
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
	var uLocal_30 = -1;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 1097859072;
	var uLocal_40 = 1000;
	var uLocal_41 = 1067450368;
	var uLocal_42 = 5000;
	var uLocal_43 = 42;
	var uLocal_44 = 1103626240;
	var uLocal_45 = 1077936128;
	var uLocal_46 = 1106247680;
	var uLocal_47 = 1103101952;
	var uLocal_48 = 1097859072;
	var uLocal_49 = 1103626240;
	var uLocal_50 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = -1;
	var uScriptParam_2 = -1;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1(&uLocal_14);
	}
	while (true)
	{
		if (func_2(&uLocal_14, &uScriptParam_0))
		{
			func_1(&uLocal_14);
		}
		BUILTIN::WAIT(0);
	}
	func_1(&uLocal_14);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		__LIB_0__::func_172(uParam0->f_3[iVar0]);
		iVar0++;
	}
	__LIB_0__::func_172(uParam0->f_6);
	if (PED::_0x91A5F9CBEBB9D936(uParam0->f_7))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_7, false);
	}
	if (!__LIB_1__::func_44(Global_1900325.f_3))
	{
		__LIB_2__::func_788(&(Global_1900325.f_25), 1, 1, 1);
		iVar1 = __LIB_7__::func_707(Global_1900325.f_2);
		__LIB_2__::func_788(&iVar1, 1, 0, 1);
		if (PED::_0x62DE46F061CAA468() > 0)
		{
			PED::_0x7D4E70A67A651C71(uParam0->f_1);
		}
		__LIB_8__::func_737();
		__LIB_8__::func_735(0);
		__LIB_18__::func_136(0);
	}
	STREAMING::REMOVE_ANIM_DICT(__LIB_8__::func_736(1, 0));
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, var uParam1)
{
	int iVar0;
	if (func_11(uParam0))
	{
		return true;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_12(uParam0, uParam1))
			{
				__LIB_6__::func_618(&uLocal_14, 1);
			}
			break;
		case 1:
			STREAMING::REQUEST_ANIM_DICT(__LIB_8__::func_736(1, 0));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_8__::func_736(1, 0)))
			{
				return false;
			}
			else if (!__LIB_8__::func_744())
			{
				return false;
			}
			else if (!PED::_0x5E420FF293EE5472())
			{
				return false;
			}
			else
			{
				__LIB_6__::func_618(uParam0, 2);
				__LIB_8__::func_742(__LIB_8__::func_736(1, 0));
			}
			break;
		case 2:
			if (func_16(uParam0) && func_17(uParam0))
			{
				func_18(0);
				__LIB_6__::func_618(uParam0, 3);
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) || func_19(uParam0))
			{
				__LIB_7__::func_708(Global_1900325.f_2, 0);
				__LIB_6__::func_618(uParam0, 4);
			}
			else if (!__LIB_16__::func_381(Global_1900325.f_2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) && PED::_IS_PED_USING_SCENARIO_HASH(Global_1900325.f_25, joaat("WORLD_CAMP_JAVIER_KNIFE")))
				{
					__LIB_7__::func_700(Global_1900325.f_2);
				}
			}
			break;
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
			{
				PED::_0xAAB050DA48B57978(Global_1900325.f_25, "Flee_Panic_With_Glances", Global_35, -1, 4);
				PED::_0xEEED8FAFEC331A70(Global_1900325.f_25, Global_36, 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1900325.f_25, false);
				ANIMSCENE::_0x99B2A2E3655DEAF1(Global_1900325.f_25, "ClosestScenario");
				TASK::TASK_SMART_FLEE_PED(Global_1900325.f_25, Global_35, 100000f, 100000, 0, 1077936128 /* Float: 3f */, 0);
				PED::SET_PED_KEEP_TASK(Global_1900325.f_25, true);
			}
			__LIB_8__::func_735(0);
			Global_1900325.f_24 = 0;
			__LIB_7__::func_708(Global_1900325.f_2, 0);
			if (__LIB_1__::func_67(Global_1900325.f_2, &iVar0))
			{
				__LIB_1__::func_788(iVar0);
			}
			func_18(1);
			__LIB_1__::func_212(Global_1900325, 256);
			__LIB_1__::func_212(Global_1900325, 128);
			Global_1900325.f_25 = 0;
			__LIB_6__::func_618(uParam0, 5);
			break;
		case 5:
			break;
	}
	return false;
}

bool func_11(var uParam0)
{
	float fVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return true;
	}
	if (*uParam0 > 0)
	{
		if (__LIB_1__::func_44(Global_1900325.f_3))
		{
			return true;
		}
		if (!__LIB_1__::func_815(Global_1900325))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
			{
				TASK::CLEAR_PED_TASKS(Global_1900325.f_25, true, false);
			}
			return true;
		}
		if (__LIB_0__::func_21(Global_1900325.f_4, 4194304))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
			{
				TASK::CLEAR_PED_TASKS(Global_1900325.f_25, true, false);
			}
			return true;
		}
		if (Global_1935630.f_12 == 0)
		{
			fVar0 = __LIB_4__::func_865(Global_1900325);
			if (BUILTIN::VDIST2(Global_36, Global_1900325.f_5) > (fVar0 * fVar0))
			{
				return true;
			}
		}
	}
	if (__LIB_2__::func_776())
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
		{
			TASK::CLEAR_PED_TASKS(Global_1900325.f_25, true, false);
		}
		return true;
	}
	return false;
}

bool func_12(var uParam0, var uParam1)
{
	if (uParam1->f_7 == -1)
	{
		return false;
	}
	Global_1900325.f_37 = 0;
	__LIB_8__::func_738(uParam1->f_1, *uParam1, uParam1->f_2, uParam1->f_8, uParam1->f_7);
	__LIB_8__::func_739(uParam1->f_3, uParam1->f_6);
	PED::_0xED9582B3DA8F02B4(uParam0->f_1);
	__LIB_7__::func_700(Global_1900325.f_2);
	__LIB_4__::func_135(&(uParam0->f_8), 1, 1, 1);
	__LIB_6__::func_905(&(uParam0->f_8));
	__LIB_1__::func_401(&(uParam0->f_8), 1);
	__LIB_2__::func_828(&(uParam0->f_8), 1);
	__LIB_1__::func_402(&(uParam0->f_8), 1);
	__LIB_2__::func_830(&(uParam0->f_8), 1);
	__LIB_1__::func_975(&(uParam0->f_8), 5f);
	__LIB_2__::func_906(&(uParam0->f_8), 5);
	__LIB_1__::func_398(&(uParam0->f_8), 0);
	__LIB_1__::func_413(&(uParam0->f_8), 0);
	__LIB_2__::func_903(&(uParam0->f_8), 0);
	__LIB_1__::func_403(&(uParam0->f_8), 0);
	__LIB_8__::func_731(&(uParam0->f_8), 0);
	__LIB_2__::func_829(&(uParam0->f_8), 0);
	__LIB_1__::func_396(&(uParam0->f_8), 0);
	__LIB_1__::func_399(&(uParam0->f_8), 0);
	__LIB_1__::func_397(&(uParam0->f_8), 0);
	__LIB_2__::func_865(&(uParam0->f_8), 0);
	__LIB_8__::func_732(&(uParam0->f_8), 0);
	__LIB_1__::func_404(&(uParam0->f_8), 0);
	__LIB_1__::func_405(&(uParam0->f_8), 0);
	__LIB_1__::func_406(&(uParam0->f_8), 0);
	__LIB_1__::func_407(&(uParam0->f_8), 0);
	__LIB_1__::func_392(&(uParam0->f_8), 0);
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
	{
		func_60(Global_1900325, Global_1900325.f_5, Global_1900325.f_8, 1056964608 /* Float: 0.5f */, 0.12f);
	}
	else
	{
		__LIB_8__::func_733(Global_1900325, Global_1900325.f_5, 1073741824 /* Float: 2f */, 1);
	}
	Global_1900325.f_19 = { 0f, 0f, 0.5f };
	return true;
}

bool func_16(var uParam0)
{
	float fVar0;
	int iVar1;
	fVar0 = (0.25f * 2f);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3[iVar1]))
		{
			__LIB_1__::func_216(&(uParam0->f_3[iVar1]), Global_1900325.f_9[iVar1 /*3*/], 0f, 0f, 0f, fVar0, fVar0, 2.5f);
		}
		iVar1++;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6))
	{
		__LIB_3__::func_581(&(uParam0->f_6), Global_1900325.f_5, 0f, 0f, Global_1900325.f_8, 4.5f, 4.5f, 2.5f);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6) && !PED::_0x91A5F9CBEBB9D936(uParam0->f_7))
	{
		uParam0->f_7 = PED::_0x4C39C95AE5DB1329(uParam0->f_6, __LIB_0__::func_2() == 0, 15);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) && !func_64())
	{
		__LIB_3__::func_378(uParam0->f_6, 0);
	}
	return (((VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3[0]) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_3[1])) && VOLUME::_DOES_VOLUME_EXIST(uParam0->f_6)) && PED::_0x91A5F9CBEBB9D936(uParam0->f_7));
}

bool func_17(var uParam0)
{
	vector3 vVar0;
	int iVar3;
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25) && func_64())
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
	{
		STREAMING::REQUEST_MODEL(joaat("A_M_M_FIVEFINGERFILLETPLAYERS_01"), false);
		if (!STREAMING::HAS_MODEL_LOADED(joaat("A_M_M_FIVEFINGERFILLETPLAYERS_01")))
		{
			return false;
		}
		__LIB_3__::func_378(uParam0->f_6, 0);
		vVar0 = { Global_1900325.f_9[Global_1900325.f_34 /*3*/] };
		vVar0 = { vVar0 + Global_1900325.f_19 };
		Global_1900325.f_25 = __LIB_1__::func_545(joaat("A_M_M_FIVEFINGERFILLETPLAYERS_01"), vVar0, Global_1900325.f_16[Global_1900325.f_34], 1, 1, 1, 0, 0, 0, 0, 1, 0, 0);
		iVar3 = __LIB_4__::func_886(Global_1900325, Global_1900325.f_4, Global_1900325.f_23);
		PED::_SET_PED_BODY_COMPONENT(Global_1900325.f_25, iVar3);
		PED::_UPDATE_PED_VARIATION(Global_1900325.f_25, false, true, true, true, false);
		__LIB_2__::func_320(Global_1900325.f_25, Global_1900325.f_24);
		PED::_0x6569F31A01B4C097(Global_1900325.f_25, 0, 1);
		PED::_0x6569F31A01B4C097(Global_1900325.f_25, 1, 1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(Global_1900325.f_25, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_M_FIVEFINGERFILLETPLAYERS_01"));
		__LIB_18__::func_136(0);
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_1900325.f_25))
	{
		return false;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Global_1900325.f_25, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1900325.f_25, joaat("REL_MINIGAME_PLAYER"));
	PED::SET_PED_CONFIG_FLAG(Global_1900325.f_25, 130, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(Global_1900325.f_25, 17, true);
	StringCopy(&(Global_1900325.f_26), __LIB_18__::func_138(Global_1900325.f_23), 64);
	AUDIO::SET_AMBIENT_VOICE_NAME(Global_1900325.f_25, &(Global_1900325.f_26));
	__LIB_7__::func_708(Global_1900325.f_2, Global_1900325.f_25);
	uParam0->f_2 = 1;
	if (__LIB_1__::func_77(Global_1900325, 16))
	{
		__LIB_1__::func_212(Global_1900325, 16);
	}
	__LIB_8__::func_746(Global_1900325.f_25);
	return true;
}

void func_18(int iParam0)
{
	if (Global_1900325.f_35 != iParam0)
	{
		Global_1900325.f_35 = iParam0;
	}
}

bool func_19(var uParam0)
{
	var uVar0;
	if (uParam0->f_2 == 1 && __LIB_2__::func_904(Global_1900325.f_25, 0, &(uParam0->f_8), &(uParam0->f_36), 0, 0))
	{
		return true;
	}
	if (Global_1935630.f_17 > 0)
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return true;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35) || PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return true;
	}
	uVar0 = __LIB_0__::func_57(Global_1900325.f_25);
	if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &uVar0, 1, 1) && PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_INTERACT_LOCKON_NEG")))
	{
		return true;
	}
	if (uParam0->f_2 == 1)
	{
		if (TASK::_0x0C3CB2E600C8977D(Global_1900325.f_25, 1) || !PED::_IS_PED_USING_SCENARIO_HASH(Global_1900325.f_25, joaat("WORLD_CAMP_JAVIER_KNIFE")))
		{
			return true;
		}
	}
	return false;
}

void func_60(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar6;
	var uVar7;
	iVar1 = __LIB_12__::func_420(iParam0);
	if (!__LIB_4__::func_867(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = func_86(iParam0, vParam1, fParam4, iVar0, iParam5);
		if (!ENTITY::IS_ENTITY_DEAD(iVar2) && ENTITY::IS_ENTITY_UPRIGHT(iVar2, 90f))
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
			uVar7 = vVar3.z;
			if (__LIB_18__::func_133(iParam0, vParam1, fParam4, iVar0, &vVar3, &fVar6, 0))
			{
				vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar3, fVar6, 0f, fParam6, 0f) };
				vVar3.f_2 = uVar7;
				fVar6 = ENTITY::GET_ENTITY_HEADING(iVar2);
				ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar2, vVar3, fVar6, true, false, true);
				ENTITY::FREEZE_ENTITY_POSITION(iVar2, true);
			}
		}
		iVar0++;
	}
}

bool func_64()
{
	float fVar0;
	float fVar1;
	float fVar2;
	if (!CAM::IS_SCREEN_FADED_IN() || __LIB_1__::func_77(Global_1900325, 16))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST(Global_1900325.f_5, Global_36);
	fVar1 = func_91(Global_1900325);
	fVar2 = (fVar1 - 10f);
	if (fVar0 < 10f || (fVar0 < fVar2 && CAM::IS_SPHERE_VISIBLE(Global_1900325.f_5, 1f)))
	{
		return true;
	}
	return false;
}

int func_86(int iParam0, vector3 vParam1, float fParam4, int iParam5, float fParam6)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	if (!__LIB_1__::func_231(iParam0, vParam1, fParam4, iParam5, &vVar0, 1))
	{
		return 0;
	}
	fVar6 = (fParam6 * 2f);
	iVar8 = 0;
	fVar10 = -1f;
	iVar3 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar3))
	{
		__LIB_1__::func_216(&iVar9, vVar0, 0f, 0f, 0f, fVar6, fVar6, 1.2f);
		iVar5 = ENTITY::_0x886171A12F400B89(iVar9, iVar3, 3);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			iVar7 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar3));
			if (ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
				if (__LIB_4__::func_893(iParam0, ENTITY::GET_ENTITY_MODEL(iVar7)))
				{
					fVar11 = __LIB_0__::func_62(vVar0, ENTITY::GET_ENTITY_COORDS(iVar7, true, false));
					if (fVar10 == -1f || fVar11 < fVar10)
					{
						iVar8 = iVar7;
						fVar10 = fVar11;
					}
				}
			}
			iVar4++;
		}
		__LIB_0__::func_172(iVar9);
		ITEMSET::DESTROY_ITEMSET(iVar3);
	}
	return iVar8;
}

float func_91(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 40f;
		case 2:
			return 35f;
		case 0:
			return 30f;
		case 3:
			return 60f;
		case 5:
			return 60f;
		case 4:
			return 60f;
		case 6:
			return 60f;
		default:
			break;
	}
	return 40f;
}

