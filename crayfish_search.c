#region Local Var
	struct<7> Local_0 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 1;
	var uLocal_10 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&ScriptParam_0, &Local_0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1(&ScriptParam_0, &Local_0);
	}
	while (func_2(&ScriptParam_0, &Local_0))
	{
		switch (Local_0)
		{
			case 0:
				if (func_3(&ScriptParam_0, &Local_0))
				{
					__LIB_1__::func_649(&Local_0, 1);
				}
				break;
			case 1:
				if (func_5(&ScriptParam_0, &Local_0))
				{
					__LIB_1__::func_649(&Local_0, 2);
				}
				break;
			case 2:
				if (func_6(&ScriptParam_0, &Local_0))
				{
					__LIB_1__::func_649(&Local_0, 3);
				}
				break;
			case 3:
				if (func_7(&ScriptParam_0, &Local_0))
				{
					if (Local_0.f_3 >= Local_0.f_4)
					{
						func_8(&Local_0);
						__LIB_1__::func_649(&Local_0, 4);
					}
					else
					{
						Local_0.f_6 = 0;
						__LIB_1__::func_649(&Local_0, 2);
					}
				}
				break;
			case 4:
				func_1(&ScriptParam_0, &Local_0);
				__LIB_1__::func_649(&Local_0, 5);
				break;
			case 5:
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&ScriptParam_0, &Local_0);
}

void func_1(var uParam0, var uParam1)
{
	func_8(uParam1);
	if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_7))
	{
		PLAYER::_0x9DAE1380CC5C6451(PLAYER::PLAYER_ID(), uParam1->f_7);
		PLAYER::_0xDC5E09D012D759C4(uParam1->f_7, uParam1->f_7, 0);
	}
	if (ENTITY::_0x1FF441D7954F8709(uParam1->f_8))
	{
		ENTITY::_0xD2B9C78537ED5759(uParam1->f_8);
	}
	SCRIPTS::_0xE7282390542F570D(*uParam0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(var uParam0, var uParam1)
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		return false;
	}
	if (__LIB_0__::func_296(0, 0, 1))
	{
		return false;
	}
	return true;
}

bool func_3(var uParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { func_10(uParam0) };
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam1->f_9[0]))
	{
		iParam1->f_9[0] = TASK::CREATE_SCENARIO_POINT(joaat("RANSACK_REACH_IN_CRAYSISH_HOLE"), vVar0 - Vector(0f, 0.3f, 0f), 0f, 0, 0, 0);
	}
	STREAMING::REQUEST_MODEL(__LIB_6__::func_931(), false);
	iParam1->f_4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	iParam1->f_1 = func_12(uParam0->f_1);
	return true;
}

bool func_5(var uParam0, int iParam1)
{
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_6__::func_931()))
	{
		return false;
	}
	return true;
}

bool func_6(var uParam0, int iParam1)
{
	vector3 vVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
	{
		vVar0 = { func_13(uParam0) };
		if (!__LIB_0__::func_86(vVar0))
		{
			iParam1->f_6 = OBJECT::CREATE_OBJECT(__LIB_6__::func_931(), vVar0, true, true, false, false, true);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1->f_6))
	{
		return false;
	}
	if (iParam1->f_1 != -1 && !func_15(iParam1, 1065353216 /* Float: 1f */))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1->f_7))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iParam1->f_7, 0);
		PLAYER::_0x6ECFC621A168424C(iParam1->f_7, iParam1->f_7, 0, 0);
	}
	return true;
}

bool func_7(var uParam0, int iParam1)
{
	struct<2> Var0;
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (__LIB_7__::func_495(joaat("UPGRADE_FSH_BAIT_CRAYFISH")) && !iParam1->f_5)
	{
		iParam1->f_3++;
		iParam1->f_5 = 1;
	}
	if (iParam1->f_5 && func_17())
	{
		iParam1->f_5 = 0;
		__LIB_13__::func_446(joaat("AT_CRAYFISH"), joaat("A_C_CRAWFISH_01"), __LIB_1__::func_974(PLAYER::PLAYER_ID()), 1, 1);
		Var0 = { __LIB_0__::func_38(joaat("COLLECTED"), joaat("AT_CRAYFISH")) };
		STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
		return true;
	}
	return false;
}

void func_8(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (1 - 1))
	{
		iVar1 = iVar0;
		if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_9[iVar1]))
		{
			TASK::_DELETE_SCENARIO_POINT(uParam0->f_9[iVar1]);
		}
		iVar0++;
	}
}

