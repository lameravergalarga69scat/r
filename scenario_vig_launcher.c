#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	bool bLocal_11 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion
void __EntryFunction__()
{
	iLocal_0 = 1;
	iLocal_6 = -1;
	iLocal_7 = -1;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	__LIB_0__::func_11();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_5__::func_616();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && __LIB_2__::func_821())
	{
		__LIB_0__::func_11();
		__LIB_3__::func_126();
		func_6();
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_616();
}

void func_6()
{
	switch (iLocal_5)
	{
		case 0:
			if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_3))
			{
				iLocal_5 = 6;
				return;
			}
			bLocal_11 = __LIB_0__::func_12() == __LIB_0__::func_61();
			iLocal_8 = TASK::_GET_PED_USING_SCENARIO_POINT(iLocal_3);
			iLocal_9 = TASK::_GET_SCENARIO_POINT_TYPE(iLocal_3);
			if (__LIB_0__::func_272(iLocal_8, 0) && !PERSCHAR::_0x800DF3FC913355F3(PERSCHAR::_0x32A1E3B83D501096(iLocal_8)))
			{
				iLocal_5 = 6;
				return;
			}
			iLocal_5 = 1;
			break;
		case 1:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
			if (bLocal_11)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_8, 0))
				{
					iLocal_5 = 2;
				}
			}
			else if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_8, 1))
			{
				iLocal_5 = 2;
			}
			break;
		case 2:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
			if (bLocal_11)
			{
				iLocal_7 = func_16(iLocal_9);
			}
			else
			{
				iLocal_6 = func_17(iLocal_9, iLocal_8);
				iLocal_10 = func_18();
				if (iLocal_10 == -1)
				{
					iLocal_5 = 6;
					return;
				}
			}
			if (__LIB_2__::func_824(iLocal_6) || __LIB_6__::func_990(iLocal_7))
			{
				iLocal_5 = 3;
			}
			else
			{
				iLocal_5 = 6;
				return;
			}
			break;
		case 3:
			if (func_15())
			{
				iLocal_5 = 6;
				return;
			}
			if (bLocal_11)
			{
				__LIB_13__::func_483(iLocal_7, 1, 1, 0, 0);
				iLocal_5 = 6;
			}
			else if (func_22())
			{
				iLocal_5 = 4;
			}
			break;
		case 4:
			if (func_23())
			{
				PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(Global_1415419.f_9721[iLocal_10 /*8*/].f_1, 523);
				iLocal_5 = 5;
				return;
			}
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425179[iLocal_10 /*8*/].f_1, false))
			{
				iLocal_5 = 5;
			}
			break;
		case 5:
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1425179[iLocal_10 /*8*/].f_1, false))
			{
				func_24();
				iLocal_5 = 6;
			}
			break;
		case 6:
			iLocal_0 = 0;
			return;
	}
}

bool func_15()
{
	if (__LIB_2__::func_776() && !func_30())
	{
		return true;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return true;
	}
	if (!__LIB_0__::func_272(iLocal_8, 0))
	{
		return true;
	}
	if (!PED::_IS_PED_USING_SCENARIO_POINT(iLocal_8, iLocal_3))
	{
		return true;
	}
	if (!Global_1415419.f_4 && !bLocal_11)
	{
		return true;
	}
	return false;
}

int func_16(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case joaat("SC_CAMP_VIG_PEARSON_CALLOVER"):
		case joaat("WORLD_HUMAN_CAULDRON"):
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(260, 265 + 1);
			return iVar0;
		case joaat("SC_CAMP_VIG_FIRE_POKE"):
			return 13;
		case joaat("SC_CAMP_VIG_FIRE_BLOW"):
			return 12;
		case joaat("SC_CAMP_VIG_SORE_JOINTS_MALE"):
			return 18;
		case joaat("SC_CAMP_VIG_DUTCH_START_PHONOGRAPH"):
			return 20;
	}
	return -1;
}

int func_17(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SC_AMB_VIG_VOMIT_WALL"):
			if (PED::IS_PED_MALE(iParam1))
			{
				return 26;
			}
			else
			{
				return 25;
			}
			break;
	}
	return -1;
}

int func_18()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!Global_1425179[iVar0 /*8*/].f_2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_22()
{
	struct<12> Var0;
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(Global_1415419.f_19[iLocal_6 /*12*/]);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(Global_1415419.f_19[iLocal_6 /*12*/]))
	{
		func_33(iLocal_6);
		Var0 = -1;
		Var0.f_11 = -1;
		Var0 = iLocal_6;
		Var0.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_3, true) };
		Var0.f_4 = { 0f, 0f, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_3, true) };
		Var0.f_10 = 1;
		Var0.f_8 = iLocal_8;
		Global_1425179[iLocal_10 /*8*/] = iLocal_6;
		Global_1425179[iLocal_10 /*8*/].f_1 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Global_1415419.f_19[iLocal_6 /*12*/], &Var0, 13, 1024);
		Global_1425179[iLocal_10 /*8*/].f_2 = 1;
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Global_1415419.f_19[iLocal_6 /*12*/]);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_23()
{
	if (__LIB_2__::func_776() && !func_30())
	{
		return true;
	}
	if (!__LIB_0__::func_272(Global_35, 0))
	{
		return true;
	}
	return false;
}

void func_24()
{
	Global_1425179[iLocal_10 /*8*/] = -1;
	Global_1425179[iLocal_10 /*8*/].f_1 = 0;
	Global_1425179[iLocal_10 /*8*/].f_2 = 0;
}

bool func_30()
{
	return __LIB_0__::func_1(Global_1415419.f_3, 1);
}

void func_33(int iParam0)
{
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_5 = __LIB_0__::func_23();
	if (iParam0 <= 74)
	{
		Global_1415419.f_7 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1415419.f_8 = MISC::GET_GAME_TIMER();
	}
	__LIB_2__::func_670(&(Global_32074.f_2697.f_6[iParam0 /*6*/].f_5), 0, 12, 0, 0, 0, 0, 0);
	Global_32074.f_2697.f_6[iParam0 /*6*/].f_1++;
	Global_32074.f_2697++;
}

