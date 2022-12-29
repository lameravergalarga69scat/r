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
	struct<408> Local_14 = { 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_422 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	bool bLocal_432 = false;
	bool bLocal_433 = false;
	bool bLocal_434 = false;
	bool bLocal_435 = false;
	bool bLocal_436 = false;
	bool bLocal_437 = false;
	bool bLocal_438 = false;
	bool bLocal_439 = false;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	bool bLocal_444 = false;
	int iLocal_445 = 0;
#endregion
void __EntryFunction__()
{
	int iVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_430 = joaat("COACH2");
	iLocal_431 = joaat("S_M_M_COACHTAXIDRIVER_01");
	iLocal_440 = joaat("WORLD_HUMAN_STAND_WAITING");
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(555))
	{
		func_1(1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	iVar0 = 0;
	while (!func_2(&iVar0))
	{
		BUILTIN::WAIT(0);
	}
	func_1(iVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(int iParam0)
{
	if (iParam0 == 1 || iParam0 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_14.f_16))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false))
					{
						TASK::TASK_ENTER_VEHICLE(Local_14.f_16, Local_14.f_15, 20000, -1, 2f, 1, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_16));
				}
			}
			else
			{
				__LIB_2__::func_426(&(Local_14.f_16));
			}
		}
	}
	else
	{
		Global_1430231.f_3 = __LIB_0__::func_23();
		if (__LIB_0__::func_272(Local_14.f_16, 0) && !PED::IS_PED_IN_COMBAT(Local_14.f_16, 0))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_16));
		}
		else
		{
			__LIB_1__::func_446(&(Global_1430231.f_3), 0, 0, 1, 0, 0, 0, 0);
		}
	}
	if (bLocal_438)
	{
		__LIB_0__::func_267(1);
		bLocal_438 = false;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1430231.f_9))
	{
		MAP::SET_RADAR_ZOOM(Global_1430231.f_9);
		MAP::REMOVE_BLIP(&(Global_1430231.f_9));
	}
	Global_1430231.f_4 = 0;
	Global_1430231.f_5 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
	{
		if (iParam0 == 1 || iParam0 == 2)
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(Local_14.f_15))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_14.f_15));
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(Local_14.f_15));
			}
		}
		else
		{
			if (!PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false))
			{
				VEHICLE::_0xC399CC89FBA05DA0(Local_14.f_15, 1);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_14.f_15));
		}
	}
	ENTITY::_0x20FAEE47427A4497();
	if (PED::_0x62DE46F061CAA468() > 0)
	{
		PED::_0x7D4E70A67A651C71(5);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_430);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_431);
	if (UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")))
	{
		func_8(&Local_422);
		func_9(&Local_14);
	}
	if (bLocal_439)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		bLocal_439 = false;
	}
	CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
	if (Local_14.f_39)
	{
		func_9(&Local_14);
	}
	if (Local_14.f_46 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(7), false);
	}
	if (Local_14.f_47 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(1)))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(1), false);
	}
	if (bLocal_434)
	{
		func_11(&(Local_14.f_60));
	}
}

