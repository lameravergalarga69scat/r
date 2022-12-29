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
	var uLocal_15[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_22[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_29 = 0;
	struct<193> Local_30 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_223 = 0;
	struct<32> Local_224[6];
	struct<7> Local_417 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_424 = 0;
	float fLocal_425 = 0f;
	int iLocal_426 = 0;
	vector3 vLocal_427 = { 0f, 0f, 0f };
	vector3 vLocal_430 = { 0f, 0f, 0f };
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	int iLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = -1;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 2;
	var uLocal_445 = 1;
	var uLocal_446 = 1;
	var uLocal_447 = 1;
	var uLocal_448 = 0;
	var uLocal_449 = 1;
	var uLocal_450 = 2;
	var uLocal_451 = 2;
	var uLocal_452 = 3;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 3;
	var uLocal_456 = 1;
	var uLocal_457 = 3;
	var uLocal_458 = 3;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	struct<21> Local_461[2];
	struct<17> Local_504[3];
	int iLocal_556 = 0;
	var uLocal_557 = -1;
	var uLocal_558 = 0;
	var uLocal_559 = -1;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = -1;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 1073741824;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 1;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	struct<17> Local_577[3];
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	var uLocal_661 = 0;
	int iLocal_662 = 0;
	float fLocal_663 = 0f;
	char[] cLocal_664[8] = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	bool bLocal_675 = false;
	int iLocal_676 = 0;
	int iLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
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
	iLocal_658 = -1;
	cLocal_664 = "corpse_cart";
	iLocal_682 = 1;
	Local_30.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_30.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	uLocal_680 = uLocal_680;
	__LIB_3__::func_368(&Local_30, 1);
	__LIB_3__::func_570(&(Local_30.f_5), 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_675 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_675, 470, 0);
		if (bLocal_675)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_682)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_30, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_8(&Local_30, &uLocal_679, &uLocal_678);
						__LIB_3__::func_352(&Local_30, 1);
						func_10();
						iLocal_682 = 0;
					}
					else if (Local_30.f_160)
					{
						func_5();
					}
					break;
				case 0:
					if (func_11())
					{
						iLocal_682 = 3;
					}
					break;
				case 3:
					if (func_12())
					{
						func_13();
						iLocal_682 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_30, &uLocal_15, iLocal_14, 1, 1, 0, 1, 0))
					{
						func_5();
					}
					func_15();
					if (func_16())
					{
						Local_30.f_50 = 1;
						func_5();
					}
					if (__LIB_3__::func_431(&Local_30, &uLocal_15, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						PED::SET_PED_KEEP_TASK(uLocal_15[0], true);
						PED::SET_PED_KEEP_TASK(uLocal_15[1], true);
						PED::SET_PED_KEEP_TASK(uLocal_15[2], true);
						Local_30.f_50 = 1;
						func_5();
					}
					break;
			}
			BUILTIN::WAIT(Local_30.f_158);
		}
	}
}

void func_5()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_29))
	{
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_29, true);
		VEHICLE::_0x7C06330BFDDA182E(iLocal_29);
	}
	__LIB_3__::func_493(&Local_30, &uLocal_15, &iLocal_22, iLocal_14, uLocal_679, uLocal_678, 0, 1, 0, 1);
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_29);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_426);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_433))
	{
		PATHFIND::_0xD17672447692478E(uLocal_434, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_433, true);
	}
	func_23(1);
	__LIB_2__::func_593(&iLocal_556, &Local_577);
	__LIB_2__::func_56(uLocal_15[2], 1, 1);
	__LIB_2__::func_593(&(Local_461[0 /*21*/]), &Local_504);
	__LIB_2__::func_593(&(Local_461[1 /*21*/]), &Local_504);
	__LIB_2__::func_56(uLocal_15[0], 1, 1);
	__LIB_2__::func_56(uLocal_15[1], 1, 1);
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0)))
	{
		PED::SET_PED_CONFIG_FLAG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0), 287, true);
		PED::SET_PED_CONFIG_FLAG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0), 294, false);
		PED::SET_PED_CONFIG_FLAG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0), 312, false);
	}
	if (PED::IS_PED_DEAD_OR_DYING(Global_35, true))
	{
		__LIB_1__::func_864(uLocal_15[2], 0, 0);
		__LIB_1__::func_864(uLocal_15[3], 0, 0);
		__LIB_1__::func_864(uLocal_15[4], 0, 0);
	}
	func_27();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_8(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 2;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 2;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 2;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
		case 5:
			*uParam1 = 10;
			*uParam2 = 2;
			break;
		case 6:
			*uParam1 = 10;
			*uParam2 = 3;
			break;
		case 7:
			*uParam1 = 10;
			*uParam2 = 4;
			break;
		case 8:
			*uParam1 = 10;
			*uParam2 = 5;
			break;
		case 9:
			*uParam1 = 10;
			*uParam2 = 6;
			break;
		case 10:
			*uParam1 = 10;
			*uParam2 = 7;
			break;
		case 11:
			*uParam1 = 10;
			*uParam2 = 8;
			break;
	}
}

void func_10()
{
	iLocal_14 = __LIB_3__::func_390(Local_30.f_3, 2, 0);
	switch (iLocal_14)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

bool func_11()
{
	switch (iLocal_681)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_30))
			{
				func_36();
				func_37();
				func_38();
				func_39();
				func_40();
				func_41();
				iLocal_681 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_680, cLocal_664))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_224))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_12()
{
	switch (iLocal_683)
	{
		case 0:
			if (__LIB_3__::func_479(Local_30.f_51, Local_30.f_51.f_3, &Local_224, &uLocal_15, 0, 0, -1, 1))
			{
				iLocal_683 = 1;
			}
			break;
		case 1:
			func_45();
			func_23(0);
			func_46();
			iLocal_683 = 6;
			break;
		case 6:
			if (!func_47())
			{
				return false;
			}
			else if (iLocal_630 == 0)
			{
				iLocal_630 = PROPSET::_GET_VEHICLE_LIGHT_PROPSET(iLocal_29);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_417.f_2, true, false))
			{
				return false;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_29) && !ENTITY::IS_ENTITY_DEAD(iLocal_29)) && !PROPSET::_DOES_VEHICLE_HAVE_ANY_LIGHT_PROPSET(iLocal_29))
			{
				PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(iLocal_29, iLocal_629);
			}
			else
			{
				return false;
			}
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_29, false);
			__LIB_2__::func_19(iLocal_29);
			func_49();
			return true;
	}
	return false;
}

void func_13()
{
	int iVar0;
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_29, 4f, 2113617);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_15[0], iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_15()
{
	func_59();
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_15[2], true))
	{
		__LIB_1__::func_864(uLocal_15[3], 0, 0);
		__LIB_1__::func_864(uLocal_15[4], 0, 0);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_29, true);
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_29, true))
	{
		VEHICLE::_0x7C06330BFDDA182E(iLocal_29);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_15[3], true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_15[4], true);
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_417.f_2, false))
	{
		fLocal_663 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_417.f_2);
	}
	if (iLocal_669 == 0)
	{
		if (func_60())
		{
			if (!Local_30.f_46)
			{
				Local_30.f_46 = 1;
				func_61(3);
			}
		}
	}
	if (__LIB_2__::func_118(iLocal_29, 1, 1) <= 40f)
	{
		iLocal_670 = 1;
	}
	if (iLocal_670 == 1)
	{
		Local_30.f_45 = 1;
	}
	else
	{
		Local_30.f_45 = 0;
	}
}

bool func_16()
{
	switch (iLocal_632)
	{
		case 0:
			func_63();
			break;
		case 1:
			func_64();
			break;
		case 2:
			func_65();
			break;
		case 3:
			func_66();
			break;
		case 4:
			func_67();
			break;
		case 5:
			if (__LIB_2__::func_118(uLocal_15[2], 1, 1) >= 80f)
			{
				Local_30.f_50 = 1;
				Local_30.f_44 = 1;
				PED::SET_PED_KEEP_TASK(uLocal_15[0], true);
				PED::SET_PED_KEEP_TASK(uLocal_15[1], true);
				PED::SET_PED_KEEP_TASK(uLocal_15[2], true);
				return true;
			}
			else
			{
				func_68();
			}
			break;
		case 6:
			PED::SET_PED_KEEP_TASK(uLocal_15[0], true);
			PED::SET_PED_KEEP_TASK(uLocal_15[1], true);
			PED::SET_PED_KEEP_TASK(uLocal_15[2], true);
			Local_30.f_50 = 1;
			Local_30.f_160 = 1;
			return true;
	}
	return false;
}

