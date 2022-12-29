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
	struct<193> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_208 = 0;
	struct<12> Local_209[1];
	struct<32> Local_222[5];
	struct<2> Local_383[1];
	var uLocal_386 = 1;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395[5] = { 0, 0, 0, 0, 0 };
	int iLocal_401[5] = { 0, 0, 0, 0, 0 };
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	var uLocal_410[3] = { 0, 0, 0 };
	char* sLocal_414[49] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char* sLocal_464 = NULL;
	vector3 vLocal_465 = { 0f, 0f, 0f };
	vector3 vLocal_468 = { 0f, 0f, 0f };
	vector3 vLocal_471 = { 0f, 0f, 0f };
	vector3 vLocal_474 = { 0f, 0f, 0f };
	float fLocal_477 = 0f;
	float fLocal_478 = 0f;
	float fLocal_479 = 0f;
	float fLocal_480 = 0f;
	vector3 vLocal_481 = { 0f, 0f, 0f };
	vector3 vLocal_484 = { 0f, 0f, 0f };
	float fLocal_487 = 0f;
	float fLocal_488 = 0f;
	vector3 vLocal_489 = { 0f, 0f, 0f };
	vector3 vLocal_492 = { 0f, 0f, 0f };
	vector3 vLocal_495 = { 0f, 0f, 0f };
	vector3 vLocal_498[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	int iLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = -1;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 2;
	var uLocal_520 = 1;
	var uLocal_521 = 1;
	var uLocal_522 = 1;
	var uLocal_523 = 0;
	var uLocal_524 = 1;
	var uLocal_525 = 2;
	var uLocal_526 = 2;
	var uLocal_527 = 3;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 3;
	var uLocal_531 = 1;
	var uLocal_532 = 3;
	var uLocal_533 = 3;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	struct<6> Local_536 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	struct<21> Local_544[5];
	struct<17> Local_650[3];
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	int iLocal_704 = 0;
	int iLocal_705 = 0;
	int iLocal_706 = 0;
	int iLocal_707 = 0;
	int iLocal_708 = 0;
	int iLocal_709 = 0;
	int iLocal_710 = 0;
	int iLocal_711 = 0;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	int iLocal_717 = 0;
	int iLocal_718 = 0;
	int iLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	var uLocal_734 = 0;
	int iLocal_735 = 0;
	bool bLocal_736 = false;
	bool bLocal_737 = false;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	bool bLocal_745 = false;
	bool bLocal_746 = false;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	var uLocal_757 = 0;
	int iLocal_758 = 0;
	float fLocal_759 = 0f;
	float fLocal_760 = 0f;
	float fLocal_761 = 0f;
	float fLocal_762 = 0f;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
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
	iLocal_713 = 1;
	iLocal_720 = 1;
	iLocal_721 = 1;
	iLocal_732 = 1;
	iLocal_748 = -1;
	fLocal_760 = 1f;
	fLocal_761 = 1f;
	fLocal_762 = 1f;
	Local_15.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_15.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_0__::func_11();
	__LIB_3__::func_368(&Local_15, 1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		__LIB_3__::func_429(PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP(), 106);
		bLocal_745 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_745, 463, 0);
		if (bLocal_745)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_713)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_15, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_9(&Local_15, &uLocal_809, &uLocal_808);
						__LIB_3__::func_352(&Local_15, 1);
						iLocal_713 = 0;
					}
					else if (Local_15.f_160)
					{
						func_6();
					}
					break;
				case 0:
					if (func_11())
					{
						iLocal_713 = 3;
					}
					break;
				case 3:
					if (func_12())
					{
						iLocal_713 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_15, &uLocal_395, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_6();
					}
					func_14();
					if (func_15())
					{
						Local_15.f_50 = 1;
						iLocal_744 = 1;
						func_6();
					}
					if (__LIB_3__::func_431(&Local_15, &uLocal_395, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_6();
					}
					break;
			}
			BUILTIN::WAIT(Local_15.f_158);
		}
	}
}

void func_6()
{
	if (iLocal_744 == 0)
	{
		Local_15.f_45 = 0;
	}
	else
	{
		Local_15.f_45 = 1;
	}
	__LIB_3__::func_493(&Local_15, &uLocal_395, &iLocal_401, iLocal_14, uLocal_809, uLocal_808, 0, 1, 0, 1);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_508))
	{
		PATHFIND::_0xD17672447692478E(uLocal_509, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_508, true);
	}
	VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
	GRAPHICS::_0x9CF1836C03FB67A2(&(uLocal_410[0]), 1);
	GRAPHICS::_0x9CF1836C03FB67A2(&(uLocal_410[1]), 1);
	GRAPHICS::_0x9CF1836C03FB67A2(&(uLocal_410[2]), 1);
	AUDIO::STOP_AUDIO_SCENE("BOAT_ATTACK_SCENE");
	__LIB_4__::func_445(1);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_407))
	{
		if (Local_15.f_46 == 0 && Local_15.f_48 == 0)
		{
			if (PROPSET::_DOES_VEHICLE_HAVE_ANY_LIGHT_PROPSET(iLocal_407))
			{
				PROPSET::_DELETE_PROPSET(PROPSET::_GET_VEHICLE_LIGHT_PROPSET(iLocal_407), true, true);
			}
		}
		AITRANSPORT::_0xBA8818212633500A(iLocal_407, 0, 0);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_407);
	}
	__LIB_3__::func_166(&Local_15);
	__LIB_2__::func_593(&(Local_544[0 /*21*/]), &Local_650);
	__LIB_2__::func_56(uLocal_395[0], 1, 1);
	__LIB_2__::func_56(uLocal_395[1], 1, 1);
	__LIB_2__::func_56(uLocal_395[2], 1, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
	}
}

bool func_11()
{
	switch (iLocal_714)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_15))
			{
				__LIB_4__::func_446();
				func_33();
				func_34();
				func_35();
				func_36();
				func_37();
				func_38();
				__LIB_4__::func_445(0);
				func_39();
				func_40();
				func_41();
				iLocal_714 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&Local_222))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_209))
			{
				return false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_464))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("REBAT_Sounds", 0))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_386))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_12()
{
	switch (iLocal_715)
	{
		case 0:
			if (__LIB_3__::func_479(Local_15.f_51, Local_15.f_51.f_3, &Local_222, &uLocal_395, 1, 0, -1, 1))
			{
				func_46();
				iLocal_715 = 1;
			}
			break;
		case 1:
			if (!func_47())
			{
				return false;
			}
			else if (iLocal_703 == 0)
			{
				iLocal_703 = PROPSET::_GET_VEHICLE_LIGHT_PROPSET(iLocal_407);
			}
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_407) && !ENTITY::IS_ENTITY_DEAD(iLocal_407)) && !PROPSET::_DOES_VEHICLE_HAVE_ANY_LIGHT_PROPSET(iLocal_407))
			{
				PROPSET::_ADD_LIGHT_PROPSET_TO_VEHICLE(iLocal_407, iLocal_702);
				func_48();
				func_49();
				iLocal_715 = 6;
			}
			break;
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_407))
			{
				VEHICLE::_GET_ROWING_OARS(iLocal_407, &iLocal_408, &iLocal_409);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_408) && !ENTITY::IS_ENTITY_DEAD(iLocal_409))
			{
				func_50();
				return true;
			}
			break;
	}
	return false;
}

void func_14()
{
	func_61();
	if (iLocal_14 == 0)
	{
		func_62();
	}
	else
	{
		func_63();
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(iLocal_407, true, false), 5f))
	{
		VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407);
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_536.f_1))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_536.f_1, false))
		{
			fLocal_759 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_536.f_1);
		}
	}
}

