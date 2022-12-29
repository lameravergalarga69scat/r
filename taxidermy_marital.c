#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> Local_3 = { 0, 0 } ;
	var uLocal_5 = 1;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	vector3 vLocal_9 = { 0f, 0f, 0f };
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	int iLocal_19 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	uLocal_12 = ScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || __LIB_0__::func_2() != -1)
	{
		func_2(&Local_3);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_2(&Local_3);
	}
	iLocal_13 = ScriptParam_0.f_1;
	vLocal_9 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	iLocal_14 = func_3();
	iLocal_16 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_9);
	if (iLocal_14 == joaat("TAXIDERMY_MARITAL_05") || iLocal_14 == joaat("TAXIDERMY_MARITAL_07"))
	{
		__LIB_17__::func_703(iLocal_14, &iLocal_15);
	}
	while (func_5())
	{
		if (func_6())
		{
			func_2(&Local_3);
		}
		if (iLocal_14 == joaat("TAXIDERMY_MARITAL_01"))
		{
			func_7(&Local_3);
		}
		if ((((iLocal_14 == joaat("TAXIDERMY_MARITAL_02") || iLocal_14 == joaat("TAXIDERMY_MARITAL_03")) || iLocal_14 == joaat("TAXIDERMY_MARITAL_04")) || iLocal_14 == joaat("TAXIDERMY_MARITAL_05")) || iLocal_14 == joaat("TAXIDERMY_MARITAL_06"))
		{
			func_8(&Local_3);
		}
		if (iLocal_14 == joaat("TAXIDERMY_MARITAL_07"))
		{
			func_9(&Local_3);
		}
		BUILTIN::WAIT(0);
	}
	func_2(&Local_3);
}

void func_2(var uParam0)
{
	if (iLocal_14 == joaat("TAXIDERMY_MARITAL_05") || iLocal_14 == joaat("TAXIDERMY_MARITAL_07"))
	{
		func_10(uParam0);
	}
	else if (INTERIOR::IS_VALID_INTERIOR(iLocal_16))
	{
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_16, __LIB_13__::func_408(iLocal_14, 11)) && INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_16, __LIB_13__::func_408(iLocal_14, 11)))
		{
			INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iLocal_16, __LIB_13__::func_408(iLocal_14, 11), true);
		}
	}
	if (iLocal_14 == joaat("TAXIDERMY_MARITAL_01"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_17))
		{
			TASK::_0x78B4567E18B54480(iLocal_17);
		}
	}
	SCRIPTS::_0xE7282390542F570D(uLocal_12);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	int iVar0;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_13))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iLocal_13));
	}
	return COLLECTION::_0x126CBEBBA46693CF(iVar0, joaat("TAXIDERMY"), joaat("TAXIDERMY_MARITAL"));
}

bool func_5()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_2(&Local_3);
		return false;
	}
	return true;
}

bool func_6()
{
	if (__LIB_0__::func_2() != -1)
	{
		return true;
	}
	if (PED::IS_PED_INJURED(Global_35))
	{
		return true;
	}
	return false;
}

