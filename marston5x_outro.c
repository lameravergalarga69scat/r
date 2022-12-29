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
	struct<4> Local_15 = { 0, 0, 0, 0 } ;
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
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(&Local_15);
	}
	__LIB_11__::func_243(&Local_15, &uScriptParam_0);
	while (!__LIB_5__::func_232(&Local_15))
	{
		__LIB_5__::func_233(&Local_15);
		switch (__LIB_0__::func_57(Local_15))
		{
			case 0:
				if (__LIB_0__::func_0(&Local_15))
				{
					__LIB_0__::func_19(&Local_15, 1);
				}
				break;
			case 1:
				if (func_8(&Local_15))
				{
					__LIB_0__::func_19(&Local_15, 2);
				}
				break;
			case 2:
				if (func_9(&Local_15))
				{
					__LIB_0__::func_19(&Local_15, 3);
				}
				break;
			case 3:
				func_1(&Local_15);
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_15);
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
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	return 1;
}

int func_21(var uParam0)
{
	__LIB_0__::func_7(&Global_1935630, 1048576);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	if (!__LIB_2__::func_410(62))
	{
		CLOCK::ADVANCE_CLOCK_TIME_TO(8, 0, 0);
	}
	return 1;
}

bool func_23(var uParam0)
{
	switch (iLocal_14)
	{
		case 0:
			iLocal_14 = 1;
			break;
		case 1:
			__LIB_0__::func_8(&Global_1935630, 1048576);
			HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
			return true;
	}
	return false;
}