bool func_15()
{
	if (iLocal_14 == 0)
	{
		switch (iLocal_704)
		{
			case 0:
				func_64();
				break;
			case 1:
				func_65();
				break;
			case 2:
				func_66();
				break;
			case 3:
				func_67();
				break;
			case 4:
				func_68();
				break;
			case 5:
				func_69();
				break;
			case 7:
				PED::SET_PED_KEEP_TASK(uLocal_395[0], true);
				PED::SET_PED_KEEP_TASK(uLocal_395[1], true);
				PED::SET_PED_KEEP_TASK(uLocal_395[2], true);
				PED::SET_PED_KEEP_TASK(uLocal_395[3], true);
				PED::SET_PED_KEEP_TASK(uLocal_395[4], true);
				Local_15.f_50 = 1;
				Local_15.f_44 = 1;
				iLocal_744 = 1;
				return true;
			case 6:
				if (__LIB_2__::func_118(uLocal_395[0], 1, 0) >= 100f)
				{
					PED::SET_PED_KEEP_TASK(uLocal_395[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_395[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_395[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_395[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_395[4], true);
					Local_15.f_50 = 1;
					Local_15.f_160 = 1;
					iLocal_744 = 1;
					func_6();
				}
				break;
		}
	}
	else
	{
		switch (iLocal_705)
		{
			case 0:
				func_71();
				break;
			case 1:
				func_72();
				break;
			case 2:
				func_73();
				break;
			case 4:
				func_74();
				break;
			case 3:
				func_75();
				break;
			case 6:
				PED::SET_PED_KEEP_TASK(uLocal_395[0], true);
				PED::SET_PED_KEEP_TASK(uLocal_395[1], true);
				PED::SET_PED_KEEP_TASK(uLocal_395[3], true);
				PED::SET_PED_KEEP_TASK(uLocal_395[4], true);
				Local_15.f_50 = 1;
				Local_15.f_44 = 1;
				iLocal_744 = 1;
				return true;
			case 5:
				if (__LIB_2__::func_118(uLocal_395[0], 1, 0) >= 100f)
				{
					PED::SET_PED_KEEP_TASK(uLocal_395[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_395[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_395[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_395[4], true);
					Local_15.f_50 = 1;
					Local_15.f_160 = 1;
					iLocal_744 = 1;
					func_6();
				}
				break;
		}
	}
	return false;
}

void func_33()
{
	iLocal_702 = joaat("PG_VEH_ROWBOAT_LIGHTUPGRADE_1");
	PROPSET::_REQUEST_PROPSET(iLocal_702);
}

void func_34()
{
	vLocal_465 = { 2419.09f, 907.4f, 71.97f };
	fLocal_477 = 293.77f;
	vLocal_468 = { 2420.07f, 899.47f, 72.83f };
	fLocal_478 = 58.53f;
	vLocal_471 = { 2421.39f, 901.6f, 72.59f };
	fLocal_479 = 75.07f;
	vLocal_474 = { 2423.11f, 899.19f, 72.91f };
	fLocal_480 = 30.85f;
	vLocal_481 = { 2418.8f, 900.67f, 72.63f };
	vLocal_484 = { 2420.97f, 898.25f, 72.95f };
	fLocal_487 = 250.56f;
	fLocal_488 = 245.69f;
	vLocal_495 = { 2452.39f, 962.7f, 73.49f };
	vLocal_489 = { 2376.15f, 939.91f, 71.58f };
	vLocal_492 = { 2361.71f, 989.53f, 71.96f };
	vLocal_498[0 /*3*/] = { 2446.24f, 898.92f, 72.7f };
	vLocal_498[1 /*3*/] = { 2425.82f, 886.51f, 72.71f };
	vLocal_498[2 /*3*/] = { 2428.84f, 916.49f, 70.82f };
	iLocal_510 = 1;
}

void func_35()
{
	switch (iLocal_14)
	{
		case 0:
			Local_222[0 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_222[0 /*32*/].f_3 = -1843906223;
			Local_222[1 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_222[1 /*32*/].f_3 = -2131880195;
			Local_222[2 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_222[2 /*32*/].f_3 = -443523004;
			Local_222[3 /*32*/].f_1 = joaat("RE_BOATATTACK_MALES_01");
			Local_222[3 /*32*/].f_3 = 1175253274;
			Local_222[4 /*32*/].f_1 = joaat("RE_BOATATTACK_MALES_01");
			Local_222[4 /*32*/].f_3 = -490526072;
			break;
		case 1:
			Local_222[0 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_222[0 /*32*/].f_3 = -1843906223;
			Local_222[1 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_222[1 /*32*/].f_3 = -2131880195;
			Local_222[3 /*32*/].f_1 = joaat("RE_BOATATTACK_MALES_01");
			Local_222[3 /*32*/].f_3 = 1175253274;
			Local_222[4 /*32*/].f_1 = joaat("RE_BOATATTACK_MALES_01");
			Local_222[4 /*32*/].f_3 = -490526072;
			break;
	}
	__LIB_3__::func_284(&Local_222);
}

void func_36()
{
	STREAMING::REQUEST_MODEL(joaat("ROWBOAT"), false);
	STREAMING::REQUEST_MODEL(joaat("P_CIGARETTE01X"), false);
}

void func_37()
{
	switch (iLocal_14)
	{
		case 0:
			sLocal_414[0] = "RE_BA_RKR_V1_TALK_A";
			sLocal_414[1] = "RE_BA_RKR_V1_TALK_B";
			sLocal_414[2] = "RE_BA_RKR_V1_TALK_C";
			sLocal_414[3] = "RE_BA_RKR_V1_TALK_D";
			sLocal_414[4] = "RE_BA_RKR_V1_TALK_E";
			sLocal_414[5] = "RE_BA_RKR_V1_TALK_F";
			sLocal_414[6] = "RE_BA_RKR_V1_TALK_G";
			sLocal_414[7] = "RE_BA_RKR_V1_TALK_H";
			sLocal_414[13] = "RE_BA_RKR_V1_REST_B";
			sLocal_414[14] = "RE_BA_RKR_V1_REST_C";
			sLocal_414[15] = "RE_BA_RKR_V1_WARN_A";
			sLocal_414[16] = "RE_BA_RKR_V1_WARN_FEUD_FOLLOW";
			sLocal_414[17] = "RE_BA_RKR_V1_WARN_B";
			sLocal_414[8] = "CHALLENGE_THREATEN_ARMED";
			sLocal_414[9] = "RE_BA_RKR_V1_ATTACK_B";
			sLocal_414[10] = "RE_BA_RKR_V1_ATTACK_C";
			sLocal_414[11] = "CALLOUT_JUST_KILL_EM_MALE";
			sLocal_414[12] = "GENERIC_ANGRY_REACTION";
			sLocal_414[21] = "RE_BA_RKR_V1_DISPOSE_A";
			sLocal_414[22] = "RE_BA_RKR_V1_DISPOSE_B";
			sLocal_414[23] = "RE_BA_RKR_V1_DISPOSE_C";
			sLocal_414[24] = "RE_BA_RKR_V1_DISPOSE_D";
			sLocal_414[25] = "RE_BA_RKR_V1_DISPOSE_E";
			sLocal_414[26] = "RE_BA_RKR_V1_DISPOSE_F";
			sLocal_414[30] = "RE_BA_RKR_V1_PLAYER_POS_A0";
			sLocal_414[31] = "RE_BA_RKR_V1_PLAYER_NEG_A0";
			sLocal_414[32] = "RE_BA_RKR_V1_PLAYER_POS_A";
			sLocal_414[33] = "RE_BA_RKR_V1_PLAYER_NEG_A";
			sLocal_414[36] = "RE_BA_RKR_V1_PLAYER_POS_B";
			sLocal_414[37] = "RE_BA_RKR_V1_PLAYER_NEG_B";
			sLocal_414[34] = "GENERIC_INSULT_HIGH_MALE";
			sLocal_414[35] = "GENERIC_INSULT_HIGH_MALE";
			sLocal_414[38] = "WHO_GOES_THERE";
			sLocal_414[39] = "WHO_GOES_THERE";
			sLocal_414[43] = "RE_BA_RKR_V1_WARN_A";
			break;
		case 1:
			sLocal_414[0] = "RE_BA_RKR_V2_TALK_A";
			sLocal_414[1] = "RE_BA_RKR_V2_TALK_B";
			sLocal_414[2] = "RE_BA_RKR_V2_TALK_C";
			sLocal_414[3] = "RE_BA_RKR_V2_TALK_D";
			sLocal_414[4] = "RE_BA_RKR_V2_TALK_E";
			sLocal_414[5] = "RE_BA_RKR_V2_TALK_F";
			sLocal_414[6] = "RE_BA_RKR_V2_TALK_G";
			sLocal_414[7] = "RE_BA_RKR_V2_TALK_H";
			sLocal_414[15] = "RE_BA_RKR_V2_WARN_A";
			sLocal_414[16] = "RE_BA_RKR_V2_WARN_A_FEUD";
			sLocal_414[17] = "RE_BA_RKR_V2_WARN_B";
			sLocal_414[18] = "RE_BA_RKR_V2_WARN_B_FEUD";
			sLocal_414[19] = "RE_BA_RKR_V2_WARN_C";
			sLocal_414[20] = "RE_BA_RKR_V2_WARN_C_FEUD_AGGRO";
			sLocal_414[8] = "OPENS_FIRE";
			sLocal_414[9] = "PLEAD_HOGTIED";
			sLocal_414[10] = "TAUNT_GEN_MALE";
			sLocal_414[11] = "TAUNT_GEN_MALE";
			sLocal_414[12] = "GENERIC_SHOCKED_HIGH";
			sLocal_414[21] = "RE_BA_RKR_V2_DISPOSE_A";
			sLocal_414[22] = "RE_BA_RKR_V2_DISPOSE_B";
			sLocal_414[23] = "RE_BA_RKR_V2_DISPOSE_C";
			sLocal_414[24] = "RE_BA_RKR_V2_DISPOSE_D";
			sLocal_414[25] = "RE_BA_RKR_V2_DISPOSE_CARRY";
			sLocal_414[27] = "RE_BA_RKR_V2_DISPOSE_E";
			sLocal_414[28] = "RE_BA_RKR_V2_AFTER_A";
			sLocal_414[29] = "RE_BA_RKR_V2_AFTER_B";
			sLocal_414[32] = "RE_BA_RKR_V2_PLAYER_POS_A0";
			sLocal_414[33] = "RE_BA_RKR_V2_PLAYER_NEG_A0";
			sLocal_414[34] = "RE_BA_RKR_V2_WARN_A";
			sLocal_414[35] = "RE_BA_RKR_V2_WARN_A";
			sLocal_414[36] = "RE_BA_RKR_V2_PLAYER_POS_A";
			sLocal_414[37] = "RE_BA_RKR_V2_PLAYER_NEG_A";
			sLocal_414[38] = "WHATS_YOUR_PROBLEM";
			sLocal_414[39] = "WHATS_YOUR_PROBLEM";
			sLocal_414[40] = "RE_BA_RKR_V2_PLAYER_B_DEFUSE";
			sLocal_414[41] = "RE_BA_RKR_V2_PLAYER_B_ANTAGONIZE";
			sLocal_414[42] = "DISMISSIVE_REACT";
			sLocal_414[43] = "TAUNT_GEN_MALE";
			break;
	}
}

void func_38()
{
	Local_383[0 /*2*/] = "script_re@boat_attack";
	Local_383[0 /*2*/].f_1 = "breakout_fwd_male_a";
	__LIB_3__::func_318(Local_383[0 /*2*/], &uLocal_386);
}

void func_39()
{
	Local_536.f_5 = "script@beat@wilderness@boatattack@boatattack_b";
}

void func_40()
{
	sLocal_464 = "rebat_loc1";
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_464);
}

void func_41()
{
	if (iLocal_14 == 0)
	{
		__LIB_3__::func_432(&(Local_650[0 /*17*/]), "RE_INTER_POS", sLocal_414[30], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_3__::func_432(&(Local_650[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_414[31], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
	else
	{
		__LIB_3__::func_432(&(Local_650[0 /*17*/]), "RE_INTER_POS", sLocal_414[32], joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_3__::func_432(&(Local_650[1 /*17*/]), "RE_INTER_ANTAGONIZE", sLocal_414[33], joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	}
}

void func_46()
{
	Local_209[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(joaat("P_CIGARETTE01X"), vLocal_474, true, true, false, false, true);
}

bool func_47()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_407))
	{
		return true;
	}
	else
	{
		iLocal_407 = VEHICLE::CREATE_VEHICLE(joaat("ROWBOAT"), vLocal_465, fLocal_477, true, true, false, false);
	}
	return false;
}

void func_48()
{
	Local_15.f_178 = 1;
	if (iLocal_14 == 0)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_395[0], "0203_G_M_M_UniInbred_03_WHITE_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_395[1], "0202_G_M_M_UniInbred_02_WHITE_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_395[2], "0201_G_M_M_UniInbred_02_WHITE_01");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_395[1], "TaskCombat_Panic");
		PED::_0xF7EA250B9A919E03(joaat("TASKCOMBAT_PANIC"), uLocal_395[1]);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_395[0], joaat("REL_PLAYER_DISLIKE"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_395[1], joaat("REL_PLAYER_DISLIKE"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_395[2], joaat("REL_PLAYER_DISLIKE"));
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_407, vLocal_465, fLocal_477, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_395[0], vLocal_468, fLocal_478, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_395[1], vLocal_471, fLocal_479, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_395[2], vLocal_474, fLocal_480, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_395[3], vLocal_481, fLocal_487, false, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_395[4], vLocal_484, fLocal_488, false, true, true);
		PED::SET_PED_INTO_VEHICLE(uLocal_395[0], iLocal_407, 3);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_395[3], true, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_395[4], true, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[0], 282, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[1], 282, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[2], 282, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[0], 6, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[1], 6, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[2], 6, true);
		AUDIO::STOP_PED_SPEAKING(uLocal_395[3], true);
		AUDIO::STOP_PED_SPEAKING(uLocal_395[4], true);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_395[0], 2);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_395[1], 1);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_395[2], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 112, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 112, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 112, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 47, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 47, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 47, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 0, false);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_395[0], 512, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_395[1], 512, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_395[2], 512, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_395[0], true, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_395[1], true, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_395[2], true, true);
		__LIB_2__::func_272(uLocal_395[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 999, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_2__::func_272(uLocal_395[1], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 999, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_2__::func_272(uLocal_395[2], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 999, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_3__::func_285(uLocal_395[0], &Local_15, 0);
		__LIB_3__::func_285(uLocal_395[1], &Local_15, 0);
		__LIB_3__::func_285(uLocal_395[2], &Local_15, 0);
		PED::_0xF1C03A5352243A30(uLocal_395[2]);
		VEHICLE::_SET_BOAT_ANCHOR_BUOYANCY_COEFFICIENT(iLocal_407, 100f);
		VEHICLE::_0x1098CDA477890165(iLocal_407, 1);
		uLocal_410[0] = GRAPHICS::_0xFA50F79257745E74(vLocal_498[0 /*3*/], 10f, 1, 4, 0);
		uLocal_410[1] = GRAPHICS::_0xFA50F79257745E74(vLocal_498[1 /*3*/], 10f, 1, 4, 0);
		uLocal_410[2] = GRAPHICS::_0xFA50F79257745E74(vLocal_498[2 /*3*/], 20f, 1, 319, 0);
		__LIB_2__::func_463(uLocal_395[0], joaat("CONSUMABLE_CIGARETTE_BOX"), 1, 0);
		__LIB_2__::func_463(uLocal_395[1], joaat("CONSUMABLE_CIGARETTE_BOX"), 1, 0);
		__LIB_2__::func_463(uLocal_395[2], joaat("CONSUMABLE_CIGARETTE_BOX"), 1, 0);
		VEHICLE::SET_BOAT_ANCHOR(iLocal_407, true);
		PED::_0x8ACC0506743A8A5C(uLocal_395[2], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_395[0], "0204_G_M_M_UniInbred_03_WHITE_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_395[1], "0199_G_M_M_UniInbred_01_WHITE_01");
		PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_395[1], "TaskCombat_Panic");
		PED::_0xF7EA250B9A919E03(joaat("TASKCOMBAT_PANIC"), uLocal_395[1]);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_395[0], joaat("REL_PLAYER_DISLIKE"));
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_395[1], joaat("REL_PLAYER_DISLIKE"));
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_407, vLocal_465, fLocal_477, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_395[0], vLocal_468, fLocal_478, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_395[1], vLocal_471, fLocal_479, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_395[3], vLocal_481, fLocal_487, false, true, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_395[4], vLocal_484, fLocal_488, false, true, true);
		AUDIO::STOP_PED_SPEAKING(uLocal_395[3], true);
		AUDIO::STOP_PED_SPEAKING(uLocal_395[4], true);
		PED::SET_PED_INTO_VEHICLE(uLocal_395[0], iLocal_407, 3);
		PED::SET_PED_INTO_VEHICLE(uLocal_395[1], iLocal_407, -1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_395[3], true, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_395[4], true, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[0], 282, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[1], 282, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[0], 6, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_395[1], 6, true);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_395[0], 2);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_395[1], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 112, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 112, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 46, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 47, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 47, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 0, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 0, false);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_395[0], 512, true);
		PED::SET_PED_FLEE_ATTRIBUTES(uLocal_395[1], 512, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_395[0], true, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_395[1], true, true);
		__LIB_2__::func_272(uLocal_395[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 999, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_2__::func_272(uLocal_395[1], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 999, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_3__::func_285(uLocal_395[0], &Local_15, 0);
		__LIB_3__::func_285(uLocal_395[1], &Local_15, 0);
		VEHICLE::_SET_BOAT_ANCHOR_BUOYANCY_COEFFICIENT(iLocal_407, 100f);
		VEHICLE::_0x1098CDA477890165(iLocal_407, 1);
		uLocal_410[0] = GRAPHICS::_0xFA50F79257745E74(vLocal_498[0 /*3*/], 10f, 1, 4, 0);
		uLocal_410[1] = GRAPHICS::_0xFA50F79257745E74(vLocal_498[1 /*3*/], 10f, 1, 4, 0);
		uLocal_410[2] = GRAPHICS::_0xFA50F79257745E74(vLocal_498[2 /*3*/], 20f, 1, 319, 0);
		__LIB_2__::func_463(uLocal_395[0], joaat("CONSUMABLE_CIGARETTE_BOX"), 1, 0);
		__LIB_2__::func_463(uLocal_395[1], joaat("CONSUMABLE_CIGARETTE_BOX"), 1, 0);
	}
}

void func_49()
{
	__LIB_2__::func_51(&(Local_15.f_5), 1);
	__LIB_2__::func_180(&(Local_15.f_5), 1);
	__LIB_2__::func_111(&(Local_15.f_5), 1);
	__LIB_2__::func_104(&(Local_15.f_5), 1);
	__LIB_2__::func_110(&(Local_15.f_5), 1);
	__LIB_2__::func_105(&(Local_15.f_5), 1);
	__LIB_2__::func_50(&(Local_15.f_5), 1);
}

void func_50()
{
	if (iLocal_14 == 0)
	{
		Local_536.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_536.f_5, 0, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_536.f_1, ENTITY::GET_ENTITY_COORDS(iLocal_407, true, false), ENTITY::GET_ENTITY_ROTATION(iLocal_407, 2), 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_A", uLocal_395[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "CIG", Local_209[0 /*12*/].f_8, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_B", uLocal_395[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_C", uLocal_395[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_A", uLocal_395[3], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_B", uLocal_395[4], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "OAR_A", iLocal_408, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "OAR_B", iLocal_409, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407, 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_536.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_536.f_1);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_536.f_1, "BOOL_START", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_536.f_1, "Bool", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_536.f_1, "DEAD_BOOL", false, false);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_536.f_1, "PBL_ENTER");
	}
	else
	{
		Local_536.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_536.f_5, 0, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_536.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_A", uLocal_395[3], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_B", uLocal_395[4], 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_536.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_536.f_1);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_536.f_1, "DEAD_BOOL", false, false);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_536.f_1, "PBL_DEAD_LOOP");
	}
}

void func_61()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
	{
		switch (iLocal_709)
		{
			case 0:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[0], joaat("MOODNORMAL"), 6);
				break;
			case 1:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[0], joaat("MOODEXERTIONMEDIUM"), 6);
				break;
			case 2:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[0], joaat("MOODANGRY"), 6);
				break;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
	{
		switch (iLocal_710)
		{
			case 0:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[1], joaat("MOODAGITATED"), 6);
				break;
			case 1:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[1], joaat("MOODEXERTIONEXTREME"), 6);
				break;
			case 2:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[1], joaat("MOODEXERTIONMILD"), 6);
				break;
			case 3:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[1], joaat("MOODEXERTIONMEDIUM"), 6);
				break;
			case 5:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[1], joaat("MOODNORMAL"), 6);
				break;
			case 4:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[1], joaat("MOODANGRY"), 6);
				break;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[2]))
	{
		switch (iLocal_711)
		{
			case 0:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[2], joaat("MOODBITCHY"), 6);
				break;
			case 1:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[2], joaat("MOODEXERTIONEXTREME"), 6);
				break;
			case 2:
				PED::_0x8B3B71C80A29A4BB(uLocal_395[2], joaat("MOODANGRY"), 6);
				break;
		}
	}
}

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	if (iLocal_704 == 2)
	{
		return;
	}
	iVar0 = func_177(&(uLocal_395[2]), &(Local_544[2 /*21*/]), 30f, &Local_650, &(Local_15.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_177(&(uLocal_395[0]), &(Local_544[0 /*21*/]), 30f, &Local_650, &(Local_15.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar2 = func_177(&(uLocal_395[1]), &(Local_544[1 /*21*/]), 30f, &Local_650, &(Local_15.f_192), 0, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_707)
	{
		case 0:
			switch (iLocal_708)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 3;
							break;
						case 1:
							iLocal_708 = 3;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 3;
							break;
						case 1:
							iLocal_708 = 3;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_708 = 3;
							break;
						case 1:
							iLocal_708 = 3;
							break;
					}
					break;
				case 3:
					if (!__LIB_0__::func_75(&uLocal_775))
					{
						__LIB_1__::func_148(&uLocal_775);
					}
					if (__LIB_0__::func_264(&uLocal_775) >= 2f)
					{
						iLocal_735 = 1;
						iLocal_707 = 5;
						iLocal_708 = 0;
						Local_650[0 /*17*/].f_13 = sLocal_414[32];
						Local_650[1 /*17*/].f_13 = sLocal_414[33];
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_708)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (func_181(uLocal_395[2], Global_35, sLocal_414[43], 3f, 0))
					{
						iLocal_708 = 3;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[2], Global_35, sLocal_414[43], 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					iLocal_707 = 5;
					iLocal_708 = 0;
					break;
			}
			break;
		case 2:
			switch (iLocal_708)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[0], Global_35, sLocal_414[34], 0f, 0))
						{
							iLocal_738 = 1;
							func_183(2);
							iLocal_708 = 3;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[2], Global_35, sLocal_414[35], 0f, 0))
						{
							iLocal_738 = 1;
							func_183(2);
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					break;
			}
			break;
		case 3:
			switch (iLocal_708)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar2)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[0], Global_35, sLocal_414[38], 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[0], Global_35, sLocal_414[39], 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					__LIB_2__::func_603(&(uLocal_395[2]), &(Local_544[2 /*21*/]), &Local_650, 1, 1);
					__LIB_2__::func_603(&(uLocal_395[0]), &(Local_544[0 /*21*/]), &Local_650, 1, 1);
					__LIB_2__::func_603(&(uLocal_395[1]), &(Local_544[1 /*21*/]), &Local_650, 1, 1);
					break;
			}
			break;
		case 5:
			__LIB_2__::func_411(&(Local_650[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_650[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_650[2 /*17*/]), 0, 0);
			break;
	}
}

