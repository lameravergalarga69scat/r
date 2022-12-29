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
	struct<14> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 706334491;
	var uLocal_32 = 357863945;
	var uLocal_33 = 1071795929;
	var uLocal_34 = 1445750337;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
	var uScriptParam_2 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_1();
	}
	Local_14 = ScriptParam_0;
	Local_14.f_6 = ScriptParam_0.f_1;
	Local_14.f_9 = func_2(Local_14.f_6);
	while (func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_1();
}

void func_1()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(Local_14.f_7))
	{
		TASK::_DELETE_SCENARIO_POINT(Local_14.f_7);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_1);
		func_5(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_2) && Local_14.f_5 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(Local_14.f_5))
		{
			ENTITY::_0xD2B9C78537ED5759(Local_14.f_5);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_3))
	{
		ENTITY::DELETE_ENTITY(&(Local_14.f_3));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_4) && !__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0))
	{
		__LIB_2__::func_426(&(Local_14.f_4));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_12) && !__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0))
	{
		OBJECT::DELETE_OBJECT(&(Local_14.f_12));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_13))
	{
		OBJECT::DELETE_OBJECT(&(Local_14.f_13));
	}
	__LIB_1__::func_748(&(Local_14.f_8), 1, 1);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_14.f_1))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_14.f_1);
	}
	SCRIPTS::_0xE7282390542F570D(Local_14);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2(int iParam0)
{
	int iVar0;
	int iVar1;
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0))
	{
		iVar1 = BUILTIN::ROUND(TASK::_0x6718F40313A2B5A6(iParam0));
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, joaat("TREASURE_HUNTER"), 0);
	}
	return iVar0;
}

bool func_3()
{
	if (COLLECTION::_0xF83D3DDA4D3C8169(Local_14.f_9) > 0)
	{
	}
	else if (SCRIPTS::_0x9E4EF615E307FBBE())
	{
	}
	else if (!TASK::_DOES_SCENARIO_POINT_EXIST(Local_14.f_6))
	{
	}
	else
	{
		return true;
	}
	return false;
}

void func_4()
{
	int iVar0;
	switch (Local_14.f_10)
	{
		case 0:
			if (func_9(&Local_14))
			{
				__LIB_4__::func_811(&Local_14, 1);
			}
			break;
		case 1:
			if (func_11(&Local_14))
			{
				if (COLLECTION::_0x6052B4DE6657684F(Local_14.f_9) == 218622660)
				{
					__LIB_4__::func_811(&Local_14, 2);
				}
				else if (COLLECTION::_0x6052B4DE6657684F(Local_14.f_9) == 390004462 || COLLECTION::_0x6052B4DE6657684F(Local_14.f_9) == 6410548)
				{
					if (__LIB_0__::func_313())
					{
						__LIB_4__::func_811(&Local_14, 3);
					}
					else
					{
						__LIB_4__::func_811(&Local_14, 9);
					}
				}
				else
				{
					__LIB_4__::func_811(&Local_14, 3);
				}
			}
			break;
		case 2:
			if (DLC::IS_DLC_PRESENT(-679138445))
			{
				__LIB_4__::func_811(&Local_14, 3);
			}
			else
			{
				__LIB_4__::func_811(&Local_14, 9);
			}
			break;
		case 3:
			if (func_13(Local_14.f_9))
			{
				func_14(&Local_14, 1);
				if (Local_14.f_9 == joaat("TREASURE_HUNT_LOOT_01") || Local_14.f_9 == joaat("TREASURE_HUNT_LOOT_05"))
				{
					func_16(func_15(Local_14.f_9));
					__LIB_4__::func_811(&Local_14, 7);
				}
				else
				{
					__LIB_4__::func_811(&Local_14, 4);
				}
			}
			break;
		case 4:
			if (func_17(&Local_14))
			{
				__LIB_4__::func_811(&Local_14, 5);
			}
			break;
		case 5:
			if (func_18(&Local_14))
			{
				__LIB_4__::func_811(&Local_14, 6);
			}
			break;
		case 6:
			if (func_19(&Local_14))
			{
				__LIB_4__::func_811(&Local_14, 7);
			}
			break;
		case 7:
			if (Local_14.f_9 == joaat("TREASURE_HUNT_LOOT_03") && Global_1901328.f_95)
			{
				if (__LIB_0__::func_113())
				{
					__LIB_1__::func_265(Global_35, "RE_TH_PLAYER_MORE_MAPS_ALTA", -417894478, 0, 1, 0, 0, 1);
				}
				else if (__LIB_0__::func_181())
				{
					__LIB_1__::func_265(Global_35, "RE_TH_PLAYER_MORE_MAPS_ALTB", -417894478, 0, 1, 0, 0, 1);
				}
			}
			__LIB_4__::func_811(&Local_14, 8);
		case 8:
			if (!__LIB_0__::func_474(338))
			{
				__LIB_1__::func_240(338, 1);
			}
			if (!func_25(Local_14.f_9))
			{
				__LIB_0__::func_15(__LIB_0__::func_358(joaat("TREASURE_HUNTER_CHEST_LOOTED")), 1);
			}
			COLLECTION::_0x3EA62E56F386C997(Local_14.f_9, 1);
			if (func_28(Local_14.f_9))
			{
				switch (Local_14.f_9)
				{
					case joaat("TREASURE_HUNT_LOOT_04"):
						iVar0 = 499813453;
						break;
					case joaat("TREASURE_HUNT_LOOT_08"):
						iVar0 = 666607663;
						break;
					case joaat("TREASURE_HUNT_LOOT_12"):
						iVar0 = -220219788;
						break;
					case joaat("TREASURE_HUNT_LOOT_15"):
						iVar0 = 218622660;
						break;
					case joaat("TREASURE_HUNT_LOOT_19"):
						iVar0 = 390004462;
						break;
					case joaat("TREASURE_HUNT_LOOT_24"):
						iVar0 = 6410548;
						break;
				}
				__LIB_0__::func_364(COLLECTION::_0x6052B4DE6657684F(Local_14.f_9), Local_14.f_9, 1);
				__LIB_0__::func_919(iVar0, 1);
				func_31(Local_14.f_9);
			}
			__LIB_0__::func_703(0, 10);
			__LIB_4__::func_811(&Local_14, 9);
		case 9:
			break;
	}
}

void func_5(bool bParam0)
{
	func_33(13, 2, bParam0);
}

bool func_9(var uParam0)
{
	if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_16"))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_17, false);
		STREAMING::REQUEST_MODEL(uParam0->f_18, false);
		STREAMING::REQUEST_MODEL(uParam0->f_19, false);
		STREAMING::REQUEST_MODEL(uParam0->f_20, false);
	}
	return true;
}

