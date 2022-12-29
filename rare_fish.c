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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	vector3 vLocal_16 = { 0f, 0f, 0f };
	var uLocal_19 = 0;
	int iLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	uLocal_19 = ScriptParam_0;
	iLocal_20 = ScriptParam_0.f_1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514) || __LIB_0__::func_2() != -1)
	{
		func_2(&uLocal_14);
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(ScriptParam_0.f_1))
	{
		func_2(&uLocal_14);
	}
	iLocal_21 = func_3();
	vLocal_16 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_20, true) };
	if (iLocal_21 == joaat("LEGENDARY_FISHING_SPOT_13"))
	{
		if (!__LIB_1__::func_185(21))
		{
			if (!__LIB_8__::func_961(joaat("HAI_FISHING_02")))
			{
				func_2(&uLocal_14);
			}
		}
	}
	if (iLocal_21 == joaat("LEGENDARY_FISHING_SPOT_14") && !__LIB_1__::func_200(148))
	{
		func_2(&uLocal_14);
	}
	if (__LIB_0__::func_448(iLocal_21))
	{
		func_2(&uLocal_14);
	}
	if (__LIB_0__::func_28() && __LIB_1__::func_194() == 0)
	{
		func_2(&uLocal_14);
	}
	while (func_10())
	{
		if (__LIB_12__::func_599())
		{
			func_2(&uLocal_14);
		}
		if (__LIB_6__::func_668() == 654481153)
		{
			if (func_13(&uLocal_14))
			{
				func_2(&uLocal_14);
			}
		}
		else if (__LIB_0__::func_296(0, 0, 1))
		{
			func_2(&uLocal_14);
		}
		else if (func_13(&uLocal_14))
		{
			func_2(&uLocal_14);
		}
		BUILTIN::WAIT(0);
	}
	func_2(&uLocal_14);
}

void func_2(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
	SCRIPTS::_0xE7282390542F570D(uLocal_19);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_3()
{
	int iVar0;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_20))
	{
		iVar0 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iLocal_20));
	}
	return COLLECTION::_0x126CBEBBA46693CF(iVar0, -940661134, 0);
}

bool func_10()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_2(&uLocal_14);
		return false;
	}
	return true;
}

bool func_13(var uParam0)
{
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (__LIB_0__::func_314(iLocal_21))
			{
				func_2(uParam0);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 1);
			}
			break;
		case 1:
			if (__LIB_0__::func_315(16))
			{
				iLocal_22 = 100;
			}
			else
			{
				iLocal_22 = 50;
			}
			if (__LIB_0__::func_94(Global_35, vLocal_16, 0) < IntToFloat(iLocal_22))
			{
				if (iLocal_21 == joaat("LEGENDARY_FISHING_SPOT_14") || iLocal_21 == joaat("LEGENDARY_FISHING_SPOT_13"))
				{
					if (!__LIB_1__::func_185(21) && !__LIB_8__::func_961(joaat("HAI_FISHING_02")))
					{
					}
					else
					{
						func_26();
					}
				}
				else
				{
					func_26();
				}
				__LIB_0__::func_19(uParam0, 2);
			}
			break;
		case 2:
			__LIB_1__::func_409(iLocal_21);
			if (func_28(iLocal_21))
			{
				if (!__LIB_0__::func_314(func_29(iLocal_21)))
				{
					MAP::_0xD8C7162AB2E2AF45(__LIB_10__::func_764(iLocal_21));
				}
				return true;
			}
			break;
	}
	return false;
}

void func_26()
{
	if (__LIB_0__::func_28())
	{
		if (__LIB_1__::func_187(0) && !__LIB_1__::func_187(41))
		{
			__LIB_10__::func_905(380, 1);
		}
		else
		{
			__LIB_10__::func_905(379, 1);
		}
	}
}

bool func_28(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISHING_SPOT_11"):
		case joaat("LEGENDARY_FISHING_SPOT_12"):
		case joaat("LEGENDARY_FISHING_SPOT_10"):
		case joaat("LEGENDARY_FISHING_SPOT_06"):
		case joaat("LEGENDARY_FISHING_SPOT_05"):
		case joaat("LEGENDARY_FISHING_SPOT_04"):
		case joaat("LEGENDARY_FISHING_SPOT_03"):
			return true;
	}
	return false;
}

int func_29(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LEGENDARY_FISHING_SPOT_03"):
			return joaat("LEGENDARY_FISH_03");
		case joaat("LEGENDARY_FISHING_SPOT_05"):
			return joaat("LEGENDARY_FISH_05");
		case joaat("LEGENDARY_FISHING_SPOT_06"):
			return joaat("LEGENDARY_FISH_06");
		case joaat("LEGENDARY_FISHING_SPOT_04"):
			return joaat("LEGENDARY_FISH_04");
		case joaat("LEGENDARY_FISHING_SPOT_10"):
			return joaat("LEGENDARY_FISH_10");
		case joaat("LEGENDARY_FISHING_SPOT_11"):
			return joaat("LEGENDARY_FISH_11");
		case joaat("LEGENDARY_FISHING_SPOT_12"):
			return joaat("LEGENDARY_FISH_12");
		default:
			break;
	}
	return 0;
}