void func_63()
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = -1;
	if (iLocal_705 == 3)
	{
		return;
	}
	iVar0 = func_177(&(uLocal_395[0]), &(Local_544[0 /*21*/]), 30f, &Local_650, &(Local_15.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iVar1 = func_177(&(uLocal_395[1]), &(Local_544[1 /*21*/]), 30f, &Local_650, &(Local_15.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_707)
	{
		case 0:
			switch (iLocal_708)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[0], Global_35, sLocal_414[34], 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[0], Global_35, sLocal_414[35], 0f, 0))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					if (__LIB_2__::func_227(-4f, 1, uLocal_395[0], 1) && __LIB_2__::func_227(-4f, 1, uLocal_395[1], 1))
					{
						__LIB_2__::func_451(&(Local_544[0 /*21*/]), 0);
						__LIB_2__::func_451(&(Local_544[1 /*21*/]), 0);
						__LIB_2__::func_360(&(Local_650[0 /*17*/]), "RE_INTER_DEFUSE");
						Local_650[0 /*17*/].f_13 = sLocal_414[36];
						Local_650[1 /*17*/].f_13 = sLocal_414[37];
						__LIB_2__::func_411(&(Local_650[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_650[1 /*17*/]), 1, 0);
						__LIB_3__::func_158(&(Local_650[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_650[1 /*17*/]), 0);
						iLocal_708 = 0;
						iLocal_707 = 3;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_708)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						__LIB_2__::func_214(uLocal_395[0], Global_35, sLocal_414[38], 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
						iLocal_708 = 3;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[0], Global_35, sLocal_414[39], 0f, 1))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					if (__LIB_2__::func_227(-4f, 1, uLocal_395[0], 1) && __LIB_2__::func_227(-4f, 1, uLocal_395[1], 1))
					{
						__LIB_2__::func_451(&(Local_544[0 /*21*/]), 0);
						__LIB_2__::func_451(&(Local_544[1 /*21*/]), 0);
						Local_650[0 /*17*/].f_13 = sLocal_414[40];
						Local_650[1 /*17*/].f_13 = sLocal_414[41];
						__LIB_2__::func_360(&(Local_650[0 /*17*/]), "RE_INTER_DEFUSE");
						__LIB_2__::func_411(&(Local_650[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_650[1 /*17*/]), 1, 0);
						__LIB_3__::func_158(&(Local_650[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_650[1 /*17*/]), 0);
						iLocal_708 = 0;
						iLocal_707 = 4;
					}
					break;
			}
			break;
		case 4:
			switch (iLocal_708)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_708 = 1;
							break;
						case 1:
							iLocal_708 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[0], Global_35, sLocal_414[42], 0f, 1))
						{
							iLocal_708 = 3;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_181(uLocal_395[0], Global_35, sLocal_414[43], 0f, 1))
						{
							iLocal_738 = 1;
							func_190(3);
							iLocal_708 = 3;
						}
					}
					break;
				case 3:
					__LIB_2__::func_411(&(Local_650[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_650[1 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_650[2 /*17*/]), 0, 0);
					break;
			}
			break;
		case 5:
			__LIB_2__::func_411(&(Local_650[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_650[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_650[2 /*17*/]), 0, 0);
			break;
	}
}

void func_64()
{
	iLocal_729 = 1;
	func_191();
	func_192();
	func_193(65f);
	if (__LIB_3__::func_452(&Local_15, 1f, 150f, 60f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
		__LIB_2__::func_411(&(Local_650[1 /*17*/]), 1, 0);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_536.f_1, "BOOL_START", true, false);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_536.f_1, "PBL_DEAD_LOOP");
		func_193(160f);
		AUDIO::START_AUDIO_SCENE("BOAT_ATTACK_SCENE");
		func_183(1);
	}
}

void func_65()
{
	iLocal_730 = 1;
	iLocal_729 = 0;
	func_195();
	func_196();
	__LIB_3__::func_880(Global_35, uLocal_395[0], &uLocal_511, -1, 50);
	if ((iLocal_722 == 1 || bLocal_737) || iLocal_735 == 1)
	{
		func_198();
		if (iLocal_732 == 1)
		{
			if (func_199())
			{
				func_200();
			}
		}
		else
		{
			func_200();
		}
	}
	else
	{
		func_201();
		if (iLocal_720 == 0)
		{
			func_202();
		}
	}
	func_203();
	func_204();
	if (PED::IS_PED_IN_VEHICLE(uLocal_395[2], iLocal_407, false) && fLocal_759 >= 0.99f)
	{
		iLocal_735 = 0;
		iLocal_707 = 1;
		iLocal_708 = 0;
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_A", uLocal_395[2]);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_B", uLocal_395[1]);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_C", uLocal_395[0]);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "OAR_A", iLocal_408);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "OAR_B", iLocal_409);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_536.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_536.f_1, iLocal_407, 0);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_536.f_1, "PBL_DUMP_EM_HERE");
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_536.f_1, "PBL_DEAD_LOOP", true);
		func_183(3);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_395[1], Local_536.f_1) && fLocal_759 >= 0.93f)
	{
		iLocal_710 = 1;
		iLocal_711 = 1;
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_395[1], Local_536.f_1) && fLocal_759 >= 0.96f)
	{
		iLocal_710 = 3;
		iLocal_711 = 0;
	}
	func_205();
	func_206();
	func_192();
	func_207();
}

