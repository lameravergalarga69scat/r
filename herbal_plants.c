#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	struct<2> Local_3 = { 0, 0 } ;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	int iLocal_10 = 0;
	var uLocal_11 = 0;
	int iLocal_12 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	uLocal_11 = ScriptParam_0;
	iLocal_10 = ScriptParam_0.f_1;
	if (__LIB_0__::func_2() == -1)
	{
	}
	else
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		if (__LIB_0__::func_64(0) != 10)
		{
		}
		else
		{
			func_3(&Local_3);
		}
	}
	if (__LIB_0__::func_2() == -1)
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
		{
			func_3(&Local_3);
		}
	}
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_10))
	{
		func_3(&Local_3);
	}
	Local_3.f_1 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_10, true) };
	if (func_4(&Local_3))
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_10, false);
		func_3(&Local_3);
	}
	else
	{
		TASK::_SET_SCENARIO_POINT_ACTIVE(iLocal_10, true);
	}
	while (func_5())
	{
		if (func_6())
		{
			func_3(&Local_3);
		}
		if (func_7(&Local_3))
		{
			func_3(&Local_3);
		}
		BUILTIN::WAIT(0);
	}
	func_3(&Local_3);
}

void func_3(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_5));
	}
	SCRIPTS::_0xE7282390542F570D(uLocal_11);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_4(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (__LIB_0__::func_175(Local_3.f_1, Global_1913500[iVar0 /*4*/].f_1, 1056964608 /* Float: 0.5f */, 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_5()
{
	if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
		func_3(&Local_3);
		return false;
	}
	return true;
}

bool func_6()
{
	if (Global_1572887.f_12 == -1)
	{
		if (PED::IS_PED_INJURED(Global_35))
		{
			return true;
		}
	}
	else if (Global_1225639.f_12)
	{
		return true;
	}
	return false;
}

bool func_7(var uParam0)
{
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			iLocal_12 = func_10();
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			if (func_12(uParam0))
			{
				if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
				{
					MAP::REMOVE_BLIP(&(uParam0->f_5));
				}
				func_13(uParam0->f_1);
				return true;
			}
			else if (MAP::DOES_BLIP_EXIST(uParam0->f_5))
			{
				func_14(uParam0);
			}
			else
			{
				uParam0->f_5 = MAP::_BLIP_ADD_FOR_COORD(1425226969, uParam0->f_1);
				func_14(uParam0);
			}
			break;
	}
	return false;
}

int func_10()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (__LIB_3__::func_463(func_15(iVar0), 1, 0))
		{
			iVar1 = (iVar1 + __LIB_3__::func_347(func_15(iVar0), 0, 0));
		}
		iVar0++;
	}
	return iVar1;
}

bool func_12(var uParam0)
{
	if (1.414214f >= BUILTIN::VDIST(uParam0->f_1, Global_36) && iLocal_12 < func_10())
	{
		return true;
	}
	return false;
}

void func_13(vector3 vParam0)
{
	Global_1913677 = (Global_1913677 % 10);
	Global_1913500[Global_1913677 /*4*/].f_1 = { vParam0 };
	Global_1913677++;
}

void func_14(var uParam0)
{
	MAP::_BLIP_SET_MODIFIER(uParam0->f_5, 287065609);
}

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("CONSUMABLE_HERB_BAY_BOLETE");
		case 1:
			return joaat("CONSUMABLE_HERB_BLACK_BERRY");
		case 2:
			return joaat("CONSUMABLE_HERB_CHANTERELLES");
		case 3:
			return joaat("CONSUMABLE_HERB_CREEPING_THYME");
		case 4:
			return joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY");
		case 5:
			return joaat("CONSUMABLE_HERB_OREGANO");
		case 6:
			return joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM");
		case 7:
			return joaat("CONSUMABLE_HERB_RAMS_HEAD");
		case 8:
			return joaat("CONSUMABLE_HERB_RED_RASPBERRY");
		case 9:
			return joaat("CONSUMABLE_HERB_WILD_MINT");
		case 10:
			return joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY");
		default:
			break;
	}
	return 0;
}

