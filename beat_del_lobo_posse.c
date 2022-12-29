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
	char* sLocal_16 = NULL;
	struct<193> Local_17 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_210 = 0;
	struct<32> Local_211[5];
	var uLocal_372[5] = { 0, 0, 0, 0, 0 };
	int iLocal_378[5] = { 0, 0, 0, 0, 0 };
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = -1;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 2;
	var uLocal_393 = 1;
	var uLocal_394 = 1;
	var uLocal_395 = 1;
	var uLocal_396 = 0;
	var uLocal_397 = 1;
	var uLocal_398 = 2;
	var uLocal_399 = 2;
	var uLocal_400 = 3;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 3;
	var uLocal_404 = 1;
	var uLocal_405 = 3;
	var uLocal_406 = 3;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	struct<2> Local_409[1];
	var uLocal_412 = 1;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	struct<21> Local_421[5];
	struct<17> Local_527[3];
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588[5] = { 0, 0, 0, 0, 0 };
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	vector3 vLocal_617[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	int iLocal_648 = 0;
	int iLocal_649 = 0;
	int iLocal_650 = 0;
	int iLocal_651 = 0;
	int iLocal_652 = 0;
	float fLocal_653 = 0f;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	bool bLocal_659 = false;
	bool bLocal_660 = false;
	int iLocal_661 = 0;
	bool bLocal_662 = false;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	bool bLocal_666 = false;
	int iLocal_667 = 0;
	bool bLocal_668 = false;
	bool bLocal_669 = false;
	int iLocal_670 = 0;
	vector3 vLocal_671 = { 0f, 0f, 0f };
	vector3 vLocal_674 = { 0f, 0f, 0f };
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	int iLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	int iLocal_684 = 0;
	var uLocal_685[5] = { 0, 0, 0, 0, 0 };
	var uLocal_691[5] = { 0, 0, 0, 0, 0 };
	int iLocal_697 = 0;
	vector3 vLocal_698 = { 0f, 0f, 0f };
	int iLocal_701 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_598 = 1;
	iLocal_649 = -1;
	iLocal_652 = 1;
	bLocal_668 = true;
	Local_17.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_17.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_0__::func_11();
	__LIB_3__::func_368(&Local_17, 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_669 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_669, 406, 0);
		if (bLocal_669)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_598)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_17, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						STREAMING::REQUEST_COLLISION_AT_COORD(Local_17.f_51);
						func_8(&Local_17, &uLocal_678, &uLocal_677);
						__LIB_3__::func_352(&Local_17, 5);
						iLocal_598 = 0;
					}
					else if (Local_17.f_160)
					{
						func_5();
					}
					break;
				case 0:
					if (func_10())
					{
						iLocal_598 = 3;
					}
					break;
				case 3:
					if (func_11())
					{
						if (func_12())
						{
							iLocal_598 = 4;
						}
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_17, &uLocal_372, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_5();
					}
					if (func_14())
					{
						func_5();
					}
					if (__LIB_3__::func_431(&Local_17, &uLocal_372, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						func_5();
					}
					func_16();
					break;
			}
			BUILTIN::WAIT(Local_17.f_158);
		}
	}
}

void func_5()
{
	int iVar0;
	func_19();
	Local_17.f_50 = 1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
		{
			PED::SET_PED_KEEP_TASK(uLocal_372[iVar0], true);
		}
		iVar0++;
	}
	__LIB_2__::func_353(&uLocal_679, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("REDLP_END");
	__LIB_3__::func_493(&Local_17, &uLocal_372, &iLocal_378, iLocal_14, uLocal_678, uLocal_677, 0, 1, 0, 1);
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_ALARMING"), ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 5f))
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_701);
	}
	__LIB_2__::func_593(&(Local_421[0 /*21*/]), &Local_527);
	__LIB_2__::func_593(&(Local_421[1 /*21*/]), &Local_527);
	__LIB_2__::func_593(&(Local_421[2 /*21*/]), &Local_527);
	__LIB_2__::func_593(&(Local_421[3 /*21*/]), &Local_527);
	__LIB_2__::func_593(&(Local_421[4 /*21*/]), &Local_527);
	__LIB_2__::func_56(uLocal_372[0], 1, 1);
	__LIB_2__::func_56(uLocal_372[1], 1, 1);
	__LIB_2__::func_56(uLocal_372[2], 1, 1);
	__LIB_2__::func_56(uLocal_372[3], 1, 1);
	__LIB_2__::func_56(uLocal_372[4], 1, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_8(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 13;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 13;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 13;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 13;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 13;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 14;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 14;
			*uParam2 = 1;
			break;
		case 7:
			*uParam1 = 14;
			*uParam2 = 2;
			break;
		case 8:
			*uParam1 = 15;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 15;
			*uParam2 = 1;
			break;
		case 10:
			*uParam1 = 15;
			*uParam2 = 2;
			break;
		case 11:
			*uParam1 = 15;
			*uParam2 = 3;
			break;
		case 12:
			*uParam1 = 15;
			*uParam2 = 4;
			break;
		case 13:
			*uParam1 = 15;
			*uParam2 = 5;
			break;
		case 14:
			*uParam1 = 15;
			*uParam2 = 6;
			break;
		case 15:
			*uParam1 = 15;
			*uParam2 = 7;
			break;
		case 16:
			*uParam1 = 16;
			*uParam2 = 0;
			break;
		case 17:
			*uParam1 = 16;
			*uParam2 = 1;
			break;
		case 18:
			*uParam1 = 16;
			*uParam2 = 2;
			break;
		case 19:
			*uParam1 = 16;
			*uParam2 = 3;
			break;
		case 20:
			*uParam1 = 16;
			*uParam2 = 4;
			break;
	}
}

bool func_10()
{
	switch (iLocal_599)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_17))
			{
				func_31();
				func_32();
				func_33();
				func_34();
				func_35();
				func_36();
				func_37();
				iLocal_599 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&Local_211))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_412))
			{
				return false;
			}
			switch (Local_17.f_51.f_4)
			{
				case 8:
				case 11:
				case 12:
				case 13:
				case 14:
				case 15:
				case 16:
				case 18:
				case 19:
				case 20:
					if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_16))
					{
						return false;
					}
					break;
			}
			return true;
	}
	return false;
}

bool func_11()
{
	switch (iLocal_600)
	{
		case 0:
			if (__LIB_3__::func_479(Local_17.f_51, Local_17.f_51.f_3, &Local_211, &uLocal_372, 1, 0, -1, 1))
			{
				iLocal_600 = 1;
			}
			break;
		case 1:
			func_41();
			func_42();
			if (Local_17.f_51.f_4 == 16)
			{
				__LIB_2__::func_659(&uLocal_679, -2294.8f, -3037.2f, 0f, 8f, 0, 0);
			}
			iLocal_600 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_12()
{
	bool bVar0;
	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_594)
			{
				case 0:
					iLocal_697 = PED::CREATE_GROUP(0);
					PED::SET_PED_AS_GROUP_LEADER(uLocal_372[0], iLocal_697, false);
					iLocal_594 = 1;
					break;
				case 1:
					if (PED::DOES_GROUP_EXIST(iLocal_697) && PED::_0x0455546F23FF08E4(iLocal_697))
					{
						PED::SET_GROUP_FORMATION(iLocal_697, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -2f, -2f, 0f, 0);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 1.5f, -1.5f, 0f, 1);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -3f, -5f, 0f, 2);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 3f, -4f, 0f, 3);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[1], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[2], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[3], iLocal_697);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[0], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[1], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[2], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[3], 279, true);
						iLocal_594 = 2;
					}
					break;
				case 2:
					iLocal_594 = 3;
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_372[0], sLocal_16, 0, 30218, -1, 0, 0, -1);
					switch (Local_17.f_51.f_4)
					{
						case 15:
						case 16:
						case 20:
							uLocal_691[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), -2309.443f, -3079.082f, -4.1759f, 51.59f, 0, 60000f, 1);
							uLocal_691[2] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), -2310.804f, -3079.311f, -4.2636f, 10.92f, 0, 60000f, 1);
							uLocal_691[3] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), -2307.301f, -3083.707f, -4.5794f, -42.94f, 0, 60000f, 1);
							break;
						case 14:
						case 18:
						case 19:
							uLocal_691[1] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), -2743.48f, -2364.23f, 44.11f, -99.83f, 0, 60000f, 1);
							uLocal_691[2] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), -2742.52f, -2363.83f, 44.11f, 177.09f, 0, 60000f, 1);
							uLocal_691[3] = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), -2741.64f, -2364.27f, 44.11f, 147.28f, 0, 60000f, 1);
							break;
					}
					break;
				case 3:
					return true;
			}
			break;
		case 1:
			switch (iLocal_594)
			{
				case 0:
					__LIB_1__::func_283(&uLocal_639, 0);
					if (PATHFIND::_0xCA27A86CAA4E98ED(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &vLocal_698, 1, 1077936128 /* Float: 3f */, 0) && !__LIB_0__::func_86(vLocal_698))
					{
						bVar0 = true;
					}
					else if (__LIB_1__::func_285(&uLocal_639, 2f))
					{
						bVar0 = true;
					}
					if (bVar0)
					{
						iLocal_697 = PED::CREATE_GROUP(0);
						PED::SET_PED_AS_GROUP_LEADER(uLocal_372[0], iLocal_697, false);
						iLocal_594 = 1;
					}
					break;
				case 1:
					if (PED::DOES_GROUP_EXIST(iLocal_697) && PED::_0x0455546F23FF08E4(iLocal_697))
					{
						PED::SET_GROUP_FORMATION(iLocal_697, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -2f, -2f, 0f, 0);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 1.5f, -1.5f, 0f, 1);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -3f, -5f, 0f, 2);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 3f, -4f, 0f, 3);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[1], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[2], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[3], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[4], iLocal_697);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[0], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[1], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[2], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[3], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[4], 279, true);
						iLocal_594 = 2;
					}
					break;
				case 2:
					iLocal_594 = 3;
					TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
					TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
					if (!__LIB_0__::func_86(vLocal_698))
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_698, 5f, 1.75f, 8208, 0);
					}
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.75f, 8208, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
					TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
					break;
				case 3:
					return true;
			}
			break;
		case 2:
			switch (iLocal_594)
			{
				case 0:
					iLocal_697 = PED::CREATE_GROUP(0);
					PED::SET_PED_AS_GROUP_LEADER(uLocal_372[0], iLocal_697, false);
					iLocal_594 = 1;
					break;
				case 1:
					if (PED::DOES_GROUP_EXIST(iLocal_697) && PED::_0x0455546F23FF08E4(iLocal_697))
					{
						PED::SET_GROUP_FORMATION(iLocal_697, 5);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -2f, -2f, 0f, 0);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 1.5f, -1.5f, 0f, 1);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, -3f, -5f, 0f, 2);
						PED::ADD_CUSTOM_FORMATION_LOCATION(iLocal_697, 3f, -4f, 0f, 3);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[1], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[2], iLocal_697);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[3], iLocal_697);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[0], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[1], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[2], 279, true);
						PED::SET_PED_CONFIG_FLAG(uLocal_372[3], 279, true);
						iLocal_594 = 2;
					}
					break;
				case 2:
					iLocal_594 = 3;
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_372[0], sLocal_16, 0, 30218, -1, 0, 0, -1);
					break;
				case 3:
					return true;
			}
			break;
	}
	return false;
}

bool func_14()
{
	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_579)
			{
				case 0:
					func_57();
					break;
				case 1:
					func_58();
					break;
				case 2:
					func_59();
					break;
				case 3:
					func_60();
					break;
				case 5:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
				case 4:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
			}
			break;
		case 1:
			switch (iLocal_580)
			{
				case 0:
					func_61();
					break;
				case 1:
					func_62();
					break;
				case 2:
					func_63();
					break;
				case 3:
					func_64();
					break;
				case 5:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
				case 4:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
			}
			break;
		case 2:
			switch (iLocal_581)
			{
				case 0:
					func_65();
					break;
				case 1:
					func_66();
					break;
				case 2:
					func_67();
					break;
				case 3:
					func_68();
					break;
				case 5:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
				case 4:
					Local_17.f_50 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_372[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_372[4], true);
					return true;
			}
			break;
	}
	return false;
}

void func_16()
{
	switch (iLocal_14)
	{
		case 0:
			func_72();
			func_73();
			if (iLocal_579 != 3)
			{
				func_74();
			}
			break;
		case 1:
			func_75();
			func_73();
			if (iLocal_580 != 3)
			{
				func_74();
			}
			break;
		case 2:
			func_76();
			func_73();
			if (iLocal_581 != 3)
			{
				func_74();
			}
			OBJECT::SET_FORCE_OBJECT_THIS_FRAME(-4310.89f, -2428.42f, 9.08f, 5f);
			break;
	}
	func_77();
	__LIB_0__::func_11();
}

void func_19()
{
	if (Local_17.f_44 == 1)
	{
		if (__LIB_3__::func_564(Local_17.f_3, iLocal_14) == 0)
		{
			__LIB_3__::func_461(Local_17.f_3, iLocal_14, 1);
		}
		if (iLocal_14 == 1)
		{
			if (__LIB_3__::func_674(Local_17.f_3, 1) == 0)
			{
				__LIB_3__::func_537(Local_17.f_3, 1, 1);
				return;
			}
			if (__LIB_3__::func_674(Local_17.f_3, 1) == 1)
			{
				__LIB_3__::func_537(Local_17.f_3, 1, 2);
				return;
			}
			if (__LIB_3__::func_674(Local_17.f_3, 1) == 2)
			{
				__LIB_3__::func_537(Local_17.f_3, 1, 3);
				return;
			}
		}
	}
}

void func_31()
{
	switch (Local_17.f_51.f_4)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 10:
		case 17:
			iLocal_14 = 1;
			break;
		case 8:
		case 11:
		case 12:
		case 13:
			iLocal_14 = 2;
			break;
		case 14:
		case 15:
		case 16:
		case 18:
		case 19:
		case 20:
			iLocal_14 = 0;
			break;
	}
}

void func_32()
{
	iLocal_15 = __LIB_3__::func_390(Local_17.f_3, 3, 0);
	switch (iLocal_15)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

void func_33()
{
	switch (Local_17.f_51.f_4)
	{
		case 8:
			sLocal_16 = "redlp_location_shack1";
			break;
		case 11:
			sLocal_16 = "redlp_location_shack2";
			break;
		case 12:
			sLocal_16 = "redlp_location_shack3";
			break;
		case 13:
			sLocal_16 = "redlp_location_shack4";
			break;
		case 14:
			sLocal_16 = "redlp_location_rest2b";
			break;
		case 15:
			sLocal_16 = "redlp_location_rest1b";
			break;
		case 16:
			sLocal_16 = "redlp_location_rest1a";
			break;
		case 18:
			sLocal_16 = "redlp_location_rest2c";
			break;
		case 19:
			sLocal_16 = "redlp_location_rest2a";
			break;
		case 20:
			sLocal_16 = "redlp_location_rest1c";
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_16))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_16);
	}
}