bool func_11(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	struct<4> Var6;
	int iVar18;
	var uVar19;
	var uVar22;
	if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_13") || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14"))
	{
		if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_13"))
		{
			__LIB_1__::func_948(-1121184106, 0, 0.8f, 1, 1, 0, 1, 0);
		}
		if (!DLC::IS_DLC_PRESENT(-679138445))
		{
			return true;
		}
	}
	else if ((((((((uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_16") || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_17")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_18")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_20")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_21")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_22")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_23")) || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_24"))
	{
		if (!__LIB_0__::func_313())
		{
			return true;
		}
	}
	iVar0 = 1;
	if (func_42(uParam0->f_9) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
	{
		switch (uParam0->f_9)
		{
			case joaat("TREASURE_HUNT_LOOT_04"):
				iVar4 = joaat("P_ROCK_STASH01");
				break;
			case joaat("TREASURE_HUNT_LOOT_09"):
				iVar4 = joaat("P_STRONGBOX_SNOW_01X");
				break;
			case joaat("TREASURE_HUNT_LOOT_19"):
				iVar4 = joaat("P_ROCK_STASH01");
				break;
			case joaat("TREASURE_HUNT_LOOT_24"):
				iVar4 = joaat("P_ROCK_STASH01");
				break;
		}
		uParam0->f_2 = func_44(uParam0, iVar4, func_43(uParam0->f_9));
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
		{
			if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19"))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_2, func_45(joaat("TREASURE_HUNT_LOOT_19")), 2, true);
			}
			else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_24"))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_2, func_45(joaat("TREASURE_HUNT_LOOT_24")), 2, true);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_2, func_43(joaat("TREASURE_HUNT_LOOT_24")), true, false, true, true);
			}
		}
		iVar0 = 0;
	}
	if ((((func_46(uParam0->f_9) && func_13(uParam0->f_9)) && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_19")) && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_24")) && !ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_08") || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_12"))
		{
			iVar5 = joaat("S_PICKUP_GOLDBAR01X");
		}
		else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14"))
		{
			iVar5 = joaat("P_CS_BILLSTACK01X");
		}
		else
		{
			iVar5 = joaat("S_MAPROLLED04X");
		}
		STREAMING::REQUEST_MODEL(iVar5, false);
		if (STREAMING::HAS_MODEL_LOADED(iVar5))
		{
			if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_09"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
				{
					if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_2))
					{
						uParam0->f_3 = OBJECT::CREATE_OBJECT(iVar5, func_47(uParam0->f_9), true, true, false, false, true);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3, uParam0->f_2, 0, -0.045f, 0.03f, 0.05f, func_45(joaat("TREASURE_HUNT_LOOT_09")), false, false, false, false, 2, true, false, false);
					}
				}
			}
			else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14"))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
				{
					if (func_48())
					{
						if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(uParam0->f_1, "CASH", &Var6, false, 0, 2))
						{
							uParam0->f_3 = OBJECT::CREATE_OBJECT(iVar5, Var6, true, true, false, false, true);
							ENTITY::SET_ENTITY_ROTATION(uParam0->f_3, Var6.f_3, 2, true);
						}
					}
				}
			}
			else
			{
				uParam0->f_3 = OBJECT::CREATE_OBJECT(iVar5, func_47(uParam0->f_9), true, true, false, false, true);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_3, func_45(uParam0->f_9), 2, true);
			}
		}
		iVar0 = 0;
	}
	if ((((uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_01") && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_05")) && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_14")) && uParam0->f_9 != joaat("TREASURE_HUNT_LOOT_16")) && !TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_7))
	{
		switch (uParam0->f_9)
		{
			case joaat("TREASURE_HUNT_LOOT_02"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_03"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_0M3_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_04"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS");
				break;
			case joaat("TREASURE_HUNT_LOOT_06"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_0M3_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_07"):
				iVar18 = joaat("RANSACK_REACH_IN_GROUND_HOLE_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_08"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_1M75_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_09"):
				iVar18 = joaat("RANSACK_ATTACHED_LOCKBOX_MED_LOCKED_PULLOUT_TIGHT_0M0_0M80");
				break;
			case joaat("TREASURE_HUNT_LOOT_10"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_11"):
				iVar18 = joaat("RANSACK_REACH_IN_GROUND_HOLE_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_12"):
				iVar18 = joaat("RANSACK_REACH_IN_WALL_HOLE_0M3_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_13"):
				iVar18 = joaat("RANSACK_VOLUME_REACH_IN_TO_TABLE_OVER_PICKUP_0M5_0M8_2M0");
				break;
			case joaat("TREASURE_HUNT_LOOT_15"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_PLAQUE_LOOT");
				break;
			case joaat("TREASURE_HUNT_LOOT_17"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_18"):
				iVar18 = joaat("RANSACK_REACH_IN_GROUND_HOLE_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_19"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS_GRAVE");
				break;
			case joaat("TREASURE_HUNT_LOOT_20"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_PLAQUE_STATUE_LOOT");
				break;
			case joaat("TREASURE_HUNT_LOOT_21"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_22"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_23"):
				iVar18 = joaat("RANSACK_CHIMNEY_GENERIC_01_GENERIC_PROMPT");
				break;
			case joaat("TREASURE_HUNT_LOOT_24"):
				iVar18 = joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS");
				break;
		}
		if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_04") || uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_24"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				uParam0->f_7 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_2, joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS"), 0f, 0f, 0f, 0, 0, 0, 1);
			}
		}
		else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2))
			{
				uParam0->f_7 = TASK::CREATE_SCENARIO_POINT_ATTACHED_TO_ENTITY(uParam0->f_2, joaat("PROP_PLAYER_TREASURE_HUNTER_ROCK_STASH_NEW_THCHAINS_GRAVE"), 0f, 0f, 0f, 0, 0, 0, 1);
			}
		}
		else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_09"))
		{
			uParam0->f_7 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_6, true), joaat("RANSACK_ATTACHED_LOCKBOX_MED_LOCKED_PULLOUT_TIGHT_0M0_0M80"), 1.5f, 0, false);
		}
		else
		{
			vVar1 = { TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_6, true) };
			uParam0->f_7 = TASK::CREATE_SCENARIO_POINT(iVar18, vVar1, TASK::_GET_SCENARIO_POINT_HEADING(uParam0->f_6, true), 0, 0, 0);
		}
		iVar0 = 0;
	}
	func_14(uParam0, 0);
	if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_13"))
	{
		__LIB_1__::func_948(-1121184106, 0, 0.8f, 1, 1, 0, 1, 0);
	}
	else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_16"))
	{
		if (!func_49(uParam0))
		{
			iVar0 = 0;
		}
		else
		{
			iVar0 = 1;
		}
	}
	else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_14") && func_13(uParam0->f_9))
	{
		if (!__LIB_0__::func_139(uParam0->f_8))
		{
			uParam0->f_8 = __LIB_1__::func_282(MISC::_CREATE_VAR_STRING(2, "GENERIC_SEARCH"), joaat("INPUT_CONTEXT_X"), TASK::_GET_SCENARIO_POINT_COORDS(uParam0->f_6, true), 1070386381 /* Float: 1.6f */, 1, 0, 0, 4, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
			iVar0 = 0;
		}
		else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam0->f_1))
		{
			uParam0->f_1 = ANIMSCENE::_CREATE_ANIM_SCENE("script@proc@loansharking@horsechase2@tree", 0, "pbl_Action", false, true);
			iVar0 = 0;
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam0->f_1, true, false))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(uParam0->f_1, true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_1);
			}
			iVar0 = 0;
		}
		else if (!func_48())
		{
			ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(uParam0->f_1, &uVar19, &uVar22, 2);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_1, 2327.15f, -1512.469f, 40.7f, 0f, 0f, 120f, 2);
			func_5(1);
			iVar0 = 0;
		}
		else if (!ANIMSCENE::_0x23E33CB9F4A3F547(uParam0->f_1, "pbl_Action"))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(uParam0->f_1, "pbl_Action"))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(uParam0->f_1, "pbl_Action");
			}
			iVar0 = 0;
		}
		else if (ANIMSCENE::_GET_ANIM_SCENE_PED(uParam0->f_1, "player", false) != Global_35)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "player", Global_35, 0);
			iVar0 = 0;
		}
		else if (ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_1, "CASH", false) != ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_3))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_1, "CASH", uParam0->f_3, 0);
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_13(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_01"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_01"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_03"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_02"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_04"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_03"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_06"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_04"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_07"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_05"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_08"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_06"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_09"):
			return true;
		case joaat("TREASURE_HUNT_LOOT_10"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_07"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_11"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_08"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_12"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_09"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_13"):
			return true;
		case joaat("TREASURE_HUNT_LOOT_14"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_15"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_16"):
			return true;
		case joaat("TREASURE_HUNT_LOOT_17"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_13"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_18"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_14"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_19"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_15"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_20"):
			return true;
		case joaat("TREASURE_HUNT_LOOT_21"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_16"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_22"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_17"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_23"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_18"), 1, 0);
		case joaat("TREASURE_HUNT_LOOT_24"):
			return __LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_19"), 1, 0);
		default:
			break;
	}
	return false;
}

void func_14(var uParam0, bool bParam1)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_7))
	{
		if (bParam1)
		{
			if (!TASK::_IS_SCENARIO_POINT_ACTIVE(uParam0->f_7))
			{
				TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_7, true);
			}
		}
		else if (TASK::_IS_SCENARIO_POINT_ACTIVE(uParam0->f_7))
		{
			TASK::_SET_SCENARIO_POINT_ACTIVE(uParam0->f_7, false);
		}
	}
}

int func_15(int iParam0)
{
	return __LIB_1__::func_35(iParam0, 5);
}

void func_16(int iParam0)
{
	Global_1935496.f_59.f_6 = 1;
	Global_1935496.f_59.f_7 = 0;
	Global_1935496.f_59.f_1 = iParam0;
	Global_1935496.f_59.f_5 = MISC::GET_GAME_TIMER();
}

int func_17(var uParam0)
{
	switch (uParam0->f_9)
	{
		case joaat("TREASURE_HUNT_LOOT_19"):
		case joaat("TREASURE_HUNT_LOOT_04"):
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_01"):
		case joaat("TREASURE_HUNT_LOOT_24"):
		case joaat("TREASURE_HUNT_LOOT_20"):
		case joaat("TREASURE_HUNT_LOOT_15"):
			return func_52(uParam0);
		case joaat("TREASURE_HUNT_LOOT_12"):
		case joaat("TREASURE_HUNT_LOOT_13"):
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_18"):
		case joaat("TREASURE_HUNT_LOOT_03"):
		case joaat("TREASURE_HUNT_LOOT_17"):
		case joaat("TREASURE_HUNT_LOOT_10"):
		case joaat("TREASURE_HUNT_LOOT_07"):
		case joaat("TREASURE_HUNT_LOOT_21"):
		case joaat("TREASURE_HUNT_LOOT_11"):
		case joaat("TREASURE_HUNT_LOOT_06"):
		case joaat("TREASURE_HUNT_LOOT_09"):
		case joaat("TREASURE_HUNT_LOOT_23"):
		case joaat("TREASURE_HUNT_LOOT_22"):
		case joaat("TREASURE_HUNT_LOOT_08"):
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
			{
				TASK::_0xA6A76D666A281F2D(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_3), joaat("DOCUMENT_GENERIC_MAP_ROLLED"));
			}
			return func_53(joaat("DOCUMENT_GENERIC_MAP_ROLLED"));
		case joaat("TREASURE_HUNT_LOOT_14"):
			if (__LIB_0__::func_139(uParam0->f_8))
			{
				if (__LIB_0__::func_266(Global_35, __LIB_2__::func_395(uParam0->f_8), 1.6f, 1, 1))
				{
					__LIB_4__::func_12(uParam0->f_8, -739709650, 0, 1);
					HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1.6f, 1, 1, -739709650, "TH_ITEM_UNKNOWN", 0);
				}
			}
			__LIB_1__::func_382(uParam0->f_8, __LIB_0__::func_266(Global_35, __LIB_2__::func_395(uParam0->f_8), 1.6f, 1, 1), 1);
			__LIB_1__::func_221(uParam0->f_8, __LIB_0__::func_266(Global_35, __LIB_2__::func_395(uParam0->f_8), 1.6f, 1, 1), 1);
			if (__LIB_0__::func_567(uParam0->f_8, 1))
			{
				__LIB_1__::func_748(&(uParam0->f_8), 1, 1);
				return 1;
			}
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			if (__LIB_3__::func_996(Global_35))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_18(var uParam0)
{
	switch (uParam0->f_9)
	{
		case joaat("TREASURE_HUNT_LOOT_12"):
		case joaat("TREASURE_HUNT_LOOT_13"):
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_18"):
		case joaat("TREASURE_HUNT_LOOT_03"):
		case joaat("TREASURE_HUNT_LOOT_19"):
		case joaat("TREASURE_HUNT_LOOT_04"):
		case joaat("TREASURE_HUNT_LOOT_17"):
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_10"):
		case joaat("TREASURE_HUNT_LOOT_07"):
		case joaat("TREASURE_HUNT_LOOT_21"):
		case joaat("TREASURE_HUNT_LOOT_01"):
		case joaat("TREASURE_HUNT_LOOT_11"):
		case joaat("TREASURE_HUNT_LOOT_06"):
		case joaat("TREASURE_HUNT_LOOT_24"):
		case joaat("TREASURE_HUNT_LOOT_20"):
		case joaat("TREASURE_HUNT_LOOT_09"):
		case joaat("TREASURE_HUNT_LOOT_23"):
		case joaat("TREASURE_HUNT_LOOT_22"):
		case joaat("TREASURE_HUNT_LOOT_08"):
		case joaat("TREASURE_HUNT_LOOT_15"):
			return !PED::IS_PED_USING_ANY_SCENARIO(Global_35);
		case joaat("TREASURE_HUNT_LOOT_16"):
			return !__LIB_3__::func_996(Global_35);
		case joaat("TREASURE_HUNT_LOOT_14"):
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(uParam0->f_1, false))
			{
				return true;
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam0->f_1, false))
			{
				if (!__LIB_3__::func_501(Global_35, 2326.918f, -1514.827f, 41.0862f, 19.5502f, 0.1f, 5f, 1))
				{
					if (!__LIB_0__::func_163(Global_35, 2106541073) && __LIB_17__::func_554(Global_35))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(Global_35, 2326.918f, -1514.827f, 41.0862f, 1f, -1, 19.5502f, 0.1f, 0);
					}
				}
				else
				{
					ANIMSCENE::START_ANIM_SCENE(uParam0->f_1);
				}
			}
			break;
	}
	return false;
}

