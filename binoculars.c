#region Local Var
	struct<19> Local_0 = { 0, 0, 2514129, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 0 } ;
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
#endregion
void __EntryFunction__()
{
	Local_0.f_3 = "mech_inventory@binoculars";
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		Local_0.f_8 = PED::IS_PED_ON_MOUNT(Global_35);
	}
	func_1();
	if (__LIB_3__::func_829(472))
	{
		__LIB_4__::func_861(472);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
	{
		func_4(&Local_0);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!ENTITY::IS_ENTITY_DEAD(Global_35) && func_5(&Local_0))
	{
		if (func_6() == 4 || func_6() == 5)
		{
			func_7(&Local_0);
		}
		if (__LIB_0__::func_399(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
		{
			func_9(&(Local_0.f_13), &(Local_0.f_14), &(Local_0.f_15), &(Local_0.f_16));
			if (Local_0.f_15 != 0 || Local_0.f_16 != 0)
			{
				__LIB_1__::func_148(&(Local_0.f_18));
			}
		}
		if (func_6() > 0 && __LIB_0__::func_399(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
		{
			func_11(&Local_0, 8);
		}
		if (__LIB_0__::func_139(Local_0.f_4[0]) && __LIB_1__::func_732(Local_0.f_4[0], 1))
		{
			func_11(&Local_0, 6);
		}
		func_14(&Local_0);
		switch (func_6())
		{
			case 0:
				if (__LIB_16__::func_440(&Local_0))
				{
					__LIB_16__::func_441(&Local_0);
				}
				func_11(&Local_0, 1);
				break;
			case 1:
				if (__LIB_16__::func_440(&Local_0))
				{
					__LIB_16__::func_441(&Local_0);
				}
				func_11(&Local_0, 2);
				break;
			case 2:
				if (__LIB_16__::func_440(&Local_0))
				{
					__LIB_16__::func_441(&Local_0);
				}
				if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_KIT_BINOCULARS"))
				{
				}
				else
				{
					__LIB_0__::func_105(1);
					__LIB_1__::func_240(473, 0);
					func_19(&Local_0);
					Local_0.f_4[0] = __LIB_4__::func_864("BINO_PUT_AWAY", joaat("INPUT_CAMERA_PUT_AWAY"), 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
					func_11(&Local_0, 4);
				}
				break;
			case 4:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BINOCULARSONFOOT"));
				if (__LIB_16__::func_440(&Local_0))
				{
					__LIB_16__::func_441(&Local_0);
				}
				if (func_21())
				{
					__LIB_4__::func_860("enter", "Binoculars_Sounds");
					func_11(&Local_0, 5);
				}
				break;
			case 5:
				PAD::_SET_CONTROL_CONTEXT(5, joaat("BINOCULARSINUSE"));
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
				if (CAM::_0xDC62CD70658E7A02())
				{
					__LIB_4__::func_860("zoom_in", "Binoculars_Sounds");
				}
				if (CAM::_0x796085220ADCC847())
				{
					__LIB_4__::func_860("zoom_out", "Binoculars_Sounds");
				}
				if (__LIB_16__::func_440(&Local_0))
				{
					__LIB_16__::func_441(&Local_0);
					__LIB_0__::func_105(1);
					__LIB_1__::func_748(&(Local_0.f_4[2]), 1, 1);
					Local_0.f_4[2] = __LIB_1__::func_877("IB_ZOOM", joaat("INPUT_SNIPER_ZOOM"), 16, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
					__LIB_1__::func_522(Local_0.f_4[2], 11, 1, 1);
					__LIB_1__::func_522(Local_0.f_4[2], 17, 1, 1);
					__LIB_4__::func_862(Local_0.f_4[2], joaat("INPUT_SNIPER_ZOOM"));
				}
				if (func_27())
				{
					__LIB_0__::func_105(1);
					__LIB_1__::func_748(&(Local_0.f_4[2]), 1, 1);
					__LIB_4__::func_860("exit", "Binoculars_Sounds");
					func_11(&Local_0, 4);
				}
				break;
			case 6:
				if (__LIB_16__::func_440(&Local_0))
				{
					func_19(&Local_0);
					__LIB_16__::func_441(&Local_0);
				}
				func_11(&Local_0, 7);
				break;
			case 7:
				if (__LIB_16__::func_440(&Local_0))
				{
					__LIB_16__::func_441(&Local_0);
				}
				func_11(&Local_0, 8);
				if (__LIB_1__::func_372(Global_35, 0) == joaat("WEAPON_KIT_BINOCULARS"))
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
				}
				break;
			case 8:
				if (__LIB_16__::func_440(&Local_0))
				{
					__LIB_0__::func_105(1);
					__LIB_16__::func_441(&Local_0);
				}
				func_4(&Local_0);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_4(&Local_0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	Global_1911668 = 0;
}

void func_4(int* iParam0)
{
	if (__LIB_3__::func_829(474))
	{
		__LIB_4__::func_861(474);
	}
	if (__LIB_3__::func_829(473))
	{
		__LIB_4__::func_861(473);
	}
	func_19(iParam0);
	func_1();
	Global_1911669 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	if (func_29(iParam0, 64))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
	}
	MAP::DISPLAY_RADAR(true);
	if (CAM::DOES_CAM_EXIST(iParam0->f_1))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::SET_CAM_ACTIVE(iParam0->f_1, false);
		CAM::DESTROY_CAM(iParam0->f_1, false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 2048, false);
	__LIB_0__::func_105(1);
	HUD::_TEXT_DATABASE_DELETE("BINO");
}

bool func_5(int* iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		return false;
	}
	if (func_30())
	{
		func_31(iParam0, 8);
		func_31(iParam0, 16);
		func_31(iParam0, 64);
	}
	if (func_29(iParam0, 8) || func_29(iParam0, 16))
	{
		return false;
	}
	if (!__LIB_3__::func_463(joaat("WEAPON_KIT_BINOCULARS"), 1, 0) && __LIB_0__::func_399(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
	{
		return false;
	}
	if (__LIB_3__::func_64())
	{
		return false;
	}
	if (Global_1357517)
	{
		return false;
	}
	return true;
}

int func_6()
{
	return Global_1911669;
}

void func_7(int* iParam0)
{
	if (func_34(1))
	{
		if (!func_29(iParam0, 16))
		{
			if (func_6() == 5)
			{
				func_31(iParam0, 8);
				func_31(iParam0, 16);
			}
			else
			{
				func_11(iParam0, 6);
			}
		}
		func_35(1);
	}
	if (func_34(2))
	{
		if (!func_29(iParam0, 8))
		{
			if (func_6() == 5)
			{
				func_31(iParam0, 8);
			}
		}
		func_35(2);
	}
	if (func_34(4))
	{
		if (__LIB_0__::func_139(iParam0->f_4[0]))
		{
			__LIB_1__::func_221(iParam0->f_4[0], 0, 1);
		}
		func_35(4);
	}
	else if (__LIB_0__::func_139(iParam0->f_4[0]) && __LIB_4__::func_863(iParam0->f_4[0], 1))
	{
		__LIB_1__::func_221(iParam0->f_4[0], 1, 1);
	}
	if (func_34(8))
	{
		if (!func_29(iParam0, 32))
		{
			func_31(iParam0, 32);
		}
		func_35(8);
	}
	if (func_34(16))
	{
		if (func_29(iParam0, 32))
		{
			func_38(iParam0, 32);
		}
		func_35(16);
	}
}

void func_9(var uParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam0 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_LEFT_AXIS_X")) * 127f));
	*uParam1 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_LEFT_AXIS_Y")) * 127f));
	*uParam2 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_RIGHT_AXIS_X")) * 127f));
	*uParam3 = BUILTIN::FLOOR((PAD::GET_CONTROL_NORMAL(2, joaat("INPUT_SCRIPT_RIGHT_AXIS_Y")) * 127f));
}

void func_11(int* iParam0, int iParam1)
{
	Global_1911669 = iParam1;
	__LIB_16__::func_444(iParam0);
}

void func_14(int iParam0)
{
	if (__LIB_0__::func_399(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_SPRINT"), false);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_WEAPON_MELEE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_PRIMARY"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_HORSE_ATTACK_SECONDARY"), false);
	if (CAM::DOES_CAM_EXIST(iParam0->f_1) && CAM::IS_CAM_ACTIVE(iParam0->f_1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SWITCH_SHOULDER"), false);
	}
}

void func_19(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iParam0->f_4)
	{
		if (__LIB_0__::func_139(iParam0->f_4[iVar0]))
		{
			__LIB_1__::func_748(&(iParam0->f_4[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

bool func_21()
{
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (__LIB_0__::func_399(Global_35, 1, 0, 1) != joaat("WEAPON_KIT_BINOCULARS"))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 2048, false);
		}
		return true;
	}
	return false;
}

bool func_27()
{
	if (!CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 2048, false);
		return true;
	}
	return false;
}

bool func_29(int* iParam0, int iParam1)
{
	return (iParam0->f_12 && iParam1) != 0;
}

bool func_30()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_DAMAGE"):
			case joaat("EVENT_ENTITY_DAMAGED"):
				if (func_48(iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	if (PED::IS_PED_IN_MELEE_COMBAT(Global_35))
	{
		return true;
	}
	return false;
}

void func_31(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 || iParam1);
}

bool func_34(int iParam0)
{
	return (Global_1911668 && iParam0) != 0;
}

void func_35(int iParam0)
{
	Global_1911668 = (Global_1911668 - (Global_1911668 && iParam0));
}

void func_38(int* iParam0, int iParam1)
{
	iParam0->f_12 = (iParam0->f_12 - (iParam0->f_12 && iParam1));
}

bool func_48(int iParam0)
{
	struct<5> Var0;
	int iVar9;
	int iVar10;
	int iVar11;
	SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9);
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(Var0))
	{
		iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			return false;
		}
		if (!PED::IS_PED_A_PLAYER(iVar9))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
		{
			iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar10) || iVar10 == Global_35)
			{
				return false;
			}
		}
		else
		{
			return false;
		}
		if (Var0.f_4 <= 1f)
		{
			return false;
		}
		iVar11 = WEAPON::GET_WEAPONTYPE_GROUP(Var0.f_2);
		if (iVar11 != joaat("GROUP_MELEE") && iVar11 != joaat("GROUP_UNARMED"))
		{
			return false;
		}
	}
	return false;
}