void func_34()
{
	int iVar0;
	Local_211[0 /*32*/].f_6 = { Local_17.f_51 };
	switch (Local_17.f_51.f_4)
	{
		case 2:
			Local_211[0 /*32*/].f_9 = 66.09f;
			break;
		case 4:
			Local_211[0 /*32*/].f_9 = -115f;
			break;
		case 0:
			Local_211[0 /*32*/].f_9 = 149f;
			break;
		case 1:
			Local_211[0 /*32*/].f_9 = 144.85f;
			break;
		case 3:
			Local_211[0 /*32*/].f_9 = 173f;
			break;
		case 5:
			Local_211[0 /*32*/].f_9 = -95.48f;
			break;
		case 6:
			Local_211[0 /*32*/].f_9 = -6.89f;
			break;
		case 7:
			Local_211[0 /*32*/].f_9 = -74.82f;
			break;
		case 10:
			Local_211[0 /*32*/].f_9 = -141f;
			break;
		case 11:
			Local_211[0 /*32*/].f_9 = -141f;
			break;
		case 13:
			Local_211[0 /*32*/].f_9 = 44.34f;
			break;
		case 8:
			Local_211[0 /*32*/].f_9 = 129.32f;
			break;
		case 9:
			Local_211[0 /*32*/].f_9 = -134.47f;
			break;
		case 12:
			Local_211[0 /*32*/].f_9 = 68.83f;
			break;
		case 14:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 15:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 16:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 17:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 18:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 19:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
		case 20:
			Local_211[0 /*32*/].f_9 = 145.7f;
			break;
	}
	__LIB_2__::func_106(&(Local_211[0 /*32*/].f_6), 1, 10, 0);
	Local_211[0 /*32*/].f_15 = { Local_211[0 /*32*/].f_6 };
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		Local_211[iVar0 /*32*/].f_9 = Local_211[0 /*32*/].f_9;
		switch (iVar0)
		{
			case 1:
				Local_211[iVar0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_211[0 /*32*/].f_6, Local_211[0 /*32*/].f_9, -2f, -2f, 0f) };
				break;
			case 2:
				Local_211[iVar0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_211[0 /*32*/].f_6, Local_211[0 /*32*/].f_9, 1.5f, -1.5f, 0f) };
				break;
			case 3:
				Local_211[iVar0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_211[0 /*32*/].f_6, Local_211[0 /*32*/].f_9, -3f, -5f, 0f) };
				break;
			case 4:
				Local_211[iVar0 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_211[0 /*32*/].f_6, Local_211[0 /*32*/].f_9, 3f, -4f, 0f) };
				break;
		}
		__LIB_2__::func_106(&(Local_211[iVar0 /*32*/].f_6), 1, 10, 0);
		Local_211[iVar0 /*32*/].f_15 = { Local_211[iVar0 /*32*/].f_6 };
		Local_211[iVar0 /*32*/].f_18 = Local_211[iVar0 /*32*/].f_9;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iVar0++;
	}
}

void func_35()
{
	int iVar0;
	switch (iLocal_14)
	{
		case 0:
			StringCopy(&(Local_211[0 /*32*/].f_23), "1019_G_M_M_UniBanditos_01_HISPANIC_01", 64);
			Local_211[0 /*32*/].f_3 = 470765111;
			StringCopy(&(Local_211[1 /*32*/].f_23), "1023_G_M_M_UniBanditos_01_WHITE_01", 64);
			Local_211[1 /*32*/].f_3 = 708700820;
			StringCopy(&(Local_211[2 /*32*/].f_23), "0135_G_M_M_UniCriminals_01_HISPANIC_02", 64);
			Local_211[2 /*32*/].f_3 = 1275244069;
			StringCopy(&(Local_211[3 /*32*/].f_23), "1067_G_M_M_UniCriminals_01_HISPANIC_04", 64);
			Local_211[3 /*32*/].f_3 = 1513704082;
			break;
		case 1:
			switch (iLocal_15)
			{
				case 0:
					StringCopy(&(Local_211[0 /*32*/].f_23), "1021_G_M_M_UniBanditos_01_HISPANIC_03", 64);
					Local_211[0 /*32*/].f_3 = 229452171;
					StringCopy(&(Local_211[1 /*32*/].f_23), "1022_G_M_M_UniBanditos_01_HISPANIC_04", 64);
					Local_211[1 /*32*/].f_3 = 451429377;
					StringCopy(&(Local_211[2 /*32*/].f_23), "1067_G_M_M_UniCriminals_01_HISPANIC_04", 64);
					Local_211[2 /*32*/].f_3 = 125607214;
					StringCopy(&(Local_211[3 /*32*/].f_23), "1069_G_M_M_UniCriminals_01_HISPANIC_06", 64);
					Local_211[3 /*32*/].f_3 = 369572419;
					StringCopy(&(Local_211[4 /*32*/].f_23), "1020_G_M_M_UniBanditos_01_HISPANIC_02", 64);
					Local_211[4 /*32*/].f_3 = -628473014;
					break;
				case 1:
					StringCopy(&(Local_211[0 /*32*/].f_23), "1024_G_M_M_UniBanditos_01_WHITE_02", 64);
					Local_211[0 /*32*/].f_3 = 691921068;
					StringCopy(&(Local_211[1 /*32*/].f_23), "1069_G_M_M_UniCriminals_01_HISPANIC_06", 64);
					Local_211[1 /*32*/].f_3 = 451429377;
					StringCopy(&(Local_211[2 /*32*/].f_23), "1066_G_M_M_UniCriminals_01_HISPANIC_03", 64);
					Local_211[2 /*32*/].f_3 = 229452171;
					StringCopy(&(Local_211[3 /*32*/].f_23), "1020_G_M_M_UniBanditos_01_HISPANIC_02", 64);
					Local_211[3 /*32*/].f_3 = 369572419;
					StringCopy(&(Local_211[4 /*32*/].f_23), "1068_G_M_M_UniCriminals_01_HISPANIC_05", 64);
					Local_211[4 /*32*/].f_3 = -628473014;
					break;
				case 2:
					StringCopy(&(Local_211[0 /*32*/].f_23), "1068_G_M_M_UniCriminals_01_HISPANIC_05", 64);
					Local_211[0 /*32*/].f_3 = 229452171;
					StringCopy(&(Local_211[1 /*32*/].f_23), "RBH_TARGET22", 64);
					Local_211[1 /*32*/].f_3 = 451429377;
					StringCopy(&(Local_211[2 /*32*/].f_23), "1067_G_M_M_UniCriminals_01_HISPANIC_04", 64);
					Local_211[2 /*32*/].f_3 = 125607214;
					StringCopy(&(Local_211[3 /*32*/].f_23), "1066_G_M_M_UniCriminals_01_HISPANIC_03", 64);
					Local_211[3 /*32*/].f_3 = 369572419;
					StringCopy(&(Local_211[4 /*32*/].f_23), "1024_G_M_M_UniBanditos_01_WHITE_02", 64);
					Local_211[4 /*32*/].f_3 = -1855770375;
					break;
			}
			break;
		case 2:
			StringCopy(&(Local_211[0 /*32*/].f_23), "1019_G_M_M_UniBanditos_01_HISPANIC_01", 64);
			Local_211[0 /*32*/].f_3 = 125607214;
			StringCopy(&(Local_211[1 /*32*/].f_23), "1066_G_M_M_UniCriminals_01_HISPANIC_03", 64);
			Local_211[1 /*32*/].f_3 = 369572419;
			StringCopy(&(Local_211[2 /*32*/].f_23), "1023_G_M_M_UniBanditos_01_WHITE_01", 64);
			Local_211[2 /*32*/].f_3 = -1855770375;
			StringCopy(&(Local_211[3 /*32*/].f_23), "1068_G_M_M_UniCriminals_01_HISPANIC_05", 64);
			Local_211[3 /*32*/].f_3 = -1617539745;
			break;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Local_211[iVar0 /*32*/].f_3 != joaat("META_OUTFIT_DEFAULT"))
		{
			Local_211[iVar0 /*32*/].f_1 = joaat("G_M_M_UNIBANDITOS_01");
			Local_211[iVar0 /*32*/].f_13 = 1;
			Local_211[iVar0 /*32*/].f_19 = 1;
			Local_211[iVar0 /*32*/].f_12 = __LIB_2__::func_185(5, iVar0, 0);
		}
		iVar0++;
	}
	__LIB_3__::func_284(&Local_211);
}

void func_36()
{
	Local_409[0 /*2*/] = "AMB_WORK@WORLD_HUMAN_LAWMAN_IDLES@MALE_B@BASE";
	Local_409[0 /*2*/].f_1 = "base";
	__LIB_3__::func_318(Local_409[0 /*2*/], &uLocal_412);
}

void func_37()
{
	__LIB_2__::func_602(&(Local_527[0 /*17*/]), "RE_INTER_POS", func_134(47), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_527[1 /*17*/]), "RE_INTER_ANTAGONIZE", func_134(49), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_527[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
}

void func_41()
{
	int iVar0;
	Local_17.f_178 = 1;
	__LIB_3__::func_285(uLocal_372[0], &Local_17, 0);
	__LIB_3__::func_285(uLocal_372[1], &Local_17, 0);
	__LIB_3__::func_285(uLocal_372[4], &Local_17, 0);
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (__LIB_2__::func_1(Local_211[iVar0 /*32*/].f_11, 0, 1))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Local_211[iVar0 /*32*/].f_11, true, joaat("PLAYER"));
		}
		if (__LIB_2__::func_1(uLocal_372[iVar0], 0, 1))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_372[iVar0], joaat("REL_PLAYER_DISLIKE"));
			PED::_0x89F5E7ADECCCB49C(uLocal_372[iVar0], "Default_Brave");
			PED::SET_PED_CONFIG_FLAG(uLocal_372[iVar0], 146, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_372[iVar0], 6, true);
			WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_372[iVar0], true, true);
			PED::SET_PED_COMBAT_MOVEMENT(uLocal_372[iVar0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 17, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 42, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_372[iVar0], 0, true);
		}
		iVar0++;
	}
	switch (iLocal_14)
	{
		case 0:
			__LIB_2__::func_272(uLocal_372[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[1], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[2], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[3], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_190(uLocal_372[0], 300);
			__LIB_2__::func_190(uLocal_372[1], 200);
			__LIB_2__::func_190(uLocal_372[2], 200);
			__LIB_2__::func_190(uLocal_372[3], 100);
			__LIB_2__::func_463(uLocal_372[0], joaat("PROVISION_RING_SILVER"), 1, 0);
			__LIB_2__::func_463(uLocal_372[1], joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 0);
			__LIB_2__::func_463(uLocal_372[2], joaat("CONSUMABLE_GIN"), 1, 0);
			__LIB_2__::func_463(uLocal_372[3], joaat("CONSUMABLE_CHEWING_TOBACCO_USED"), 1, 0);
			break;
		case 1:
			__LIB_2__::func_272(uLocal_372[0], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[1], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[2], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[3], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[4], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_190(uLocal_372[0], 300);
			__LIB_2__::func_190(uLocal_372[1], 200);
			__LIB_2__::func_190(uLocal_372[2], 200);
			__LIB_2__::func_190(uLocal_372[3], 300);
			__LIB_2__::func_190(uLocal_372[4], 200);
			__LIB_2__::func_463(uLocal_372[0], joaat("CONSUMABLE_JERKY"), 2, 0);
			__LIB_2__::func_463(uLocal_372[1], joaat("CONSUMABLE_POTENT_MEDICINE"), 1, 0);
			__LIB_2__::func_463(uLocal_372[2], joaat("CONSUMABLE_MEDICINE"), 1, 0);
			__LIB_2__::func_463(uLocal_372[3], joaat("CONSUMABLE_RUM"), 1, 0);
			__LIB_2__::func_463(uLocal_372[4], joaat("CONSUMABLE_WHISKEY_USED"), 1, 0);
			break;
		case 2:
			__LIB_2__::func_272(uLocal_372[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[1], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[2], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_272(uLocal_372[3], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_190(uLocal_372[0], 200);
			__LIB_2__::func_190(uLocal_372[1], 100);
			__LIB_2__::func_190(uLocal_372[2], 100);
			__LIB_2__::func_190(uLocal_372[3], 100);
			__LIB_2__::func_463(uLocal_372[0], joaat("CONSUMABLE_KIDNEYBEANS_CAN"), 1, 0);
			__LIB_2__::func_463(uLocal_372[1], joaat("CONSUMABLE_BREAD_ROLL"), 1, 0);
			__LIB_2__::func_463(uLocal_372[2], joaat("CONSUMABLE_CHEWING_TOBACCO_USED"), 1, 0);
			__LIB_2__::func_463(uLocal_372[3], joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"), 1, 0);
			break;
	}
	__LIB_3__::func_345(&Local_17, uLocal_372[0]);
}

void func_42()
{
	__LIB_2__::func_51(&(Local_17.f_5), 1);
	__LIB_2__::func_180(&(Local_17.f_5), 1);
	__LIB_2__::func_111(&(Local_17.f_5), 1);
	__LIB_2__::func_110(&(Local_17.f_5), 1);
	__LIB_2__::func_105(&(Local_17.f_5), 1);
	__LIB_2__::func_104(&(Local_17.f_5), 1);
	__LIB_2__::func_50(&(Local_17.f_5), 1);
	__LIB_2__::func_634(&(Local_17.f_5), 1);
	__LIB_2__::func_182(&(Local_17.f_5), 1);
}

void func_57()
{
	func_191(1);
}

void func_58()
{
	func_192();
	func_193(20);
	func_194();
	if (func_195() && bLocal_666 == 0)
	{
		func_196();
	}
	if (__LIB_3__::func_332(Local_17.f_51, 1) <= 50f || __LIB_3__::func_452(&Local_17, 1f, 150f, 100f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
	}
	switch (iLocal_584)
	{
		case 0:
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_16, &iLocal_643);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_16, (iLocal_643 - 1), &vLocal_674);
			func_199();
			iLocal_584 = 1;
			break;
		case 1:
			if (iLocal_654 == 0 && bLocal_660 == 0)
			{
				func_200();
				func_201();
				if (func_202(-4f, 1, 0, 0))
				{
					TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(uLocal_372[1]);
				}
			}
			else if (bLocal_660 == 0 && !func_195())
			{
				func_203();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 50f, 50f, 5f, false, true, 0) && iLocal_665 == 0)
			{
				iLocal_665 = 1;
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(31), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 15f, 15f, 2f, false, true, 0) && bLocal_660 == 0)
			{
				func_191(2);
			}
			break;
	}
}

void func_59()
{
	func_192();
	func_193(20);
	switch (iLocal_585)
	{
		case 0:
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			func_205();
			iLocal_585 = 1;
			__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
			__LIB_3__::func_158(&(Local_527[1 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
			Local_527[1 /*17*/].f_13 = func_134(55);
			iLocal_582 = 4;
			iLocal_583 = 0;
			break;
		case 1:
			func_207();
			if (!func_208() && bLocal_660 == 0)
			{
				if ((PED::IS_PED_USING_ANY_SCENARIO(uLocal_372[1]) && PED::IS_PED_USING_ANY_SCENARIO(uLocal_372[2])) && PED::IS_PED_USING_ANY_SCENARIO(uLocal_372[3]))
				{
					func_209();
				}
			}
			if (func_208() || bLocal_660 == 1)
			{
				func_210();
				func_211();
			}
			if (TASK::GET_SEQUENCE_PROGRESS(uLocal_372[0]) >= 4)
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(37), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_212();
				iLocal_585 = 2;
			}
			break;
		case 2:
			if (((PED::IS_PED_ON_MOUNT(uLocal_372[0]) && PED::IS_PED_ON_MOUNT(uLocal_372[1])) && PED::IS_PED_ON_MOUNT(uLocal_372[2])) && PED::IS_PED_ON_MOUNT(uLocal_372[3]))
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_372[0], 2f, 8208, 0);
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[1], iLocal_697);
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[2], iLocal_697);
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_372[3], iLocal_697);
				PED::SET_GROUP_FORMATION(iLocal_697, 0);
				PED::SET_GROUP_FORMATION_SPACING(iLocal_697, 2f, -1f, -1f);
				iLocal_585 = 3;
			}
			if (func_208() || bLocal_660 == 1)
			{
				func_210();
				func_211();
			}
			break;
		case 3:
			if (func_208() || bLocal_660 == 1)
			{
				func_210();
				func_211();
			}
			break;
	}
}