void func_66()
{
	func_208();
	VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407);
	iLocal_709 = 2;
	iLocal_710 = 4;
	iLocal_711 = 2;
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
	{
		PED::SET_PED_SEEING_RANGE(uLocal_395[0], 120f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
	{
		PED::SET_PED_SEEING_RANGE(uLocal_395[1], 120f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[2]))
	{
		PED::SET_PED_SEEING_RANGE(uLocal_395[2], 120f);
	}
	func_209();
	__LIB_3__::func_166(&Local_15);
	if (iLocal_728 == 1)
	{
		func_210();
	}
	else if (iLocal_730 == 1)
	{
		func_211();
	}
	else if (iLocal_729 == 1)
	{
		func_211();
	}
	if ((ENTITY::IS_ENTITY_AT_COORD(iLocal_407, Local_15.f_51, 10f, 10f, 10f, false, true, 0) || iLocal_510 == 0) || func_212(5, 5) == 1)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 3, true);
	}
	else
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[2], 3, false);
	}
	func_213();
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_395[0], true))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_401[0]))
		{
			iLocal_401[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_395[0]);
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_395[1], true))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_401[1]))
		{
			iLocal_401[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_395[1]);
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_395[2], true))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_401[2]))
		{
			iLocal_401[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_395[2]);
		}
	}
	func_207();
}

void func_67()
{
	iLocal_730 = 0;
	if (!func_214())
	{
		func_202();
	}
	if (!func_192())
	{
		if ((PED::IS_PED_IN_VEHICLE(uLocal_395[0], iLocal_407, false) && PED::IS_PED_IN_VEHICLE(uLocal_395[1], iLocal_407, false)) && PED::IS_PED_IN_VEHICLE(uLocal_395[2], iLocal_407, false))
		{
			if (PED::IS_PED_IN_VEHICLE(uLocal_395[1], iLocal_407, false) || iLocal_731 == 1)
			{
				if (iLocal_723 == 0)
				{
					iLocal_723 = 1;
					iLocal_710 = 2;
					VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
					fLocal_759 = 0f;
					TASK::TASK_BOAT_MISSION(uLocal_395[1], iLocal_407, 0, 0, vLocal_489, 4, 3f, 16777216, 4f, 20509);
				}
			}
		}
		if (func_215())
		{
			func_216();
		}
		if (ENTITY::IS_ENTITY_AT_COORD(uLocal_395[0], vLocal_489, 10f, 10f, 10f, false, true, 0) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_536.f_1, "PBL_DUMP_EM_HERE"))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_536.f_1, "Bool", true, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_536.f_1, "PBL_DUMP_EM_HERE");
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_536.f_1, "PBL_DUMP_EM_HERE", true);
		}
		if (ENTITY::IS_ENTITY_AT_COORD(uLocal_395[0], vLocal_489, 5f, 5f, 10f, false, true, 0))
		{
			__LIB_1__::func_148(&uLocal_769);
			func_183(4);
		}
	}
	func_207();
	func_205();
	func_206();
}

void func_68()
{
	iLocal_728 = 1;
	func_208();
	if (__LIB_0__::func_264(&uLocal_769) > 3f && iLocal_724 == 0)
	{
		VEHICLE::SET_BOAT_ANCHOR(iLocal_407, true);
		__LIB_1__::func_148(&uLocal_766);
		iLocal_709 = 1;
		iLocal_710 = 3;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_A", uLocal_395[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_B", uLocal_395[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_C", uLocal_395[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_A", uLocal_395[3], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_B", uLocal_395[4], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "OAR_A", iLocal_408, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "OAR_B", iLocal_409, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407, 0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_536.f_1, "PBL_DUMP_EM_HERE", true);
		Local_15.f_44 = 1;
		func_217();
		iLocal_724 = 1;
	}
	if (iLocal_722 == 0 && iLocal_724 == 1)
	{
		__LIB_3__::func_880(uLocal_395[2], uLocal_395[1], &uLocal_511, -1, 15);
		func_218();
	}
	if (func_215() || iLocal_735 == 1)
	{
		func_216();
	}
	if (iLocal_725 == 1)
	{
		func_210();
	}
	if (__LIB_0__::func_264(&uLocal_766) >= 2f)
	{
		if (fLocal_759 >= 0.99f)
		{
			if (iLocal_723 == 1)
			{
				iLocal_723 = 0;
				iLocal_709 = 0;
				iLocal_710 = 2;
				VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
				__LIB_3__::func_166(&Local_15);
				VEHICLE::_0x7C06330BFDDA182E(iLocal_407);
				TASK::TASK_BOAT_MISSION(uLocal_395[1], iLocal_407, 0, 0, vLocal_492, 4, 3f, 16777216, 1f, 4125);
			}
		}
		else
		{
			func_219();
		}
		if (fLocal_759 >= 0.53f)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_A", uLocal_395[3]);
		}
		if (fLocal_759 >= 0.83f)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_B", uLocal_395[4]);
		}
	}
	func_192();
	func_207();
	func_205();
	func_206();
	if (ENTITY::IS_ENTITY_AT_COORD(uLocal_395[0], vLocal_492, 5f, 5f, 10f, false, true, 0))
	{
		if (iLocal_707 != 3 && iLocal_707 != 4)
		{
			__LIB_2__::func_360(&(Local_650[0 /*17*/]), "RE_INTER_POS");
			__LIB_3__::func_158(&(Local_650[0 /*17*/]), 0);
			__LIB_3__::func_158(&(Local_650[1 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_650[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_650[1 /*17*/]), 1, 0);
			iLocal_708 = 0;
			Local_650[0 /*17*/].f_13 = sLocal_414[36];
			Local_650[1 /*17*/].f_13 = sLocal_414[37];
			iLocal_707 = 3;
		}
		VEHICLE::SET_BOAT_ANCHOR(iLocal_407, true);
		func_183(5);
	}
}

void func_69()
{
	func_192();
	func_207();
	func_220();
	func_221();
	if (func_214())
	{
		func_222();
	}
	if (!__LIB_0__::func_163(uLocal_395[0], 242628503))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_717);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_717);
		TASK::TASK_LEAVE_VEHICLE(0, iLocal_407, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_464, 0, 9216, -1, 0, 0, -1);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, 2520.57f, 817.82f, 72.93f, 1073741824 /* Float: 2f */, 1f, 528, 0);
		TASK::TASK_WANDER_IN_AREA(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_717);
		TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_395[0], iLocal_717, 0.5f, 0.5f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_717);
	}
	if (!__LIB_0__::func_163(uLocal_395[1], 242628503))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_718);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_718);
		TASK::TASK_LEAVE_VEHICLE(0, iLocal_407, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(0, sLocal_464, 0.5f, 0, 9216, -1, 0);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, 2520.57f, 817.82f, 72.93f, 1073741824 /* Float: 2f */, 1f, 528, 0);
		TASK::TASK_WANDER_IN_AREA(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_718);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_395[1], iLocal_718);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_718);
	}
	if (!__LIB_0__::func_163(uLocal_395[2], 242628503))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_719);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_719);
		TASK::TASK_LEAVE_VEHICLE(0, iLocal_407, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(0, sLocal_464, -0.5f, 0, 9216, -1, 0);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, 2520.57f, 817.82f, 72.93f, 1073741824 /* Float: 2f */, 1f, 528, 0);
		TASK::TASK_WANDER_IN_AREA(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_719);
		TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_395[2], iLocal_719, 1f, 1f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_719);
	}
}