int func_7(var uParam0)
{
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (__LIB_2__::func_410(76) && __LIB_4__::func_17(52))
			{
				if (__LIB_17__::func_491() < 1)
				{
					func_16(joaat("TAXIDERMY_MARITAL_01"));
					__LIB_0__::func_442(joaat("TAXIDERMY_MARITAL_01"));
					__LIB_0__::func_443(joaat("TAXIDERMY_MARITAL_01"));
				}
				__LIB_0__::func_19(uParam0, 1);
			}
			else
			{
				func_2(uParam0);
			}
			break;
		case 1:
			if (__LIB_17__::func_491() == __LIB_17__::func_492() && !__LIB_2__::func_591(joaat("PROVISION_TM_SQUIRREL_STATUE"), 1, 0))
			{
				if ((__LIB_17__::func_491() == 6 && __LIB_17__::func_492() == 6) && __LIB_17__::func_493(joaat("TAXIDERMY_MARITAL_06")))
				{
					func_2(&Local_3);
				}
				else if (func_23(uParam0))
				{
					__LIB_0__::func_19(uParam0, 16);
				}
			}
			else if (__LIB_0__::func_296(0, 0, 1))
			{
				func_2(&Local_3);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			if (__LIB_2__::func_591(joaat("PROVISION_TM_SQUIRREL_STATUE"), 1, 0))
			{
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			func_25();
			__LIB_0__::func_19(uParam0, 4);
			break;
		case 4:
			if (func_26())
			{
				__LIB_0__::func_19(uParam0, 5);
			}
			break;
		case 5:
			if (__LIB_2__::func_694(&(Local_3.f_1), "COL_CTX_TAX_MARITAL_PLACE", vLocal_9, 0, joaat("INPUT_CONTEXT_X"), 1.5f, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, joaat("SHORT_TIMED_EVENT"), 0))
			{
				if (__LIB_17__::func_491() == 2)
				{
					__LIB_0__::func_443(joaat("TAXIDERMY_MARITAL_02"));
					func_16(joaat("TAXIDERMY_MARITAL_02"));
				}
				else if (__LIB_17__::func_491() == 3)
				{
					__LIB_0__::func_443(joaat("TAXIDERMY_MARITAL_03"));
					func_16(joaat("TAXIDERMY_MARITAL_03"));
				}
				else if (__LIB_17__::func_491() == 4)
				{
					__LIB_0__::func_443(joaat("TAXIDERMY_MARITAL_04"));
					func_16(joaat("TAXIDERMY_MARITAL_04"));
				}
				else if (__LIB_17__::func_491() == 5)
				{
					__LIB_0__::func_443(joaat("TAXIDERMY_MARITAL_05"));
					func_16(joaat("TAXIDERMY_MARITAL_05"));
				}
				else if (__LIB_17__::func_491() == 6)
				{
					__LIB_0__::func_443(joaat("TAXIDERMY_MARITAL_06"));
					func_16(joaat("TAXIDERMY_MARITAL_06"));
				}
				else if (__LIB_17__::func_491() == 7)
				{
					__LIB_0__::func_443(joaat("TAXIDERMY_MARITAL_07"));
				}
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Global_35, -1638.493f, -1361.41f, 83.4157f, 1f, 20000, 0.25f, 0, 40000f);
				__LIB_4__::func_124(48);
				__LIB_0__::func_703(0, 10);
				BUILTIN::SETTIMERA(0);
				__LIB_0__::func_19(uParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_163(Global_35, 713668775) || BUILTIN::TIMERA() > 1000)
			{
				if (func_31(&Local_3, 0))
				{
					__LIB_0__::func_19(uParam0, 7);
				}
			}
			break;
		case 7:
			if (__LIB_0__::func_163(Global_35, 713668775))
			{
				return 0;
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
			func_32(&Local_3, 0);
			if (func_33(&Local_3, 0, 1, 1, 1))
			{
				__LIB_0__::func_19(uParam0, 8);
			}
			break;
		case 8:
			if (func_34(joaat("PROVISION_TM_SQUIRREL_STATUE"), 1, 0, -142743235, 0))
			{
				__LIB_0__::func_19(uParam0, 16);
			}
			break;
		case 16:
			iLocal_19 = 4;
			uLocal_18 = ENTITY::_0x6F3068258A499E52(joaat("S_SQUIRRELMARSTON01X"), -1638f, -1360.66f, 85.35f, 1 | iLocal_19);
			__LIB_0__::func_19(uParam0, 17);
			break;
		case 17:
			if (ENTITY::_0x1FF441D7954F8709(uLocal_18))
			{
				iLocal_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_18));
				__LIB_0__::func_19(uParam0, 18);
			}
			break;
		case 18:
			if (iLocal_14 == joaat("TAXIDERMY_MARITAL_01"))
			{
				TASK::_0x67BFCED22909834D(iLocal_17);
			}
			__LIB_0__::func_19(uParam0, 10);
			break;
		case 10:
			break;
	}
	return 0;
}