void func_60()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	func_213();
	func_214();
	switch (iLocal_586)
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[0 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[1 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[2 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[3 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[0]));
			__LIB_2__::func_344(&(uLocal_372[1]));
			__LIB_2__::func_344(&(uLocal_372[2]));
			__LIB_2__::func_344(&(uLocal_372[3]));
			Local_17.f_44 = 1;
			func_216();
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			PED::_0x802092B07E3B1EEA(uLocal_372[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::_0x802092B07E3B1EEA(uLocal_372[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::_0x802092B07E3B1EEA(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::_0x802092B07E3B1EEA(uLocal_372[3], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[0]))
			{
				iLocal_378[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[0]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[1]))
			{
				iLocal_378[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[1]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[2]))
			{
				iLocal_378[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[2]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[3]))
			{
				iLocal_378[3] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[3]);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("REDLP_FIGHT");
			iLocal_586 = 1;
			break;
		case 1:
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				fVar0 = 0.3f;
				fVar1 = 0.6f;
				fVar2 = 1f;
			}
			if (iLocal_601 == 0)
			{
				fVar0 = 0.3f;
				fVar1 = 0.9f;
				fVar2 = 1.2f;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(Local_211[0 /*32*/].f_11, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[3 /*32*/].f_11, iVar4, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], fVar2, fVar2);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			PED::_0x712B2C2B2471B493(uLocal_372[0], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[1], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[2], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[3], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[4], joaat("DISABLED"));
			if (!__LIB_0__::func_163(Local_211[0 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[0 /*32*/].f_11, -1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_211[0 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			if (!__LIB_0__::func_163(Local_211[1 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[1 /*32*/].f_11, -1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_211[1 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			if (!__LIB_0__::func_163(Local_211[2 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[2 /*32*/].f_11, -1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_211[2 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			if (!__LIB_0__::func_163(Local_211[3 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[3 /*32*/].f_11, -1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_211[3 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			if (!__LIB_0__::func_163(Local_211[4 /*32*/].f_11, 518218985))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(Local_211[4 /*32*/].f_11, -1))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(Local_211[4 /*32*/].f_11, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				}
			}
			iLocal_586 = 2;
			break;
		case 2:
			if (func_218())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_END");
				func_191(5);
			}
			break;
	}
}

void func_61()
{
	func_219(1);
}

void func_62()
{
	func_220();
	func_193(30);
	func_194();
	switch (iLocal_584)
	{
		case 0:
			fLocal_653 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_17.f_51, vLocal_674, true) / 2f);
			iLocal_584 = 1;
			break;
		case 1:
			if (iLocal_654 == 0 && bLocal_660 == 0)
			{
				switch (iLocal_15)
				{
					case 0:
						func_221();
						break;
					case 1:
						func_222();
						break;
					case 2:
						func_223();
						break;
				}
				func_201();
			}
			else
			{
				func_224();
			}
			if (bLocal_659)
			{
				func_225(30);
			}
			if (__LIB_3__::func_332(Local_17.f_51, 1) <= 50f || __LIB_3__::func_452(&Local_17, 1f, 150f, 100f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 80f, 80f, 40f, false, true, 0))
			{
				func_219(2);
			}
			break;
	}
}

void func_63()
{
	func_220();
	func_193(20);
	if (bLocal_659)
	{
		func_225(30);
	}
	switch (iLocal_585)
	{
		case 0:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 2f, 8208, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], -2f, -2f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 1, 1, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], 2f, -2f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 1, 1, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], -3f, -4f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 1, 1, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], 3f, -4f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 1, 1, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[4]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[4], uLocal_685[4]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			iLocal_585 = 3;
			break;
		case 3:
			break;
	}
}

void func_64()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	func_226();
	func_214();
	switch (iLocal_586)
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[0 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[1 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[2 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[3 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[4 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[0]));
			__LIB_2__::func_344(&(uLocal_372[1]));
			__LIB_2__::func_344(&(uLocal_372[2]));
			__LIB_2__::func_344(&(uLocal_372[3]));
			__LIB_2__::func_344(&(uLocal_372[4]));
			Local_17.f_44 = 1;
			func_216();
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[4]);
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[0]))
			{
				iLocal_378[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[0]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[1]))
			{
				iLocal_378[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[1]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[2]))
			{
				iLocal_378[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[2]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[3]))
			{
				iLocal_378[3] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[3]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[4]))
			{
				iLocal_378[4] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[4]);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("REDLP_FIGHT");
			iLocal_586 = 1;
			break;
		case 1:
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				fVar0 = 0.2f;
				fVar1 = 0.5f;
				fVar2 = 0.8f;
				fVar3 = 1.2f;
			}
			if (iLocal_601 == 0)
			{
				fVar0 = 0.3f;
				fVar1 = 0.6f;
				fVar2 = 1f;
				fVar3 = 1.3f;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::TASK_PERFORM_SEQUENCE(Local_211[0 /*32*/].f_11, iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&iVar5);
			TASK::OPEN_SEQUENCE_TASK(&iVar5);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar5);
			TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[3 /*32*/].f_11, iVar5, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar5);
			func_227(uLocal_372[0], uLocal_685[0], 0f);
			func_227(uLocal_372[1], uLocal_685[1], fVar0);
			func_227(uLocal_372[2], uLocal_685[2], fVar1);
			func_227(uLocal_372[3], uLocal_685[3], fVar2);
			func_227(uLocal_372[4], uLocal_685[4], fVar3);
			iLocal_586 = 2;
			break;
		case 2:
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[0], true))
			{
				if (!__LIB_0__::func_163(uLocal_372[0], 242628503))
				{
					func_227(uLocal_372[0], uLocal_685[0], 0f);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[1], true))
			{
				if (!__LIB_0__::func_163(uLocal_372[1], 242628503))
				{
					func_227(uLocal_372[1], uLocal_685[1], 0f);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[2], true))
			{
				if (!__LIB_0__::func_163(uLocal_372[2], 242628503))
				{
					func_227(uLocal_372[2], uLocal_685[2], 0f);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[3], true))
			{
				if (!__LIB_0__::func_163(uLocal_372[3], 242628503))
				{
					func_227(uLocal_372[3], uLocal_685[3], 0f);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_372[4], true))
			{
				if (!__LIB_0__::func_163(uLocal_372[4], 242628503))
				{
					func_227(uLocal_372[4], uLocal_685[4], 0f);
				}
			}
			if (func_218())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_END");
				func_219(5);
			}
			break;
	}
}

void func_65()
{
	func_228(1);
}

void func_66()
{
	func_229();
	func_193(20);
	func_194();
	if (func_195())
	{
		func_230();
	}
	if (__LIB_3__::func_332(Local_17.f_51, 1) <= 50f || __LIB_3__::func_452(&Local_17, 1f, 150f, 100f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
	}
	switch (iLocal_584)
	{
		case 0:
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_16, &iLocal_643);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_16, (iLocal_643 - 1), &vLocal_674);
			fLocal_653 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_17.f_51, vLocal_674, true) / 2f);
			iLocal_584 = 1;
			break;
		case 1:
			if (iLocal_654 == 0 && bLocal_660 == 0)
			{
				func_231();
				func_201();
				if (func_202(-4f, 1, 0, 0))
				{
					TASK::WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(uLocal_372[3]);
				}
			}
			else
			{
				if (bLocal_660 == 0 && !func_195())
				{
					func_232();
				}
				if (iLocal_667 == 1)
				{
					if (((__LIB_2__::func_118(uLocal_372[0], 1, 1) > 15f && __LIB_2__::func_118(uLocal_372[1], 1, 1) > 15f) && __LIB_2__::func_118(uLocal_372[2], 1, 1) > 15f) && __LIB_2__::func_118(uLocal_372[3], 1, 1) > 15f)
					{
						TASK::CLEAR_PED_TASKS(uLocal_372[2], true, false);
						TASK::CLEAR_PED_TASKS(uLocal_372[3], true, false);
						iLocal_667 = 0;
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 100f, 100f, 60f, false, true, 0))
			{
				TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(uLocal_372[1], -2f, -4f, 0f);
				TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(uLocal_372[2], 1.5f, -8f, 0f);
				TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(uLocal_372[3], -3f, -12f, 0f);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 80f, 80f, 60f, false, true, 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 2f, 1, -1f, 0);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[1], 1.5f, 1, -1f, 0);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[2], 1.5f, 1, -1f, 0);
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[3], 1f, 1, -1f, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_372[0], vLocal_674, 20f, 20f, 20f, false, true, 0) && bLocal_660 == 0)
			{
				func_228(2);
			}
			break;
	}
}

void func_67()
{
	func_229();
	func_193(20);
	switch (iLocal_585)
	{
		case 0:
			__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(31), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			__LIB_3__::func_158(&(Local_527[1 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
			Local_527[1 /*17*/].f_13 = func_134(55);
			iLocal_582 = 4;
			iLocal_583 = 0;
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_372[3], joaat("WEAPON_UNARMED"), false, 0, false, false);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4368.33f, -2405.58f, 18.79f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("PROP_HUMAN_SEAT_CHAIR"), -4365.08f, -2417.43f, 19.85f, -73.97f, -1, true, false, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4368.91f, -2425.94f, 18.8f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_DRINKING_DRUNK"), -4368.03f, -2420.39f, 18.86f, -86.79f, -1, true, false, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4369.76f, -2423.44f, 18.82f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_SMOKE"), -4366.67f, -2420.06f, 18.88f, 155.34f, -1, true, false, 0, -1f, false);
			TASK::TASK_MOUNT_ANIMAL(0, Local_211[2 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_372[0], 2f, -2f, 0f, 2f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 1, 1, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -4363.36f, -2433.84f, 18.87f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_SIT_DRINK"), -4368.68f, -2417.14f, 19.4f, 117.93f, -1, true, false, 0, -1f, false);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			iLocal_585 = 2;
			break;
		case 2:
			if (!func_208() && bLocal_660 == 0)
			{
				if (TASK::GET_SEQUENCE_PROGRESS(uLocal_372[1]) >= 2 && TASK::GET_SEQUENCE_PROGRESS(uLocal_372[2]) >= 2)
				{
					func_234();
				}
			}
			if (func_208() || bLocal_660 == 1)
			{
				func_235();
				func_236();
			}
			break;
		case 3:
			break;
	}
}

void func_68()
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	func_237();
	func_214();
	switch (iLocal_586)
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[0 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[1 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[2 /*21*/]), &Local_527);
			__LIB_2__::func_593(&(Local_421[3 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[0]));
			__LIB_2__::func_344(&(uLocal_372[1]));
			__LIB_2__::func_344(&(uLocal_372[2]));
			__LIB_2__::func_344(&(uLocal_372[3]));
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[1]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[2]);
			PED::REMOVE_PED_FROM_GROUP(uLocal_372[3]);
			Local_17.f_44 = 1;
			func_216();
			PED::_0x802092B07E3B1EEA(uLocal_372[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::_0x802092B07E3B1EEA(uLocal_372[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::_0x802092B07E3B1EEA(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			PED::_0x802092B07E3B1EEA(uLocal_372[3], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[0]))
			{
				iLocal_378[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[0]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[1]))
			{
				iLocal_378[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[1]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[2]))
			{
				iLocal_378[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[2]);
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_378[3]))
			{
				iLocal_378[3] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[3]);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("REDLP_FIGHT");
			iLocal_586 = 1;
			break;
		case 1:
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				fVar0 = 0.3f;
				fVar1 = 0.6f;
				fVar2 = 1f;
			}
			if (iLocal_601 == 0)
			{
				fVar0 = 0.3f;
				fVar1 = 0.9f;
				fVar2 = 1.2f;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar3);
			TASK::TASK_PERFORM_SEQUENCE(Local_211[0 /*32*/].f_11, iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar3);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::OPEN_SEQUENCE_TASK(&iVar4);
			TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar4);
			TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[3 /*32*/].f_11, iVar4, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iVar4);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], fVar2, fVar2);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			PED::_0x712B2C2B2471B493(uLocal_372[0], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[1], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[2], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[3], joaat("DISABLED"));
			PED::_0x712B2C2B2471B493(uLocal_372[4], joaat("DISABLED"));
			iLocal_586 = 2;
			break;
		case 2:
			if (func_218())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_END");
				func_228(5);
			}
			break;
	}
}

void func_72()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = func_242(&(uLocal_372[1]), &(Local_421[1 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_242(&(uLocal_372[0]), &(Local_421[0 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar2 = func_242(&(uLocal_372[2]), &(Local_421[2 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar3 = func_242(&(uLocal_372[3]), &(Local_421[3 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_582)
	{
		case 0:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					Local_17.f_44 = 1;
					bLocal_666 = true;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[1], Global_35, func_134(56), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					bLocal_666 = true;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[1], Global_35, func_134(58), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 5:
					if (func_202(-4f, 1, uLocal_372[1], 1))
					{
						__LIB_1__::func_148(&uLocal_633);
						__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[1 /*17*/].f_13 = func_134(53);
						iLocal_582 = 1;
						iLocal_583 = 0;
					}
					break;
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_633) >= 8f)
			{
				if (iLocal_583 == 0)
				{
					iLocal_582 = 5;
				}
			}
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 2:
					bLocal_666 = true;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[1], Global_35, func_134(62), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_191(3);
						iLocal_583 = 0;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_663 = 1;
							__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_527[1 /*17*/]), 0, 0);
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_663 = 1;
							__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_527[1 /*17*/]), 0, 0);
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_663 = 1;
							__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_527[1 /*17*/]), 0, 0);
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_663 = 1;
							__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_527[1 /*17*/]), 0, 0);
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(61), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 2:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(63), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_191(3);
						iLocal_583 = 0;
					}
					break;
				case 5:
					iLocal_583 = 0;
					break;
			}
			break;
		case 4:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					func_225(30);
					bLocal_666 = true;
					if (func_202(-4f, 1, 0, 0))
					{
						iLocal_583 = 5;
						bLocal_660 = true;
					}
					break;
				case 5:
					break;
			}
			break;
		case 6:
			__LIB_3__::func_158(&(Local_527[0 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_527[1 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_527[2 /*17*/]), 1);
			break;
		case 5:
			__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_527[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_527[2 /*17*/]), 0, 0);
			break;
	}
}

void func_73()
{
	if (__LIB_2__::func_118(uLocal_372[0], 1, 0) <= 90f)
	{
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			iLocal_651++;
		}
	}
	if (iLocal_651 >= 3)
	{
		__LIB_2__::func_906(&(Local_17.f_5), 75);
		__LIB_1__::func_975(&(Local_17.f_5), 7f);
	}
}

void func_74()
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	iVar0 = PED::GET_PED_NEARBY_PEDS(uLocal_372[0], &uVar2, -1, -1);
	if (iVar0 > 0)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (((!ENTITY::IS_ENTITY_DEAD(uVar2[iVar1]) && PED::IS_PED_HUMAN(uVar2[iVar1])) && ENTITY::DOES_ENTITY_EXIST(uVar2[iVar1])) && func_247(uVar2[iVar1]))
			{
				if (func_248(uVar2[iVar1]) && func_249(uVar2[iVar1]))
				{
					iLocal_661 = 1;
					if (uVar2[iVar1] == Global_35 && bLocal_662 == 1)
					{
						iLocal_661 = 0;
					}
					if (bLocal_662 == 0)
					{
						if (uVar2[iVar1] == Global_35)
						{
							Local_17.f_44 = 1;
							bLocal_662 = true;
						}
					}
				}
				else
				{
					iLocal_661 = 0;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iLocal_661 = 0;
	}
}