bool func_2(int iParam0)
{
	var uVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	var uVar7;
	if ((__LIB_14__::func_213(1, 0) || __LIB_14__::func_213(8, 0)) || __LIB_0__::func_296(0, 0, 1))
	{
		*iParam0 = 2;
		return true;
	}
	if ((!func_15(__LIB_0__::func_12()) && Local_14 < 17) && !Local_14.f_45)
	{
		*iParam0 = 7;
		return true;
	}
	if (Local_14 > 3)
	{
		*iParam0 = func_16();
		if (*iParam0 != 0)
		{
			return true;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16) && __LIB_0__::func_272(Local_14.f_16, 0))
	{
		PED::SET_PED_RESET_FLAG(Local_14.f_16, 49, true);
	}
	func_17(&(Local_14.f_60));
	switch (Local_14)
	{
		case 0:
			if (func_18() > 0 && (!__LIB_0__::func_113() || __LIB_0__::func_12() != 38))
			{
				bLocal_432 = false;
				Local_14.f_393 = __LIB_0__::func_23();
				Local_14 = 1;
			}
			break;
		case 1:
			if (Global_1430231.f_5 && !Local_14.f_45)
			{
				Local_14 = 11;
			}
			else if (Local_14.f_45)
			{
				func_20();
				Local_14 = 2;
			}
			else
			{
				Global_1430231.f_6 = 1;
				if (!__LIB_10__::func_657(20, 0) && !__LIB_0__::func_86(func_22(__LIB_0__::func_12())))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						fVar1 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
					}
					fVar2 = __LIB_1__::func_992(Global_35, func_22(__LIB_0__::func_12()), 1);
					if (((fVar2 < 15625f && fVar2 > 900f) && fVar1 <= 8f) || bLocal_432)
					{
						func_20();
						Local_14 = 2;
					}
					else
					{
						if (fVar2 >= 15625f)
						{
						}
						if (fVar2 <= 900f)
						{
						}
						if (fVar1 > 8f)
						{
						}
					}
				}
				else if (!__LIB_17__::func_379(__LIB_0__::func_12()))
				{
					*iParam0 = 7;
					return true;
				}
			}
			break;
		case 2:
			if (Global_1430231.f_5 && !Local_14.f_45)
			{
				Local_14 = 11;
			}
			if (func_26())
			{
				Local_14 = 3;
			}
			break;
		case 3:
			if (Global_1430231.f_5 && !Local_14.f_45)
			{
				Local_14 = 11;
			}
			iVar3 = __LIB_0__::func_12();
			func_27();
			if (!__LIB_0__::func_113() || iVar3 != 38)
			{
				if (func_28())
				{
					Local_14.f_57 = 6f;
					Local_14.f_58 = 6f;
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_16, 17, true);
					}
					if (!bLocal_432)
					{
						if (!__LIB_0__::func_163(Local_14.f_16, -1098463898))
						{
							TASK::TASK_START_SCENARIO_AT_POSITION(Local_14.f_16, iLocal_440, Local_14.f_27, Local_14.f_30, 0, false, true, 0, -1f, false);
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_14.f_15))
						{
							if (!__LIB_0__::func_175(Local_14.f_19, ENTITY::GET_ENTITY_COORDS(Local_14.f_15, true, false), 1056964608 /* Float: 0.5f */, 1))
							{
								func_31(Local_14.f_15, Local_14.f_19, Local_14.f_22, 2, 1073741824 /* Float: 2f */);
							}
						}
						func_32(&Local_14);
						VEHICLE::_0x87B974E54C71BA7B(Local_14.f_15, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
					{
						VEHICLE::_SET_PED_OWNS_VEHICLE(Local_14.f_16, Local_14.f_15);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 146, false);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 168, true);
						PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 216, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_16, 17, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_14.f_16, 14, false);
						PED::_0x24C82EF607105FAA(Local_14.f_16, joaat("TIMID"));
					}
					Local_14.f_13 = func_33(__LIB_0__::func_12());
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_568(Local_14.f_15, 2)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(__LIB_3__::func_568(Local_14.f_15, 2), 17, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_568(Local_14.f_15, 3)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(__LIB_3__::func_568(Local_14.f_15, 3), 17, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_568(Local_14.f_15, 0)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(__LIB_3__::func_568(Local_14.f_15, 0), 17, true);
					}
					if (ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_568(Local_14.f_15, 1)))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(__LIB_3__::func_568(Local_14.f_15, 1), 17, true);
					}
					bLocal_432 = false;
					if (iVar3 != -1)
					{
						Local_14.f_399 = MISC::GET_GAME_TIMER();
						if (!MAP::DOES_BLIP_EXIST(Global_1430231.f_9))
						{
							Global_1430231.f_9 = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_SHOP"), Local_14.f_15);
							MAP::SET_BLIP_SPRITE(Global_1430231.f_9, joaat("BLIP_AMBIENT_WARP"), true);
							MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1430231.f_9, "STAGE_COACH_BLIP");
							MAP::SET_BLIP_FLASH_TIMER(Global_1430231.f_9, 50, -1);
						}
					}
					Local_14 = 4;
				}
			}
			break;
		case 4:
			if (STREAMING::_0x99F92061EFE908BA() || __LIB_0__::func_1(Global_1935630, 16384))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
			{
				Local_14 = 3;
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_16) || PED::IS_PED_DEAD_OR_DYING(Local_14.f_16, true))
			{
				Local_14 = 3;
				return false;
			}
			if (!func_36(&(Local_14.f_60), Local_14.f_15, Local_14.f_16))
			{
			}
			Local_14 = 5;
			break;
		case 5:
			if (Global_1430231.f_5 && !Local_14.f_45)
			{
				Local_14 = 11;
			}
			if (!Local_14.f_45)
			{
				if (__LIB_0__::func_48(Global_35, Local_14.f_16, 20f, 1))
				{
					if (func_38(&Local_14))
					{
						*iParam0 = 4;
						return true;
					}
				}
				Local_14.f_400 = (MISC::GET_GAME_TIMER() - Local_14.f_399);
				if ((PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &iVar4, 0, 0) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_16)) && !PED::IS_PED_IN_COMBAT(Global_35, Local_14.f_16))
				{
					if ((((((ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar4) == Local_14.f_16 && __LIB_0__::func_232(Global_35, Local_14.f_16, 1) < (6f * 6f)) && !PED::IS_PED_RAGDOLL(Local_14.f_16)) && !TASK::_0x038B1F1674F0E242(Global_35)) && !TASK::_0xEC7E480FF8BD0BED(Global_35)) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::_0x331550B212014B92(Global_35, 0))
					{
						func_40();
						func_41(&Local_14, &iVar4);
					}
				}
				else
				{
					if ((((!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16) && !PED::IS_PED_IN_COMBAT(Global_35, 0)) && !LAW::_0x0EAF918F751F27BA(Local_14.f_16)) && !PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false)) && Local_14.f_398 >= 18000)
					{
						func_42();
					}
					else if (!PED::IS_PED_IN_COMBAT(Global_35, 0))
					{
						Local_14.f_398 = (MISC::GET_GAME_TIMER() - Local_14.f_397);
					}
					else
					{
						Local_14.f_397 = MISC::GET_GAME_TIMER();
					}
					if (!__LIB_0__::func_139(Local_14.f_406))
					{
						Local_14.f_406 = __LIB_1__::func_282("STAGE_COACH_INSTRUCTION", joaat("INPUT_INTERACT_LOCKON"), ENTITY::GET_ENTITY_COORDS(Local_14.f_16, true, false), 4f, 1, 0, 0, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0);
					}
					bLocal_444 = false;
					__LIB_1__::func_748(&(Local_14.f_404), 1, 1);
					__LIB_1__::func_748(&(Local_14.f_405), 1, 1);
				}
				if (!func_46())
				{
					*iParam0 = 7;
					return true;
				}
				if (__LIB_1__::func_992(Global_35, func_22(__LIB_0__::func_12()), 1) > 15625f)
				{
					*iParam0 = 8;
					return true;
				}
			}
			else
			{
				VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_16, joaat("REL_PLAYER_ALLY"));
				PED::SET_PED_INTO_VEHICLE(Local_14.f_16, Local_14.f_15, -1);
				PED::SET_PED_INTO_VEHICLE(Global_35, Local_14.f_15, 0);
				PED::_0x2208438012482A1A(Global_35, false, false);
				PED::_0x2208438012482A1A(Local_14.f_16, false, false);
				Local_14.f_397 = MISC::GET_GAME_TIMER();
				Local_14 = 12;
			}
			break;
		case 11:
			if (UIAPPS::_IS_ANY_APP_RUNNING() && !UIAPPS::_IS_APP_ACTIVE_BY_HASH(joaat("FAST_TRAVEL_MENU")))
			{
				func_8(&Local_422);
				func_9(&Local_14);
				bLocal_444 = false;
				Local_14 = 5;
				CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
				return false;
			}
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (!Local_14.f_39)
				{
					func_47(&Local_14, __LIB_0__::func_12(), Global_1430231.f_5);
				}
				func_48();
				if (func_49(&Local_422, &Local_14))
				{
					AUDIO::STOP_PED_SPEAKING(Local_14.f_16, true);
					if (!bLocal_444 && !Global_1430231.f_5)
					{
						__LIB_1__::func_265(Local_14.f_16, "WHERE_YOU_HEADED", 1808677283, Global_35, 1, 0, 0, 1);
						bLocal_444 = true;
					}
					if (((!STREAMING::_0x99F92061EFE908BA() && !__LIB_0__::func_1(Global_1935630, 16384)) && ENTITY::DOES_ENTITY_EXIST(Local_14.f_15)) && (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16) && !PED::IS_PED_DEAD_OR_DYING(Local_14.f_16, true)))
					{
						if (!func_36(&(Local_14.f_60), Local_14.f_15, Local_14.f_16))
						{
						}
					}
					Local_14 = 10;
				}
			}
			break;
		case 10:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (!CAM::_0xAA235E2F2C09E952("script@Cinematics@FastTravel@StageCoach_Intros") && !CAM::_0x595550376B7EA230("script@Cinematics@FastTravel@StageCoach_Intros"))
			{
				CAM::_0x1B3C2D961F5FC0E1("script@Cinematics@FastTravel@StageCoach_Intros");
			}
			CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 1);
			switch (func_51(&Local_422))
			{
				case 1:
					if (__LIB_3__::func_63())
					{
						func_8(&Local_422);
						func_9(&Local_14);
						bLocal_444 = false;
						Local_14 = 5;
						CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
					}
					break;
				case 2:
					PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
					if (__LIB_0__::func_20(Local_422.f_6))
					{
						Local_14.f_407 = Local_422.f_6;
						if (__LIB_0__::func_48(Global_35, __LIB_0__::func_398(7), __LIB_1__::func_136(7), 1) && !TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(7)))
						{
							Local_14.f_46 = 1;
						}
						if (__LIB_0__::func_48(Global_35, __LIB_0__::func_398(1), __LIB_1__::func_136(1), 1) && !TASK::IS_PED_IN_WRITHE(__LIB_0__::func_398(1)))
						{
							Local_14.f_47 = 1;
						}
						bLocal_439 = true;
						func_56(func_55(Local_422.f_6));
						func_9(&Local_14);
						if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
						{
							VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 1);
						}
						__LIB_2__::func_522(Local_422.f_7, 0, 0, 0, 1);
						func_8(&Local_422);
						if (!Global_1430231.f_5)
						{
							Local_14 = 7;
						}
						else
						{
							if (!CAM::IS_SCREEN_FADED_OUT())
							{
								CAM::DO_SCREEN_FADE_OUT(100);
							}
							Global_1430231.f_5 = 0;
							Local_14.f_45 = 1;
							Local_14 = 1;
						}
					}
					break;
				case 0:
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
					{
						__LIB_1__::func_265(Local_14.f_16, "SUIT_YOURSELF", 1808677283, 0, 1, 0, 0, 1);
					}
					func_8(&Local_422);
					func_9(&Local_14);
					bLocal_444 = false;
					if (!Global_1430231.f_5)
					{
						if (!Local_14.f_41)
						{
							Local_14 = 5;
						}
						else
						{
							Local_14 = 8;
						}
					}
					else
					{
						func_1(6);
					}
					CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
					break;
				default:
					func_8(&Local_422);
					func_9(&Local_14);
					bLocal_444 = false;
					Local_14 = 5;
					CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
					break;
			}
			break;
		case 7:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if (func_58())
			{
				iLocal_441 = 0;
				Local_14 = 8;
			}
			break;
		case 8:
			__LIB_1__::func_725();
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			AUDIO::STOP_PED_SPEAKING(Local_14.f_16, false);
			TASK::CLEAR_PED_TASKS(Local_14.f_16, true, false);
			PLAYER::_0x3AD212429E095EFB(PLAYER::PLAYER_ID(), Local_14.f_15);
			TASK::TASK_ENTER_VEHICLE(Global_35, Local_14.f_15, 20000, -2, 1f, 1, 0);
			CAM::SET_CINEMATIC_MODE_ACTIVE(true);
			Local_14 = 9;
			break;
		case 9:
			__LIB_1__::func_725();
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 146, true);
			VEHICLE::_0x87B974E54C71BA7B(Local_14.f_15, 0);
			bVar5 = PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 297, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 130, true);
			PLAYER::_0x3AD212429E095EFB(PLAYER::PLAYER_ID(), Local_14.f_15);
			if ((!bVar5 && !__LIB_0__::func_163(Local_14.f_16, -1794415470)) && !Global_1430231.f_5)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16) && !Global_1430231.f_5)
				{
					TASK::TASK_ENTER_VEHICLE(Local_14.f_16, Local_14.f_15, 20000, -1, 1f, 1, 0);
				}
			}
			if ((bVar5 && !Local_14.f_42) && !Global_1430231.f_5)
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
				{
					if (((__LIB_16__::func_366(__LIB_2__::func_702()) > 15 || __LIB_3__::func_425(&uVar0)) || PED::_0x88A5564B19C15391(Global_35)) || Local_14.f_44)
					{
						__LIB_1__::func_265(Local_14.f_16, "BAD_FEELING_ACCEPT", 1808677283, Global_35, 1, 0, 0, 1);
					}
					Local_14.f_42 = 1;
				}
			}
			if (bVar5 && PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false))
			{
				TASK::CLEAR_PED_TASKS(Local_14.f_16, true, false);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_14.f_15, false);
				if (!bLocal_434)
				{
					Local_14.f_397 = MISC::GET_GAME_TIMER();
				}
				if (Local_14.f_45)
				{
					Local_14 = 12;
				}
				else
				{
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(Local_14.f_16, Local_14.f_15, Local_14.f_50, Local_14.f_57, 524419, 2, 2f, 5f, 0);
					__LIB_1__::func_265(Local_14.f_16, "GIDDY_UP", 1808677283, Global_35, 1, 0, 0, 1);
					func_63();
				}
			}
			break;
		case 12:
			__LIB_1__::func_725();
			func_56(func_55(iLocal_442));
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 146, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 297, true);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 130, false);
			if (((PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false) && PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false)) && (MISC::GET_GAME_TIMER() - Local_14.f_397) > 500) || (MISC::GET_GAME_TIMER() - Local_14.f_397) > 20000)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				__LIB_1__::func_265(Local_14.f_16, "GIDDY_UP", 1808677283, Global_35, 1, 0, 0, 1);
				VEHICLE::_0x87B974E54C71BA7B(Local_14.f_15, 0);
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(Local_14.f_16, Local_14.f_15, Local_14.f_50, Local_14.f_57, 524419, 2, 2f, 5f, 0);
				func_63();
				Local_14.f_397 = MISC::GET_GAME_TIMER();
			}
			break;
		case 13:
			__LIB_1__::func_725();
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || LAW::_0x69E181772886F48B(PLAYER::PLAYER_ID()))
			{
				LAW::_0x062B4A4A3396351D(PLAYER::PLAYER_ID());
			}
			Local_14.f_41 = 1;
			if (PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				bLocal_439 = true;
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SHUFFLE"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ACCURATE_AIM"), false);
			}
			if (!bLocal_434)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_16, true);
				if (Local_14.f_45)
				{
					if (!CAM::IS_SCREEN_FADED_IN())
					{
						CAM::DO_SCREEN_FADE_IN(3000);
					}
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_445) > 7000)
				{
					bLocal_434 = true;
					if (Local_14.f_407 == 69 || Local_14.f_407 == 126)
					{
						iVar6 = 2;
					}
					else
					{
						iVar6 = 1;
					}
					if (!func_64(&(Local_14.f_60), Global_35, iVar6))
					{
						bLocal_434 = false;
					}
					else
					{
						func_65(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), Local_14.f_50, &uVar7);
						func_66(&(Local_14.f_60), uVar7, 0);
					}
				}
			}
			else if (!func_67(&(Local_14.f_60)))
			{
				bLocal_434 = false;
			}
			else
			{
				ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_57(Local_14.f_16), true);
				ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_57(Local_14.f_15), true);
				if (Local_14.f_46 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(7), true);
				}
				if (Local_14.f_47 && ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(1)))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(1), true);
				}
				if (__LIB_3__::func_751(21) && Local_14.f_407 == 105)
				{
					Global_1430231.f_10 = 1;
				}
				Local_14 = 17;
			}
			if ((!bLocal_435 && !bLocal_434) && !bLocal_437)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_14.f_15, true, false), Local_14.f_50, true) <= 2000f)
				{
					bLocal_435 = true;
					__LIB_1__::func_265(Local_14.f_16, "COMMENT_ON_DISTANCE_FAR", 1808677283, Global_35, 1, 0, 0, 1);
				}
			}
			if (!bLocal_436 && !bLocal_434)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_14.f_15, true, false), Local_14.f_50, true) <= 200f)
				{
					bLocal_436 = true;
					__LIB_1__::func_265(Local_14.f_16, "COMMENT_ON_DISTANCE_NEAR", 1808677283, Global_35, 1, 0, 0, 1);
				}
			}
			break;
		case 16:
			__LIB_1__::func_725();
			if (!__LIB_0__::func_163(Local_14.f_16, -1794415470))
			{
				TASK::TASK_ENTER_VEHICLE(Local_14.f_16, Local_14.f_15, 20000, -1, 2f, 1, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(Local_14.f_16, Local_14.f_15, false))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(Local_14.f_16, Local_14.f_15, Local_14.f_50, Local_14.f_57, 524419, 2, 2f, 5f, 0);
				func_63();
			}
			if (__LIB_0__::func_255(Local_14.f_16, 0) || __LIB_0__::func_232(Global_35, Local_14.f_16, 1) > 5625f)
			{
				Local_14 = 20;
			}
			break;
		case 17:
			__LIB_1__::func_725();
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
			PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			if (__LIB_3__::func_751(21) && Global_1430231.f_10)
			{
				STREAMING::_0x62D5F0588915B277();
				return false;
			}
			if (func_71(&(Local_14.f_60)))
			{
				if (Local_14.f_46)
				{
					func_31(__LIB_0__::func_398(7), func_72(iLocal_442, 0), func_73(iLocal_442), 2, 1073741824 /* Float: 2f */);
					ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(7), false);
				}
				if (Local_14.f_47)
				{
					func_31(__LIB_0__::func_398(1), func_72(iLocal_442, 1), func_73(iLocal_442), 2, 1073741824 /* Float: 2f */);
					ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_398(1), false);
				}
				if (PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false))
				{
					if (!__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
					{
						__LIB_1__::func_265(Local_14.f_16, "ARRIVED_AT_DESTINATION", 1808677283, Global_35, 1, 0, 0, 1);
						if (Local_14.f_407 == 69 || Local_14.f_407 == 126)
						{
							TASK::TASK_LEAVE_VEHICLE(Global_35, Local_14.f_15, 17039360, 0);
						}
						else
						{
							TASK::TASK_LEAVE_VEHICLE(Global_35, Local_14.f_15, 16908288, 0);
						}
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						bLocal_439 = false;
						if (__LIB_0__::func_399(Global_35, 1, 0, 0) != joaat("WEAPON_UNARMED"))
						{
							WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 0);
						}
					}
				}
				TASK::CLEAR_PED_TASKS(Local_14.f_16, true, false);
				ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_57(Local_14.f_16), false);
				ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_57(Local_14.f_15), false);
				CAM::_0x2412216FCC7B4E3E("script@Cinematics@FastTravel@StageCoach_Intros");
				func_75(100f);
				__LIB_1__::func_265(Local_14.f_16, "ARRIVED_AT_DESTINATION_FAST_TRAVEL", 1808677283, Global_35, 1, 0, 0, 1);
				iLocal_445 = MISC::GET_GAME_TIMER();
				Local_14 = 19;
			}
			break;
		case 19:
			__LIB_1__::func_725();
			Local_14.f_40 = 1;
			if (!PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_14.f_16, joaat("REL_NO_RELATIONSHIP"));
				CAM::SET_CINEMATIC_MODE_ACTIVE(false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				bLocal_439 = false;
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
				{
					if (__LIB_0__::func_12() == 120)
					{
						VEHICLE::_0xC2E62678D602853C(Local_14.f_15, -3712.5f, -2618.5f, -13f, -3710f, -2615.5f, -13.5f);
					}
					__LIB_6__::func_178(__LIB_0__::func_12(), __LIB_1__::func_898(), -1, 0, -1, 0);
					__LIB_1__::func_265(Global_35, "RIDER_THANK_FOR_LIFT", 1808677283, Local_14.f_16, 1, 0, 0, 1);
					Local_14 = 20;
				}
			}
			break;
		case 20:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
			{
				__LIB_1__::func_265(Local_14.f_16, "TAXI_FRIENDLY_FAREWELL", 1808677283, Global_35, 1, 0, 0, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_14.f_16, false);
			VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 0);
			Local_14.f_46 = 0;
			Local_14.f_47 = 0;
			func_11(&(Local_14.f_60));
			bLocal_434 = false;
			bLocal_435 = false;
			bLocal_436 = false;
			bLocal_432 = true;
			bLocal_437 = false;
			Local_14.f_42 = 0;
			Local_14.f_41 = 0;
			Local_14.f_45 = 0;
			Global_1430231.f_4 = 0;
			Global_1430231.f_10 = 0;
			if (__LIB_17__::func_379(Local_14.f_407))
			{
				Local_14 = 3;
				func_18();
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_14.f_16));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_14.f_15));
				}
			}
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15) && __LIB_0__::func_272(Global_35, 0))
	{
		func_78(PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, false));
	}
	if ((((ENTITY::DOES_ENTITY_EXIST(Local_14.f_15) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_14.f_15, false, false)) && ENTITY::DOES_ENTITY_EXIST(Global_35)) && !PED::IS_PED_INJURED(Global_35)) && PED::IS_PED_IN_VEHICLE(Global_35, Local_14.f_15, true))
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME_2();
	}
	return false;
}