void func_23(bool bParam0)
{
	if (bParam0)
	{
		__LIB_2__::func_161(Local_30.f_51, 100f, 5);
		__LIB_2__::func_161(vLocal_430, 100f, 5);
	}
	else
	{
		__LIB_2__::func_165(Local_30.f_51, 100f, 0, 0, 6);
		__LIB_2__::func_165(vLocal_430, 100f, 0, 0, 6);
	}
}

void func_27()
{
	if (Local_30.f_45 == 0)
	{
		__LIB_2__::func_426(&(uLocal_15[2]));
		__LIB_2__::func_426(&(uLocal_15[3]));
		__LIB_2__::func_426(&(uLocal_15[4]));
	}
}

void func_36()
{
	switch (Local_30.f_51.f_4)
	{
		case 0:
			vLocal_427 = { Local_30.f_51 };
			fLocal_425 = -62.64f;
			vLocal_430 = { 2727.6f, 61.2f, 52.2f };
			break;
		case 1:
			vLocal_427 = { Local_30.f_51 };
			fLocal_425 = -36.72f;
			vLocal_430 = { 2689.7f, -53.8f, 51.2f };
			break;
		case 2:
			vLocal_427 = { Local_30.f_51 };
			fLocal_425 = -8.64f;
			vLocal_430 = { 2570.4f, -154.9f, 41.9f };
			break;
		case 3:
			vLocal_427 = { 2487.84f, 636.78f, 69.63f };
			fLocal_425 = 47.51f;
			vLocal_430 = { 2595.3f, 477.9f, 67.5f };
			break;
		case 4:
			vLocal_427 = { 2455.24f, 1268.1f, 109.25f };
			fLocal_425 = 128.6f;
			vLocal_430 = { 2526.984f, 1400.651f, 97.6331f };
			break;
		case 5:
			vLocal_427 = { Local_30.f_51 };
			fLocal_425 = -51.84f;
			vLocal_430 = { 2124.438f, 999.5125f, 109.6772f };
			break;
		case 6:
			vLocal_427 = { 2581.3f, 347.34f, 73.29f };
			fLocal_425 = 19.82f;
			vLocal_430 = { 2687.189f, 250.09f, 62.4233f };
			break;
		case 7:
			vLocal_427 = { 2583.63f, 561.87f, 72.5f };
			fLocal_425 = 19.82f;
			vLocal_430 = { 2593.578f, 415.9733f, 70.9361f };
			break;
		case 8:
			vLocal_427 = { Local_30.f_51 };
			fLocal_425 = 19.82f;
			vLocal_430 = { 2499.201f, 1438.91f, 91.9764f };
			break;
		case 9:
			vLocal_427 = { 2260.07f, 1720.38f, 103.06f };
			fLocal_425 = 19.82f;
			vLocal_430 = { 2370.706f, 1669.12f, 96.8163f };
			break;
		case 10:
			vLocal_427 = { Local_30.f_51 };
			fLocal_425 = 19.82f;
			vLocal_430 = { 2133.636f, 1011.596f, 110.5824f };
			break;
		case 11:
			vLocal_427 = { Local_30.f_51 };
			fLocal_425 = 19.82f;
			vLocal_430 = { 2417.256f, 1078.965f, 88.6447f };
			break;
	}
}

void func_37()
{
	Local_224[0 /*32*/] = 7;
	Local_224[0 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
	Local_224[0 /*32*/].f_3 = -777894995;
	Local_224[1 /*32*/] = 7;
	Local_224[1 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
	Local_224[1 /*32*/].f_3 = 2021724524;
	Local_224[2 /*32*/].f_1 = joaat("RE_CORPSECART_FEMALES_01");
	Local_224[2 /*32*/].f_3 = -947172122;
	Local_224[3 /*32*/].f_1 = joaat("RE_CORPSECART_MALES_01");
	Local_224[3 /*32*/].f_3 = -947172122;
	Local_224[4 /*32*/].f_1 = joaat("RE_CORPSECART_MALES_01");
	Local_224[4 /*32*/].f_3 = -708449957;
	Local_224[5 /*32*/].f_1 = __LIB_2__::func_185(1, 0, 1);
	__LIB_3__::func_445(&Local_224);
}

void func_38()
{
	STREAMING::REQUEST_MODEL(joaat("CART06"), false);
}

void func_39()
{
	Local_417.f_6 = "script@beat@wilderness@corpsecart@cartkill";
}

void func_40()
{
	__LIB_2__::func_602(&(Local_504[0 /*17*/]), "RE_INTER_POS", func_125(27), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_504[1 /*17*/]), "INTERACT_INTERVENE", func_125(28), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_504[0 /*17*/]), 1, 0);
	__LIB_2__::func_411(&(Local_504[1 /*17*/]), 1, 0);
	__LIB_2__::func_602(&(Local_577[0 /*17*/]), "RE_INTER_POS", func_125(31), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_577[1 /*17*/]), "RE_INTER_ANTAGONIZE", func_125(33), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_3__::func_158(&(Local_577[0 /*17*/]), 1);
	__LIB_3__::func_158(&(Local_577[1 /*17*/]), 1);
}

void func_41()
{
	iLocal_629 = joaat("PG_TEAMSTER_CART06_LIGHTUPGRADE1");
}

void func_45()
{
	__LIB_2__::func_51(&(Local_30.f_5), 1);
	__LIB_2__::func_180(&(Local_30.f_5), 1);
	__LIB_2__::func_111(&(Local_30.f_5), 1);
	__LIB_2__::func_110(&(Local_30.f_5), 1);
	__LIB_2__::func_105(&(Local_30.f_5), 1);
	__LIB_2__::func_50(&(Local_30.f_5), 1);
	__LIB_2__::func_634(&(Local_30.f_5), 1);
	__LIB_3__::func_230(&(Local_30.f_5), 1);
	__LIB_2__::func_662(&(Local_30.f_5), 1);
	__LIB_2__::func_715(&(Local_30.f_5), 1);
}

void func_46()
{
	Local_417.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_417.f_6, 0, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_417.f_2, 0f, 0f, 0f, 0f, 0f, 0f, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_417.f_2, "Female", uLocal_15[2], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_417.f_2, "DEAD_01", uLocal_15[3], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_417.f_2, "DEAD_02", uLocal_15[4], 0);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_417.f_2, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_417.f_2);
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_417.f_2, "bool", false, false);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_417.f_2, "PBL_FEMALE_IDLE");
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_417.f_2, "PBL_FEMALE_IDLE"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_417.f_2, "PBL_FEMALE_IDLE", true);
	}
}

