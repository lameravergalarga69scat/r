#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3[2] = { 0, 0 };
	var uLocal_6[2] = { 0, 0 };
	int iLocal_9[2] = { 0, 0 };
	vector3 vLocal_12[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_19 = 0;
	int iLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	int iLocal_24 = 0;
	vector3 vLocal_25 = { 0f, 0f, 0f };
	vector3 vLocal_28 = { 0f, 0f, 0f };
	struct<4> Local_31 = { 0, 0, 0, 0 } ;
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
	iLocal_20 = joaat("STAND");
	vLocal_25 = { 1891.03f, -1843.41f, 41.17f };
	vLocal_28 = { 2001.482f, -980.964f, 42f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_31);
	}
	func_2(&Local_31, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_31))
	{
		__LIB_5__::func_233(&Local_31);
		switch (__LIB_0__::func_57(Local_31))
		{
			case 0:
				if (func_6(&Local_31))
				{
					__LIB_0__::func_19(&Local_31, 1);
				}
				break;
			case 1:
				if (func_8(&Local_31))
				{
					__LIB_0__::func_19(&Local_31, 2);
				}
				break;
			case 2:
				if (func_9(&Local_31))
				{
					__LIB_0__::func_19(&Local_31, 3);
				}
				break;
			case 3:
				func_1(&Local_31);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_31);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_0__::func_699(iLocal_3[iVar0]))
		{
			__LIB_1__::func_774(iLocal_3[iVar0], 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 27)
	{
		iVar2 = iVar1;
		if (__LIB_0__::func_31(iVar2) && __LIB_0__::func_699(iVar2))
		{
			iVar3 = Global_1360165[iVar1 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (__LIB_1__::func_22(iVar2))
				{
					__LIB_1__::func_774(iVar2, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar1++;
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
	if (!__LIB_2__::func_312(iLocal_20, 1, 0, 0))
	{
		return false;
	}
	if (__LIB_2__::func_313(iLocal_20) && PED::_0x5E420FF293EE5472())
	{
		return true;
	}
	return false;
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_23(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_24(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!__LIB_0__::func_0(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_11(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_19) && ENTITY::_0x88AD6CC10D8D35B2(iLocal_19))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_19, 1);
		if (__LIB_1__::func_992(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_19, true, false), 1) > 22500f)
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_19);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_19);
		}
	}
	__LIB_4__::func_321(iLocal_20);
	if (PED::_0x5C16855277819BBF() > iLocal_24)
	{
		PED::_0x7D4E70A67A651C71((PED::_0x5C16855277819BBF() + iLocal_24));
	}
}

void func_19(var uParam0)
{
	iLocal_3[0] = 0;
	iLocal_3[1] = 9;
	vLocal_12[0 /*3*/] = { 2003f, -981.1937f, 43.5958f };
	vLocal_12[1 /*3*/] = { 2002.926f, -980.459f, 43.5959f };
	iLocal_24 = 3;
	if (PED::_0x5C16855277819BBF() <= iLocal_24)
	{
		PED::_0xED9582B3DA8F02B4((PED::_0x5C16855277819BBF() + iLocal_24));
	}
	__LIB_1__::func_148(&uLocal_21);
}

int func_23(var uParam0)
{
	int iVar0;
	if (!func_49(&iLocal_3, &uLocal_6, 0, 0, 1, 0, 0, 0))
	{
		return 0;
	}
	if (!func_50(&iLocal_19, ENTITY::GET_ENTITY_COORDS(uLocal_6[1], true, false), 10f, 1, 4, 0, joaat("POLICEWAGON01X")))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_6[iVar0]))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_6[iVar0], joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
		iVar0++;
	}
	return 1;
}

bool func_24(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_6[iParam0]))
	{
		return true;
	}
	if (!__LIB_0__::func_48(Global_35, uLocal_6[iParam0], 50f, 1) && __LIB_11__::func_331(uLocal_6[iParam0], 0, 1))
	{
		func_53(iParam0, 0, 1, 1, -1082130432 /* Float: -1f */);
		iLocal_9[iParam0] = 7;
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_19) && ENTITY::_0x88AD6CC10D8D35B2(iLocal_19))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_19);
		}
		return true;
	}
	else if (__LIB_0__::func_266(uLocal_6[iParam0], vLocal_25, 100f, 1, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_19) && ENTITY::_0x88AD6CC10D8D35B2(iLocal_19))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_19);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_6[iParam0], false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_6[iParam0], MISC::GET_RANDOM_INT_IN_RANGE(0, 2), 64);
			PED::SET_PED_KEEP_TASK(uLocal_6[iParam0], true);
		}
		func_53(iParam0, 1, 0, 1, 3f);
		iLocal_9[iParam0] = 7;
		return true;
	}
	switch (iLocal_9[iParam0])
	{
		case 0:
			iLocal_9[iParam0] = 1;
			break;
		case 1:
			func_55(iParam0);
			break;
		case 2:
			if (func_56(iParam0))
			{
				func_57(4);
			}
			break;
		case 3:
			break;
		case 4:
			if (func_58(uLocal_6[iParam0], iLocal_19))
			{
				iLocal_9[iParam0] = 5;
			}
			break;
		case 5:
			if (__LIB_11__::func_332(uLocal_6[iParam0], vLocal_12[iParam0 /*3*/], 1f, 4f))
			{
				iLocal_9[iParam0] = 6;
			}
			break;
		case 6:
			__LIB_2__::func_915(uLocal_6[iParam0], joaat("STAND"), vLocal_12[iParam0 /*3*/], 110.7f, 0, 1, 0, 0, -1082130432 /* Float: -1f */);
			iLocal_9[iParam0] = 7;
			break;
		case 7:
			return true;
	}
	return false;
}

