#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	struct<4> Local_9 = { 0, 0, 0, 0 } ;
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_9);
	}
	__LIB_17__::func_753(&Local_9, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_9))
	{
		__LIB_5__::func_233(&Local_9);
		switch (__LIB_0__::func_57(Local_9))
		{
			case 0:
				if (__LIB_0__::func_0(&Local_9))
				{
					__LIB_0__::func_19(&Local_9, 1);
				}
				break;
			case 1:
				if (func_8(&Local_9))
				{
					__LIB_0__::func_19(&Local_9, 2);
				}
				break;
			case 2:
				if (func_9(&Local_9))
				{
					__LIB_0__::func_19(&Local_9, 3);
				}
				break;
			case 3:
				func_1(&Local_9);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_9);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	__LIB_1__::func_752();
	func_11(uParam0);
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (__LIB_0__::func_31(iVar1) && __LIB_0__::func_699(iVar1))
		{
			iVar2 = Global_1360165[iVar0 /*1157*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (__LIB_1__::func_22(iVar1))
				{
					__LIB_1__::func_774(iVar1, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
	if (__LIB_4__::func_802(uParam0, 4))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
		__LIB_4__::func_803(uParam0, 4);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8(var uParam0)
{
	if ((!__LIB_4__::func_802(uParam0, 2) && SCRIPTS::_DOES_THREAD_EXIST(uParam0->f_1)) && SCRIPTS::IS_THREAD_ACTIVE(uParam0->f_1, false))
	{
		return false;
	}
	return func_21(uParam0);
}

bool func_9(var uParam0)
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_4__::func_805())
	{
		iVar0 = 0;
	}
	if (!func_23(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_11(var uParam0)
{
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	return 1;
}

int func_21(var uParam0)
{
	__LIB_6__::func_891(Global_35);
	ENTITY::SET_ENTITY_COORDS(Global_35, Global_1835011[4 /*74*/].f_18, true, false, true, true);
	PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), Global_1835011[4 /*74*/].f_18, 0f, false, true, true, false);
	__LIB_1__::func_283(&uLocal_3, 0);
	MISC::SET_BIT(&(Global_1956580.f_1), 5);
	return 1;
}

bool func_23(var uParam0)
{
	if (__LIB_0__::func_265(&uLocal_3) < 1f)
	{
		return false;
	}
	if (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()) && !__LIB_0__::func_75(&uLocal_6))
	{
		__LIB_1__::func_283(&uLocal_6, 0);
	}
	if (__LIB_0__::func_265(&uLocal_6) >= 6f)
	{
		return true;
	}
	if (__LIB_0__::func_265(&uLocal_3) >= 22.5f)
	{
		if (PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
		{
			return true;
		}
		if (__LIB_0__::func_265(&uLocal_3) >= 27.5f)
		{
			return true;
		}
		else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			return true;
		}
	}
	return false;
}