void func_71()
{
	iLocal_729 = 1;
	func_192();
	func_193(65f);
	func_225();
	if (iLocal_14 == 1 && iLocal_733 == 0)
	{
		iLocal_733 = 1;
		iLocal_709 = 0;
		iLocal_710 = 2;
	}
	if (__LIB_3__::func_452(&Local_15, 1f, 150f, 60f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
	{
		TASK::TASK_BOAT_MISSION(uLocal_395[1], iLocal_407, 0, 0, vLocal_489, 4, 2f, 48, 4f, 20509);
		__LIB_3__::func_158(&(Local_650[0 /*17*/]), 0);
		__LIB_2__::func_411(&(Local_650[1 /*17*/]), 1, 0);
		func_193(160f);
		func_190(1);
	}
}

void func_72()
{
	iLocal_730 = 0;
	__LIB_3__::func_880(Global_35, uLocal_395[0], &uLocal_511, -1, 50);
	if (!func_226())
	{
		func_227();
	}
	else
	{
		func_228();
	}
	if (!func_192())
	{
		if (PED::IS_PED_IN_VEHICLE(uLocal_395[0], iLocal_407, false) && PED::IS_PED_IN_VEHICLE(uLocal_395[1], iLocal_407, false))
		{
			if (iLocal_723 == 0)
			{
				iLocal_723 = 1;
				VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
				fLocal_759 = 0f;
			}
		}
		if (bLocal_746 && __LIB_2__::func_227(-5f, 1, 0, 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_395[0], vLocal_489, 10f, 10f, 10f, false, true, 0) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_536.f_1, "PBL_DUMP_EM_HERE"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_536.f_1, "Bool", true, false);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_536.f_1, "PBL_DUMP_EM_HERE");
			}
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_395[0], vLocal_489, 5f, 5f, 10f, false, true, 0))
			{
				__LIB_1__::func_148(&uLocal_769);
				func_190(2);
			}
		}
	}
	func_205();
	func_206();
}

void func_73()
{
	iLocal_728 = 1;
	func_208();
	if (__LIB_0__::func_264(&uLocal_769) > 3f && iLocal_724 == 0)
	{
		VEHICLE::SET_BOAT_ANCHOR(iLocal_407, true);
		__LIB_1__::func_148(&uLocal_766);
		iLocal_710 = 3;
		iLocal_709 = 1;
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_536.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_536.f_1, iLocal_407, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_B", uLocal_395[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_C", uLocal_395[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_A", uLocal_395[3], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_B", uLocal_395[4], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "OAR_A", iLocal_408, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "OAR_B", iLocal_409, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407, 0);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_536.f_1, "PBL_DUMP_EM_HERE", true);
		func_217();
		Local_15.f_44 = 1;
		iLocal_724 = 1;
	}
	if (!func_226())
	{
		func_229();
	}
	else
	{
		func_228();
	}
	if (__LIB_0__::func_264(&uLocal_766) >= 2f)
	{
		if (fLocal_759 >= 0.99f)
		{
			if (iLocal_723 == 1)
			{
				iLocal_723 = 0;
				iLocal_709 = 0;
				iLocal_710 = 2;
				VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
				__LIB_3__::func_166(&Local_15);
				VEHICLE::_0x7C06330BFDDA182E(iLocal_407);
				TASK::TASK_BOAT_MISSION(uLocal_395[1], iLocal_407, 0, 0, vLocal_492, 4, 3f, 16777216, 1f, 4125);
			}
		}
		else
		{
			func_219();
		}
		if (fLocal_759 >= 0.53f)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_A", uLocal_395[3]);
		}
		if (fLocal_759 >= 0.83f)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_B", uLocal_395[4]);
		}
	}
	if (!func_226())
	{
		if (iLocal_723 == 0)
		{
			func_230();
		}
	}
	func_192();
	func_205();
	func_206();
	if (ENTITY::IS_ENTITY_AT_COORD(uLocal_395[0], vLocal_492, 5f, 5f, 10f, false, true, 0))
	{
		if (iLocal_707 != 3 && iLocal_707 != 4)
		{
			__LIB_2__::func_360(&(Local_650[0 /*17*/]), "RE_INTER_POS");
			__LIB_3__::func_158(&(Local_650[0 /*17*/]), 0);
			__LIB_3__::func_158(&(Local_650[1 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_650[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_650[1 /*17*/]), 1, 0);
			iLocal_708 = 0;
			Local_650[0 /*17*/].f_13 = sLocal_414[36];
			Local_650[1 /*17*/].f_13 = sLocal_414[37];
			iLocal_707 = 3;
		}
		VEHICLE::SET_BOAT_ANCHOR(iLocal_407, true);
		func_190(4);
	}
}

void func_74()
{
	func_192();
	func_205();
	func_220();
	if (func_226())
	{
		func_222();
	}
	if (!__LIB_0__::func_163(uLocal_395[0], 242628503))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_717);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_717);
		TASK::TASK_LEAVE_VEHICLE(0, iLocal_407, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_464, 0, 9216, -1, 0, 0, -1);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, 2520.57f, 817.82f, 72.93f, 1073741824 /* Float: 2f */, 1f, 528, 0);
		TASK::TASK_WANDER_IN_AREA(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_717);
		TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_395[0], iLocal_717, 0.5f, 0.5f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_717);
	}
	if (!__LIB_0__::func_163(uLocal_395[1], 242628503))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_718);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_718);
		TASK::TASK_LEAVE_VEHICLE(0, iLocal_407, 285474816, 0);
		if (Local_15.f_51.f_4 == 0)
		{
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(0, sLocal_464, 0.5f, 0, 9216, -1, 0);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_495, 1f, -1, 2f, 1, 40000f);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, 2520.57f, 817.82f, 72.93f, 1073741824 /* Float: 2f */, 1f, 528, 0);
		TASK::TASK_WANDER_IN_AREA(0, 2549.14f, 798.38f, 75.37f, 70f, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, 1);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_718);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_395[1], iLocal_718);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_718);
	}
}

void func_75()
{
	func_208();
	VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
	iLocal_709 = 2;
	iLocal_710 = 4;
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
	{
		PED::SET_PED_SEEING_RANGE(uLocal_395[0], 120f);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
	{
		PED::SET_PED_SEEING_RANGE(uLocal_395[1], 120f);
	}
	func_209();
	__LIB_3__::func_166(&Local_15);
	if (iLocal_728 == 1)
	{
		func_210();
	}
	else if (iLocal_730 == 1)
	{
		func_211();
	}
	else if (iLocal_729 == 1)
	{
		func_211();
	}
	if ((ENTITY::IS_ENTITY_AT_COORD(iLocal_407, Local_15.f_51, 10f, 10f, 10f, false, true, 0) || iLocal_510 == 0) || func_212(5, 5) == 1)
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 3, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 3, true);
	}
	else if (PED::IS_PED_DEAD_OR_DYING(uLocal_395[1], true))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 1, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 3, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 3, false);
	}
	if (!__LIB_0__::func_75(&uLocal_763))
	{
		__LIB_1__::func_148(&uLocal_763);
	}
	if (!__LIB_2__::func_167(uLocal_395[0], 0))
	{
		if (iLocal_725 == 0 || iLocal_728 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
			{
				TASK::TASK_COMBAT_PED(uLocal_395[0], PLAYER::PLAYER_PED_ID(), 0, 16);
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_536.f_1, false) || iLocal_727 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
			{
				TASK::TASK_COMBAT_PED(uLocal_395[0], PLAYER::PLAYER_PED_ID(), 0, 16);
			}
		}
	}
	if (!__LIB_2__::func_167(uLocal_395[1], 0) && __LIB_0__::func_264(&uLocal_763) >= 0.8f)
	{
		if (iLocal_725 == 0 || iLocal_728 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
			{
				TASK::TASK_COMBAT_PED(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
		else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_536.f_1, false) || iLocal_727 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
			{
				TASK::TASK_COMBAT_PED(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 0, 16);
			}
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_395[0], true))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_401[0]))
		{
			iLocal_401[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_395[0]);
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_395[1], true))
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_401[1]))
		{
			iLocal_401[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_395[1]);
		}
	}
}

int func_177(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_351(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_181(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!__LIB_0__::func_75(&uLocal_772))
	{
		__LIB_1__::func_148(&uLocal_772);
	}
	else if (__LIB_0__::func_264(&uLocal_772) > fParam3)
	{
		__LIB_2__::func_303(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, iParam4, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_0__::func_37(&uLocal_772);
		return true;
	}
	return false;
}

void func_183(int iParam0)
{
	iLocal_704 = iParam0;
	if (iLocal_704 == 2)
	{
		Local_15.f_44 = 1;
	}
}

void func_190(int iParam0)
{
	iLocal_705 = iParam0;
	if (iLocal_705 == 3)
	{
		Local_15.f_44 = 1;
	}
}

void func_191()
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_536.f_1, "PBL_ENTER"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_536.f_1, "PBL_ENTER", true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_536.f_1, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_536.f_1, false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_536.f_1);
	}
}

bool func_192()
{
	if (__LIB_4__::func_52(&uLocal_395, &(Local_15.f_5), &iLocal_716, &uLocal_757, 0, 2, 1))
	{
		Local_15.f_46 = 1;
		Local_15.f_44 = 1;
		iLocal_744 = 1;
		if (iLocal_14 == 0)
		{
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[0], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[1], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[2], 0);
			func_183(2);
		}
		else
		{
			func_190(3);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 1, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[0], 3, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_395[1], 3, true);
		}
		return true;
	}
	return false;
}

void func_193(float fParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_15.f_181))
	{
		if (__LIB_0__::func_94(Global_35, Local_15.f_51, 1) <= fParam0)
		{
			__LIB_17__::func_867(uLocal_395[2], 5000);
		}
	}
}

void func_195()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_536.f_1, false))
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_536.f_1, "PBL_ENTER") && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_395[2], Local_536.f_1))
		{
			if (fLocal_759 <= 0.67f)
			{
				iLocal_732 = 1;
			}
			else
			{
				iLocal_732 = 0;
			}
		}
	}
}

void func_196()
{
	float fVar0;
	float fVar1;
	int iVar2;
	fVar1 = 3f;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
		if (fVar0 == 0f)
		{
			fVar1 = 1f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 2f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 2.5f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 3f;
		}
		else
		{
			fVar1 = 4f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
		if (fVar0 == 0f)
		{
			fVar1 = 1f;
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
	iVar2 = 20;
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		iVar2 = 10;
	}
	if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_395[2], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_395[1], Global_35, 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uLocal_395[0], Global_35, 17))
	{
		if (!__LIB_0__::func_75(&uLocal_778) && ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_407, true, false), IntToFloat(iVar2), IntToFloat(iVar2), 4f, false, true, 0))
		{
			__LIB_1__::func_148(&uLocal_778);
			bLocal_736 = true;
		}
		if (__LIB_0__::func_264(&uLocal_778) >= fVar1)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_407, true, false), IntToFloat(iVar2), IntToFloat(iVar2), 4f, false, true, 0) && bLocal_736 == 1)
			{
				bLocal_737 = true;
			}
			else if (iLocal_712 == 0)
			{
				bLocal_736 = false;
				bLocal_737 = false;
				__LIB_0__::func_37(&uLocal_778);
			}
		}
	}
}