void func_8(var uParam0)
{
	func_90();
	UIAPPS::_CLOSE_APP_BY_HASH(joaat("FAST_TRAVEL_MENU"));
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_2);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	MAP::DISPLAY_RADAR(true);
	__LIB_4__::func_517(0);
	uParam0->f_5 = 0;
}

void func_9(int iParam0)
{
	ENTITY::SET_ENTITY_VISIBLE(Global_35, true);
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
	{
		ENTITY::SET_ENTITY_VISIBLE(__LIB_0__::func_398(7), true);
		PED::_0xC9151483CC06A414(__LIB_0__::func_398(7));
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(1)))
	{
		ENTITY::SET_ENTITY_VISIBLE(__LIB_0__::func_398(1), true);
		PED::_0xC9151483CC06A414(__LIB_0__::func_398(1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(6)))
	{
		ENTITY::SET_ENTITY_VISIBLE(__LIB_0__::func_398(6), true);
		PED::_0xC9151483CC06A414(__LIB_0__::func_398(6));
	}
	if (CAM::IS_CAM_RENDERING(iParam0->f_18))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (CAM::IS_CAM_ACTIVE(iParam0->f_18))
	{
		CAM::SET_CAM_ACTIVE(iParam0->f_18, false);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_18))
	{
		CAM::DESTROY_CAM(iParam0->f_18, false);
	}
	iParam0->f_39 = 0;
}

void func_11(var uParam0)
{
	__LIB_19__::func_17(uParam0);
	uParam0->f_331 = 0;
}

bool func_15(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 26:
		case 38:
		case 69:
		case 76:
		case 78:
		case 92:
		case 105:
		case 115:
		case 120:
		case 126:
			return true;
		default:
			break;
	}
	return false;
}

int func_16()
{
	if ((!__LIB_0__::func_272(Local_14.f_16, 0) && !Global_1430231.f_5) && !bLocal_433)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_15))
		{
			VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 0);
		}
		return 5;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_16))
	{
		if (PED::IS_PED_FLEEING(Local_14.f_16) && !Global_1430231.f_5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_15) && !ENTITY::IS_ENTITY_DEAD(Local_14.f_15))
			{
				VEHICLE::_0x0CD7914D17A970AB(Local_14.f_15, 0);
			}
			return 4;
		}
		else if (PED::IS_PED_IN_COMBAT(Local_14.f_16, 0) && !Global_1430231.f_5)
		{
			return 4;
		}
		else if (PED::_0x331550B212014B92(Local_14.f_16, Global_35))
		{
			if (!LAW::_0x0EAF918F751F27BA(Local_14.f_16))
			{
				LAW::_0xF0B67BAD53C35BD9(Local_14.f_16, Global_35, Local_14.f_16, ENTITY::GET_ENTITY_COORDS(Local_14.f_16, true, false), joaat("CRIME_HASSLE"));
			}
			return 4;
		}
		else if (LAW::_0x0EAF918F751F27BA(Local_14.f_16))
		{
			return 4;
		}
	}
	if ((ENTITY::IS_ENTITY_DEAD(Local_14.f_15) && !bLocal_433) && !Global_1430231.f_5)
	{
		return 3;
	}
	return 0;
}