void func_75()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar4 = -1;
	iVar0 = func_242(&(uLocal_372[3]), &(Local_421[3 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_242(&(uLocal_372[0]), &(Local_421[0 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar2 = func_242(&(uLocal_372[1]), &(Local_421[1 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar3 = func_242(&(uLocal_372[2]), &(Local_421[2 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar4 = func_242(&(uLocal_372[4]), &(Local_421[4 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_582)
	{
		case 0:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar4)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					Local_17.f_44 = 1;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(56), 0f, 1))
						{
							iLocal_583 = 4;
						}
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(58), 0f, 1))
						{
							iLocal_664 = 1;
							iLocal_583 = 3;
						}
					}
					break;
				case 4:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						__LIB_1__::func_148(&uLocal_633);
						__LIB_2__::func_411(&(Local_527[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[0 /*17*/].f_13 = func_134(48);
						Local_527[1 /*17*/].f_13 = func_134(50);
						iLocal_582 = 1;
						iLocal_583 = 0;
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_250();
						func_219(3);
						iLocal_583 = 5;
					}
					break;
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_633) >= 8f)
			{
				if (iLocal_583 == 0)
				{
					iLocal_582 = 5;
				}
			}
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar4)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(57), 0f, 1))
						{
							func_250();
							iLocal_664 = 1;
							bLocal_660 = true;
							func_219(3);
							iLocal_583 = 4;
						}
					}
					break;
				case 2:
					func_225(50);
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(59), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_250();
						func_219(3);
						iLocal_583 = 5;
					}
					break;
				case 5:
					iLocal_583 = 0;
					break;
			}
			break;
		case 3:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					switch (iVar4)
					{
						case 0:
							iLocal_583 = 5;
							break;
						case 1:
							iLocal_583 = 5;
							break;
					}
					break;
				case 5:
					bLocal_666 = true;
					iLocal_582 = 5;
					break;
			}
			break;
		case 6:
			__LIB_3__::func_158(&(Local_527[0 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_527[1 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_527[2 /*17*/]), 1);
			break;
		case 5:
			__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_527[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_527[2 /*17*/]), 0, 0);
			break;
	}
}

void func_76()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	iVar3 = -1;
	iVar0 = func_242(&(uLocal_372[3]), &(Local_421[3 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_242(&(uLocal_372[0]), &(Local_421[0 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar2 = func_242(&(uLocal_372[1]), &(Local_421[1 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar3 = func_242(&(uLocal_372[2]), &(Local_421[2 /*21*/]), 50f, &Local_527, &(Local_17.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_582)
	{
		case 0:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					Local_17.f_44 = 1;
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(56), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(58), 0f, 1))
						{
							iLocal_583 = 5;
						}
					}
					break;
				case 5:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						__LIB_1__::func_148(&uLocal_633);
						__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[1 /*17*/].f_13 = func_134(53);
						iLocal_582 = 1;
						iLocal_583 = 0;
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 2:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(62), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					func_228(3);
					iLocal_583 = 0;
					break;
			}
			break;
		case 3:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_663 = 1;
							__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_663 = 1;
							__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_663 = 1;
							__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 0:
							iLocal_663 = 1;
							__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
							iLocal_583 = 1;
							break;
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 1:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(61), 0f, 1))
						{
							iLocal_583 = 4;
						}
					}
					break;
				case 2:
					func_225(50);
					bLocal_666 = true;
					if (func_202(0f, 1, Global_35, 1))
					{
						if (func_243(uLocal_372[3], Global_35, func_134(63), 0f, 1))
						{
							iLocal_664 = 1;
							bLocal_660 = true;
							iLocal_583 = 3;
						}
					}
					break;
				case 3:
					if (func_202(-4f, 1, uLocal_372[3], 1))
					{
						func_228(3);
						iLocal_583 = 0;
					}
					break;
				case 5:
					iLocal_583 = 0;
					break;
			}
			break;
		case 4:
			switch (iLocal_583)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar1)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar2)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					switch (iVar3)
					{
						case 1:
							iLocal_583 = 2;
							break;
					}
					break;
				case 2:
					Local_17.f_44 = 1;
					bLocal_666 = true;
					func_225(30);
					func_251();
					if (func_202(-4f, 1, 0, 0))
					{
						iLocal_583 = 5;
						bLocal_660 = true;
					}
					break;
				case 5:
					break;
			}
			break;
		case 6:
			__LIB_3__::func_158(&(Local_527[0 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_527[1 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_527[2 /*17*/]), 1);
			break;
		case 5:
			__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_527[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_527[2 /*17*/]), 0, 0);
			break;
	}
}

void func_77()
{
	if (iLocal_701 != 0)
	{
		iLocal_701 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING"), uLocal_372[0], 0f, 50f, 50f, 15f, -1f, 180f, false, false, -1, -1);
	}
}

char* func_134(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE_DLP_V1_INITIAL_A";
				case 1:
					return "RE_DLP_V1_INITIAL_B";
				case 2:
					return "RE_DLP_V1_INITIAL_C";
				case 3:
					return "RE_DLP_V1_INITIAL_D";
				case 4:
					return "RE_DLP_V1_INITIAL_E";
				case 5:
					return "RE_DLP_V1_INITIAL_D";
				case 6:
					return "RE_DLP_V1_INITIAL_G";
				case 7:
					return "RE_DLP_V1_INITIAL_H";
				case 9:
					return "RE_DLP_V1_INITIAL_I";
				case 10:
					return "RE_DLP_V1_INITIAL_F";
				case 31:
					return "RE_DLP_V1_END_A";
				case 32:
					return "RE_DLP_V1_END_A";
				case 33:
					return "RE_DLP_V1_END_D";
				case 34:
					return "RE_DLP_V1_END_C";
				case 35:
					return "RE_DLP_V1_END_F";
				case 36:
					return "RE_DLP_V1_END_E";
				case 37:
					return "RE_DLP_V1_END_F";
				case 39:
					return "RE_DLP_V1_WARNING_B";
				case 40:
					return "RE_DLP_V1_WARNING_C";
				case 41:
					return "RE_DLP_V1_WARNING_D";
				case 42:
					return "RE_DLP_V1_WARNING_E";
				case 43:
					return "RE_DLP_V1_ATTACKED_A";
				case 44:
					return "RE_DLP_V1_ATTACKED_B";
				case 45:
					return "RE_DLP_V1_ATTACKED_C";
				case 46:
					return "RE_DLP_V1_ATTACKED_D";
				case 47:
					return "RE_DLP_V1_POS_PLAYER_A";
				case 48:
					return "RE_DLP_V1_POS_PLAYER_B";
				case 49:
					return "RE_DLP_V1_NEG_PLAYER_A";
				case 50:
					return "RE_DLP_V1_NEG_PLAYER_B";
				case 51:
					return "RE_DLP_V1_POS_PLAYER_C";
				case 52:
					return "RE_DLP_V1_POS_PLAYER_D";
				case 53:
					return "RE_DLP_V1_NEG_PLAYER_C";
				case 54:
					return "RE_DLP_V1_NEG_PLAYER_D";
				case 55:
					return "RE_DLP_V1_NEG_PLAYER_E";
				case 56:
					return "RE_DLP_V1_POS_PED_A";
				case 57:
					return "RE_DLP_V1_POS_PED_B";
				case 58:
					return "RE_DLP_V1_NEG_PED_A";
				case 59:
					return "RE_DLP_V1_NEG_PED_B";
				case 60:
					return "RE_DLP_V1_POS_PED_C";
				case 61:
					return "RE_DLP_V1_POS_PED_D";
				case 62:
					return "RE_DLP_V1_NEG_PED_C";
				case 63:
					return "RE_DLP_V1_NEG_PED_D";
				case 64:
					return "RE_DLP_V1_FOLLOWING_A";
				case 65:
					return "RE_DLP_V1_FOLLOWING_B";
				case 66:
					return "RE_DLP_V1_IN_THE_WAY_A";
				case 67:
					return "RE_DLP_V1_IN_THE_WAY_B";
				case 68:
					return "RE_DLP_V1_IN_THE_WAY_C";
				case 69:
					return "RE_DLP_V1_WARNING_DEFUSE";
				case 70:
					return "RE_DLP_V1_WARNING_ANTAGONIZE";
				case 71:
					return "SUPPORT_GENERAL";
				default:
					break;
			}
			break;
		case 1:
			switch (iLocal_15)
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return "RE_DLP_V2_INITIAL_A";
						case 1:
							return "RE_DLP_V2_INITIAL_B";
						case 2:
							return "RE_DLP_V2_INITIAL_C";
						case 3:
							return "RE_DLP_V2_INITIAL_D";
						case 4:
							return "RE_DLP_V2_INITIAL_E";
						case 5:
							return "RE_DLP_V2_INITIAL_F";
						case 6:
							return "RE_DLP_V2_INITIAL_G";
						case 7:
							return "RE_DLP_V2_INITIAL_H";
						case 9:
							return "RE_DLP_V2_INITIAL_I";
						case 10:
							return "RE_DLP_V2_INITIAL_J";
						case 11:
							return "RE_DLP_V2_INITIAL_J";
						case 12:
							return "RE_DLP_V2_INITIAL_L";
						case 13:
							return "RE_DLP_V2_INITIAL_N";
						case 14:
							return "RE_DLP_V2_INITIAL_N";
						case 15:
							return "RE_DLP_V2_INITIAL_L";
						case 16:
							return "RE_DLP_V2_INITIAL_P";
						case 18:
							return "RE_DLP_V2_INITIAL_P";
						case 19:
							return "RE_DLP_V2_INITIAL_R";
						case 20:
							return "RE_DLP_V2_INITIAL_O";
						case 21:
							return "RE_DLP_V2_INITIAL_S";
						case 22:
							return "RE_DLP_V2_INITIAL_Q";
						case 23:
							return "RE_DLP_V2_INITIAL_U";
						case 24:
							return "RE_DLP_V2_INITIAL_W";
						case 25:
							return "RE_DLP_V2_INITIAL_X";
						case 26:
							return "RE_DLP_V2_INITIAL_Z";
						case 27:
							return "RE_DLP_V2_INITIAL_Z";
						case 28:
							return "RE_DLP_V2_INITIAL_AA";
						case 29:
							return "RE_DLP_V2_INITIAL_ZB";
						case 38:
							return "RE_DLP_V2_WARNING_A";
						case 39:
							return "RE_DLP_V2_WARNING_B";
						case 40:
							return "RE_DLP_V2_WARNING_C";
						case 43:
							return "RE_DLP_V2_ATTACKED_A";
						case 44:
							return "RE_DLP_V2_ATTACKED_B";
						case 45:
							return "RE_DLP_V2_ATTACKED_A";
						case 46:
							return "RE_DLP_V2_ATTACKED_A";
						case 47:
							return "RE_DLP_V2_POS_PLAYER_A";
						case 48:
							return "RE_DLP_V2_POS_PLAYER_B";
						case 51:
							return "RE_DLP_V2_POS_PLAYER_C";
						case 49:
							return "RE_DLP_V2_NEG_PLAYER_A";
						case 50:
							return "RE_DLP_V2_NEG_PLAYER_B";
						case 53:
							return "RE_DLP_V2_NEG_PLAYER_C";
						case 56:
							return "RE_DLP_V2_POS_PED_A";
						case 57:
							return "RE_DLP_V2_POS_PED_B";
						case 58:
							return "RE_DLP_V2_NEG_PED_A";
						case 59:
							return "RE_DLP_V2_NEG_PED_B";
						case 64:
							return "RE_DLP_V2_FOLLOWING_A";
						case 65:
							return "RE_DLP_V2_FOLLOWING_B";
						case 66:
							return "RE_DLP_V2_IN_THE_WAY_A";
						case 67:
							return "RE_DLP_V2_IN_THE_WAY_B";
						case 68:
							return "RE_DLP_V2_IN_THE_WAY_C";
						case 69:
							return "RE_DLP_V2_WARNING_DEFUSE";
						case 70:
							return "RE_DLP_V2_WARNING_ANTAGONIZE";
						case 71:
							return "SUPPORT_GENERAL";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return "RE_DLP_V3_INITIAL_A";
						case 1:
							return "RE_DLP_V3_INITIAL_B";
						case 2:
							return "RE_DLP_V3_INITIAL_C";
						case 3:
							return "RE_DLP_V3_INITIAL_D";
						case 4:
							return "RE_DLP_V3_INITIAL_E";
						case 5:
							return "RE_DLP_V3_INITIAL_F";
						case 6:
							return "RE_DLP_V3_INITIAL_G";
						case 7:
							return "RE_DLP_V3_INITIAL_H";
						case 9:
							return "RE_DLP_V3_INITIAL_I";
						case 10:
							return "RE_DLP_V3_INITIAL_J";
						case 11:
							return "RE_DLP_V3_INITIAL_K";
						case 12:
							return "RE_DLP_V3_INITIAL_L";
						case 13:
							return "RE_DLP_V3_INITIAL_M";
						case 14:
							return "RE_DLP_V3_INITIAL_N";
						case 15:
							return "RE_DLP_V3_INITIAL_O";
						case 38:
							return "RE_DLP_V3_WARNING_A";
						case 39:
							return "RE_DLP_V3_WARNING_B";
						case 40:
							return "RE_DLP_V3_WARNING_C";
						case 43:
							return "RE_DLP_V3_ATTACKED_A";
						case 44:
							return "RE_DLP_V3_ATTACKED_B";
						case 45:
							return "RE_DLP_V3_ATTACKED_C";
						case 46:
							return "RE_DLP_V3_ATTACKED_D";
						case 47:
							return "RE_DLP_V3_POS_PLAYER_A";
						case 48:
							return "RE_DLP_V3_POS_PLAYER_B";
						case 51:
							return "RE_DLP_V3_POS_PLAYER_C";
						case 49:
							return "RE_DLP_V3_NEG_PLAYER_A";
						case 50:
							return "RE_DLP_V3_NEG_PLAYER_B";
						case 53:
							return "RE_DLP_V3_NEG_PLAYER_C";
						case 56:
							return "RE_DLP_V3_POS_PED_A";
						case 57:
							return "RE_DLP_V3_POS_PED_B";
						case 58:
							return "RE_DLP_V3_NEG_PED_A";
						case 59:
							return "RE_DLP_V3_NEG_PED_B";
						case 64:
							return "RE_DLP_V3_FOLLOWING_A";
						case 65:
							return "RE_DLP_V3_FOLLOWING_B";
						case 66:
							return "RE_DLP_V3_IN_THE_WAY_A";
						case 67:
							return "RE_DLP_V3_IN_THE_WAY_B";
						case 68:
							return "RE_DLP_V3_IN_THE_WAY_C";
						case 69:
							return "RE_DLP_V3_WARNING_DEFUSE";
						case 70:
							return "RE_DLP_V3_WARNING_ANTAGONIZE";
						case 71:
							return "SUPPORT_GENERAL";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return "RE_DLP_V4_INITIAL_A";
						case 1:
							return "RE_DLP_V4_INITIAL_B";
						case 2:
							return "RE_DLP_V4_INITIAL_C";
						case 3:
							return "RE_DLP_V4_INITIAL_D";
						case 4:
							return "RE_DLP_V4_INITIAL_E";
						case 5:
							return "RE_DLP_V4_INITIAL_F";
						case 6:
							return "RE_DLP_V4_INITIAL_G";
						case 7:
							return "RE_DLP_V4_INITIAL_H";
						case 8:
							return "RE_DLP_V4_INITIAL_H2";
						case 9:
							return "RE_DLP_V4_INITIAL_I";
						case 10:
							return "RE_DLP_V4_INITIAL_J";
						case 11:
							return "RE_DLP_V4_INITIAL_K";
						case 12:
							return "RE_DLP_V4_INITIAL_L";
						case 13:
							return "RE_DLP_V4_INITIAL_M";
						case 14:
							return "RE_DLP_V4_INITIAL_N";
						case 15:
							return "RE_DLP_V4_INITIAL_O";
						case 16:
							return "RE_DLP_V4_INITIAL_P";
						case 17:
							return "RE_DLP_V4_INITIAL_P2";
						case 18:
							return "RE_DLP_V4_INITIAL_Q";
						case 19:
							return "RE_DLP_V4_INITIAL_R";
						case 20:
							return "RE_DLP_V4_INITIAL_S";
						case 21:
							return "RE_DLP_V4_INITIAL_T";
						case 22:
							return "RE_DLP_V4_INITIAL_U";
						case 23:
							return "RE_DLP_V4_INITIAL_V";
						case 24:
							return "RE_DLP_V4_INITIAL_W";
						case 25:
							return "RE_DLP_V4_INITIAL_X";
						case 26:
							return "RE_DLP_V4_INITIAL_Y";
						case 27:
							return "RE_DLP_V4_INITIAL_Z";
						case 28:
							return "RE_DLP_V4_INITIAL_ZA";
						case 29:
							return "RE_DLP_V4_INITIAL_ZA";
						case 30:
							return "RE_DLP_V4_INITIAL_ZC";
						case 38:
							return "RE_DLP_V4_WARNING_A";
						case 39:
							return "RE_DLP_V4_WARNING_B";
						case 40:
							return "RE_DLP_V4_WARNING_C";
						case 43:
							return "RE_DLP_V4_ATTACKED_A";
						case 44:
							return "RE_DLP_V4_ATTACKED_B";
						case 45:
							return "RE_DLP_V4_ATTACKED_C";
						case 46:
							return "RE_DLP_V4_ATTACKED_D";
						case 47:
							return "RE_DLP_V4_POS_PLAYER_A";
						case 48:
							return "RE_DLP_V4_POS_PLAYER_B";
						case 51:
							return "RE_DLP_V4_POS_PLAYER_C";
						case 49:
							return "RE_DLP_V4_NEG_PLAYER_A";
						case 50:
							return "RE_DLP_V4_NEG_PLAYER_B";
						case 53:
							return "RE_DLP_V4_NEG_PLAYER_C";
						case 56:
							return "RE_DLP_V4_POS_PED_A";
						case 57:
							return "RE_DLP_V4_POS_PED_B";
						case 58:
							return "RE_DLP_V4_NEG_PED_A";
						case 59:
							return "RE_DLP_V4_NEG_PED_B";
						case 64:
							return "RE_DLP_V4_FOLLOWING_A";
						case 65:
							return "RE_DLP_V4_FOLLOWING_B";
						case 66:
							return "RE_DLP_V4_IN_THE_WAY_A";
						case 67:
							return "RE_DLP_V4_IN_THE_WAY_B";
						case 68:
							return "RE_DLP_V4_IN_THE_WAY_C";
						case 69:
							return "RE_DLP_V4_WARNING_DEFUSE";
						case 70:
							return "RE_DLP_V4_WARNING_ANTAGONIZE";
						case 71:
							return "SUPPORT_GENERAL";
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE_DLP_V5_INITIAL_A";
				case 1:
					return "RE_DLP_V5_INITIAL_B";
				case 2:
					return "RE_DLP_V5_INITIAL_C";
				case 3:
					return "RE_DLP_V5_INITIAL_D";
				case 4:
					return "RE_DLP_V5_INITIAL_E";
				case 5:
					return "RE_DLP_V5_INITIAL_F";
				case 6:
					return "RE_DLP_V5_INITIAL_C";
				case 7:
					return "RE_DLP_V5_INITIAL_H";
				case 9:
					return "RE_DLP_V5_INITIAL_H";
				case 10:
					return "RE_DLP_V5_INITIAL_J";
				case 11:
					return "RE_DLP_V5_INITIAL_K";
				case 12:
					return "RE_DLP_V5_INITIAL_L";
				case 13:
					return "RE_DLP_V5_INITIAL_M";
				case 14:
					return "RE_DLP_V5_INITIAL_N";
				case 15:
					return "RE_DLP_V5_INITIAL_O";
				case 31:
					return "RE_DLP_V5_END_A";
				case 32:
					return "RE_DLP_V5_END_B";
				case 33:
					return "RE_DLP_V5_END_C";
				case 34:
					return "RE_DLP_V5_END_D";
				case 35:
					return "RE_DLP_V5_END_E";
				case 36:
					return "RE_DLP_V5_END_F";
				case 38:
					return "RE_DLP_V5_WARNING_A";
				case 39:
					return "RE_DLP_V5_WARNING_B";
				case 40:
					return "RE_DLP_V5_WARNING_C";
				case 41:
					return "RE_DLP_V5_WARNING_D";
				case 42:
					return "RE_DLP_V5_WARNING_E";
				case 43:
					return "RE_DLP_V5_ATTACKED_A";
				case 44:
					return "RE_DLP_V5_ATTACKED_B";
				case 45:
					return "RE_DLP_V5_ATTACKED_C";
				case 46:
					return "RE_DLP_V5_ATTACKED_D";
				case 47:
					return "RE_DLP_V5_POS_PLAYER_A";
				case 48:
					return "RE_DLP_V5_POS_PLAYER_B";
				case 49:
					return "RE_DLP_V5_NEG_PLAYER_A";
				case 50:
					return "RE_DLP_V5_NEG_PLAYER_B";
				case 51:
					return "RE_DLP_V5_POS_PLAYER_C";
				case 52:
					return "RE_DLP_V5_POS_PLAYER_D";
				case 53:
					return "RE_DLP_V5_NEG_PLAYER_C";
				case 54:
					return "RE_DLP_V5_NEG_PLAYER_D";
				case 55:
					return "RE_DLP_V5_NEG_PLAYER_E";
				case 56:
					return "RE_DLP_V5_POS_PED_A";
				case 57:
					return "RE_DLP_V5_POS_PED_B";
				case 58:
					return "RE_DLP_V5_NEG_PED_A";
				case 59:
					return "RE_DLP_V5_NEG_PED_B";
				case 60:
					return "RE_DLP_V5_POS_PED_C";
				case 61:
					return "RE_DLP_V5_POS_PED_D";
				case 62:
					return "RE_DLP_V5_NEG_PED_C";
				case 63:
					return "RE_DLP_V5_NEG_PED_D";
				case 64:
					return "RE_DLP_V5_FOLLOWING_A";
				case 65:
					return "RE_DLP_V5_FOLLOWING_B";
				case 66:
					return "RE_DLP_V5_IN_THE_WAY_A";
				case 67:
					return "RE_DLP_V5_IN_THE_WAY_B";
				case 68:
					return "RE_DLP_V5_IN_THE_WAY_C";
				case 69:
					return "RE_DLP_V5_WARNING_DEFUSE";
				case 70:
					return "RE_DLP_V5_WARNING_ANTAGONIZE";
				case 71:
					return "SUPPORT_GENERAL";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_191(int iParam0)
{
	iLocal_579 = iParam0;
}

