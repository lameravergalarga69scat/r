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
	struct<32> Local_14[6];
	struct<12> Local_207[4];
	struct<193> Local_256 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	struct<5> Local_453 = { 0, 0, 0, 0, 0 } ;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	var uLocal_463[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_470[3] = { 0, 0, 0 };
	var uLocal_474[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	int iLocal_486 = 0;
	var uLocal_487 = 2;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	int iLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	struct<21> Local_507[3];
	struct<17> Local_571[3];
	bool bLocal_623 = false;
	bool bLocal_624 = false;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	vector3 vLocal_627 = { 0f, 0f, 0f };
	var uLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	float fLocal_634 = 0f;
	float fLocal_635 = 0f;
	float fLocal_636 = 0f;
	float fLocal_637 = 0f;
	float fLocal_638 = 0f;
	bool bLocal_639 = false;
	bool bLocal_640 = false;
	bool bLocal_641 = false;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = -1;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 2;
	var uLocal_652 = 1;
	var uLocal_653 = 1;
	var uLocal_654 = 1;
	var uLocal_655 = 0;
	var uLocal_656 = 1;
	var uLocal_657 = 2;
	var uLocal_658 = 2;
	var uLocal_659 = 3;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 3;
	var uLocal_663 = 1;
	var uLocal_664 = 3;
	var uLocal_665 = 3;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = -1;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 2;
	var uLocal_677 = 1;
	var uLocal_678 = 1;
	var uLocal_679 = 1;
	var uLocal_680 = 0;
	var uLocal_681 = 1;
	var uLocal_682 = 2;
	var uLocal_683 = 2;
	var uLocal_684 = 3;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 3;
	var uLocal_688 = 1;
	var uLocal_689 = 3;
	var uLocal_690 = 3;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 1176256512;
	struct<33> Local_714[3];
	var uLocal_814 = 0;
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
	bLocal_623 = true;
	iLocal_626 = 1;
	Local_256.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_256.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_368(&Local_256, 1);
	__LIB_2__::func_433(&(Local_256.f_5));
	func_5();
	func_6(&uLocal_643, 0);
	__LIB_2__::func_602(&(Local_571[0 /*17*/]), __LIB_2__::func_460(7), func_8(0), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_571[1 /*17*/]), __LIB_2__::func_460(10), func_8(1), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	iLocal_486 = __LIB_3__::func_390(Local_256.f_3, 2, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_641 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_641, 1862, 0);
		if (bLocal_641)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_452)
			{
				case 0:
					if (func_13())
					{
						iLocal_452 = 1;
					}
					break;
				case 1:
					if (func_14(&Local_256, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_15(&Local_256, &uLocal_484, &uLocal_485);
						__LIB_3__::func_503(&Local_256, uLocal_484, 2723);
						func_18();
						__LIB_3__::func_352(&Local_256, 2);
						__LIB_3__::func_618(Local_256.f_51, 15f, 1, 0, 0, 0, 0);
						__LIB_3__::func_867(&uLocal_642, &uLocal_630, Local_256.f_51, 0f, 0f, 0f, 15f, 15f, 15f, 0, 0, 1, 0, 0);
						__LIB_3__::func_337(&uLocal_814, Local_256.f_51, 1.5f);
						iLocal_452 = 3;
					}
					if (Local_256.f_160)
					{
						func_11();
					}
					break;
				case 3:
					if (func_23())
					{
						func_24();
						func_25();
						__LIB_1__::func_206(vLocal_627, 3f, 0);
						func_27();
						func_6(&uLocal_668, 1);
						iLocal_452 = 4;
					}
					break;
				case 4:
					if (!__LIB_3__::func_466(&Local_256, &uLocal_463, iLocal_486, 0, 1, 0, 1, 0))
					{
						func_11();
					}
					if (!Local_256.f_46)
					{
						if ((__LIB_4__::func_299(&uLocal_463, &(Local_256.f_5), &iLocal_504, &uLocal_505, 0, 2, 1) || func_30()) || (iLocal_625 > 0 && __LIB_0__::func_94(Global_35, __LIB_3__::func_179(&Local_256), 1) < 6f))
						{
							if (iLocal_504 != 8)
							{
								Local_256.f_46 = 1;
								__LIB_1__::func_148(&uLocal_696);
								func_34(100, 100, 100);
								iLocal_461 = 4;
							}
							else if (iLocal_625 > 1)
							{
								Local_256.f_46 = 1;
								__LIB_1__::func_148(&uLocal_696);
								func_34(100, 100, 100);
								iLocal_461 = 4;
							}
						}
					}
					if (func_35())
					{
						Local_256.f_50 = 1;
						func_11();
					}
					if (__LIB_3__::func_431(&Local_256, &uLocal_463, 1, 0, 1, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_11();
					}
					break;
			}
			BUILTIN::WAIT(Local_256.f_158);
		}
	}
}

void func_5()
{
	__LIB_2__::func_433(&(Local_256.f_5));
	__LIB_2__::func_105(&(Local_256.f_5), 1);
	__LIB_3__::func_234(&(Local_256.f_5));
	__LIB_2__::func_110(&(Local_256.f_5), 1);
	__LIB_2__::func_51(&(Local_256.f_5), 1);
	__LIB_3__::func_407(&(Local_256.f_5), 50f);
	__LIB_2__::func_613(&(Local_256.f_5), 1);
	__LIB_2__::func_906(&(Local_256.f_5), 42);
	__LIB_3__::func_333(&(Local_256.f_5), 1);
	__LIB_2__::func_715(&(Local_256.f_5), 1);
}

void func_6(var uParam0, bool bParam1)
{
	uParam0->f_8 = 4;
	if (bParam1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(Local_207[0 /*12*/].f_8, false, false) };
	}
	else
	{
		uParam0->f_4 = 21030;
		uParam0->f_3 = Global_35;
	}
	uParam0->f_12 = 1;
	uParam0->f_9 = 1;
	uParam0->f_17 = 4;
	uParam0->f_18 = 4;
	uParam0->f_19 = 4;
	uParam0->f_20 = 4;
	uParam0->f_21 = 4;
	uParam0->f_22 = 4;
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return __LIB_0__::func_196(iLocal_486 == 0, "RE_RP_LWL_V1_PLAYER_GREET", "RE_RP_LWL_V2_PLAYER_GREET");
		case 1:
			return __LIB_0__::func_196(iLocal_486 == 0, "RE_RP_LWL_V1_PLAYER_ANTAGONIZE", "RE_RP_LWL_V2_PLAYER_ANTAGONIZE");
		case 2:
			return __LIB_0__::func_196(iLocal_486 == 0, "RE_RP_LWL_V1_PLAYER_DEFUSE", "RE_RP_LWL_V2_PLAYER_DEFUSE");
		case 3:
			return __LIB_0__::func_196(iLocal_486 == 0, "RE_RP_LWL_V1_PLAYER_ANTAGONIZE_B", "RE_RP_LWL_V2_PLAYER_ANTAGONIZE_B");
		default:
			break;
	}
	return __LIB_3__::func_497(" - Invalid Index.", 0);
}