void func_17(var uParam0)
{
	if (uParam0->f_331 == 1)
	{
		func_102(uParam0);
	}
	switch (uParam0->f_332)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			func_103(uParam0, 3);
			break;
		case 3:
			if (__LIB_17__::func_377(uParam0))
			{
				func_103(uParam0, 4);
			}
			break;
		case 4:
			func_103(uParam0, 5);
			break;
		case 5:
			break;
	}
}

int func_18()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = __LIB_0__::func_12();
	if (__LIB_3__::func_222(105) && iVar1 != 105)
	{
		Local_14.f_1[0] = 0;
		iVar0++;
	}
	else
	{
		Local_14.f_1[0] = -1;
	}
	if (__LIB_3__::func_222(76) && iVar1 != 76)
	{
		Local_14.f_1[1] = 1;
		iVar0++;
	}
	else
	{
		Local_14.f_1[1] = -1;
	}
	if (__LIB_3__::func_222(69) && iVar1 != 69)
	{
		Local_14.f_1[2] = 4;
		iVar0++;
	}
	else
	{
		Local_14.f_1[2] = -1;
	}
	if (__LIB_3__::func_222(26) && iVar1 != 26)
	{
		Local_14.f_1[3] = 6;
		iVar0++;
	}
	else
	{
		Local_14.f_1[3] = -1;
	}
	if (__LIB_3__::func_222(5) && iVar1 != 5)
	{
		Local_14.f_1[4] = 3;
		iVar0++;
	}
	else
	{
		Local_14.f_1[4] = -1;
	}
	if ((__LIB_3__::func_222(38) && iVar1 != 38) && ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		Local_14.f_1[5] = 5;
		iVar0++;
	}
	else
	{
		Local_14.f_1[5] = -1;
	}
	if (__LIB_3__::func_222(78) && iVar1 != 78)
	{
		Local_14.f_1[6] = 2;
		iVar0++;
	}
	else
	{
		Local_14.f_1[6] = -1;
	}
	if (__LIB_3__::func_222(92) && iVar1 != 92)
	{
		Local_14.f_1[7] = 7;
		iVar0++;
	}
	else
	{
		Local_14.f_1[7] = -1;
	}
	if ((__LIB_3__::func_222(120) && iVar1 != 120) && ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		Local_14.f_1[8] = 8;
		iVar0++;
	}
	else
	{
		Local_14.f_1[8] = -1;
	}
	if ((__LIB_3__::func_222(126) && iVar1 != 126) && ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		Local_14.f_1[9] = 9;
		iVar0++;
	}
	else
	{
		Local_14.f_1[9] = -1;
	}
	if ((__LIB_3__::func_222(115) && iVar1 != 115) && ENTITY::GET_ENTITY_MODEL(Global_35) != joaat("PLAYER_ZERO"))
	{
		Local_14.f_1[10] = 10;
		iVar0++;
	}
	else
	{
		Local_14.f_1[10] = -1;
	}
	return iVar0;
}

void func_20()
{
	PED::_0xED9582B3DA8F02B4(5);
	STREAMING::REQUEST_MODEL(iLocal_430, false);
	STREAMING::REQUEST_MODEL(iLocal_431, false);
}

Vector3 func_22(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1265.532f, -1296.313f, 74.69895f;
		case 76:
			return -179.2878f, 653.2728f, 112.671f;
		case 69:
			return 1521.499f, 421.2237f, 88.996f;
		case 78:
			return 2927.38f, 1292.17f, 43.3466f;
		case 26:
			return -1847.386f, -431.3473f, 158.5361f;
		case 5:
			return 2740.203f, -1409.765f, 45.1295f;
		case 38:
			return -853.2393f, -1335.256f, 42.35394f;
		case 120:
			return -3711.96f, -2638.115f, -14.5579f;
		case 126:
			return -2478.344f, -2441.168f, 59.0484f;
		case 115:
			return -5566.151f, -2948.546f, -1.71505f;
		case 92:
			return 2944.181f, 597.33f, 43.0326f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_26()
{
	int iVar0;
	iVar0 = 1;
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_430))
	{
		iVar0 = 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_431))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_27()
{
	int iVar0;
	iVar0 = __LIB_0__::func_12();
	iLocal_443 = iVar0;
	Local_14.f_22 = func_108(iVar0);
	Local_14.f_19 = { func_22(iVar0) };
	Local_14.f_30 = func_109(iVar0);
	Local_14.f_27 = { func_110(iVar0) };
}

bool func_28()
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	fVar0 = __LIB_1__::func_992(Global_35, func_22(__LIB_0__::func_12()), 1);
	if (bLocal_432)
	{
		return true;
	}
	if ((!CAM::IS_SPHERE_VISIBLE(Local_14.f_19, 2f) && fVar0 > 2500f) || CAM::IS_SCREEN_FADED_OUT())
	{
		iVar1 = __LIB_0__::func_398(7);
		if ((CAM::IS_SCREEN_FADED_OUT() && ENTITY::DOES_ENTITY_EXIST(iVar1)) && __LIB_0__::func_94(iVar1, Local_14.f_19, 1) < 6f)
		{
			vVar2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_14.f_19, Local_14.f_22, 1f, -6f, 0f) };
			func_31(iVar1, vVar2, 0f, 2, 1073741824 /* Float: 2f */);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15))
		{
			__LIB_3__::func_618(Local_14.f_19, 5f, 1, 0, 0, 0, 0);
			Local_14.f_15 = VEHICLE::CREATE_VEHICLE(iLocal_430, Local_14.f_19, Local_14.f_22, true, true, false, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_14.f_15, 1.401298E-45f);
			return false;
		}
		if (!__LIB_0__::func_272(Local_14.f_16, 0))
		{
			Local_14.f_16 = __LIB_1__::func_545(iLocal_431, Local_14.f_27, Local_14.f_30, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 113, false);
			PED::SET_PED_CONFIG_FLAG(Local_14.f_16, 230, true);
			return false;
		}
	}
	else
	{
		if (fVar0 < 2500f)
		{
		}
		return false;
	}
	return true;
}

void func_31(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_31(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_31(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

void func_32(int iParam0)
{
	int iVar0;
	switch (iParam0->f_13)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case 2:
			iVar0 = 2;
			break;
		default:
			iVar0 = 3;
			break;
	}
	VEHICLE::_SET_VEHICLE_LIVERY(iParam0->f_15, iVar0);
}

int func_33(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 105:
			return 1;
		case 26:
		case 38:
			return 0;
		case 69:
		case 76:
		case 78:
			return 2;
		default:
			break;
	}
	return 1;
}

bool func_36(var uParam0, var uParam1, var uParam2)
{
	if (!func_116(uParam0, 0, 0, -1, 1))
	{
		return false;
	}
	STREAMING::_0x05DD384F39DE1C8C(uParam1, uParam2);
	func_117(uParam0, 1);
	uParam0->f_331 = 1;
	func_103(uParam0, 1);
	return true;
}

bool func_38(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (PED::IS_PED_IN_VEHICLE(Global_35, iParam0->f_15, false) && __LIB_3__::func_640(Global_35, iParam0->f_15) == -1)
	{
		if (!LAW::_0x0EAF918F751F27BA(iParam0->f_16))
		{
			LAW::_0xF0B67BAD53C35BD9(iParam0->f_16, Global_35, iParam0->f_16, iParam0->f_19, joaat("CRIME_THEFT_VEHICLE"));
			return true;
		}
	}
	iVar0 = __LIB_3__::func_568(iParam0->f_15, 2);
	iVar1 = __LIB_3__::func_568(iParam0->f_15, 3);
	iVar2 = __LIB_3__::func_568(iParam0->f_15, 0);
	iVar3 = __LIB_3__::func_568(iParam0->f_15, 1);
	if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar2, Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar3, Global_35, 1, 1))
	{
		LAW::_0xF0B67BAD53C35BD9(iParam0->f_16, Global_35, iVar0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("CRIME_ASSAULT_ANIMAL"));
		return true;
	}
	return false;
}

void func_40()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	if (!__LIB_0__::func_163(Local_14.f_16, -880529684))
	{
		TASK::TASK_LOOK_AT_COORD(Local_14.f_16, vVar0 + Vector(1f, 0f, 0f), 2500, 2, 51, 1);
	}
}

void func_41(int iParam0, int iParam1)
{
	func_119(iParam0, *iParam1);
	func_120(iParam0, 1);
	if (!Global_1911914.f_1582)
	{
		if (__LIB_1__::func_732(iParam0->f_404, 1))
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
			AUDIO::STOP_PED_SPEAKING(iParam0->f_16, false);
			if ((((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || (__LIB_16__::func_366(__LIB_2__::func_702()) > 15 && __LIB_16__::func_366(__LIB_2__::func_702()) <= 30)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 2)) && !func_122(0, 0, 8, 0, 0, 0)) || __LIB_8__::func_67() >= 0.8f)
			{
				__LIB_0__::func_45(func_124(), 10000, 0, 0, 0, 1);
				__LIB_1__::func_265(iParam0->f_16, "BAD_FEELING_DECLINE", 1808677283, Global_35, 1, 0, 0, 1);
			}
			else if (((PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 2) || __LIB_16__::func_366(__LIB_2__::func_702()) > 15) || PED::_IS_PED_CARRYING(Global_35)) || (ENTITY::DOES_ENTITY_EXIST(iParam0->f_15) && __LIB_6__::func_693(Global_35, iParam0->f_15, -1)))
			{
				__LIB_0__::func_45(func_124(), 10000, 0, 0, 0, 1);
				__LIB_1__::func_265(iParam0->f_16, "REFUSE_SERVICE", 1808677283, Global_35, 1, 0, 0, 1);
			}
			else
			{
				__LIB_1__::func_748(&(iParam0->f_404), 1, 1);
				if (__LIB_0__::func_139(iParam0->f_406))
				{
					__LIB_1__::func_748(&(iParam0->f_406), 1, 1);
				}
				__LIB_1__::func_265(Global_35, "PLAYER_ASK_FOR_RIDE", 1808677283, iParam0->f_16, 1, 0, 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0->f_16, joaat("REL_PLAYER_ALLY"));
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				*iParam0 = 11;
			}
		}
	}
}