bool func_49(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if (!__LIB_1__::func_22((*iParam0)[iVar1]))
		{
			(*uParam1)[iVar1] = func_78((*iParam0)[iVar1], bParam2, iParam3, 0, 0, 0, 0, bParam4, 1, 0, bParam5, 0, 0, 0, 0, bParam6, 0, 1, 1, 1, 0, 0, 1, bParam7, 1);
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *iParam0)
	{
		if ((*uParam1)[iVar1] == 0)
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_50(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (*uParam0 == 0)
	{
		*uParam0 = func_79(vParam1, iParam4, iParam5, iParam6, bParam7, iParam8);
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
			ENTITY::SET_ENTITY_VISIBLE(*uParam0, true);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(*uParam0, false);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 3);
		}
	}
	return true;
}

void func_53(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4)
{
	if (!__LIB_0__::func_699(iLocal_3[iParam0]))
	{
		return;
	}
	if (!bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_6[iParam0], true))
		{
			PED::_0xE0B61ED8BB37712F(uLocal_6[iParam0]);
		}
	}
	__LIB_1__::func_774(iLocal_3[iParam0], bParam1, bParam2, bParam3, fParam4, 1, 1, 0, 0, 0, 0);
}

void func_55(int iParam0)
{
	if (__LIB_2__::func_343(uLocal_6[1], iLocal_19, 0) && __LIB_2__::func_343(uLocal_6[0], iLocal_19, 0))
	{
		if (iParam0 == 1)
		{
			iLocal_9[iParam0] = 2;
		}
		else
		{
			iLocal_9[iParam0] = 3;
		}
	}
	else
	{
		if (!__LIB_2__::func_343(uLocal_6[1], iLocal_19, 0) && !__LIB_0__::func_491(uLocal_6[1], -1794415470))
		{
			__LIB_2__::func_596(uLocal_6[1], iLocal_19, -1, 1065353216 /* Float: 1f */, -1, 1);
		}
		if (!__LIB_2__::func_343(uLocal_6[0], iLocal_19, 0) && !__LIB_0__::func_491(uLocal_6[0], -1794415470))
		{
			__LIB_2__::func_596(uLocal_6[1], iLocal_19, 0, 1065353216 /* Float: 1f */, -1, 1);
		}
	}
}

bool func_56(int iParam0)
{
	float fVar0;
	float fVar1;
	fVar0 = 6f;
	fVar1 = 10f;
	if (__LIB_0__::func_266(uLocal_6[iParam0], vLocal_25, (fVar1 * 1.2f), 1, 1))
	{
		return true;
	}
	else if (!__LIB_0__::func_266(uLocal_6[iParam0], vLocal_28, 20f, 1, 1) && __LIB_0__::func_163(uLocal_6[iParam0], 1199744105))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iLocal_19, 12f);
	}
	if (iParam0 == 1)
	{
		if (!__LIB_0__::func_163(uLocal_6[iParam0], 1199744105) && (ENTITY::DOES_ENTITY_EXIST(iLocal_19) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_19, false, false)))
		{
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_6[iParam0], iLocal_19, vLocal_25, fVar0, 69732884, 3, fVar1, fVar1, 0);
		}
	}
	return false;
}

void func_57(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_6[iVar0]))
		{
			iLocal_9[iVar0] = iParam0;
		}
		iVar0++;
	}
}

bool func_58(int iParam0, int iParam1)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	if (!PED::IS_PED_IN_VEHICLE(iParam0, iParam1, false))
	{
		return true;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_LEAVE_VEHICLE"), true) > 1)
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
		}
		TASK::TASK_LEAVE_VEHICLE(iParam0, iParam1, 0, 0);
	}
	return false;
}

int func_78(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = iParam3;
	vVar0.f_1 = iParam4;
	vVar0.f_2 = iParam5;
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
				func_102(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

int func_79(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = 0;
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	iVar2 = ENTITY::_0x59B57C4B06531E1E(vParam0, iParam3, iVar1, 2);
	if (iVar2 != 0)
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			iVar0 = MISC::_GET_VEHICLE_FROM_INDEXED_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (func_110(iVar0, bParam4, iParam5, bParam6, iParam7))
			{
				iVar3 = 999;
			}
			iVar3++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iVar0;
}

void func_102(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_102(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_102(iVar2, vParam1, fParam4, iParam5, iParam6);
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

bool func_110(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (bParam1 && VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam0)) >= iParam2)
	{
		if (((((!__LIB_11__::func_330(iParam0, 4) || !__LIB_11__::func_330(iParam0, 1)) || !__LIB_11__::func_330(iParam0, 2)) || !__LIB_11__::func_330(iParam0, 3)) || !__LIB_11__::func_330(iParam0, 4)) || !__LIB_11__::func_330(iParam0, 5))
		{
			return true;
		}
	}
	if (bParam3 && ENTITY::GET_ENTITY_MODEL(iParam0) == iParam4)
	{
		return true;
	}
	return false;
}