int func_8(var uParam0)
{
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (__LIB_2__::func_410(76))
			{
				__LIB_0__::func_19(uParam0, 11);
			}
			else
			{
				func_2(uParam0);
			}
			break;
		case 11:
			if (__LIB_2__::func_591(joaat("PROVISION_TM_SQUIRREL_STATUE"), 1, 0))
			{
				func_2(uParam0);
			}
			else if (__LIB_17__::func_491() == __LIB_17__::func_492())
			{
				func_2(uParam0);
			}
			else if (__LIB_17__::func_491() == 2)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_02"))
				{
					if (__LIB_0__::func_296(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (__LIB_17__::func_491() == 3)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_03"))
				{
					if (__LIB_0__::func_296(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (__LIB_17__::func_491() == 4)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_04"))
				{
					if (__LIB_0__::func_296(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (__LIB_17__::func_491() == 5)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_05"))
				{
					if (__LIB_0__::func_296(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 13);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			else if (__LIB_17__::func_491() == 6)
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_06"))
				{
					if (__LIB_0__::func_296(0, 0, 1))
					{
						func_2(&Local_3);
					}
					else
					{
						__LIB_0__::func_19(uParam0, 14);
					}
				}
				else
				{
					func_2(uParam0);
				}
			}
			break;
		case 13:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				if (func_35(uParam0))
				{
					__LIB_0__::func_19(uParam0, 15);
				}
			}
			break;
		case 14:
			if (func_23(uParam0))
			{
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_03"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL_CHIMNEY", true);
				}
				__LIB_0__::func_19(uParam0, 15);
			}
			break;
		case 15:
			if (__LIB_2__::func_591(joaat("PROVISION_TM_SQUIRREL_STATUE"), 1, 0))
			{
				__LIB_4__::func_124(48);
				__LIB_0__::func_703(0, 10);
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_03"))
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("TAX_MARITAL_CHIMNEY", false);
				}
				if (iLocal_14 == joaat("TAXIDERMY_MARITAL_05"))
				{
					__LIB_0__::func_19(uParam0, 19);
				}
				else
				{
					func_2(uParam0);
				}
			}
			break;
		case 19:
			break;
	}
	return 0;
}

int func_9(var uParam0)
{
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (__LIB_2__::func_410(76))
			{
				if ((__LIB_17__::func_491() == 6 && __LIB_17__::func_492() == 6) && __LIB_17__::func_493(joaat("TAXIDERMY_MARITAL_06")))
				{
					__LIB_0__::func_19(uParam0, 12);
				}
				else
				{
					func_2(uParam0);
				}
			}
			else
			{
				func_2(uParam0);
			}
			break;
		case 12:
			if (__LIB_0__::func_296(0, 0, 1))
			{
				func_2(&Local_3);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 13);
			}
			break;
		case 13:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				if (func_35(uParam0))
				{
					__LIB_0__::func_19(uParam0, 15);
				}
			}
			break;
		case 15:
			if (__LIB_2__::func_591(joaat("PROVISION_TM_SQUIRREL_STATUE"), 1, 0))
			{
				__LIB_4__::func_124(48);
				__LIB_0__::func_703(0, 10);
				__LIB_3__::func_720(15, 1);
				__LIB_0__::func_442(joaat("TAXIDERMY_MARITAL_07"));
				__LIB_0__::func_19(uParam0, 19);
			}
			break;
		case 19:
			break;
	}
	return 0;
}

int func_10(var uParam0)
{
	if (__LIB_0__::func_30(iLocal_15))
	{
		__LIB_0__::func_400(iLocal_15);
	}
	return 1;
}

void func_16(int iParam0)
{
	Global_40.f_12019.f_27[__LIB_1__::func_34(iParam0, 15) /*2*/] = __LIB_0__::func_23();
	__LIB_2__::func_670(&(Global_40.f_12019.f_27[__LIB_1__::func_34(iParam0, 15) /*2*/]), 0, 0, __LIB_1__::func_34(iParam0, 16), __LIB_1__::func_34(iParam0, 17), 0, 0, 0);
}

bool func_23(var uParam0)
{
	PERSISTENCE::_0x9D16896F0DBE78A2(func_54(iLocal_14), 10f);
	if (INTERIOR::IS_VALID_INTERIOR(iLocal_16))
	{
		if (INTERIOR::_IS_INTERIOR_ENTITY_SET_VALID(iLocal_16, __LIB_13__::func_408(iLocal_14, 11)))
		{
			if (!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_16, __LIB_13__::func_408(iLocal_14, 11)))
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iLocal_16, __LIB_13__::func_408(iLocal_14, 11), 0);
			}
		}
	}
	if (INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iLocal_16, __LIB_13__::func_408(iLocal_14, 11)))
	{
		return true;
	}
	return false;
}