bool func_19(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	switch (uParam0->f_9)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			iVar0 = 0;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			iVar0 = joaat("PROVISION_NECKLACE_PEARL");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_03"):
			iVar0 = 0;
			iVar1 = 1500;
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			iVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 2;
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			iVar0 = 0;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			iVar0 = 0;
			iVar1 = 500;
			break;
		case joaat("TREASURE_HUNT_LOOT_07"):
			iVar0 = 0;
			iVar1 = 1500;
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			iVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 3;
			break;
		case joaat("TREASURE_HUNT_LOOT_09"):
			iVar0 = 0;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_10"):
			iVar0 = 0;
			iVar1 = 1000;
			break;
		case joaat("TREASURE_HUNT_LOOT_11"):
			iVar0 = joaat("PROVISION_BRACELET_PLATINUM");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			iVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 4;
			break;
		case joaat("TREASURE_HUNT_LOOT_13"):
			iVar0 = 0;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_14"):
			iVar0 = 0;
			iVar1 = 3000;
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			iVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 6;
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			iVar0 = 0;
			iVar1 = 0;
			break;
		case joaat("TREASURE_HUNT_LOOT_17"):
			iVar0 = joaat("CONSUMABLE_CRAFTED_SUPER_MEAL");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_18"):
			iVar0 = joaat("CONSUMABLE_HORSE_REVIVER");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			iVar0 = 0;
			iVar1 = 3;
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			iVar0 = joaat("PROVISION_EARRING_GOLD");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_21"):
			iVar0 = joaat("PROVISION_EARRING_SILVER");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_22"):
			iVar0 = joaat("PROVISION_BRACELET_GOLD");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_23"):
			iVar0 = joaat("PROVISION_BRACELET_SILVER");
			iVar1 = 1;
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			iVar0 = joaat("PROVISION_GOLDBAR_LARGE");
			iVar1 = 6;
			break;
		default:
			break;
	}
	if (iVar1 > 0)
	{
		if (iVar0 != 0)
		{
			MISC::_0xB1F6665AA54DCD5C(iVar0);
			func_64(iVar0, iVar1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		}
		else if (uParam0->f_9 == joaat("TREASURE_HUNT_LOOT_19"))
		{
			if (!uParam0->f_21)
			{
				func_64(joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_21 = 1;
				return false;
			}
			if (!uParam0->f_22)
			{
				func_64(joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_22 = 1;
				return false;
			}
			if (!uParam0->f_23)
			{
				func_64(joaat("PROVISION_GOLDBAR_LARGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_23 = 1;
				return false;
			}
			if (!uParam0->f_24)
			{
				func_64(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				uParam0->f_24 = 1;
				return true;
			}
		}
		else
		{
			__LIB_1__::func_616(iVar1, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
		}
	}
	if (!func_28(uParam0->f_9))
	{
		iVar2 = func_15(uParam0->f_9);
		func_64(iVar2, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	return true;
}

bool func_25(int iParam0)
{
	return (((((iParam0 == joaat("TREASURE_HUNT_LOOT_01") || iParam0 == joaat("TREASURE_HUNT_LOOT_05")) || iParam0 == joaat("TREASURE_HUNT_LOOT_09")) || iParam0 == joaat("TREASURE_HUNT_LOOT_13")) || iParam0 == joaat("TREASURE_HUNT_LOOT_16")) || iParam0 == joaat("TREASURE_HUNT_LOOT_20"));
}

bool func_28(int iParam0)
{
	return (((((iParam0 == joaat("TREASURE_HUNT_LOOT_04") || iParam0 == joaat("TREASURE_HUNT_LOOT_08")) || iParam0 == joaat("TREASURE_HUNT_LOOT_12")) || iParam0 == joaat("TREASURE_HUNT_LOOT_15")) || iParam0 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0 == joaat("TREASURE_HUNT_LOOT_24"));
}

void func_31(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_04"):
			__LIB_0__::func_365(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_08"):
			__LIB_0__::func_366(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_12"):
			__LIB_0__::func_367(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_15"):
			__LIB_0__::func_368(4);
			break;
		case joaat("TREASURE_HUNT_LOOT_19"):
			__LIB_0__::func_369(8);
			break;
		case joaat("TREASURE_HUNT_LOOT_24"):
			__LIB_0__::func_370(16);
			break;
	}
}

void func_33(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_80(iParam0, iParam1))
		{
			__LIB_0__::func_7(&(Global_1901328[iParam0]), iParam1);
		}
	}
	else if (func_80(iParam0, iParam1))
	{
		__LIB_0__::func_8(&(Global_1901328[iParam0]), iParam1);
	}
}

bool func_42(int iParam0)
{
	return (((iParam0 == joaat("TREASURE_HUNT_LOOT_04") || iParam0 == joaat("TREASURE_HUNT_LOOT_09")) || iParam0 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0 == joaat("TREASURE_HUNT_LOOT_24"));
}

Vector3 func_43(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_12"):
		case joaat("TREASURE_HUNT_LOOT_13"):
		case joaat("TREASURE_HUNT_LOOT_02"):
		case joaat("TREASURE_HUNT_LOOT_18"):
		case joaat("TREASURE_HUNT_LOOT_03"):
		case joaat("TREASURE_HUNT_LOOT_16"):
		case joaat("TREASURE_HUNT_LOOT_17"):
		case joaat("TREASURE_HUNT_LOOT_05"):
		case joaat("TREASURE_HUNT_LOOT_10"):
		case joaat("TREASURE_HUNT_LOOT_07"):
		case joaat("TREASURE_HUNT_LOOT_21"):
		case joaat("TREASURE_HUNT_LOOT_01"):
		case joaat("TREASURE_HUNT_LOOT_11"):
		case joaat("TREASURE_HUNT_LOOT_06"):
		case joaat("TREASURE_HUNT_LOOT_20"):
		case joaat("TREASURE_HUNT_LOOT_23"):
		case joaat("TREASURE_HUNT_LOOT_22"):
		case joaat("TREASURE_HUNT_LOOT_08"):
		case joaat("TREASURE_HUNT_LOOT_14"):
		case joaat("TREASURE_HUNT_LOOT_15"):
			break;
		case joaat("TREASURE_HUNT_LOOT_04"):
			return 1619.196f, 1487.477f, 145.2347f;
		case joaat("TREASURE_HUNT_LOOT_09"):
			return -948.5673f, 2170.246f, 341.1542f;
		case joaat("TREASURE_HUNT_LOOT_19"):
			return -3309.31f, -2840.246f, -6.90814f;
		case joaat("TREASURE_HUNT_LOOT_24"):
			return -2154.84f, 78.2389f, 309.889f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

int func_44(var uParam0, int iParam1, vector3 vParam2)
{
	int iVar0;
	if (uParam0->f_5 == 0)
	{
		uParam0->f_5 = ENTITY::_0x6F3068258A499E52(iParam1, vParam2, 15);
	}
	if (uParam0->f_5 != 0)
	{
		if (ENTITY::_0x1FF441D7954F8709(uParam0->f_5))
		{
			iVar0 = ENTITY::_0x4735E2A4BB83D9DA(uParam0->f_5);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				uParam0->f_5 = 0;
				return iVar0;
			}
		}
	}
	return 0;
}

Vector3 func_45(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			return 0.4038f, 72.004f, 94.3616f;
		case joaat("TREASURE_HUNT_LOOT_03"):
			return 28.6783f, 137.626f, 79.4364f;
		case joaat("TREASURE_HUNT_LOOT_04"):
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			return 0f, 0f, 0f;
		case joaat("TREASURE_HUNT_LOOT_07"):
			return 90f, 0f, 0f;
		case joaat("TREASURE_HUNT_LOOT_08"):
			return 2.9422f, -89.7569f, -108.628f;
		case joaat("TREASURE_HUNT_LOOT_09"):
			return 5f, 0f, 110f;
		case joaat("TREASURE_HUNT_LOOT_10"):
			return 60.2193f, 22.7947f, 151.423f;
		case joaat("TREASURE_HUNT_LOOT_11"):
			return 90f, 0f, 0f;
		case joaat("TREASURE_HUNT_LOOT_12"):
			return 1.68002f, -26.8184f, -178.667f;
		case joaat("TREASURE_HUNT_LOOT_13"):
			return 0.0922233f, 0.0055108f, -158.9106f;
		case joaat("TREASURE_HUNT_LOOT_14"):
			return 22.85511f, -2.095421f, 170.8128f;
		case joaat("TREASURE_HUNT_LOOT_15"):
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_17"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_18"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_19"):
			return 0f, 0f, -112.5f;
		case joaat("TREASURE_HUNT_LOOT_20"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_21"):
			return 0f, 0f, 90f;
		case joaat("TREASURE_HUNT_LOOT_22"):
			return 0f, 0f, 18.7701f;
		case joaat("TREASURE_HUNT_LOOT_23"):
			return 60.2193f, 22.7947f, 151.423f;
		case joaat("TREASURE_HUNT_LOOT_24"):
			return 0f, 0f, -126.57f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_46(int iParam0)
{
	return ((((((((((((((((((iParam0 == joaat("TREASURE_HUNT_LOOT_02") || iParam0 == joaat("TREASURE_HUNT_LOOT_03")) || iParam0 == joaat("TREASURE_HUNT_LOOT_06")) || iParam0 == joaat("TREASURE_HUNT_LOOT_07")) || iParam0 == joaat("TREASURE_HUNT_LOOT_08")) || iParam0 == joaat("TREASURE_HUNT_LOOT_09")) || iParam0 == joaat("TREASURE_HUNT_LOOT_10")) || iParam0 == joaat("TREASURE_HUNT_LOOT_11")) || iParam0 == joaat("TREASURE_HUNT_LOOT_12")) || iParam0 == joaat("TREASURE_HUNT_LOOT_13")) || iParam0 == joaat("TREASURE_HUNT_LOOT_14")) || iParam0 == joaat("TREASURE_HUNT_LOOT_17")) || iParam0 == joaat("TREASURE_HUNT_LOOT_18")) || iParam0 == joaat("TREASURE_HUNT_LOOT_19")) || iParam0 == joaat("TREASURE_HUNT_LOOT_20")) || iParam0 == joaat("TREASURE_HUNT_LOOT_21")) || iParam0 == joaat("TREASURE_HUNT_LOOT_22")) || iParam0 == joaat("TREASURE_HUNT_LOOT_23")) || iParam0 == joaat("TREASURE_HUNT_LOOT_24"));
}

Vector3 func_47(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TREASURE_HUNT_LOOT_01"):
			break;
		case joaat("TREASURE_HUNT_LOOT_02"):
			return -367.073f, 300.103f, 89.3992f;
		case joaat("TREASURE_HUNT_LOOT_03"):
			return 131.066f, 1828.48f, 199.709f;
		case joaat("TREASURE_HUNT_LOOT_04"):
			break;
		case joaat("TREASURE_HUNT_LOOT_05"):
			break;
		case joaat("TREASURE_HUNT_LOOT_06"):
			return -1043.863f, 422.0207f, 46.7672f;
		case joaat("TREASURE_HUNT_LOOT_07"):
			return -948.708f, 1634.25f, 243.932f;
		case joaat("TREASURE_HUNT_LOOT_08"):
			return 416.896f, 1603.25f, 186.269f;
		case joaat("TREASURE_HUNT_LOOT_09"):
			return -948.5673f, 2170.226f, 341.2442f;
		case joaat("TREASURE_HUNT_LOOT_10"):
			return 1099.8f, -648.547f, 97.8322f;
		case joaat("TREASURE_HUNT_LOOT_11"):
			return 2675.02f, 424.892f, 81.822f;
		case joaat("TREASURE_HUNT_LOOT_12"):
			return 2315.73f, 1051.17f, 66.8781f;
		case joaat("TREASURE_HUNT_LOOT_13"):
			return -323.0331f, -150.1928f, 50.8848f;
		case joaat("TREASURE_HUNT_LOOT_14"):
			return 2326.717f, -1513.747f, 42.9361f;
		case joaat("TREASURE_HUNT_LOOT_15"):
			break;
		case joaat("TREASURE_HUNT_LOOT_16"):
			return -6325.941f, -3671.488f, -13.46066f;
		case joaat("TREASURE_HUNT_LOOT_17"):
			return -2775.088f, -3209.429f, -7.9952f;
		case joaat("TREASURE_HUNT_LOOT_18"):
			return -5216.411f, -3442.451f, -16.056f;
		case joaat("TREASURE_HUNT_LOOT_19"):
			break;
		case joaat("TREASURE_HUNT_LOOT_20"):
			return -2936.589f, -138.6445f, 199.2321f;
		case joaat("TREASURE_HUNT_LOOT_21"):
			return 2415.474f, -738.765f, 45.443f;
		case joaat("TREASURE_HUNT_LOOT_22"):
			return 745.325f, 1819.233f, 241.2053f;
		case joaat("TREASURE_HUNT_LOOT_23"):
			return 1499.408f, -1836.724f, 56.8159f;
		case joaat("TREASURE_HUNT_LOOT_24"):
			break;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_48()
{
	return func_80(13, 2);
}

bool func_49(var uParam0)
{
	if (!func_98(uParam0))
	{
		return false;
	}
	if (!func_99(uParam0))
	{
		return false;
	}
	if (!func_100(uParam0))
	{
		return false;
	}
	if (!(ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(uParam0->f_4) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(uParam0->f_11)))
	{
		return false;
	}
	if (!uParam0->f_16)
	{
		if (!func_101(uParam0))
		{
			return false;
		}
		else
		{
			uParam0->f_16 = 1;
		}
	}
	if (!PED::IS_PED_RAGDOLL(uParam0->f_4))
	{
		PED::SET_PED_TO_RAGDOLL(uParam0->f_4, 0, 0, 0, true, true, false);
		return true;
	}
	return false;
}

int func_52(var uParam0)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_7))
	{
		if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
		{
			if (TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false) == uParam0->f_7)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_53(int iParam0)
{
	vector3 vVar0;
	int iVar10;
	if (TASK::_0xD04241BBF6D03A5E(Global_35) != 0)
	{
		iVar10 = 0;
		while (iVar10 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
		{
			if (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar10) == -1730772208)
			{
				if (SCRIPTS::GET_EVENT_DATA(0, iVar10, &vVar0, 10))
				{
					if (vVar0.z == iParam0 || iParam0 == 0)
					{
						return 1;
					}
				}
			}
			iVar10++;
		}
	}
	return 0;
}

int func_64(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	if (!func_114(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_115(iParam0, &iVar0, iParam1))
	{
		return 0;
	}
	__LIB_0__::func_912(iParam0, bParam2);
	iVar2 = 0;
	if (__LIB_1__::func_614(iParam0, 0, 0) == 0)
	{
		if (__LIB_1__::func_153(iParam0))
		{
			iVar5 = __LIB_0__::func_913(iParam0);
			iVar6 = __LIB_0__::func_352(iVar5);
			iVar7 = __LIB_1__::func_756(iVar6) + 1;
			__LIB_1__::func_757(iVar5);
			if (__LIB_1__::func_154(38))
			{
				__LIB_1__::func_240(483, 0);
			}
			else
			{
				__LIB_1__::func_240(482, 0);
			}
			if (iVar7 == __LIB_0__::func_353(iVar6))
			{
				func_64(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(2);
					}
					else
					{
						__LIB_1__::func_832(38, __LIB_0__::func_354(iVar6), 0, 0, __LIB_1__::func_758(), 0, -1, 0);
						__LIB_0__::func_355(1);
					}
				}
			}
			else if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(2);
				}
				else
				{
					__LIB_1__::func_832(38, 0, 0, 0, __LIB_1__::func_758(), 0, -1, 0);
					__LIB_0__::func_355(1);
				}
			}
			if (__LIB_0__::func_28() && __LIB_1__::func_155(4))
			{
				if (!Global_1914319.f_17376)
				{
					if (__LIB_0__::func_28() && (__LIB_1__::func_200(38) || __LIB_1__::func_154(38)))
					{
						__LIB_1__::func_450(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						__LIB_1__::func_450(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
	{
		if ((!__LIB_0__::func_192(iParam0, 866047851) && !__LIB_0__::func_192(iParam0, -1979000645)) && !__LIB_0__::func_192(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (__LIB_0__::func_774(iParam0, 8388608) && !__LIB_0__::func_293(28))
	{
		func_134(28);
	}
	if (!bVar3)
	{
		if (__LIB_0__::func_192(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (__LIB_0__::func_357(iParam0) == -1447088266)
			{
				iVar1 = __LIB_0__::func_775(__LIB_0__::func_914(iParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iVar1);
					}
					if (__LIB_0__::func_708(0) && func_140(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0);
				if (WEAPON::_IS_AMMO_VALID(iVar1))
				{
					if (__LIB_0__::func_2() == -1)
					{
						__LIB_0__::func_915(iParam0);
					}
					if (__LIB_0__::func_708(0) && func_140(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						__LIB_0__::func_916(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
		{
			if (!func_142(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!func_144(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			func_145(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, 2000026003))
		{
			__LIB_1__::func_632(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -103750053))
		{
			__LIB_0__::func_15(__LIB_0__::func_358(joaat("CLAWS_COLLECTED")), iVar0);
		}
		else if (iParam0 == joaat("PROVISION_ALLIGATOR_TOOTH"))
		{
			__LIB_0__::func_15(__LIB_0__::func_38(joaat("COLLECTED"), joaat("ALLIGATOR_TOOTH")), iVar0);
		}
		else if (__LIB_0__::func_192(iParam0, -121341956) && !__LIB_0__::func_192(iParam0, 606799272))
		{
			if (iParam0 != joaat("WEAPON_KIT_DETECTOR") && iParam0 != joaat("PROVISION_LIGHTNING_CONDUCTOR"))
			{
				if (__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
				{
					__LIB_1__::func_240(498, 0);
				}
			}
			if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
			{
				__LIB_1__::func_796(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, -136654233))
		{
			if (__LIB_0__::func_192(iParam0, -1021472396))
			{
			}
		}
		else if (__LIB_0__::func_192(iParam0, -1466706512) && __LIB_0__::func_192(iParam0, 1147021565))
		{
			__LIB_1__::func_240(484, 0);
		}
		else if (__LIB_0__::func_192(iParam0, 1147021565) && __LIB_0__::func_192(iParam0, -524514947))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 554195525))
		{
		}
		else if (__LIB_0__::func_192(iParam0, 589988438))
		{
			if (__LIB_1__::func_709())
			{
				__LIB_1__::func_797(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (__LIB_0__::func_192(iParam0, 787083290) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_843(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1718133314))
		{
			__LIB_1__::func_844(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1738650224))
		{
			__LIB_1__::func_845(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, 949916894))
		{
			__LIB_1__::func_846(iParam0);
		}
		else if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
		{
			Global_1935496.f_20 = 0;
		}
		else if (__LIB_0__::func_192(iParam0, 1841149704))
		{
			__LIB_0__::func_359();
		}
		else if (__LIB_0__::func_192(iParam0, 606799272))
		{
			__LIB_1__::func_847(iParam0, iParam1);
			__LIB_1__::func_759(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1112814642) && __LIB_0__::func_192(iParam0, -1697809989))
		{
			__LIB_1__::func_858(iParam0, 0, 0, 0);
		}
		else if (__LIB_0__::func_192(iParam0, -2017733358) || __LIB_0__::func_192(iParam0, -1369131378))
		{
			__LIB_1__::func_796(iParam0);
		}
		else if (__LIB_0__::func_192(iParam0, -1921346699))
		{
			if (__LIB_0__::func_2() != -1)
			{
				return 0;
			}
			__LIB_1__::func_824(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_64(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_64(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_64(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_64(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_64(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_64(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (__LIB_0__::func_192(iParam0, -839724752) && __LIB_0__::func_774(iParam0, 4))
		{
			if (!__LIB_1__::func_154(42))
			{
				__LIB_1__::func_601(iParam0);
			}
		}
		else if (__LIB_0__::func_192(iParam0, 1399091007))
		{
			__LIB_0__::func_917(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_008_1"):
					iVar8 = joaat("KIT_POUCH_LEGENDARY");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_002_1"):
					iVar8 = joaat("KIT_POUCH_REMEDIES");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_003_1"):
					iVar8 = joaat("KIT_POUCH_INGREDIENTS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_004_1"):
					iVar8 = joaat("KIT_POUCH_KIT");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_005_1"):
					iVar8 = joaat("KIT_POUCH_PROVISIONS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_006_1"):
					iVar8 = joaat("KIT_POUCH_MATERIALS");
					break;
				case joaat("CLOTHING_HL_PLAYER_SATCHEL_007_1"):
					iVar8 = joaat("KIT_POUCH_VALUABLES");
					break;
			}
			if (iVar8 != 0)
			{
				func_64(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("ARROW_BUNDLE");
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("THROWING_KNIVES_POISON_BUNDLE");
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_CRICKETS");
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("BAIT_WORMS");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_FANCY");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_PLAIN");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_SML_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = joaat("JBOX_LRG_POOR");
				break;
			case joaat("UPGRADE_OFFHAND_HOLSTER"):
				func_134(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					func_163(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					func_140(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					func_163(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
				}
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
				break;
			case joaat("CLOTHING_LEGENDARY_EAST_OUTFIT"):
				__LIB_1__::func_240(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				__LIB_0__::func_361();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				__LIB_0__::func_362();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				__LIB_0__::func_363();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				__LIB_1__::func_244();
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("DOCUMENT_TREASURE_MAP_01"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_01"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_02"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_02"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_03"):
				__LIB_0__::func_364(499813453, joaat("TREASURE_HUNT_LOOT_03"), 0);
				__LIB_0__::func_919(499813453, 0);
				__LIB_0__::func_365(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_04"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_05"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_05"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_06"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_06"):
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_07"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_08"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_09"):
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_10"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_11"):
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_13"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_14"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_15"):
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_16"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_17"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_18"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				break;
			case joaat("DOCUMENT_TREASURE_MAP_19"):
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				break;
			case joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"):
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_LAMB_HEART"):
			case joaat("CONSUMABLE_MEAL_PRIME_RIB"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL"):
			case joaat("CONSUMABLE_MEAL_CONSOMME"):
			case joaat("CONSUMABLE_MEAL_FRIED_CATFISH"):
			case joaat("CONSUMABLE_MEAL_PRAIRIE_CHICKEN"):
			case joaat("CONSUMABLE_MEAL_LAMB_FRY"):
			case joaat("CONSUMABLE_MEAL_OYSTER_STEW"):
			case joaat("CONSUMABLE_MEAL_TURTLE_SOUP"):
			case joaat("CONSUMABLE_MEAL_OATMEAL"):
			case joaat("CONSUMABLE_MEAL_CORNED_BEEF_HASH"):
			case joaat("CONSUMABLE_MEAL_ROAST_BEEF"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_HIGH_EGGS"):
			case joaat("CONSUMABLE_MEAL_BEEF_STEW_PEARSON_REGIONAL_EGGS"):
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				__LIB_1__::func_240(488, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				__LIB_1__::func_240(491, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_64(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_64(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				__LIB_1__::func_240(486, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				__LIB_1__::func_240(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		iVar10 = iParam0;
		__LIB_0__::func_371(&iVar10);
		if (!func_176(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			func_177(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			func_178(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (__LIB_0__::func_708(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_64(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			__LIB_1__::func_451(iVar2, 0);
		}
	}
	Var35 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var35, iVar0);
	}
	__LIB_1__::func_602(iParam0);
	if (fParam6 > 0f)
	{
		if (__LIB_0__::func_192(iParam0, -839724752))
		{
			__LIB_1__::func_157(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		__LIB_3__::func_868(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_80(int iParam0, int iParam1)
{
	return __LIB_0__::func_1(Global_1901328[iParam0], iParam1);
}

bool func_98(var uParam0)
{
	vector3 vVar0;
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_17))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_18))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_19))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_20))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		uParam0->f_4 = __LIB_1__::func_545(uParam0->f_17, func_199(), 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12))
	{
		uParam0->f_12 = OBJECT::CREATE_OBJECT(uParam0->f_18, func_201(), true, true, false, false, false);
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_11))
	{
		uParam0->f_11 = OBJECT::CREATE_OBJECT(uParam0->f_19, func_201(), true, true, false, false, false);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_11, false);
		ENTITY::SET_ENTITY_ROTATION(uParam0->f_11, func_202(), 2, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_11, true);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_13))
	{
		vVar0 = { -6322.675f, -3672.215f, -3.563f };
		uParam0->f_13 = OBJECT::CREATE_OBJECT(joaat("P_CRD_CHIPBLUE01X"), vVar0, true, true, false, false, false);
		OBJECT::SET_OBJECT_TARGETTABLE(uParam0->f_13, true);
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_13, false, false);
		ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_13, true);
		ENTITY::SET_ENTITY_VISIBLE(uParam0->f_13, false);
	}
	return true;
}

bool func_99(var uParam0)
{
	__LIB_3__::func_937(uParam0->f_4);
	__LIB_2__::func_463(uParam0->f_4, joaat("CONSUMABLE_HORSE_OINTMENT_CRAFTED"), 1, 0);
	ENTITY::_0x8C03CD6B5E0E85E8(uParam0->f_4, joaat("EMPTY"));
	WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_4, true, true);
	WEAPON::_0x1B83C0DEEBCBB214(uParam0->f_4);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 38, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_4, 223, true);
	PED::_0xAE6004120C18DF97(uParam0->f_4, 1, 0);
	ENTITY::_0x18FF3110CF47115D(uParam0->f_4, 7, 0);
	__LIB_1__::func_991(uParam0->f_4, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_4, 1);
	ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_4, false);
	return true;
}

bool func_100(var uParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		__LIB_1__::func_864(uParam0->f_4, 1, 1);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_101(var uParam0)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(uParam0->f_12) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_11)) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		return false;
	}
	if (!(ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_12) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam0->f_11)))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_12, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_11, 1);
		return false;
	}
	OBJECT::_0xB6CBD40F8EA69E8A(uParam0->f_12);
	ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(uParam0->f_12, uParam0->f_4, -1, PED::GET_PED_BONE_INDEX(uParam0->f_4, 33646), 0.02f, -0.11f, 0f, 0f, 0f, 0f, 183f, 88.5f, 97f, -1f, 0, 1, 0, 0, 0, 1, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */);
	uParam0->f_14 = PHYSICS::_ADD_ROPE_2(func_201(), 0f, 0f, 0f, 7f, 6, false, -1, -1f);
	PHYSICS::_0xBB3E9B073E66C3C9(uParam0->f_14, 1, 0, 1, 0);
	PHYSICS::_0x522FA3F490E2F7AC(uParam0->f_14, 1, 1);
	PHYSICS::_0x462FF2A432733A44(uParam0->f_14, uParam0->f_11, uParam0->f_12, 0f, 0f, 0f, 0f, 0f, 0f, 0, "ropeAttach");
	PHYSICS::_0x3C6490D940FF5D0B(uParam0->f_14, 0, 0, 7f, 0);
	PHYSICS::_0x76BAD9D538BCA1AA(uParam0->f_14, 0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(uParam0->f_14, 1f);
	PHYSICS::_0xDEDE679ED29DD4E7(uParam0->f_14, 1);
	PHYSICS::_0xF1EA2A881EB7F2CD(uParam0->f_14, 1);
	AUDIO::_0xF092B6030D6FD49C(uParam0->f_14, "ROPE_SETTINGS_DEFAULT");
	AUDIO::_0x2651DDC0EA269073(uParam0->f_14, 1f);
	return true;
}

bool func_114(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (__LIB_0__::func_2() == -1)
	{
		if (__LIB_0__::func_787(iParam0) && func_209(iParam0))
		{
			__LIB_3__::func_908(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == joaat("CUSTOM_SATCHEL"))
	{
		bParam2 = true;
	}
	else if (iParam0 == joaat("WEAPON_UNARMED"))
	{
		return false;
	}
	return true;
}

bool func_115(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	*iParam1 = iParam2;
	__LIB_1__::func_111(iParam0, iParam1);
	Var0 = { func_212(iParam0, 0, 1) };
	iVar5 = __LIB_0__::func_936(iParam0, &Var0, 0, 0);
	iVar6 = __LIB_0__::func_788(iParam0, 0);
	if ((iVar5 > 1 && !__LIB_1__::func_195()) && (iVar6 + iParam2) >= iVar5)
	{
		if (__LIB_0__::func_192(iParam0, -2051813666))
		{
			__LIB_1__::func_240(583, 1);
		}
		else
		{
			__LIB_1__::func_240(582, 0);
		}
	}
	if (func_216(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_134(int iParam0)
{
	if (!__LIB_0__::func_52(iParam0))
	{
		return;
	}
	__LIB_0__::func_427(iParam0);
	func_237(iParam0);
}

bool func_140(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	if (!WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_MELEE(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
	{
		Var0 = { func_212(iParam0, 0, 1) };
		iVar5 = 1728382685; /* GXTEntry: "Right" */
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_240((386 + iVar28), 1);
			if (func_241(iParam0, &Var0, iVar5, 0))
			{
				if (__LIB_1__::func_429(iParam0, &Var6, iVar5))
				{
					Var29 = { __LIB_0__::func_429(iParam0, Var0, iVar5, 0) };
					__LIB_0__::func_939(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (__LIB_0__::func_708(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
					{
						return false;
					}
					__LIB_0__::func_916(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iParam0), iParam1, iParam6);
					__LIB_0__::func_718(iParam0, iParam1);
					return true;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

bool func_142(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	bool bVar8;
	iVar0 = __LIB_0__::func_775(iParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			__LIB_0__::func_915(iVar0);
			if (iParam1 == 1248274121)
			{
				__LIB_1__::func_618(iVar0);
			}
		}
		if (!func_216(iParam0, &uVar1, 1, 0, 0))
		{
			__LIB_3__::func_908(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = __LIB_0__::func_940(iVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(iVar0))
			{
				func_140(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS"))
			{
				func_140(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == joaat("WEAPON_LASSO"))
			{
				func_140(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_MELEE(iVar0))
			{
				if (iVar0 == joaat("WEAPON_MELEE_KNIFE_JOHN") && !__LIB_0__::func_181())
				{
					return false;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(iParam0))
				{
				}
				else if (!__LIB_0__::func_216(iVar0))
				{
					func_140(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_140(iVar0, WEAPON::_GET_WEAPON_CLIP_SIZE(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
			{
				iVar7 = __LIB_0__::func_153(Global_35, 2, 0, 1);
				if ((((__LIB_0__::func_154(iVar7) && !Global_43891) && iVar7 != iVar0) && !__LIB_0__::func_293(24)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				bVar8 = true;
				if (__LIB_0__::func_154(iVar7) && __LIB_0__::func_293(24))
				{
					if (!func_140(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_140(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_140(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		__LIB_1__::func_240(480, 1);
	}
	return true;
}

bool func_144(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	if (!__LIB_0__::func_258(iParam0))
	{
		return false;
	}
	iVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iParam0);
	if (__LIB_0__::func_154(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::_IS_WEAPON_BOW(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_GET_WEAPON_CLIP_SIZE(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (__LIB_1__::func_707(joaat("PROVISION_TRINKET_CROW_BEAK"), 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		__LIB_1__::func_424(__LIB_0__::func_941(iParam0), __LIB_0__::func_776(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (__LIB_0__::func_2() == -1)
		{
			if (__LIB_1__::func_25(Global_1835011[14 /*74*/].f_1, 1))
			{
				__LIB_1__::func_240(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (__LIB_0__::func_708(0))
	{
		if (__LIB_0__::func_916(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_176(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_145(int iParam0)
{
	var uVar0;
	if ((iParam0 == joaat("PROVISION_TALISMAN_EAGLE_TALON") && !__LIB_0__::func_26()) || iParam0 != joaat("PROVISION_TALISMAN_EAGLE_TALON"))
	{
		if (func_252(Global_35, iParam0, &uVar0))
		{
			func_163(PLAYER::PLAYER_PED_ID(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case joaat("PROVISION_TALISMAN_ALLIGATOR_TOOTH"):
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BEAR_CLAW"):
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_BUFFALO_HORN"):
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			__LIB_1__::func_244();
			break;
		case joaat("PROVISION_TALISMAN_EAGLE_TALON"):
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			__LIB_0__::func_362();
			break;
		case joaat("PROVISION_TALISMAN_RAVEN_CLAW"):
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			__LIB_0__::func_360();
			break;
	}
}

int func_163(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	if (iParam3 == -358215195)
	{
		Var0 = { func_212(iParam1, 1, 0) };
		iParam3 = __LIB_0__::func_709(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_287(iParam1, iParam2, __LIB_0__::func_161(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	__LIB_1__::func_467(1, (__LIB_0__::func_2() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_1__::func_452(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (__LIB_0__::func_156(32768) && iParam1 != Global_1946804.f_57[__LIB_0__::func_161(iParam3, 1) /*11*/])
			{
				__LIB_0__::func_945();
				__LIB_1__::func_452(22, iParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			__LIB_1__::func_452(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = __LIB_0__::func_445(iParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		__LIB_1__::func_452(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			__LIB_1__::func_36(0);
			__LIB_1__::func_37(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		__LIB_1__::func_452(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_176(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_212(iParam0, 0, 1) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	return func_299(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_177(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	switch (__LIB_0__::func_357(iParam0))
	{
		case 81053684:
			if (iParam0 == joaat("KIT_BANDANA") && __LIB_1__::func_169(81053684, 0) <= 0)
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == joaat("CLOTHING_ITEM_HAT_PZERO_000") || iParam0 == joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"))
			{
				__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = __LIB_0__::func_449(iParam0);
			if (__LIB_0__::func_450(iVar0))
			{
				__LIB_1__::func_697(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				__LIB_1__::func_452(30, iParam0, 0, 0, 0);
			}
			if (__LIB_0__::func_241() == -2125499975 || __LIB_0__::func_241() == -449205311)
			{
				switch (iParam0)
				{
					case joaat("CLOTHING_WARM_WEATHER_OUTFIT"):
					case 1160643979: /* GXTEntry: "The Winter Gunslinger" */
					case joaat("CLOTHING_GUNSLINGER_OUTFIT"):
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (__LIB_0__::func_241() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024: /* GXTEntry: "The Cowboy" */
						__LIB_1__::func_452(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!__LIB_1__::func_431(-525676072, 0))
			{
				if (__LIB_1__::func_335(-525676072, &iVar1))
				{
					__LIB_1__::func_452(33, iVar1, 0, 0, 0);
				}
			}
			__LIB_1__::func_452(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == joaat("CLOTHING_SP_OFFHAND_000") || iParam0 == -1515874150) || iParam0 == joaat("UPGRADE_OFFHAND_HOLSTER"))
	{
		if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")))
		{
			func_163(Global_35, iParam0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
		}
		func_134(24);
		if (__LIB_0__::func_918(&iVar2, 0))
		{
			func_140(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_178(int iParam0)
{
	if (__LIB_0__::func_192(iParam0, 943695443))
	{
		func_308(0, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -2096528786))
	{
		func_308(1, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -1094167013))
	{
		func_308(2, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1936654645))
	{
		func_308(3, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1306489306))
	{
		func_308(4, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 435762317))
	{
		func_308(5, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 1259363210))
	{
		func_308(6, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 881398259))
	{
		func_308(7, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, -541549214))
	{
		func_308(8, iParam0);
	}
	else if (__LIB_0__::func_192(iParam0, 130796156))
	{
		func_308(-1, iParam0);
	}
}

Vector3 func_199()
{
	return -6323.169f, -3671.669f, 1.19892f;
}

Vector3 func_201()
{
	return -6322.69f, -3672.167f, 3.22559f;
}

Vector3 func_202()
{
	return 7.156243f, 49.48636f, 49.4864f;
}

bool func_209(int iParam0)
{
	var uVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return false;
	}
	if (__LIB_0__::func_774(iParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return func_216(iParam0, &uVar0, 1, 0, 0);
	}
	return __LIB_1__::func_707(iParam0, 1, 0);
}

struct<5> func_212(int iParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	Var0 = { __LIB_0__::func_949(bParam1) };
	Var0.f_4 = 1084182731;
	switch (__LIB_0__::func_356(iParam0))
	{
		case joaat("CLOTHING"):
			if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case joaat("WEAPON"):
			Var0 = { __LIB_1__::func_117(bParam1) };
			if (bParam2 && __LIB_0__::func_950(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_241(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else if (!func_241(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
				else if (__LIB_1__::func_429(iParam0, &Var5, 1728382685 /* GXTEntry: "Right" */))
				{
					Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
				}
				else
				{
					Var0.f_4 = -649335959; /* GXTEntry: "Left" */
				}
			}
			else
			{
				Var0.f_4 = 1728382685; /* GXTEntry: "Right" */
			}
			break;
		case joaat("HORSE"):
			Var0.f_4 = 1782082944;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -813824107;
			Var0 = { __LIB_1__::func_118(bParam1) };
			switch (__LIB_0__::func_357(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case joaat("UPGRADE"):
			if (__LIB_0__::func_793(iParam0, -1823706425))
			{
				Var0 = { __LIB_0__::func_429(joaat("KIT_CAMP"), Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("KIT_CAMP"));
			}
			else if (__LIB_0__::func_793(iParam0, -1483207246))
			{
				Var0 = { __LIB_0__::func_429(joaat("WARDROBE"), Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("WARDROBE"));
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!__LIB_0__::func_464(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(iParam0, joaat("CHARACTER"));
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_216(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	__LIB_0__::func_799(&iParam0);
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam3 = true;
	}
	if (__LIB_0__::func_787(iParam0) && WEAPON::_0x705BE297EEBDB95D(iParam0))
	{
		if (WEAPON::_IS_WEAPON_ONE_HANDED(iParam0))
		{
			Var0 = { __LIB_1__::func_117(0) };
			Var4.f_9 = -1591664384;
			if (!func_241(iParam0, &Var0, 1728382685 /* GXTEntry: "Right" */, 0))
			{
				return false;
			}
			else if (__LIB_1__::func_429(iParam0, &Var4, 1728382685 /* GXTEntry: "Right" */))
			{
				return false;
			}
			if (__LIB_0__::func_950(iParam0, 1))
			{
				if (!func_241(iParam0, &Var0, -649335959 /* GXTEntry: "Left" */, 0))
				{
					return false;
				}
				else if (__LIB_1__::func_429(iParam0, &Var4, -649335959 /* GXTEntry: "Left" */))
				{
					return false;
				}
			}
		}
		else if (!func_335(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = __LIB_0__::func_936(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = __LIB_0__::func_800(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(__LIB_0__::func_162(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

void func_237(int iParam0)
{
	int iVar0;
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			__LIB_0__::func_537(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			__LIB_0__::func_538(1);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			__LIB_0__::func_538(2);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			__LIB_0__::func_538(3);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			__LIB_0__::func_539(1);
			break;
		case 34:
			__LIB_0__::func_540(1);
			break;
		case 35:
			__LIB_0__::func_541(1);
			break;
		case 36:
			break;
		case 37:
			__LIB_0__::func_542(0);
			break;
		case 38:
			__LIB_0__::func_543(0);
			break;
		case 39:
			__LIB_0__::func_544(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			__LIB_1__::func_240(586, 0);
			break;
		case 3:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			__LIB_1__::func_240(587, 0);
			break;
		case 4:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			__LIB_1__::func_240(588, 0);
			break;
		case 5:
			if ((!Global_1879534 && __LIB_0__::func_28()) && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				__LIB_0__::func_384("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", joaat("HUD_TOASTS"), 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			__LIB_1__::func_240(589, 0);
			break;
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_WEAPON_DUALWIELD"), true);
			UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_WEAPON_DUALWIELD"), true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_0__::func_451(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) || __LIB_0__::func_802(joaat("MP_COMPONENT_TYPE_LOADOUT_3")) == 2110595215)
				{
					if (__LIB_0__::func_181())
					{
						iVar0 = -1515874150; /* GXTEntry: "John\'s Off-Hand Holster" */
					}
					else
					{
						iVar0 = joaat("CLOTHING_SP_OFFHAND_000");
					}
					if (!__LIB_1__::func_707(iVar0, 1, 0))
					{
						func_176(iVar0, 1, 752097756);
					}
					func_163(Global_35, iVar0, 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_176(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(1013902307, 1, 0))
				{
					func_176(1013902307, 1, 752097756);
				}
				if (!__LIB_1__::func_707(142640135, 1, 0))
				{
					func_176(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_176(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (__LIB_0__::func_2() == -1)
			{
				if (!__LIB_1__::func_707(786809402, 1, 0))
				{
					func_176(786809402, 1, 752097756);
				}
				if (!__LIB_1__::func_707(-518019409, 1, 0))
				{
					func_176(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER"), true);
			Global_1935630.f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_373();
			break;
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_POST_GANG1"), true);
			break;
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_RECEPTIVE"), true);
			break;
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_NATIVE_AMERICAN_DIALOGUE_TRUSTED"), true);
			break;
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("COMPENDIUM"), true);
			break;
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_PEDS_REACT_TO_SICK_ATHUR"), true);
			break;
	}
}

int func_240(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007 /* GXTEntry: "Extremely durable, hand tooled Off-Hand Holster with elaborate rattlesnake and sk" +
    "ull decoration." */;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return joaat("SLOTID_HORSE_BEDROLL");
		case 237:
			return joaat("SLOTID_HORSE_BLANKET");
		case 238:
			return joaat("SLOTID_HORSE_CANTLE");
		case 239:
			return joaat("SLOTID_HORSE_FENDER");
		case 240:
			return joaat("SLOTID_HORSE_HORN");
		case 241:
			return joaat("SLOTID_HORSE_INSURANCE");
		case 242:
			return 802754820;
		case 243:
			return joaat("SLOTID_HORSE_MANE");
		case 244:
			return -1886147520;
		case 245:
			return joaat("SLOTID_HORSE_REINS");
		case 246:
			return joaat("SLOTID_HORSE_SADDLE");
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return joaat("SLOTID_HORSE_SADDLEBAG");
		case 258:
			return 724026534;
		case 259:
			return joaat("SLOTID_HORSE_SEAT");
		case 260:
			return joaat("SLOTID_HORSE_SEX");
		case 261:
			return joaat("SLOTID_HORSE_SKIRT");
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return joaat("SLOTID_HORSE_STIRRUP");
		case 268:
			return joaat("SLOTID_HORSE_TAIL");
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return joaat("SLOTID_PROGRESSION");
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685 /* GXTEntry: "Right" */;
		case 387:
			return -649335959 /* GXTEntry: "Left" */;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
			return 282270687;
			return 1607708943;
			return 1686264939;
			return 314786149;
			return 1402841185;
			return 1099170772;
			return 2125676786;
			return -363896735;
			return -468790222;
			return -1779133048;
			return 1732537631;
			return 1755095401;
			return 835771095;
			return 1963317232;
			return 259627919;
			return 1299075397;
			return -1509094230;
			return 61132362;
			return 1549741908;
			return 288484254;
			return -1877032947;
			return -1395676456;
			return 1136146715;
			return 468034421;
			return 1079459546;
			return -140369351;
			return 1822341990;
			return 1219701681;
			return 1601295268;
			return -1692460667;
			return 1471419228;
			return 907446160;
			return -1126482585;
			return 1911050315;
			return -1343525599;
			return 1261891225;
			return 763162704;
			return 1335861197;
			return 526744654;
			return -1177461517;
			return -241638635;
			return 1024262875;
			return 853355463;
			return -337288221;
			return 361381308;
			return -1264898804;
			return -585289073;
			return 1423542233;
			return -948489286;
			return 2063859257;
			return -1652627327;
			return -1959697839;
			return -1532267859;
			return -1410062763;
			return -901428716;
			return -1628873469;
			return 144855571;
			return -617589883;
			return -1306457086;
			return 1713542477;
			return -305542365;
			return 1985390213;
			return -2145069367;
			return -1674390752;
			return -2117214398;
			return 1880805647;
			return -62390436;
			return 1815288415;
			return 196214097;
			return -201958220;
			return 244353594;
			return 302954672;
			return -1870144662;
			return 257892944;
			return -607182722;
			return -13254502;
			return 1400281261;
			return 1601515402;
			return -940704970;
			return -548371721;
			return -1022384613;
			return -357406394;
			return 1077068189;
			return -782241404;
			return 1669853467;
			return 1592019450;
			return 635273153;
			return -1559225678;
			return -266425508;
			return 1117400455;
			return 454332195;
			return -1328061889;
			return 561650932;
			return 256105670;
			return 1976779618;
			return -269095126;
			return 2145617267;
			return 1150213537;
			return 1598825281;
			return -712527121;
			return 1308553072;
			return 852866398;
			return -1794417972;
			return 293062146;
			return 95360094;
			return 807631773;
			return 1603958275;
			return 860052020;
			return -1885979781;
			return 746147970;
			return 666663006;
			return -2096186453;
			return 859409444;
			return -671427187;
			return 100192478;
			return 307812616;
			return 1670843243;
			return 899615863;
			return -298901850;
			return 1379186917;
			return -817206030;
			return -1150323212;
			return -247466821;
			return 427124242;
			return 855418120;
			return -777015093;
			return -722462870;
			return -937454324;
			return -339438116;
			return 2135639035;
			return 1254273765;
			return -792172668;
			return 1905987493;
			return 495693044;
			return -1693422950;
			return -205873076;
			return -2143114654;
			return -1420574021;
			return -1959250381;
			return -1088328663;
			return 513602003;
			return 359221401;
			return 1005272;
			return 1583044470;
			return 348853959;
			return 1045621973;
			return 1084576580;
			return 1651573695;
			return 1463321587;
			return -997505963;
			return -1649851713;
			return -386012962;
			return 1386101789;
			return 1227915917;
			return -218846335;
			return -352578118;
			return 1426626782;
			return -714081520;
			return 74547781;
			return 1271463052;
			return 1983140194;
			return 677262775;
			return -832337898;
			return -319249747;
			return -16955722;
			return -1535425646;
			return -1063641743;
			return -1041133401;
			return 1380479304;
			return 600890828;
			return 733333190;
			return 1843035435;
			return -304127320;
			return 122470371;
			return 0;
			return -1591664384;
			return -673000374;
			return -1150938404;
			return -1756997214;
			return -813824107;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
			if (iParam1 >= 1)
			{
			}
			return StackVal;
		}
bool func_241(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return __LIB_0__::func_800(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_252(int iParam0, int iParam1, var uParam2)
{
	var uVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	if (!__LIB_0__::func_144(iParam1, 0))
	{
		return false;
	}
	if (__LIB_0__::func_356(iParam1) != joaat("CLOTHING"))
	{
		return false;
	}
	bVar1 = __LIB_0__::func_2() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (__LIB_0__::func_357(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_380(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (__LIB_0__::func_192(iParam1, 866047851))
	{
		iVar5 = __LIB_0__::func_161(iVar4, 1);
		if (__LIB_0__::func_545(&(Global_1946804.f_1497)) >= 2 && Global_1946804.f_1497.f_1[iVar5 /*3*/] != iVar8)
		{
			*uParam2 = -265166256; /* GXTEntry: "You are wearing too many of this item. Remove some before equipping more." */
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_GET_PED_COMPONENT_CATEGORY(iVar8, iVar2, bVar1) == joaat("NECKTIES") && PED::_IS_METAPED_USING_COMPONENT(iParam0, -1455751347))
			{
				*uParam2 = 111371848; /* GXTEntry: "Your shirt does not support this type of neckwear." */
				return false;
			}
			iVar5 = 10;
			iVar3 = __LIB_0__::func_357(Global_1946804.f_1497.f_1[iVar5 /*3*/]);
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745; /* GXTEntry: "Your neckwear does not allow for changing your collar." */
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] != Global_1946804.f_57[iVar5 /*11*/] && __LIB_0__::func_192(iParam1, -1638171711))
			{
				*uParam2 = 187275271; /* GXTEntry: "Your chaps do not support this." */
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (PED::_IS_METAPED_USING_COMPONENT(iParam0, -1968556728))
			{
				*uParam2 = -849690042; /* GXTEntry: "Your boots do not support having spurs." */
				return false;
			}
			break;
		case -1505978566:
			if (__LIB_1__::func_182(1868067663, &uVar0))
			{
				*uParam2 = 939463734; /* GXTEntry: "Item cannot be worn with coats." */
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_GET_NUM_COMPONENTS_IN_PED(iParam0);
				iVar10 = __LIB_0__::func_546(iVar8, iVar4, iVar2, bVar1);
				iVar9 = __LIB_0__::func_546(Global_1946804.f_1497.f_1[iVar5 /*3*/], iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763; /* GXTEntry: "You are wearing too many items. Something must be removed to preview other items." +
    "" */
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = __LIB_0__::func_357(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_192(Global_1946804.f_1497.f_1[iVar5 /*3*/], -1638171711))
				{
					*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != Global_1946804.f_57[iVar6 /*11*/] && __LIB_0__::func_218(Global_1946804.f_1497.f_1[iVar5 /*3*/]))
					{
						*uParam2 = -357399012; /* GXTEntry: "Your boots do not support this." */
						return false;
					}
					if (Global_1946804.f_1497.f_1[iVar5 /*3*/] == Global_1946804.f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

bool func_287(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	__LIB_0__::func_191();
	if (iParam2 == 39)
	{
		Var0 = { func_212(iParam0, 1, 0) };
		iParam2 = __LIB_0__::func_161(__LIB_0__::func_709(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (__LIB_0__::func_192(iParam0, 866047851) && __LIB_0__::func_545(&(Global_1946804.f_1378)) >= 2)
	{
		return false;
	}
	if ((__LIB_0__::func_156(32768) && iParam2 == 10) && iParam0 != Global_1946804.f_57[iParam2 /*11*/])
	{
		__LIB_0__::func_968(__LIB_0__::func_158(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	__LIB_1__::func_40(iParam2);
	__LIB_1__::func_41(iParam2, iVar5);
	if (Global_1946804.f_1378.f_1[iParam2 /*3*/] != Global_1946804.f_57[iParam2 /*11*/] && Global_1946804.f_57[iParam2 /*11*/].f_1 > 1)
	{
		__LIB_0__::func_47(&(Global_1946804.f_1378.f_1[iParam2 /*3*/]), 4, 6);
		__LIB_0__::func_47(&(Global_1946804.f_1497.f_1[iParam2 /*3*/]), 4, 6);
	}
	__LIB_1__::func_455(&(Global_1946804.f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1;
	}
	Global_1946804.f_1378.f_1[iParam2 /*3*/] = iParam0;
	Global_1946804.f_1378.f_1[iParam2 /*3*/].f_1 = __LIB_0__::func_969(iParam0, iParam2, iParam1, __LIB_0__::func_2() != -1);
	if (bParam4)
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 3);
	}
	else
	{
		__LIB_1__::func_183(&(Global_1946804.f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804.f_2589)
		{
			if (Global_1946804.f_2589.f_2[iVar6 /*2*/] >= 0 && Global_1946804.f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1946804.f_2456[Global_1946804.f_2589.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				__LIB_0__::func_550(__LIB_0__::func_158(Global_1946804.f_2589.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

int func_299(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!__LIB_0__::func_144(iParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_216(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(__LIB_0__::func_162(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_308(int iParam0, int iParam1)
{
	if (__LIB_0__::func_192(iParam1, 130796156))
	{
		func_439(iParam1, 0);
	}
	else if (__LIB_0__::func_192(iParam1, 930141731))
	{
		func_439(iParam1, 1);
		func_440(iParam0);
	}
}

bool func_335(int iParam0, var uParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_212(iParam0, 0, 1) };
	iVar5 = 1728382685; /* GXTEntry: "Right" */
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_240((386 + iVar29), 1);
		if (func_241(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = __LIB_1__::func_429(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

void func_373()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS")))
	{
		func_466();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_ENDLESS_SUMMER_WEAPONS"), true);
		__LIB_0__::func_915(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"));
		func_176(joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN_JOHN"), true, 2, false, false);
		__LIB_0__::func_915(joaat("WEAPON_MELEE_KNIFE_JOHN"));
		func_176(joaat("WEAPON_MELEE_KNIFE_JOHN"), 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_MELEE_KNIFE_JOHN"), true, 4, false, false);
	}
}

int func_380(int iParam0)
{
	struct<5> Var0;
	Var0 = { func_212(iParam0, 1, 0) };
	return __LIB_0__::func_709(Var0.f_4);
}

void func_439(int iParam0, bool bParam1)
{
	int iVar0;
	iVar0 = __LIB_1__::func_134(iParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_134(50);
			}
			else
			{
				func_134(48);
			}
			break;
		case 1:
			if (bParam1)
			{
				func_134(51);
			}
			else
			{
				func_134(49);
			}
			break;
		case 2:
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				__LIB_0__::func_360();
			}
			break;
		case 3:
			func_134(24);
			if (bParam1)
			{
				if (!__LIB_1__::func_770(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					__LIB_0__::func_360();
				}
			}
			break;
	}
}

void func_440(int iParam0)
{
	int iVar0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (__LIB_1__::func_771(0))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(2))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(4))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(16))
			{
				if (iVar0 == 1)
				{
					func_507();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(16);
				}
			}
			if (!__LIB_0__::func_605(32))
			{
				if (iVar0 >= 3)
				{
					func_507();
					__LIB_1__::func_240(456, 1);
					__LIB_0__::func_606(32);
				}
			}
			break;
		case 1:
		case 3:
		case 7:
			if (__LIB_1__::func_771(1))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(3))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(7))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(1))
			{
				if (iVar0 == 1)
				{
					func_509();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(1);
				}
			}
			if (!__LIB_0__::func_605(2))
			{
				if (iVar0 >= 3)
				{
					func_509();
					__LIB_1__::func_240(457, 1);
					__LIB_0__::func_606(2);
				}
			}
			break;
		case 5:
		case 6:
		case 8:
			if (__LIB_1__::func_771(5))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(6))
			{
				iVar0++;
			}
			if (__LIB_1__::func_771(8))
			{
				iVar0++;
			}
			if (!__LIB_0__::func_605(4))
			{
				if (iVar0 == 1)
				{
					func_510();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(4);
				}
			}
			if (!__LIB_0__::func_605(8))
			{
				if (iVar0 >= 3)
				{
					func_510();
					__LIB_1__::func_240(455, 1);
					__LIB_0__::func_606(8);
				}
			}
			break;
	}
}

void func_466()
{
	var uVar0;
	struct<4> Var30;
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	uVar0 = 29;
	__LIB_0__::func_840(Global_35, &uVar0);
	Var30 = { __LIB_0__::func_949(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_530(0);
	func_531(7);
	func_532(joaat("KIT_BANDANA"), 1, 1, 0);
	if (__LIB_0__::func_241() == 1160113249)
	{
		func_532(joaat("CLOTHING_P3_PLAYER_THREE_MS1_HAT_000_000"), 1, 1, 1);
		func_532(-361635024 /* GXTEntry: "The Cowboy" */, 1, 1, 1);
	}
	__LIB_0__::func_841(Global_35, &uVar0);
}

void func_507()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_176(joaat("UPGRADE_STAMINA_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(1);
	__LIB_1__::func_132(1, iVar0, 0);
}

void func_509()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_176(joaat("UPGRADE_DEADEYE_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(2);
	__LIB_1__::func_132(2, iVar0, 0);
}

void func_510()
{
	int iVar0;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_176(joaat("UPGRADE_HEALTH_TANK_1"), 1, 752097756);
	iVar0 = __LIB_0__::func_963(0);
	__LIB_1__::func_132(0, iVar0, 0);
}

void func_530(bool bParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		iVar1 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_144(iVar1, 0))
		{
			func_566(iVar1, 0, bParam0);
		}
		Global_1946804.f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804.f_2657.f_20 = 0;
	Global_1946804.f_2657.f_21 = 0;
	Global_1946804.f_2657.f_22 = 0;
	Global_1946804.f_2657.f_23 = 0;
	Global_1946804.f_2657.f_24 = 0;
	Global_1946804.f_2657.f_25 = 0;
	Global_1946804.f_2657.f_19 = 0;
	Global_1946804.f_2657.f_26.f_6 = 0;
}

void func_531(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	Global_1946804.f_2657.f_26.f_2 = 3;
	Global_1946804.f_2657.f_26.f_1 = 3;
	Global_1946804.f_2657.f_26 = 3;
	if (__LIB_0__::func_2() == -1)
	{
		__LIB_1__::func_94(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26796.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_26796[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_26796.f_20;
		Global_1946804.f_2657.f_21 = Global_26796.f_21;
		Global_1946804.f_2657.f_22 = Global_26796.f_22;
		Global_1946804.f_2657.f_23 = Global_26796.f_23;
		Global_1946804.f_2657.f_24 = Global_26796.f_24;
		Global_1946804.f_2657.f_25 = Global_26796.f_25;
		Global_1946804.f_2657.f_19 = Global_26796.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36638.f_45.f_350.f_19)
		{
			Global_1946804.f_2657[iVar0] = Global_36638.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804.f_2657.f_20 = Global_36638.f_45.f_350.f_20;
		Global_1946804.f_2657.f_21 = Global_36638.f_45.f_350.f_21;
		Global_1946804.f_2657.f_22 = Global_36638.f_45.f_350.f_22;
		Global_1946804.f_2657.f_23 = Global_36638.f_45.f_350.f_23;
		Global_1946804.f_2657.f_24 = Global_36638.f_45.f_350.f_24;
		Global_1946804.f_2657.f_25 = Global_36638.f_45.f_350.f_25;
		Global_1946804.f_2657.f_19 = Global_36638.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804.f_2657.f_19)
	{
		iVar2 = Global_1946804.f_2657[iVar0];
		if (__LIB_0__::func_357(iVar2) != -999503751)
		{
			func_568(&(Global_1946804.f_2657.f_26.f_26), iVar2, iVar0);
		}
		if (func_569(iVar2, 0))
		{
			func_570(iVar2, Global_1946804.f_1497.f_1[iVar1 /*3*/] == Global_1946804.f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_532(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	if (!__LIB_0__::func_673(iParam0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_357(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_572(iParam0, &(Global_1946804.f_2657.f_21), Global_1946804.f_2657.f_26.f_1, bParam1);
			break;
		case 81053684:
			bVar1 = func_572(iParam0, &(Global_1946804.f_2657.f_23), 1, bParam1);
			break;
		case -999503751:
			bVar1 = func_572(iParam0, &(Global_1946804.f_2657.f_20), Global_1946804.f_2657.f_26, bParam1);
			break;
		case -525676072:
			bVar1 = func_572(iParam0, &(Global_1946804.f_2657.f_22), Global_1946804.f_2657.f_26.f_2, bParam1);
			break;
		case -1719060085:
			bVar1 = func_572(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
		case -413129408:
			bVar1 = func_572(iParam0, &(Global_1946804.f_2657.f_24), 1, bParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (iParam0 == __LIB_0__::func_856(0))
	{
		func_574(iParam0, 1);
		if (__LIB_0__::func_241() == 1160113249)
		{
			func_574(__LIB_0__::func_856(-2125499975), 0);
		}
		else
		{
			func_574(__LIB_0__::func_856(1160113249), 0);
		}
	}
	__LIB_0__::func_460();
	if (__LIB_1__::func_18(iVar0))
	{
		INVENTORY::_0x766315A564594401(__LIB_0__::func_162(0), iParam0, 0);
	}
	func_570(iParam0, bParam3);
	if (bParam2)
	{
		__LIB_0__::func_719(0, 0);
	}
}

void func_566(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	switch (__LIB_0__::func_357(iParam0))
	{
		case -2061583405:
			bVar0 = func_591(iParam0, &(Global_1946804.f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_591(iParam0, &(Global_1946804.f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_591(iParam0, &(Global_1946804.f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_591(iParam0, &(Global_1946804.f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_591(iParam0, &(Global_1946804.f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_591(iParam0, &(Global_1946804.f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		__LIB_0__::func_460();
	}
	if (bParam1)
	{
		__LIB_0__::func_719(0, 0);
	}
}

void func_568(var uParam0, int iParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	__LIB_0__::func_691(iParam2, *uParam0);
	func_593(&(uParam0->f_1[*uParam0 /*5*/]), iParam1, -1, 1, 0);
	*uParam0++;
}

bool func_569(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_212(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_0x9A113C660AEA3832(__LIB_0__::func_162(0), &Var5, iParam1);
	return true;
}

void func_570(int iParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_212(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(__LIB_0__::func_162(0), &Var5, bParam1);
}

int func_572(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	var uVar0;
	int iVar1;
	iVar1 = iParam0;
	if (Global_1946804.f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (__LIB_0__::func_554(iVar1, &uVar0))
	{
		return 0;
	}
	if (bParam3 && !func_569(iParam0, 0))
	{
		return 0;
	}
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = iVar1;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		func_568(&(Global_1946804.f_2657.f_26.f_26), iParam0, Global_1946804.f_2657.f_19);
	}
	Global_1946804.f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_574(int iParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	Var0 = { func_212(iParam0, 0, 0) };
	Var5 = { __LIB_0__::func_429(iParam0, Var0, Var0.f_4, 0) };
	if (__LIB_0__::func_800(iParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, __LIB_0__::func_162(0), &Var5);
	return 1;
}

int func_591(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	iVar1 = iParam0;
	if (!__LIB_0__::func_554(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804.f_2657.f_19 == 1)
	{
		Global_1946804.f_2657.f_19 = 0;
		*uParam1 = 0;
		if (__LIB_0__::func_357(iParam0) != -999503751)
		{
			__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), 0, Global_1946804.f_2657.f_19);
		}
		Global_1946804.f_2657[0] = 0;
		return 1;
	}
	Global_1946804.f_2657.f_19 = (Global_1946804.f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804.f_2657[iVar0] = Global_1946804.f_2657[Global_1946804.f_2657.f_19];
	Global_1946804.f_2657[Global_1946804.f_2657.f_19] = 0;
	if (__LIB_0__::func_357(iParam0) != -999503751)
	{
		__LIB_1__::func_459(&(Global_1946804.f_2657.f_26), iVar0, Global_1946804.f_2657.f_19);
	}
	func_569(iParam0, 1);
	return 1;
}

void func_593(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		__LIB_1__::func_13(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = __LIB_0__::func_161(func_380(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		__LIB_1__::func_192(uParam0);
	}
}

