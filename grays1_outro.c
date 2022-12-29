#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4[2] = { 0, 0 };
	var uLocal_7[2] = { 0, 0 };
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18[2] = { 0, 0 };
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	char* sLocal_25 = NULL;
	char* sLocal_26 = NULL;
	bool bLocal_27 = false;
	struct<4> Local_28 = { 0, 0, 0, 0 } ;
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
	iLocal_10 = 3;
	iLocal_11 = 3;
	sLocal_25 = "gry1_bill_leaves";
	sLocal_26 = "gry1_outro_wagon_park";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_28);
	}
	func_2(&Local_28, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_28))
	{
		__LIB_5__::func_233(&Local_28);
		switch (__LIB_0__::func_57(Local_28))
		{
			case 0:
				if (__LIB_0__::func_0(&Local_28))
				{
					__LIB_0__::func_19(&Local_28, 1);
				}
				break;
			case 1:
				if (func_8(&Local_28))
				{
					__LIB_0__::func_19(&Local_28, 2);
				}
				break;
			case 2:
				if (func_9(&Local_28))
				{
					__LIB_0__::func_19(&Local_28, 3);
				}
				break;
			case 3:
				func_1(&Local_28);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_28);
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
		if (__LIB_0__::func_699(iLocal_4[iVar0]))
		{
			__LIB_1__::func_774(iLocal_4[iVar0], 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
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

int func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return 0;
	}
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!__LIB_0__::func_0(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
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
	int iVar0;
	__LIB_1__::func_463(iLocal_18[0], iLocal_4[0], 1, 0, 0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (__LIB_1__::func_22(iLocal_4[iVar0]))
		{
			__LIB_0__::func_904(iLocal_4[iVar0], 0);
			__LIB_1__::func_774(iLocal_4[iVar0], 0, 0, 0, 45f, 1, 1, 0, 0, 0, 0);
		}
		iVar0++;
	}
	PED::REMOVE_GROUP(iLocal_23);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_21) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_21, true))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_21);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_22))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_22);
	}
	if (PED::_0x5C16855277819BBF() > iLocal_24)
	{
		PED::_0x7D4E70A67A651C71((PED::_0x5C16855277819BBF() + iLocal_24));
	}
	__LIB_5__::func_414(0, 4194304, 0);
	__LIB_5__::func_414(3, 4194304, 0);
	TASK::REMOVE_WAYPOINT_RECORDING(sLocal_25);
	__LIB_1__::func_296(0, 0, 0, 1);
	__LIB_1__::func_296(0, 0, 0, 1);
}

void func_19(var uParam0)
{
	iLocal_4[0] = 0;
	iLocal_4[1] = 3;
	iLocal_24 = 6;
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_25);
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_26);
	if (PED::_0x5C16855277819BBF() <= iLocal_24)
	{
		PED::_0xED9582B3DA8F02B4((PED::_0x5C16855277819BBF() + iLocal_24));
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
	{
		iLocal_21 = __LIB_0__::func_398(7);
	}
}

int func_21(var uParam0)
{
	if (!PED::_0x5E420FF293EE5472())
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_18[0]))
	{
		iLocal_18[0] = func_47(iLocal_4[0], 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
		return 0;
	}
	if (!__LIB_9__::func_359(sLocal_25))
	{
		return 0;
	}
	if (!func_49(&iLocal_4, &uLocal_7, 1, 0, 0, 1, 0, 0))
	{
		return 0;
	}
	if (__LIB_0__::func_266(Global_35, 653.5355f, -1253.288f, 42.8492f, 300f, 1, 1))
	{
		bLocal_27 = true;
		iLocal_10 = 5;
		iLocal_11 = 3;
	}
	else
	{
		bLocal_27 = false;
		__LIB_1__::func_296(0, 1, 0, 1);
		__LIB_1__::func_296(3, 1, 0, 1);
	}
	return 1;
}

bool func_24(var uParam0)
{
	if (bLocal_27)
	{
		if (func_51())
		{
			return true;
		}
	}
	else if (func_52())
	{
		return true;
	}
	return false;
}