int func_192()
{
	if ((__LIB_4__::func_299(&uLocal_372, &(Local_17.f_5), &iLocal_601, &uLocal_642, 0, 4, 1) || func_378()) || func_379())
	{
		Local_17.f_46 = 1;
		func_191(3);
		return 1;
	}
	return 0;
}

void func_193(int iParam0)
{
	float fVar0;
	float fVar1;
	fVar1 = 1f;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
		if (fVar0 == 0f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 1.5f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 2f;
		}
		else
		{
			fVar1 = 3f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
		if (fVar0 == 0f)
		{
			fVar1 = 2f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 2f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 2.5f;
		}
		else
		{
			fVar1 = 4f;
		}
	}
	if (!__LIB_0__::func_75(&uLocal_605) && ((((ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[1], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[2], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[3], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[4], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)))
	{
		__LIB_1__::func_148(&uLocal_605);
		bLocal_659 = true;
	}
	if (__LIB_0__::func_264(&uLocal_605) >= fVar1)
	{
		if ((((((ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[1], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[2], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[3], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[4], true, false), IntToFloat(iParam0), IntToFloat(iParam0), 2f, false, true, 0)) && bLocal_659 == 1) && func_380())
		{
			if (iLocal_654 == 0)
			{
			}
			iLocal_654 = 1;
			func_225(30);
		}
		else
		{
			if (iLocal_654 == 1)
			{
			}
			iLocal_654 = 0;
			bLocal_659 = false;
			__LIB_0__::func_37(&uLocal_605);
		}
	}
}

void func_194()
{
	switch (iLocal_597)
	{
		case 0:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_372[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 1.75f, 1, -1f, 0);
			}
			else
			{
				TASK::_0xBAAB791AA72C2821(uLocal_372[0], 1.75f);
			}
			if (__LIB_2__::func_118(uLocal_372[0], 1, 1) <= 50f)
			{
				iLocal_597 = 1;
			}
			break;
		case 1:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_372[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 2.001f, 1, -1f, 0);
			}
			else
			{
				TASK::_0xBAAB791AA72C2821(uLocal_372[0], 2.001f);
			}
			break;
	}
}

bool func_195()
{
	switch (iLocal_587)
	{
		case 0:
			if (bLocal_666 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), vLocal_674, true) <= fLocal_653)
				{
					iLocal_587 = 1;
				}
			}
			break;
		case 1:
			if ((ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 30f, 30f, 2f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[4], true, false), 30f, 30f, 2f, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_372[2], true, false), 30f, 30f, 2f, false, true, 0))
			{
				if (!func_381() && func_380())
				{
					iLocal_587 = 2;
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_196()
{
	func_225(70);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_372[0], 1.5f);
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 1.5f, 1, -1f, 0);
	switch (iLocal_644)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				bLocal_660 = true;
				iLocal_582 = 5;
				__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_527[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_478(uLocal_372[1], Global_35, func_134(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_644++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], Global_35, func_134(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_644++;
				iLocal_664 = 1;
			}
			break;
		case 2:
			func_191(3);
			iLocal_644++;
			break;
	}
}

void func_199()
{
	fLocal_653 = (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_17.f_51, vLocal_674, true) / 2f);
}

void func_200()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (__LIB_2__::func_118(uLocal_372[0], 1, 1) <= 100f && func_202(-4f, 1, uLocal_372[0], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 1:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 2:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 3:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 4:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 5:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[1], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 6:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 7:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 8:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 9:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[0], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
	}
}

void func_201()
{
	if (iLocal_661 == 1)
	{
		if (__LIB_0__::func_264(&uLocal_611) >= 7f || !__LIB_0__::func_75(&uLocal_611))
		{
			__LIB_1__::func_148(&uLocal_611);
			func_384();
			switch (iLocal_14)
			{
				case 0:
				case 2:
					if (iLocal_670 == 0)
					{
						if (bLocal_662)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
							Local_17.f_44 = 1;
							__LIB_3__::func_158(&(Local_527[0 /*17*/]), 0);
							__LIB_3__::func_158(&(Local_527[1 /*17*/]), 0);
							__LIB_2__::func_411(&(Local_527[0 /*17*/]), 1, 0);
							__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
							__LIB_2__::func_360(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
							__LIB_2__::func_360(&(Local_527[1 /*17*/]), "INTERACT_INSULT");
							Local_527[0 /*17*/].f_13 = func_134(69);
							Local_527[1 /*17*/].f_13 = func_134(70);
							iLocal_582 = 3;
							iLocal_583 = 0;
							iLocal_670 = 1;
						}
					}
					break;
			}
		}
	}
}

bool func_202(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!func_385(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_2__::func_139(fParam0))
	{
		return false;
	}
	return true;
}