void func_198()
{
	func_221();
	__LIB_3__::func_166(&Local_15);
	switch (iLocal_749)
	{
		case 0:
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[0], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[1], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[2], 0);
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (__LIB_2__::func_303(uLocal_395[2], PLAYER::PLAYER_PED_ID(), sLocal_414[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					__LIB_2__::func_411(&(Local_650[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_650[1 /*17*/]), 0, 0);
					__LIB_1__::func_148(&uLocal_790);
					iLocal_749++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, uLocal_395[2], 1) || __LIB_0__::func_264(&uLocal_790) > 4f)
			{
				iLocal_731 = 1;
				__LIB_2__::func_360(&(Local_650[0 /*17*/]), "INTERACT_DEFUSE");
				iLocal_707 = 2;
				__LIB_3__::func_158(&(Local_650[0 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_650[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_650[1 /*17*/]), 1, 0);
				iLocal_708 = 0;
				__LIB_0__::func_37(&uLocal_793);
				Local_650[0 /*17*/].f_13 = sLocal_414[32];
				Local_650[1 /*17*/].f_13 = sLocal_414[33];
				iLocal_722 = 1;
				iLocal_749++;
			}
			break;
		case 2:
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[1], 0);
			if (!__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_395[2], &(Local_544[2 /*21*/])) || __LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					__LIB_2__::func_303(uLocal_395[1], PLAYER::PLAYER_PED_ID(), sLocal_414[17], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_784);
					iLocal_749++;
				}
			}
			break;
		case 3:
			if (!__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_395[2], &(Local_544[2 /*21*/])) || __LIB_2__::func_227(0f, 1, uLocal_395[1], 1))
			{
				if (__LIB_0__::func_264(&uLocal_784) > 5f)
				{
					if (__LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						iLocal_738 = 1;
						func_183(2);
					}
				}
			}
			break;
	}
}

bool func_199()
{
	switch (iLocal_712)
	{
		case 0:
			TASK::TASK_PLAY_ANIM(uLocal_395[2], Local_383[0 /*2*/], Local_383[0 /*2*/].f_1, 1.5f, -1.5f, -1, 32768, 0f, false, 0, false, 0, false);
			iLocal_712 = 1;
			break;
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_395[2], Local_383[0 /*2*/], Local_383[0 /*2*/].f_1, 1))
			{
				iLocal_712 = 2;
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[2]))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[2], Local_383[0 /*2*/], Local_383[0 /*2*/].f_1) >= 0.9f || !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_395[2], Local_383[0 /*2*/], Local_383[0 /*2*/].f_1, 1))
				{
					iLocal_712 = 3;
					iLocal_732 = 0;
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_200()
{
	if (!__LIB_0__::func_163(uLocal_395[2], 1630799643))
	{
		WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_395[2], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 999, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
		TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_395[2], Global_35, -1, false, 1);
		__LIB_1__::func_148(&uLocal_793);
	}
}

void func_201()
{
	if (func_192())
	{
		iLocal_720 = 0;
	}
	if (iLocal_720 == 1)
	{
		switch (iLocal_747)
		{
			case 0:
				if (fLocal_759 >= 0.42f)
				{
					if (func_372())
					{
						__LIB_2__::func_315(1515458263, uLocal_395[1], 1);
					}
					iLocal_747++;
				}
				break;
			case 1:
				if (fLocal_759 >= 0.47f)
				{
					if (func_372())
					{
						__LIB_2__::func_315(1515458263, uLocal_395[2], 1);
					}
					iLocal_747++;
				}
				break;
			case 2:
				if (fLocal_759 >= 0.51f)
				{
					if (func_372())
					{
						__LIB_2__::func_315(1515458263, uLocal_395[0], 1);
					}
					iLocal_747++;
				}
				break;
			case 3:
				if (fLocal_759 >= 0.59f)
				{
					iLocal_747++;
				}
				break;
			case 4:
				if (fLocal_759 >= 0.63f)
				{
					iLocal_747++;
				}
				break;
			case 5:
				if (fLocal_759 >= 0.68f)
				{
					iLocal_747++;
				}
				break;
			case 6:
				if (fLocal_759 >= 0.77f)
				{
					iLocal_747++;
					iLocal_744 = 1;
				}
				break;
			case 7:
				if (fLocal_759 >= 0.85f)
				{
					iLocal_720 = 0;
					iLocal_744 = 1;
				}
				break;
		}
	}
}

void func_202()
{
	switch (iLocal_750)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 1))
			{
				iLocal_750++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 1))
			{
				iLocal_750++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, 0, 1))
			{
				iLocal_750++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, 0, 1))
			{
				iLocal_750++;
			}
			break;
	}
}

void func_203()
{
	if (iLocal_731 == 1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_536.f_1))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "CIG", Local_209[0 /*12*/].f_8);
		}
		if (fLocal_759 >= 0.5f && fLocal_759 <= 0.77f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_395[1], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), false, 0, false, false);
			if (!func_374())
			{
				if (!__LIB_0__::func_163(uLocal_395[1], -1794415470) && !__LIB_0__::func_163(uLocal_395[1], 242628503))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_718);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_718);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 3);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_718);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_395[1], iLocal_718, 0.5f, 0.5f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_718);
				}
			}
		}
		if (func_374())
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_395[2], iLocal_407, true))
			{
				if (!__LIB_0__::func_163(uLocal_395[2], -1794415470))
				{
					TASK::TASK_ENTER_VEHICLE(uLocal_395[2], iLocal_407, 20000, 0, 1f, 1, 0);
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(uLocal_395[1], iLocal_407, true) && iLocal_722 == 0)
			{
				if (!__LIB_0__::func_163(uLocal_395[1], -1794415470))
				{
					TASK::TASK_ENTER_VEHICLE(uLocal_395[1], iLocal_407, 20000, -1, 1f, 1, 0);
				}
			}
		}
	}
}

void func_204()
{
	if (__LIB_0__::func_75(&uLocal_793))
	{
		if (__LIB_0__::func_264(&uLocal_793) > 7f)
		{
			VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[0], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[1], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[2], 0);
			if (iLocal_704 != 2)
			{
				func_183(2);
			}
		}
	}
}

void func_205()
{
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_407, true))
	{
		VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[0], 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[1], 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[2], 0);
		if (iLocal_14 == 0)
		{
			func_183(2);
		}
		else
		{
			func_190(3);
		}
	}
}

int func_206()
{
	if (PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_407))
	{
		VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[0], 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[1], 0);
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[2], 0);
		if (iLocal_14 == 0)
		{
			func_183(2);
		}
		else
		{
			func_190(3);
		}
		return 1;
	}
	return 0;
}

void func_207()
{
	if (((PED::IS_PED_DEAD_OR_DYING(uLocal_395[0], true) || PED::_IS_PED_HOGTIED(uLocal_395[0])) && (PED::IS_PED_DEAD_OR_DYING(uLocal_395[1], true) || PED::_IS_PED_HOGTIED(uLocal_395[1]))) && (PED::IS_PED_DEAD_OR_DYING(uLocal_395[2], true) || PED::_IS_PED_HOGTIED(uLocal_395[2])))
	{
		func_183(7);
	}
}

void func_208()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_536.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_536.f_1, false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
		{
			if (((((ANIMSCENE::_0x1F0E401031E20146(Local_536.f_1, "PBL_BREAKOUT_DUMP_A1") || ANIMSCENE::_0x1F0E401031E20146(Local_536.f_1, "PBL_BREAKOUT_DUMP_A2")) || ANIMSCENE::_0x1F0E401031E20146(Local_536.f_1, "PBL_BREAKOUT_DUMP_B1")) || ANIMSCENE::_0x1F0E401031E20146(Local_536.f_1, "PBL_BREAKOUT_DUMP_B2")) || ANIMSCENE::_0x1F0E401031E20146(Local_536.f_1, "PBL_BREAKOUT_LEAN")) || ANIMSCENE::_0x1F0E401031E20146(Local_536.f_1, "PBL_DUMP_EM_HERE"))
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_407, 0, 1);
			}
			else
			{
				AITRANSPORT::_0xBA8818212633500A(iLocal_407, 0, 0);
			}
		}
		else
		{
			AITRANSPORT::_0xBA8818212633500A(iLocal_407, 0, 0);
		}
	}
	else
	{
		AITRANSPORT::_0xBA8818212633500A(iLocal_407, 0, 0);
	}
}