bool func_47()
{
	switch (iLocal_631)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_29))
			{
				iLocal_631++;
			}
			else
			{
				iLocal_29 = VEHICLE::CREATE_VEHICLE(joaat("CART06"), vLocal_427, fLocal_425, true, true, true, false);
			}
			break;
		case 1:
			if (VEHICLE::_0x316CDB5B6E8F4110(uLocal_15[5], iLocal_29, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_49()
{
	float fVar0;
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_29, vLocal_427, __LIB_3__::func_978(iLocal_29, Global_35, 1), false, true, true);
	fVar0 = __LIB_3__::func_571(ENTITY::GET_ENTITY_COORDS(iLocal_29, true, false), ENTITY::GET_ENTITY_COORDS(Global_35, true, false));
	ENTITY::SET_ENTITY_HEADING(iLocal_29, fVar0);
	__LIB_3__::func_566(&(uLocal_15[0]), -777894995);
	__LIB_3__::func_566(&(uLocal_15[1]), 2021724524);
	__LIB_3__::func_566(&(uLocal_15[2]), -947172122);
	__LIB_3__::func_566(&(uLocal_15[3]), -947172122);
	__LIB_3__::func_566(&(uLocal_15[4]), -708449957);
	if (iLocal_14 == 1)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_15[0], "0200_G_M_M_UniInbred_01_WHITE_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_15[1], "0204_G_M_M_UniInbred_03_WHITE_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_15[2], "RECCT_Woman_1");
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_15[0], "0201_G_M_M_UniInbred_02_WHITE_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_15[1], "0202_G_M_M_UniInbred_02_WHITE_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_15[2], "1050_A_F_M_FemaleRoughTravellers_01_WHITE_03");
	}
	__LIB_3__::func_285(uLocal_15[0], &Local_30, 0);
	__LIB_3__::func_285(uLocal_15[1], &Local_30, 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_15[0], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_15[1], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_15[0], 15, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_15[1], 15, true);
	__LIB_3__::func_303(&(Local_224[2 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_15[2], 146, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_15[3], 146, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_15[4], 146, true);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_15[0], 1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_15[1], 1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_15[3], 1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(uLocal_15[4], 1);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_15[2], 66);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_15[3], 66);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(uLocal_15[4], 66);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_15[3], false);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_15[4], false);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_15[3], false);
	PED::SET_PED_CAN_BE_TARGETTED(uLocal_15[4], false);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_15[0], 2);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_15[1], 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[1], 3, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[0], 3, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[0], 1, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[1], 1, false);
	PED::_0x89F5E7ADECCCB49C(uLocal_15[2], "scared");
	PED::APPLY_DAMAGE_TO_PED(uLocal_15[2], 5, 1, 64986, 0);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_15[2], "PD_Animal_attack_blood_body_upper_right", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_15[2], "PD_Blood_Spray_FRONT_V1", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_15[2], "PD_Animal_attack_body_abdomen", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_15[2], "PD_Blood_Spray_Right_V2", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_15[2], "PD_Blood_throat_chest", 0f, 1f);
	PED::APPLY_PED_DAMAGE_PACK(uLocal_15[2], "PD_Blood_face_right", 0f, 1f);
	__LIB_3__::func_567(uLocal_15[2], 1);
	PED::SET_PED_INTO_VEHICLE(uLocal_15[0], iLocal_29, -1);
	PED::SET_PED_INTO_VEHICLE(uLocal_15[1], iLocal_29, 0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_15[0], false, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_15[1], false, true);
	__LIB_2__::func_272(uLocal_15[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 99, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_2__::func_546(uLocal_15[1], 0, 3, 0);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_15[2], false, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_15[3], false, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_15[4], false, true);
	__LIB_2__::func_190(uLocal_15[0], 100);
	__LIB_2__::func_463(uLocal_15[0], joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP"), 1, 0);
	__LIB_2__::func_190(uLocal_15[1], 50);
	__LIB_2__::func_463(uLocal_15[1], joaat("CONSUMABLE_BAKED_BEANS_CAN"), 1, 0);
	MAP::ALLOW_SONAR_BLIPS(true);
	AUDIO::DISABLE_PED_PAIN_AUDIO(uLocal_15[3], true);
	AUDIO::DISABLE_PED_PAIN_AUDIO(uLocal_15[4], true);
}

void func_59()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	if (iLocal_632 != 3)
	{
		iVar0 = func_188(&(uLocal_15[0]), &(Local_461[0 /*21*/]), 35f, &Local_504, &(Local_30.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		iVar1 = func_188(&(uLocal_15[1]), &(Local_461[1 /*21*/]), 35f, &Local_504, &(Local_30.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	iVar2 = func_188(&(uLocal_15[2]), &iLocal_556, 15f, &Local_577, &(Local_30.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_633)
	{
		case 0:
			switch (iLocal_634)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_634 = 1;
							break;
						case 1:
							iLocal_634 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_634 = 1;
							break;
						case 1:
							iLocal_634 = 2;
							break;
					}
					break;
				case 1:
					__LIB_3__::func_673(uLocal_15[0], Global_35, &uLocal_436, 5000, 50);
					__LIB_3__::func_673(uLocal_15[1], Global_35, &uLocal_436, 5000, 50);
					if (__LIB_2__::func_227(0f, 1, uLocal_15[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (iLocal_674 == 0)
						{
							if (__LIB_2__::func_155(1, 1))
							{
								__LIB_2__::func_303(uLocal_15[0], Global_35, func_125(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(uLocal_15[0], Global_35, func_125(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							iLocal_674 = 1;
						}
						__LIB_2__::func_411(&(Local_504[1 /*17*/]), 1, 0);
						iLocal_633 = 1;
						iLocal_634 = 0;
					}
					break;
				case 2:
					if (iLocal_673 == 0)
					{
						__LIB_3__::func_673(uLocal_15[0], Global_35, &uLocal_436, 5000, 50);
						__LIB_3__::func_673(uLocal_15[1], Global_35, &uLocal_436, 5000, 50);
						if (__LIB_2__::func_227(0f, 1, uLocal_15[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							if (func_193(uLocal_15[0], Global_35, func_125(26), 0f))
							{
								iLocal_673 = 1;
								func_61(3);
								iLocal_634 = 3;
							}
						}
					}
					break;
				case 3:
					iLocal_633 = 4;
					iLocal_634 = 0;
					break;
			}
			break;
		case 1:
			switch (iLocal_634)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_634 = 2;
							break;
					}
					switch (iVar1)
					{
						case 1:
							iLocal_634 = 2;
							break;
					}
					break;
				case 2:
					if (iLocal_673 == 0)
					{
						__LIB_3__::func_673(uLocal_15[0], Global_35, &uLocal_436, 5000, 50);
						__LIB_3__::func_673(uLocal_15[1], Global_35, &uLocal_436, 5000, 50);
						if (__LIB_2__::func_227(0f, 1, uLocal_15[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							if (func_193(uLocal_15[0], Global_35, func_125(26), 0f))
							{
								iLocal_673 = 1;
								func_61(3);
								iLocal_634 = 3;
							}
						}
					}
					break;
				case 3:
					iLocal_633 = 4;
					iLocal_634 = 0;
					break;
			}
			break;
		case 2:
			switch (iLocal_634)
			{
				case 0:
					if (!__LIB_0__::func_75(&uLocal_647))
					{
						__LIB_1__::func_148(&uLocal_647);
					}
					if (__LIB_2__::func_227(-4f, 1, uLocal_15[0], 1) && __LIB_2__::func_227(-4f, 1, Global_35, 1))
					{
						if (__LIB_0__::func_264(&uLocal_647) >= 10f)
						{
							__LIB_2__::func_411(&(Local_504[0 /*17*/]), 0, 0);
						}
						else if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_15[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_15[1])) || __LIB_2__::func_401(uLocal_15[0], 1, 0, 0, 0, 0)) || __LIB_2__::func_401(uLocal_15[1], 1, 0, 0, 0, 0))
						{
							__LIB_2__::func_411(&(Local_504[0 /*17*/]), 0, 0);
						}
						else
						{
							__LIB_2__::func_411(&(Local_504[0 /*17*/]), 1, 0);
						}
					}
					else
					{
						__LIB_1__::func_148(&uLocal_647);
					}
					switch (iVar0)
					{
						case 0:
							iLocal_634 = 1;
							break;
						case 1:
							iLocal_634 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_634 = 1;
							break;
						case 1:
							iLocal_634 = 2;
							break;
					}
					break;
				case 1:
					__LIB_3__::func_673(uLocal_15[0], Global_35, &uLocal_436, 5000, 50);
					__LIB_3__::func_673(uLocal_15[1], Global_35, &uLocal_436, 5000, 50);
					if (__LIB_2__::func_227(-4f, 1, uLocal_15[0], 1) && __LIB_2__::func_227(-4f, 1, Global_35, 1))
					{
						if (func_193(uLocal_15[0], Global_35, func_125(34), 0f))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_15[2]))
							{
								__LIB_2__::func_411(&(Local_504[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_504[1 /*17*/]), 1, 0);
								__LIB_3__::func_158(&(Local_504[1 /*17*/]), 0);
								iLocal_633 = 1;
								iLocal_634 = 0;
							}
							else
							{
								iLocal_633 = 4;
								iLocal_634 = 3;
							}
						}
					}
					break;
				case 2:
					if (iLocal_673 == 0)
					{
						__LIB_3__::func_673(uLocal_15[0], Global_35, &uLocal_436, 5000, 50);
						__LIB_3__::func_673(uLocal_15[1], Global_35, &uLocal_436, 5000, 50);
						if (__LIB_2__::func_227(-4f, 1, uLocal_15[0], 1) && __LIB_2__::func_227(-4f, 1, Global_35, 1))
						{
							if (func_193(uLocal_15[0], Global_35, func_125(36), 0f))
							{
								iLocal_673 = 1;
								func_61(3);
								iLocal_634 = 3;
							}
						}
					}
					break;
				case 3:
					iLocal_634 = 0;
					break;
			}
			break;
		case 3:
			switch (iLocal_634)
			{
				case 0:
					switch (iVar2)
					{
						case 0:
							iLocal_634 = 1;
							break;
						case 1:
							iLocal_634 = 2;
							break;
					}
					break;
				case 1:
					__LIB_3__::func_673(uLocal_15[2], Global_35, &uLocal_436, 5000, 50);
					if (__LIB_2__::func_227(-4f, 1, uLocal_15[2], 1))
					{
						if (func_193(uLocal_15[2], Global_35, func_125(35), 3f))
						{
							iLocal_634 = 3;
						}
					}
					break;
				case 2:
					__LIB_3__::func_673(uLocal_15[2], Global_35, &uLocal_436, 5000, 50);
					if (__LIB_2__::func_227(-4f, 1, uLocal_15[2], 1))
					{
						if (func_193(uLocal_15[2], Global_35, func_125(37), 3f))
						{
							iLocal_634 = 3;
						}
					}
					break;
				case 3:
					iLocal_633 = 4;
					break;
			}
			break;
		case 4:
			__LIB_2__::func_411(&(Local_504[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_504[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_504[2 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_577[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_577[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_577[2 /*17*/]), 0, 0);
			break;
	}
}

bool func_60()
{
	bool bVar0;
	int iVar1;
	if (Local_30.f_46 == 0)
	{
		if ((__LIB_3__::func_646(uLocal_15[0], 0, &(Local_30.f_5), &iLocal_684, 0, 0) || __LIB_3__::func_646(uLocal_15[1], 0, &(Local_30.f_5), &iLocal_684, 0, 0)) || func_199())
		{
			bVar0 = true;
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_29, false, false))
		{
			iVar1 = __LIB_3__::func_568(iLocal_29, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_INJURED(iVar1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar1, Global_35, 1, 1))
				{
					bVar0 = true;
				}
			}
		}
		if (bVar0)
		{
			Local_30.f_46 = 1;
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_15[0], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_15[1], 0);
			func_61(3);
			return true;
		}
	}
	return false;
}

void func_61(int iParam0)
{
	iLocal_632 = iParam0;
}

void func_63()
{
	func_202();
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_29))
	{
		func_203();
		func_204();
	}
	if (Local_30.f_48 == 0)
	{
		if (__LIB_2__::func_118(uLocal_15[0], 1, 0) <= __LIB_3__::func_976())
		{
			__LIB_3__::func_426(&Local_30, &(Local_30.f_48), Local_30.f_3, &(Local_30.f_51.f_6));
		}
	}
	if (__LIB_3__::func_452(&Local_30, 1f, 60f, 55f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
		__LIB_2__::func_303(uLocal_15[2], uLocal_15[0], func_125(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 2081540604, 1, 0, 0);
		__LIB_2__::func_315(1891783641, uLocal_15[2], 1);
		func_208();
		func_61(1);
	}
}

void func_64()
{
	func_209();
	func_202();
	if (iLocal_672 == 1 || iLocal_667 == 1)
	{
		func_210();
	}
	if (iLocal_667 == 0 && iLocal_672 == 0)
	{
		func_211();
		if (__LIB_0__::func_163(uLocal_15[1], -1073489615))
		{
			TASK::CLEAR_PED_TASKS(uLocal_15[1], true, false);
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_417.f_2, "PBL_SHOOTS_LADY_QUICK"))
	{
		if (fLocal_663 >= 0.65f && iLocal_668 == 0)
		{
			iLocal_668 = 1;
			__LIB_1__::func_864(uLocal_15[2], 0, 0);
			__LIB_2__::func_360(&(Local_504[1 /*17*/]), "RE_INTER_ANTAGONIZE");
			Local_504[1 /*17*/].f_13 = func_125(29);
			__LIB_2__::func_411(&(Local_504[0 /*17*/]), 0, 0);
			__LIB_3__::func_158(&(Local_504[1 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_504[1 /*17*/]), 1, 0);
			PED::_0x4C57F27D1554E6B0(uLocal_15[1], PED::GET_PED_BONE_COORDS(uLocal_15[2], 21030, 0f, 0f, 0.5f), 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
		}
	}
	func_60();
}

void func_65()
{
	func_209();
	func_202();
	if (iLocal_672 == 1 || (iLocal_667 == 1 && !func_214()))
	{
		func_210();
	}
	if (iLocal_672 == 0 && !func_214())
	{
		func_211();
		if (__LIB_0__::func_163(uLocal_15[1], -1073489615))
		{
			TASK::CLEAR_PED_TASKS(uLocal_15[1], true, false);
		}
	}
	Local_30.f_44 = 1;
	if (ANIMSCENE::_0x1F0E401031E20146(Local_417.f_2, "PBL_SHOOTS_LADY_QUICK"))
	{
		if (fLocal_663 >= 0.62f && iLocal_668 == 0)
		{
			iLocal_668 = 1;
			__LIB_2__::func_360(&(Local_504[1 /*17*/]), "RE_INTER_ANTAGONIZE");
			Local_504[1 /*17*/].f_13 = func_125(29);
			__LIB_2__::func_411(&(Local_504[0 /*17*/]), 0, 0);
			__LIB_3__::func_158(&(Local_504[1 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_504[1 /*17*/]), 1, 0);
			__LIB_4__::func_268(2, 0, 0, "RE_CCART_HONOR_WITNESS", 0, 0, 1065353216 /* Float: 1f */, 0);
			PED::_0x4C57F27D1554E6B0(uLocal_15[1], PED::GET_PED_BONE_COORDS(uLocal_15[2], 21030, 0f, 0f, 0f), 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
			AUDIO::STOP_PED_SPEAKING(uLocal_15[2], true);
		}
	}
	func_60();
}

void func_66()
{
	Local_30.f_44 = 1;
	iLocal_670 = 1;
	func_202();
	func_216();
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_29, true))
	{
		if (func_217())
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_15[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_15[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			__LIB_3__::func_460(Global_35, &uLocal_661, 0, 0, 0, 8f, 10, 0, 0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_29, 1f, 3, false);
			MAP::REMOVE_BLIP(&(iLocal_22[0]));
			MAP::REMOVE_BLIP(&(iLocal_22[1]));
			iLocal_669 = 1;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			__LIB_2__::func_122(uLocal_15[2], "SCREAM_TERROR", 1744022339, 0, 1, 0, 0, 1);
			__LIB_1__::func_148(&uLocal_638);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_417.f_2, "PBL_EXIT");
			iLocal_633 = 3;
			iLocal_634 = 0;
			__LIB_3__::func_158(&(Local_577[0 /*17*/]), 0);
			__LIB_3__::func_158(&(Local_577[1 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_577[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_577[1 /*17*/]), 1, 0);
			__LIB_4__::func_268(13, 0, 0, "RE_HONOR_SAVED_VICTIM", 0, 0, 1065353216 /* Float: 1f */, 0);
			func_61(4);
		}
	}
	if (__LIB_2__::func_118(uLocal_15[0], 1, 1) >= 100f || __LIB_2__::func_118(uLocal_15[1], 1, 1) >= 100f)
	{
		__LIB_0__::func_325(&(iLocal_22[0]));
		__LIB_0__::func_325(&(iLocal_22[1]));
	}
	else
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_22[0]))
		{
			iLocal_22[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_15[0]);
		}
		if (!MAP::DOES_BLIP_EXIST(iLocal_22[1]))
		{
			iLocal_22[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_15[1]);
		}
	}
	switch (iLocal_660)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0)))
			{
				PED::SET_PED_CONFIG_FLAG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0), 287, false);
				PED::SET_PED_CONFIG_FLAG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0), 294, true);
				PED::SET_PED_CONFIG_FLAG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0), 312, true);
			}
			__LIB_3__::func_158(&(Local_504[0 /*17*/]), 1);
			__LIB_3__::func_158(&(Local_504[1 /*17*/]), 1);
			__LIB_2__::func_593(&(Local_461[0 /*21*/]), &Local_504);
			__LIB_2__::func_593(&(Local_461[1 /*21*/]), &Local_504);
			VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_29, 1f, 3, false);
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_417.f_2, "PBL_FEMALE_IDLE"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_417.f_2, "PBL_FEMALE_IDLE", true);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_417.f_2, "bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_417.f_2, false);
			__LIB_2__::func_272(uLocal_15[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 99, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_15[0], true))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_676);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_676);
				if ((iLocal_684 == 256 || iLocal_684 == 4) || iLocal_684 == 16)
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_676);
				TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_15[0], iLocal_676, 0.6f, 0.6f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_676);
			}
			iLocal_660++;
			break;
		case 1:
			__LIB_2__::func_122(uLocal_15[2], "SCREAM_TERROR", 1744022339, 0, 1, 0, 0, 1);
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_15[1], true))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_677);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_677);
				if ((iLocal_684 == 256 || iLocal_684 == 4) || iLocal_684 == 16)
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_677);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_15[1], iLocal_677);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_677);
			}
			iLocal_660++;
			break;
	}
	if ((__LIB_2__::func_118(uLocal_15[1], 1, 1) >= 20f || __LIB_2__::func_118(uLocal_15[0], 1, 1) >= 20f) || ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0)))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[1], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[0], 3, true);
	}
	if (func_221())
	{
		if (!PED::IS_PED_DEAD_OR_DYING(uLocal_15[2], true))
		{
			__LIB_2__::func_122(uLocal_15[2], "SCREAM_TERROR", 1744022339, 0, 1, 0, 0, 1);
			__LIB_1__::func_148(&uLocal_638);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_417.f_2, "PBL_EXIT");
			iLocal_633 = 3;
			iLocal_634 = 0;
			__LIB_3__::func_158(&(Local_577[0 /*17*/]), 0);
			__LIB_3__::func_158(&(Local_577[1 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_577[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_577[1 /*17*/]), 1, 0);
			__LIB_4__::func_268(13, 0, 0, "RE_HONOR_SAVED_VICTIM", 0, 0, 1065353216 /* Float: 1f */, 0);
			func_61(4);
		}
		else
		{
			func_61(6);
		}
	}
	if ((FIRE::IS_ENTITY_ON_FIRE(uLocal_15[1]) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_15[0])) && iLocal_666 == 0)
	{
		if (__LIB_2__::func_227(-4f, 1, 0, 0))
		{
			iLocal_666 = 1;
			__LIB_2__::func_303(uLocal_15[0], Global_35, func_125(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[1], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[0], 3, true);
		}
	}
	if ((FIRE::IS_ENTITY_ON_FIRE(uLocal_15[0]) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_15[1])) && iLocal_666 == 0)
	{
		if (func_193(uLocal_15[1], Global_35, func_125(22), 1.2f))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[1], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_15[0], 3, true);
			iLocal_666 = 1;
		}
	}
}

