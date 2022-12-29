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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	var uLocal_17 = 0;
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
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1();
	}
	while (true)
	{
		BUILTIN::WAIT(0);
		if (func_3(4, __LIB_11__::func_133(4), &uLocal_17, iLocal_15))
		{
			func_1();
		}
		switch (iLocal_14)
		{
			case 0:
				__LIB_16__::func_970(&uLocal_17);
				__LIB_9__::func_438(1);
				break;
			case 1:
				__LIB_9__::func_438(2);
				break;
			case 2:
				if (func_6())
				{
					if (!__LIB_17__::func_103(4, 536870912))
					{
						__LIB_16__::func_865(4, 536870912, 1);
						__LIB_9__::func_438(3);
					}
				}
				break;
			case 3:
				if (func_9())
				{
					__LIB_9__::func_438(4);
				}
				break;
			case 4:
				func_1();
				break;
		}
	}
}

void func_1()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_15))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_15);
	}
	__LIB_16__::func_839(&uLocal_17);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3(int iParam0, int iParam1, var uParam2, int iParam3)
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
					if (((__LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0]) || __LIB_2__::func_774(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[0])) || __LIB_9__::func_990(Global_1396257[iParam0 /*638*/][iParam1 /*48*/].f_5[1]))
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
				if (__LIB_16__::func_973(&iParam3, &(uParam2->f_18), uParam2->f_11, uParam2->f_12) || __LIB_16__::func_975(&iParam3, &(uParam2->f_20), &(uParam2->f_19), uParam2->f_11, uParam2->f_12, 2048))
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
		if (__LIB_8__::func_957(&(Global_1396257[iParam0 /*638*/].f_626), 2048))
		{
			__LIB_1__::func_581(uParam2, 256);
		}
	}
	if ((((((((((__LIB_0__::func_1(*uParam2, 2) || __LIB_0__::func_1(*uParam2, 4)) || __LIB_0__::func_1(*uParam2, 8)) || __LIB_0__::func_1(*uParam2, 16)) || __LIB_0__::func_1(*uParam2, 32)) || __LIB_0__::func_1(*uParam2, 64)) || __LIB_0__::func_1(*uParam2, 128)) || __LIB_0__::func_1(*uParam2, 256)) || __LIB_0__::func_1(*uParam2, 512)) || __LIB_0__::func_1(*uParam2, 1024)) || __LIB_0__::func_1(*uParam2, 2048))
	{
		return true;
	}
	return false;
}

bool func_6()
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_35) || !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_35)))
	{
		return false;
	}
	if (PED::_0xF103823FFE72BB49(PED::GET_MOUNT(Global_35)) == Global_35)
	{
		return false;
	}
	if (__LIB_0__::func_163(PED::GET_MOUNT(Global_35), 1041577989))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		iLocal_15 = PED::GET_MOUNT(Global_35);
		iLocal_16 = MISC::GET_GAME_TIMER() + 2000;
		return false;
	}
	if (MISC::GET_GAME_TIMER() < iLocal_16)
	{
		return false;
	}
	TASK::TASK_HORSE_ACTION(PED::GET_MOUNT(Global_35), 2, 0, 0);
	return true;
}

bool func_9()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_15))
	{
		return false;
	}
	if (__LIB_0__::func_163(PED::GET_MOUNT(Global_35), 1041577989))
	{
		return false;
	}
	if (__LIB_0__::func_163(iLocal_15, 518218985))
	{
		return true;
	}
	PED::_0xBCC76708E5677E1D(iLocal_15, 0);
	TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_15, Global_35, 3, 0, -1f, -1, 0);
	return false;
}