void func_25()
{
	STREAMING::REQUEST_MODEL(joaat("S_SQUIRRELMARSTON01X"), false);
}

bool func_26()
{
	return STREAMING::HAS_MODEL_LOADED(joaat("S_SQUIRRELMARSTON01X"));
}

bool func_31(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2[iParam1]))
	{
		uParam0->f_2[iParam1] = ANIMSCENE::_CREATE_ANIM_SCENE(__LIB_17__::func_489(iParam1), 0, 0, false, true);
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_2[iParam1]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_2[iParam1], true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_2[iParam1]);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_2[iParam1], true, false))
	{
		return false;
	}
	if (!func_87(uParam0, iParam1))
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (__LIB_0__::func_181())
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2[iParam1], "JOHN", Global_35, 0);
			}
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_2[iParam1], "squirrel", uParam0->f_5, 0);
			uParam0->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(1, 5);
			break;
	}
	return true;
}

void func_32(var uParam0, int iParam1)
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_2[iParam1], false))
	{
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_2[iParam1]);
	}
}

bool func_33(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_2[iParam1], __LIB_17__::func_490(iParam2)) && !ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_2[iParam1], __LIB_17__::func_490(iParam2)))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_2[iParam1], __LIB_17__::func_490(iParam2));
			return false;
		}
	}
	if (bParam4)
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_2[iParam1], __LIB_17__::func_490(iParam2)))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(uParam0->f_2[iParam1], __LIB_17__::func_490(iParam2), true);
			return true;
		}
	}
	return false;
}

bool func_34(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_2__::func_465(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return false;
	}
	if (!__LIB_2__::func_591(iParam0, 1, bParam4))
	{
		return false;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_2__::func_528(iParam0, 0, 0) - iParam1) < 0)
		{
			func_34(iParam0, __LIB_2__::func_528(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return false;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!__LIB_2__::func_481(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return false;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_4__::func_105(iParam0, iParam1);
	return true;
}

bool func_35(var uParam0)
{
	__LIB_0__::func_401(iLocal_15);
	return true;
}

Vector3 func_54(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TAXIDERMY_MARITAL_02"):
			return -1636.28f, -1354.913f, 84.3f;
		case joaat("TAXIDERMY_MARITAL_03"):
			return -1637.18f, -1359.381f, 84.3f;
		case joaat("TAXIDERMY_MARITAL_04"):
			return -1646.48f, -1355.488f, 86.7f;
		case joaat("TAXIDERMY_MARITAL_06"):
			return -1599.82f, -1417.758f, 84.7f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_87(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				uParam0->f_5 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("S_SQUIRRELMARSTON01X"), -1637.467f, -1365.527f, 83.4029f, true, true, false, true);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_5))
			{
				return false;
			}
			break;
	}
	return true;
}