void func_42()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	if (__LIB_0__::func_232(Global_35, Local_14.f_16, 1) > 10000f)
	{
		iVar0 = 0;
		while (iVar0 < Local_14.f_35)
		{
			Local_14.f_35[iVar0] = 0;
			iVar0++;
		}
	}
	if (ENTITY::IS_ENTITY_ON_SCREEN(Local_14.f_16))
	{
		if (__LIB_1__::func_426(Local_14.f_393, 1) && func_128())
		{
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (__LIB_0__::func_232(Global_35, Local_14.f_16, 1) < 81f)
			{
				if (!Local_14.f_35[iVar2])
				{
					Local_14.f_35[iVar2] = 1;
					sVar1 = func_129(iVar2);
					if (MISC::ARE_STRINGS_EQUAL(sVar1, "CALL_OUT_MALE"))
					{
						func_40();
					}
					__LIB_1__::func_265(Local_14.f_16, sVar1, 1808677283, Global_35, 1, 0, 0, 1);
					Local_14.f_397 = MISC::GET_GAME_TIMER();
					func_130();
				}
			}
		}
		else
		{
			Local_14.f_397 = MISC::GET_GAME_TIMER();
		}
	}
}

bool func_46()
{
	if (__LIB_0__::func_12() == iLocal_443)
	{
		return true;
	}
	return false;
}

void func_47(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::SET_ENTITY_VISIBLE(Global_35, false);
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(7)))
	{
		ENTITY::SET_ENTITY_VISIBLE(__LIB_0__::func_398(7), false);
		PED::_0xCAC43D060099EA72(__LIB_0__::func_398(7));
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(1)))
	{
		ENTITY::SET_ENTITY_VISIBLE(__LIB_0__::func_398(1), false);
		PED::_0xCAC43D060099EA72(__LIB_0__::func_398(1));
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_0__::func_398(6)))
	{
		ENTITY::SET_ENTITY_VISIBLE(__LIB_0__::func_398(6), false);
		PED::_0xCAC43D060099EA72(__LIB_0__::func_398(6));
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_18))
	{
		CAM::DESTROY_CAM(iParam0->f_18, false);
	}
	iParam0->f_18 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	if (bParam2)
	{
		CAM::SET_CAM_COORD(iParam0->f_18, func_135(iParam1));
		CAM::SET_CAM_ROT(iParam0->f_18, func_136(iParam1), 2);
	}
	else
	{
		CAM::SET_CAM_COORD(iParam0->f_18, func_137(iParam1));
		CAM::SET_CAM_ROT(iParam0->f_18, func_138(iParam1), 2);
	}
	if (!CAM::IS_CAM_ACTIVE(iParam0->f_18))
	{
		CAM::SET_CAM_ACTIVE(iParam0->f_18, true);
	}
	if (!CAM::IS_CAM_RENDERING(iParam0->f_18))
	{
		CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	}
	iParam0->f_39 = 1;
}

void func_48()
{
	func_139();
	if (HUD::_DOES_TEXT_DATABASE_EXIST("STCH") && !HUD::_TEXT_DATABASE_HAS_LOADED("STCH"))
	{
		HUD::_TEXT_DATABASE_REQUEST("STCH");
	}
}

bool func_49(var uParam0, int iParam1)
{
	if (!func_140())
	{
		return false;
	}
	if (!UIAPPS::_CAN_LAUNCH_APP_BY_HASH(joaat("FAST_TRAVEL_MENU")))
	{
	}
	else if (UIAPPS::_LAUNCH_APP_BY_HASH(joaat("FAST_TRAVEL_MENU")) == 0)
	{
	}
	func_141(uParam0, iParam1);
	__LIB_4__::func_517(1);
	uParam0->f_5 = 1;
	return true;
}

int func_51(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var3;
	iVar0 = 1;
	MAP::DISPLAY_RADAR(false);
	__LIB_1__::func_538(0);
	while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(joaat("FAST_TRAVEL_MENU")))
	{
		if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(joaat("FAST_TRAVEL_MENU"), &Var3))
		{
			if (Var3.f_2 == -997855324)
			{
				iVar0 = 0;
			}
			else
			{
				switch (Var3)
				{
					case -1740156697:
						iVar1 = __LIB_16__::func_234(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var3.f_3, "itemName"));
						if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Var3.f_3, "enabled"))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_2, "description", func_145(func_55(iVar1)));
						}
						else if (__LIB_0__::func_730(iVar1))
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_2, "description", "STAGE_COACH_LOCATION_LOCKDOWN");
						}
						else
						{
							DATABINDING::_DATABINDING_WRITE_DATA_STRING_FROM_PARENT(uParam0->f_2, "description", "STAGE_COACH_NOT_ENOUGH_MONEY");
						}
						break;
					case -1203660660:
						PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
						iVar1 = __LIB_16__::func_234(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var3.f_3, "itemName"));
						uVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var3.f_3, "price");
						uParam0->f_6 = iVar1;
						uParam0->f_7 = uVar2;
						iVar0 = 2;
						break;
					default:
						break;
				}
			}
		}
		UIEVENTS::_EVENT_MANAGER_POP_EVENT(joaat("FAST_TRAVEL_MENU"));
	}
	return iVar0;
}

int func_55(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 0;
		case 76:
			return 1;
		case 69:
			return 4;
		case 78:
			return 2;
		case 26:
			return 6;
		case 5:
			return 3;
		case 38:
			return 5;
		case 92:
			return 7;
		case 120:
			return 8;
		case 126:
			return 9;
		case 115:
			return 10;
		default:
			break;
	}
	return -1;
}

void func_56(int iParam0)
{
	Local_14.f_50 = { func_151(iParam0) };
	Local_14.f_56 = func_152(iParam0);
	iLocal_442 = __LIB_17__::func_376(iParam0);
	if (!func_154(&(Local_14.f_60), iLocal_442))
	{
	}
}

bool func_58()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	switch (iLocal_441)
	{
		case 0:
			if (!__LIB_0__::func_163(Global_35, -880529684))
			{
				TASK::TASK_LOOK_AT_COORD(Global_35, Local_14.f_27 + Vector(2f, 0f, 0f), 2500, 2, 51, 1);
			}
			__LIB_1__::func_265(Global_35, func_157(iLocal_442), 1808677283, Local_14.f_16, 1, 0, 0, 1);
			iLocal_441 = 2;
			break;
		case 2:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16) && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				if (!Local_14.f_40)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_14.f_15, true, false), Local_14.f_50, true) >= 2000f)
					{
						__LIB_1__::func_265(Local_14.f_16, "DESTINATION_FAR", 1808677283, Global_35, 1, 0, 0, 1);
					}
					else
					{
						bLocal_437 = true;
						__LIB_1__::func_265(Local_14.f_16, "DESTINATION_NEAR", 1808677283, Global_35, 1, 0, 0, 1);
					}
				}
				else
				{
					__LIB_1__::func_265(Local_14.f_16, "HAILED_AGAIN", 1808677283, Global_35, 1, 0, 0, 1);
				}
				iLocal_441 = 3;
			}
			break;
		case 3:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Local_14.f_16))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_63()
{
	if (MAP::DOES_BLIP_EXIST(Global_1430231.f_9))
	{
		MAP::SET_RADAR_ZOOM(Global_1430231.f_9);
		MAP::REMOVE_BLIP(&(Global_1430231.f_9));
	}
	Global_1430231.f_4 = 1;
	iLocal_445 = MISC::GET_GAME_TIMER();
	CAM::SET_CINEMATIC_MODE_ACTIVE(true);
	Local_14 = 13;
}

bool func_64(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_331)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if (iParam2 == -2)
	{
		iParam2 = 1;
	}
	STREAMING::_0x198B85CC3C7A4593(iParam1, iParam2);
	return true;
}

void func_65(vector3 vParam0, vector3 vParam3, var uParam6)
{
	float fVar0;
	int iVar1;
	int iVar2;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam3, true);
	iVar1 = __LIB_0__::func_309(BUILTIN::ROUND((fVar0 / 1300f)), 1, 24);
	iVar2 = (CLOCK::GET_CLOCK_HOURS() + iVar1);
	if (iVar2 >= 24)
	{
		iVar2 = (iVar2 - 24);
	}
	*uParam6 = iVar2;
}

int func_66(var uParam0, var uParam1, int iParam2)
{
	if (!uParam0->f_331)
	{
		return 0;
	}
	func_164(uParam0, uParam1, iParam2);
	return 1;
}

bool func_67(var uParam0)
{
	int iVar0;
	if (!uParam0->f_331)
	{
		return false;
	}
	iVar0 = __LIB_19__::func_18(uParam0);
	if (iVar0 != 6)
	{
		return false;
	}
	return true;
}

