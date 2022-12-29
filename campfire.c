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
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	char cVar0[64];
	struct<5> Var8;
	bool bVar13;
	bool bVar14;
	int iVar15;
	struct<10> Var16;
	struct<16> Var26;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_14 = -1;
	uLocal_16 = ScriptParam_0;
	if (__LIB_0__::func_2() == -1)
	{
	}
	else
	{
		func_2(0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_2(0, 0);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(0, 0);
	}
	Var8 = -1;
	Var8.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var8.f_4 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, true);
	while (__LIB_5__::func_749(&Var8))
	{
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_653();
	iVar15 = __LIB_17__::func_933(Var8.f_1, &bVar13, __LIB_0__::func_16() == 0);
	__LIB_17__::func_934();
	if (!__LIB_17__::func_941(Var8.f_1))
	{
		if (func_9() && bVar13)
		{
			func_2(0, 0);
		}
	}
	StringCopy(&cVar0, func_10(&Var8, &bVar14), 64);
	if (func_11(Var8.f_1))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	if (__LIB_17__::func_941(Var8.f_1))
	{
		if (!__LIB_5__::func_664(Var8))
		{
			if (__LIB_0__::func_16() != 0)
			{
				Var8 = 0;
			}
			else
			{
				Var8 = 3;
			}
		}
		StringCopy(&cVar0, __LIB_5__::func_750(__LIB_0__::func_16()), 64);
		if (!__LIB_5__::func_754(Var8, 32768))
		{
			__LIB_5__::func_766(Var8);
			bVar13 = true;
		}
	}
	else if (__LIB_0__::func_16() == 1)
	{
		if (__LIB_5__::func_655())
		{
			func_2(iVar15, !bVar14);
		}
		if (__LIB_1__::func_923())
		{
			func_2(iVar15, 1);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		func_2(iVar15, (!bVar13 && !bVar14));
	}
	__LIB_5__::func_755(Var8.f_1, Var8);
	Var16 = Var8;
	Var16.f_1 = ScriptParam_0.f_1;
	Var16.f_6 = { Var8.f_1 };
	Var16.f_6.f_3 = Var8.f_4;
	Var16.f_4 = !bVar13;
	Var26 = { Var16 };
	MemCopy(&(Var26.f_10), {cVar0}, 4);
	Var26.f_15 = 1;
	if (__LIB_0__::func_16() == 0)
	{
		Var26.f_14 = 1200;
	}
	else
	{
		Var26.f_14 = 1024;
	}
	__LIB_4__::func_709(Var26, 2);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("PROPSET_GANG_CAMP_PLAYER_CRAFTING"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("PROPSET_GANG_CAMP_PLAYER_CRAFTING", false);
	}
	func_2(0, 0);
}

void func_2(int iParam0, bool bParam1)
{
	int iVar0;
	SCRIPTS::_0xE7282390542F570D(uLocal_16);
	if (__LIB_0__::func_2() != -1)
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	iVar0 = __LIB_0__::func_16();
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

bool func_9()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_0__::func_16();
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

char* func_10(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_0__::func_16();
	*uParam0 = __LIB_17__::func_933(uParam0->f_1, &bVar1, iVar0 == 0);
	if (!__LIB_5__::func_664(*uParam0))
	{
		return "";
	}
	if (Global_1393237.f_199)
	{
		return "";
	}
	if (__LIB_17__::func_935(uParam0->f_1))
	{
		*bParam1 = 1;
		return "";
	}
	if (__LIB_17__::func_941(uParam0->f_1) || __LIB_5__::func_754(*uParam0, 524288))
	{
		return __LIB_5__::func_750(iVar0);
	}
	if (bVar1)
	{
		if (__LIB_5__::func_758(1) > 1 && iVar0 != 0)
		{
			return "";
		}
		if (!func_32(uParam0->f_1, *uParam0))
		{
			return "";
		}
		if (__LIB_5__::func_667(uParam0->f_1))
		{
			return "";
		}
		if (__LIB_5__::func_767(*uParam0, iVar0 == 0))
		{
			return "";
		}
		if (__LIB_1__::func_989(uParam0->f_1, 1, 0, 0))
		{
			return "";
		}
		if (__LIB_5__::func_757(*uParam0))
		{
			return "";
		}
		if (func_37(uParam0->f_1, *uParam0))
		{
			return "";
		}
		if (!__LIB_5__::func_768(uParam0->f_1, *uParam0, iVar0 == 0))
		{
			return "";
		}
	}
	else if (__LIB_5__::func_770(*uParam0))
	{
		__LIB_5__::func_766(*uParam0);
		*uParam0 = -1;
		return "";
	}
	else if (__LIB_5__::func_759(*uParam0))
	{
		*bParam1 = 1;
		*uParam0 = -1;
		return "";
	}
	else
	{
		iVar0 = Global_1393237.f_11[*uParam0 /*30*/].f_2;
	}
	return __LIB_5__::func_750(iVar0);
}

bool func_11(vector3 vParam0)
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
	return BUILTIN::VDIST(Global_1393237.f_200, vParam0) < (__LIB_5__::func_660(__LIB_0__::func_16(), iVar0, 0) + 20f);
}

bool func_32(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (!__LIB_17__::func_936(0, vParam0, -1, -1))
	{
		return false;
	}
	if (Global_1327479.f_5 > MISC::GET_GAME_TIMER())
	{
		return false;
	}
	if (!__LIB_2__::func_410(4))
	{
		return false;
	}
	if (!__LIB_5__::func_752(__LIB_0__::func_16(), vParam0))
	{
		return false;
	}
	if (__LIB_5__::func_751() && __LIB_17__::func_920(vParam0, iLocal_14))
	{
		if (func_61())
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 75;
		}
	}
	else
	{
		iVar0 = 100;
	}
	if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 100) >= iVar0)
	{
		return false;
	}
	return true;
}

bool func_37(vector3 vParam0, int iParam3)
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
				if (fVar1 < __LIB_5__::func_660(__LIB_0__::func_16(), iVar2, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_61()
{
	if (((((__LIB_10__::func_646(64) || __LIB_10__::func_646(256)) || __LIB_10__::func_646(1024)) || __LIB_10__::func_646(4096)) || __LIB_10__::func_646(16384)) || __LIB_10__::func_646(65536))
	{
		return true;
	}
	return false;
}