Vector3 func_10(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_1))
	{
		return TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_1, true);
	}
	return 0f, 0f, 0f;
}

int func_12(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam0))
	{
		return -1;
	}
	vVar0 = { TASK::_GET_SCENARIO_POINT_COORDS(iParam0, true) };
	fVar5 = 9999999f;
	fVar6 = 9999999f;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (17 - 1))
	{
		iVar3 = iVar7;
		fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, func_26(iVar3), true);
		if (fVar5 < fVar6)
		{
			fVar6 = fVar5;
			iVar4 = iVar3;
		}
		iVar7++;
	}
	return iVar4;
}

Vector3 func_13(var uParam0)
{
	vector3 vVar0;
	float fVar3;
	vVar0 = { func_10(uParam0) };
	fVar3 = 0f;
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &fVar3, true))
	{
		vVar0.f_2 = (fVar3 + 0.1f);
		return vVar0;
	}
	return 0f, 0f, 0f;
}

bool func_15(int iParam0, int iParam1)
{
	if (iParam0->f_8 == 0)
	{
		iParam0->f_8 = ENTITY::_0x6F3068258A499E52(func_27(iParam0->f_1), func_26(iParam0->f_1), 11);
	}
	else if (ENTITY::_0x1FF441D7954F8709(iParam0->f_8))
	{
		iParam0->f_7 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(iParam0->f_8));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		return false;
	}
	return true;
}

int func_17()
{
	if (TASK::_0xD04241BBF6D03A5E(Global_35) == 0)
	{
		return 1;
	}
	return 0;
}

Vector3 func_26(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2027.162f, -1722.432f, 40.62656f;
		case 1:
			return 2045.327f, -1785.859f, 40.69251f;
		case 2:
			return 2021.431f, -1789.314f, 40.40718f;
		case 3:
			return 2087.09f, -1859.742f, 40.49999f;
		case 4:
			return 2058.266f, -1866.586f, 40.5274f;
		case 5:
			return 2042.225f, -1885.971f, 40.49999f;
		case 6:
			return 1672.345f, -826.9699f, 39.77722f;
		case 7:
			return 1710.503f, -850.5192f, 40.24175f;
		case 8:
			return 1693.874f, -942.7992f, 40.27774f;
		case 9:
			return 1756.451f, -1017.704f, 40.73364f;
		case 10:
			return 2339.37f, -544.2522f, 40.72062f;
		case 11:
			return 2301.896f, -515.7421f, 40.62392f;
		case 12:
			return 2253.715f, -549.9788f, 40.5689f;
		case 13:
			return 2281.221f, -640.3717f, 40.46832f;
		case 14:
			return 2215.952f, -679.2456f, 40.62037f;
		case 15:
			return 2176.255f, -693.6794f, 40.68019f;
		case 16:
			return 2258.821f, -720.3987f, 40.47908f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_27(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("DIS_BAY_CATFISHHOLE01_DECAL");
		case 1:
			return joaat("DIS_BAY_CATFISHHOLE02_DECAL");
		case 2:
			return joaat("DIS_BAY_CATFISHHOLE03_DECAL");
		case 3:
			return joaat("DIS_BAY_CATFISHHOLE04_DECAL");
		case 4:
			return joaat("DIS_BAY_CATFISHHOLE05_DECAL");
		case 5:
			return joaat("DIS_BAY_CATFISHHOLE06_DECAL");
		case 6:
			return joaat("DIS_BAY_CATFISHHOLE07_DECAL");
		case 7:
			return joaat("DIS_BAY_CATFISHHOLE08_DECAL");
		case 8:
			return joaat("DIS_BAY_CATFISHHOLE09_DECAL");
		case 9:
			return joaat("DIS_BAY_CATFISHHOLE10_DECAL");
		case 10:
			return joaat("DIS_BAY_CATFISHHOLE11_DECAL");
		case 11:
			return joaat("DIS_BAY_CATFISHHOLE12_DECAL");
		case 12:
			return joaat("DIS_BAY_CATFISHHOLE13_DECAL");
		case 13:
			return joaat("DIS_BAY_CATFISHHOLE14_DECAL");
		case 14:
			return joaat("DIS_BAY_CATFISHHOLE15_DECAL");
		case 15:
			return joaat("DIS_BAY_CATFISHHOLE16_DECAL");
		case 16:
			return joaat("DIS_BAY_CATFISHHOLE17_DECAL");
		default:
			break;
	}
	return 0;
}