void func_209()
{
	var uVar0[3];
	int iVar4;
	char* sVar5;
	if (iLocal_738 == 0)
	{
		uVar0[0] = uLocal_395[0];
		uVar0[1] = uLocal_395[1];
		uVar0[2] = uLocal_395[2];
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar4]) && !PED::IS_PED_RAGDOLL(uVar0[iVar4]))
			{
				__LIB_3__::func_453(uVar0[iVar4], 0, &(Local_15.f_5), &iLocal_716, 0, 0);
				if (PED::_IS_PED_HOGTIED(uVar0[iVar4]) || PED::_IS_PED_LASSOED(uVar0[iVar4]))
				{
					if (iLocal_739 == 0)
					{
						iLocal_739 = 1;
						iLocal_748 = 1;
					}
				}
				if (iLocal_716 == 8)
				{
					if (iLocal_740 == 0)
					{
						iLocal_740 = 1;
						iLocal_748 = 3;
					}
				}
				if (iLocal_716 == 4 || iLocal_716 == 256)
				{
					if (iLocal_743 == 0)
					{
						iLocal_743 = 1;
						iLocal_748 = 4;
					}
				}
				if (((iLocal_716 == 0 || iLocal_716 == 8192) || iLocal_716 == 1) || iLocal_716 == 32)
				{
					if (iLocal_741 == 0)
					{
						iLocal_741 = 1;
						iLocal_748 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uVar0[iVar4], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uVar0[iVar4])
				{
					if (iLocal_742 == 0)
					{
						iLocal_742 = 1;
						iLocal_748 = 2;
					}
				}
				switch (iLocal_748)
				{
					case 0:
						if (func_181(uVar0[iVar4], Global_35, sLocal_414[8], 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
					case 1:
						if (func_181(uVar0[iVar4], Global_35, sLocal_414[9], 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
					case 2:
						if (func_181(uVar0[iVar4], Global_35, sLocal_414[10], 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
					case 3:
						if (func_181(uVar0[iVar4], Global_35, sLocal_414[11], 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
					case 4:
						if (iLocal_14 == 0)
						{
							if (uVar0[iVar4] == uLocal_395[0])
							{
								sVar5 = "GENERIC_ANGRY_REACTION";
							}
							else if (uVar0[iVar4] == uLocal_395[1])
							{
								sVar5 = "GENERIC_ANGRY_REACTION";
							}
							else if (uVar0[iVar4] == uLocal_395[2])
							{
								sVar5 = "GENERIC_CURSE_HIGH";
							}
						}
						else if (uVar0[iVar4] == uLocal_395[0])
						{
							sVar5 = "GENERIC_CURSE_HIGH";
						}
						else if (uVar0[iVar4] == uLocal_395[1])
						{
							sVar5 = "GENERIC_SHOCKED_HIGH";
						}
						if (iLocal_14 == 0 && uVar0[iVar4] == uLocal_395[2])
						{
							if (func_181(uVar0[iVar4], Global_35, sVar5, 0.8f, 1))
							{
								iLocal_748 = -1;
								iLocal_738 = 1;
							}
						}
						else if (iLocal_14 == 1 && uVar0[iVar4] == uLocal_395[0])
						{
							if (func_181(uVar0[iVar4], Global_35, sVar5, 0.8f, 1))
							{
								iLocal_748 = -1;
								iLocal_738 = 1;
							}
						}
						else if (func_181(uVar0[iVar4], Global_35, sVar5, 0.8f, 0))
						{
							iLocal_748 = -1;
							iLocal_738 = 1;
						}
						break;
				}
			}
			iVar4++;
		}
	}
}

void func_210()
{
	iLocal_725 = 1;
	if (__LIB_3__::func_496(uLocal_395[0], "safetobreakout_breakout_dump_a1", 1067030938 /* Float: 1.2f */))
	{
	}
	if (__LIB_3__::func_496(uLocal_395[0], "safetobreakout_breakout_dump_a2", 1067030938 /* Float: 1.2f */))
	{
	}
	if (__LIB_3__::func_496(uLocal_395[0], "safetobreakout_breakout_lean", 1067030938 /* Float: 1.2f */))
	{
	}
	if (__LIB_3__::func_496(uLocal_395[0], "safetobreakout_breakout_dump_b1", 1067030938 /* Float: 1.2f */))
	{
	}
	if (__LIB_3__::func_496(uLocal_395[0], "safetobreakout_breakout_dump_b2", 1067030938 /* Float: 1.2f */))
	{
	}
	if (__LIB_3__::func_496(uLocal_395[1], "safetobreakout_breakout_dump_a1", 1067030938 /* Float: 1.2f */))
	{
	}
	if (__LIB_3__::func_496(uLocal_395[1], "safetobreakout_breakout_dump_a2", 1067030938 /* Float: 1.2f */))
	{
	}
	if (__LIB_3__::func_496(uLocal_395[1], "safetobreakout_breakout_lean", 1067030938 /* Float: 1.2f */))
	{
	}
	if (__LIB_3__::func_496(uLocal_395[1], "safetobreakout_breakout_dump_b1", 1067030938 /* Float: 1.2f */))
	{
	}
	if (__LIB_3__::func_496(uLocal_395[1], "safetobreakout_breakout_dump_b2", 1067030938 /* Float: 1.2f */))
	{
	}
	if ((fLocal_759 < 0.35f && iLocal_727 == 0) && iLocal_726 == 0)
	{
		iLocal_727 = 1;
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_536.f_1);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_A", uLocal_395[3]);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_B", uLocal_395[4]);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_B", uLocal_395[1]);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "MALE_C", uLocal_395[0]);
	}
	if (iLocal_727 == 0)
	{
		if ((fLocal_759 >= 0.35f && fLocal_759 < 0.52f) && iLocal_726 == 0)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_536.f_1, "PBL_BREAKOUT_DUMP_A2"))
			{
				iLocal_727 = 1;
				iLocal_726 = 1;
			}
		}
		if ((fLocal_759 >= 0.55f && fLocal_759 < 0.7f) && iLocal_726 == 0)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_536.f_1, "PBL_BREAKOUT_LEAN"))
			{
				iLocal_726 = 1;
				iLocal_727 = 1;
			}
		}
		if ((fLocal_759 >= 0.7f && fLocal_759 < 0.8f) && iLocal_726 == 0)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_536.f_1, "PBL_BREAKOUT_DUMP_B2"))
			{
				iLocal_726 = 1;
				iLocal_727 = 1;
			}
		}
		if ((fLocal_759 >= 0.8f && fLocal_759 < 0.99f) && iLocal_726 == 0)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_536.f_1, "PBL_BREAKOUT_LEAN"))
			{
				iLocal_727 = 1;
				iLocal_726 = 1;
			}
		}
	}
}

void func_211()
{
	if (!PED::IS_PED_RAGDOLL(uLocal_395[4]))
	{
		PED::SET_PED_TO_RAGDOLL(uLocal_395[4], 1000, 4000, 0, false, true, false);
	}
	if (!PED::IS_PED_RAGDOLL(uLocal_395[3]))
	{
		PED::SET_PED_TO_RAGDOLL(uLocal_395[3], 1000, 4000, 0, false, true, false);
	}
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_A", uLocal_395[3]);
	ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "VICTIM_B", uLocal_395[4]);
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (__LIB_2__::func_1(uLocal_395[iVar0], 0, 1))
		{
			iVar1++;
			if (iVar1 > iParam0)
			{
				return iVar1;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_213()
{
	switch (iLocal_706)
	{
		case 0:
			Local_15.f_44 = 1;
			__LIB_1__::func_148(&uLocal_763);
			iLocal_706 = 1;
			break;
		case 1:
			if (!__LIB_2__::func_167(uLocal_395[0], 0) && __LIB_0__::func_264(&uLocal_763) >= 0.8f)
			{
				if (iLocal_725 == 0 || iLocal_728 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
					{
						TASK::TASK_COMBAT_PED(uLocal_395[0], PLAYER::PLAYER_PED_ID(), 16384, 16);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_395[0], false);
					}
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_536.f_1, false) || iLocal_727 == 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_395[0], false);
						TASK::TASK_COMBAT_PED(uLocal_395[0], PLAYER::PLAYER_PED_ID(), 16384, 16);
					}
				}
			}
			if (!__LIB_2__::func_167(uLocal_395[1], 0) && __LIB_0__::func_264(&uLocal_763) >= 0.2f)
			{
				if (iLocal_725 == 0 || iLocal_728 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
					{
						TASK::TASK_COMBAT_PED(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_395[1], false);
					}
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_536.f_1, false) || iLocal_727 == 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_395[1], false);
						TASK::TASK_COMBAT_PED(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 16384, 16);
					}
				}
			}
			if (iLocal_732 == 1)
			{
				if (func_199())
				{
					if (!__LIB_0__::func_163(uLocal_395[2], 780511057))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[2]))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_395[2], false);
							TASK::TASK_COMBAT_PED(uLocal_395[2], PLAYER::PLAYER_PED_ID(), 16384, 16);
						}
					}
				}
			}
			else if (!__LIB_0__::func_163(uLocal_395[2], 780511057))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[2]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_395[2], false);
					TASK::TASK_COMBAT_PED(uLocal_395[2], PLAYER::PLAYER_PED_ID(), 16384, 16);
				}
			}
			break;
	}
}

bool func_214()
{
	if (PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[0], 6f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[1], 6f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[2]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[2], 6f);
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[0], 60f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[1], 60f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[2]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[2], 60f);
		}
	}
	if (__LIB_0__::func_665(uLocal_395[2], PLAYER::PLAYER_PED_ID(), 1, 1) <= 12f)
	{
		if (!func_374())
		{
			if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[0], PLAYER::PLAYER_PED_ID(), 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[2], PLAYER::PLAYER_PED_ID(), 17))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_215()
{
	if (PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[0], 6f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[1], 6f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[2]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[2], 6f);
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[0], 60f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[1], 60f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[2]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[2], 60f);
		}
	}
	if (__LIB_0__::func_665(uLocal_395[2], PLAYER::PLAYER_PED_ID(), 1, 1) <= 15f)
	{
		if (!func_374())
		{
			if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[0], PLAYER::PLAYER_PED_ID(), 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 17)) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[2], PLAYER::PLAYER_PED_ID(), 17))
			{
				return true;
			}
		}
	}
	return false;
}

void func_216()
{
	func_221();
	switch (iLocal_753)
	{
		case 0:
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[2], 0);
			if (func_181(uLocal_395[0], PLAYER::PLAYER_PED_ID(), sLocal_414[19], 1.2f, 0))
			{
				iLocal_753++;
				__LIB_1__::func_148(&uLocal_787);
			}
			break;
		case 1:
			if ((__LIB_2__::func_227(0f, 1, uLocal_395[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_395[1], 1)) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				if (__LIB_0__::func_264(&uLocal_787) > 4f)
				{
					__LIB_2__::func_303(uLocal_395[1], PLAYER::PLAYER_PED_ID(), sLocal_414[17], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_753++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_787);
			}
			break;
	}
}

void func_217()
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_536.f_1, "PBL_BREAKOUT_DUMP_A2");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_536.f_1, "PBL_BREAKOUT_DUMP_B2");
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_536.f_1, "PBL_BREAKOUT_LEAN");
}

void func_218()
{
	if (func_192())
	{
		iLocal_721 = 0;
	}
	if (iLocal_721 == 1)
	{
		switch (iLocal_751)
		{
			case 0:
				if (fLocal_759 >= 0.12f)
				{
					iLocal_751++;
				}
				break;
			case 1:
				if (fLocal_759 >= 0.33f)
				{
					iLocal_751++;
				}
				break;
			case 2:
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					iLocal_751++;
				}
				break;
			case 3:
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					iLocal_751++;
				}
				break;
			case 4:
				if (fLocal_759 >= 0.85f)
				{
					iLocal_721 = 0;
				}
				break;
		}
	}
}

int func_219()
{
	if ((!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_536.f_1) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_536.f_1, false)) || !ANIMSCENE::_0x1F0E401031E20146(Local_536.f_1, "PBL_DUMP_EM_HERE"))
	{
		return 0;
	}
	if (__LIB_0__::func_665(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 1, 1) <= 8f)
	{
		if (!func_374())
		{
			if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[0], PLAYER::PLAYER_PED_ID(), 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 17)) || (__LIB_2__::func_1(uLocal_395[2], 0, 1) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[2], PLAYER::PLAYER_PED_ID(), 17)))
			{
				VEHICLE::SET_BOAT_ANCHOR(iLocal_407, false);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_536.f_1, "rowboat", iLocal_407);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[0], 0);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[1], 0);
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_395[2], 0);
				if (iLocal_704 != 2)
				{
					func_183(2);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_220()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_395[0], 0) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_395[1], 0)) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_395[2], 0))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_464, ENTITY::GET_ENTITY_COORDS(uLocal_395[0], true, false), &iVar0);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_464, ENTITY::GET_ENTITY_COORDS(uLocal_395[1], true, false), &iVar1);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_464, ENTITY::GET_ENTITY_COORDS(uLocal_395[2], true, false), &iVar2);
		if (iVar0 > iVar1)
		{
			fLocal_761 = 1.2f;
			fLocal_760 = 1f;
		}
		else
		{
			fLocal_761 = 1f;
			fLocal_760 = 1.2f;
		}
		if (iVar0 > iVar2)
		{
			fLocal_762 = 1.2f;
			fLocal_760 = 1f;
		}
		else
		{
			fLocal_762 = 1f;
			fLocal_760 = 1.2f;
		}
		if (iVar1 > iVar2)
		{
			fLocal_762 = 1.2f;
			fLocal_761 = 1f;
		}
		else
		{
			fLocal_762 = 1f;
			fLocal_761 = 1.2f;
		}
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_395[0], fLocal_760, 1, -1f, 0);
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_395[1], fLocal_761, 1, -1f, 0);
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_395[2], fLocal_762, 1, -1f, 0);
	}
}

