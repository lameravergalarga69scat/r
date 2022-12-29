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
		__LIB_17__::func_937(0, 0);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		__LIB_17__::func_937(0, 0);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_17__::func_937(0, 0);
	}
	Var8 = -1;
	Var8.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	Var8.f_4 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, true);
	while (__LIB_5__::func_749(&Var8))
	{
		BUILTIN::WAIT(0);
	}
	__LIB_5__::func_653();
	iVar15 = __LIB_17__::func_933(Var8.f_1, &bVar13, __LIB_1__::func_976() == 0);
	__LIB_17__::func_934();
	if (!__LIB_17__::func_941(Var8.f_1))
	{
		if (__LIB_17__::func_938() && bVar13)
		{
			__LIB_17__::func_937(0, 0);
		}
	}
	StringCopy(&cVar0, func_10(&Var8, &bVar14), 64);
	if (__LIB_17__::func_939(Var8.f_1))
	{
		__LIB_17__::func_937(iVar15, (!bVar13 && !bVar14));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		__LIB_17__::func_937(iVar15, (!bVar13 && !bVar14));
	}
	if (__LIB_17__::func_941(Var8.f_1))
	{
		if (!__LIB_5__::func_664(Var8))
		{
			if (__LIB_1__::func_976() != 0)
			{
				Var8 = 0;
			}
			else
			{
				Var8 = 3;
			}
		}
		StringCopy(&cVar0, __LIB_5__::func_750(__LIB_1__::func_976()), 64);
		if (!__LIB_5__::func_754(Var8, 32768))
		{
			__LIB_5__::func_766(Var8);
			bVar13 = true;
		}
	}
	else if (__LIB_1__::func_976() == 1)
	{
		if (__LIB_5__::func_655())
		{
			__LIB_17__::func_937(iVar15, !bVar14);
		}
		if (__LIB_1__::func_923())
		{
			__LIB_17__::func_937(iVar15, 1);
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		__LIB_17__::func_937(iVar15, (!bVar13 && !bVar14));
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
	if (__LIB_1__::func_976() == 0)
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
	__LIB_17__::func_937(0, 0);
}

char* func_10(var uParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	iVar0 = __LIB_1__::func_976();
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
		if (__LIB_17__::func_940(uParam0->f_1, *uParam0))
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

bool func_32(vector3 vParam0, var uParam3)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (iLocal_14 == -1)
	{
		iLocal_14 = __LIB_0__::func_979(vParam0);
	}
	if (!__LIB_0__::func_181())
	{
		return false;
	}
	if (Global_1393237.f_3 > MISC::GET_GAME_TIMER())
	{
		return false;
	}
	if (Global_1327479.f_5 > MISC::GET_GAME_TIMER())
	{
		return false;
	}
	if (!__LIB_17__::func_936(1, vParam0, -1, -1))
	{
		return false;
	}
	if (__LIB_0__::func_923(Global_40.f_9632.f_192))
	{
		__LIB_11__::func_182(__LIB_0__::func_23(), &uVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
		if ((iVar3 < 1 && iVar4 < 1) && iVar5 < 1)
		{
			if (__LIB_5__::func_751())
			{
				if (iVar2 >= 3 && iVar1 >= 0)
				{
					return false;
				}
			}
			else if (iVar2 >= 3 && iVar1 >= 0)
			{
				return false;
			}
		}
	}
	if (!__LIB_5__::func_752(__LIB_1__::func_976(), vParam0))
	{
		return false;
	}
	if (!__LIB_5__::func_763(-1))
	{
		return false;
	}
	else if (!__LIB_5__::func_763(__LIB_3__::func_554(iLocal_14, 0, 0, 0)))
	{
		return false;
	}
	if (__LIB_3__::func_213(vParam0, __LIB_5__::func_713(iLocal_14), 4, 1))
	{
		return false;
	}
	if (__LIB_3__::func_213(vParam0, __LIB_5__::func_712(iLocal_14), 2, 1))
	{
		return false;
	}
	switch (iLocal_14)
	{
		case 10:
			if (__LIB_0__::func_0())
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 12:
			if (!__LIB_2__::func_633(3))
			{
				return true;
			}
			break;
		case 1:
		case 3:
		case 9:
			if (!__LIB_2__::func_633(0))
			{
				return true;
			}
			break;
		case 11:
			if (!__LIB_2__::func_633(2))
			{
				return true;
			}
	}
	return false;
}