bool func_71(var uParam0)
{
	if (uParam0->f_332 == 5)
	{
		return true;
	}
	return false;
}

Vector3 func_72(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 38:
			if (!bParam1)
			{
				return -858.4746f, -1345.088f, 42.5208f;
			}
			else
			{
				return -857.4746f, -1345.088f, 42.5208f;
			}
			break;
		case 26:
			if (!bParam1)
			{
				return -1837.177f, -426.5093f, 159.239f;
			}
			else
			{
				return -1836.177f, -426.5093f, 159.239f;
			}
			break;
		case 76:
			if (!bParam1)
			{
				return -188.6791f, 644.3501f, 112.4331f;
			}
			else
			{
				return -187.6791f, 644.3501f, 112.4331f;
			}
			break;
		case 69:
			if (!bParam1)
			{
				return 1524.589f, 404.6162f, 89.0229f;
			}
			else
			{
				return 1525.589f, 404.6162f, 89.0229f;
			}
			break;
		case 105:
			if (!bParam1)
			{
				return 1261.42f, -1303.208f, 75.0462f;
			}
			else
			{
				return 1262.42f, -1303.208f, 75.0462f;
			}
			break;
		case 5:
			if (!bParam1)
			{
				return 2732.242f, -1413.273f, 45.1349f;
			}
			else
			{
				return 2733.242f, -1413.273f, 45.1349f;
			}
			break;
		case 92:
			if (!bParam1)
			{
				return 2980.405f, 583.7278f, 43.3017f;
			}
			else
			{
				return 2981.405f, 583.7278f, 43.3017f;
			}
			break;
		case 78:
			if (!bParam1)
			{
				return 2918.512f, 1319.349f, 43.1745f;
			}
			else
			{
				return 2919.512f, 1319.349f, 43.1745f;
			}
			break;
		case 120:
			if (!bParam1)
			{
				return -3697.825f, -2646.591f, -14.3666f;
			}
			else
			{
				return -3698.825f, -2646.591f, -14.3666f;
			}
			break;
		case 126:
			if (!bParam1)
			{
				return -2475.658f, -2433.282f, 59.132f;
			}
			else
			{
				return -2476.658f, -2433.282f, 59.132f;
			}
			break;
		case 115:
			if (!bParam1)
			{
				return -5564.065f, -2957.373f, -1.5112f;
			}
			else
			{
				return -5565.065f, -2957.373f, -1.5112f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_73(int iParam0)
{
	switch (iParam0)
	{
		case 38:
			return 290.1817f;
		case 26:
			return 134.5218f;
		case 76:
			return 314.8166f;
		case 69:
			return 129.5081f;
		case 105:
			return 42.7454f;
		case 5:
			return 110.1789f;
		case 92:
			return 86.0119f;
		case 78:
			return 165.0528f;
		case 120:
			return 88.1312f;
		case 126:
			return 270.7537f;
		case 115:
			return 342.4622f;
		default:
			break;
	}
	return 0f;
}

void func_75(float fParam0)
{
	if (__LIB_0__::func_247(1) < fParam0)
	{
		__LIB_17__::func_382(1, fParam0, 0);
	}
	if (__LIB_0__::func_247(2) < fParam0)
	{
		__LIB_17__::func_382(2, fParam0, 0);
	}
	if (__LIB_0__::func_247(0) < fParam0)
	{
		__LIB_17__::func_382(0, fParam0, 0);
	}
}

void func_78(bool bParam0)
{
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
	}
}

void func_90()
{
	__LIB_19__::func_19(34);
	__LIB_19__::func_19(35);
	__LIB_19__::func_19(36);
}

void func_102(var uParam0)
{
	if (STREAMING::_0x99F92061EFE908BA() || __LIB_0__::func_1(uParam0->f_318, 4))
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_0xC0258742B034DFAF(0f);
		UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
		if (__LIB_10__::func_598())
		{
			__LIB_0__::func_105(1);
		}
		if (uParam0->f_323 != 3 && !PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
			if (__LIB_0__::func_272(uParam0->f_304.f_1, 0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_57(uParam0->f_304.f_1), true);
			}
		}
		AUDIO::_0x36559148B78853B3(0, 0, 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(Global_35, 0);
		switch (uParam0->f_323)
		{
			case 0:
				uParam0->f_323 = 4;
				break;
			case 1:
				if (!__LIB_0__::func_1(uParam0->f_318, 4))
				{
					__LIB_0__::func_7(&(uParam0->f_318), 4);
				}
				uParam0->f_320 = (STREAMING::_0x2F4D53023F826FF0() - 1);
				if (STREAMING::_0xDABFE48BA0D457AA() > uParam0->f_300)
				{
					uParam0->f_301 = uParam0->f_300;
					uParam0->f_300 = STREAMING::_0xDABFE48BA0D457AA();
					uParam0->f_303 = uParam0->f_302;
					uParam0->f_302 = STREAMING::_0xE5B76E5B56CD77DD();
				}
				if (STREAMING::_0x5D5E2102B174B8D2() || STREAMING::_0x7B8C2B846C05E5AD())
				{
					if (__LIB_0__::func_1(uParam0->f_318, 8))
					{
						__LIB_0__::func_8(&(uParam0->f_318), 8);
					}
					uParam0->f_323 = 2;
				}
				if (STREAMING::_0x27AF48C62B281341() || !STREAMING::_0x99F92061EFE908BA())
				{
					uParam0->f_323 = 3;
				}
				break;
			case 2:
				if (!__LIB_17__::func_381(uParam0))
				{
					STREAMING::_0x62D5F0588915B277();
				}
				else if (!STREAMING::_0x5D5E2102B174B8D2() && !STREAMING::_0x7B8C2B846C05E5AD())
				{
					__LIB_3__::func_618(uParam0->f_314, 2f, 1, 0, 0, 0, 0);
					uParam0->f_323 = 3;
				}
				break;
			case 3:
				if (STREAMING::_0x27AF48C62B281341() || !STREAMING::_0x99F92061EFE908BA())
				{
					__LIB_0__::func_92(1);
					MAP::DISPLAY_RADAR(true);
					HUD::DISPLAY_HUD(true);
					__LIB_16__::func_240();
					POPULATION::_0xBC90BDF4E5228EA1();
					if (PLAYER::GET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID()))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(Global_35, false);
					}
					if (__LIB_0__::func_272(uParam0->f_304.f_1, 0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(__LIB_0__::func_57(uParam0->f_304.f_1), false);
					}
					__LIB_0__::func_7(&(uParam0->f_318), 1);
					if (__LIB_0__::func_1(uParam0->f_318, 2048))
					{
						func_200(uParam0);
					}
					__LIB_1__::func_979(1);
					if (uParam0->f_324)
					{
						Call_Loc(uParam0->f_329);
					}
					__LIB_0__::func_7(&(uParam0->f_318), 32);
					__LIB_0__::func_7(&(uParam0->f_318), 64);
					if (__LIB_0__::func_1(uParam0->f_318, 4))
					{
						__LIB_0__::func_8(&(uParam0->f_318), 4);
					}
					__LIB_17__::func_380(0);
					uParam0->f_323 = 4;
				}
				break;
		}
		if (uParam0->f_324)
		{
			Call_Loc(uParam0->f_326);
		}
	}
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_332 = iParam1;
}

float func_108(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 318.5363f;
		case 76:
			return 57.738f;
		case 69:
			return 100.6731f;
		case 78:
			return 152.5443f;
		case 26:
			return 69.952f;
		case 5:
			return 120.8282f;
		case 38:
			return 179.35f;
		case 120:
			return 346.4875f;
		case 126:
			return 120.5754f;
		case 115:
			return -171.37f;
		case 92:
			return 226.4227f;
		default:
			break;
	}
	return 0f;
}

float func_109(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 36.8812f;
		case 76:
			return 153.1632f;
		case 69:
			return 193.7838f;
		case 78:
			return 248.4695f;
		case 26:
			return 164.1503f;
		case 5:
			return 34.032f;
		case 38:
			return -96.3f;
		case 120:
			return -12.21f;
		case 126:
			return 44.57f;
		case 115:
			return 6.1754f;
		case 92:
			return 12.7544f;
		default:
			break;
	}
	return 0f;
}

Vector3 func_110(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1265.369f, -1294.077f, 74.59763f;
		case 76:
			return -181.053f, 652.827f, 112.61f;
		case 69:
			return 1520.723f, 419.1999f, 88.97793f;
		case 78:
			return 2928.554f, 1290.363f, 43.6281f;
		case 26:
			return -1849.451f, -432.3141f, 158.4772f;
		case 5:
			return 2738.441f, -1408.518f, 45.19387f;
		case 38:
			return -851.8444f, -1338.266f, 42.4937f;
		case 120:
			return -3711.133f, -2625.833f, -14.65835f;
		case 126:
			return -2478.03f, -2444.9f, 59.345f;
		case 115:
			return -5568.203f, -2947.085f, -1.68425f;
		case 92:
			return 2946.014f, 599.033f, 43.488f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_116(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	__LIB_16__::func_236(uParam0);
	uParam0->f_326 = 29771;
	uParam0->f_327 = 29779;
	uParam0->f_328 = 29787;
	uParam0->f_329 = 29795;
	func_208(uParam0, &iParam1);
	uParam0->f_304.f_2 = iParam2;
	uParam0->f_304.f_3 = iParam3;
	uParam0->f_304.f_4 = iParam4;
	uParam0->f_304.f_5 = 1f;
	uParam0->f_304.f_5.f_1 = 2000;
	uParam0->f_304.f_5.f_2 = 0f;
	uParam0->f_304.f_5.f_3 = 1;
	uParam0->f_304.f_5.f_4 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = -1f;
	__LIB_0__::func_8(&(uParam0->f_318), 128);
	uParam0->f_324 = __LIB_16__::func_376(uParam0);
	return uParam0->f_324;
}

void func_117(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		__LIB_0__::func_7(&(uParam0->f_318), 2);
	}
	else
	{
		__LIB_0__::func_8(&(uParam0->f_318), 2);
	}
}