void func_67()
{
	if (iLocal_665 == 1)
	{
		if (fLocal_663 >= 0.72f)
		{
			__LIB_1__::func_864(uLocal_15[3], 0, 0);
			__LIB_1__::func_864(uLocal_15[4], 0, 0);
		}
	}
	if (__LIB_2__::func_118(uLocal_15[2], 1, 1) <= 12f || __LIB_0__::func_264(&uLocal_638) >= 10f)
	{
		iLocal_665 = 1;
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_417.f_2, "PBL_EXIT"))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_417.f_2, "PBL_EXIT", true);
			ANIMSCENE::SET_ANIM_SCENE_PAUSED(Local_417.f_2, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_417.f_2, "bool", true, false);
			ENTITY::_0x835F131E7DC8F97A(uLocal_15[2], 100f, 0, 0);
			__LIB_0__::func_37(&uLocal_638);
		}
	}
	if (fLocal_663 >= 0.83f)
	{
		if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_29, false))
		{
			if (ENTITY::GET_ENTITY_SPEED(iLocal_29) >= 0.1f)
			{
				if (!PED::IS_PED_RAGDOLL(uLocal_15[2]))
				{
					PED::SET_PED_TO_RAGDOLL(uLocal_15[2], 1000, 4000, 0, false, true, false);
				}
			}
		}
	}
	if (iLocal_665 == 1)
	{
		if (func_223())
		{
			PED::SET_PED_KEEP_TASK(uLocal_15[2], true);
			PED::SET_PED_KEEP_TASK(uLocal_15[3], true);
			PED::SET_PED_KEEP_TASK(uLocal_15[4], true);
			if (MAP::DOES_BLIP_EXIST(iLocal_22[2]))
			{
				MAP::REMOVE_BLIP(&(iLocal_22[2]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0)))
			{
				PED::SET_PED_CONFIG_FLAG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0), 287, true);
				PED::SET_PED_CONFIG_FLAG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0), 294, false);
				PED::SET_PED_CONFIG_FLAG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_29, 0), 312, false);
			}
			func_61(5);
		}
	}
}

