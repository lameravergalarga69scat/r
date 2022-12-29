#region Local Var
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	int iVar5;
	bool bVar6;
	iVar0 = ScriptParam_0.f_1;
	bVar1 = ScriptParam_0.f_3;
	bVar2 = ScriptParam_0.f_4;
	iVar5 = __LIB_6__::func_846(&iVar0);
	bVar6 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_0__::func_19(&Var3, 3);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		if (__LIB_1__::func_372(Global_35, 0) != joaat("WEAPON_UNARMED"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
		}
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), joaat("WEAPON_UNARMED"), 0);
	while (true)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			__LIB_0__::func_19(&Var3, 3);
		}
		switch (__LIB_0__::func_81(&Var3))
		{
			case 0:
				if (__LIB_1__::func_372(Global_35, 0) != joaat("WEAPON_UNARMED"))
				{
				}
				else
				{
					__LIB_0__::func_19(&Var3, 1);
				}
				break;
			case 1:
				func_5(iVar5);
				func_6(iVar0);
				Var3.f_1 = MISC::GET_GAME_TIMER();
				__LIB_9__::func_275(iVar5, 1);
				__LIB_0__::func_19(&Var3, 2);
				break;
			case 2:
				if (bVar2)
				{
					if ((MISC::GET_GAME_TIMER() - Var3.f_1) > 5500)
					{
						bVar6 = func_8(ScriptParam_0);
						func_9(iVar5, 1, !bVar6);
						if (bVar1)
						{
							__LIB_18__::func_924(iVar5, bVar6, 1, 0);
						}
						if (bVar6)
						{
							__LIB_1__::func_424(209, __LIB_6__::func_847(iVar5), 1);
						}
						__LIB_0__::func_19(&Var3, 3);
					}
				}
				else
				{
					__LIB_0__::func_19(&Var3, 3);
				}
				break;
			case 3:
				__LIB_2__::func_822();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

void func_5(int iParam0)
{
	var uVar0;
	uVar0 = __LIB_0__::func_924(MISC::_CREATE_VAR_STRING(10, "ITEM_TASTED_PUMP_MULT", MISC::_CREATE_VAR_STRING(0, __LIB_0__::func_776(__LIB_3__::func_960(iParam0))), 1), "", 0, 0, joaat("COLOR_PURE_WHITE"), "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	Global_1913500[iParam0 /*4*/] = uVar0;
}

void func_6(int iParam0)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
}

int func_8(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	var uVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	uVar0 = Param0.f_1;
	bVar1 = Param0.f_3;
	bVar2 = Param0.f_4;
	iVar3 = __LIB_6__::func_846(&uVar0);
	if (!bVar2 || __LIB_7__::func_829(iVar3))
	{
		return 0;
	}
	iVar4 = __LIB_9__::func_570(iVar3);
	if ((!bVar1 || !__LIB_0__::func_144(iVar4, 0)) || __LIB_10__::func_712(iVar4))
	{
		return 0;
	}
	return 1;
}

void func_9(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_3__::func_960(iParam0);
	iVar1 = __LIB_6__::func_846(&iVar0);
	if (iVar1 != iParam0)
	{
		__LIB_4__::func_109(iVar1, 4);
	}
	if (!__LIB_3__::func_959(iParam0))
	{
		return;
	}
	if (__LIB_7__::func_829(iParam0))
	{
		return;
	}
	__LIB_4__::func_109(iParam0, 4);
	__LIB_7__::func_832(iParam0, bParam1);
	if (!__LIB_6__::func_115(iParam0))
	{
		func_28(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!__LIB_0__::func_296(0, 0, 1))
		{
			__LIB_0__::func_703(1, 6);
		}
	}
}

void func_28(int iParam0, bool bParam1, bool bParam2)
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
		__LIB_9__::func_533(iParam0, __LIB_4__::func_110());
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