void func_119(int iParam0, int iParam1)
{
	if (!__LIB_0__::func_396(Global_35))
	{
		if (!__LIB_0__::func_139(iParam0->f_404))
		{
			iParam0->f_404 = __LIB_1__::func_745("STAGE_COACH", joaat("INPUT_INTERACT_LOCKON_Y"), iParam0->f_16, 3, 0, 0, 0, 0, 6f, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
			__LIB_4__::func_12(iParam0->f_404, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), 0, 1);
		}
	}
}

void func_120(int iParam0, bool bParam1)
{
	if (__LIB_0__::func_139(iParam0->f_404))
	{
		__LIB_1__::func_221(iParam0->f_404, bParam1, 1);
	}
}

bool func_122(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	iVar0 = Global_40.f_9146.f_109;
	if (iVar0 == -15)
	{
		return true;
	}
	__LIB_1__::func_446(&iVar0, iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, 0);
	if (__LIB_1__::func_426(iVar0, 1))
	{
		return true;
	}
	return false;
}

char* func_124()
{
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		return "STAGE_COACH_CARRYING";
	}
	if (__LIB_8__::func_67() >= 0.8f)
	{
		return "STAGE_COACH_DRUNK";
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return "STAGE_COACH_WANTED";
	}
	if (__LIB_16__::func_366(__LIB_2__::func_702()) > 15)
	{
		return "STAGE_COACH_BOUNTY";
	}
	if (!func_122(0, 0, 8, 0, 0, 0))
	{
		return "STAGE_COACH_ROBBED";
	}
	return "STAGE_COACH_WANTED";
}

bool func_128()
{
	if (!func_122(0, 0, 8, 0, 0, 0))
	{
		return false;
	}
	if (UIAPPS::_IS_ANY_APP_RUNNING())
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	if (__LIB_16__::func_366(__LIB_2__::func_702()) > 15)
	{
		return false;
	}
	if (__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		return false;
	}
	if (PED::_IS_PED_CARRYING(Global_35))
	{
		return false;
	}
	if (__LIB_14__::func_213(1, 0) || __LIB_14__::func_213(8, 0))
	{
		return false;
	}
	if (!__LIB_16__::func_395())
	{
		return false;
	}
	if (Global_1430231.f_2)
	{
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return false;
	}
	if (PED::_0x331550B212014B92(Global_35, 0))
	{
		return false;
	}
	return true;
}

char* func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CALL_OUT_MALE";
		case 1:
			return "CALL_OUT_NEUTRAL";
		case 2:
			return "CALL_OUT_GENERAL";
		default:
			break;
	}
	return "ALL_PLAYED";
}

void func_130()
{
	Local_14.f_393 = __LIB_0__::func_23();
	__LIB_1__::func_446(&(Local_14.f_393), 0, 20, 0, 0, 0, 0, 0);
}

Vector3 func_135(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1262.9f, -1302.3f, 76.7f;
		case 76:
			return -189.1f, 648f, 114f;
		case 69:
			return 1521.4f, 415.8f, 90.8f;
		case 78:
			return 2927f, 1296f, 45.2f;
		case 26:
			return -1850.6f, -434.7f, 160.2f;
		case 5:
			return 2742.3f, -1404.9f, 47.2f;
		case 38:
			return -859.2361f, -1343.471f, 44.0592f;
		case 120:
			return -3709.9f, -2637.7f, -13.2f;
		case 126:
			return -2476.8f, -2443f, 60.6f;
		case 115:
			return -5568.354f, -2946.089f, -0.2837f;
		case 92:
			return 2947f, 597f, 44.7f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_136(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return -6f, 0f, -41.6f;
		case 76:
			return -8.6f, 0f, -124.8f;
		case 69:
			return -2.3f, 0f, -175.9f;
		case 78:
			return -5.8f, 0f, -100.3f;
		case 26:
			return -9.9f, 0f, 177.4f;
		case 5:
			return -9.6f, 0f, -158.1f;
		case 38:
			return -6.1442f, 0f, 46.4805f;
		case 120:
			return -1.3f, 0f, -38.7f;
		case 126:
			return 5.2f, 0f, 157.7f;
		case 115:
			return 1.3264f, -1.6335f, 0.3277f;
		case 92:
			return 7.8f, 0f, 41.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_137(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 1265.4f, -1293f, 76f;
		case 76:
			return -182.7f, 651.2f, 113.9f;
		case 69:
			return 1520.3f, 417.1f, 90.3f;
		case 78:
			return 2930.4f, 1289.2f, 44.9f;
		case 26:
			return -1851.5f, -434.2f, 159.6f;
		case 5:
			return 2745.78f, -1413.531f, 49.5649f;
		case 38:
			return -850.4026f, -1337.505f, 43.873f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_138(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return -2.4f, -0.1f, -141.3f;
		case 76:
			return -0.3f, 0f, -35.8f;
		case 69:
			return 1.1f, 0f, 4.9f;
		case 78:
			return 7.5f, 0f, 68.5f;
		case 26:
			return -1.1f, 0f, -36.7f;
		case 5:
			return -16.3768f, 0f, 74.143f;
		case 38:
			return -5.2f, 0f, 137.6f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_139()
{
	__LIB_19__::func_20(34);
	__LIB_19__::func_20(35);
	__LIB_19__::func_20(36);
}

bool func_140()
{
	if (!HUD::_TEXT_DATABASE_HAS_LOADED("STCH"))
	{
		return false;
	}
	return true;
}

int func_141(var uParam0, int iParam1)
{
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(uParam0->f_2))
	{
		uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "FastTravel");
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "header", "STAGECOACH_HEADER");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "subHeader", "STCH_FT_SUB");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "description", "STAGE_COACH");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_2, "subFooter", "");
	if (!func_221(uParam0, iParam1))
	{
		return 0;
	}
	return 1;
}

char* func_145(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "STAGE_COACH_RHODES_TRAVEL";
		case 1:
			return "STAGE_COACH_VALENTINE_TRAVEL";
		case 4:
			return "STAGE_COACH_EMERALD_STATION_TRAVEL";
		case 2:
			return "STAGE_COACH_ANNESBURG_TRAVEL";
		case 6:
			return "STAGE_COACH_STRAWBERRY_TRAVEL";
		case 3:
			return "STAGE_COACH_SAINT_DENIS_TRAVEL";
		case 5:
			return "STAGE_COACH_BLACKWATER_TRAVEL";
		case 7:
			return "STAGE_COACH_VAN_HORN_TRAVEL";
		case 8:
			return "STAGE_COACH_ARMADILLO_TRAVEL";
		case 9:
			return "STAGE_COACH_MACFARLANE_TRAVEL";
		case 10:
			return "STAGE_COACH_TUMBLEWEED_TRAVEL";
		default:
			break;
	}
	return "REGION_INVALID";
}

Vector3 func_151(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1266.307f, -1296.911f, 74.7739f;
		case 1:
			return -179.2878f, 653.2728f, 112.671f;
		case 4:
			return 1521.499f, 421.2237f, 88.996f;
		case 2:
			return 2926.732f, 1290.527f, 43.4135f;
		case 6:
			return -1853.054f, -427.1276f, 158.9385f;
		case 3:
			return 2740.203f, -1409.765f, 45.1295f;
		case 5:
			return -862.3704f, -1333.5f, 42.234f;
		case 7:
			return 2937.992f, 591.9857f, 43.22659f;
		case 8:
			return -3633.064f, -2598.469f, -15.0825f;
		case 9:
			return -2347.273f, -2422.782f, 61.65891f;
		case 10:
			return -5566.151f, -2948.546f, -1.71505f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_152(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 232.0203f;
		case 1:
			return 286.9193f;
		case 4:
			return 283.7175f;
		case 2:
			return 356.0538f;
		case 6:
			return 75.8f;
		case 3:
			return 260.4557f;
		case 5:
			return 236.1239f;
		case 7:
			return -151.87f;
		case 8:
			return 141.6059f;
		case 9:
			return 76.08f;
		case 10:
			return -171.37f;
		default:
			break;
	}
	return 0f;
}

bool func_154(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	var uVar2;
	struct<4> Var9;
	if (!uParam0->f_331)
	{
		return false;
	}
	iVar0 = func_223(iParam1);
	fVar1 = func_224(iParam1);
	if (iVar0 == 0)
	{
		if (!__LIB_19__::func_416(uParam0, iParam1))
		{
			return false;
		}
		return false;
	}
	else
	{
		if (!__LIB_16__::func_377(&uVar2, iParam1))
		{
			return false;
		}
		if (!__LIB_19__::func_21(&uVar2, &Var9))
		{
			return false;
		}
		uParam0->f_317 = iParam1;
		uParam0->f_314 = { Var9 };
		uParam0->f_304 = Var9.f_3;
		STREAMING::_0x032A14D082A9B269(iVar0);
		STREAMING::_0xAFA87A7D41EE346A(fVar1);
		__LIB_0__::func_7(&(uParam0->f_318), 1024);
		__LIB_0__::func_8(&(uParam0->f_318), 2048);
	}
	func_103(uParam0, 2);
	return true;
}