void func_68()
{
	float fVar0;
	fVar0 = 5f;
	if (__LIB_0__::func_71(Global_35))
	{
		fVar0 = 10f;
	}
	if (__LIB_2__::func_118(uLocal_15[2], 1, 1) < fVar0 && __LIB_0__::func_665(uLocal_15[2], iLocal_29, 1, 0) > 5f)
	{
		switch (iLocal_662)
		{
			case 0:
				if (!__LIB_0__::func_75(&uLocal_650))
				{
					__LIB_1__::func_283(&uLocal_650, 0);
				}
				else if (__LIB_2__::func_227(2f, 1, uLocal_15[2], 1))
				{
					if (__LIB_0__::func_264(&uLocal_650) > 5f)
					{
						__LIB_2__::func_303(uLocal_15[2], Global_35, func_125(38), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_662++;
						__LIB_1__::func_148(&uLocal_650);
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_650);
				}
				break;
			case 1:
				if (__LIB_2__::func_227(3f, 1, uLocal_15[2], 1))
				{
					if (__LIB_0__::func_264(&uLocal_650) > 5f)
					{
						__LIB_2__::func_303(uLocal_15[2], Global_35, func_125(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_662++;
						__LIB_1__::func_148(&uLocal_650);
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_650);
				}
				break;
			case 2:
				if (__LIB_2__::func_227(2f, 1, uLocal_15[2], 1))
				{
					if (__LIB_0__::func_264(&uLocal_650) > 8f)
					{
						__LIB_2__::func_303(uLocal_15[2], Global_35, func_125(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_662++;
						__LIB_1__::func_148(&uLocal_650);
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_650);
				}
				break;
		}
	}
}

char* func_125(int iParam0)
{
	if (iLocal_14 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "RE_CC_UNI_V1_CALLOUT";
			case 1:
				return "RE_CC_UNI_V1_INITIAL_ALT_A";
			case 2:
				return "RE_CC_UNI_V1_INITIAL_B";
			case 3:
				return "RE_CC_UNI_V1_INITIAL_ALT_C";
			case 4:
				return "RE_CC_UNI_V1_INITIAL_D";
			case 5:
				return "RE_CC_UNI_V1_INITIAL_E";
			case 6:
				return "RE_CC_UNI_V1_INITIAL_F";
			case 7:
				return "RE_CC_UNI_V1_INITIAL_G";
			case 8:
				return "RE_CC_UNI_V1_KILLED_WOMAN_A";
			case 20:
				return "RE_CC_UNI_V1_HELP_A_ALT";
			case 21:
				return "";
			case 10:
				return "RE_CC_UNI_V1_SEEN_A";
			case 11:
				return "RE_CC_UNI_V1_SEEN_A_FEUD";
			case 12:
				return "RE_CC_UNI_V1_SEEN_A_FEUD_AGGRO";
			case 13:
				return "RE_CC_UNI_V1_SEEN_B";
			case 14:
				return "RE_CC_UNI_V1_SEEN_C";
			case 15:
				return "RE_CC_UNI_V1_SEEN_D";
			case 16:
				return "RE_CC_UNI_V1_ATTACK_A";
			case 17:
				return "RE_CC_UNI_V1_ATTACK_B";
			case 18:
				return "RE_CC_UNI_V1_ATTACK_C";
			case 19:
				return "RE_CC_UNI_V1_ATTACK_D";
			case 22:
				return "RE_CC_UNI_V1_BURN";
			case 23:
				return "RE_CC_UNI_V1_IDLE_SOB";
			case 24:
				return "RE_CC_UNI_V1_HELP_A";
			case 25:
				return "RE_CC_UNI_V1_ATTACK_C";
			case 26:
				return "RE_CC_UNI_V1_ATTACK_C";
			case 27:
				return "RE_CC_UNI_V1_POSITIVE_PLAYER_A0";
			case 28:
				return "RE_CC_UNI_V1_NEGATIVE_PLAYER_A0";
			case 29:
				return "RE_CC_UNI_V1_NEGATIVE_PLAYER_A1";
			case 30:
				return "RE_CC_UNI_V1_POSITIVE_PLAYER_A";
			case 31:
				return "RE_CC_UNI_V1_POSITIVE_PLAYER_B";
			case 32:
				return "RE_CC_UNI_V1_NEGATIVE_PLAYER_A";
			case 33:
				return "RE_CC_UNI_V1_NEGATIVE_PLAYER_B";
			case 34:
				return "DEFUSE_RESPONSE";
			case 36:
				return "GENERIC_ANGRY_REACTION";
			case 35:
				return "RE_CC_UNI_V1_POSITIVE_WOMAN_B";
			case 37:
				return "RE_CC_UNI_V1_NEGATIVE_WOMAN_B";
			case 38:
				return "RE_CC_UNI_V1_FOLLOWING_A";
			case 39:
				return "RE_CC_UNI_V1_FOLLOWING_B";
			case 40:
				return "RE_CC_UNI_V1_FOLLOWING_C";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "RE_CC_UNI_V2_INITIAL_NO";
			case 1:
				return "RE_CC_UNI_V2_INITIAL_A";
			case 2:
				return "RE_CC_UNI_V2_INITIAL_B";
			case 3:
				return "RE_CC_UNI_V2_INITIAL_C";
			case 4:
				return "RE_CC_UNI_V2_INITIAL_D";
			case 5:
				return "RE_CC_UNI_V2_INITIAL_E";
			case 6:
				return "RE_CC_UNI_V2_INITIAL_F";
			case 7:
				return "RE_CC_UNI_V2_INITIAL_G";
			case 8:
				return "RE_CC_UNI_V2_KILLED_WOMAN_A";
			case 9:
				return "RE_CC_UNI_V2_KILLED_WOMAN_A";
			case 20:
				return "PANIC_COMMUNICATE";
			case 21:
				return "RE_CC_UNI_V2_WOMAN_AGGRO_A";
			case 10:
				return "RE_CC_UNI_V2_SEEN_A";
			case 13:
				return "RE_CC_UNI_V2_SEEN_B";
			case 14:
				return "RE_CC_UNI_V2_SEEN_C";
			case 15:
				return "RE_CC_UNI_V2_SEEN_D";
			case 16:
				return "RE_CC_UNI_V2_ATTACK_B";
			case 17:
				return "RE_CC_UNI_V2_ATTACK_A";
			case 18:
				return "RE_CC_UNI_V2_ATTACK_C";
			case 19:
				return "RE_CC_UNI_V2_ATTACK_D";
			case 22:
				return "RE_CC_UNI_V2_BURN";
			case 23:
				return "RE_CC_UNI_V2_WOMAN_LEAVE";
			case 24:
				return "RE_CC_UNI_V2_HELP_A";
			case 25:
				return "";
			case 26:
				return "GET_SUSPECT_MALE";
			case 27:
				return "RE_CC_UNI_V2_POSITIVE_PLAYER_A0";
			case 28:
				return "RE_CC_UNI_V2_NEGATIVE_PLAYER_A0";
			case 29:
				return "RE_CC_UNI_V2_NEGATIVE_PLAYER_A1";
			case 30:
				return "RE_CC_UNI_V2_POSITIVE_PLAYER_A";
			case 31:
				return "RE_CC_UNI_V2_POSITIVE_PLAYER_B";
			case 32:
				return "RE_CC_UNI_V2_NEGATIVE_PLAYER_A";
			case 33:
				return "RE_CC_UNI_V2_NEGATIVE_PLAYER_B";
			case 34:
				return "DEFUSE_RESPONSE";
			case 36:
				return "GENERIC_INSULT_HIGH_MALE";
			case 35:
				return "RE_CC_UNI_V2_POSITIVE_WOMAN_B";
			case 37:
				return "RE_CC_UNI_V2_NEGATIVE_WOMAN_B";
			case 38:
				return "";
			case 39:
				return "";
			case 40:
				return "";
			default:
				break;
		}
	}
	return "";
}

int func_188(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_350(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_2__::func_588(iParam1, uParam3, uParam0);
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

bool func_193(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	if (!__LIB_0__::func_75(&uLocal_641))
	{
		__LIB_1__::func_148(&uLocal_641);
	}
	else if (__LIB_0__::func_264(&uLocal_641) > fParam3)
	{
		__LIB_2__::func_303(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_0__::func_37(&uLocal_641);
		return true;
	}
	return false;
}

int func_199()
{
	if (PED::IS_PED_ON_VEHICLE(Global_35, false))
	{
		return 1;
	}
	return 0;
}

void func_202()
{
	if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), ENTITY::GET_ENTITY_COORDS(iLocal_29, true, false), 5f) && !ENTITY::IS_ENTITY_DEAD(uLocal_15[2]))
	{
		iLocal_426 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uLocal_15[2], -1f, 40f, 20f, 0f, -1f, 180f, false, false, -1, -1);
	}
}

void func_203()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_417.f_2, false) && iLocal_435 == 0)
	{
		iLocal_435 = 1;
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_417.f_2, iLocal_29, 0);
	}
}