void func_203()
{
	func_225(50);
	switch (iLocal_647)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				__LIB_1__::func_148(&uLocal_633);
				Local_17.f_44 = 1;
				__LIB_2__::func_360(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
				__LIB_3__::func_158(&(Local_527[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_527[1 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_527[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
				__LIB_2__::func_360(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
				__LIB_2__::func_360(&(Local_527[1 /*17*/]), "INTERACT_INSULT");
				Local_527[0 /*17*/].f_13 = func_134(69);
				Local_527[1 /*17*/].f_13 = func_134(70);
				iLocal_582 = 3;
				iLocal_583 = 0;
				func_387(uLocal_372[0]);
				__LIB_2__::func_478(uLocal_372[3], Global_35, func_134(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_647++;
			}
			break;
		case 1:
			if (!__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_372[3], &(Local_421[3 /*21*/])) || func_202(0f, 1, 0, 0))
			{
				if (func_202(-3f, 1, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_633);
					func_387(uLocal_372[0]);
					TASK::WAYPOINT_PLAYBACK_START_AIMING_AT_PED(uLocal_372[3], Global_35, 1, -1082130432 /* Float: -1f */);
					__LIB_2__::func_478(uLocal_372[3], Global_35, func_134(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (iLocal_663 == 0)
					{
						__LIB_2__::func_360(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
						__LIB_3__::func_158(&(Local_527[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_527[1 /*17*/]), 0);
						__LIB_2__::func_411(&(Local_527[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[0 /*17*/].f_13 = func_134(52);
						Local_527[1 /*17*/].f_13 = func_134(54);
						iLocal_582 = 3;
					}
					iLocal_647++;
				}
			}
			break;
		case 2:
			if (func_202(-4f, 1, uLocal_372[3], 1) && func_202(-1f, 1, 0, 0))
			{
				func_191(3);
				iLocal_647++;
			}
			break;
	}
}

void func_205()
{
	switch (Local_17.f_51.f_4)
	{
		case 15:
		case 16:
		case 20:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2320.43f, -3089.87f, -6.34f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_PEE"), -2321.85f, -3096.19f, -7.97f, -145f, 20000, true, false, 0, -1f, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), -2319.07f, -3093.44f, -7.21f, -27.89f, 30000, true, false, 0, -1f, false);
			TASK::TASK_PAUSE(0, 200);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2310.82f, -3084.48f, -4.9f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2312.19f, -3086.96f, -5.38f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2314.98f, -3084.3f, -5.1f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			break;
		case 14:
		case 18:
		case 19:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2754.68f, -2366.8f, 43.12f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_PEE"), -2752.66f, -2361.89f, 43.38f, 24.65f, 20000, true, false, 0, -1f, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, joaat("WORLD_HUMAN_WAITING_IMPATIENT"), -2753.99f, -2364.96f, 43.13f, -112.44f, 30000, true, false, 0, -1f, false);
			TASK::TASK_PAUSE(0, 200);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2739.35f, -2360.13f, 44.11f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2737.8f, -2361.36f, 44.11f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -2735.92f, -2362.86f, 44.11f, 1.5f, -1, 0.25f, 1048580, 40000f);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			break;
	}
}

void func_207()
{
	var uVar0[3];
	int iVar4;
	uVar0[0] = uLocal_372[1];
	uVar0[1] = uLocal_372[2];
	uVar0[2] = uLocal_372[3];
	iVar4 = 1;
	iVar4 = 0;
	while (iVar4 < 3)
	{
		if (iLocal_652 < 4)
		{
			if (!PED::IS_PED_ON_MOUNT(uVar0[iVar4]))
			{
				if (!__LIB_0__::func_163(uVar0[iVar4], -76381094))
				{
					TASK::_TASK_USE_SCENARIO_POINT(uVar0[iVar4], uLocal_691[iLocal_652], 0, 58000, true, false, 0, false, -1f, false);
					iLocal_652++;
				}
			}
		}
		iVar4++;
	}
}

bool func_208()
{
	int iVar0;
	vector3 vVar1;
	if (PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		vLocal_671 = { 0f, 0f, 0f };
	}
	else
	{
		vLocal_671 = { 2f, 2f, 2f };
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
		{
			vVar1 = { ENTITY::GET_ENTITY_COORDS(uLocal_372[iVar0], true, false) };
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, Global_36, true) <= 15f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[iVar0], Global_35, 17))
			{
				return true;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vVar1, vLocal_671, false, true, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_209()
{
	switch (iLocal_646)
	{
		case 0:
			if (func_202(-4f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(32), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[2], func_134(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 2:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[1], func_134(34), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 3:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[2], func_134(35), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 4:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(36), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
	}
}

void func_210()
{
	func_225(50);
	switch (iLocal_648)
	{
		case 0:
			if (func_202(-4f, 1, uLocal_372[0], 1) && func_202(0f, 1, Global_35, 1))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				__LIB_2__::func_478(uLocal_372[0], Global_35, func_134(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_660 = true;
				iLocal_648++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, uLocal_372[0], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], Global_35, func_134(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_648++;
			}
			break;
		case 2:
			if (func_202(-6f, 1, 0, 0))
			{
				iLocal_664 = 1;
				func_191(3);
				iLocal_648++;
			}
			break;
	}
}

void func_211()
{
	switch (iLocal_588[0])
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[0 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[0]));
			__LIB_1__::func_148(&(vLocal_617[0 /*3*/]));
			__LIB_2__::func_272(uLocal_372[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			iLocal_588[0] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_617[0 /*3*/])) >= 0.8f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[0], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[0], Global_35, 3, 2, 1000f, 1, 0, 0, 0);
				}
				__LIB_3__::func_673(uLocal_372[0], Global_35, &uLocal_384, -1, 30);
				__LIB_1__::func_148(&(vLocal_617[0 /*3*/]));
				iLocal_588[0] = 2;
			}
			break;
		case 2:
			if (!TASK::_0x916B8E075ABC8B4E(uLocal_372[0], 0) || __LIB_0__::func_264(&(vLocal_617[0 /*3*/])) >= 1f)
			{
				PED::_0x802092B07E3B1EEA(uLocal_372[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[0] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			iLocal_588[0] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[1])
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[1 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[1]));
			__LIB_1__::func_148(&(vLocal_617[1 /*3*/]));
			__LIB_2__::func_272(uLocal_372[1], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			iLocal_588[1] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_617[1 /*3*/])) >= 0.3f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[1], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[1], Global_35, 3, 2, 1500f, 1, 0, 0, 0);
				}
				__LIB_3__::func_673(uLocal_372[1], Global_35, &uLocal_384, -1, 30);
				__LIB_1__::func_148(&(vLocal_617[1 /*3*/]));
				iLocal_588[1] = 2;
			}
			break;
		case 2:
			if (!TASK::_0x916B8E075ABC8B4E(uLocal_372[1], 0) || __LIB_0__::func_264(&(vLocal_617[1 /*3*/])) >= 1.5f)
			{
				PED::_0x802092B07E3B1EEA(uLocal_372[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[1] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			iLocal_588[1] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[2])
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[2 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[2]));
			PED::_0x8ACC0506743A8A5C(uLocal_372[2], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			__LIB_2__::func_272(uLocal_372[2], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_1__::func_148(&(vLocal_617[2 /*3*/]));
			iLocal_588[2] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_617[2 /*3*/])) >= 0.5f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[2], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[2], Global_35, 3, 2, 2000f, 1, 0, 0, 0);
				}
				__LIB_3__::func_673(uLocal_372[2], Global_35, &uLocal_384, -1, 30);
				__LIB_1__::func_148(&(vLocal_617[2 /*3*/]));
				iLocal_588[2] = 2;
			}
			break;
		case 2:
			if (!TASK::_0x916B8E075ABC8B4E(uLocal_372[2], 0) || __LIB_0__::func_264(&(vLocal_617[2 /*3*/])) >= 2f)
			{
				PED::_0x802092B07E3B1EEA(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[2] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 3);
			TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			iLocal_588[2] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[3])
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[3 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[3]));
			PED::_0x8ACC0506743A8A5C(uLocal_372[3], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			__LIB_2__::func_272(uLocal_372[3], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_1__::func_148(&(vLocal_617[3 /*3*/]));
			iLocal_588[3] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_617[3 /*3*/])) >= 0f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[3], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[3], Global_35, 3, 2, 2500f, 1, 0, 0, 0);
				}
				__LIB_3__::func_673(uLocal_372[3], Global_35, &uLocal_384, -1, 30);
				__LIB_1__::func_148(&(vLocal_617[3 /*3*/]));
				iLocal_588[3] = 2;
			}
			break;
		case 2:
			if (!TASK::_0x916B8E075ABC8B4E(uLocal_372[3], 0) || __LIB_0__::func_264(&(vLocal_617[3 /*3*/])) >= 2.5f)
			{
				PED::_0x802092B07E3B1EEA(uLocal_372[3], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[3] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 3);
			TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			iLocal_588[3] = 4;
			break;
		case 4:
			break;
	}
}

void func_212()
{
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
	TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
	TASK::TASK_MOUNT_ANIMAL(0, Local_211[0 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
	TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
	TASK::TASK_MOUNT_ANIMAL(0, Local_211[1 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
	TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], 0.4f, 0.4f);
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
	TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
	TASK::TASK_MOUNT_ANIMAL(0, Local_211[2 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
	TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], 0.8f, 0.8f);
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
	TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
	TASK::TASK_MOUNT_ANIMAL(0, Local_211[3 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
	TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], 1.2f, 1.2f);
	TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
}

void func_213()
{
	int iVar0;
	if (iLocal_664 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_372[iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
			{
				__LIB_3__::func_453(uLocal_372[iVar0], 0, &(Local_17.f_5), &iLocal_601, 0, 0);
				if (PED::_IS_PED_HOGTIED(uLocal_372[iVar0]) || PED::_IS_PED_LASSOED(uLocal_372[iVar0]))
				{
					if (iLocal_655 == 0)
					{
						iLocal_655 = 1;
						iLocal_649 = 1;
					}
				}
				if (iLocal_601 == 8)
				{
					if (iLocal_656 == 0)
					{
						iLocal_656 = 1;
						iLocal_649 = 3;
					}
				}
				if ((((((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 0) || iLocal_601 == 1) || iLocal_601 == 2) || iLocal_601 == 2048) || iLocal_601 == 1024) || iLocal_601 == 16) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_372[iVar0], Global_35, 1, 1))
				{
					if (iLocal_657 == 0)
					{
						iLocal_657 = 1;
						iLocal_649 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uLocal_372[iVar0], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uLocal_372[iVar0])
				{
					if (iLocal_658 == 0)
					{
						iLocal_658 = 1;
						iLocal_649 = 2;
					}
				}
				switch (iLocal_649)
				{
					case 0:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(43), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 1:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(44), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 2:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(45), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 3:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(46), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_214()
{
	int iVar0;
	int iVar1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) < 2f)
		{
			return;
		}
	}
	else
	{
		return;
	}
	switch (iLocal_15)
	{
		case 0:
			iVar0 = 3;
			iVar1 = 4;
			break;
		case 1:
			iVar0 = 2;
			iVar1 = 4;
			break;
		case 2:
			iVar0 = 4;
			iVar1 = 2;
			break;
	}
	switch (iLocal_680)
	{
		case 0:
			if (func_202(0f, 1, uLocal_372[iVar0], 1))
			{
				__LIB_2__::func_478(uLocal_372[iVar0], Global_35, "CALLOUT_GET_FLEEING_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_680++;
				__LIB_1__::func_148(&uLocal_681);
				iLocal_684 = MISC::GET_RANDOM_INT_IN_RANGE(8, 15);
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_681) > IntToFloat(iLocal_684))
			{
				iLocal_680++;
			}
			break;
		case 2:
			if (func_202(0f, 1, uLocal_372[iVar1], 1))
			{
				__LIB_2__::func_478(uLocal_372[iVar1], Global_35, "CALLOUT_GET_FLEEING_MALE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_680++;
			}
			break;
	}
}

void func_216()
{
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[0], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[0], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[1], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[1], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[2], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[2], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[3], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[3], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_372[4], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(uLocal_372[4], Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, -1.5f);
	}
}

bool func_218()
{
	if (((((PED::IS_PED_DEAD_OR_DYING(uLocal_372[0], true) || PED::_IS_PED_HOGTIED(uLocal_372[0])) && (PED::IS_PED_DEAD_OR_DYING(uLocal_372[1], true) || PED::_IS_PED_HOGTIED(uLocal_372[1]))) && (PED::IS_PED_DEAD_OR_DYING(uLocal_372[2], true) || PED::_IS_PED_HOGTIED(uLocal_372[2]))) && (PED::IS_PED_DEAD_OR_DYING(uLocal_372[3], true) || PED::_IS_PED_HOGTIED(uLocal_372[3]))) && (PED::IS_PED_DEAD_OR_DYING(uLocal_372[4], true) || PED::_IS_PED_HOGTIED(uLocal_372[4])))
	{
		return true;
	}
	return false;
}

void func_219(int iParam0)
{
	iLocal_580 = iParam0;
}

int func_220()
{
	if ((__LIB_4__::func_299(&uLocal_372, &(Local_17.f_5), &iLocal_601, &uLocal_642, 0, 4, 1) || func_378()) || func_379())
	{
		if (iLocal_601 != 8192)
		{
			Local_17.f_46 = 1;
			func_219(3);
			return 1;
		}
	}
	return 0;
}

void func_221()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (__LIB_2__::func_118(uLocal_372[0], 1, 1) <= 100f && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 1:
			if (func_202(0f, 1, uLocal_372[0], 1) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 2:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[1], 1);
				func_383();
				iLocal_645++;
			}
			break;
		case 3:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 4:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 5:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 6:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 7:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 8:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[3], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 9:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[3], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 10:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[4], func_134(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 11:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[4], func_134(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 12:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[4], func_134(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 13:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[4], func_134(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 14:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[4], func_134(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 15:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 16:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 17:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[1], func_134(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 18:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[4], func_134(20), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 19:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[3], func_134(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 20:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[2], func_134(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 21:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[3], func_134(23), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 22:
			if (func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[1], func_134(24), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 23:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(25), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 24:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[1], func_134(26), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 25:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(27), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 26:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(28), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 27:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(29), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
	}
}

void func_222()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (__LIB_2__::func_118(uLocal_372[0], 1, 1) <= 100f && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 1:
			if ((func_202(0f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 2:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[1], 1);
				func_383();
				iLocal_645++;
			}
			break;
		case 3:
			if ((func_202(-4f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 4:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 5:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 6:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 7:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 8:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[3], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 9:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[3], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 10:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[4], func_134(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 11:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[4], func_134(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 12:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[4], func_134(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 13:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[4], func_134(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 14:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[4], func_134(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
	}
}

void func_223()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (__LIB_2__::func_118(uLocal_372[0], 1, 1) <= 80f && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[0], 1);
				iLocal_645++;
			}
			break;
		case 1:
			if (func_202(0f, 1, uLocal_372[0], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[1], 1);
				iLocal_645++;
			}
			break;
		case 2:
			if (func_202(0f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_372[1], 1);
				iLocal_645++;
			}
			break;
		case 3:
			if (func_202(-3f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 4:
			if (func_202(-5f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 5:
			if (func_202(-1f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 6:
			if (func_202(-2f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 7:
			if (func_202(-2f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 8:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 9:
			if (func_202(-3f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 10:
			if (func_202(-2f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 11:
			if (func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 12:
			if (func_202(-5f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 13:
			if (func_202(-2f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 14:
			if (func_202(-3f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 15:
			if (func_202(-1f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 16:
			if (func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 17:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(17), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 18:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 19:
			if (func_202(-1f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 20:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(20), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 21:
			if (func_202(-2f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 22:
			if (func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 23:
			if (func_202(-5f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(23), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 24:
			if (func_202(-2f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(24), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 25:
			if (func_202(-1f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(25), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 26:
			if (func_202(-1f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(26), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 27:
			if (func_202(-1f, 1, 0, 0) && func_202(0f, 1, uLocal_372[0], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(27), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 28:
			if (func_202(-1f, 1, 0, 0) && func_202(0f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(28), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 29:
			if (func_202(-1f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[0], func_134(29), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
		case 30:
			if (func_202(-1f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(30), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_645++;
			}
			break;
	}
}

void func_224()
{
	func_225(60);
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 1.5f, 1, -1f, 0);
	PED::SET_PED_RESET_FLAG(uLocal_372[0], 27, true);
	PED::SET_PED_RESET_FLAG(uLocal_372[1], 27, true);
	PED::SET_PED_RESET_FLAG(uLocal_372[2], 27, true);
	PED::SET_PED_RESET_FLAG(uLocal_372[3], 27, true);
	PED::SET_PED_RESET_FLAG(uLocal_372[4], 27, true);
	switch (iLocal_647)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
			Local_17.f_44 = 1;
			bLocal_660 = true;
			__LIB_3__::func_158(&(Local_527[0 /*17*/]), 0);
			__LIB_3__::func_158(&(Local_527[1 /*17*/]), 0);
			switch (iLocal_15)
			{
				case 1:
					__LIB_2__::func_411(&(Local_527[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_527[1 /*17*/]), 0, 0);
					break;
				default:
					__LIB_2__::func_411(&(Local_527[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
					break;
			}
			__LIB_2__::func_360(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
			__LIB_2__::func_360(&(Local_527[1 /*17*/]), "INTERACT_INSULT");
			Local_527[0 /*17*/].f_13 = func_134(69);
			Local_527[1 /*17*/].f_13 = func_134(70);
			iLocal_582 = 3;
			iLocal_583 = 0;
			func_393();
			iLocal_647++;
			break;
		case 1:
			func_393();
			if (iLocal_583 == 0)
			{
				__LIB_2__::func_504(uLocal_372[1], 500);
				__LIB_2__::func_478(uLocal_372[1], Global_35, func_134(38), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_647++;
				__LIB_1__::func_148(&uLocal_636);
			}
			break;
		case 2:
			func_393();
			if (func_202(-4f, 1, uLocal_372[1], 1))
			{
				if (__LIB_0__::func_264(&uLocal_636) > 2f)
				{
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[0]))
					{
						iLocal_378[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[0]);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[1]))
					{
						iLocal_378[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[1]);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[2]))
					{
						iLocal_378[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[2]);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[3]))
					{
						iLocal_378[3] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[3]);
					}
					if (!MAP::DOES_BLIP_EXIST(iLocal_378[4]))
					{
						iLocal_378[4] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_372[4]);
					}
					__LIB_2__::func_478(uLocal_372[1], Global_35, func_134(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_614);
					switch (iLocal_15)
					{
						case 1:
							__LIB_2__::func_411(&(Local_527[0 /*17*/]), 1, 0);
							__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
							break;
					}
					iLocal_647++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_636);
			}
			break;
		case 3:
			func_393();
			if (func_202(-4f, 1, Global_35, 1) && func_202(-4f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], Global_35, func_134(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_614);
				iLocal_647++;
			}
			break;
		case 4:
			func_393();
			func_214();
			if ((((__LIB_2__::func_118(uLocal_372[1], 1, 1) <= 20f || __LIB_2__::func_118(uLocal_372[0], 1, 1) <= 20f) || __LIB_2__::func_118(uLocal_372[2], 1, 1) <= 20f) || __LIB_2__::func_118(uLocal_372[3], 1, 1) <= 20f) || __LIB_2__::func_118(uLocal_372[4], 1, 1) <= 20f)
			{
				if ((func_202(-4f, 1, Global_35, 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, uLocal_372[0], 1))
				{
					if (__LIB_0__::func_265(&uLocal_614) >= 7f || (bLocal_666 && __LIB_0__::func_265(&uLocal_614) >= 2f))
					{
						__LIB_2__::func_214(uLocal_372[3], Global_35, func_134(71), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 0, 1, 1744022339, 1, 1, 0, 0);
						iLocal_664 = 1;
						__LIB_1__::func_148(&uLocal_614);
						iLocal_647++;
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_614);
				}
			}
			break;
		case 5:
			func_219(3);
			iLocal_647++;
			break;
	}
}

void func_225(int iParam0)
{
	__LIB_3__::func_673(uLocal_372[0], Global_35, &uLocal_384, -1, iParam0);
	__LIB_3__::func_673(uLocal_372[1], Global_35, &uLocal_384, -1, iParam0);
	__LIB_3__::func_673(uLocal_372[2], Global_35, &uLocal_384, -1, iParam0);
	__LIB_3__::func_673(uLocal_372[3], Global_35, &uLocal_384, -1, iParam0);
	__LIB_3__::func_673(uLocal_372[4], Global_35, &uLocal_384, -1, iParam0);
}

void func_226()
{
	int iVar0;
	if (iLocal_664 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_372[iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
			{
				__LIB_3__::func_453(uLocal_372[iVar0], 0, &(Local_17.f_5), &iLocal_601, 0, 0);
				if (PED::_IS_PED_HOGTIED(uLocal_372[iVar0]) || PED::_IS_PED_LASSOED(uLocal_372[iVar0]))
				{
					if (iLocal_655 == 0)
					{
						iLocal_655 = 1;
						iLocal_649 = 1;
					}
				}
				if (iLocal_601 == 8)
				{
					if (iLocal_656 == 0)
					{
						iLocal_656 = 1;
						iLocal_649 = 3;
					}
				}
				if ((((((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 0) || iLocal_601 == 1) || iLocal_601 == 2) || iLocal_601 == 2048) || iLocal_601 == 1024) || iLocal_601 == 16) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_372[iVar0], Global_35, 1, 1))
				{
					if (iLocal_657 == 0)
					{
						iLocal_657 = 1;
						iLocal_649 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uLocal_372[iVar0], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uLocal_372[iVar0])
				{
					if (iLocal_658 == 0)
					{
						iLocal_658 = 1;
						iLocal_649 = 2;
					}
				}
				switch (iLocal_649)
				{
					case 0:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(43), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 1:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(44), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 2:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(45), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 3:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(46), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
				}
			}
			iVar0++;
		}
	}
}

void func_227(int iParam0, int iParam1, float fParam2)
{
	TASK::CLEAR_SEQUENCE_TASK(&iParam1);
	TASK::OPEN_SEQUENCE_TASK(&iParam1);
	if ((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 1) || iLocal_601 == 16) || iLocal_601 == 2)
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 16793600, 16);
	}
	else
	{
		TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
	}
	TASK::CLOSE_SEQUENCE_TASK(iParam1);
	TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, iParam1, fParam2, fParam2);
	TASK::CLEAR_SEQUENCE_TASK(&iParam1);
	PED::_0x712B2C2B2471B493(iParam0, joaat("DISABLED"));
}

void func_228(int iParam0)
{
	iLocal_581 = iParam0;
}

int func_229()
{
	if ((__LIB_4__::func_299(&uLocal_372, &(Local_17.f_5), &iLocal_601, &uLocal_642, 0, 4, 1) || func_378()) || func_379())
	{
		Local_17.f_46 = 1;
		func_228(3);
		return 1;
	}
	return 0;
}

void func_230()
{
	func_225(70);
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_372[0], 1.5f);
	TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_372[0], 1.5f, 1, -1f, 0);
	switch (iLocal_644)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				bLocal_660 = true;
				iLocal_582 = 5;
				__LIB_2__::func_360(&(Local_527[0 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_527[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_478(uLocal_372[1], Global_35, func_134(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_644++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], Global_35, func_134(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_644++;
				iLocal_664 = 1;
			}
			break;
		case 2:
			func_228(3);
			iLocal_644++;
			break;
	}
}

void func_231()
{
	if (iLocal_583 == 1 || iLocal_583 == 2)
	{
		return;
	}
	switch (iLocal_645)
	{
		case 0:
			if (__LIB_2__::func_118(uLocal_372[0], 1, 1) <= 100f && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 1:
			if ((func_202(0f, 1, uLocal_372[0], 1) && func_202(-4f, 1, uLocal_372[1], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 2:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 3:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[1], func_134(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 4:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[2], func_134(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 5:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[2], func_134(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 6:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 7:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[2], func_134(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 8:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[3], func_134(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 9:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[3], func_134(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 10:
			if (func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[4], func_134(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 11:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[4], func_134(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 12:
			if (func_202(-4f, 1, uLocal_372[0], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[4], func_134(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 13:
			if ((func_202(-4f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[0], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[4], func_134(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
		case 14:
			if ((func_202(-4f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[2], 1)) && func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[4], func_134(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				func_383();
				iLocal_645++;
			}
			break;
	}
}

void func_232()
{
	func_225(50);
	switch (iLocal_647)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				__LIB_2__::func_360(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
				__LIB_2__::func_478(uLocal_372[3], Global_35, func_134(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_3__::func_158(&(Local_527[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_527[1 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_527[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
				__LIB_2__::func_360(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
				__LIB_2__::func_360(&(Local_527[1 /*17*/]), "INTERACT_INSULT");
				Local_527[0 /*17*/].f_13 = func_134(69);
				Local_527[1 /*17*/].f_13 = func_134(70);
				iLocal_582 = 3;
				iLocal_583 = 0;
				__LIB_1__::func_148(&uLocal_633);
				func_387(uLocal_372[0]);
				func_387(uLocal_372[1]);
				iLocal_647++;
			}
			break;
		case 1:
			if (!__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_372[3], &(Local_421[3 /*21*/])) || func_202(0f, 1, 0, 0))
			{
				if ((func_202(-4f, 1, uLocal_372[3], 1) && func_202(-4f, 1, Global_35, 1)) && func_202(-2f, 1, 0, 0))
				{
					func_387(uLocal_372[0]);
					func_387(uLocal_372[1]);
					TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_372[3], uLocal_372[0], Global_35, 0, -1, 0.5f, 2f, 0);
					TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_372[2], uLocal_372[0], Global_35, 0, -1, 0.5f, 2f, 0);
					iLocal_667 = 1;
					__LIB_1__::func_148(&uLocal_633);
					__LIB_2__::func_478(uLocal_372[3], Global_35, func_134(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (iLocal_663 == 0)
					{
						__LIB_2__::func_360(&(Local_527[0 /*17*/]), "INTERACT_DEFUSE");
						__LIB_3__::func_158(&(Local_527[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_527[1 /*17*/]), 0);
						__LIB_2__::func_411(&(Local_527[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_527[1 /*17*/]), 1, 0);
						Local_527[0 /*17*/].f_13 = func_134(52);
						Local_527[1 /*17*/].f_13 = func_134(54);
						iLocal_582 = 3;
					}
					iLocal_647++;
				}
			}
			break;
		case 2:
			if (func_202(-4f, 1, uLocal_372[3], 1) && func_202(-1f, 1, 0, 0))
			{
				func_228(3);
				iLocal_647++;
			}
			break;
	}
}

void func_234()
{
	if (bLocal_660)
	{
		return;
	}
	switch (iLocal_646)
	{
		case 0:
			if (func_202(0f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(32), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 2:
			if (func_202(-4f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[1], func_134(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 3:
			if (func_202(0f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[2], uLocal_372[1], func_134(34), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 4:
			if (func_202(0f, 1, uLocal_372[2], 1) && func_202(-4f, 1, uLocal_372[1], 1))
			{
				__LIB_2__::func_478(uLocal_372[1], uLocal_372[2], func_134(35), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 5:
			if (func_202(0f, 1, uLocal_372[1], 1) && func_202(-4f, 1, uLocal_372[0], 1))
			{
				__LIB_2__::func_478(uLocal_372[0], uLocal_372[1], func_134(36), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_646++;
			}
			break;
	}
}

void func_235()
{
	switch (iLocal_648)
	{
		case 0:
			if (func_202(-4f, 1, 0, 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("REDLP_START");
				Local_17.f_44 = 1;
				__LIB_2__::func_478(uLocal_372[3], Global_35, func_134(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_660 = true;
				iLocal_648++;
			}
			break;
		case 1:
			if (func_202(-4f, 1, 0, 0))
			{
				__LIB_2__::func_478(uLocal_372[3], Global_35, func_134(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_664 = 1;
				iLocal_648++;
			}
			break;
		case 2:
			if (func_202(-6f, 1, 0, 0))
			{
				func_228(3);
				iLocal_648++;
			}
			break;
	}
}

void func_236()
{
	switch (iLocal_588[0])
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[0 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[0]));
			__LIB_1__::func_148(&(vLocal_617[0 /*3*/]));
			__LIB_2__::func_272(uLocal_372[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			iLocal_588[0] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_617[0 /*3*/])) >= 0f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[0], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[0], Global_35, 3, 2, 500f, 1, 0, 0, 0);
				}
				__LIB_3__::func_673(uLocal_372[0], Global_35, &uLocal_384, -1, 30);
				__LIB_1__::func_148(&(vLocal_617[0 /*3*/]));
				iLocal_588[0] = 2;
			}
			break;
		case 2:
			if (!TASK::_0x916B8E075ABC8B4E(uLocal_372[0], 0) || __LIB_0__::func_264(&(vLocal_617[0 /*3*/])) >= 0.5f)
			{
				PED::_0x802092B07E3B1EEA(uLocal_372[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[0] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[0], uLocal_685[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			iLocal_588[0] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[1])
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[1 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[1]));
			__LIB_1__::func_148(&(vLocal_617[1 /*3*/]));
			__LIB_2__::func_272(uLocal_372[1], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			iLocal_588[1] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_617[1 /*3*/])) >= 0.3f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[1], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[1], Global_35, 3, 2, 1000f, 1, 0, 0, 0);
				}
				__LIB_3__::func_673(uLocal_372[1], Global_35, &uLocal_384, -1, 30);
				__LIB_1__::func_148(&(vLocal_617[1 /*3*/]));
				iLocal_588[1] = 2;
			}
			break;
		case 2:
			if (!TASK::_0x916B8E075ABC8B4E(uLocal_372[1], 0) || __LIB_0__::func_264(&(vLocal_617[1 /*3*/])) >= 1f)
			{
				PED::_0x802092B07E3B1EEA(uLocal_372[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[1] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[1], uLocal_685[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			iLocal_588[1] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[2])
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[2 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[2]));
			PED::_0x8ACC0506743A8A5C(uLocal_372[2], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			__LIB_2__::func_272(uLocal_372[2], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_1__::func_148(&(vLocal_617[2 /*3*/]));
			iLocal_588[2] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_617[2 /*3*/])) >= 0.5f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[2], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[2], Global_35, 3, 2, 1500f, 1, 0, 0, 0);
				}
				__LIB_3__::func_673(uLocal_372[2], Global_35, &uLocal_384, -1, 30);
				__LIB_1__::func_148(&(vLocal_617[2 /*3*/]));
				iLocal_588[2] = 2;
			}
			break;
		case 2:
			if (!TASK::_0x916B8E075ABC8B4E(uLocal_372[2], 0) || __LIB_0__::func_264(&(vLocal_617[2 /*3*/])) >= 1.5f)
			{
				PED::_0x802092B07E3B1EEA(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[2] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 3);
			TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[2], uLocal_685[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			iLocal_588[2] = 4;
			break;
		case 4:
			break;
	}
	switch (iLocal_588[3])
	{
		case 0:
			__LIB_2__::func_593(&(Local_421[3 /*21*/]), &Local_527);
			__LIB_2__::func_344(&(uLocal_372[3]));
			PED::_0x8ACC0506743A8A5C(uLocal_372[3], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			__LIB_2__::func_272(uLocal_372[3], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			__LIB_1__::func_148(&(vLocal_617[3 /*3*/]));
			iLocal_588[3] = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&(vLocal_617[3 /*3*/])) >= 0.5f)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_372[3], 0))
				{
					TASK::_0xE7FA07624574B79A(uLocal_372[3], Global_35, 3, 2, 2000f, 1, 0, 0, 0);
				}
				__LIB_3__::func_673(uLocal_372[3], Global_35, &uLocal_384, -1, 30);
				__LIB_1__::func_148(&(vLocal_617[3 /*3*/]));
				iLocal_588[3] = 2;
			}
			break;
		case 2:
			if (!TASK::_0x916B8E075ABC8B4E(uLocal_372[3], 0) || __LIB_0__::func_264(&(vLocal_617[3 /*3*/])) >= 2f)
			{
				PED::_0x802092B07E3B1EEA(uLocal_372[2], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
				iLocal_588[3] = 3;
			}
			break;
		case 3:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, 2000, false, 3);
			TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
			TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_372[3], uLocal_685[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			iLocal_588[3] = 4;
			break;
		case 4:
			break;
	}
}

void func_237()
{
	int iVar0;
	if (iLocal_664 == 0)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_372[iVar0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_372[iVar0]))
			{
				__LIB_3__::func_453(uLocal_372[iVar0], 0, &(Local_17.f_5), &iLocal_601, 0, 0);
				if (PED::_IS_PED_HOGTIED(uLocal_372[iVar0]) || PED::_IS_PED_LASSOED(uLocal_372[iVar0]))
				{
					if (iLocal_655 == 0)
					{
						iLocal_655 = 1;
						iLocal_649 = 1;
					}
				}
				if (iLocal_601 == 8)
				{
					if (iLocal_656 == 0)
					{
						iLocal_656 = 1;
						iLocal_649 = 3;
					}
				}
				if ((((((((iLocal_601 == 4 || iLocal_601 == 256) || iLocal_601 == 0) || iLocal_601 == 1) || iLocal_601 == 2) || iLocal_601 == 2048) || iLocal_601 == 1024) || iLocal_601 == 16) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_372[iVar0], Global_35, 1, 1))
				{
					if (iLocal_657 == 0)
					{
						iLocal_657 = 1;
						iLocal_649 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uLocal_372[iVar0], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uLocal_372[iVar0])
				{
					if (iLocal_658 == 0)
					{
						iLocal_658 = 1;
						iLocal_649 = 2;
					}
				}
				switch (iLocal_649)
				{
					case 0:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(43), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 1:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(44), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 2:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(45), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
					case 3:
						if (func_243(uLocal_372[iVar0], Global_35, func_134(46), 0.8f, 1))
						{
							iLocal_664 = 1;
							iLocal_649 = -1;
						}
						break;
				}
			}
			iVar0++;
		}
	}
}

int func_242(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_397(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_3__::func_156(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 25))
		{
			if (MISC::IS_BIT_SET(*iParam1, 24))
			{
				if (!__LIB_0__::func_474(558))
				{
					__LIB_1__::func_240(558, 0);
				}
				MISC::SET_BIT(iParam1, 24);
				MISC::SET_BIT(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_243(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!__LIB_0__::func_75(&uLocal_602))
	{
		__LIB_1__::func_148(&uLocal_602);
	}
	else if (__LIB_0__::func_264(&uLocal_602) > fParam3)
	{
		if (iParam4 == 0)
		{
			__LIB_2__::func_478(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		}
		__LIB_0__::func_37(&uLocal_602);
		return true;
	}
	return false;
}

bool func_247(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			if (((iParam0 != uLocal_372[0] && iParam0 != uLocal_372[1]) && iParam0 != uLocal_372[2]) && iParam0 != uLocal_372[3])
			{
				return true;
			}
			break;
		case 1:
			if ((((iParam0 != uLocal_372[0] && iParam0 != uLocal_372[1]) && iParam0 != uLocal_372[2]) && iParam0 != uLocal_372[3]) && iParam0 != uLocal_372[4])
			{
				return true;
			}
			break;
		case 2:
			if (((iParam0 != uLocal_372[0] && iParam0 != uLocal_372[1]) && iParam0 != uLocal_372[2]) && iParam0 != uLocal_372[3])
			{
				return true;
			}
			break;
	}
	return false;
}

int func_248(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			if ((__LIB_0__::func_665(iParam0, uLocal_372[0], 1, 1) <= func_401(iParam0) || __LIB_0__::func_665(iParam0, uLocal_372[1], 1, 1) <= func_401(iParam0)) || __LIB_0__::func_665(iParam0, uLocal_372[2], 1, 1) <= func_401(iParam0))
			{
				return 1;
			}
			break;
		case 1:
			if ((((__LIB_0__::func_665(iParam0, uLocal_372[0], 1, 1) <= func_401(iParam0) || __LIB_0__::func_665(iParam0, uLocal_372[1], 1, 1) <= func_401(iParam0)) || __LIB_0__::func_665(iParam0, uLocal_372[2], 1, 1) <= func_401(iParam0)) || __LIB_0__::func_665(iParam0, uLocal_372[3], 1, 1) <= func_401(iParam0)) || __LIB_0__::func_665(iParam0, uLocal_372[4], 1, 1) <= func_401(iParam0))
			{
				return 1;
			}
			break;
		case 2:
			if (((__LIB_0__::func_665(iParam0, uLocal_372[0], 1, 1) <= func_401(iParam0) || __LIB_0__::func_665(iParam0, uLocal_372[1], 1, 1) <= func_401(iParam0)) || __LIB_0__::func_665(iParam0, uLocal_372[2], 1, 1) <= func_401(iParam0)) || __LIB_0__::func_665(iParam0, uLocal_372[3], 1, 1) <= func_401(iParam0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_249(int iParam0)
{
	switch (iLocal_14)
	{
		case 0:
			if ((PED::IS_PED_FACING_PED(uLocal_372[0], iParam0, 80f) || PED::IS_PED_FACING_PED(uLocal_372[1], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[2], iParam0, 80f))
			{
				return 1;
			}
			break;
		case 1:
			if ((((PED::IS_PED_FACING_PED(uLocal_372[0], iParam0, 80f) || PED::IS_PED_FACING_PED(uLocal_372[1], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[2], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[3], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[4], iParam0, 80f))
			{
				return 1;
			}
			break;
		case 2:
			if (((PED::IS_PED_FACING_PED(uLocal_372[0], iParam0, 80f) || PED::IS_PED_FACING_PED(uLocal_372[1], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[2], iParam0, 80f)) || PED::IS_PED_FACING_PED(uLocal_372[3], iParam0, 80f))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_250()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar3);
	TASK::TASK_PERFORM_SEQUENCE(Local_211[3 /*32*/].f_11, iVar3);
	TASK::CLEAR_SEQUENCE_TASK(&iVar3);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_HORSE_ACTION(0, 3, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[0 /*32*/].f_11, iVar0, 0.5f, 0.5f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	TASK::TASK_HORSE_ACTION(0, 5, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar1);
	TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[1 /*32*/].f_11, iVar1, 1f, 1f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	TASK::CLEAR_SEQUENCE_TASK(&iVar2);
	TASK::OPEN_SEQUENCE_TASK(&iVar2);
	TASK::TASK_HORSE_ACTION(0, 7, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar2);
	TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[2 /*32*/].f_11, iVar2, 1.5f, 1.5f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar2);
	TASK::CLEAR_SEQUENCE_TASK(&iVar4);
	TASK::OPEN_SEQUENCE_TASK(&iVar4);
	TASK::TASK_HORSE_ACTION(0, 1, Global_35, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar4);
	TASK::_TASK_PERFORM_SEQUENCE_2(Local_211[4 /*32*/].f_11, iVar4, 2.5f, 2.5f);
	TASK::CLEAR_SEQUENCE_TASK(&iVar4);
}

void func_251()
{
	if (!__LIB_0__::func_75(&uLocal_608))
	{
		__LIB_1__::func_148(&uLocal_608);
	}
	else if (__LIB_0__::func_264(&uLocal_608) >= 0f && __LIB_0__::func_264(&uLocal_608) <= 0.1f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[0], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		__LIB_3__::func_673(uLocal_372[0], Global_35, &uLocal_384, -1, 50);
	}
	else if (__LIB_0__::func_264(&uLocal_608) >= 0.3f && __LIB_0__::func_264(&uLocal_608) <= 0.4f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[1], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		__LIB_3__::func_673(uLocal_372[1], Global_35, &uLocal_384, -1, 50);
	}
	else if (__LIB_0__::func_264(&uLocal_608) >= 0.5f && __LIB_0__::func_264(&uLocal_608) <= 0.6f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[2], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		__LIB_3__::func_673(uLocal_372[2], Global_35, &uLocal_384, -1, 50);
	}
	else if (__LIB_0__::func_264(&uLocal_608) >= 0.8f && __LIB_0__::func_264(&uLocal_608) <= 0.9f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[3], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		__LIB_3__::func_673(uLocal_372[3], Global_35, &uLocal_384, -1, 50);
	}
	else if (__LIB_0__::func_264(&uLocal_608) >= 1.2f && __LIB_0__::func_264(&uLocal_608) <= 1.3f)
	{
		TASK::_0xE7FA07624574B79A(uLocal_372[4], Global_35, 3, 2, 7000f, 1, 0, 0, 0);
		__LIB_3__::func_673(uLocal_372[4], Global_35, &uLocal_384, -1, 50);
	}
}

int func_378()
{
	if ((((__LIB_0__::func_394(Global_35, Local_211[0 /*32*/].f_11, 0) || __LIB_0__::func_394(Global_35, Local_211[1 /*32*/].f_11, 0)) || __LIB_0__::func_394(Global_35, Local_211[2 /*32*/].f_11, 0)) || __LIB_0__::func_394(Global_35, Local_211[3 /*32*/].f_11, 0)) || __LIB_0__::func_394(Global_35, Local_211[4 /*32*/].f_11, 0))
	{
		func_225(15);
		func_251();
		return 1;
	}
	return 0;
}

int func_379()
{
	if (((((ENTITY::DOES_ENTITY_EXIST(Local_211[0 /*32*/].f_11) && PED::_IS_PED_LASSOED(Local_211[0 /*32*/].f_11)) || (ENTITY::DOES_ENTITY_EXIST(Local_211[1 /*32*/].f_11) && PED::_IS_PED_LASSOED(Local_211[1 /*32*/].f_11))) || (ENTITY::DOES_ENTITY_EXIST(Local_211[2 /*32*/].f_11) && PED::_IS_PED_LASSOED(Local_211[2 /*32*/].f_11))) || (ENTITY::DOES_ENTITY_EXIST(Local_211[3 /*32*/].f_11) && PED::_IS_PED_LASSOED(Local_211[3 /*32*/].f_11))) || (ENTITY::DOES_ENTITY_EXIST(Local_211[4 /*32*/].f_11) && PED::_IS_PED_LASSOED(Local_211[4 /*32*/].f_11)))
	{
		func_225(15);
		func_251();
		return 1;
	}
	return 0;
}

bool func_380()
{
	if ((((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[1], Global_35, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[2], Global_35, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[3], Global_35, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_372[4], Global_35, 17))
	{
		return true;
	}
	return false;
}

bool func_381()
{
	if (((((!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[0], 80f) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[1], 80f)) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[2], 80f)) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[3], 80f)) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_372[4], 80f)) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f)
	{
		return true;
	}
	return false;
}

void func_383()
{
	if (bLocal_668)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), true) >= 60f)
		{
			__LIB_3__::func_277(1891783641, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 1);
		}
		else
		{
			bLocal_668 = false;
		}
	}
}

void func_384()
{
	switch (iLocal_650)
	{
		case 0:
			__LIB_2__::func_461(0);
			__LIB_2__::func_478(uLocal_372[0], uLocal_372[0], func_134(66), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			__LIB_3__::func_277(1891783641, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 1);
			iLocal_650++;
			break;
		case 1:
			__LIB_2__::func_461(0);
			__LIB_2__::func_478(uLocal_372[0], uLocal_372[0], func_134(67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			__LIB_3__::func_277(1891783641, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 1);
			iLocal_650++;
			Jump @274; //curOff = 194
			__LIB_2__::func_461(0);
			__LIB_2__::func_478(uLocal_372[0], uLocal_372[0], func_134(68), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			__LIB_3__::func_277(1891783641, ENTITY::GET_ENTITY_COORDS(uLocal_372[0], true, false), 1);
			iLocal_650 = 0;
		}
bool func_385(int iParam0, bool bParam1)
{
	if (__LIB_2__::func_1(iParam0, 0, 1))
	{
		return (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0) || (bParam1 && AUDIO::IS_ANY_SPEECH_PLAYING(iParam0)));
	}
	return false;
}

void func_387(int iParam0)
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1))
	{
		TASK::TASK_PLAY_ANIM(iParam0, Local_409[0 /*2*/], Local_409[0 /*2*/].f_1, 1.5f, -1.5f, -1, 16, 0f, false, 0, false, "RightArmOnly_Filter", false);
	}
}

void func_393()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	func_504(uLocal_372[0], Global_35, 0);
	switch (iLocal_595)
	{
		case 0:
			fVar0 = 0f;
			fVar1 = 0.5f;
			fVar2 = 1f;
			fVar3 = 1.5f;
			fVar4 = 2f;
			break;
		case 1:
		case 3:
			fVar0 = 1f;
			fVar1 = 0.5f;
			fVar2 = 1.5f;
			fVar3 = 0f;
			fVar4 = 2f;
			break;
		case 2:
		case 4:
			fVar0 = 1f;
			fVar1 = 1.5f;
			fVar2 = 0.5f;
			fVar3 = 2f;
			fVar4 = 0f;
			break;
	}
	switch (iLocal_596)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) > 1f)
				{
					iLocal_596 = 2;
				}
				else if ((((__LIB_2__::func_118(uLocal_372[0], 1, 1) <= 15f || __LIB_2__::func_118(uLocal_372[1], 1, 1) <= 15f) || __LIB_2__::func_118(uLocal_372[2], 1, 1) <= 15f) || __LIB_2__::func_118(uLocal_372[3], 1, 1) <= 15f) || __LIB_2__::func_118(uLocal_372[4], 1, 1) <= 15f)
				{
					iLocal_596 = 1;
				}
				else
				{
					iLocal_596 = 2;
				}
			}
			else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > 1f)
			{
				iLocal_596 = 2;
			}
			else if ((((__LIB_2__::func_118(uLocal_372[0], 1, 1) <= 15f || __LIB_2__::func_118(uLocal_372[1], 1, 1) <= 15f) || __LIB_2__::func_118(uLocal_372[2], 1, 1) <= 15f) || __LIB_2__::func_118(uLocal_372[3], 1, 1) <= 15f) || __LIB_2__::func_118(uLocal_372[4], 1, 1) <= 15f)
			{
				iLocal_596 = 1;
			}
			else
			{
				iLocal_596 = 2;
			}
			break;
		case 1:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_CONFRONT(0, Global_35, 2);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[0], uLocal_685[0], fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_CONFRONT(0, Global_35, 128);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_CONFRONT(0, Global_35, 2);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], fVar2, fVar2);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_CONFRONT(0, Global_35, 128);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], fVar3, fVar3);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::TASK_CONFRONT(0, Global_35, 128);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[4]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[4], uLocal_685[4], fVar4, fVar4);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			iLocal_596 = 3;
			break;
		case 3:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) > 1f)
				{
					iLocal_596 = 2;
				}
			}
			else if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) > 1f)
			{
				iLocal_596 = 2;
			}
			break;
		case 2:
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(0, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 5f, 15f);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[0]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[0], uLocal_685[0], fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, -1, 15f, 2f, 8);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[1]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[1], uLocal_685[1], fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(0, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 8, 0, 0, 5f, 15f);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[2]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[2], uLocal_685[2], fVar2, fVar2);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, -1, 15f, 2f, 8);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[3]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[3], uLocal_685[3], fVar3, fVar3);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[3]));
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::OPEN_SEQUENCE_TASK(&(uLocal_685[4]));
			TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 0, -1, 15f, 2f, 8);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_685[4]);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_372[4], uLocal_685[4], fVar4, fVar4);
			TASK::CLEAR_SEQUENCE_TASK(&(uLocal_685[4]));
			iLocal_596 = 4;
			break;
		case 4:
			break;
	}
}

int func_397(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		__LIB_1__::func_487(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !VOLUME::_DOES_VOLUME_EXIST(iParam9)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0));
		fVar8 = __LIB_0__::func_514(fParam12 >= 0f, fParam12, BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			PED::SET_PED_RESET_FLAG(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (AUDIO::IS_AMBIENT_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			__LIB_1__::func_148(&(iParam1->f_13));
		}
		if (__LIB_2__::func_525(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (__LIB_3__::func_374(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_397(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					__LIB_2__::func_344(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 317, true))
						{
							__LIB_1__::func_488(*uParam0, 1, 1);
						}
					}
					else if (__LIB_1__::func_489(iParam1, 22))
					{
						__LIB_1__::func_488(*uParam0, 0, 1);
					}
				}
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_375(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (MISC::IS_BIT_SET((*uParam3)[iParam1->f_1 /*17*/], 20))
								{
									__LIB_1__::func_490(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					__LIB_2__::func_361(iParam1, uParam3, fVar8);
					if (__LIB_2__::func_589(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
						MISC::CLEAR_BIT(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (__LIB_2__::func_402(uParam0, iParam8, iParam9, MISC::IS_BIT_SET(*iParam1, 4)))
				{
					__LIB_3__::func_377(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_3__::func_376(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_3__::func_375(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_480(uParam3, 0, 0, 1, 1);
					}
					__LIB_1__::func_491(iParam1, 1);
				}
				__LIB_2__::func_361(iParam1, uParam3, fVar8);
				if (__LIB_2__::func_473(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!MISC::IS_BIT_SET(*iParam1, 3))
		{
			__LIB_2__::func_593(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

float func_401(int iParam0)
{
	float fVar0;
	float fVar1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(iParam0));
		if (fVar0 == 0f)
		{
			fVar1 = 8f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 8f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 10f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 15f;
		}
		else
		{
			fVar1 = 18f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0);
		if (fVar0 == 0f)
		{
			fVar1 = 5f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 5f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 7f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 8.5f;
		}
		else
		{
			fVar1 = 10f;
		}
	}
	return fVar1;
}

void func_504(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	float fVar13;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam1) * FtoV((ENTITY::GET_ENTITY_SPEED(iParam1) * 0f)) };
	vVar6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar9 = { vVar3 - vVar0 };
	fVar12 = __LIB_1__::func_507(vVar6, vVar9);
	fVar13 = 0.707f;
	if (MISC::ABSF(fVar12) > fVar13)
	{
		if (fVar12 > 0f)
		{
			iLocal_595 = 0;
		}
		else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)))
		{
			iLocal_595 = 1;
		}
		else
		{
			iLocal_595 = 2;
		}
	}
	else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_595 = 3;
	}
	else
	{
		iLocal_595 = 4;
	}
	if (bParam2)
	{
	}
}

