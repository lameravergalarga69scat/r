#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	vector3 vLocal_5 = { 0f, 0f, 0f };
	var uLocal_8 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	uLocal_8 = ScriptParam_0;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || __LIB_0__::func_2() != -1)
	{
		func_2(&uLocal_3);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_2(&uLocal_3);
	}
	vLocal_5 = { TASK::_GET_SCENARIO_POINT_COORDS(ScriptParam_0.f_1, true) };
	while (func_3())
	{
		if (__LIB_12__::func_599())
		{
			func_2(&uLocal_3);
		}
		if (__LIB_0__::func_296(0, 0, 1))
		{
			func_2(&uLocal_3);
		}
		else if (func_6(&uLocal_3))
		{
		}
		BUILTIN::WAIT(0);
	}
	func_2(&uLocal_3);
}

void func_2(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
	SCRIPTS::_0xE7282390542F570D(uLocal_8);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_3()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_2(&uLocal_3);
		return false;
	}
	return true;
}

bool func_6(var uParam0)
{
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				func_13(uParam0);
			}
			else
			{
				uParam0->f_1 = MAP::_BLIP_ADD_FOR_COORD(2098831270, vLocal_5);
				func_13(uParam0);
			}
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			if (__LIB_0__::func_94(Global_35, vLocal_5, 0) < 25f)
			{
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			break;
	}
	return false;
}

void func_13(var uParam0)
{
	MAP::SET_BLIP_SPRITE(uParam0->f_1, joaat("BLIP_TAXIDERMIST"), true);
}