int func_47(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_81(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, iParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
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
			(*uParam1)[iVar1] = func_82((*iParam0)[iVar1], bParam2, iParam3, 0, 0, 0, 0, bParam4, 1, 0, bParam5, 0, 0, 0, 0, bParam6, 0, 1, 1, 1, 0, 0, 1, bParam7, 1);
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

bool func_51()
{
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_18[0]))
	{
		if (__LIB_0__::func_126(iLocal_18[0]))
		{
			__LIB_1__::func_463(iLocal_18[0], iLocal_4[0], 1, 0, 0);
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_18[0]) && !__LIB_0__::func_126(iLocal_18[0])) && !__LIB_0__::func_266(Global_35, 676.5199f, -1227.448f, 43.6281f, 5f, 1, 1))
		{
			__LIB_9__::func_360(iLocal_18[0], 676.5199f, -1227.448f, 43.6281f, 10f, 0);
		}
	}
	if (iLocal_10 == 6 && iLocal_11 == 6)
	{
		__LIB_9__::func_360(iLocal_18[0], 676.5199f, -1227.448f, 43.6281f, 10f, 0);
		return true;
	}
	if (__LIB_1__::func_22(0))
	{
		if (!__LIB_0__::func_272(uLocal_7[0], 0))
		{
			return false;
		}
		switch (iLocal_10)
		{
			case 3:
				PED::_REMOVE_PED_FROM_MOUNT(uLocal_7[0], true, false);
				iLocal_10 = 5;
				break;
			case 5:
				iLocal_10 = 6;
				break;
			case 6:
				if (PED::IS_PED_ON_MOUNT(uLocal_7[0]))
				{
					iLocal_10 = 3;
					return false;
				}
				__LIB_5__::func_414(0, 4194304, 0);
				if ((!__LIB_0__::func_163(uLocal_7[0], 242628503) && !__LIB_0__::func_71(uLocal_7[0])) && !PED::IS_PED_USING_ANY_SCENARIO(uLocal_7[0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_3);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 654.2048f, -1253.218f, 42.8467f, 1f, -1, 0.25f, 0, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 654.2048f, -1253.218f, 42.8467f, 10f, 30000, false, true, false, false);
					__LIB_1__::func_474(uLocal_7[0], &iLocal_3, 0, 0, 1, 1);
				}
				if (__LIB_1__::func_22(0) && TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_7[0], 0))
				{
					__LIB_1__::func_774(0, 0, 0, 0, 45f, 1, 1, 0, 0, 0, 0);
				}
				break;
		}
	}
	else
	{
		iLocal_10 = 6;
	}
	if (__LIB_1__::func_22(3))
	{
		if (!__LIB_0__::func_272(uLocal_7[1], 0))
		{
			return false;
		}
		switch (iLocal_11)
		{
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_22))
				{
					func_89(iLocal_22, 843.3488f, -1126.801f, 56.4139f, 46.0894f, 2, 1073741824 /* Float: 2f */);
					__LIB_5__::func_414(3, 4194304, 0);
					__LIB_1__::func_283(&uLocal_15, 0);
					iLocal_11 = 4;
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_7[1], false))
				{
					iLocal_22 = PED::GET_VEHICLE_PED_IS_USING(uLocal_7[1]);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_22, true, false);
					__LIB_9__::func_340(iLocal_22);
					__LIB_1__::func_283(&uLocal_15, 0);
					return false;
				}
				else if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_7[1], false))
				{
					iLocal_11 = 6;
				}
				break;
			case 4:
				if (!__LIB_0__::func_163(uLocal_7[1], 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_3);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_22, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 663.9668f, -1265.367f, 42.8657f, 1.85f, -1, 0.25f, 0, 40000f);
					__LIB_1__::func_474(uLocal_7[1], &iLocal_3, 0, 0, 1, 1);
				}
				if ((TASK::GET_SCRIPT_TASK_STATUS(uLocal_7[1], 242628503, true) == 8 || __LIB_3__::func_135(&uLocal_15) > 35000) || TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_7[1], 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_22);
					__LIB_1__::func_774(3, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					iLocal_11 = 6;
				}
				break;
			case 6:
				if (!__LIB_0__::func_266(uLocal_7[1], 663.9668f, -1265.367f, 42.8657f, 100f, 1, 1))
				{
					if (ENTITY::_IS_ENTITY_FROZEN(uLocal_7[1]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uLocal_7[1], false);
					}
					if (!__LIB_0__::func_163(uLocal_7[1], 242628503))
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_3);
						TASK::TASK_LEAVE_VEHICLE(0, iLocal_22, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 663.9668f, -1265.367f, 42.8657f, 1.85f, -1, 0.25f, 0, 40000f);
						__LIB_1__::func_474(uLocal_7[1], &iLocal_3, 0, 0, 1, 1);
					}
				}
				break;
		}
	}
	else
	{
		iLocal_11 = 6;
	}
	return false;
}