void func_221()
{
	int iVar0;
	iVar0 = 15;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = 20;
	}
	switch (iLocal_758)
	{
		case 0:
			if ((__LIB_2__::func_118(uLocal_395[0], 1, 1) < IntToFloat(iVar0) || __LIB_2__::func_118(uLocal_395[1], 1, 1) < IntToFloat(iVar0)) || __LIB_2__::func_118(uLocal_395[2], 1, 1) < IntToFloat(iVar0))
			{
				__LIB_3__::func_880(uLocal_395[0], Global_35, &uLocal_511, -1, 15);
				__LIB_1__::func_148(&uLocal_781);
				iLocal_758++;
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_781) > 1f)
			{
				__LIB_3__::func_880(uLocal_395[1], Global_35, &uLocal_511, -1, 15);
				__LIB_1__::func_148(&uLocal_781);
				iLocal_758++;
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_781) > 1.5f)
			{
				__LIB_3__::func_880(uLocal_395[2], Global_35, &uLocal_511, -1, 15);
				__LIB_1__::func_148(&uLocal_781);
				iLocal_758++;
			}
			break;
		case 3:
			__LIB_3__::func_880(uLocal_395[0], Global_35, &uLocal_511, -1, 15);
			__LIB_3__::func_880(uLocal_395[1], Global_35, &uLocal_511, -1, 15);
			__LIB_3__::func_880(uLocal_395[2], Global_35, &uLocal_511, -1, 15);
			break;
	}
}

void func_222()
{
	if (iLocal_14 == 0)
	{
		switch (iLocal_752)
		{
			case 0:
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					if (__LIB_2__::func_155(1, 1))
					{
						__LIB_2__::func_303(uLocal_395[1], PLAYER::PLAYER_PED_ID(), sLocal_414[16], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_395[2], PLAYER::PLAYER_PED_ID(), sLocal_414[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_752++;
				}
				break;
			case 1:
				if (__LIB_2__::func_227(0f, 1, 0, 0))
				{
					if (__LIB_2__::func_155(1, 1))
					{
						__LIB_2__::func_303(uLocal_395[0], PLAYER::PLAYER_PED_ID(), sLocal_414[16], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_395[2], PLAYER::PLAYER_PED_ID(), sLocal_414[17], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_752++;
				}
				break;
			case 2:
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					func_183(2);
					iLocal_752++;
				}
				break;
		}
	}
	else
	{
		switch (iLocal_752)
		{
			case 0:
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					if (__LIB_2__::func_155(1, 1))
					{
						__LIB_2__::func_303(uLocal_395[0], PLAYER::PLAYER_PED_ID(), sLocal_414[16], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_395[0], PLAYER::PLAYER_PED_ID(), sLocal_414[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_752++;
				}
				break;
			case 1:
				if (__LIB_2__::func_227(0f, 1, 0, 0))
				{
					if (__LIB_2__::func_155(1, 1))
					{
						__LIB_2__::func_303(uLocal_395[1], PLAYER::PLAYER_PED_ID(), sLocal_414[18], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_395[1], PLAYER::PLAYER_PED_ID(), sLocal_414[17], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					iLocal_752++;
				}
				break;
			case 2:
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					func_190(3);
					iLocal_752++;
				}
				break;
		}
	}
}

void func_225()
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_536.f_1, "PBL_DEAD_LOOP"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_536.f_1, "PBL_DEAD_LOOP", true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_536.f_1, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_536.f_1, false))
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_536.f_1, iLocal_407, 0);
		ANIMSCENE::START_ANIM_SCENE(Local_536.f_1);
	}
}

bool func_226()
{
	if (PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[0], 6f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[1], 6f);
		}
	}
	else
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[0]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[0], 60f);
		}
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_395[1]))
		{
			PED::SET_PED_SEEING_RANGE(uLocal_395[1], 60f);
		}
	}
	if (__LIB_0__::func_665(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 1, 1) <= 15f)
	{
		if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[0], PLAYER::PLAYER_PED_ID(), 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_395[1], PLAYER::PLAYER_PED_ID(), 17)) || (!func_378() && !PED::_GET_PED_CROUCH_MOVEMENT(PLAYER::PLAYER_PED_ID())))
		{
			return true;
		}
	}
	return false;
}

void func_227()
{
	switch (iLocal_754)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (func_372())
				{
					__LIB_2__::func_315(1515458263, uLocal_395[0], 1);
				}
				__LIB_2__::func_303(uLocal_395[0], uLocal_395[1], sLocal_414[0], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_754++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(1f, 1, 0, 0))
			{
				if (func_372())
				{
					__LIB_2__::func_315(1515458263, uLocal_395[1], 1);
				}
				__LIB_2__::func_303(uLocal_395[1], uLocal_395[0], sLocal_414[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_754++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-6f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[1], uLocal_395[0], sLocal_414[2], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_754++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-6f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[0], uLocal_395[1], sLocal_414[3], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				iLocal_754++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(2f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[0], uLocal_395[1], sLocal_414[4], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				iLocal_754++;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[1], uLocal_395[0], sLocal_414[5], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				iLocal_754++;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(1f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[0], uLocal_395[1], sLocal_414[6], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				iLocal_754++;
			}
			break;
		case 7:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[1], uLocal_395[0], sLocal_414[7], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_744 = 1;
				bLocal_746 = true;
				iLocal_754++;
			}
			break;
	}
}

void func_228()
{
	func_221();
	__LIB_3__::func_166(&Local_15);
	switch (iLocal_749)
	{
		case 0:
			__LIB_2__::func_461(0);
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[0], PLAYER::PLAYER_PED_ID(), sLocal_414[15], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_411(&(Local_650[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_650[1 /*17*/]), 0, 0);
				__LIB_1__::func_148(&uLocal_790);
				iLocal_749++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, uLocal_395[0], 1) || __LIB_0__::func_264(&uLocal_790) > 4f)
			{
				__LIB_2__::func_451(&(Local_544[0 /*21*/]), 0);
				__LIB_2__::func_451(&(Local_544[1 /*21*/]), 0);
				Local_650[0 /*17*/].f_13 = sLocal_414[36];
				Local_650[1 /*17*/].f_13 = sLocal_414[37];
				__LIB_2__::func_411(&(Local_650[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_650[1 /*17*/]), 1, 0);
				__LIB_3__::func_158(&(Local_650[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_650[1 /*17*/]), 0);
				__LIB_2__::func_360(&(Local_650[0 /*17*/]), "INTERACT_DEFUSE");
				iLocal_708 = 0;
				iLocal_707 = 3;
				iLocal_749++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[1], PLAYER::PLAYER_PED_ID(), sLocal_414[17], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_749++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[0], PLAYER::PLAYER_PED_ID(), sLocal_414[19], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_749++;
			}
			break;
		case 4:
			if (!func_378() && __LIB_2__::func_227(-5f, 1, 0, 0))
			{
				func_190(3);
			}
			break;
	}
}

void func_229()
{
	switch (iLocal_755)
	{
		case 0:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_395[0], "script_re@boat_attack", "dump_em_here_male_c", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[0], "script_re@boat_attack", "dump_em_here_male_c") < 0.01f)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[0], "script_re@boat_attack", "dump_em_here_male_c") > 0f && __LIB_2__::func_227(0, 1, uLocal_395[0], 1))
					{
						if (func_372())
						{
							__LIB_2__::func_315(1515458263, uLocal_395[1], 1);
						}
						__LIB_2__::func_303(uLocal_395[0], uLocal_395[1], sLocal_414[21], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_755++;
					}
				}
				else
				{
					iLocal_755++;
				}
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_395[1], "script_re@boat_attack", "dump_em_here_male_b", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[1], "script_re@boat_attack", "dump_em_here_male_b") < 0.13f)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[1], "script_re@boat_attack", "dump_em_here_male_b") > 0.125f && __LIB_2__::func_227(0, 1, uLocal_395[1], 1))
					{
						__LIB_2__::func_303(uLocal_395[1], uLocal_395[0], sLocal_414[22], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_755++;
					}
				}
				else
				{
					iLocal_755++;
				}
			}
			break;
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_395[1], "script_re@boat_attack", "dump_em_here_male_b", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[1], "script_re@boat_attack", "dump_em_here_male_b") < 0.27f)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[1], "script_re@boat_attack", "dump_em_here_male_b") > 0.26f && __LIB_2__::func_227(0, 1, uLocal_395[1], 1))
					{
						__LIB_2__::func_303(uLocal_395[1], uLocal_395[0], sLocal_414[23], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_755++;
					}
				}
				else
				{
					iLocal_755++;
				}
			}
			break;
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_395[1], "script_re@boat_attack", "dump_em_here_male_b", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[1], "script_re@boat_attack", "dump_em_here_male_b") < 0.67f)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[1], "script_re@boat_attack", "dump_em_here_male_b") > 0.66f && __LIB_2__::func_227(0, 1, uLocal_395[1], 1))
					{
						__LIB_2__::func_303(uLocal_395[1], uLocal_395[0], sLocal_414[24], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_755++;
					}
				}
				else
				{
					iLocal_755++;
				}
			}
			break;
		case 4:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_395[0], "script_re@boat_attack", "dump_em_here_male_c", 1))
			{
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[0], "script_re@boat_attack", "dump_em_here_male_c") < 0.77f)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_395[0], "script_re@boat_attack", "dump_em_here_male_c") > 0.76f && __LIB_2__::func_227(0, 1, uLocal_395[0], 1))
					{
						__LIB_2__::func_303(uLocal_395[0], uLocal_395[1], sLocal_414[27], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_755++;
					}
				}
				else
				{
					iLocal_755++;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_230()
{
	switch (iLocal_756)
	{
		case 0:
			if (__LIB_2__::func_227(1f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[1], uLocal_395[0], sLocal_414[28], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_756++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_395[0], uLocal_395[1], sLocal_414[29], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_756++;
			}
			break;
	}
}

int func_351(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_351(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					func_446(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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
					func_446(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

bool func_372()
{
	if (bLocal_736 || iLocal_707 != 0)
	{
		return false;
	}
	return true;
}

bool func_374()
{
	if (((!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_395[0], 80f) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_395[1], 80f)) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_395[2], 80f)) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f)
	{
		return true;
	}
	return false;
}

bool func_378()
{
	if ((!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_395[0], 80f) && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_395[1], 80f)) && ENTITY::GET_ENTITY_SPEED(Global_35) >= 0.1f)
	{
		return true;
	}
	return false;
}

void func_446(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	int iVar0;
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					MISC::SET_BIT(uParam4[iVar0 /*17*/], 14);
					iVar0 = (iVar0 + 1);
				}
			}
			__LIB_3__::func_350(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