char* func_157(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return "PLAYER_REQUEST_DESTINATION_ARMADILLO";
		case 78:
			return "PLAYER_REQUEST_DESTINATION_ANNESBURG";
		case 38:
			return "PLAYER_REQUEST_DESTINATION_BLACKWATER";
		case 69:
			return "PLAYER_REQUEST_DESTINATION_EMERALD_RANCH";
		case 105:
			return "PLAYER_REQUEST_DESTINATION_RHODES";
		case 5:
			return "PLAYER_REQUEST_DESTINATION_SAINT_DENIS";
		case 26:
			return "PLAYER_REQUEST_DESTINATION_STRAWBERRY";
		case 76:
			return "PLAYER_REQUEST_DESTINATION_VALENTINE";
		case 126:
			return "PLAYER_REQUEST_DESTINATION_MACFARLANES_RANCH";
		case 115:
			return "PLAYER_REQUEST_DESTINATION_TUMBLEWEED";
		case 92:
			return "PLAYER_REQUEST_DESTINATION_VAN_HORN";
		default:
			break;
	}
	return "REGION_INVALID";
}

void func_164(var uParam0, var uParam1, int iParam2)
{
	STREAMING::_0x07559B29950301FF(uParam1, iParam2);
}

int func_200(var uParam0)
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_1) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_304.f_1))
		{
			if (__LIB_0__::func_126(uParam0->f_304.f_1))
			{
				PHYSICS::_0x0348469DAA17576C(uParam0->f_304.f_1);
			}
			func_31(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, 2, 1073741824 /* Float: 2f */);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uParam0->f_304.f_1, uParam0->f_314, uParam0->f_304, true, false, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_304.f_1, 136, false);
			if (PED::IS_PED_RAGDOLL(uParam0->f_304.f_1))
			{
				PED::_0x221F4D9912B7FE86(uParam0->f_304.f_1, 1);
			}
			if (PED::_0x2D64376CF437363E(uParam0->f_304.f_1))
			{
				__LIB_1__::func_571(PLAYER::PLAYER_PED_ID(), uParam0->f_304.f_1, 0, -1, 1);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_304.f_2))
		{
			func_31(uParam0->f_304.f_2, uParam0->f_314, uParam0->f_304, 2, 1073741824 /* Float: 2f */);
			iVar0 = PLAYER::PLAYER_PED_ID();
			__LIB_12__::func_559(&iVar0, &(uParam0->f_304.f_2), uParam0->f_304.f_3, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_304.f_2, 0f);
		}
		else
		{
			func_31(PLAYER::PLAYER_PED_ID(), uParam0->f_314, uParam0->f_304, 2, 1073741824 /* Float: 2f */);
		}
	}
	else
	{
		return 0;
	}
	if (uParam0->f_304.f_4)
	{
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), uParam0->f_304.f_5, uParam0->f_304.f_5.f_1, uParam0->f_304.f_5.f_2, uParam0->f_304.f_5.f_3, uParam0->f_304.f_5.f_4);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	return 1;
}

int func_208(var uParam0, int iParam1)
{
	if ((!ENTITY::DOES_ENTITY_EXIST(*iParam1) || ENTITY::IS_ENTITY_DEAD(*iParam1)) || PED::IS_PED_HUMAN(*iParam1))
	{
		return 0;
	}
	uParam0->f_304.f_1 = *iParam1;
	STREAMING::_0x2A6D1DAAB9EBB262(*iParam1);
	return 1;
}

bool func_221(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	iVar0 = __LIB_0__::func_492(1);
	iVar5 = 1;
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_2, "locationList");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_4);
	iVar1 = 0;
	while (iVar1 < iParam1->f_1)
	{
		iVar3 = __LIB_17__::func_376(iParam1->f_1[iVar1]);
		iVar2 = func_279(__LIB_0__::func_12(), iVar3);
		if (__LIB_0__::func_20(iVar3) && iVar3 != __LIB_0__::func_12())
		{
			uVar4 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_2, __LIB_12__::func_563(iVar3));
			DATABINDING::_DATABINDING_ADD_DATA_HASH(uVar4, "itemName", __LIB_12__::func_484(iVar3));
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "forSale", 1);
			DATABINDING::_DATABINDING_ADD_DATA_INT(uVar4, "price", iVar2);
			if (iVar2 < iVar0 || iVar2 <= 0)
			{
				iVar5 = 1;
			}
			else
			{
				iVar5 = 0;
			}
			if (__LIB_0__::func_730(iVar3))
			{
				iVar5 = 0;
			}
			DATABINDING::_DATABINDING_ADD_DATA_BOOL(uVar4, "enabled", iVar5);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_4, -1, "fast_travel_item", uVar4);
		}
		iVar1++;
	}
	return true;
}

int func_223(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@RHODES");
		case 76:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@VALENTINE");
		case 69:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@EMERALDRANCH");
		case 78:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@ANNESBURG");
		case 26:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@STRAWBERRY");
		case 5:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@SAINTDENIS");
		case 38:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@BLACKWATER");
		case 120:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@ARMADILLO");
		case 126:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@MACFARLANESRANCH");
		case 115:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@TUMBLEWEED");
		case 92:
			return joaat("SCRIPT@FAST_TRAVEL@ESTABLISHER@STAGECOACH@VANHORNTRADINGPOST");
		default:
			break;
	}
	return 0;
}

float func_224(int iParam0)
{
	switch (iParam0)
	{
		case 105:
			return 318.5363f;
		case 76:
			return 57.738f;
		case 69:
			return 100.6731f;
		case 78:
			return 152.5443f;
		case 26:
			return 69.952f;
		case 5:
			return 118.7512f;
		case 38:
			return 179.35f;
		case 120:
			return 346.4875f;
		case 126:
			return 120.5754f;
		case 115:
			return -171.37f;
		case 92:
			return 226.4227f;
		default:
			break;
	}
	return 0f;
}

int func_279(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 78:
			switch (iParam1)
			{
				case 92:
					return 390;
				case 69:
					return 460;
				case 5:
					return 820;
				case 105:
					return 940;
				case 76:
					return 790;
				case 26:
					return 1450;
				case 38:
					return 1650;
				case 126:
					return 1720;
				case 120:
					return 1800;
				case 115:
					return 2110;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam1)
			{
				case 78:
					return 390;
				case 69:
					return 380;
				case 5:
					return 420;
				case 105:
					return 570;
				case 76:
					return 820;
				case 26:
					return 1430;
				case 38:
					return 1630;
				case 126:
					return 1690;
				case 120:
					return 1710;
				case 115:
					return 1920;
				default:
					break;
			}
			break;
		case 69:
			switch (iParam1)
			{
				case 78:
					return 460;
				case 92:
					return 380;
				case 5:
					return 550;
				case 105:
					return 580;
				case 76:
					return 450;
				case 26:
					return 990;
				case 38:
					return 1010;
				case 126:
					return 1230;
				case 120:
					return 1480;
				case 115:
					return 1770;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 78:
					return 820;
				case 92:
					return 420;
				case 69:
					return 550;
				case 105:
					return 250;
				case 76:
					return 1040;
				case 26:
					return 1170;
				case 38:
					return 1280;
				case 126:
					return 1550;
				case 120:
					return 1710;
				case 115:
					return 1812;
				default:
					break;
			}
			break;
		case 105:
			switch (iParam1)
			{
				case 78:
					return 940;
				case 92:
					return 570;
				case 69:
					return 580;
				case 5:
					return 250;
				case 76:
					return 790;
				case 26:
					return 830;
				case 38:
					return 1010;
				case 126:
					return 1230;
				case 120:
					return 1480;
				case 115:
					return 1770;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 78:
					return 790;
				case 92:
					return 820;
				case 69:
					return 450;
				case 5:
					return 1040;
				case 105:
					return 790;
				case 26:
					return 520;
				case 38:
					return 850;
				case 126:
					return 1150;
				case 120:
					return 1390;
				case 115:
					return 1570;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 78:
					return 1450;
				case 92:
					return 1430;
				case 69:
					return 990;
				case 5:
					return 1170;
				case 105:
					return 830;
				case 76:
					return 520;
				case 38:
					return 380;
				case 126:
					return 720;
				case 120:
					return 980;
				case 115:
					return 1310;
				default:
					break;
			}
			break;
		case 38:
			switch (iParam1)
			{
				case 78:
					return 1650;
				case 92:
					return 1630;
				case 69:
					return 1010;
				case 5:
					return 1280;
				case 105:
					return 1010;
				case 76:
					return 850;
				case 26:
					return 380;
				case 126:
					return 490;
				case 120:
					return 710;
				case 115:
					return 1050;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 78:
					return 1720;
				case 92:
					return 1690;
				case 69:
					return 1230;
				case 5:
					return 1550;
				case 105:
					return 1230;
				case 76:
					return 1150;
				case 26:
					return 720;
				case 38:
					return 490;
				case 120:
					return 440;
				case 115:
					return 820;
				default:
					break;
			}
			break;
		case 120:
			switch (iParam1)
			{
				case 78:
					return 1800;
				case 92:
					return 1710;
				case 69:
					return 1480;
				case 5:
					return 1710;
				case 105:
					return 1480;
				case 76:
					return 1390;
				case 26:
					return 980;
				case 38:
					return 710;
				case 126:
					return 440;
				case 115:
					return 650;
				default:
					break;
			}
			break;
		case 115:
			switch (iParam1)
			{
				case 78:
					return 2110;
				case 92:
					return 1920;
				case 69:
					return 1770;
				case 5:
					return 1820;
				case 105:
					return 1770;
				case 76:
					return 1570;
				case 26:
					return 1310;
				case 38:
					return 1050;
				case 126:
					return 820;
				case 120:
					return 650;
				default:
					break;
			}
			break;
		default:
			return 0;
	}
	return 0;
}

