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
	struct<57> Local_14 = { 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	vector3 vLocal_73 = { 0f, 0f, 0f };
	float fLocal_76 = 0f;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	var uVar1;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	Local_14.f_56 = ScriptParam_0;
	Local_14.f_56.f_1 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_1(&Local_14);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_1(&Local_14);
	}
	if (__LIB_1__::func_989(vLocal_73, 1, 0, 0))
	{
		func_1(&Local_14);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_77))
	{
		iLocal_77 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-1618.485f, -200.3116f, 156.5484f, 0f, 0f, 0f, 83f, 83f, 40f, "MissingHusbandCrashRestriction");
	}
	while (!__LIB_0__::func_382(256))
	{
		BUILTIN::WAIT(0);
	}
	vLocal_73 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	fLocal_76 = TASK::_GET_SCENARIO_POINT_HEADING(ScriptParam_0.f_1, true);
	while (func_4())
	{
		switch (iLocal_78)
		{
			case 0:
				if (!__LIB_0__::func_6(iVar0))
				{
					iVar0 = __LIB_1__::func_293(__LIB_3__::func_574(8192), 0, 3, __LIB_3__::func_575(8192));
				}
				if (func_9(&iVar0, &uVar1))
				{
					if (!__LIB_0__::func_1(uVar1, 4) || !__LIB_0__::func_1(uVar1, 8))
					{
						iLocal_78 = 1;
					}
				}
				break;
			case 1:
				if (func_12(&Local_14, 8192, &Local_14, 18, 0, __LIB_14__::func_594(), 0, 0))
				{
					__LIB_2__::func_261(iLocal_77, "SP_MissingHusbandWagon1_Block", 1, 0, 0, 0, -1082130432 /* Float: -1f */);
					iLocal_78 = 2;
				}
				break;
			case 2:
				break;
			default:
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_1(&Local_14);
	while (!SCRIPTS::_0x380FFA15B72408FB(10))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_77))
	{
		__LIB_1__::func_544(iLocal_77);
		VOLUME::_DELETE_VOLUME(iLocal_77);
	}
	if (SCRIPTS::_DOES_THREAD_EXIST(*uParam0))
	{
		SCRIPTS::_0x7DE4643157AD646C(*uParam0);
	}
	SCRIPTS::_0xE7282390542F570D(uParam0->f_56);
}

bool func_4()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		return false;
	}
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	return true;
}

bool func_9(int iParam0, var uParam1)
{
	if (__LIB_0__::func_6(*iParam0))
	{
		*uParam1 = __LIB_5__::func_297(*iParam0);
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_12(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, char* sParam5, bool bParam6, int iParam7)
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
	{
		return false;
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_56.f_1))
	{
		return false;
	}
	if (bParam6 && __LIB_0__::func_296(128, 0, 1))
	{
		return false;
	}
	if (iParam7 && __LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 1, 1, 1))
	{
		return false;
	}
	uParam0->f_48 = 1;
	uParam0->f_1 = iParam1;
	uParam0->f_5 = __LIB_1__::func_293(__LIB_3__::func_574(iParam1), 0, 3, __LIB_3__::func_575(iParam1));
	func_24(&(uParam0->f_5), &(uParam0->f_3));
	if (!__LIB_0__::func_1(uParam0->f_3, 4))
	{
		iVar0 = 4;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 8))
	{
		iVar0 = 8;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 16))
	{
		iVar0 = 16;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 32))
	{
		iVar0 = 32;
	}
	else if (!__LIB_0__::func_1(uParam0->f_3, 64))
	{
		iVar0 = 64;
	}
	if (iParam1 == 32768)
	{
		if (!__LIB_7__::func_429(uParam0))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_3, 1))
	{
		if (func_26(uParam0, iParam1, &(uParam0->f_5), iParam3, iParam4) && !__LIB_0__::func_1(uParam0->f_3, 2))
		{
		}
	}
	if (!__LIB_0__::func_1(uParam0->f_3, iVar0))
	{
		if (__LIB_0__::func_1(uParam0->f_3, 2))
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(*uParam2, false))
			{
				SCRIPTS::REQUEST_SCRIPT(sParam5);
				if (SCRIPTS::HAS_SCRIPT_LOADED(sParam5))
				{
					uParam0->f_52 = { __LIB_6__::func_620(iParam1) };
					uParam0->f_5 = __LIB_1__::func_293(__LIB_3__::func_574(iParam1), 0, 3, __LIB_3__::func_575(iParam1));
					*uParam2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(sParam5, uParam0, 59, 1024);
					SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam5);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_24(var uParam0, var uParam1)
{
	if (__LIB_0__::func_6(*uParam0))
	{
		*uParam1 = __LIB_0__::func_895(*uParam0);
		if (!__LIB_0__::func_1(*uParam1, 2))
		{
			__LIB_1__::func_581(uParam1, 2);
		}
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

bool func_26(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4)
{
	if (__LIB_0__::func_1(uParam0->f_3, 1))
	{
		return true;
	}
	if (uParam0->f_47 != 1)
	{
		uParam0->f_47 = 0;
	}
	switch (uParam0->f_47)
	{
		case 0:
			*uParam2 = __LIB_1__::func_293(iParam3, iParam4, 3, 0);
			if (!__LIB_0__::func_6(*uParam2))
			{
				return false;
			}
			else
			{
				if (!func_24(&(uParam0->f_5), &(uParam0->f_3)))
				{
					return false;
				}
				else
				{
					__LIB_1__::func_581(&(uParam0->f_3), 1);
				}
				uParam0->f_47 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_1(uParam0->f_3, 1))
			{
				return true;
			}
			else
			{
				uParam0->f_47 = 0;
			}
			break;
	}
	return false;
}