bool func_52()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_272(uLocal_7[1], 0))
	{
	}
	if (!__LIB_0__::func_272(uLocal_7[0], 0))
	{
	}
	if (!__LIB_1__::func_22(3) && !__LIB_1__::func_22(0))
	{
		return true;
	}
	if (__LIB_1__::func_22(0))
	{
		if (!__LIB_0__::func_272(uLocal_7[0], 0))
		{
			return false;
		}
		switch (iLocal_10)
		{
			case 3:
				if (PED::IS_PED_ON_MOUNT(uLocal_7[0]) || __LIB_1__::func_871(&uLocal_12) > 5000)
				{
					__LIB_0__::func_904(0, 1);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_7[0], sLocal_25, 57, 9218, 273, 0, 0, -1);
					iLocal_10 = 4;
				}
				break;
			case 4:
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_25, ENTITY::GET_ENTITY_COORDS(uLocal_7[0], true, false), &iVar1);
				if (iVar1 < 22)
				{
					__LIB_4__::func_982(uLocal_7[0], 1.25f);
				}
				else if (iVar0 < iVar1)
				{
					__LIB_4__::func_982(uLocal_7[0], 1.75f);
				}
				else
				{
					__LIB_4__::func_982(uLocal_7[0], 1.501f);
				}
				if (iVar1 > 272)
				{
					vVar2 = { 675.2753f, -1225.374f, 43.6898f };
					TASK::OPEN_SEQUENCE_TASK(&iLocal_3);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 1.25f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 654.2048f, -1253.218f, 42.8467f, 1f, -1, 0.25f, 0, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 654.2048f, -1253.218f, 42.8467f, 10f, 10000, false, true, false, false);
					__LIB_1__::func_474(uLocal_7[0], &iLocal_3, 0, 0, 1, 1);
					iLocal_10 = 7;
				}
				break;
			case 7:
				if (!__LIB_0__::func_163(uLocal_7[0], 242628503) || TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_7[0], 0))
				{
					__LIB_1__::func_774(0, 0, 0, 0, 45f, 1, 1, 0, 0, 0, 0);
					return true;
				}
				break;
		}
		if (__LIB_0__::func_665(uLocal_7[0], Global_35, 1, 1) > 275f && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_7[0]))
		{
			if (__LIB_0__::func_866(iLocal_4[0], 0))
			{
				__LIB_19__::func_539(iLocal_4[0]);
			}
			__LIB_3__::func_456(uLocal_7[0]);
			__LIB_0__::func_904(iLocal_4[0], 0);
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_18[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_18[0], true))
			{
				__LIB_1__::func_463(iLocal_18[0], iLocal_4[0], 1, 0, 1);
			}
			__LIB_5__::func_414(0, 4194304, 0);
			__LIB_1__::func_774(iLocal_4[0], 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
			__LIB_1__::func_197(0, 0, 0, 0, 0);
		}
	}
	if (__LIB_1__::func_22(3))
	{
		if (!__LIB_0__::func_272(uLocal_7[1], 0))
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_22))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_7[1], false))
			{
				iLocal_22 = PED::GET_VEHICLE_PED_IS_USING(uLocal_7[1]);
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_22, true, false);
				__LIB_9__::func_340(iLocal_22);
			}
		}
		switch (iLocal_11)
		{
			case 3:
				iLocal_11 = 4;
				break;
			case 4:
				if (!__LIB_0__::func_163(uLocal_7[1], 242628503))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_3);
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(0, iLocal_22, 843.7542f, -1023.801f, 50.9411f, 7f, 69222692, 1, 50f, 2f, 0);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, iLocal_22, sLocal_26, 524295, 1, 9218, -1, -1082130432 /* Float: -1f */, 0, 1073741824 /* Float: 2f */, 0);
					TASK::TASK_LEAVE_VEHICLE(0, iLocal_22, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 779.7314f, -1169.254f, 45.9987f, 1f, -1, 0.25f, 0, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, 779.7314f, -1169.254f, 45.9987f, 50f, 30000, false, true, false, false);
					__LIB_1__::func_474(uLocal_7[1], &iLocal_3, 0, 0, 1, 1);
					iLocal_11 = 6;
				}
				break;
			case 6:
				if (__LIB_0__::func_665(uLocal_7[1], Global_35, 1, 1) > 275f)
				{
					func_89(iLocal_22, 843.3488f, -1126.801f, 56.4139f, 46.0894f, 2, 1073741824 /* Float: 2f */);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_22);
					__LIB_5__::func_414(3, 4194304, 0);
					__LIB_1__::func_774(3, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					__LIB_1__::func_197(3, 0, 0, 0, 0);
				}
				if (__LIB_1__::func_22(3) && TASK::GET_SEQUENCE_PROGRESS(uLocal_7[1]) >= 3)
				{
					__LIB_1__::func_774(3, 0, 0, 0, 45f, 1, 1, 0, 0, 0, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_22);
				}
				break;
		}
	}
	return false;
}

int func_81(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_118(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, iParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_82(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
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
				func_89(Global_1360165[iParam0 /*1157*/], vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
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

void func_89(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
				func_89(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_89(iVar2, vParam1, fParam4, iParam5, iParam6);
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

int func_118(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_3__::func_119(iParam0, vVar0, iParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_89(Global_1360165[iParam0 /*1157*/].f_124, vVar0, iParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