void func_11()
{
	int iVar0;
	int iVar1;
	__LIB_3__::func_525(&uLocal_642, &uLocal_630);
	__LIB_3__::func_524(&iLocal_633);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_453))
	{
		__LIB_3__::func_319(Local_453);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_463[iVar0]))
		{
			if (iLocal_461 < 5)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_463[iVar0 + 3], 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.5f, 8192, 0);
				__LIB_1__::func_474(uLocal_463[iVar0], &iVar1, 0, 0, 1, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_463[iVar0]));
				PED::_0x39A2FC5AF55A52B1(uLocal_463[iVar0], -1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_463[iVar0 + 3]));
				PED::_0x39A2FC5AF55A52B1(uLocal_463[iVar0 + 3], -1);
				Local_256.f_50 = 1;
			}
			__LIB_3__::func_484(&(Local_256.f_5), uLocal_463[iVar0], 0, 1096810496 /* Float: 14f */, 1109393408 /* Float: 40f */, 1084227584 /* Float: 5f */);
			__LIB_2__::func_344(&(uLocal_463[iVar0]));
		}
		iVar0++;
	}
	__LIB_2__::func_480(&Local_571, 0, 0, 1, 0);
	__LIB_3__::func_480(&Local_207);
	if (func_71(16384))
	{
		if (__LIB_2__::func_1(uLocal_463[0], 0, 1))
		{
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_463[0], uLocal_463[1], -3f, -5f, 0f, 1.5f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
		}
		if (__LIB_2__::func_1(uLocal_463[2], 0, 1))
		{
			TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(uLocal_463[2], uLocal_463[1], 3f, -5f, 0f, 1.5f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
		}
	}
	__LIB_3__::func_493(&Local_256, &uLocal_463, &uLocal_474, iLocal_486, -1, 0, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_13()
{
	switch (iLocal_451)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_256))
			{
				func_76();
				func_77();
				func_78();
				func_79();
				func_80();
				STREAMING::REQUEST_MODEL(joaat("S_INTERACT_LANTERN02X"), false);
				iLocal_451 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&Local_14))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("S_INTERACT_LANTERN02X")))
			{
			}
			if (!__LIB_3__::func_316(&Local_207))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_14(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (bParam6 || func_83(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || __LIB_3__::func_304(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (__LIB_1__::func_85(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				MISC::CLEAR_AREA(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				__LIB_3__::func_305(uParam0, -1, 0, bParam7);
			}
			PERSISTENCE::_0x9D16896F0DBE78A2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = __LIB_3__::func_162(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_15(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 11;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 11;
			*uParam2 = 4;
			break;
	}
}

Vector3 func_16(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 11:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 125.16f;
				case 1:
					return 0f, 0f, -1.44f;
				case 2:
					return 0f, 0f, 115.2f;
				case 3:
					return 0f, 0f, 10.4f;
				case 4:
					return 0f, 0f, 40.32f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_18()
{
	switch (Local_256.f_51.f_4)
	{
		case 0:
			iLocal_483 = 0;
			vLocal_627 = { 1473.792f, -1751.789f, 59.613f };
			Local_14[3 /*32*/].f_6 = { 9.5f, -5f, 0.54f };
			Local_14[3 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[4 /*32*/].f_6 = { 7.75f, -2.55f, 0.53f };
			Local_14[4 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[5 /*32*/].f_6 = { 11.26f, -4f, 0.6f };
			Local_14[5 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			break;
		case 1:
			iLocal_483 = 1;
			vLocal_627 = { 755.7969f, -808.5951f, 55.1815f };
			Local_14[3 /*32*/].f_6 = { 0f, -6f, 0.54f };
			Local_14[3 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[4 /*32*/].f_6 = { 2.75f, -6f, 0.53f };
			Local_14[4 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[5 /*32*/].f_6 = { 4.96f, -6f, 0.6f };
			Local_14[5 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			break;
		case 2:
			iLocal_483 = 2;
			vLocal_627 = { 1274.209f, -801.5552f, 76.58161f };
			Local_14[3 /*32*/].f_6 = { 8.5f, 0f, 0.54f };
			Local_14[3 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[4 /*32*/].f_6 = { 6.75f, 0.55f, 0.53f };
			Local_14[4 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[5 /*32*/].f_6 = { 10.26f, -1f, 0.6f };
			Local_14[5 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			break;
		case 3:
			iLocal_483 = 3;
			vLocal_627 = { 1117.273f, -730.0624f, 93.77711f };
			Local_14[3 /*32*/].f_6 = { 8.5f, 0f, 0.54f };
			Local_14[3 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[4 /*32*/].f_6 = { 6.75f, 0.55f, 0.53f };
			Local_14[4 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[5 /*32*/].f_6 = { 10.26f, -1f, 0.6f };
			Local_14[5 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			break;
		case 4:
			iLocal_483 = 4;
			vLocal_627 = { 1310.807f, -239.9306f, 101.5014f };
			Local_14[3 /*32*/].f_6 = { 8.5f, 0f, 0.54f };
			Local_14[3 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[4 /*32*/].f_6 = { 6.75f, 0.55f, 0.53f };
			Local_14[4 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			Local_14[5 /*32*/].f_6 = { 10.26f, -1f, 0.6f };
			Local_14[5 /*32*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(100f, 150f);
			break;
	}
}

bool func_23()
{
	switch (iLocal_450)
	{
		case 0:
			iLocal_450 = 1;
			break;
		case 1:
			if (!__LIB_3__::func_479(__LIB_3__::func_179(&Local_256), __LIB_3__::func_526(&Local_256), &Local_14, &uLocal_463, 0, 0, -1, 1))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_487))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_207))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_24()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (__LIB_2__::func_1(uLocal_463[iVar0], 0, 1))
		{
			if (!__LIB_0__::func_125(uLocal_463[iVar0]))
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_463[iVar0], true, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_463[iVar0], 6, true);
				PED::SET_PED_CONFIG_FLAG(uLocal_463[iVar0], 347, true);
				__LIB_2__::func_272(uLocal_463[iVar0], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				if (iVar0 != 1)
				{
					__LIB_2__::func_272(uLocal_463[iVar0], joaat("WEAPON_REPEATER_CARBINE"), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_463[iVar0], 5, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_463[iVar0], 50, true);
				PED::_0x8ACC0506743A8A5C(uLocal_463[iVar0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_463[iVar0], 284, true);
			}
		}
		iVar0++;
	}
	__LIB_2__::func_23(&(Local_256.f_5), uLocal_463[0], 0);
	__LIB_2__::func_23(&(Local_256.f_5), uLocal_463[1], 0);
	__LIB_2__::func_23(&(Local_256.f_5), uLocal_463[2], 0);
	__LIB_2__::func_20(&(Local_256.f_5), uLocal_463[3], 0);
	__LIB_2__::func_20(&(Local_256.f_5), uLocal_463[4], 0);
	__LIB_2__::func_20(&(Local_256.f_5), uLocal_463[5], 0);
	__LIB_3__::func_285(uLocal_463[1], &Local_256, 0);
	__LIB_3__::func_285(uLocal_463[0], &Local_256, 0);
}

void func_25()
{
	int iVar0;
	iVar0 = OBJECT::CREATE_OBJECT(joaat("S_INTERACT_LANTERN02X"), __LIB_3__::func_179(&Local_256), true, true, false, false, true);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, uLocal_463[4], PED::GET_PED_BONE_INDEX(uLocal_463[4], 62111), -0.32f, 0.05f, -0.22f, 0f, 53f, 0f, false, false, false, false, 2, true, false, false);
}

void func_27()
{
	switch (Local_256.f_51.f_4)
	{
		case 0:
			Local_207[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[0 /*12*/].f_7, 1473.754f, -1751.391f, 60.53294f, true, true, false, false, true);
			Local_207[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[1 /*12*/].f_7, 1473.767f, -1751.584f, 60.56224f, true, true, false, false, true);
			Local_207[2 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[2 /*12*/].f_7, 1473.984f, -1751.741f, 60.59855f, true, true, false, false, true);
			Local_207[3 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[3 /*12*/].f_7, 1474.037f, -1751.612f, 60.59275f, true, true, false, false, true);
			break;
		case 1:
			Local_207[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[0 /*12*/].f_7, 755.711f, -808.591f, 55.1923f, true, true, false, false, true);
			Local_207[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[1 /*12*/].f_7, 755.8477f, -808.6667f, 55.1409f, true, true, false, false, true);
			Local_207[2 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[2 /*12*/].f_7, 755.8839f, -808.4478f, 55.1865f, true, true, false, false, true);
			Local_207[3 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[3 /*12*/].f_7, 755.9459f, -808.5904f, 55.1771f, true, true, false, false, true);
			break;
		case 2:
			Local_207[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[0 /*12*/].f_7, 1274.142f, -801.5358f, 77.13f, true, true, false, false, true);
			Local_207[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[1 /*12*/].f_7, 1274.552f, -801.2413f, 77.12f, true, true, false, false, true);
			Local_207[2 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[2 /*12*/].f_7, 1274.16f, -801.2718f, 77.1f, true, true, false, false, true);
			Local_207[3 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[3 /*12*/].f_7, 1274.203f, -801.0536f, 77.079f, true, true, false, false, true);
			break;
		case 3:
			Local_207[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[0 /*12*/].f_7, 1117.407f, -729.6232f, 93.89681f, true, true, false, false, true);
			Local_207[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[1 /*12*/].f_7, 1117.059f, -729.4248f, 93.86526f, true, true, false, false, true);
			Local_207[2 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[2 /*12*/].f_7, 1117.356f, -729.8956f, 93.91526f, true, true, false, false, true);
			Local_207[3 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[3 /*12*/].f_7, 1117.051f, -729.9227f, 93.91526f, true, true, false, false, true);
			break;
		case 4:
			Local_207[0 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[0 /*12*/].f_7, 1311.016f, -239.6587f, 102.6084f, true, true, false, false, true);
			Local_207[1 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[1 /*12*/].f_7, 1310.805f, -239.8093f, 102.6109f, true, true, false, false, true);
			Local_207[2 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[2 /*12*/].f_7, 1310.939f, -239.7182f, 102.61f, true, true, false, false, true);
			Local_207[3 /*12*/].f_8 = OBJECT::CREATE_OBJECT(Local_207[3 /*12*/].f_7, 1310.657f, -239.9282f, 102.629f, true, true, false, false, true);
			break;
	}
	ENTITY::SET_ENTITY_HEADING(Local_207[0 /*12*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	ENTITY::SET_ENTITY_HEADING(Local_207[1 /*12*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	ENTITY::SET_ENTITY_HEADING(Local_207[2 /*12*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	ENTITY::SET_ENTITY_HEADING(Local_207[3 /*12*/].f_8, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
	ENTITY::FREEZE_ENTITY_POSITION(Local_207[0 /*12*/].f_8, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_207[1 /*12*/].f_8, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_207[2 /*12*/].f_8, true);
	ENTITY::FREEZE_ENTITY_POSITION(Local_207[3 /*12*/].f_8, true);
}

int func_30()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_207[iVar0 /*12*/].f_8, Global_35, 1, 1))
		{
			iLocal_504 = 2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_34(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_463[0]))
	{
		__LIB_2__::func_504(uLocal_463[0], iParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_463[1]))
	{
		__LIB_2__::func_504(uLocal_463[1], iParam1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_463[2]))
	{
		__LIB_2__::func_504(uLocal_463[2], iParam2);
	}
}

bool func_35()
{
	switch (iLocal_461)
	{
		case 0:
			if (func_114())
			{
				TASK::TASK_PLAY_ANIM(uLocal_463[1], "script_re@rifle_practice", "base_b_male02", 8f, -2f, -1, 1, 0f, false, 0, false, 0, false);
				func_115(1);
			}
			break;
		case 1:
			if (iLocal_625 == 0 || iLocal_625 == 3)
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_463[0], &uLocal_668);
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_463[2], &uLocal_668);
			}
			PED::SET_PED_RESET_FLAG(uLocal_463[0], 42, true);
			PED::SET_PED_RESET_FLAG(uLocal_463[1], 42, true);
			PED::SET_PED_RESET_FLAG(uLocal_463[2], 42, true);
			PED::_0xED1C764997A86D5A(uLocal_463[0], uLocal_463[3]);
			PED::_0xED1C764997A86D5A(uLocal_463[1], uLocal_463[4]);
			PED::_0xED1C764997A86D5A(uLocal_463[2], uLocal_463[5]);
			if (!func_71(1024))
			{
				func_116(1024);
			}
			if (func_71(512))
			{
				func_115(2);
			}
			if (func_117())
			{
				func_115(5);
			}
			break;
		case 2:
			func_118();
			if (func_71(4096))
			{
				func_119(&(Local_714[0 /*33*/]), 106);
				func_119(&(Local_714[1 /*33*/]), 106);
				func_119(&(Local_714[2 /*33*/]), 106);
				if ((Local_714[0 /*33*/] == 6 && Local_714[2 /*33*/] == 6) && Local_714[1 /*33*/] == 6)
				{
					if (func_120())
					{
						func_121(512);
						func_115(1);
					}
				}
			}
			else
			{
				func_122();
			}
			break;
		case 3:
			func_118();
			break;
		case 4:
			if (func_123(1))
			{
				Local_256.f_46 = 1;
				func_124();
				func_115(5);
			}
			break;
		case 5:
			if (func_71(1048576))
			{
				if ((!__LIB_11__::func_97(262144) && !Local_256.f_46) && (!__LIB_0__::func_75(&uLocal_708) || __LIB_1__::func_285(&uLocal_708, 10f)))
				{
					if (__LIB_4__::func_298(&uLocal_463, &(Local_256.f_5), &iLocal_504, &uLocal_506, 0, 2, 1))
					{
						func_129();
						__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("RIDE_OFF"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_115(4);
						__LIB_1__::func_283(&uLocal_696, 0);
						func_133(262144);
					}
				}
			}
			else if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_463[1]))
			{
				if (__LIB_4__::func_298(&uLocal_463, &(Local_256.f_5), &iLocal_504, &uLocal_506, 0, 2, 1))
				{
					__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("WARNING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_116(1048576);
					__LIB_1__::func_283(&uLocal_708, 0);
				}
			}
			if ((__LIB_3__::func_332(Local_256.f_51, 1) > 55f && !func_135(15f)) || !((__LIB_2__::func_1(uLocal_463[0], 0, 1) || __LIB_2__::func_1(uLocal_463[1], 0, 1)) || __LIB_2__::func_1(uLocal_463[2], 0, 1)))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_71(int iParam0)
{
	return __LIB_0__::func_27(iLocal_481, iParam0);
}

void func_76()
{
	Local_14[0 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
	Local_14[0 /*32*/].f_3 = -1033487374;
	Local_14[1 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
	Local_14[1 /*32*/].f_3 = -812165548;
	Local_14[1 /*32*/].f_6 = { 0.762183f, -0.62954f, -1.0582f };
	Local_14[1 /*32*/].f_9 = 24.19f;
	Local_14[2 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
	Local_14[2 /*32*/].f_3 = 347824283;
	if (iLocal_486 == 0)
	{
		StringCopy(&(Local_14[0 /*32*/].f_23), "0178_G_M_Y_UniExConfeds_01_WHITE_02", 64);
		StringCopy(&(Local_14[1 /*32*/].f_23), "0179_G_M_Y_UniExConfeds_01_WHITE_03", 64);
		StringCopy(&(Local_14[2 /*32*/].f_23), "0177_G_M_Y_UniExConfeds_01_WHITE_01", 64);
	}
	else
	{
		StringCopy(&(Local_14[0 /*32*/].f_23), "0176_G_M_O_UniExConfeds_01_WHITE_03", 64);
		StringCopy(&(Local_14[1 /*32*/].f_23), "1026_G_M_Y_UniExConfeds_01_WHITE_04", 64);
		StringCopy(&(Local_14[2 /*32*/].f_23), "0175_G_M_O_UniExConfeds_01_WHITE_02", 64);
	}
	Local_14[3 /*32*/].f_1 = __LIB_2__::func_185(2, 0, 1);
	Local_14[4 /*32*/].f_1 = __LIB_2__::func_185(2, 0, 1);
	Local_14[5 /*32*/].f_1 = __LIB_2__::func_185(2, 0, 1);
	__LIB_3__::func_303(&(Local_14[0 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_14[1 /*32*/].f_22));
	__LIB_3__::func_303(&(Local_14[2 /*32*/].f_22));
}

void func_77()
{
	__LIB_3__::func_284(&Local_14);
}

void func_78()
{
	Local_207[0 /*12*/].f_7 = joaat("P_BOTTLE008X");
	Local_207[0 /*12*/] = { 0f, 0f, 0f };
	Local_207[1 /*12*/].f_7 = joaat("P_BOTTLE006X");
	Local_207[1 /*12*/] = { 0f, 0f, 0f };
	Local_207[2 /*12*/].f_7 = joaat("P_BOTTLE008X");
	Local_207[2 /*12*/] = { 0f, 0f, 0f };
	Local_207[3 /*12*/].f_7 = joaat("P_BOTTLE008X");
	Local_207[3 /*12*/] = { 0f, 0f, 0f };
}

void func_79()
{
	__LIB_3__::func_314(&Local_207);
}

void func_80()
{
	__LIB_3__::func_318("script_re@rifle_practice", &uLocal_487);
	__LIB_3__::func_318("script_re@arms_deal", &uLocal_487);
}

int func_83(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	var uVar2;
	bool bVar3;
	bool bVar4;
	if (Param4.f_6 > -1)
	{
		*uParam1 = { __LIB_3__::func_153(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_174(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return 1;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_340(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { __LIB_3__::func_401(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return 0;
				}
				if (__LIB_0__::func_86(*uParam1))
				{
					return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = __LIB_3__::func_240(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (__LIB_0__::func_27(Param4.f_2, 8))
				{
					func_174(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return 1;
				}
				__LIB_3__::func_170(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (__LIB_3__::func_421(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && __LIB_3__::func_367(BUILTIN::VDIST(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (__LIB_3__::func_235(iParam0, 128))
			{
				if (!__LIB_3__::func_171(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return 0;
				}
			}
			else
			{
				__LIB_3__::func_341(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (BUILTIN::VDIST2(*uParam1, Global_36) < BUILTIN::TO_FLOAT(iVar0))
				{
					if (!__LIB_3__::func_170(uParam1))
					{
						return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (__LIB_3__::func_423(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_174(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return 1;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return __LIB_3__::func_260(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		__LIB_1__::func_422("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
			__LIB_1__::func_422("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return 0;
}

bool func_114()
{
	if (!func_71(1))
	{
		if ((__LIB_2__::func_1(uLocal_463[0], 0, 1) && __LIB_2__::func_1(uLocal_463[1], 0, 1)) && __LIB_2__::func_1(uLocal_463[2], 0, 1))
		{
			Local_453.f_4 = "script@beat@wilderness@riflePractice@action_02";
			Local_453 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_453.f_4, 64, func_265(0), false, true);
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_453, Local_256.f_51, 0f, 0f, __LIB_2__::func_709((Local_256.f_51.f_3 + 180f)), 2);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_453, "Ped_01", uLocal_463[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_453, "Ped_03", uLocal_463[2], 0);
			__LIB_3__::func_484(&(Local_256.f_5), uLocal_463[0], 1, 25f, 1109393408 /* Float: 40f */, 1084227584 /* Float: 5f */);
			__LIB_3__::func_484(&(Local_256.f_5), uLocal_463[1], 1, 40f, 120f, 60f);
			__LIB_3__::func_484(&(Local_256.f_5), uLocal_463[2], 1, 35f, 65f, 1084227584 /* Float: 5f */);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_453.f_4))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_453, true, false))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_453);
				}
			}
			func_116(1);
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_453))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_453, true, false) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_453, false))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_453, func_265(0)))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_453);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_453, func_265(1));
				return true;
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_453, func_265(0));
			}
		}
	}
	return false;
}

void func_115(int iParam0)
{
	iLocal_461 = iParam0;
}

void func_116(int iParam0)
{
	__LIB_1__::func_683(&iLocal_481, iParam0);
}

bool func_117()
{
	switch (iLocal_462)
	{
		case 0:
			func_268(1);
			if (__LIB_3__::func_647(&Local_256, &uLocal_711, 1f, 40f, 35f, 1500, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_453, func_265(1), true);
				func_270(1);
				__LIB_1__::func_283(&uLocal_702, 0);
			}
			break;
		case 1:
			func_271(1, 0, 1, "GO_FOR_IT");
			func_268(0);
			func_272();
			func_118();
			func_273();
			break;
		case 2:
			if (func_274())
			{
				return true;
			}
			break;
	}
	return false;
}

void func_118()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	switch (iLocal_625)
	{
		case 0:
			if (func_275(0))
			{
				__LIB_1__::func_148(&uLocal_696);
				func_34(100, 100, 100);
				Local_256.f_44 = 1;
				bLocal_640 = false;
				func_129();
				func_276(1);
			}
			break;
		case 1:
			PED::SET_PED_RESET_FLAG(uLocal_463[0], 290, true);
			PED::SET_PED_RESET_FLAG(uLocal_463[1], 290, true);
			PED::SET_PED_RESET_FLAG(uLocal_463[2], 290, true);
			if ((__LIB_1__::func_285(&uLocal_696, 1f) && !func_277(1)) || __LIB_0__::func_94(Global_35, Local_256.f_51, 0) < 14f)
			{
				__LIB_0__::func_37(&uLocal_696);
				__LIB_2__::func_526(&Local_571, 0, 0);
				if (__LIB_4__::func_44(2) == 3)
				{
					uLocal_470[0] = uLocal_463[1];
					uLocal_470[1] = uLocal_463[0];
					uLocal_470[2] = uLocal_463[2];
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_BRAVE", 2f, 0, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(uLocal_470[0], &iVar0, 0, 0, 1, 1);
				if (iLocal_486 == 0)
				{
					if (uLocal_470[0] == uLocal_463[0])
					{
						__LIB_2__::func_478(uLocal_463[0], Global_35, "WHO_GOES_THERE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (uLocal_470[0] == uLocal_463[1])
					{
						__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("SPOTTED_PLAYER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_463[2], Global_35, "VOCAL_FX_SURPRISED", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (uLocal_470[0] == uLocal_463[0])
				{
					__LIB_2__::func_478(uLocal_463[0], Global_35, "WHO_GOES_THERE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (uLocal_470[0] == uLocal_463[1])
				{
					__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("SPOTTED_PLAYER"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_463[2], Global_35, "GENERIC_CURSE_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_696);
				fLocal_634 = __LIB_0__::func_94(Global_35, Local_256.f_51, 0);
				fLocal_635 = fLocal_634;
				func_276(2);
			}
			Jump @4185; //curOff = 694
			_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_470[0], &uLocal_643);
			PED::SET_PED_RESET_FLAG(uLocal_463[0], 290, true);
			PED::SET_PED_RESET_FLAG(uLocal_463[1], 290, true);
			PED::SET_PED_RESET_FLAG(uLocal_463[2], 290, true);
			if (func_71(4))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_470[1], &uLocal_643);
			}
			if (func_71(16))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_470[2], &uLocal_643);
			}
			if ((__LIB_4__::func_44(2) == 3 && func_71(8)) && func_71(4))
			{
				func_276(5);
			}
			if (!func_71(8))
			{
				if (func_281(uLocal_470[0], 0.5f) && PED::IS_PED_FACING_PED(uLocal_470[0], Global_35, 25f))
				{
					func_282(1);
					PED::SET_PED_USING_ACTION_MODE(uLocal_463[1], true, -1, 0);
					func_283(uLocal_470[0]);
					if (iLocal_486 == 0)
					{
						if (uLocal_470[0] == uLocal_463[0])
						{
							__LIB_2__::func_478(uLocal_463[0], Global_35, "HEADS_UP_NEUTRAL", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (uLocal_470[0] == uLocal_463[1])
						{
							__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("WARNING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(uLocal_463[2], Global_35, "HEADS_UP_THREATEN", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (uLocal_470[0] == uLocal_463[0])
					{
						__LIB_2__::func_478(uLocal_463[0], Global_35, "HEADS_UP_NEUTRAL", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (uLocal_470[0] == uLocal_463[1])
					{
						__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("WARNING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_463[2], Global_35, "HEADS_UP_NEUTRAL", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_148(&uLocal_696);
					func_116(8);
				}
			}
			if (!func_71(16))
			{
				if (__LIB_0__::func_265(&uLocal_696) > 0.75f)
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_BRAVE", 1f, 3f, 4);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(uLocal_470[1], &iVar1, 0, 0, 1, 1);
					func_285();
					func_116(16);
				}
			}
			if (!func_71(4))
			{
				if (__LIB_0__::func_265(&uLocal_696) > 0.95f && PED::IS_PED_FACING_PED(uLocal_470[0], Global_35, 25f))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_BRAVE", 1f, 1f, 4);
					func_286(0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
					__LIB_1__::func_474(uLocal_470[2], &iVar2, 0, 0, 1, 1);
					__LIB_1__::func_148(&uLocal_696);
					func_116(4);
				}
			}
			else if (!func_71(32))
			{
				if (!func_71(65536) && __LIB_1__::func_285(&uLocal_696, 2.5f))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar3);
					if (uLocal_470[1] == uLocal_463[1])
					{
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_463[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					__LIB_1__::func_474(uLocal_470[1], &iVar3, 0, 0, 1, 1);
					func_116(65536);
				}
				if (func_281(uLocal_470[0], 3.5f) && !func_277(1))
				{
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (iLocal_486 == 0)
					{
						if (uLocal_470[0] == uLocal_463[0])
						{
							__LIB_2__::func_478(uLocal_463[0], Global_35, "FINAL_WARNING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (uLocal_470[0] == uLocal_463[1])
						{
							__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("FINAL_WARNING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							WEAPON::SET_CURRENT_PED_WEAPON(uLocal_463[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
							TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
						}
						else
						{
							__LIB_2__::func_478(uLocal_463[2], Global_35, "FINAL_WARNING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (uLocal_470[0] == uLocal_463[0])
					{
						__LIB_2__::func_478(uLocal_463[0], Global_35, "FINAL_WARNING", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (uLocal_470[0] == uLocal_463[1])
					{
						__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("FINAL_WARNING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						WEAPON::SET_CURRENT_PED_WEAPON(uLocal_463[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
						TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_463[2], Global_35, "FINAL_WARNING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					TASK::_0x12990818C1D35886(uLocal_470[0], 0, 1065353216 /* Float: 1f */);
					TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, __LIB_9__::func_776(uLocal_470[0], Global_35, 3f), Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
					TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 0, 0);
					__LIB_1__::func_474(uLocal_470[0], &iVar4, 0, 0, 1, 1);
					__LIB_1__::func_148(&uLocal_696);
					__LIB_2__::func_526(&Local_571, 1, 0);
					func_116(32);
				}
			}
			else if (func_281(uLocal_470[0], 5f) && !func_277(1))
			{
				if (iLocal_486 == 0)
				{
					if (uLocal_470[0] == uLocal_463[0])
					{
						__LIB_2__::func_478(uLocal_463[0], Global_35, "FIGHT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (uLocal_470[0] == uLocal_463[1])
					{
						__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("ATTACK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_463[2], Global_35, "FIGHT_RESPONSE", 0, -1082130432 /* Float: -1f */, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (uLocal_470[0] == uLocal_463[0])
				{
					__LIB_2__::func_478(uLocal_463[0], Global_35, "FIGHT_RESPONSE", 0, -1082130432 /* Float: -1f */, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (uLocal_470[0] == uLocal_463[1])
				{
					__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("ATTACK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_463[2], Global_35, "FIGHT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				Local_256.f_46 = 1;
				__LIB_1__::func_148(&uLocal_696);
				func_276(9);
			}
			if (func_275(0))
			{
				if (iLocal_486 == 0)
				{
					if (uLocal_470[0] == uLocal_463[0])
					{
						__LIB_2__::func_478(uLocal_463[0], Global_35, "WON_DISPUTE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (uLocal_470[0] == uLocal_463[1])
					{
						__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("PLAYER_LEAVING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_463[2], Global_35, "KEEP_GOING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (uLocal_470[0] == uLocal_463[0])
				{
					__LIB_2__::func_478(uLocal_463[0], Global_35, "KEEP_GOING", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (uLocal_470[0] == uLocal_463[1])
				{
					__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("PLAYER_LEAVING"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_463[2], Global_35, "KEEP_GOING", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_282(0);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_453, func_265(0));
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_453, func_265(iLocal_626));
				func_121(4);
				func_121(8);
				func_121(16);
				PED::SET_PED_USING_ACTION_MODE(uLocal_463[1], false, -1, 0);
				func_116(512);
				func_276(3);
			}
			Jump @4185; //curOff = 2886
			if (func_275(0))
			{
				func_129();
				TASK::OPEN_SEQUENCE_TASK(&iVar5);
				TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_BRAVE", 2f, 0, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(uLocal_470[0], &iVar5, 0, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar6);
				TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_BRAVE", 2f, 0, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(uLocal_470[1], &iVar6, 0.25f, 0.25f, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar7);
				TASK::TASK_REACT(0, Global_35, Global_36, "DEFAULT_BRAVE", 2f, 0, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
				__LIB_1__::func_474(uLocal_470[2], &iVar7, 0.4f, 0.4f, 1, 1);
				func_34(100, 100, 100);
				__LIB_1__::func_148(&uLocal_696);
				func_276(4);
			}
			Jump @4185; //curOff = 3135
			if (__LIB_2__::func_123(uLocal_463[1], Global_35, 0.707f) && __LIB_0__::func_265(&uLocal_696) > 2f)
			{
				if (iLocal_486 == 0)
				{
					if (uLocal_470[0] == uLocal_463[0])
					{
						__LIB_2__::func_478(uLocal_463[0], Global_35, "HEADS_UP_BAD_MEMORY", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (uLocal_470[0] == uLocal_463[1])
					{
						__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("WARNED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_478(uLocal_463[2], Global_35, "WARNED_ALREADY", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (uLocal_470[0] == uLocal_463[0])
				{
					__LIB_2__::func_478(uLocal_463[0], Global_35, "WARNED_ALREADY", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (uLocal_470[0] == uLocal_463[1])
				{
					__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("WARNED"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_463[2], Global_35, "FIGHT_RESPONSE", 0, -1082130432 /* Float: -1f */, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_696);
				func_276(9);
			}
			Jump @4185; //curOff = 3504
			_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_463[1], &uLocal_643);
			if (func_71(16))
			{
				_NAMESPACE29::_0x66F9EB44342BB4C5(uLocal_463[2], &uLocal_643);
			}
			if (!__LIB_11__::func_97(65536))
			{
				if ((__LIB_2__::func_123(uLocal_463[1], Global_35, 0.707f) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_463[1])) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_463[2]))
				{
					__LIB_1__::func_148(&uLocal_696);
					if (!__LIB_11__::func_97(32768))
					{
						__LIB_2__::func_478(uLocal_463[2], Global_35, func_130("RECOGNIZE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_133(32768);
					}
					else
					{
						func_133(65536);
						__LIB_2__::func_478(uLocal_463[2], Global_35, func_130("RECOGNIZE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_116(16);
					}
				}
			}
			else if (func_123(0))
			{
				Local_256.f_46 = 1;
				func_124();
				func_115(5);
			}
			Jump @4185; //curOff = 3761
			func_275(1);
			__LIB_1__::func_148(&uLocal_696);
			func_34(500, 500, 500);
			Local_256.f_44 = 1;
			bLocal_640 = false;
			func_129();
			func_276(1);
			Jump @4185; //curOff = 3809
			func_34(500, 500, 500);
			__LIB_1__::func_148(&uLocal_696);
			if (__LIB_0__::func_75(&uLocal_705))
			{
				__LIB_1__::func_148(&uLocal_705);
			}
			func_276(2);
			Jump @4185; //curOff = 3854
			if (__LIB_0__::func_265(&uLocal_696) > 1f && !AUDIO::IS_ANY_SPEECH_PLAYING(Global_35))
			{
				func_34(500, 500, 500);
				if (!func_71(32))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uLocal_463[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(uLocal_463[1], 1, 0, 0, 0);
				}
				if (uLocal_470[0] == uLocal_463[0])
				{
					__LIB_2__::func_478(uLocal_463[0], Global_35, "FIGHT", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (uLocal_470[0] == uLocal_463[1])
				{
					__LIB_2__::func_478(uLocal_463[1], Global_35, func_130("ATTACK"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_478(uLocal_463[2], Global_35, "FIGHT_RESPONSE", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				Local_256.f_46 = 1;
				__LIB_1__::func_148(&uLocal_696);
				func_276(9);
			}
			Jump @4185; //curOff = 4111
			if ((__LIB_1__::func_285(&uLocal_696, 0.5f) || !__LIB_0__::func_75(&uLocal_696)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_470[0]))
			{
				if (func_123(0))
				{
					Local_256.f_46 = 1;
					func_124();
					func_115(5);
				}
			}
			func_289();
		}
int func_119(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1) && !__LIB_0__::func_27(uParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 179, true);
	}
	switch (*uParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (PED::IS_PED_A_PLAYER(uParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, uParam0->f_3, false);
					if (__LIB_0__::func_27(uParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (uParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1);
				}
				if (!__LIB_0__::func_27(uParam0->f_23, 2))
				{
					uParam0->f_2 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2) && __LIB_0__::func_71(uParam0->f_1))
					{
						__LIB_3__::func_622(uParam0->f_1);
						iVar0 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(uParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(uParam0->f_1, uParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_1__::func_336(&(uParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(uParam0->f_14))
				{
					uParam0->f_14 = { uParam0->f_8 };
				}
				__LIB_0__::func_19(uParam0, 1, iParam1);
			}
			else
			{
				__LIB_0__::func_19(uParam0, 6, iParam1);
			}
			break;
		case 1:
			if (__LIB_3__::func_663(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_3__::func_670(uParam0, iParam1))
				{
					__LIB_3__::func_671();
				}
				__LIB_0__::func_19(uParam0, 2, iParam1);
			}
			break;
		case 2:
			if (__LIB_3__::func_670(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!__LIB_0__::func_27(uParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, __LIB_0__::func_27(uParam0->f_23, 512), 0, 0);
				}
				__LIB_0__::func_19(uParam0, 3, iParam1);
			}
			break;
		case 3:
			if (__LIB_3__::func_664(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (!PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
				}
				if (__LIB_0__::func_27(uParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(uParam0->f_1))
				{
					__LIB_1__::func_336(&(uParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(uParam0->f_1);
					if (__LIB_0__::func_665(iVar6, uParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(uParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_27(uParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(uParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(uParam0->f_1, iVar5, uParam0->f_14, uParam0->f_21, uParam0->f_4);
				}
				__LIB_0__::func_19(uParam0, 4, iParam1);
			}
			break;
		case 4:
			if (__LIB_3__::func_665(uParam0, iParam1))
			{
				__LIB_1__::func_148(&(uParam0->f_5));
				if (__LIB_0__::func_27(uParam0->f_23, 8192))
				{
					if (__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(uParam0->f_1, uParam0->f_25, &(uParam0->f_30), &(uParam0->f_26), uParam0->f_21, 0, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_27(uParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(uParam0->f_11))
					{
						if (__LIB_0__::func_27(uParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
						}
					}
					if (__LIB_0__::func_27(uParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_19, uParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_8, uParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(uParam0->f_23, 128), 20000, -1), uParam0->f_17, iVar8, uParam0->f_19);
					}
					if (__LIB_0__::func_27(uParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_19, 0);
					}
					__LIB_1__::func_474(uParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_0__::func_19(uParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(uParam0->f_25, &(uParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_27(uParam0->f_23, 1))
			{
				uParam0->f_19 = ENTITY::GET_ENTITY_HEADING(uParam0->f_1);
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 128) && __LIB_1__::func_313(&(uParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_27(uParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(uParam0->f_11) || !__LIB_0__::func_163(uParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(uParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(uParam0->f_1, uParam0->f_8, uParam0->f_19, uParam0->f_18, uParam0->f_20, __LIB_0__::func_27(uParam0->f_23, 8)) && (!__LIB_0__::func_27(uParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(uParam0->f_1, uParam0->f_8)) < uParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_27(uParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(uParam0->f_1, uParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(uParam0->f_5));
				__LIB_0__::func_19(uParam0, 6, iParam1);
				return 1;
			}
			break;
		case 6:
			return 1;
	}
	return 0;
}

bool func_120()
{
	if (func_71(2))
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_453))
		{
			if ((ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_453, true, false) && ANIMSCENE::_IS_ANIM_SCENE_METADATA_LOADED(Local_453, false)) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_453, func_265(iLocal_626)))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_453, "Ped_01", uLocal_463[0], 0);
				TASK::TASK_PLAY_ANIM(uLocal_463[1], "script_re@rifle_practice", "base_b_male02", 8f, -2f, -1, 1, 0f, false, 0, false, 0, false);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_453, "Ped_03", uLocal_463[2], 0);
				ANIMSCENE::START_ANIM_SCENE(Local_453);
				return true;
			}
		}
	}
	return false;
}

void func_121(int iParam0)
{
	__LIB_1__::func_681(&iLocal_481, iParam0);
}

void func_122()
{
	struct<4> Var0;
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_453, func_265(iLocal_626));
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_453, true, false) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_453, func_265(iLocal_626)))
	{
		ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_453, "Ped_01", &Var0, true, func_265(iLocal_626), 2);
		func_307(&(Local_714[0 /*33*/]), uLocal_463[0], Var0, Var0.f_3.f_2);
		ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_453, "Ped_02", &Var0, true, func_265(iLocal_626), 2);
		TASK::CLEAR_PED_TASKS(uLocal_463[1], true, false);
		func_307(&(Local_714[1 /*33*/]), uLocal_463[1], Var0, Var0.f_3.f_2);
		ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_453, "Ped_03", &Var0, true, func_265(iLocal_626), 2);
		func_307(&(Local_714[2 /*33*/]), uLocal_463[2], Var0, Var0.f_3.f_2);
		func_116(4096);
	}
}

bool func_123(bool bParam0)
{
	if (!func_71(64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_463[0]))
		{
			if (__LIB_1__::func_313(&uLocal_696, fLocal_636))
			{
				if (bParam0)
				{
					func_308(0, 134217728);
				}
				else
				{
					PED::_0x8B1E8E35A6E814EA(uLocal_463[0], joaat("COMBATSTARTNOTHREAT"), 2000f);
					func_308(0, 0);
				}
				__LIB_1__::func_148(&uLocal_696);
				func_116(64);
			}
		}
		else
		{
			func_116(64);
		}
	}
	if (!func_71(128))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_463[1]))
		{
			if (__LIB_1__::func_313(&uLocal_696, fLocal_637))
			{
				if (bParam0)
				{
					func_308(1, 16384);
				}
				else
				{
					PED::_0x8B1E8E35A6E814EA(uLocal_463[1], joaat("COMBATSTARTNOTHREAT"), 2000f);
					func_308(1, 0);
				}
				__LIB_1__::func_148(&uLocal_696);
				func_116(128);
			}
		}
		else
		{
			func_116(128);
		}
	}
	if (!func_71(256))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_463[2]))
		{
			if (__LIB_1__::func_313(&uLocal_696, fLocal_638))
			{
				if (bParam0)
				{
					if (__LIB_0__::func_665(uLocal_463[2], Global_35, 1, 1) > 55f)
					{
						func_308(2, 134217728);
					}
					else
					{
						PED::_0x8B1E8E35A6E814EA(uLocal_463[2], joaat("COMBATSTARTNOTHREAT"), 2000f);
						func_308(2, 16384);
					}
				}
				else
				{
					func_308(2, 0);
				}
				__LIB_1__::func_148(&uLocal_696);
				func_116(256);
			}
		}
		else
		{
			func_116(256);
		}
	}
	return func_309();
}

void func_124()
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_463[3], false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_463[4], false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_463[5], false);
}

void func_129()
{
	uLocal_470[0] = uLocal_463[0];
	uLocal_470[1] = uLocal_463[1];
	uLocal_470[2] = uLocal_463[2];
	if (__LIB_2__::func_118(uLocal_470[0], 1, 1) > __LIB_2__::func_118(uLocal_470[2], 1, 1))
	{
		func_313(0, 2);
	}
	if (__LIB_2__::func_118(uLocal_470[0], 1, 1) > __LIB_2__::func_118(uLocal_470[1], 1, 1))
	{
		func_313(0, 1);
	}
	if (__LIB_2__::func_118(uLocal_470[1], 1, 1) > __LIB_2__::func_118(uLocal_470[2], 1, 1))
	{
		func_313(1, 2);
	}
	fLocal_636 = func_314(0);
	fLocal_637 = func_314(1);
	fLocal_638 = func_314(2);
}

char* func_130(char* sParam0)
{
	return __LIB_3__::func_394("RP", "LWL", sParam0, iLocal_486 + 1);
}

void func_133(int iParam0)
{
	__LIB_1__::func_683(&iLocal_482, iParam0);
}

bool func_135(float fParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_118(uLocal_463[iVar0], 1, 1) < fParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_174(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (func_345(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_346(Global_35, &(uParam1->f_12)) };
				if (!__LIB_0__::func_86(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		__LIB_3__::func_261(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = __LIB_3__::func_292(iParam0);
		iVar0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, __LIB_0__::func_93());
		if (__LIB_0__::func_1(Global_1310750[iParam0 /*111*/], 33554432))
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 2, 0, -1082130432 /* Float: -1f */);
		}
		else
		{
			__LIB_2__::func_213(iVar0, __LIB_3__::func_185(iParam0), 1, 0, 8, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_1__::func_85(iParam0, 1))
		{
			__LIB_2__::func_119(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_293(iParam0);
}

char* func_265(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PBL_IDLE";
		case 1:
			return "PBL_SWITCH";
		case 2:
			return "PBL_ACTION_01";
		case 3:
			return "PBL_ACTION_02";
		case 4:
			return "PBL_ACTION_03";
		case 5:
			return "PBL_ACTION_04";
		case 6:
			return "PBL_ACTION_05";
		case 7:
			return "PBL_ACTION_06";
		case 8:
			return "PBL_ACTION_07";
		default:
			break;
	}
	return __LIB_3__::func_497(" - Invalid Index.", 0);
}

void func_268(bool bParam0)
{
	vector3 vVar0;
	if (__LIB_0__::func_94(Global_35, __LIB_3__::func_179(&Local_256), 1) < 120f)
	{
		if (__LIB_3__::func_496(uLocal_463[2], "FIRE_MISS", 1067030938 /* Float: 1.2f */))
		{
			PED::_0x4C57F27D1554E6B0(uLocal_463[2], vLocal_627, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
			if (bParam0)
			{
				if (!Local_256.f_182)
				{
					__LIB_3__::func_208(&Local_256, __LIB_3__::func_179(&Local_256), 1);
				}
				else
				{
					__LIB_2__::func_315(1066055203, uLocal_463[2], 1);
				}
			}
			iLocal_632++;
			if (iLocal_632 == 1)
			{
				iLocal_633 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), __LIB_3__::func_179(&Local_256), 0f, -1f, 85f, -1f, -1f, -1, -1);
			}
			else if (iLocal_632 == 5)
			{
				__LIB_2__::func_268(536870912, 1, 0, 1);
			}
		}
		if (__LIB_3__::func_496(uLocal_463[0], "FIRE_MISS", 1067030938 /* Float: 1.2f */))
		{
			vVar0 = { vLocal_627 };
			vVar0.x = (vVar0.x + 1f);
			PED::_0x4C57F27D1554E6B0(uLocal_463[0], vVar0, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_3__::func_496(uLocal_463[2], "FIRE_HIT", 1067030938 /* Float: 1.2f */))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_207[0 /*12*/].f_8, true, false) };
			vVar0.f_2 = (vVar0.z + 0.1f);
			PED::_0x4C57F27D1554E6B0(uLocal_463[2], vVar0, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
		}
		if (__LIB_3__::func_496(uLocal_463[0], "FIRE_HIT", 1067030938 /* Float: 1.2f */))
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_207[1 /*12*/].f_8, true, false) };
			vVar0.f_2 = (vVar0.z + 0.05f);
			PED::_0x4C57F27D1554E6B0(uLocal_463[0], vVar0, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
		}
	}
}

void func_270(int iParam0)
{
	iLocal_462 = iParam0;
}

bool func_271(int iParam0, int iParam1, int iParam2, char* sParam3)
{
	if ((!__LIB_11__::func_97(iParam2) && __LIB_3__::func_496(uLocal_463[0], func_464(sParam3), 1067030938 /* Float: 1.2f */)) && !bLocal_639)
	{
		func_34(100, 100, 100);
		if (iParam2 == 2 || iParam2 == 4)
		{
			__LIB_2__::func_478(uLocal_463[iParam0], uLocal_463[iParam1], __LIB_3__::func_394("RP", "LWL", "SHOOTING_A", iLocal_486 + 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_478(uLocal_463[iParam0], uLocal_463[iParam1], func_130(sParam3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_133(iParam2);
		return true;
	}
	return false;
}

void func_272()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_453) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_453, false))
	{
		if (iLocal_626 < 8)
		{
			if (ANIMSCENE::_0xA9016536015DE29D(Local_453, func_465(iLocal_626)) && !ANIMSCENE::_0x23E33CB9F4A3F547(Local_453, func_465(iLocal_626)))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_453, func_465(iLocal_626));
			}
		}
		if (__LIB_3__::func_496(uLocal_463[0], "PBL_END", 1067030938 /* Float: 1.2f */))
		{
			if (bLocal_640)
			{
				bLocal_640 = false;
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_453, func_265(0), false);
			}
			else
			{
				func_466(1);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_453, func_265(iLocal_626), false);
			}
		}
		if (__LIB_3__::func_496(uLocal_463[0], "EXIT_SCENE", 1067030938 /* Float: 1.2f */))
		{
			func_270(2);
			__LIB_3__::func_524(&iLocal_633);
		}
	}
}

void func_273()
{
	int iVar0;
	if (iLocal_625 == 0 || iLocal_625 == 3)
	{
		func_271(1, 0, 8, "TARGET_HIT");
		func_271(1, 0, 16, "TARGET_MISS");
		func_271(1, 0, 64, "ALRIGHT");
		func_271(1, 0, 256, "GODDAMIT");
		func_271(1, 2, 1024, "GO_AHEAD");
		if (func_271(1, 2, 16384, "LEAVE"))
		{
			iLocal_631 = PED::CREATE_GROUP(0);
			PED::SET_PED_AS_GROUP_LEADER(uLocal_463[1], iLocal_631, false);
			PED::SET_GROUP_FORMATION(iLocal_631, 10);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_MOUNT_ANIMAL(0, uLocal_463[4], 20000, -1, 1.5f, 1, 0, 0);
			__LIB_1__::func_474(uLocal_463[1], &iVar0, 0, 0, 1, 1);
			PED::SET_PED_KEEP_TASK(uLocal_463[2], true);
			Local_256.f_44 = 1;
		}
	}
}

bool func_274()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	if (!func_71(8192))
	{
		TASK::CLEAR_PED_TASKS(uLocal_463[3], true, false);
		TASK::CLEAR_PED_TASKS(uLocal_463[0], true, false);
		TASK::TASK_MOUNT_ANIMAL(uLocal_463[0], uLocal_463[3], 20000, -1, 1.5f, 1, 0, 0);
		PED::SET_PED_AS_GROUP_MEMBER(uLocal_463[0], iLocal_631);
		PED::SET_PED_CONFIG_FLAG(uLocal_463[0], 279, true);
		PED::SET_PED_KEEP_TASK(uLocal_463[0], true);
		func_116(8192);
	}
	if (!func_71(32768) && __LIB_3__::func_496(uLocal_463[2], "EXIT_SCENE", 1067030938 /* Float: 1.2f */))
	{
		TASK::CLEAR_PED_TASKS(uLocal_463[5], true, false);
		TASK::CLEAR_PED_TASKS(uLocal_463[2], true, false);
		TASK::TASK_MOUNT_ANIMAL(uLocal_463[2], uLocal_463[5], 20000, -1, 1.5f, 1, 0, 0);
		PED::SET_PED_AS_GROUP_MEMBER(uLocal_463[2], iLocal_631);
		PED::SET_PED_CONFIG_FLAG(uLocal_463[2], 279, true);
		PED::SET_PED_KEEP_TASK(uLocal_463[2], true);
		func_116(32768);
	}
	if ((func_71(32768) && PED::IS_PED_ON_MOUNT(uLocal_463[1])) && (PED::IS_PED_ON_MOUNT(uLocal_463[0]) || PED::IS_PED_ON_MOUNT(uLocal_463[2])))
	{
		TASK::CLEAR_PED_TASKS(uLocal_463[3], true, false);
		TASK::CLEAR_PED_TASKS(uLocal_463[4], true, false);
		TASK::CLEAR_PED_TASKS(uLocal_463[5], true, false);
		TASK::_TASK_MOVE_IN_TRAFFIC_2(uLocal_463[1], __LIB_2__::func_116(105, 1), 1073741824 /* Float: 2f */, 1.5f, 8192, 0);
		PED::SET_PED_KEEP_TASK(uLocal_463[1], true);
		func_116(16384);
	}
	if (!func_71(16384))
	{
		if (!func_71(131072) && PED::IS_PED_ON_MOUNT(uLocal_463[0]))
		{
			TASK::TASK_GO_TO_ENTITY(uLocal_463[3], uLocal_463[4], 20000, 0.5f, 0.101f, 2f, 0);
			func_116(131072);
		}
		if (!func_71(262144) && PED::IS_PED_ON_MOUNT(uLocal_463[1]))
		{
			vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(uLocal_463[4]) };
			vVar3 = { ENTITY::GET_ENTITY_COORDS(uLocal_463[4], true, false) + vVar0 * Vector(6f, 6f, 6f) };
			TASK::TASK_GO_STRAIGHT_TO_COORD(uLocal_463[4], vVar3, 0.101f, -1, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
			iVar6 = 0;
			while (iVar6 < 3)
			{
				PED::_0x24C82EF607105FAA(uLocal_463[iVar6], joaat("AGGRESSIVE"));
				__LIB_2__::func_603(&(uLocal_463[iVar6]), &(Local_507[iVar6 /*21*/]), &Local_571, 1, 1);
				iVar6++;
			}
			bLocal_624 = true;
			func_116(262144);
		}
		if (!func_71(524288) && PED::IS_PED_ON_MOUNT(uLocal_463[2]))
		{
			TASK::TASK_GO_TO_ENTITY(uLocal_463[5], uLocal_463[4], 20000, 0.5f, 0.101f, 2f, 0);
			func_116(524288);
		}
	}
	return ((func_71(8192) && func_71(16384)) && func_71(32768));
}

bool func_275(bool bParam0)
{
	if (!bLocal_639)
	{
		__LIB_3__::func_987(&(Local_256.f_5), __LIB_3__::func_179(&Local_256), 15f);
		if ((((__LIB_1__::func_285(&uLocal_699, 10f) || !__LIB_0__::func_75(&uLocal_699)) && (__LIB_4__::func_298(&uLocal_463, &(Local_256.f_5), &iLocal_504, &uLocal_506, 0, 2, 1) || __LIB_0__::func_94(Global_35, __LIB_3__::func_179(&Local_256), 1) < 10f)) || __LIB_3__::func_332(vLocal_627, 1) < 3f) || bParam0)
		{
			if (iLocal_504 != 0)
			{
			}
			bLocal_639 = true;
			func_116(1048576);
			return true;
		}
	}
	else if (__LIB_0__::func_94(Global_35, Local_256.f_51, 0) > (fLocal_634 + 4f) && __LIB_3__::func_332(vLocal_627, 1) > 5f)
	{
		__LIB_3__::func_484(&(Local_256.f_5), uLocal_463[0], 1, fLocal_634, 1109393408 /* Float: 40f */, 1084227584 /* Float: 5f */);
		__LIB_3__::func_484(&(Local_256.f_5), uLocal_463[1], 1, fLocal_634, 120f, 60f);
		__LIB_3__::func_484(&(Local_256.f_5), uLocal_463[2], 1, fLocal_634, 65f, 1084227584 /* Float: 5f */);
		__LIB_1__::func_148(&uLocal_699);
		__LIB_3__::func_237(&(Local_256.f_5), &iLocal_504);
		bLocal_639 = false;
		return true;
	}
	return false;
}

void func_276(int iParam0)
{
	iLocal_625 = iParam0;
}

bool func_277(int iParam0)
{
	float fVar0;
	if (__LIB_1__::func_285(&uLocal_693, 0.25f) || !__LIB_0__::func_75(&uLocal_693))
	{
		__LIB_1__::func_148(&uLocal_693);
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_256.f_51, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), true);
		if ((fLocal_635 + 0.1f) < fVar0)
		{
			fLocal_635 = fVar0;
			return true;
		}
		else
		{
			fLocal_635 = fVar0;
			return false;
		}
	}
	return iParam0;
}

bool func_281(int iParam0, float fParam1)
{
	if (!__LIB_0__::func_75(&uLocal_705))
	{
		if (__LIB_2__::func_227(0, 1, iParam0, 1))
		{
			__LIB_1__::func_283(&uLocal_705, 0);
		}
	}
	else if (__LIB_1__::func_313(&uLocal_705, fParam1))
	{
		return true;
	}
	return false;
}

void func_282(bool bParam0)
{
	if (bParam0)
	{
		__LIB_2__::func_360(&(Local_571[0 /*17*/]), __LIB_2__::func_460(8));
		Local_571[0 /*17*/].f_13 = func_8(2);
		bLocal_623 = false;
	}
	else
	{
		__LIB_2__::func_360(&(Local_571[0 /*17*/]), __LIB_2__::func_460(7));
		Local_571[0 /*17*/].f_13 = func_8(0);
		bLocal_623 = true;
		__LIB_2__::func_482(&(Local_571[0 /*17*/]), 1, 1);
	}
	__LIB_2__::func_526(&Local_571, 1, 0);
}

void func_283(int iParam0)
{
	if (iParam0 == uLocal_463[0])
	{
		TASK::TASK_PLAY_ANIM(uLocal_463[0], "script_re@arms_deal", "BREAKOUT_B_CON02", 4f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
	}
	else if (iParam0 == uLocal_463[1])
	{
		TASK::TASK_PLAY_ANIM(uLocal_463[1], "script_re@rifle_practice", "BREAKOUT_A_MALE02", 4f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
	}
	else
	{
		TASK::TASK_PLAY_ANIM(uLocal_463[2], "script_re@arms_deal", "BREAKOUT_B_CON02", 4f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
	}
}

void func_285()
{
	if (!func_71(2))
	{
		__LIB_3__::func_319(Local_453);
		if (iLocal_626 == 1)
		{
			func_466(1);
		}
		Local_453 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_453.f_4, 64, func_265(iLocal_626), false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_453, Local_256.f_51, 0f, 0f, __LIB_2__::func_709((Local_256.f_51.f_3 + 180f)), 2);
		ANIMSCENE::LOAD_ANIM_SCENE(Local_453);
		func_466(1);
		func_116(2);
	}
}

void func_286(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_470[0], -2f, 0f, 0f) };
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_470[0], 2f, 0f, 0f) };
	if (__LIB_0__::func_94(uLocal_470[1], vVar0, 1) > __LIB_0__::func_94(uLocal_470[1], vVar3, 1))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vVar0, 1f, 20000, 0.25f, 0, __LIB_3__::func_978(uLocal_470[2], Global_35, 1));
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, vVar3, 1f, 20000, 0.25f, 0, __LIB_3__::func_978(uLocal_470[2], Global_35, 1));
	}
}

void func_289()
{
	int iVar0;
	int iVar1;
	if (!bLocal_624)
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			iVar1 = func_480(&(uLocal_463[iVar0]), &(Local_507[iVar0 /*21*/]), 50f, &Local_571, &(Local_256.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_456(&(Local_507[iVar0 /*21*/])))
			{
				switch (iVar1)
				{
					case 0:
						if (bLocal_623)
						{
							func_276(6);
						}
						else
						{
							__LIB_2__::func_482(&(Local_571[0 /*17*/]), 1, 1);
							Local_571[1 /*17*/].f_13 = func_8(3);
							func_276(7);
						}
						break;
					case 1:
						__LIB_2__::func_592(&Local_571, 1, 1);
						func_276(8);
						break;
				}
				__LIB_1__::func_148(&uLocal_696);
			}
			iVar0++;
		}
	}
}

void func_307(var uParam0, var uParam1, vector3 vParam2, var uParam5)
{
	uParam0->f_1 = uParam1;
	uParam0->f_8 = { vParam2 };
	uParam0->f_19 = uParam5;
	uParam0->f_17 = 0.05f;
	uParam0->f_18 = 0.05f;
	uParam0->f_20 = 5f;
	uParam0->f_23 = 21;
}

void func_308(int iParam0, int iParam1)
{
	if (__LIB_2__::func_1(uLocal_463[iParam0], 0, 1))
	{
		PED::SET_PED_ACCURACY(uLocal_463[iParam0], 80);
		TASK::CLEAR_PED_TASKS(uLocal_463[iParam0], true, false);
		PED::_0x78815FC52832B690(uLocal_463[iParam0], 1);
		TASK::TASK_COMBAT_PED(uLocal_463[iParam0], Global_35, iParam1, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_463[iParam0], 347, false);
		__LIB_2__::func_698(uLocal_463[iParam0], 1114636288 /* Float: 60f */, 1084227584 /* Float: 5f */, 1123024896 /* Float: 120f */, -1028390912 /* Float: -90f */, 1119092736 /* Float: 90f */);
		__LIB_2__::func_73(uLocal_463[iParam0], &(uLocal_474[iParam0]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		__LIB_2__::func_603(&(uLocal_463[iParam0]), &(Local_507[iParam0 /*21*/]), &Local_571, 1, 1);
		PED::SET_PED_KEEP_TASK(uLocal_463[iParam0], true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_463[iParam0], false);
	}
}

bool func_309()
{
	return ((func_71(64) && func_71(128)) && func_71(256));
}

void func_313(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	uVar0 = uLocal_470[iParam0];
	uVar1 = uLocal_470[iParam1];
	uLocal_470[iParam0] = uVar1;
	uLocal_470[iParam1] = uVar0;
}

float func_314(int iParam0)
{
	if (uLocal_463[iParam0] == uLocal_470[0])
	{
		return 0.1f;
	}
	if (uLocal_463[iParam0] == uLocal_470[1])
	{
		return 0.15f;
	}
	if (uLocal_463[iParam0] == uLocal_470[2])
	{
		return 0.2f;
	}
	return 0f;
}

bool func_345(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { -1075.036f, -498.9537f, 80.4572f };
					*(uParam2[1 /*3*/]) = { -1058.055f, -609.5211f, 76.6181f };
					*(uParam2[2 /*3*/]) = { -1272.208f, -612.5573f, 100.8638f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { -2288.302f, -389.368f, 155.9838f };
					*(uParam2[1 /*3*/]) = { -2267.837f, -294.2087f, 162.0459f };
					*(uParam2[2 /*3*/]) = { -2588.6f, -283.9735f, 157.3797f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { -1751.366f, 174.5853f, 140.272f };
					*(uParam2[1 /*3*/]) = { -1639.375f, -163.5104f, 165.0787f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 3:
					*(uParam2[0 /*3*/]) = { -771.0659f, -259.0937f, 47.9193f };
					*(uParam2[1 /*3*/]) = { -822.0638f, -500.4154f, 43.2726f };
					*(uParam2[2 /*3*/]) = { -1024.218f, -401.8981f, 74.0529f };
					*(uParam2[3 /*3*/]) = { -1006.993f, -282.9351f, 74.6298f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 4:
					*(uParam2[0 /*3*/]) = { -1338.573f, 327.9119f, 84.6143f };
					*(uParam2[1 /*3*/]) = { -1232.65f, 330.8496f, 62.4046f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 5:
					*(uParam2[0 /*3*/]) = { -1502.984f, -885.5237f, 88.3171f };
					*(uParam2[1 /*3*/]) = { -1297.384f, -819.8127f, 66.0834f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 350.4579f, 1090.999f, 185.1566f };
					*(uParam2[1 /*3*/]) = { 92.55f, 1093.111f, 180.0293f };
					*(uParam2[2 /*3*/]) = { 409.0284f, 1196.024f, 176.0849f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { 749.1558f, 1391.218f, 169.0392f };
					*(uParam2[1 /*3*/]) = { 655.3339f, 1501.052f, 182.3537f };
					*(uParam2[2 /*3*/]) = { 564.7472f, 1351.075f, 181.0084f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 798.8331f, 1217.176f, 139.389f };
					*(uParam2[1 /*3*/]) = { 796.767f, 1022.301f, 117.9023f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1499.724f, 1483.517f, 148.1553f };
					*(uParam2[1 /*3*/]) = { 1762.153f, 1460.505f, 154.3694f };
					*(uParam2[2 /*3*/]) = { 1791.473f, 1553.145f, 158.3201f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1592.016f, 838.9788f, 137.0506f };
					*(uParam2[1 /*3*/]) = { 1481.788f, 983.7827f, 159.4282f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 11:
					*(uParam2[0 /*3*/]) = { 2066.821f, 1396.182f, 161.616f };
					*(uParam2[1 /*3*/]) = { 2018.585f, 1589.685f, 166.3078f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 1931.246f, 1417.71f, 175.205f };
					*(uParam2[1 /*3*/]) = { 1758.616f, 1470.966f, 153.1616f };
					*(uParam2[2 /*3*/]) = { 1908.101f, 1340.718f, 184.5229f };
					*(uParam2[3 /*3*/]) = { 1758.631f, 1339.565f, 179.8116f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 906.3064f, 1862.921f, 276.5091f };
					*(uParam2[1 /*3*/]) = { 1227.372f, 1910.686f, 303.6052f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 39.5976f, -446.5889f, 73.5138f };
					*(uParam2[1 /*3*/]) = { 261.8906f, -501.4701f, 69.7941f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 15:
					*(uParam2[0 /*3*/]) = { 147.7795f, 574.2345f, 124.4514f };
					*(uParam2[1 /*3*/]) = { 353.6481f, 791.2978f, 158.3952f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 16:
					*(uParam2[0 /*3*/]) = { 1152.273f, 1.4974f, 91.3795f };
					*(uParam2[1 /*3*/]) = { 1229.58f, -41.3491f, 97.8027f };
					*(uParam2[2 /*3*/]) = { 1388.351f, 191.7681f, 91.0511f };
					*(uParam2[3 /*3*/]) = { 1182.174f, 249.1711f, 95.8012f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 17:
					*(uParam2[0 /*3*/]) = { 2436.349f, 1255.752f, 108.7815f };
					*(uParam2[1 /*3*/]) = { 2581.654f, 1319.187f, 109.4025f };
					*(uParam2[2 /*3*/]) = { 2648.991f, 1389.994f, 86.802f };
					*(uParam2[3 /*3*/]) = { 2499.877f, 1520.766f, 84.1962f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 18:
					*(uParam2[0 /*3*/]) = { 2886.699f, 650.0214f, 56.9408f };
					*(uParam2[1 /*3*/]) = { 2841.172f, 901.8114f, 48.3778f };
					*(uParam2[2 /*3*/]) = { 2789.388f, 789.1998f, 69.4871f };
					*(uParam2[3 /*3*/]) = { 2838.36f, 650.3098f, 66.5798f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 19:
					*(uParam2[0 /*3*/]) = { 1966.349f, 55.0459f, 77.6335f };
					*(uParam2[1 /*3*/]) = { 1997.614f, 290.7841f, 80.4139f };
					*(uParam2[2 /*3*/]) = { 2073.044f, 228.7493f, 69.5644f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 20:
					*(uParam2[0 /*3*/]) = { 2515.785f, 798.911f, 69.7688f };
					*(uParam2[1 /*3*/]) = { 2506.887f, 618.8073f, 68.6403f };
					*(uParam2[2 /*3*/]) = { 2377.615f, 751.5095f, 66.3114f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 21:
					*(uParam2[0 /*3*/]) = { 2128.213f, 1721.563f, 130.3847f };
					*(uParam2[1 /*3*/]) = { 2264.183f, 1720.874f, 103.2933f };
					*(uParam2[2 /*3*/]) = { 2134.791f, 1568.948f, 115.1957f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 22:
					*(uParam2[0 /*3*/]) = { 2826.741f, 2204.882f, 155.551f };
					*(uParam2[1 /*3*/]) = { 2838.074f, 1999.792f, 161.9055f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(uParam2[0 /*3*/]) = { 350.8081f, 1195.732f, 176.1334f };
					*(uParam2[1 /*3*/]) = { -9.8736f, 1100.082f, 171.5504f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 6:
					*(uParam2[0 /*3*/]) = { 951.1178f, 411.6494f, 111.4674f };
					*(uParam2[1 /*3*/]) = { 786.1444f, 1078.456f, 125.8602f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 7:
					*(uParam2[0 /*3*/]) = { -784.4099f, 128.655f, 42.3724f };
					*(uParam2[1 /*3*/]) = { -478.0183f, 232.7834f, 42.1853f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 8:
					*(uParam2[0 /*3*/]) = { 1148.99f, 1456.264f, 190.799f };
					*(uParam2[1 /*3*/]) = { 840.1897f, 1221.47f, 141.6344f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 9:
					*(uParam2[0 /*3*/]) = { 1413.901f, -334.469f, 88.1597f };
					*(uParam2[1 /*3*/]) = { 1222.652f, -59.931f, 93.5015f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 10:
					*(uParam2[0 /*3*/]) = { 1548.822f, -1190.659f, 49.1131f };
					*(uParam2[1 /*3*/]) = { 1547.513f, -1410.952f, 60.6415f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(uParam2[0 /*3*/]) = { 2466.914f, -732.939f, 42.531f };
					*(uParam2[1 /*3*/]) = { 2303.902f, -750.908f, 41.569f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 1:
					*(uParam2[0 /*3*/]) = { 1757.029f, -832.27f, 41.718f };
					*(uParam2[1 /*3*/]) = { 1882.646f, -955.777f, 42.672f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 2:
					*(uParam2[0 /*3*/]) = { 2117.433f, -847.803f, 41.749f };
					*(uParam2[1 /*3*/]) = { 2112.33f, -625.643f, 41.772f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 12:
					*(uParam2[0 /*3*/]) = { 2552.283f, -208.465f, 43.013f };
					*(uParam2[1 /*3*/]) = { 2725.735f, 32.896f, 51.048f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 13:
					*(uParam2[0 /*3*/]) = { 2219.83f, -503.6095f, 41.0142f };
					*(uParam2[1 /*3*/]) = { 2371.775f, -527.7825f, 40.7584f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 14:
					*(uParam2[0 /*3*/]) = { 2157.784f, -459.4536f, 40.5431f };
					*(uParam2[1 /*3*/]) = { 2354.891f, -401.4336f, 40.5042f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 26:
					*(uParam2[0 /*3*/]) = { 3266.224f, 1664.717f, 60.269f };
					*(uParam2[1 /*3*/]) = { 3221.388f, 1809.026f, 74.813f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @4980; //curOff = 4533
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @4980; //curOff = 4644
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @4980; //curOff = 4755
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @4980; //curOff = 4866
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @7743; //curOff = 4980
					switch (iParam1)
					{
						case 5:
							*(uParam2[0 /*3*/]) = { 2724.549f, -7.066f, 51.083f };
							*(uParam2[1 /*3*/]) = { 2542.005f, -233.1396f, 41.4732f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 6:
							*(uParam2[0 /*3*/]) = { 2300.604f, -441.226f, 41.797f };
							*(uParam2[1 /*3*/]) = { 2569.006f, -361.3357f, 40.5728f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 7:
							*(uParam2[0 /*3*/]) = { 762.142f, 1455.038f, 160.172f };
							*(uParam2[1 /*3*/]) = { 581.92f, 1359.699f, 182.007f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 8:
							*(uParam2[0 /*3*/]) = { 1561.312f, 1602.54f, 188.8227f };
							*(uParam2[1 /*3*/]) = { 1315.677f, 1471.669f, 160.1485f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7743; //curOff = 5459
					switch (iParam1)
					{
						case 0:
							*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.8591f };
							*(uParam2[1 /*3*/]) = { -1627.641f, 266.7185f, 105.116f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 1:
							*(uParam2[0 /*3*/]) = { -1366.784f, 150.125f, 77.859f };
							*(uParam2[1 /*3*/]) = { -1627.641f, 266.719f, 105.116f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 3:
							*(uParam2[0 /*3*/]) = { -1090.74f, 151.3781f, 58.3089f };
							*(uParam2[1 /*3*/]) = { -823.9262f, 278.8717f, 92.3226f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 6:
							*(uParam2[0 /*3*/]) = { 1714.427f, -1933.318f, 45.6594f };
							*(uParam2[1 /*3*/]) = { 1714.571f, -1856.846f, 48.5272f };
							*(uParam2[2 /*3*/]) = { 1531.954f, -1706.023f, 57.3286f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					Jump @7743; //curOff = 5950
					switch (iParam1)
					{
						case 6:
							*(uParam2[0 /*3*/]) = { -1736.774f, -836.8357f, 96.5171f };
							*(uParam2[1 /*3*/]) = { -1915.833f, -682.8271f, 116.4542f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 7:
							*(uParam2[0 /*3*/]) = { -755.4001f, -796.7909f, 49.7304f };
							*(uParam2[1 /*3*/]) = { -1039.648f, -688.1265f, 69.6641f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 15:
							*(uParam2[0 /*3*/]) = { 902.8263f, 386.1294f, 115.5771f };
							*(uParam2[1 /*3*/]) = { 615.3056f, 258.5487f, 103.5037f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 16:
							*(uParam2[0 /*3*/]) = { 874.3443f, 827.1644f, 114.901f };
							*(uParam2[1 /*3*/]) = { 859.3398f, 590.4376f, 110.1404f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 17:
							*(uParam2[0 /*3*/]) = { -769.1578f, 299.2588f, 93.7465f };
							*(uParam2[1 /*3*/]) = { -588.5746f, 443.7545f, 97.2538f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 18:
							*(uParam2[0 /*3*/]) = { 442.6022f, -274.5149f, 141.8569f };
							*(uParam2[1 /*3*/]) = { 252.7831f, -219.3386f, 129.8086f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 19:
							*(uParam2[0 /*3*/]) = { 82.4531f, 27.6559f, 99.5123f };
							*(uParam2[1 /*3*/]) = { 441.6833f, 325.2197f, 102.5464f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 24:
							*(uParam2[0 /*3*/]) = { 2682.666f, 254.0104f, 62.8591f };
							*(uParam2[1 /*3*/]) = { 2726.419f, 15.7709f, 48.8237f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 25:
							*(uParam2[0 /*3*/]) = { 2166.428f, 1654.068f, 114.0645f };
							*(uParam2[1 /*3*/]) = { 2375.665f, 1665.218f, 95.4254f };
							*(uParam2[2 /*3*/]) = { 2402.211f, 1816.359f, 106.9185f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 28:
							*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
							*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 29:
							*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
							*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 30:
							*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
							*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
							*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 31:
							*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
							*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 32:
							*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
							*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
						case 33:
							*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
							*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
							*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
							*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
							return true;
					}
					return false;
				}
Vector3 func_346(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	iVar1 = -1;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!__LIB_0__::func_86(*(uParam1[iVar0 /*3*/])))
			{
				if (iVar1 < 0 || BUILTIN::VDIST2(vVar2, *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(vVar2, *(uParam1[iVar1 /*3*/])))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(uParam1[iVar1 /*3*/]);
		}
	}
	return 0f, 0f, 0f;
}

var func_464(char* sParam0)
{
	char cVar0[64];
	StringCopy(&cVar0, "DLG_", 64);
	StringConCat(&cVar0, sParam0, 64);
	return __LIB_1__::func_569(cVar0);
}

char* func_465(int iParam0)
{
	iParam0++;
	if (iParam0 < 9)
	{
		return func_265(iParam0);
	}
	return __LIB_3__::func_497("[REHOC]", "REHOC_HERB_SCENE_PBL_NAME - Invalid Index.");
}

void func_466(int iParam0)
{
	iLocal_626 = (iLocal_626 + iParam0);
}

int func_480(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_575(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

int func_575(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_575(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