void func_204()
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_417.f_2, "PBL_FEMALE_IDLE"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_417.f_2, "PBL_FEMALE_IDLE", true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_417.f_2, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_417.f_2, false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_417.f_2);
	}
}

void func_208()
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_417.f_2, "PBL_SHOOTS_LADY_QUICK");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_417.f_2, "PBL_EXIT");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_417.f_2, "PBL_FEMALE_IDLE");
}

void func_209()
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	fVar1 = 3f;
	vVar2 = { 8f, 15f, 3f };
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
		if (fVar0 <= 1f)
		{
			fVar1 = 1f;
			vVar2 = { 15f, 15f, 15f };
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 1.5f;
			vVar2 = { 30f, 30f, 30f };
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 2f;
			vVar2 = { 35f, 35f, 35f };
		}
		else
		{
			fVar1 = 3f;
			vVar2 = { 45f, 45f, 45f };
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
		if (fVar0 <= 1f)
		{
			fVar1 = 1f;
			vVar2 = { 15f, 15f, 15f };
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 1.5f;
			vVar2 = { 20f, 20f, 20f };
		}
		else
		{
			fVar1 = 3f;
			vVar2 = { 25f, 25f, 25f };
		}
	}
	if (!__LIB_0__::func_75(&uLocal_644) && ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_29, true, false), vVar2, false, true, 0))
	{
		__LIB_1__::func_148(&uLocal_644);
		iLocal_671 = 1;
	}
	if (__LIB_0__::func_264(&uLocal_644) >= fVar1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_29, true, false), vVar2, false, true, 0) && iLocal_671 == 1)
		{
			iLocal_672 = 1;
		}
		else
		{
			iLocal_671 = 0;
			iLocal_672 = 0;
			__LIB_0__::func_37(&uLocal_644);
		}
	}
}

void func_210()
{
	__LIB_3__::func_673(uLocal_15[0], Global_35, &uLocal_436, 5000, 15);
	__LIB_3__::func_673(uLocal_15[1], Global_35, &uLocal_436, 5000, 15);
	switch (iLocal_659)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (iLocal_674 == 0)
				{
					if (__LIB_2__::func_155(1, 1))
					{
						__LIB_2__::func_303(uLocal_15[0], Global_35, func_125(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_15[0], Global_35, func_125(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_674 = 1;
				}
				func_392();
				Local_504[0 /*17*/].f_13 = func_125(30);
				__LIB_2__::func_360(&(Local_504[0 /*17*/]), "RE_INTER_DEFUSE");
				iLocal_633 = 2;
				__LIB_3__::func_158(&(Local_504[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_504[1 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_504[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_504[1 /*17*/]), 0, 0);
				iLocal_672 = 0;
				__LIB_1__::func_148(&uLocal_635);
				if (ENTITY::IS_ENTITY_DEAD(uLocal_15[2]))
				{
					__LIB_2__::func_360(&(Local_504[1 /*17*/]), "RE_INTER_ANTAGONIZE");
					Local_504[1 /*17*/].f_13 = func_125(29);
				}
				iLocal_659++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, uLocal_15[0], 1))
			{
				__LIB_2__::func_411(&(Local_504[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_504[1 /*17*/]), 1, 0);
				if (__LIB_2__::func_155(1, 1))
				{
					__LIB_2__::func_303(uLocal_15[0], Global_35, func_125(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_659 = 4;
				}
				else
				{
					iLocal_659++;
				}
			}
			break;
		case 2:
			if ((!__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_15[0], &(Local_461[0 /*21*/])) || !__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_15[1], &(Local_461[1 /*21*/]))) || __LIB_2__::func_227(0f, 1, 0, 0))
			{
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					if (!PED::IS_PED_DEAD_OR_DYING(uLocal_15[2], true))
					{
						if (__LIB_2__::func_303(uLocal_15[2], Global_35, func_125(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							func_392();
							__LIB_2__::func_315(1891783641, uLocal_15[2], 1);
							__LIB_1__::func_148(&uLocal_635);
							iLocal_659++;
						}
					}
					else
					{
						iLocal_659++;
					}
				}
			}
			Local_30.f_44 = 1;
			break;
		case 3:
			if (((__LIB_2__::func_227(-4f, 1, uLocal_15[1], 1) && __LIB_2__::func_227(-4f, 1, uLocal_15[2], 1)) && __LIB_2__::func_227(-4f, 1, Global_35, 1)) && __LIB_0__::func_264(&uLocal_635) > 3f)
			{
				if (!func_394())
				{
					if (__LIB_2__::func_303(uLocal_15[1], Global_35, func_125(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						func_392();
						__LIB_1__::func_148(&uLocal_635);
						iLocal_659++;
						__LIB_2__::func_411(&(Local_504[0 /*17*/]), 0, 0);
						iLocal_667 = 1;
					}
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				iLocal_659++;
				func_61(3);
			}
			break;
	}
}

void func_211()
{
	if (iLocal_634 == 1 || iLocal_634 == 2)
	{
		return;
	}
	if (iLocal_14 == 0)
	{
		switch (iLocal_658)
		{
			case -1:
				if (__LIB_2__::func_227(0f, 1, uLocal_15[2], 1))
				{
					if (__LIB_2__::func_303(uLocal_15[2], Global_35, func_125(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
					{
						__LIB_2__::func_315(1891783641, uLocal_15[2], 1);
						iLocal_658++;
					}
				}
				break;
			case 0:
				if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_2__::func_118(uLocal_15[2], 1, 1) <= 60f)
				{
					if (__LIB_2__::func_303(uLocal_15[0], uLocal_15[1], func_125(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
					{
						__LIB_2__::func_315(1891783641, uLocal_15[0], 1);
						iLocal_658++;
					}
				}
				break;
			case 1:
				if (__LIB_2__::func_227(-1f, 1, 0, 0))
				{
					__LIB_2__::func_303(uLocal_15[2], uLocal_15[0], func_125(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_15[2], 1);
					iLocal_658++;
				}
				break;
			case 2:
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					if (__LIB_2__::func_303(uLocal_15[0], uLocal_15[1], func_125(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
					{
						iLocal_658++;
					}
				}
				break;
			case 3:
				if (__LIB_2__::func_227(-6f, 1, 0, 0))
				{
					if (__LIB_2__::func_303(uLocal_15[1], uLocal_15[0], func_125(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
					{
						iLocal_658++;
					}
				}
				break;
			case 4:
				if (__LIB_2__::func_227(-3f, 1, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_15[2]))
					{
						if (__LIB_2__::func_303(uLocal_15[2], uLocal_15[0], func_125(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
						{
							__LIB_2__::func_315(1891783641, uLocal_15[2], 1);
							VEHICLE::_0x104D9A7B1C0D0783(iLocal_29, 0f);
							iLocal_658++;
						}
					}
					else
					{
						iLocal_658++;
					}
				}
				break;
			case 5:
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					func_395();
					fLocal_663 = 0f;
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_417.f_2, "PBL_FEMALE_IDLE");
					func_61(2);
					__LIB_2__::func_303(uLocal_15[0], uLocal_15[2], func_125(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_658++;
				}
				break;
			case 6:
				if (__LIB_2__::func_227(-6f, 1, 0, 0) && fLocal_663 >= 0.98f)
				{
					__LIB_2__::func_303(uLocal_15[0], uLocal_15[1], func_125(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_658++;
				}
				break;
			case 7:
				if (__LIB_2__::func_227(-6f, 1, 0, 0))
				{
					__LIB_2__::func_303(uLocal_15[1], uLocal_15[1], func_125(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_658++;
				}
				break;
			case 8:
				if (__LIB_2__::func_227(-6f, 1, 0, 0))
				{
					VEHICLE::_0x104D9A7B1C0D0783(iLocal_29, 4f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_15[0], iLocal_29, 4f, 2113617);
					iLocal_658++;
				}
				break;
		}
	}
	else if (iLocal_14 == 1)
	{
		switch (iLocal_658)
		{
			case -1:
				if (__LIB_2__::func_227(0f, 1, uLocal_15[2], 1))
				{
					if (__LIB_2__::func_303(uLocal_15[2], Global_35, func_125(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
					{
						__LIB_2__::func_315(1891783641, uLocal_15[2], 1);
						iLocal_658++;
					}
				}
				break;
			case 0:
				if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_2__::func_118(uLocal_15[2], 1, 1) <= 60f)
				{
					if (__LIB_2__::func_303(uLocal_15[0], uLocal_15[1], func_125(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
					{
						__LIB_2__::func_315(1891783641, uLocal_15[0], 1);
						iLocal_658++;
					}
				}
				break;
			case 1:
				if (__LIB_2__::func_227(-2f, 1, 0, 0))
				{
					__LIB_2__::func_315(1891783641, uLocal_15[2], 1);
					__LIB_2__::func_303(uLocal_15[2], uLocal_15[0], func_125(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_658++;
				}
				break;
			case 2:
				if (__LIB_2__::func_227(-5f, 1, 0, 0))
				{
					if (__LIB_2__::func_303(uLocal_15[0], uLocal_15[1], func_125(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
					{
						iLocal_658++;
					}
				}
				break;
			case 3:
				if (__LIB_2__::func_227(-6f, 1, 0, 0))
				{
					if (__LIB_2__::func_303(uLocal_15[1], uLocal_15[0], func_125(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
					{
						iLocal_658++;
					}
				}
				break;
			case 4:
				if (__LIB_2__::func_227(-5f, 1, 0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_15[2]))
					{
						if (__LIB_2__::func_303(uLocal_15[2], uLocal_15[0], func_125(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0))
						{
							__LIB_2__::func_315(1891783641, uLocal_15[2], 1);
							VEHICLE::_0x104D9A7B1C0D0783(iLocal_29, 0f);
							iLocal_658++;
						}
					}
					else
					{
						iLocal_658++;
					}
				}
				break;
			case 5:
				if (__LIB_2__::func_227(-5f, 1, 0, 0))
				{
					func_395();
					fLocal_663 = 0f;
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_417.f_2, "PBL_FEMALE_IDLE");
					func_61(2);
					__LIB_2__::func_303(uLocal_15[0], uLocal_15[2], func_125(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_658++;
				}
				break;
			case 6:
				if (__LIB_2__::func_227(-1f, 1, 0, 0) && fLocal_663 >= 0.98f)
				{
					__LIB_2__::func_303(uLocal_15[0], uLocal_15[1], func_125(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_658++;
				}
				break;
			case 7:
				if (__LIB_2__::func_227(-6f, 1, 0, 0))
				{
					VEHICLE::_0x104D9A7B1C0D0783(iLocal_29, 4f);
					TASK::TASK_VEHICLE_DRIVE_WANDER(uLocal_15[0], iLocal_29, 4f, 2113617);
					iLocal_658++;
				}
				break;
		}
	}
}

bool func_214()
{
	if ((ENTITY::GET_ENTITY_SPEED(iLocal_29) <= 1f || VEHICLE::IS_VEHICLE_STOPPED(iLocal_29)) || VEHICLE::_0xA9E185D498B9AC67(iLocal_29, Global_35))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_29, 0f, 5f, 0f), 4f, 6f, 3f, false, true, 0))
		{
			return true;
		}
	}
	return false;
}

void func_216()
{
	if (iLocal_673 == 0)
	{
		if (iLocal_667 == 1)
		{
			switch (iLocal_656)
			{
				case 0:
					if (!PED::IS_PED_DEAD_OR_DYING(uLocal_15[1], true) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_15[1]))
					{
						if (__LIB_2__::func_227(-4f, 1, uLocal_15[1], 1) && __LIB_2__::func_227(-4f, 1, uLocal_15[0], 1))
						{
							__LIB_2__::func_303(uLocal_15[1], Global_35, func_125(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_673 = 1;
							iLocal_656++;
						}
					}
					else if ((__LIB_2__::func_227(-4f, 1, uLocal_15[0], 1) && __LIB_2__::func_227(-4f, 1, uLocal_15[1], 1)) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_15[0]))
					{
						__LIB_2__::func_303(uLocal_15[0], Global_35, func_125(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_673 = 1;
						iLocal_656++;
					}
					break;
			}
		}
		else
		{
			switch (iLocal_656)
			{
				case 0:
					if (!PED::IS_PED_DEAD_OR_DYING(uLocal_15[1], true) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_15[1]))
					{
						if (__LIB_2__::func_227(-4f, 1, uLocal_15[1], 1) && __LIB_2__::func_227(-4f, 1, uLocal_15[0], 1))
						{
							__LIB_2__::func_303(uLocal_15[1], Global_35, func_125(17), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_673 = 1;
							iLocal_656++;
						}
					}
					else if ((__LIB_2__::func_227(-4f, 1, uLocal_15[0], 1) && __LIB_2__::func_227(-4f, 1, uLocal_15[1], 1)) && !FIRE::IS_ENTITY_ON_FIRE(uLocal_15[0]))
					{
						__LIB_2__::func_303(uLocal_15[0], Global_35, func_125(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_673 = 1;
						iLocal_656++;
					}
					break;
			}
		}
	}
}

bool func_217()
{
	if (__LIB_2__::func_118(uLocal_15[0], 1, 0) >= 100f && __LIB_2__::func_118(uLocal_15[1], 1, 0) >= 100f)
	{
		return true;
	}
	if (__LIB_2__::func_118(uLocal_15[0], 1, 0) >= 100f && ENTITY::IS_ENTITY_DEAD(uLocal_15[1]))
	{
		return true;
	}
	if (__LIB_2__::func_118(uLocal_15[1], 1, 0) >= 100f && ENTITY::IS_ENTITY_DEAD(uLocal_15[0]))
	{
		return true;
	}
	if (__LIB_2__::func_118(uLocal_15[0], 1, 0) >= 100f && PED::_IS_PED_HOGTIED(uLocal_15[1]))
	{
		return true;
	}
	if (__LIB_2__::func_118(uLocal_15[1], 1, 0) >= 100f && PED::_IS_PED_HOGTIED(uLocal_15[0]))
	{
		return true;
	}
	return false;
}

bool func_221()
{
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_15[0], true) || PED::IS_PED_FATALLY_INJURED(uLocal_15[0])) && (PED::IS_PED_DEAD_OR_DYING(uLocal_15[1], true) || PED::IS_PED_FATALLY_INJURED(uLocal_15[1])))
	{
		MAP::REMOVE_BLIP(&(iLocal_22[0]));
		MAP::REMOVE_BLIP(&(iLocal_22[1]));
		return true;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_15[0], true) || PED::IS_PED_FATALLY_INJURED(uLocal_15[0])) && PED::_IS_PED_HOGTIED(uLocal_15[1]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_15[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		MAP::REMOVE_BLIP(&(iLocal_22[0]));
		MAP::REMOVE_BLIP(&(iLocal_22[1]));
		return true;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_15[1], true) || PED::IS_PED_FATALLY_INJURED(uLocal_15[1])) && PED::_IS_PED_HOGTIED(uLocal_15[0]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_15[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		MAP::REMOVE_BLIP(&(iLocal_22[0]));
		MAP::REMOVE_BLIP(&(iLocal_22[1]));
		return true;
	}
	if (PED::_IS_PED_HOGTIED(uLocal_15[0]) && PED::_IS_PED_HOGTIED(uLocal_15[1]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_15[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_15[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		MAP::REMOVE_BLIP(&(iLocal_22[0]));
		MAP::REMOVE_BLIP(&(iLocal_22[1]));
		return true;
	}
	return false;
}

bool func_223()
{
	int iVar0;
	iVar0 = 0;
	switch (iLocal_657)
	{
		case 0:
			if (fLocal_663 > 0.1f)
			{
				if (__LIB_2__::func_227(-4f, 1, uLocal_15[2], 1))
				{
					__LIB_2__::func_303(uLocal_15[2], Global_35, func_125(23), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 2081540604, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_653);
					iLocal_657++;
				}
			}
			if ((fLocal_663 >= 0.99f || ANIMSCENE::_0x005E6F28DD7ED58D(Local_417.f_2, "Female")) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_15[2], Local_417.f_2))
			{
				iLocal_657++;
			}
			break;
		case 1:
			if (iLocal_14 == 0)
			{
				iVar0 = 2;
			}
			if (__LIB_2__::func_227(2f, 1, uLocal_15[2], 1))
			{
				if (__LIB_0__::func_264(&uLocal_653) > IntToFloat(iVar0))
				{
					__LIB_2__::func_303(uLocal_15[2], Global_35, func_125(24), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 2081540604, 1, 0, 0);
					iLocal_657++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_653);
			}
			if ((fLocal_663 >= 0.99f || ANIMSCENE::_0x005E6F28DD7ED58D(Local_417.f_2, "Female")) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_15[2], Local_417.f_2))
			{
				iLocal_657++;
			}
			break;
		case 2:
			if ((fLocal_663 >= 0.99f || ANIMSCENE::_0x005E6F28DD7ED58D(Local_417.f_2, "Female")) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_15[2], Local_417.f_2))
			{
				if (__LIB_2__::func_227(2f, 1, uLocal_15[2], 1))
				{
					__LIB_2__::func_303(uLocal_15[2], Global_35, func_125(20), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 2081540604, 1, 0, 0);
					ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_29, true);
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_15[2], Global_35, 4, 384, -1082130432 /* Float: -1f */, -1, 0);
					iLocal_657++;
					return true;
				}
			}
			break;
	}
	return false;
}

int func_350(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_350(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_392()
{
	if (!__LIB_0__::func_163(uLocal_15[1], -1073489615) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_15[1], Local_417.f_2))
	{
		TASK::TASK_AIM_AT_ENTITY(uLocal_15[1], Global_35, -1, 1, 1);
	}
}

bool func_394()
{
	if ((!PED::IS_PED_FACING_PED(Global_35, uLocal_15[0], 80f) && !PED::IS_PED_FACING_PED(Global_35, uLocal_15[0], 80f)) && (!TASK::IS_PED_STILL(Global_35) || !TASK::IS_PED_STILL(PED::GET_MOUNT(Global_35))))
	{
		return true;
	}
	return false;
}

void func_395()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_417.f_2, "passenger", uLocal_15[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_417.f_2, "DRIVER", uLocal_15[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_417.f_2, "bool", true, false);
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_417.f_2, "PBL_SHOOTS_LADY_QUICK"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_417.f_2, "PBL_SHOOTS_LADY_QUICK", true);
	}
}

