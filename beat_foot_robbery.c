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
	struct<193> Local_14 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_207 = 0;
	struct<32> Local_208[3];
	struct<2> Local_305[8];
	struct<6> Local_322 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	struct<9> Local_330[3];
	struct<13> Local_358[2];
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	struct<21> Local_407[3];
	struct<17> Local_471[3];
	int iLocal_523 = 0;
	vector3 vLocal_524 = { 0f, 0f, 0f };
	float fLocal_527 = 0f;
	int iLocal_528[3] = { 0, 0, 0 };
	var uLocal_532[3] = { 0, 0, 0 };
	var uLocal_536[3] = { 0, 0, 0 };
	int iLocal_540[1] = { 0 };
	int iLocal_542[1] = { 0 };
	int iLocal_544[1] = { 0 };
	bool bLocal_546[1] = { false };
	bool bLocal_548[1] = { false };
	bool bLocal_550 = false;
	bool bLocal_551 = false;
	bool bLocal_552 = false;
	struct<22> Local_553 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_575 = 3;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	var uLocal_580[3] = { 0, 0, 0 };
	int iLocal_584[3] = { 0, 0, 0 };
	int iLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	float fLocal_593 = 0f;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
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
	vector3 vLocal_612[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	vector3 vLocal_640 = { 0f, 0f, 0f };
	vector3 vLocal_643 = { 0f, 0f, 0f };
	int iLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	bool bLocal_649 = false;
	vector3 vLocal_650 = { 0f, 0f, 0f };
	bool bLocal_653 = false;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 1065353216;
	var uLocal_665 = 1065353216;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 1065353216;
	var uLocal_670 = 1065353216;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 1065353216;
	var uLocal_675 = 1065353216;
	var uLocal_676 = 0;
	var uLocal_677 = 1040187392;
	var uLocal_678 = 1040187392;
	var uLocal_679 = -1;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = -1082130432;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	bool bLocal_703 = false;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	bool bLocal_709 = false;
	int iLocal_710 = 0;
	bool bLocal_711 = false;
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	int iLocal_714 = 0;
	int iLocal_715 = 0;
	int iLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	int iLocal_729[3] = { 0, 0, 0 };
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	float fLocal_739 = 0f;
	bool bLocal_740 = false;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743[3] = { 0, 0, 0 };
	bool bLocal_747 = false;
	int iLocal_748 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_593 = 1E+08f;
	iLocal_700 = joaat("P_LANTERN04XLOWFUEL");
	fLocal_739 = -1f;
	Local_14.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_14.f_43 = __LIB_0__::func_12();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_740 = true;
	}
	if (!bLocal_740)
	{
		Local_14.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		__LIB_3__::func_368(&Local_14, 1);
		func_5();
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_740, 884, 0);
		if (bLocal_740)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_713)
			{
				case 0:
					if (func_8())
					{
						PED::_0x9851DE7AEC10B4E1(Local_14.f_51, 5f, 1, 0);
						iLocal_713 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_14, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						__LIB_0__::func_568(Local_14.f_51, 5f, 0);
						func_11(&Local_14, &iLocal_738, &iLocal_737);
						if (!Local_14.f_161)
						{
							if (func_12())
							{
								func_6();
							}
						}
						else if (func_13())
						{
							iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(22, 24);
							iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
							if (__LIB_1__::func_985())
							{
								iVar2 = iVar0;
							}
							else
							{
								iVar2 = iVar1;
							}
							CLOCK::SET_CLOCK_TIME(iVar2, MISC::GET_RANDOM_INT_IN_RANGE(0, 60), MISC::GET_RANDOM_INT_IN_RANGE(0, 60));
						}
						func_15();
						iLocal_713 = 3;
					}
					else if (Local_14.f_160)
					{
						func_6();
					}
					break;
				case 3:
					if (func_16())
					{
						func_17(0f);
						func_18(1);
						func_19();
						iLocal_698 = PLAYER::PLAYER_ID();
						iLocal_713 = 4;
					}
					break;
				case 4:
					if (!func_20(&Local_14, &iLocal_528, 0, 1, 1, 0, 1, 0))
					{
						func_6();
					}
					if (!Local_14.f_46)
					{
						if (func_21())
						{
							__LIB_4__::func_200(&Local_358);
							func_18(0);
							__LIB_4__::func_322();
							Local_14.f_46 = 1;
							if (iLocal_523 != 1)
							{
								func_24();
							}
							else if (func_25())
							{
								func_26(Local_322, "PBL_BREAKOUT", 1);
								func_27(1);
								func_28(&iLocal_579, 65536, 0);
								func_28(&iLocal_579, 4, 0);
							}
							else
							{
								func_28(&iLocal_579, 4, 0);
							}
							func_29();
						}
					}
					if (func_30())
					{
						Local_14.f_50 = 1;
						__LIB_4__::func_322();
						func_6();
					}
					if (__LIB_3__::func_365(&Local_14, &iLocal_528, Local_14.f_46, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_14.f_50 = 1;
						func_6();
					}
					break;
			}
			BUILTIN::WAIT(Local_14.f_158);
		}
	}
}

void func_5()
{
	int iVar0;
	func_34();
	__LIB_2__::func_432(&(Local_14.f_5));
	__LIB_2__::func_433(&(Local_14.f_5));
	__LIB_2__::func_51(&(Local_14.f_5), 1);
	__LIB_2__::func_50(&(Local_14.f_5), 1);
	__LIB_2__::func_180(&(Local_14.f_5), 0);
	__LIB_2__::func_634(&(Local_14.f_5), 1);
	__LIB_2__::func_52(&(Local_14.f_5), 1);
	__LIB_2__::func_111(&(Local_14.f_5), 1);
	__LIB_2__::func_105(&(Local_14.f_5), 1);
	__LIB_2__::func_104(&(Local_14.f_5), 1);
	__LIB_2__::func_613(&(Local_14.f_5), 1);
	__LIB_2__::func_110(&(Local_14.f_5), 0);
	__LIB_2__::func_595(&(Local_14.f_5), 10f);
	__LIB_1__::func_981(&(Local_14.f_5), 10f);
	__LIB_3__::func_407(&(Local_14.f_5), 10f);
	__LIB_2__::func_179(&(Local_14.f_5), 0);
	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 20 || iVar0 < 5)
	{
		if (!__LIB_13__::func_666(iLocal_579, 536870912))
		{
			func_28(&iLocal_579, 536870912, 0);
		}
	}
}

void func_6()
{
	int iVar0;
	int iVar1;
	__LIB_3__::func_474(&uLocal_704);
	iVar0 = PLAYER::PLAYER_ID();
	if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
	{
		__LIB_0__::func_325(&(uLocal_536[2]));
	}
	if (func_53(2, 8))
	{
		if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
		{
			__LIB_3__::func_459(iLocal_528[2], 0);
		}
	}
	func_56();
	func_18(0);
	func_57();
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (iVar1 != 2)
		{
			if (__LIB_2__::func_1(iLocal_528[iVar1], 0, 0))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_528[iVar1], joaat("REL_PLAYER_DISLIKE"));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_528[iVar1]))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar1], 243, false);
			PED::SET_PED_KEEP_TASK(iLocal_528[iVar1], true);
			if (__LIB_2__::func_1(iLocal_528[iVar1], 0, 0))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar1], 301, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar1], 130, false);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_528[iVar1]));
		}
		PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_528[iVar1], true);
		iVar1++;
	}
	func_58();
	PED::SET_PED_KEEP_TASK(iLocal_528[0], true);
	PED::SET_PED_KEEP_TASK(iLocal_528[1], true);
	if (iLocal_712 < 3)
	{
		Local_14.f_45 = 0;
	}
	__LIB_3__::func_823(&Local_14, &iLocal_528, &uLocal_536, 0, iLocal_738, iLocal_737, 1, 1, 1, 1);
	__LIB_4__::func_318(&iLocal_528);
	__LIB_3__::func_319(Local_322);
	func_62(1);
	__LIB_4__::func_200(&Local_358);
	PLAYER::_0x3A8611BD7BDE84F7(iVar0, -1f);
	PLAYER::_0xC6366A585659D15C(iVar0, 0);
	PLAYER::_0x98CD760DE43B612E(iVar0, 0);
	PLAYER::_0x628E742FE1F79C4A(iVar0, 0);
	func_57();
	__LIB_1__::func_979(1024);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8()
{
	switch (iLocal_715)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_14))
			{
				func_66(&bLocal_653);
				func_67();
				func_68();
				iLocal_715 = 1;
			}
			break;
		case 1:
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_322, true, false))
			{
				return false;
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_322.f_5))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_322.f_1, true, false))
				{
					return false;
				}
			}
			if (iLocal_523 == 1)
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_MAIN");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_BREAKOUT");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_QUICKEXIT");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_PUNCH");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_PUNCH2");
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_ACTION");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_BRKOUT_GROUND");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_BRKOUT_WALL");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_QUICK");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322.f_1, "PBL_ACTION");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322.f_1, "PBL_BRKOUT_GROUND");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322.f_1, "PBL_BRKOUT_WALL");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322.f_1, "PBL_QUICK");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_WALL_BREAKOUT_LEFT");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_WALL_BREAKOUT_RIGHT");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_WALL_BREAKOUT_BACK");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_GROUND_BREAKOUT_LEFT");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_GROUND_BREAKOUT_RIGHT");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_322, "PBL_GROUND_BREAKOUT_BACK");
			}
			iLocal_715 = 2;
			break;
		case 2:
			if (!func_69())
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_208))
			{
				return false;
			}
			if (iLocal_523 == 1)
			{
				if ((((!ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_MAIN") || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_BREAKOUT")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_QUICKEXIT")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_PUNCH")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_PUNCH2"))
				{
					return false;
				}
			}
			else if (((((((((((((!ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_ACTION") || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_BRKOUT_GROUND")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_BRKOUT_WALL")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_QUICK")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322.f_1, "PBL_ACTION")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322.f_1, "PBL_BRKOUT_GROUND")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322.f_1, "PBL_BRKOUT_WALL")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322.f_1, "PBL_QUICK")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_WALL_BREAKOUT_LEFT")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_WALL_BREAKOUT_RIGHT")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_WALL_BREAKOUT_BACK")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_GROUND_BREAKOUT_LEFT")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_GROUND_BREAKOUT_RIGHT")) || !ANIMSCENE::_0x23E33CB9F4A3F547(Local_322, "PBL_GROUND_BREAKOUT_BACK"))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_11(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 9;
			*iParam2 = 0;
			break;
		case 1:
			*iParam1 = 9;
			*iParam2 = 1;
			break;
		case 2:
			*iParam1 = 11;
			*iParam2 = 0;
			break;
	}
}

bool func_12()
{
	if (Local_14.f_3 == 92)
	{
		if (__LIB_13__::func_666(iLocal_579, 4194304))
		{
			return true;
		}
		if (!__LIB_2__::func_117(128))
		{
			if (func_13())
			{
				return true;
			}
		}
	}
	return false;
}

bool func_13()
{
	switch (iLocal_738)
	{
		case 9:
			switch (iLocal_737)
			{
				case 0:
					break;
			}
			break;
		case 11:
			switch (iLocal_737)
			{
				case 0:
					break;
				case 2:
					break;
			}
			break;
	}
	return false;
}

void func_15()
{
	int iVar0;
	int iVar1;
	func_11(&Local_14, &iVar1, &iVar0);
	if (iVar1 == 11)
	{
		iLocal_646 = 2;
	}
	else if (iVar1 == 9)
	{
		iLocal_646 = 0;
	}
	switch (iVar1)
	{
		case 9:
			switch (iVar0)
			{
				case 0:
					Local_208[1 /*32*/].f_9 = 322.0161f;
					vLocal_524 = { -295.439f, 734.9f, 116.6f };
					fLocal_527 = 100f;
					Local_208[0 /*32*/].f_15 = { -305.3418f, 741.3826f, 117.1479f };
					Local_208[0 /*32*/].f_18 = 305.2172f;
					Local_208[1 /*32*/].f_15 = { -303.5301f, 739.9963f, 117.9182f };
					Local_208[1 /*32*/].f_18 = 312.2172f;
					Local_330[0 /*9*/] = { -299.6043f, 738.5725f, 116.726f };
					Local_330[0 /*9*/].f_3 = 4f;
					Local_330[1 /*9*/] = { -290.2604f, 736.2405f, 117.1729f };
					Local_330[1 /*9*/].f_3 = 2.55f;
					Local_208[2 /*32*/].f_15 = { -267.4409f, 669.7515f, 113.4242f };
					Local_208[2 /*32*/].f_18 = 150.1192f;
					break;
				case 1:
					Local_208[1 /*32*/].f_9 = 130f;
					Local_330[0 /*9*/] = { -386.3f, 822.5f, 115.7f };
					Local_330[0 /*9*/].f_3 = 3f;
					Local_330[1 /*9*/] = { -346.7f, 844.5f, 117f };
					Local_330[1 /*9*/].f_3 = 5.5f;
					vLocal_524 = { -363.15f, 832.26f, 115.8f };
					fLocal_527 = 200.5f;
					Local_208[1 /*32*/].f_15 = { -371.2f, 830.8f, 116.4f };
					Local_208[1 /*32*/].f_18 = -142.84f;
					Local_208[0 /*32*/].f_15 = { -373f, 829.99f, 116.4f };
					Local_208[0 /*32*/].f_18 = -148.82f;
					Local_208[2 /*32*/].f_15 = { -267.4409f, 669.7515f, 113.4242f };
					Local_208[2 /*32*/].f_18 = 150.1192f;
					break;
			}
			break;
		case 11:
			switch (iVar0)
			{
				case 0:
					Local_208[1 /*32*/].f_9 = 85f;
					Local_330[0 /*9*/] = { 1338.974f, -1364.828f, 78.43774f };
					Local_330[1 /*9*/] = { 1332.042f, -1363.909f, 78.46366f };
					Local_330[0 /*9*/].f_3 = 3.15f;
					Local_330[1 /*9*/].f_3 = 3.1f;
					vLocal_524 = { 1330.771f, -1367.377f, 79.444f };
					fLocal_527 = -95.15f;
					iLocal_542[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1333.232f, -1372.411f, 79.96022f, 0f, 0f, -8.999998f, 21.479f, 9.926933f, 7.257f, "volNonClose0");
					iLocal_540[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1341.319f, -1374.822f, 82.59002f, 0f, 0f, -9f, 23.34503f, 11.8652f, 6.637836f, "volNonApproach0");
					Local_208[0 /*32*/].f_15 = { 1319.263f, -1364.595f, 77.47489f };
					Local_208[0 /*32*/].f_18 = -47.96f;
					Local_208[1 /*32*/].f_15 = { 1322.616f, -1364.093f, 77.95048f };
					Local_208[1 /*32*/].f_18 = -51.24f;
					Local_208[0 /*32*/].f_6 = { 1330.311f, -1365.189f, 79.6978f };
					Local_208[0 /*32*/].f_9 = -105.91f;
					Local_208[1 /*32*/].f_6 = { 1329.886f, -1364.514f, 79.5578f };
					Local_208[1 /*32*/].f_9 = -140.74f;
					Local_208[2 /*32*/].f_6 = { 1331.398f, -1365.388f, 79.6557f };
					Local_208[2 /*32*/].f_9 = 70.92f;
					Local_208[2 /*32*/].f_15 = { 1342.14f, -1363.804f, 79.1335f };
					Local_208[2 /*32*/].f_18 = 166.8555f;
					break;
				case 1:
					Local_208[1 /*32*/].f_9 = 110f;
					Local_330[0 /*9*/] = { 1292.2f, -1316.6f, 76.6f };
					Local_330[1 /*9*/] = { 1304.2f, -1329.4f, 76.7f };
					Local_330[0 /*9*/].f_3 = 4f;
					Local_330[1 /*9*/].f_3 = 4f;
					vLocal_524 = { 1295.35f, -1327.66f, 76.91f };
					fLocal_527 = 44.95f;
					iLocal_542[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volNonApproach0");
					VOLUME::_0x39816F6F94F385AD(iLocal_542[0], 1284.786f, -1334.187f, 77.50498f, 0f, 0f, -48.52135f, 8.486638f, 7.098492f, 2.992859f);
					VOLUME::_0x39816F6F94F385AD(iLocal_542[0], 1289.996f, -1339.616f, 77.50498f, 0f, 0f, 5.846964f, 8.486638f, 7.098492f, 2.992859f);
					VOLUME::_0x39816F6F94F385AD(iLocal_542[0], 1285.414f, -1340.601f, 77.50498f, 0f, 0f, -32.81059f, 17.9757f, 7.098492f, 2.992859f);
					VOLUME::_0x39816F6F94F385AD(iLocal_542[0], 1287.045f, -1332.269f, 77.50498f, 0f, 0f, -25.64329f, 4.998636f, 3.091529f, 2.992859f);
					iLocal_544[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1313.728f, -1337.409f, 76.62299f, 0f, 0f, 70.00001f, 13.30591f, 95.04527f, 18.75799f, "volRoadBlock0");
					Local_208[0 /*32*/].f_15 = { 1299.209f, -1325.43f, 76.02338f };
					Local_208[0 /*32*/].f_18 = -155.6f;
					Local_208[1 /*32*/].f_15 = { 1300.854f, -1324.348f, 75.84612f };
					Local_208[1 /*32*/].f_18 = -134.69f;
					Local_208[2 /*32*/].f_15 = { 1342.14f, -1363.804f, 79.1335f };
					Local_208[2 /*32*/].f_18 = 166.8555f;
					break;
				case 2:
					Local_208[1 /*32*/].f_9 = 163f;
					Local_330[0 /*9*/] = { 1468.987f, -1366.38f, 77.7758f };
					Local_330[1 /*9*/] = { 1457.409f, -1361.21f, 77.8266f };
					Local_330[0 /*9*/].f_3 = 3f;
					Local_330[1 /*9*/].f_3 = 3f;
					vLocal_524 = { 1460.92f, -1362.4f, 78.49f };
					fLocal_527 = 240.85f;
					iLocal_542[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1461.364f, -1368.129f, 79.43551f, 0f, 0f, 154.72f, 11.502f, 10.39275f, 2.681242f, "volNonClose0");
					Local_208[0 /*32*/].f_15 = { 1454.292f, -1359.467f, 79.8424f };
					Local_208[0 /*32*/].f_18 = 114.26f;
					Local_208[1 /*32*/].f_15 = { 1452.881f, -1357.784f, 79.1527f };
					Local_208[1 /*32*/].f_18 = 93.53f;
					Local_208[2 /*32*/].f_15 = { 1342.14f, -1363.804f, 79.1335f };
					Local_208[2 /*32*/].f_18 = 166.8555f;
					break;
			}
			break;
	}
	if (__LIB_0__::func_86(Local_208[0 /*32*/].f_6))
	{
		Local_208[0 /*32*/].f_6 = { vLocal_524 };
	}
	if (__LIB_0__::func_86(Local_208[1 /*32*/].f_6))
	{
		Local_208[1 /*32*/].f_6 = { vLocal_524 };
	}
	if (__LIB_0__::func_86(Local_208[2 /*32*/].f_6))
	{
		Local_208[2 /*32*/].f_6 = { vLocal_524 };
	}
}

bool func_16()
{
	bool bVar0;
	int iVar1;
	switch (iLocal_714)
	{
		case 0:
			if (!__LIB_3__::func_479(Local_14.f_51, Local_14.f_51.f_3, &Local_208, &iLocal_528, 1, 0, -1, 1))
			{
				return false;
			}
			func_79();
			if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
			{
				PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_528[2], "Default_Panic");
				PED::_0xF7EA250B9A919E03(-1073596206, iLocal_528[2]);
			}
			iLocal_714 = 1;
			break;
		case 1:
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < iLocal_528)
			{
				iLocal_584[iVar1] = -1;
				if (__LIB_2__::func_1(iLocal_528[iVar1], 0, 0))
				{
					if (!PED::_0xA0BC8FAED8CFEB3C(iLocal_528[iVar1]))
					{
						bVar0 = false;
					}
				}
				iVar1++;
			}
			if (bVar0)
			{
				iLocal_714 = 6;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_17(float fParam0)
{
	func_80(&(Local_358[0 /*13*/]), joaat("EVENT_SHOCKING_BEAT_DISTURBING"), "farDisturbing", iLocal_528[0], fParam0, 25f, 16f, 0);
}

void func_18(bool bParam0)
{
	int iVar0;
	bool bVar1;
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_544[iVar0]))
			{
				bVar1 = true;
				PATHFIND::_0xC1799FAFD2FDF52B(iLocal_544[iVar0], 0, 0, 0);
				POPULATION::_0xB56D41A694E42E86(iLocal_544[iVar0], 0, 0, 0, -1, -1, 0);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_544[iVar0], 0, 0, 0, -1, -1, 0);
			}
			iVar0++;
		}
		if (bVar1)
		{
			func_28(&iLocal_579, 32, 0);
		}
	}
	else if (__LIB_13__::func_666(iLocal_579, 32))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_544[iVar0]))
			{
				PATHFIND::_0xD17672447692478E(iLocal_544[iVar0], 0);
				POPULATION::_0x74C2B3DC0B294102(iLocal_544[iVar0]);
				POPULATION::_0xA1CFB35069D23C23(iLocal_544[iVar0]);
			}
			iVar0++;
		}
		__LIB_13__::func_676(&iLocal_579, 32);
	}
}

void func_19()
{
	var uVar0;
	var uVar3;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_322, vLocal_524, 0f, 0f, fLocal_527, 2);
	if (iLocal_523 == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_322, "Odriscoll01", iLocal_528[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_322, "Odriscoll02", iLocal_528[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_322, "Victim", iLocal_528[2], 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_322.f_1, vLocal_524, 0f, 0f, fLocal_527, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_322, "thug_A", iLocal_528[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_322, "vic", iLocal_528[2], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_322.f_1, "thug_B", iLocal_528[1], 0);
	}
	ANIMSCENE::_GET_ANIM_SCENE_ORIGIN(Local_322, &uVar0, &uVar3, 2);
	iVar6 = 0;
	while (iVar6 < iLocal_528)
	{
		vVar7 = { ENTITY::GET_ENTITY_COORDS(iLocal_528[iVar6], true, false) };
		fVar10 = ENTITY::GET_ENTITY_HEADING(iLocal_528[iVar6]);
		iVar6++;
	}
}

bool func_20(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_3__::func_234(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					__LIB_17__::func_858(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_344(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*iParam1)[0]) && !PED::IS_PED_INJURED((*iParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*iParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*iParam1)[0]);
			}
		}
		if (bParam6)
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar2))
						{
							if (PED::_IS_PED_HOGTIED(iVar2) || ((bParam5 || PED::IS_PED_HUMAN(iVar2)) && ENTITY::IS_ENTITY_DEAD(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_21()
{
	if (func_92() || __LIB_13__::func_666(iLocal_579, 16))
	{
		if (iLocal_716 == 8)
		{
			if (!__LIB_0__::func_75(&uLocal_628))
			{
				__LIB_1__::func_283(&uLocal_628, 0);
			}
			else if (__LIB_1__::func_285(&uLocal_628, 3f))
			{
				return true;
			}
		}
		else if (iLocal_716 == 16384)
		{
			func_28(&iLocal_579, 4194304, 0);
			return false;
		}
		else if (iLocal_716 == 4)
		{
			func_28(&iLocal_579, 8, 0);
			return true;
		}
		else if (__LIB_2__::func_227(0, 1, Global_35, 1))
		{
			return true;
		}
	}
	return false;
}

int func_24()
{
	var uVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_2__::func_448(iLocal_528[0], joaat("BWALLBREAKOUT"), "bWallBreakout", uVar0, 1.6f, 1))
	{
		iLocal_404 = 1;
	}
	else if (__LIB_2__::func_448(iLocal_528[0], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar0, 1.7f, 1))
	{
		iLocal_404 = 2;
	}
	if (iLocal_404 == 0)
	{
		if (__LIB_2__::func_448(iLocal_528[2], joaat("BWALLBREAKOUT"), "bWallBreakout", uVar0, 1.5f, 1))
		{
			iLocal_404 = 1;
		}
		else if (__LIB_2__::func_448(iLocal_528[2], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar0, 1.6f, 1))
		{
			iLocal_404 = 2;
		}
	}
	iVar1 = func_99();
	switch (iLocal_404)
	{
		case 1:
			switch (iVar1)
			{
				case 3:
					sVar2 = "PBL_WALL_BREAKOUT_LEFT";
					break;
				case 2:
					sVar2 = "PBL_WALL_BREAKOUT_RIGHT";
					break;
				case 1:
					sVar2 = "PBL_WALL_BREAKOUT_BACK";
					break;
				default:
					sVar2 = "PBL_BRKOUT_WALL";
					break;
			}
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322, sVar2, false);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322.f_1, "PBL_BRKOUT_WALL", false);
			break;
		case 2:
			switch (iVar1)
			{
				case 3:
					sVar2 = "PBL_GROUND_BREAKOUT_LEFT";
					break;
				case 2:
					sVar2 = "PBL_GROUND_BREAKOUT_RIGHT";
					break;
				case 1:
					sVar2 = "PBL_GROUND_BREAKOUT_BACK";
					break;
				default:
					sVar2 = "PBL_BRKOUT_GROUND";
					break;
			}
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322, sVar2, false);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322.f_1, "PBL_BRKOUT_GROUND", false);
			break;
		case 0:
			if (!func_53(2, 8))
			{
				if (!__LIB_2__::func_598(iLocal_528[2], Local_322, "vic", 0, 0, 1, 0))
				{
					if (!__LIB_2__::func_448(iLocal_528[2], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1.5f, 1) && !__LIB_2__::func_448(iLocal_528[0], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1.5f, 1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_322, "vic", iLocal_528[2]);
					}
					else
					{
						func_101(2, 512);
					}
				}
			}
			if (!__LIB_2__::func_598(iLocal_528[0], Local_322, "thug_a", 0, 0, 1, 0))
			{
				if (!__LIB_2__::func_448(iLocal_528[2], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1.5f, 1) && !__LIB_2__::func_448(iLocal_528[0], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1.5f, 1))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_322, "thug_a", iLocal_528[0]);
				}
				else
				{
					func_101(0, 512);
				}
			}
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_528[1], Local_322.f_1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_322.f_1, "thug_b", iLocal_528[1]);
			}
			break;
	}
	return 1;
}

bool func_25()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_322, false))
	{
		if ((bLocal_551 || ANIMSCENE::_0x8D81E7824B7753F7(Local_322, "action", 1)) || ANIMSCENE::_0x8D81E7824B7753F7(Local_322, "base_punch", 1))
		{
			return true;
		}
	}
	return false;
}

bool func_26(int iParam0, char* sParam1, bool bParam2)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iParam0, sParam1, bParam2);
			return true;
		}
	}
	return false;
}

void func_27(bool bParam0)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_322, "BASE_BOOL", bParam0, false);
	bLocal_550 = bParam0;
}

void func_28(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	__LIB_1__::func_683(iParam0, iParam1);
}

void func_29()
{
	__LIB_2__::func_480(&Local_471, 1, 1, 1, 0);
	if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
	{
		__LIB_2__::func_504(iLocal_528[2], 0);
		__LIB_2__::func_603(&(iLocal_528[2]), &(Local_407[2 /*21*/]), &Local_471, 1, 1);
	}
	if (__LIB_2__::func_1(iLocal_528[0], 0, 0) && ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_528[0], Local_322))
	{
		__LIB_2__::func_504(iLocal_528[0], 0);
	}
	func_106();
	PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 243, false);
	func_107(5);
}

bool func_30()
{
	int iVar0;
	var uVar1;
	func_108();
	iVar0 = -1;
	if (iLocal_712 >= 5)
	{
	}
	else
	{
		iVar0 = func_109(&uVar1, (fLocal_739 < 0f && !__LIB_13__::func_666(iLocal_579, 262144)));
	}
	if (iVar0 == -1 && iLocal_712 > 2)
	{
		if (((iLocal_702 != Global_35 && (!__LIB_2__::func_1(iLocal_528[2], 0, 1) || iLocal_702 == iLocal_528[1])) && __LIB_1__::func_285(&uLocal_637, 2.5f)) && iLocal_710 < 2)
		{
			if (!__LIB_13__::func_666(iLocal_579, 67108864))
			{
				if (__LIB_13__::func_666(iLocal_579, 131072) && __LIB_13__::func_666(iLocal_579, 524288))
				{
					func_110(0, 1);
				}
				else
				{
					func_110(1, 1);
				}
			}
			__LIB_0__::func_37(&uLocal_637);
		}
	}
	switch (iLocal_712)
	{
		case 0:
			func_112();
			if (__LIB_1__::func_898() == 11)
			{
				__LIB_3__::func_867(&uLocal_733, &uLocal_735, Local_14.f_51, 0f, 0f, 0f, 5f, 5f, 5f, 0, 0, 1, 0, 0);
				__LIB_3__::func_867(&uLocal_734, &uLocal_736, 1343.603f, -1359.33f, 79.281f, 0f, 0f, -12f, 15f, 12f, 5f, 1, 0, 1, 0, "volExtraBlocking");
			}
			else
			{
				__LIB_3__::func_867(&uLocal_733, &uLocal_735, Local_14.f_51, 0f, 0f, 0f, 10f, 10f, 10f, 0, 0, 1, 0, 0);
			}
			func_107(2);
			break;
		case 2:
			if (iLocal_523 == 1)
			{
				func_115(iVar0);
			}
			else
			{
				func_116();
			}
			break;
		case 3:
			func_117();
			if (iLocal_523 == 1)
			{
				func_118(iVar0);
			}
			else
			{
				func_119(iVar0);
			}
			break;
		case 4:
			if (func_120(iVar0))
			{
				return true;
			}
			break;
		case 5:
			func_121(0);
			func_62(0);
			if (func_122())
			{
				if (func_123())
				{
					if (__LIB_2__::func_1(iLocal_528[2], 0, 1) && !func_53(2, 8))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_528[2]);
						func_107(6);
					}
					else
					{
						return true;
					}
				}
			}
			break;
		case 6:
			if (__LIB_0__::func_163(iLocal_528[2], 1313215416))
			{
				if (__LIB_13__::func_666(iLocal_579, 1))
				{
					__LIB_13__::func_676(&iLocal_579, 1);
				}
				if (!__LIB_0__::func_75(&uLocal_634))
				{
					__LIB_1__::func_283(&uLocal_634, 0);
					PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 252, false);
				}
				else if (__LIB_1__::func_285(&uLocal_634, 3f))
				{
					TASK::_0xFFB520A3E16F7B7B(iLocal_528[2], 0f);
					__LIB_1__::func_148(&uLocal_634);
				}
			}
			else if (func_126())
			{
				if (__LIB_13__::func_666(iLocal_579, 1073741824 /* Float: 2f */))
				{
					PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 3, 2, 1);
					PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 4, 2, 1);
				}
				func_57();
				func_107(7);
			}
			func_62(0);
			break;
		case 7:
			if (!__LIB_2__::func_1(iLocal_528[2], 0, 1) || __LIB_0__::func_665(Global_35, iLocal_528[2], 1, 1) > 20f)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_34()
{
	Local_553 = { 0f, 0f, 0f };
	Local_553.f_3 = Global_35;
	Local_553.f_8 = 4;
	Local_553.f_19 = 4;
	Local_553.f_21 = 4;
	Local_553.f_17 = 4;
	Local_553.f_18 = 4;
	Local_553.f_7 = 0;
}

bool func_53(int iParam0, int iParam1)
{
	return __LIB_0__::func_27(uLocal_580[iParam0], iParam1);
}

void func_56()
{
	__LIB_2__::func_962(&uLocal_385);
	if (__LIB_13__::func_666(iLocal_579, 64))
	{
		__LIB_1__::func_726(Global_35, 1);
		__LIB_13__::func_676(&iLocal_579, 64);
	}
	if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
	{
		__LIB_1__::func_727(iLocal_528[2], 1);
	}
}

void func_57()
{
	if (bLocal_711)
	{
		switch (iLocal_523)
		{
			case 2:
				PED::_0x2B4CE170DE09F346(Global_35, joaat("PLYR_RHD_V1"));
				break;
			case 1:
				PED::_0x2B4CE170DE09F346(Global_35, joaat("PLYR_VAL_V1"));
				break;
		}
		bLocal_711 = false;
	}
}

void func_58()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	vVar0 = { 0f, 0f, 0f };
	vVar3 = { func_144() };
	vVar6 = { func_145() };
	if (__LIB_2__::func_1(iLocal_528[0], 0, 1))
	{
		if (__LIB_2__::func_1(Local_208[0 /*32*/].f_11, 0, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar9);
			if (!__LIB_0__::func_86(vVar0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 1f, 1, 40000f);
			}
			TASK::TASK_MOUNT_ANIMAL(0, Local_208[0 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
			if (!__LIB_0__::func_86(vVar3))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 1.5f, 20000, 4f, 0, 40000f);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar6, 5f, 1f, 0, 0);
			__LIB_1__::func_474(iLocal_528[0], &iVar9, 0, 0, 1, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_528[0], 167, true);
		}
	}
	vVar0 = { 0f, 0f, 0f };
	if (__LIB_2__::func_1(iLocal_528[1], 0, 1))
	{
		if (__LIB_2__::func_1(Local_208[1 /*32*/].f_11, 0, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar9);
			if (!__LIB_0__::func_86(vVar0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 1f, 1, 40000f);
			}
			TASK::TASK_MOUNT_ANIMAL(0, Local_208[1 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
			if (!__LIB_0__::func_86(vVar3))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 1.5f, 20000, 4f, 0, 40000f);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar6, 5f, 1f, 0, 0);
			__LIB_1__::func_474(iLocal_528[1], &iVar9, 0.75f, 0, 1, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_528[1], 167, true);
		}
	}
}

void func_62(bool bParam0)
{
	int iVar0;
	if (!__LIB_13__::func_666(iLocal_579, 16384))
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (__LIB_2__::func_1(iLocal_528[iVar0], 0, 1))
			{
				if (PED::IS_PED_SHOOTING(iLocal_528[iVar0]))
				{
					iLocal_741++;
				}
			}
			iVar0++;
		}
		if (PED::IS_PED_SHOOTING(Global_35))
		{
			iLocal_741++;
		}
		if (__LIB_1__::func_285(&uLocal_603, 10f) || bParam0)
		{
			if (iLocal_741 > 7)
			{
				__LIB_0__::func_11(Global_35);
				func_28(&iLocal_579, 16384, 0);
			}
		}
	}
}

void func_66(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = __LIB_1__::func_898();
	iVar1 = __LIB_3__::func_554(iVar0, 0, 0, 0);
	*bParam0 = 0;
	switch (iVar0)
	{
		case 9:
			__LIB_3__::func_352(&Local_14, 0);
			iLocal_523 = 1;
			Local_208[0 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_01");
			Local_208[1 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_01");
			Local_208[2 /*32*/].f_1 = joaat("RE_FOOTROBBERY_MALES_01");
			StringCopy(&(Local_208[0 /*32*/].f_23), "0361_G_M_M_UniDuster_03_WHITE_01", 64);
			StringCopy(&(Local_208[1 /*32*/].f_23), "0362_G_M_M_UniDuster_03_WHITE_02", 64);
			StringCopy(&(Local_208[2 /*32*/].f_23), "REFR_Victim", 64);
			Local_208[2 /*32*/] = 4;
			Local_208[0 /*32*/].f_3 = 1274234949;
			Local_208[1 /*32*/].f_3 = 1672902603;
			Local_208[2 /*32*/].f_3 = 1784611275;
			break;
		case 0:
		case 11:
			__LIB_3__::func_352(&Local_14, 2);
			iLocal_523 = 2;
			Local_208[0 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
			Local_208[1 /*32*/].f_1 = joaat("G_M_Y_UNIEXCONFEDS_01");
			Local_208[2 /*32*/].f_1 = joaat("RE_FOOTROBBERY_MALES_01");
			StringCopy(&(Local_208[0 /*32*/].f_23), "0177_G_M_Y_UniExConfeds_01_WHITE_01", 64);
			StringCopy(&(Local_208[1 /*32*/].f_23), "0178_G_M_Y_UniExConfeds_01_WHITE_02", 64);
			StringCopy(&(Local_208[2 /*32*/].f_23), "1030_S_M_M_CoachTaxiDriver_01_WHITE_02", 64);
			Local_208[2 /*32*/] = 4;
			Local_208[0 /*32*/].f_3 = -307000369;
			Local_208[1 /*32*/].f_3 = 32289857;
			Local_208[2 /*32*/].f_3 = 2083759476;
			break;
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		__LIB_14__::func_175(&(Local_208[iVar2 /*32*/].f_22));
		iVar2++;
	}
	Local_208[2 /*32*/].f_12 = 0;
	switch (iVar1)
	{
		case 2:
			Local_208[0 /*32*/].f_12 = __LIB_2__::func_185(iVar1, 0, 1);
			Local_208[1 /*32*/].f_12 = __LIB_2__::func_185(iVar1, 0, 1);
			break;
		default:
			Local_208[0 /*32*/].f_12 = __LIB_2__::func_185(iVar1, 0, 0);
			Local_208[1 /*32*/].f_12 = __LIB_2__::func_185(iVar1, 1, 0);
			break;
	}
	Local_208[2 /*32*/].f_13 = 0;
	Local_208[0 /*32*/].f_13 = 0;
	Local_208[1 /*32*/].f_13 = 0;
	Local_208[2 /*32*/].f_19 = 1;
	Local_208[0 /*32*/].f_19 = 1;
	Local_208[1 /*32*/].f_19 = 1;
	if (*bParam0)
	{
	}
	if (__LIB_13__::func_666(iLocal_579, 536870912))
	{
		if (STREAMING::IS_MODEL_VALID(iLocal_700))
		{
			STREAMING::REQUEST_MODEL(iLocal_700, false);
		}
	}
	__LIB_3__::func_445(&Local_208);
}

void func_67()
{
	int iVar0;
	char* sVar1;
	Local_305[2 /*2*/] = func_168(2);
	Local_305[2 /*2*/].f_1 = "dia01_odris02";
	Local_305[3 /*2*/] = func_168(3);
	Local_305[3 /*2*/].f_1 = "dia02_odris02";
	Local_305[4 /*2*/] = func_168(4);
	Local_305[4 /*2*/].f_1 = "dia03_odris02";
	Local_305[5 /*2*/] = func_168(5);
	Local_305[5 /*2*/].f_1 = "dia04_victim";
	Local_305[7 /*2*/] = func_168(7);
	Local_305[7 /*2*/].f_1 = "base";
	switch (iLocal_523)
	{
		case 2:
			Local_305[6 /*2*/] = func_168(6);
			Local_305[6 /*2*/].f_1 = "";
			break;
		default:
			Local_305[6 /*2*/] = "";
			Local_305[6 /*2*/].f_1 = "";
			break;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == 6 && iLocal_523 != 2)
		{
		}
		else
		{
			sVar1 = func_168(iVar0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				STREAMING::REQUEST_ANIM_DICT(sVar1);
			}
		}
		iVar0++;
	}
}

void func_68()
{
	char* sVar0[2];
	int iVar3;
	if (iLocal_523 == 1)
	{
		Local_322.f_4 = "script@beat@wilderness@footrobbery@main";
		sVar0[0] = "PBL_MAIN";
	}
	else
	{
		Local_322.f_4 = "script@beat@town@footrobbery@leymone_vicThugA";
		Local_322.f_5 = "script@beat@town@footrobbery@leymone_thugB";
		sVar0[0] = "PBL_ACTION";
		sVar0[1] = "PBL_ACTION";
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_322.f_4))
	{
		Local_322 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_322.f_4, iVar3, sVar0[0], false, true);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_322, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_322);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_322.f_5))
	{
		Local_322.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_322.f_5, 0, sVar0[1], false, true);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_322.f_1, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_322.f_1);
		}
	}
}

bool func_69()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	iVar2 = 1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == 6 && iLocal_523 != 2)
		{
		}
		else
		{
			sVar1 = func_168(iVar0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
			{
				if (!STREAMING::HAS_ANIM_DICT_LOADED(sVar1))
				{
					iVar2 = 0;
				}
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_79()
{
	int iVar0;
	vector3 vVar1;
	if (__LIB_13__::func_666(iLocal_579, 536870912))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_700))
		{
			iLocal_699 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_700, func_192(iLocal_738, iLocal_737), false, true, false, true);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (__LIB_2__::func_1(iLocal_528[iVar0], 0, 1))
		{
			vVar1 = { Local_208[iVar0 /*32*/].f_6 };
			__LIB_3__::func_306(&vVar1, Local_208[iVar0 /*32*/].f_22);
			__LIB_3__::func_285(iLocal_528[iVar0], &Local_14, 0);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iLocal_528[iVar0], false);
			PED::_0x6569F31A01B4C097(iLocal_528[iVar0], 4, 0);
			if (Local_208[iVar0 /*32*/].f_12 != 0)
			{
				uLocal_532[iVar0] = Local_208[iVar0 /*32*/].f_11;
				vVar1 = { Local_208[iVar0 /*32*/].f_15 };
				__LIB_3__::func_306(&vVar1, Local_208[iVar0 /*32*/].f_22);
				if (!ENTITY::IS_ENTITY_DEAD(Local_208[iVar0 /*32*/].f_11))
				{
					ENTITY::_SET_ENTITY_COORDS_AND_HEADING(Local_208[iVar0 /*32*/].f_11, vVar1, Local_208[iVar0 /*32*/].f_18, true, false, true);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_208[iVar0 /*32*/].f_11, true);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Local_208[iVar0 /*32*/].f_11, 48, true);
				if (iVar0 < 2)
				{
					PED::SET_PED_CONFIG_FLAG(Local_208[iVar0 /*32*/].f_11, 6, true);
				}
			}
			else
			{
				__LIB_2__::func_426(&(Local_208[iVar0 /*32*/].f_11));
			}
			if (iVar0 < 2)
			{
				__LIB_2__::func_967(&(Local_14.f_5), iLocal_528[iVar0], Local_208[iVar0 /*32*/].f_11, 0);
				WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_528[iVar0], true, true);
				__LIB_2__::func_272(iLocal_528[iVar0], joaat("GROUP_REVOLVER"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_132(__LIB_3__::func_359(Local_208[iVar0 /*32*/].f_1), iLocal_528[iVar0]);
				PED::SET_PED_FIRING_PATTERN(iLocal_528[iVar0], joaat("FIRING_PATTERN_BURST_FIRE"));
				PED::SET_PED_ACCURACY(iLocal_528[iVar0], 15);
				PED::SET_PED_COMBAT_RANGE(iLocal_528[iVar0], 0);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_528[iVar0], 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_528[iVar0], 93, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar0], 233, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[iVar0], 6, true);
			}
		}
		iVar0++;
	}
	__LIB_2__::func_133(iLocal_528[0], &(Local_208[0 /*32*/].f_23), 0);
	__LIB_2__::func_133(iLocal_528[1], &(Local_208[1 /*32*/].f_23), 0);
	__LIB_2__::func_133(iLocal_528[2], &(Local_208[2 /*32*/].f_23), 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 406, true);
}

void func_80(var uParam0, int iParam1, char* sParam2, var uParam3, float fParam4, int iParam5, float fParam6, float fParam7)
{
	vector3 vVar0;
	__LIB_3__::func_899(uParam0, iParam1, sParam2, vVar0, uParam3, fParam4, iParam5, iParam5, -1f, fParam6, 1127481344 /* Float: 180f */, fParam7);
}

bool func_92()
{
	bool bVar0;
	if (ENTITY::DOES_ENTITY_EXIST(Local_208[Local_14 /*32*/].f_11))
	{
		if (ENTITY::IS_ENTITY_DEAD(Local_208[Local_14 /*32*/].f_11))
		{
			return true;
		}
	}
	bVar0 = false;
	if (Local_14.f_98[0] < 20f)
	{
		if (__LIB_0__::func_27(Local_14.f_5.f_1, 1024))
		{
			__LIB_2__::func_662(&(Local_14.f_5), 1);
		}
	}
	else if (!__LIB_0__::func_27(Local_14.f_5.f_1, 1024))
	{
		__LIB_2__::func_662(&(Local_14.f_5), 0);
	}
	switch (iLocal_588)
	{
		case 0:
			bVar0 = __LIB_3__::func_453(iLocal_528[0], 0, &(Local_14.f_5), &iLocal_716, 0, Local_14.f_98[0]);
			break;
		case 1:
			bVar0 = __LIB_3__::func_453(iLocal_528[1], 0, &(Local_14.f_5), &iLocal_716, 0, Local_14.f_98[1]);
			break;
		case 2:
			bVar0 = __LIB_3__::func_453(iLocal_528[2], 0, &(Local_14.f_5), &iLocal_716, 0, Local_14.f_98[2]);
			break;
		case 3:
			bVar0 = __LIB_3__::func_453(uLocal_532[0], 0, &(Local_14.f_5), &iLocal_716, 0, 0);
			break;
		case 4:
			bVar0 = __LIB_3__::func_453(iLocal_528[0], 0, &(Local_14.f_5), &iLocal_716, 0, Local_14.f_98[0]);
			break;
		case 5:
			bVar0 = __LIB_3__::func_453(iLocal_528[1], 0, &(Local_14.f_5), &iLocal_716, 0, Local_14.f_98[1]);
			break;
		case 6:
			bVar0 = __LIB_3__::func_453(iLocal_528[2], 0, &(Local_14.f_5), &iLocal_716, 0, Local_14.f_98[2]);
			break;
		case 7:
			bVar0 = __LIB_3__::func_453(uLocal_532[1], 0, &(Local_14.f_5), &iLocal_716, 0, 0);
			break;
	}
	if (bVar0)
	{
		if (__LIB_2__::func_1(uLocal_532[0], 0, 1) && PED::_0x268B3AEBF032A88D(uLocal_532[0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_532[0], false);
		}
		if (__LIB_2__::func_1(uLocal_532[1], 0, 1) && PED::_0x268B3AEBF032A88D(uLocal_532[1]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_532[1], false);
		}
		return true;
	}
	return false;
}

int func_99()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	float fVar12;
	fVar12 = func_245();
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_528[2], false, true) };
	vVar3 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar12, 0f, 50f, 0f) };
	vVar9 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar12, 50f, -50f, 0f) };
	vVar6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar12, -50f, -50f, 0f) };
	if (__LIB_0__::func_195(vVar0, vVar3, Global_36))
	{
		if (__LIB_0__::func_195(vVar0, vVar6, Global_36))
		{
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (__LIB_0__::func_195(vVar0, vVar9, Global_36))
	{
		return 2;
	}
	else
	{
		return 1;
	}
	return 1;
}

void func_101(int iParam0, int iParam1)
{
	__LIB_1__::func_683(&(uLocal_580[iParam0]), iParam1);
}

void func_106()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (__LIB_2__::func_1(iLocal_528[iVar0], 0, 0))
		{
			func_254(iVar0);
		}
		iVar0++;
	}
}

void func_107(int iParam0)
{
	iLocal_712 = iParam0;
}

void func_108()
{
	int iVar0;
	switch (iLocal_588)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				bLocal_546[iVar0] = __LIB_2__::func_157(iLocal_540[iVar0], Global_36);
				iVar0++;
			}
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 1)
			{
				bLocal_548[iVar0] = __LIB_2__::func_157(iLocal_542[iVar0], Global_36);
				iVar0++;
			}
			break;
		case 2:
			if (!__LIB_13__::func_666(iLocal_579, 2097152))
			{
				if (PED::_0x854BC9B1A1CCD034(-1073596206, iLocal_528[2]))
				{
					func_28(&iLocal_579, 2097152, 0);
				}
			}
			break;
		case 3:
			func_256();
			break;
		case 4:
			if (iLocal_523 == 1)
			{
				func_257(Local_322, "PBL_MAIN");
			}
			break;
		case 5:
			if (iLocal_523 == 1)
			{
				func_257(Local_322, "PBL_PUNCH");
			}
			break;
		case 6:
			if (iLocal_523 == 1)
			{
				func_257(Local_322, "PBL_PUNCH2");
			}
			break;
	}
	iLocal_588++;
	if (iLocal_588 > 7)
	{
		bLocal_551 = ANIMSCENE::_0x8D81E7824B7753F7(Local_322, "Base", 1);
		iLocal_588 = 0;
	}
}

int func_109(var uParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	if (__LIB_2__::func_470())
	{
		if (__LIB_2__::func_401(iLocal_528[1], 1, 1, 1, 0, 0))
		{
			if (!__LIB_13__::func_666(iLocal_579, 67108864))
			{
				func_260(0, 1);
				func_28(&iLocal_579, 67108864, 0);
			}
		}
		else if (__LIB_13__::func_666(iLocal_579, 67108864))
		{
			__LIB_13__::func_676(&iLocal_579, 67108864);
		}
	}
	if (fLocal_593 > 20f)
	{
		*uParam0 = 1;
		return -1;
	}
	if (!Local_14.f_48)
	{
		*uParam0 = 1;
		return -1;
	}
	if (bParam1)
	{
		fVar0 = 20f;
		fVar1 = 2f;
	}
	else
	{
		if (fLocal_739 > 15f)
		{
			fVar0 = (fLocal_739 + 1f);
		}
		else
		{
			fVar0 = 15f;
		}
		fVar1 = 2f;
	}
	iVar2 = -1;
	iVar5 = 524288 | __LIB_2__::func_340(3, 0, 0);
	iVar4 = 0;
	while (iVar4 <= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_528[iVar4]))
		{
		}
		else
		{
			iVar3 = func_262(&(iLocal_528[iVar4]), &(Local_407[iVar4 /*21*/]), fVar0, &Local_471, &(Local_14.f_192), fVar1, 1, 0, "", iVar5, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
			if (__LIB_2__::func_341(&(Local_407[iVar4 /*21*/])))
			{
				if (!bLocal_703)
				{
					if (Local_407[iVar4 /*21*/].f_1 == 0)
					{
						if (bParam1)
						{
							if (!__LIB_13__::func_666(iLocal_579, 262144))
							{
								func_28(&iLocal_579, 262144, 0);
							}
						}
						else if (!__LIB_13__::func_666(iLocal_579, 524288))
						{
							__LIB_2__::func_482(&(Local_471[0 /*17*/]), 1, 1);
							func_265(0, 0);
							func_28(&iLocal_579, 524288, 0);
						}
					}
					else if (Local_407[iVar4 /*21*/].f_1 == 1)
					{
						if (!bParam1)
						{
							__LIB_2__::func_482(&(Local_471[0 /*17*/]), 1, 1);
							__LIB_2__::func_482(&(Local_471[1 /*17*/]), 1, 1);
						}
					}
					if (Local_407[iVar4 /*21*/].f_1 != -1)
					{
						func_260(0, 0);
						iLocal_702 = Global_35;
						__LIB_1__::func_148(&uLocal_637);
						if (!__LIB_2__::func_1(iLocal_528[2], 0, 1))
						{
							__LIB_2__::func_504(iLocal_528[0], 200);
						}
						__LIB_2__::func_504(iLocal_528[1], 300);
						bLocal_703 = true;
					}
				}
			}
			if (iVar3 != -1)
			{
				iVar2 = iVar3;
				switch (iVar2)
				{
					case 1:
						func_121(0);
						bLocal_703 = false;
						iLocal_702 = Global_35;
						iLocal_710++;
					case 0:
						bLocal_703 = false;
						iLocal_702 = Global_35;
						if (bParam1)
						{
							if (!__LIB_13__::func_666(iLocal_579, 262144))
							{
								func_121(0);
								func_28(&iLocal_579, 262144, 0);
							}
						}
						else if (!__LIB_13__::func_666(iLocal_579, 131072))
						{
							func_28(&iLocal_579, 131072, 0);
						}
						else
						{
							func_28(&iLocal_579, 524288, 0);
						}
						break;
				}
			}
		}
		iVar4++;
	}
	*uParam0 = 1;
	if (iVar2 != -1)
	{
	}
	return iVar2;
}

void func_110(bool bParam0, bool bParam1)
{
	char* sVar0;
	char* sVar1;
	char[] cVar2[8];
	char[] cVar3[8];
	int iVar4;
	if (__LIB_2__::func_1(iLocal_528[1], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 301, true);
		switch (iLocal_523)
		{
			case 1:
				if (bParam1)
				{
					sVar0 = "RE_FOOTR_VAL_V1_GREET_RPOS";
					sVar1 = "RE_FOOTR_VAL_V1_GREET_RNEG";
				}
				else
				{
					sVar0 = "RE_FOOTR_VAL_V1_GREET_PCALL";
					sVar1 = "RE_FOOTR_VAL_V1_GREET_CALL";
				}
				break;
			case 2:
				if (bParam1)
				{
					sVar0 = "RE_FOOTR_RHD_V1_GREET_RPOS";
					sVar1 = "RE_FOOTR_RHD_V1_GREET_RNEG";
				}
				else
				{
					sVar0 = "RE_FOOTR_RHD_V1_GREET_PCALL";
					sVar1 = "RE_FOOTR_RHD_V1_GREET_CALL";
				}
				break;
		}
		if (bParam0)
		{
			if (bParam1 && fLocal_739 >= 0f)
			{
				cVar2 = __LIB_2__::func_460(8);
			}
			else
			{
				cVar2 = __LIB_2__::func_460(7);
			}
		}
		if (bParam1)
		{
			if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
			{
				cVar3 = __LIB_2__::func_460(10);
			}
			else
			{
				cVar3 = __LIB_2__::func_460(10);
			}
		}
		else if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
		{
			cVar3 = __LIB_2__::func_460(26);
		}
		else
		{
			cVar3 = __LIB_2__::func_460(10);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar2))
		{
			__LIB_2__::func_602(&(Local_471[0 /*17*/]), cVar2, sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 0, 0);
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(cVar3))
		{
			__LIB_2__::func_602(&(Local_471[1 /*17*/]), cVar3, sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 0, 0);
		}
		iVar4 = 0;
		while (iVar4 < Local_407)
		{
			__LIB_2__::func_394(&(Local_407[iVar4 /*21*/]), &(Local_471[1 /*17*/]));
			iVar4++;
		}
	}
}

void func_112()
{
	if (iLocal_523 == 1)
	{
		ANIMSCENE::START_ANIM_SCENE(Local_322);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322, "PBL_MAIN", true);
	}
	else
	{
		ANIMSCENE::START_ANIM_SCENE(Local_322);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322, "PBL_ACTION", true);
		ANIMSCENE::START_ANIM_SCENE(Local_322.f_1);
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322.f_1, "PBL_ACTION", true);
	}
}

void func_115(int iParam0)
{
	func_273();
	func_274(iParam0);
	if (func_275())
	{
		func_276(0);
		return;
	}
	if (Local_14.f_48)
	{
		if (bLocal_551)
		{
			if (func_277())
			{
				func_27(1);
				func_26(Local_322, "PBL_MAIN", 1);
				func_107(3);
				__LIB_1__::func_148(&uLocal_717);
			}
			else
			{
				__LIB_1__::func_283(&uLocal_606, 0);
				if (__LIB_3__::func_496(iLocal_528[0], "BasePunch", 1067030938 /* Float: 1.2f */))
				{
					func_279();
				}
				if (__LIB_1__::func_285(&uLocal_606, 45f))
				{
					if (func_280())
					{
						func_281();
						func_6();
					}
				}
			}
		}
	}
}

void func_116()
{
	if (func_282())
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_322, "loop_bool", true, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_322.f_1, "loop_bool", true, false);
		__LIB_0__::func_37(&uLocal_606);
		func_107(3);
	}
	else if (Local_14.f_48)
	{
		__LIB_1__::func_283(&uLocal_606, 0);
		if (__LIB_1__::func_285(&uLocal_606, 45f))
		{
			if (func_280())
			{
				func_281();
				func_6();
			}
		}
	}
}

void func_117()
{
	if (Local_14.f_48)
	{
		if (!MAP::DOES_BLIP_EXIST(uLocal_536[2]))
		{
			if (__LIB_2__::func_136(iLocal_528[2], 0))
			{
				__LIB_2__::func_73(iLocal_528[2], &(uLocal_536[2]), -1749618580, 580546400, 0, 0);
			}
		}
	}
}

void func_118(int iParam0)
{
	func_274(iParam0);
	if (func_275())
	{
		func_276(1);
		return;
	}
	if (func_284())
	{
		__LIB_2__::func_482(&(Local_471[0 /*17*/]), 1, 1);
		__LIB_13__::func_676(&iLocal_579, 131072);
		func_110(0, 1);
		func_18(0);
		func_107(4);
	}
}

void func_119(int iParam0)
{
	var uVar0;
	func_285();
	func_286();
	func_287();
	func_288();
	if (!func_53(1, 256))
	{
		func_289(iParam0);
	}
	if (!__LIB_13__::func_666(iLocal_579, 256))
	{
		if (func_290())
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322, "PBL_QUICK", true);
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322.f_1, "PBL_QUICK", true);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_322, "ACTION_BOOL", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_322.f_1, "ACTION_BOOL", true, false);
			func_28(&iLocal_579, 256, 0);
		}
		else if (Local_14.f_48)
		{
			__LIB_1__::func_283(&uLocal_606, 0);
			if (__LIB_1__::func_285(&uLocal_606, 45f))
			{
				if (func_280())
				{
					func_281();
					func_6();
				}
			}
		}
	}
	else if (!func_53(2, 8))
	{
		if (__LIB_2__::func_448(iLocal_528[2], joaat("BKNOCKEDOUT"), "bKnockedOut", uVar0, -0.8f, 1))
		{
			if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
			{
				__LIB_0__::func_325(&(uLocal_536[2]));
			}
			func_101(2, 8);
			func_110(1, 1);
			if (iLocal_710 < 1)
			{
				if (!__LIB_13__::func_666(iLocal_579, 262144))
				{
					func_28(&iLocal_579, 262144, 0);
				}
				if (!__LIB_13__::func_666(iLocal_579, 1024))
				{
					func_28(&iLocal_579, 1024, 0);
				}
				iLocal_710 = 1;
			}
		}
	}
	else
	{
		if (!func_53(2, 32))
		{
			if (__LIB_2__::func_448(iLocal_528[2], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar0, 1.6f, 1))
			{
				func_101(2, 32);
			}
		}
		else if (!func_53(2, 64))
		{
			if (!__LIB_2__::func_448(iLocal_528[2], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar0, 1.6f, 1))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_528[2], Local_322))
				{
					func_101(2, 64);
				}
			}
		}
		if (func_291(iParam0))
		{
			__LIB_13__::func_676(&iLocal_579, 131072);
			func_110(0, 1);
			__LIB_2__::func_482(&(Local_471[0 /*17*/]), 1, 1);
			func_17(1094713344 /* Float: 12f */);
			iLocal_403 = 2;
			func_107(4);
		}
	}
}

bool func_120(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	if (!__LIB_2__::func_1(iLocal_528[0], 0, 1) || !__LIB_2__::func_1(iLocal_528[1], 0, 1))
	{
		return false;
	}
	if (iParam0 == 1)
	{
		if (!func_53(0, 2048))
		{
			func_101(0, 2048);
		}
	}
	if ((func_53(0, 2048) || iLocal_710 >= 2) && __LIB_2__::func_227(0, 1, Global_35, 1))
	{
		if (!__LIB_13__::func_666(iLocal_578, 512))
		{
			if (func_296(0, Global_35, func_295(0), 42f, 1, 1744022339, 1))
			{
				func_28(&iLocal_578, 512, 0);
			}
			else if (func_296(1, Global_35, func_295(1), 42f, 1, 1744022339, 1))
			{
				func_28(&iLocal_578, 512, 0);
			}
		}
		func_28(&iLocal_579, 16, 0);
		func_298(0, 2048);
		return false;
	}
	if (iLocal_403 > 0)
	{
		func_299();
	}
	switch (iLocal_403)
	{
		case 0:
			__LIB_4__::func_322();
			Local_14.f_50 = 1;
			func_80(&(Local_358[0 /*13*/]), joaat("EVENT_SHOCKING_BEAT_DISTURBING"), "deadDisturbing", iLocal_528[2], 8f, 12f, -1082130432 /* Float: -1f */, 0);
			func_300(1);
			break;
		case 1:
			if (func_301(0) && func_301(1))
			{
				vVar1 = { __LIB_1__::func_977(0) };
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!__LIB_0__::func_86(vVar1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 1f, 1, 40000f);
				}
				TASK::TASK_MOUNT_ANIMAL(0, Local_208[0 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
				__LIB_1__::func_474(iLocal_528[0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[0], 167, true);
				vVar1 = { __LIB_1__::func_977(1) };
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!__LIB_0__::func_86(vVar1))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar1, 1f, 20000, 1f, 1, 40000f);
				}
				TASK::TASK_MOUNT_ANIMAL(0, Local_208[1 /*32*/].f_11, -1, -1, 1f, 1, 0, 0);
				__LIB_1__::func_474(iLocal_528[1], &iVar0, 0.75f, 0, 1, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[1], 167, true);
				func_300(2);
			}
			else
			{
				func_300(3);
			}
			break;
		case 2:
			if (PED::IS_PED_ON_MOUNT(iLocal_528[0]) && PED::IS_PED_ON_MOUNT(iLocal_528[1]))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 243, false);
				func_300(3);
			}
			break;
		case 3:
			vVar8 = { func_144() };
			vVar5 = { func_145() };
			if (PED::IS_PED_ON_MOUNT(iLocal_528[0]) && PED::IS_PED_ON_MOUNT(iLocal_528[1]))
			{
				fVar4 = 2f;
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!__LIB_0__::func_86(vVar8))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar8, 1.5f, 20000, 4f, 0, 40000f);
				}
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar5, 5f, fVar4, 0, 0);
				__LIB_1__::func_474(iLocal_528[0], &iVar0, 0, 0, 1, 1);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!__LIB_0__::func_86(vVar8))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar8, 1.5f, 20000, 4f, 0, 40000f);
				}
				TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar5, 5f, fVar4, 0, 0);
				__LIB_1__::func_474(iLocal_528[1], &iVar0, 0.5f, 0, 1, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_528[0], joaat("REL_PLAYER_DISLIKE"));
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_528[1], joaat("REL_PLAYER_DISLIKE"));
				func_300(4);
			}
			break;
		case 4:
			if (__LIB_0__::func_94(iLocal_528[0], func_145(), 0) < 4f || __LIB_0__::func_94(iLocal_528[1], func_145(), 0) < 4f)
			{
				switch (__LIB_1__::func_898())
				{
					case 9:
						__LIB_3__::func_897(iLocal_528[0], 36, 0, 1);
						__LIB_3__::func_897(iLocal_528[1], 36, 0, 1);
						break;
					case 11:
						if (__LIB_0__::func_317() != 3)
						{
							__LIB_3__::func_897(iLocal_528[0], 9, 0, 1);
							__LIB_3__::func_897(iLocal_528[1], 9, 0, 1);
						}
						else
						{
							__LIB_3__::func_897(iLocal_528[0], 5, 0, 1);
							__LIB_3__::func_897(iLocal_528[1], 5, 0, 1);
						}
						break;
				}
				func_300(5);
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_121(bool bParam0)
{
	if (!__LIB_13__::func_666(iLocal_579, 1048576))
	{
		if (__LIB_2__::func_1(iLocal_528[2], 0, 1))
		{
			if (bParam0 || __LIB_1__::func_285(&uLocal_603, 1f))
			{
				if (__LIB_2__::func_1(iLocal_528[2], 0, 1) && !func_53(2, 8))
				{
					if (!ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_528[2], Global_35, 1, 1) && !PED::_IS_PED_LASSOED(iLocal_528[2]))
					{
						__LIB_3__::func_465(12, 0, 0, "RE_HONOR_INTERVENED", 0, 0, 1065353216 /* Float: 1f */, 0);
					}
					func_28(&iLocal_579, 1048576, 0);
				}
			}
		}
	}
}

bool func_122()
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!__LIB_0__::func_75(&uLocal_720))
	{
		__LIB_1__::func_148(&uLocal_720);
	}
	if (__LIB_0__::func_12() == 105)
	{
		bVar0 = __LIB_4__::func_198(&Local_14, &iLocal_528, 0, 1);
		if (!__LIB_0__::func_73(1024))
		{
			if (bVar0)
			{
				__LIB_2__::func_29(1024);
			}
		}
		else if (!bVar0)
		{
			__LIB_1__::func_979(1024);
		}
	}
	__LIB_1__::func_283(&uLocal_603, 0);
	if (iLocal_729[0] >= 2 && iLocal_729[1] >= 2)
	{
		func_310();
	}
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar3, true, 0, false);
	func_311();
	iVar4 = 0;
	while (iVar4 <= 1)
	{
		if (!iLocal_743[iVar4])
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_528[iVar4]))
			{
				if (__LIB_2__::func_398(iLocal_528[iVar4]))
				{
					__LIB_2__::func_603(&(iLocal_528[iVar4]), &(Local_407[iVar4 /*21*/]), &Local_471, 1, 1);
					iLocal_743[iVar4] = 1;
				}
			}
			else
			{
				iLocal_743[iVar4] = 1;
			}
		}
		iVar4++;
	}
	if (iLocal_523 == 2)
	{
		if (__LIB_13__::func_666(iLocal_578, 256))
		{
			if (!__LIB_13__::func_666(iLocal_578, 32768))
			{
				if (__LIB_2__::func_227(-4f, 1, 0, 0))
				{
					func_313(0);
					func_313(1);
					func_313(2);
					if (__LIB_2__::func_1(iLocal_528[0], 0, 0))
					{
						if (!__LIB_13__::func_666(iLocal_578, 512))
						{
							func_296(0, Global_35, func_295(0), -1082130432 /* Float: -1f */, 1, 1744022339, 1);
						}
					}
					else if (__LIB_2__::func_1(iLocal_528[1], 0, 0))
					{
						if (!__LIB_13__::func_666(iLocal_578, 512))
						{
							func_296(1, Global_35, func_295(1), -1082130432 /* Float: -1f */, 1, 1744022339, 1);
						}
					}
					func_28(&iLocal_578, 32768, 0);
				}
			}
		}
	}
	if (__LIB_13__::func_666(iLocal_579, 4194304))
	{
		if (func_314())
		{
			func_6();
		}
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (__LIB_2__::func_1(iLocal_528[iVar2], 0, 1))
		{
			switch (iVar2)
			{
				case 0:
					switch (iLocal_729[iVar2])
					{
						case 0:
							if (iLocal_523 == 1)
							{
								if (__LIB_0__::func_264(&uLocal_720) > 3f || (__LIB_0__::func_264(&uLocal_720) > 0.6f && (__LIB_13__::func_666(iLocal_579, 4) || __LIB_13__::func_666(iLocal_579, 2))))
								{
									if (__LIB_13__::func_666(iLocal_579, 65536))
									{
										if (__LIB_2__::func_598(iLocal_528[iVar2], Local_322, "Odriscoll01", 0, 0.915f, 1, 0))
										{
											func_316(iVar2, 2);
										}
									}
									else
									{
										func_316(iVar2, 1);
									}
								}
							}
							else
							{
								func_317(iVar2, "thug_A");
								if (__LIB_2__::func_598(iLocal_528[iVar2], Local_322, "thug_A", 0, 0, 1, 0) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_528[2], Local_322))
								{
									func_316(iVar2, 2);
								}
							}
							break;
						case 1:
							if (__LIB_4__::func_188(&(Local_14.f_5)) != iLocal_528[iVar2])
							{
								if (!__LIB_0__::func_75(&(vLocal_612[iVar2 /*3*/])))
								{
									__LIB_1__::func_283(&(vLocal_612[iVar2 /*3*/]), 0);
									TASK::TASK_REACT(iLocal_528[iVar2], Global_35, Global_36, "Default_Shocked", 0.5f, 0, 4);
								}
								else if (__LIB_1__::func_285(&(vLocal_612[iVar2 /*3*/]), 0.49f) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_528[iVar2]))
								{
									func_316(iVar2, 2);
								}
							}
							else
							{
								func_316(iVar2, 2);
							}
							break;
						case 2:
							if (func_319())
							{
								func_320(iVar2);
								func_316(iVar2, 10);
							}
							else
							{
								func_321(iVar2);
								func_316(iVar2, 3);
							}
							break;
						case 3:
							if (iVar3 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_86(Local_330[iVar2 /*9*/]))
							{
								if (__LIB_0__::func_264(&uLocal_720) > 1f)
								{
									__LIB_1__::func_283(&(Local_330[iVar2 /*9*/].f_4), 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_528[iVar2], Local_330[iVar2 /*9*/], Local_330[iVar2 /*9*/].f_3, 1, 0, 0);
									func_316(iVar2, 4);
								}
							}
							break;
						case 4:
							if (Local_14.f_98[iVar2] > 25f)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_528[iVar2], false);
								PED::SET_PED_COMBAT_MOVEMENT(iLocal_528[iVar2], 2);
								PED::SET_PED_COMBAT_RANGE(iLocal_528[iVar2], 0);
								func_316(iVar2, 5);
							}
							break;
						case 5:
							break;
					}
					break;
				case 1:
					switch (iLocal_729[iVar2])
					{
						case 0:
							if (iLocal_523 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_528[iVar2], Local_305[4 /*2*/], Local_305[4 /*2*/].f_1, 1) && (!__LIB_13__::func_666(iLocal_579, 65536) || __LIB_2__::func_598(iLocal_528[iVar2], Local_322, "Odriscoll02", 0, 0, 1, 0)))
								{
									if (func_319())
									{
										func_320(iVar2);
										func_316(iVar2, 10);
									}
									else
									{
										if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_528[iVar2], Local_322))
										{
											TASK::CLEAR_PED_SECONDARY_TASK(iLocal_528[iVar2]);
										}
										func_321(iVar2);
										func_316(iVar2, 1);
									}
								}
							}
							else if (__LIB_2__::func_598(iLocal_528[iVar2], Local_322.f_1, "thug_B", 0, 0, 1, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_528[iVar2], Local_305[4 /*2*/], Local_305[4 /*2*/].f_1, 1))
							{
								if (func_319())
								{
									func_320(iVar2);
									func_316(iVar2, 10);
								}
								else
								{
									func_321(iVar2);
									func_316(iVar2, 1);
								}
							}
							break;
						case 1:
							if (iVar3 != joaat("WEAPON_UNARMED") && !__LIB_0__::func_86(Local_330[iVar2 /*9*/]))
							{
								if (__LIB_0__::func_264(&uLocal_720) > 1f)
								{
									__LIB_1__::func_283(&(Local_330[iVar2 /*9*/].f_4), 0);
									PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_528[iVar2], Local_330[iVar2 /*9*/], Local_330[iVar2 /*9*/].f_3, 1, 0, 0);
									func_316(iVar2, 2);
								}
							}
							if (!PED::IS_PED_IN_COMBAT(iLocal_528[iVar2], 0) && __LIB_0__::func_48(iLocal_528[iVar2], Global_35, 2f, 1))
							{
								if (!__LIB_0__::func_163(iLocal_528[iVar2], joaat("SCRIPT_TASK_MELEE")))
								{
									TASK::TASK_MELEE(iLocal_528[iVar2], Global_35, 0, 1, 1, 1065353216 /* Float: 1f */, 1, -1082130432 /* Float: -1f */);
								}
							}
							break;
						case 2:
							if (Local_14.f_98[iVar2] > 25f)
							{
								PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_528[iVar2], false);
								PED::SET_PED_COMBAT_MOVEMENT(iLocal_528[iVar2], 2);
								PED::SET_PED_COMBAT_RANGE(iLocal_528[iVar2], 0);
								func_316(iVar2, 3);
							}
							break;
						case 3:
							break;
					}
					break;
				case 2:
					switch (iLocal_729[iVar2])
					{
						case 0:
							if (iLocal_523 == 1)
							{
								if (__LIB_13__::func_666(iLocal_579, 2) || ANIMSCENE::_0x8D81E7824B7753F7(Local_322, "Exit", 1))
								{
									if (__LIB_2__::func_448(iLocal_528[2], joaat("BKOPUNCHHIT"), "bKOPunchHit", uVar1, 1067030938 /* Float: 1.2f */, 1))
									{
										TASK::TASK_KNOCKED_OUT(iLocal_528[2], 100f, false);
									}
									else if (func_323())
									{
										__LIB_0__::func_325(&(uLocal_536[2]));
										__LIB_1__::func_864(iLocal_528[iVar2], 1, 1);
										func_316(iVar2, 10);
									}
									else if (__LIB_2__::func_598(iLocal_528[2], Local_322, "Victim", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(iLocal_528[2], 1))
									{
										__LIB_2__::func_279(iLocal_528[iVar2], 1);
										func_326(&(iLocal_528[iVar2]));
										func_316(iVar2, 1);
									}
								}
								else if (__LIB_2__::func_598(iLocal_528[2], Local_322, "Victim", 0, 0, 1, 0) || !ENTITY::_0x0B7CB1300CBFE19C(iLocal_528[2], 1))
								{
									__LIB_2__::func_279(iLocal_528[iVar2], 1);
									func_326(&(iLocal_528[iVar2]));
									func_316(iVar2, 1);
								}
							}
							else
							{
								func_317(iVar2, "vic");
								if (__LIB_2__::func_598(iLocal_528[iVar2], Local_322, "vic", 0, 0, 1, 0))
								{
									if (iLocal_404 != 0)
									{
										__LIB_2__::func_279(iLocal_528[iVar2], 1);
										func_326(&(iLocal_528[iVar2]));
										func_316(iVar2, 1);
									}
									else
									{
										__LIB_2__::func_279(iLocal_528[iVar2], 1);
										func_326(&(iLocal_528[iVar2]));
										func_316(iVar2, 1);
									}
									func_316(iVar2, 1);
								}
								else if (iLocal_404 == 0)
								{
									if (!func_53(2, 8))
									{
										if (!func_53(iVar2, 512))
										{
											__LIB_2__::func_279(iLocal_528[iVar2], 1);
											func_326(&(iLocal_528[iVar2]));
											func_316(iVar2, 1);
										}
									}
									else if (func_53(2, 64))
									{
										__LIB_2__::func_279(iLocal_528[iVar2], 1);
										func_316(iVar2, 10);
									}
									else if (__LIB_2__::func_448(iLocal_528[2], joaat("BGROUNDBREAKOUT"), "bGroundBreakout", uVar1, 1.6f, 1))
									{
										ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322, "PBL_BRKOUT_GROUND", true);
										func_316(iVar2, 2);
									}
								}
							}
							break;
						case 1:
							if (func_327())
							{
								PED::_0xDE7B2B4144906CDF(-1073596206, iLocal_528[iVar2]);
								__LIB_0__::func_325(&(uLocal_536[iVar2]));
								PED::_0x16F798A05BB9E3B5(iLocal_528[2]);
								TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_528[iVar2], Global_35, 3, 4096, -1082130432 /* Float: -1f */, -1, 0);
								PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
								func_28(&iLocal_579, 1, 0);
								func_316(2, 10);
							}
							break;
						case 2:
							if (__LIB_2__::func_598(iLocal_528[iVar2], Local_322, "vic", 0, 0, 1, 0))
							{
								__LIB_2__::func_279(iLocal_528[iVar2], 1);
								func_326(&(iLocal_528[iVar2]));
								func_316(iVar2, 1);
							}
							break;
					}
					break;
			}
		}
		iVar2++;
	}
	if (!__LIB_2__::func_1(iLocal_528[0], 0, 1) && !__LIB_2__::func_1(iLocal_528[1], 0, 1))
	{
		__LIB_1__::func_991(iLocal_528[0], 0);
		__LIB_1__::func_991(iLocal_528[1], 0);
		return true;
	}
	else if (!__LIB_2__::func_1(iLocal_528[2], 8, 1))
	{
		if (__LIB_2__::func_1(iLocal_528[2], 0, 1))
		{
			TASK::TASK_KNOCKED_OUT(iLocal_528[2], 5f, false);
		}
	}
	return false;
}

bool func_123()
{
	int iVar0;
	char* sVar1;
	if (!bLocal_709)
	{
		return true;
	}
	if (__LIB_2__::func_393(&uLocal_704))
	{
		return true;
	}
	else if (__LIB_4__::func_376(&uLocal_704, &iLocal_528, 0, 2, 0f, 0))
	{
		__LIB_3__::func_474(&uLocal_704);
		iVar0 = __LIB_3__::func_554(__LIB_1__::func_898(), 0, 0, 0);
		sVar1 = __LIB_2__::func_638(&uLocal_704, iVar0, __LIB_2__::func_155(iVar0, 1), 1);
		func_333(Global_35, Global_35, sVar1, -1082130432 /* Float: -1f */, 0, 1808677283, 1);
		return true;
	}
	return false;
}

int func_126()
{
	if (PED::_0xB086C8C0F5701D14(iLocal_528[2]))
	{
		PED::_0x16F798A05BB9E3B5(iLocal_528[2]);
	}
	if (!func_53(0, 1024))
	{
		if (__LIB_2__::func_1(iLocal_528[0], 0, 1) && __LIB_2__::func_1(iLocal_528[0], 8, 1))
		{
			__LIB_3__::func_535(iLocal_528[0], 0, 0, 0);
			func_101(0, 1024);
		}
	}
	if (!func_53(1, 1024))
	{
		if (__LIB_2__::func_1(iLocal_528[1], 0, 1) && __LIB_2__::func_1(iLocal_528[1], 8, 1))
		{
			__LIB_3__::func_535(iLocal_528[1], 0, 0, 0);
			func_101(1, 1024);
		}
	}
	if ((!__LIB_2__::func_1(iLocal_528[2], 0, 1) && !__LIB_0__::func_163(iLocal_528[2], 1313215416)) || __LIB_13__::func_666(iLocal_579, 1))
	{
		func_336(0);
		func_56();
		return 1;
	}
	if (iLocal_406 <= 2)
	{
		if (__LIB_0__::func_665(Global_35, iLocal_528[2], 1, 1) > 25f)
		{
			if (iLocal_406 <= 0)
			{
				PED::_0x89F5E7ADECCCB49C(iLocal_528[2], "Default_Nervous");
			}
			func_56();
			vLocal_640 = { func_337() };
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_528[2], vLocal_640, 1f, -1, 0.25f, 2097152, 40000f);
			__LIB_3__::func_890(10);
		}
	}
	switch (iLocal_523)
	{
		case 1:
			return func_339();
		case 2:
			return func_340();
	}
	return 0;
}

Vector3 func_144()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	func_11(&Local_14, &iVar0, &iVar1);
	switch (iVar0)
	{
		case 9:
			switch (iVar1)
			{
				case 0:
					vVar2 = { -264.6443f, 772.0397f, 116.958f };
					break;
				case 1:
					vVar2 = { -337.1412f, 786.4087f, 114.9143f };
					break;
			}
			break;
		case 11:
			switch (iVar1)
			{
				case 0:
					vVar2 = { 1366.95f, -1353.452f, 76.83144f };
					break;
				case 1:
					vVar2 = { 1357.912f, -1351.177f, 77.08829f };
					break;
				case 2:
					vVar2 = { 1442.785f, -1419.796f, 78.29624f };
					break;
			}
			break;
	}
	return vVar2;
}

Vector3 func_145()
{
	int iVar0;
	int iVar1;
	func_11(&Local_14, &iVar0, &iVar1);
	switch (iVar0)
	{
		case 11:
			switch (iVar1)
			{
				case 0:
					return 1396.492f, -1416.994f, 78.70442f;
				case 1:
					return 1372.029f, -1370.639f, 77.48544f;
				case 2:
					return 1445.512f, -1435.908f, 76.91522f;
				default:
					break;
			}
			return 0f, 0f, 0f;
		case 9:
			return -262.3312f, 801.4066f, 117.6557f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

char* func_168(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "script_re@foot_robbery";
		case 3:
			return "script_re@foot_robbery";
		case 4:
			return "script_re@foot_robbery";
		case 5:
			return "script_re@foot_robbery";
		case 7:
			return "AMB_REST@WORLD_HUMAN_BADASS@MALE_A@base";
		case 6:
			return "script_re@foot_robbery@leymone";
		default:
			break;
	}
	return "";
}

Vector3 func_192(int iParam0, int iParam1)
{
	vector3 vVar0;
	vVar0 = { 0f, 0f, 0f };
	if (iParam0 == 9)
	{
		if (iParam1 == 0)
		{
			vVar0 = { -297.809f, 737.8043f, 117.6715f };
		}
		else
		{
			vVar0 = { -362.8885f, 833.2094f, 115.816f };
		}
	}
	else
	{
		vVar0 = { 1331.628f, -1366.815f, 78.85887f };
	}
	if (__LIB_0__::func_86(vVar0))
	{
	}
	return vVar0;
}

float func_245()
{
	return 175f;
}

void func_254(int iParam0)
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_ID();
	PLAYER::_0xA3DB37EDF9A74635(iVar0, iLocal_528[iParam0], 7, 1, 1);
	PLAYER::_0xA3DB37EDF9A74635(iVar0, iLocal_528[iParam0], 3, 1, 1);
	PLAYER::_0xA3DB37EDF9A74635(iVar0, iLocal_528[iParam0], 4, 1, 1);
	__LIB_2__::func_603(&(iLocal_528[iParam0]), &(Local_407[iParam0 /*21*/]), &Local_471, 1, 1);
}

void func_256()
{
	float fVar0;
	if (fLocal_593 >= 10f)
	{
		fVar0 = Local_14.f_98[2];
		if (fVar0 < fLocal_593)
		{
			fLocal_593 = fVar0;
		}
	}
}

void func_257(int iParam0, char* sParam1)
{
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1) && !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam1))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(iParam0, sParam1);
	}
}

void func_260(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (!func_480(0))
		{
			func_265(0, 1);
		}
	}
	else if (func_480(0))
	{
		func_265(0, 0);
	}
	if (bParam1)
	{
		if (!func_480(1))
		{
			func_265(1, 1);
		}
	}
	else if (func_480(1))
	{
		func_265(1, 0);
	}
}

int func_262(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_482(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!__LIB_0__::func_27(iVar0, 134217728))
	{
		__LIB_4__::func_403(iParam1, uParam3, uParam0);
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

void func_265(int iParam0, bool bParam1)
{
	__LIB_2__::func_411(&(Local_471[iParam0 /*17*/]), bParam1, 0);
}

void func_273()
{
	func_498();
	if (iLocal_405 == 6)
	{
		return;
	}
	if (!func_499())
	{
		return;
	}
	switch (iLocal_405)
	{
		case 0:
			if (func_500(0, 1))
			{
				if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
				{
					PED::KNOCK_OFF_PED_PROP(iLocal_528[2], false, true, false, false);
				}
				func_28(&iLocal_578, 1, 0);
				__LIB_1__::func_283(&uLocal_622, 0);
				func_501(1);
			}
			else if (Local_14.f_98[0] < 20f)
			{
				if (bLocal_551)
				{
					if (__LIB_1__::func_285(&uLocal_597, 10f) || !__LIB_13__::func_666(iLocal_579, 128))
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Local_322, "PBL_PUNCH"))
						{
							func_26(Local_322, "PBL_PUNCH2", 1);
						}
						else
						{
							func_26(Local_322, "PBL_PUNCH", 1);
						}
						func_27(1);
						__LIB_1__::func_148(&uLocal_597);
						if (!__LIB_13__::func_666(iLocal_579, 128))
						{
							func_28(&iLocal_579, 128, 0);
						}
					}
				}
			}
			break;
		case 1:
			if (!__LIB_1__::func_285(&uLocal_622, 7.5f))
			{
				return;
			}
			if (func_500(1, 1))
			{
				func_28(&iLocal_578, 2, 0);
				func_501(2);
			}
			break;
		case 2:
			if (!__LIB_1__::func_285(&uLocal_622, 7.5f))
			{
				return;
			}
			if (func_500(2, 1))
			{
				func_28(&iLocal_578, 4, 0);
				func_501(6);
			}
			break;
		case 6:
			break;
	}
}

void func_274(int iParam0)
{
	float fVar0;
	float fVar1;
	fVar0 = Local_14.f_98[1];
	if (fLocal_739 != -1f)
	{
		fVar1 = __LIB_0__::func_94(iLocal_528[1], __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), 1);
	}
	if (iLocal_710 >= 2)
	{
		if (func_503())
		{
			PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
			PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
			func_296(1, Global_35, func_295(1), 42f, 1, 1744022339, 1);
			__LIB_2__::func_45(iLocal_528[1], Global_35, -1);
			func_28(&iLocal_578, 512, 0);
			func_28(&iLocal_579, 16, 0);
		}
		return;
	}
	switch (iLocal_401)
	{
		case 0:
			func_110(1, 0);
			func_505(1);
			break;
		case 1:
			if ((func_506(fVar0, fVar1) && func_507()) || iParam0 != -1)
			{
				bLocal_709 = true;
				fLocal_739 = fVar0;
				func_260(0, 0);
				func_508();
				__LIB_1__::func_283(&uLocal_723, 0);
				func_505(3);
			}
			break;
		case 3:
			if (func_509(1) && __LIB_13__::func_666(iLocal_578, 128))
			{
				func_260(1, 1);
				func_505(11);
			}
			else if (func_503() || ((__LIB_13__::func_666(iLocal_578, 128) && bLocal_653) && __LIB_2__::func_227(-5f, 1, iLocal_528[1], 1)))
			{
				if (!__LIB_13__::func_666(iLocal_578, 128))
				{
					if (func_296(1, Global_35, func_510(11), 42f, 1, 1808677283, 1))
					{
						func_28(&iLocal_578, 128, 0);
						__LIB_4__::func_322();
						PED::_0x89F5E7ADECCCB49C(iLocal_528[1], "brave");
						TASK::TASK_PLAY_ANIM(iLocal_528[1], Local_305[3 /*2*/], Local_305[2 /*2*/].f_1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
						__LIB_1__::func_148(&uLocal_723);
						if (iLocal_710 < 1)
						{
							iLocal_710 = 1;
						}
						func_505(5);
					}
				}
				else if (!__LIB_13__::func_666(iLocal_578, 256))
				{
					if (func_296(1, Global_35, func_510(12), 42f, 1, -417894478, 1))
					{
						if (!__LIB_13__::func_666(iLocal_578, 256))
						{
							func_28(&iLocal_578, 256, 0);
						}
						if (bLocal_653)
						{
							__LIB_2__::func_73(iLocal_528[1], &(uLocal_536[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
							PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
							__LIB_1__::func_148(&uLocal_723);
							func_505(10);
						}
						else
						{
							PED::_0x89F5E7ADECCCB49C(iLocal_528[1], "brave");
							TASK::TASK_PLAY_ANIM(iLocal_528[1], Local_305[3 /*2*/], Local_305[3 /*2*/].f_1, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							__LIB_1__::func_148(&uLocal_723);
							func_505(5);
						}
					}
				}
				else if (!__LIB_13__::func_666(iLocal_578, 512) && !__LIB_13__::func_666(iLocal_579, 16))
				{
					if (func_296(1, Global_35, func_510(13), 42f, 1, 1744022339, 1))
					{
						func_28(&iLocal_578, 512, 0);
						TASK::TASK_PLAY_ANIM(iLocal_528[1], Local_305[4 /*2*/], Local_305[4 /*2*/].f_1, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
						__LIB_1__::func_148(&uLocal_723);
						func_505(5);
					}
				}
			}
			break;
		case 5:
			if (func_509(1))
			{
				func_505(11);
			}
			else if ((func_503() && __LIB_1__::func_285(&uLocal_723, 7f)) || (bLocal_653 && __LIB_2__::func_227(-5f, 1, iLocal_528[1], 1)))
			{
				func_505(3);
			}
			else
			{
				func_511();
				switch (iParam0)
				{
					case 0:
						if (!func_53(1, 2048))
						{
							func_101(1, 2048);
						}
						if (!PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 30f))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1f, -1f, -1f);
						}
						__LIB_1__::func_148(&uLocal_723);
						break;
					case 1:
						if (iLocal_710 < 2)
						{
							func_505(3);
							return;
						}
						break;
				}
				if (func_53(1, 2048) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					TASK::TASK_PLAY_ANIM(iLocal_528[1], Local_305[2 /*2*/], Local_305[2 /*2*/].f_1, 4f, -4f, -1, 67108880, 0f, false, 65536, false, 0, false);
					func_296(1, Global_35, "GET_LOST", -1082130432 /* Float: -1f */, 1, 1744022339, 1);
					if (!__LIB_13__::func_666(iLocal_578, 256))
					{
						func_28(&iLocal_578, 256, 0);
					}
					func_110(!__LIB_13__::func_666(iLocal_579, 524288), 1);
					bLocal_649 = false;
					vLocal_650 = { 0f, 0f, 0f };
					__LIB_1__::func_148(&uLocal_723);
					func_298(1, 2048);
				}
			}
			break;
		case 10:
			if (func_509(1))
			{
				func_505(11);
			}
			else if (__LIB_1__::func_285(&uLocal_723, 2f) && __LIB_2__::func_227(-5f, 1, iLocal_528[1], 1))
			{
				if (!__LIB_13__::func_666(iLocal_579, 16))
				{
					func_296(1, Global_35, "RE_FOOTR_VAL_V1_THUG2_AGGRO", 42f, 1, 1744022339, 1);
					func_28(&iLocal_578, 512, 0);
					func_28(&iLocal_579, 16, 0);
				}
			}
			break;
		case 11:
			if (func_512(0))
			{
				func_513(0);
				fLocal_739 = (Local_14.f_98[1] - 1f);
				func_505(1);
			}
			break;
	}
}

bool func_275()
{
	if (__LIB_13__::func_666(iLocal_578, 512))
	{
		return true;
	}
	if (Local_14.f_98[0] < 3f && func_514())
	{
		return true;
	}
	return false;
}

void func_276(bool bParam0)
{
	func_28(&iLocal_579, 2, 0);
	if (bParam0)
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_322, "PBL_MAIN") && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_322) > 0.56f)
		{
			func_28(&iLocal_579, 4, 0);
		}
		else
		{
			func_26(Local_322, "PBL_QUICKEXIT", 1);
		}
	}
	else
	{
		func_26(Local_322, "PBL_QUICKEXIT", 1);
	}
	func_27(1);
	func_29();
}

bool func_277()
{
	if (!bLocal_552)
	{
		if (Local_14.f_98[2] < 30f)
		{
			if (func_515(&iLocal_528, &uLocal_654, &uLocal_659, 3.5f, 30f, 0, 0, 17f))
			{
				bLocal_552 = true;
			}
		}
	}
	if (bLocal_552)
	{
		if (__LIB_2__::func_227(0f, 1, iLocal_528[0], 1))
		{
			return true;
		}
	}
	return false;
}

void func_279()
{
	if (Local_14.f_98[2] > 15f)
	{
		__LIB_3__::func_277(1891783641, ENTITY::GET_ENTITY_COORDS(iLocal_528[2], true, false), 1);
	}
}

bool func_280()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_528[iVar0]))
		{
			__LIB_1__::func_148(&uLocal_609);
			return false;
		}
		iVar0++;
	}
	__LIB_1__::func_283(&uLocal_609, 0);
	if (__LIB_1__::func_285(&uLocal_609, 3f))
	{
		return true;
	}
	return false;
}

void func_281()
{
	__LIB_1__::func_864(iLocal_528[2], 0, 0);
	if (__LIB_2__::func_1(iLocal_528[0], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_528[0], 167, true);
	}
	if (__LIB_2__::func_1(iLocal_528[1], 0, 1))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_528[1], 167, true);
	}
	Local_14.f_45 = 0;
}

bool func_282()
{
	if (Local_14.f_48)
	{
		return true;
	}
	if (Local_14.f_98[2] > 37f || Local_14.f_98[2] <= 0f)
	{
		return false;
	}
	if (func_499() && func_514())
	{
		return true;
	}
	return false;
}

bool func_284()
{
	switch (iLocal_402)
	{
		case 0:
			if (__LIB_2__::func_1(iLocal_528[2], 0, 1))
			{
				func_517();
			}
			else
			{
				func_518(1);
			}
			break;
		case 1:
			func_519();
			if (!__LIB_13__::func_666(iLocal_578, 64))
			{
				if (func_520())
				{
					if (iLocal_523 != 1)
					{
						if (__LIB_2__::func_227(-4f, 1, 0, 0))
						{
							func_296(0, 0, func_510(10), 42f, 0, 1744022339, 1);
						}
					}
					func_28(&iLocal_578, 64, 0);
					PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
					func_518(2);
				}
			}
			break;
		case 2:
			func_519();
			func_521();
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_322, false))
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_528[0], false);
				return true;
			}
			break;
	}
	return false;
}

void func_285()
{
	if (!__LIB_13__::func_666(iLocal_579, 4096))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_322, "ACTION_LOOP", 1))
		{
			if (func_522())
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_322, "ACTION_BOOL", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_322.f_1, "ACTION_BOOL", true, false);
				func_28(&iLocal_579, 4096, 0);
			}
		}
	}
}

void func_286()
{
	var uVar0;
	switch (iLocal_405)
	{
		case 0:
			if (__LIB_2__::func_448(iLocal_528[0], joaat("BLINESCALAWAG"), "bLineScalawag", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_279();
				func_28(&iLocal_578, 1, 0);
				func_501(1);
			}
			break;
		case 1:
			if (__LIB_2__::func_448(iLocal_528[2], joaat("BLINEFAMILY"), "bLineFamily", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_279();
				func_28(&iLocal_578, 2, 0);
				func_501(2);
			}
			break;
		case 2:
			if (__LIB_2__::func_448(iLocal_528[0], joaat("BLINECARPETBAGGER"), "bLineCarpetBagger", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_28(&iLocal_578, 4, 0);
				func_501(3);
			}
			break;
		case 3:
			if (__LIB_2__::func_448(iLocal_528[2], joaat("BLINETOYSOLDIERS"), "bLineToySoldiers", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_28(&iLocal_578, 2048, 0);
				func_501(5);
			}
			break;
		case 4:
			break;
		case 5:
			if (__LIB_2__::func_448(iLocal_528[2], joaat("BLINESADDER"), "bLineSadder", uVar0, 1067030938 /* Float: 1.2f */, 1))
			{
				func_28(&iLocal_578, 8192, 0);
				func_28(&iLocal_579, 256, 0);
				func_501(6);
			}
			break;
		case 6:
			break;
	}
}

void func_287()
{
	var uVar0;
	if (!__LIB_13__::func_666(iLocal_579, 256))
	{
		return;
	}
	if (__LIB_13__::func_666(iLocal_578, 16))
	{
		if (!func_53(2, 128))
		{
			if (__LIB_2__::func_448(iLocal_528[2], joaat("BDEATH"), "bDeath", uVar0, 0.3f, 1))
			{
				__LIB_2__::func_930(iLocal_528[2], 0);
				if ((fLocal_593 < 30f && Local_14.f_48) && !__LIB_13__::func_666(iLocal_579, 1048576))
				{
					__LIB_3__::func_465(2, 0, 0, "RE_HONOR_WITNESSED_CRIME", 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				__LIB_1__::func_864(iLocal_528[2], 1, 1);
				__LIB_2__::func_482(&(Local_471[0 /*17*/]), 1, 1);
				__LIB_2__::func_360(&(Local_471[1 /*17*/]), __LIB_2__::func_460(10));
				func_101(2, 128);
			}
		}
	}
	if (!__LIB_13__::func_666(iLocal_578, 16))
	{
		if (__LIB_2__::func_448(iLocal_528[2], joaat("BLINEIDIOT"), "bLineIdiot", uVar0, 1067030938 /* Float: 1.2f */, 1))
		{
			func_28(&iLocal_578, 16, 0);
		}
	}
}

void func_288()
{
	var uVar0;
	if (!__LIB_13__::func_666(iLocal_579, 512))
	{
		if (__LIB_2__::func_448(iLocal_528[1], joaat("BINWARNPOSITION"), "bInWarnPosition", uVar0, 0.5f, 1))
		{
			func_28(&iLocal_579, 512, 0);
		}
	}
	else if (__LIB_2__::func_448(iLocal_528[1], joaat("BOUTWARNPOSITION"), "bOutWarnPosition", uVar0, 0.5f, 1))
	{
		__LIB_13__::func_676(&iLocal_579, 512);
	}
}

void func_289(int iParam0)
{
	float fVar0;
	float fVar1;
	bool bVar2;
	int iVar3;
	fVar0 = Local_14.f_98[1];
	fVar1 = __LIB_0__::func_94(iLocal_528[1], __LIB_2__::func_114(Global_35, 1065353216 /* Float: 1f */), 1);
	switch (iLocal_401)
	{
		case 0:
			func_110(1, 0);
			func_505(1);
			break;
		case 1:
			if ((func_506(fVar0, fVar1) && func_507()) || iParam0 != -1)
			{
				bLocal_709 = true;
				__LIB_1__::func_148(&uLocal_723);
				fLocal_739 = fVar0;
				func_508();
				if (iParam0 == 1)
				{
					if (iLocal_710 >= 2 || !__LIB_2__::func_1(iLocal_528[2], 0, 1))
					{
						func_28(&iLocal_579, 16, 0);
						func_505(9);
					}
					else
					{
						func_505(5);
					}
				}
				else
				{
					func_505(3);
				}
			}
			break;
		case 4:
			func_28(&iLocal_578, 128, 0);
			__LIB_4__::func_322();
			__LIB_1__::func_148(&uLocal_723);
			func_110(1, 1);
			func_505(5);
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1f, -1f, -1f);
					if (iLocal_710 >= 2 || !__LIB_2__::func_1(iLocal_528[2], 0, 1))
					{
						func_28(&iLocal_579, 16, 0);
						func_505(9);
					}
					else
					{
						bVar2 = true;
					}
					break;
			}
			if (func_503() || bVar2)
			{
				if (!__LIB_13__::func_666(iLocal_578, 128))
				{
					if (func_296(1, Global_35, func_510(11), 42f, 1, -500314840, 1))
					{
						iLocal_702 = iLocal_528[1];
						func_28(&iLocal_578, 128, 0);
						__LIB_4__::func_322();
						PED::_0x89F5E7ADECCCB49C(iLocal_528[1], "brave");
						TASK::TASK_PLAY_ANIM(iLocal_528[1], Local_305[2 /*2*/], Local_305[2 /*2*/].f_1, 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
						__LIB_1__::func_148(&uLocal_723);
						func_505(5);
					}
				}
				else
				{
					func_505(5);
				}
			}
			break;
		case 5:
			if (!__LIB_13__::func_666(iLocal_579, 1024))
			{
				func_511();
			}
			switch (iParam0)
			{
				case 0:
					if (!func_53(1, 2048))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 30f))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1f, -1f, -1f);
						}
						func_101(1, 2048);
					}
					break;
				case 1:
					PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
					PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1f, -1f, -1f);
					func_505(9);
					bVar2 = true;
					break;
			}
			if (bVar2)
			{
			}
			else
			{
				if (func_523() && !func_53(1, 2048))
				{
					if (func_509(__LIB_13__::func_666(iLocal_579, 8192)))
					{
						func_505(11);
					}
					else if (func_524())
					{
						PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
						PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1f, -1f, -1f);
						func_505(6);
					}
				}
				else if ((func_53(1, 2048) && __LIB_2__::func_227(0, 1, Global_35, 1)) && __LIB_2__::func_227(0, 1, iLocal_528[1], 1))
				{
					TASK::TASK_PLAY_ANIM(iLocal_528[1], Local_305[2 /*2*/], Local_305[2 /*2*/].f_1, 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
					func_296(1, Global_35, "GET_LOST", -1082130432 /* Float: -1f */, 1, 1744022339, 1);
					iLocal_702 = iLocal_528[1];
					func_110(!__LIB_13__::func_666(iLocal_579, 524288), 1);
					bLocal_649 = false;
					vLocal_650 = { 0f, 0f, 0f };
					func_28(&iLocal_578, 256, 0);
					__LIB_1__::func_148(&uLocal_723);
					func_298(1, 2048);
				}
				Jump @1894; //curOff = 1034
				if (PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 15f))
				{
					if (!__LIB_13__::func_666(iLocal_578, 256))
					{
						if (__LIB_2__::func_227(0, 1, Global_35, 1))
						{
							func_296(1, Global_35, func_510(12), -1082130432 /* Float: -1f */, 1, 1744022339, 1);
							iLocal_702 = iLocal_528[1];
							func_28(&iLocal_578, 256, 0);
						}
					}
					else
					{
						__LIB_2__::func_482(&(Local_471[0 /*17*/]), 1, 1);
						__LIB_1__::func_148(&uLocal_723);
						func_505(7);
					}
				}
				Jump @1894; //curOff = 1159
				switch (iParam0)
				{
					case 0:
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1f, -1f, -1f);
						TASK::TASK_PLAY_ANIM(iLocal_528[1], Local_305[2 /*2*/], Local_305[2 /*2*/].f_1, 2f, -2f, -1, 67108880, 0f, false, 65536, false, 0, false);
						func_296(1, Global_35, "GET_LOST", -1082130432 /* Float: -1f */, 1, 1744022339, 1);
						iLocal_702 = iLocal_528[1];
						func_110(!__LIB_13__::func_666(iLocal_579, 524288), 1);
						bLocal_649 = false;
						vLocal_650 = { 0f, 0f, 0f };
						__LIB_1__::func_148(&uLocal_723);
						break;
					case 1:
						PED::SET_PED_USING_ACTION_MODE(iLocal_528[0], true, -1, 0);
						PED::SET_PED_USING_ACTION_MODE(iLocal_528[1], true, -1, 0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[1], Global_35, -1, -1f, -1f, -1f);
						func_505(9);
						break;
					default:
						if ((__LIB_1__::func_285(&uLocal_723, 3.5f) && !__LIB_2__::func_341(&(Local_407[1 /*21*/]))) && !__LIB_2__::func_341(&(Local_407[0 /*21*/])))
						{
							if (func_509(__LIB_13__::func_666(iLocal_579, 8192)))
							{
								func_505(11);
							}
							else
							{
								if (Local_14.f_98[1] < 8f && (PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_528[1], true, false), 60f) || ENTITY::GET_ENTITY_SPEED(Global_35) < 1f))
								{
									__LIB_1__::func_148(&uLocal_723);
									func_505(9);
								}
								else if ((__LIB_1__::func_285(&uLocal_723, 8f) && (PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iLocal_528[1], true, false), 60f) || ENTITY::GET_ENTITY_SPEED(Global_35) < 1f)) && Local_14.f_98[1] <= (fLocal_739 + 1f))
								{
									__LIB_1__::func_148(&uLocal_723);
									func_505(9);
								}
							else
							{
								}
								Jump @1894; //curOff = 1638
								if (__LIB_2__::func_227(0, 1, Global_35, 1))
								{
									if (__LIB_1__::func_285(&uLocal_723, 8f) || __LIB_13__::func_666(iLocal_579, 16))
									{
										if (!__LIB_13__::func_666(iLocal_579, 16))
										{
											func_28(&iLocal_579, 16, 0);
										}
									}
									else if (__LIB_2__::func_227(0, 1, iLocal_528[1], 1))
									{
										if (!func_53(1, 16))
										{
											func_296(1, Global_35, func_510(13), -1082130432 /* Float: -1f */, 1, 1744022339, 1);
											iLocal_702 = iLocal_528[1];
											func_28(&iLocal_578, 512, 0);
											TASK::OPEN_SEQUENCE_TASK(&iVar3);
											TASK::TASK_REACT(0, Global_35, Global_36, "TaskCombat_React", 1f, 0, 4);
											TASK::TASK_COMBAT_PED(0, Global_35, 68157440, 4096);
											__LIB_1__::func_474(iLocal_528[0], &iVar3, 0, 0, 1, 1);
										}
									}
									func_321(1);
								}
								Jump @1894; //curOff = 1847
								if (func_512(1))
								{
									fLocal_739 = (Local_14.f_98[1] - 1f);
									func_513(0);
									func_28(&iLocal_579, 8192, 0);
									func_505(1);
								}
							}
						}
				}
			}
			default:
				break;
	}
}

bool func_290()
{
	var uVar0;
	if (func_499() && func_514())
	{
		if (__LIB_2__::func_448(iLocal_528[0], joaat("BQUICKTHROW"), "bQuickThrow", uVar0, 0.5f, 1) || ANIMSCENE::_0x8D81E7824B7753F7(Local_322, "ACTION_LOOP", 1))
		{
			if (__LIB_8__::func_256(iLocal_528[2], &(Local_14.f_33), &uLocal_647, &uLocal_648, 0.01f, 12f, 0, 0, 5f, 1))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_291(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	if (!func_53(0, 1))
	{
		if (!__LIB_13__::func_666(iLocal_578, 512))
		{
			if (__LIB_2__::func_598(iLocal_528[0], Local_322, "thug_A", 0, 0, 1, 0))
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_528[0], 0f, 1.5f, 0f) };
				__LIB_2__::func_106(&vVar0, 1, 10, 0);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 0.25f, 1, 40000f);
				if (__LIB_2__::func_1(Local_208[0 /*32*/].f_11, 0, 0))
				{
					TASK::TASK_MOUNT_ANIMAL(0, Local_208[0 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
				}
				__LIB_1__::func_474(iLocal_528[0], &iVar3, 0, 0, 1, 1);
				func_101(0, 256);
				func_101(0, 1);
			}
		}
	}
	if (!func_53(1, 1))
	{
		bVar4 = func_526();
		if (!func_53(0, 1))
		{
			if ((__LIB_3__::func_891(Local_322) < 0.763f || __LIB_0__::func_163(iLocal_528[1], joaat("SCRIPT_TASK_CONFRONT"))) || __LIB_13__::func_666(iLocal_578, 512))
			{
				return false;
			}
		}
		if (__LIB_2__::func_598(iLocal_528[1], Local_322.f_1, "thug_B", 0, 0, 1, 0) || bVar4)
		{
			if (!bVar4)
			{
				vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_528[1], 0f, 1.5f, 0f) };
				__LIB_2__::func_106(&vVar0, 1, 10, 0);
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar3);
			if (!bVar4)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, 20000, 0.25f, 1, 40000f);
			}
			if (__LIB_2__::func_1(Local_208[1 /*32*/].f_11, 0, 0))
			{
				TASK::TASK_MOUNT_ANIMAL(0, Local_208[1 /*32*/].f_11, 20000, -1, 1f, 1, 0, 0);
			}
			__LIB_1__::func_474(iLocal_528[1], &iVar3, 0, 0, 1, 1);
			func_101(1, 256);
			func_101(1, 1);
		}
	}
	if (func_53(0, 256) || func_53(1, 256))
	{
		func_120(iParam0);
	}
	if ((func_53(0, 1) && func_53(1, 1)) && !__LIB_13__::func_666(iLocal_578, 512))
	{
		return true;
	}
	return false;
}

char* func_295(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_510(15);
		case 1:
			return func_510(16);
		default:
			break;
	}
	return "";
}

bool func_296(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	iVar0 = func_333(iLocal_528[iParam0], iParam1, sParam2, fParam3, bParam4, iParam5, bParam6);
	if (iVar0 >= 0)
	{
		iLocal_584[iParam0] = iVar0;
		return true;
	}
	return false;
}

void func_298(int iParam0, int iParam1)
{
	__LIB_1__::func_681(&(uLocal_580[iParam0]), iParam1);
}

void func_299()
{
	if (func_528())
	{
		if (__LIB_2__::func_1(iLocal_528[0], 0, 1))
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_528[0], &Local_553);
		}
		if (__LIB_2__::func_1(iLocal_528[1], 0, 1))
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_528[1], &Local_553);
		}
		if (__LIB_13__::func_666(iLocal_578, 65536) && __LIB_0__::func_264(&uLocal_726) > 10f)
		{
			if (!__LIB_0__::func_86(vLocal_643))
			{
				if (__LIB_0__::func_636(Global_36, vLocal_643) > 20f)
				{
					func_28(&iLocal_579, 4, 0);
					func_29();
				}
			}
		}
		else
		{
			if (!__LIB_0__::func_75(&uLocal_726))
			{
				__LIB_1__::func_148(&uLocal_726);
			}
			else if (__LIB_0__::func_33(&uLocal_726))
			{
				__LIB_2__::func_112(&uLocal_726);
			}
			if (func_531(iLocal_698, iLocal_528[1], &(Local_407[1 /*21*/])) || func_531(iLocal_698, iLocal_528[0], &(Local_407[0 /*21*/])))
			{
				return;
			}
			if (!__LIB_13__::func_666(iLocal_578, 65536))
			{
				if (func_296(1, Global_35, func_510(14), 42f, 1, -417894478, 1))
				{
					vLocal_643 = { Global_36 };
					func_28(&iLocal_578, 65536, 0);
				}
			}
		}
	}
	else if (__LIB_0__::func_75(&uLocal_726) && !__LIB_0__::func_33(&uLocal_726))
	{
		__LIB_2__::func_113(&uLocal_726);
	}
}

void func_300(int iParam0)
{
	iLocal_403 = iParam0;
}

int func_301(int iParam0)
{
	if (!__LIB_2__::func_1(Local_208[iParam0 /*32*/].f_11, 0, 1))
	{
		return 0;
	}
	if (PED::_GET_RIDER_OF_MOUNT(Local_208[iParam0 /*32*/].f_11, true) != 0)
	{
		return 0;
	}
	if (__LIB_0__::func_665(Local_208[iParam0 /*32*/].f_11, iLocal_528[iParam0], 1, 1) > 12f)
	{
		return 0;
	}
	return 1;
}

void func_310()
{
	int iVar0;
	if (__LIB_13__::func_666(iLocal_579, 8))
	{
		return;
	}
	if (func_541())
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (__LIB_2__::func_1(iLocal_528[iVar0], 0, 0))
			{
				TASK::TASK_COMBAT_PED(iLocal_528[iVar0], Global_35, 0, 0);
			}
			iVar0++;
		}
		func_28(&iLocal_579, 8, 0);
	}
}

void func_311()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!__LIB_0__::func_86(Local_330[iVar0 /*9*/]))
		{
			func_542(&(Local_330[iVar0 /*9*/]), iVar0);
		}
		iVar0++;
	}
}

void func_313(int iParam0)
{
	if (iLocal_584[iParam0] >= 0)
	{
		__LIB_2__::func_504(iLocal_528[iParam0], 0);
		func_543(&(iLocal_584[iParam0]));
	}
}

bool func_314()
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 < iLocal_528)
	{
		if (__LIB_2__::func_1(iLocal_528[iVar1], 0, 1))
		{
			if (func_544(iVar1) >= 10)
			{
				iVar0++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 >= 3)
	{
		return true;
	}
	return false;
}

void func_316(int iParam0, int iParam1)
{
	iLocal_729[iParam0] = iParam1;
}

void func_317(int iParam0, char* sParam1)
{
	var uVar0;
	int iVar1;
	char* sVar2;
	if (__LIB_13__::func_666(iLocal_579, 8388608))
	{
		return;
	}
	if (func_53(iParam0, 512))
	{
		iVar1 = func_99();
		switch (iVar1)
		{
			case 3:
				sVar2 = "PBL_WALL_BREAKOUT_LEFT";
				break;
			case 2:
				sVar2 = "PBL_WALL_BREAKOUT_RIGHT";
				break;
			case 1:
				sVar2 = "PBL_WALL_BREAKOUT_BACK";
				break;
			default:
				sVar2 = "PBL_BRKOUT_WALL";
				break;
		}
		if (!__LIB_2__::func_598(iLocal_528[iParam0], Local_322, sParam1, 0, 0, 1, 0))
		{
			if (__LIB_2__::func_448(iLocal_528[iParam0], joaat("BWALLBREAKOUT"), "bWallBreakout", uVar0, 1.6f, 1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_322, sVar2, false);
				func_28(&iLocal_579, 8388608, 0);
			}
		}
	}
}

bool func_319()
{
	if (__LIB_13__::func_666(iLocal_579, 4194304))
	{
		return true;
	}
	if (iLocal_716 == 8192 || iLocal_716 == 16384)
	{
		if (__LIB_1__::func_394(iLocal_698, 0, 1, 0))
		{
			func_28(&iLocal_579, 4194304, 0);
			return true;
		}
	}
	return false;
}

void func_320(int iParam0)
{
	__LIB_2__::func_461(0);
	func_313(0);
	func_313(1);
	func_313(2);
	TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_528[iParam0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
	func_101(iParam0, 16);
}

void func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (func_53(iParam0, 16))
	{
		return;
	}
	if (!__LIB_13__::func_666(iLocal_578, 512))
	{
		__LIB_2__::func_461(0);
		func_313(0);
		func_313(1);
		func_313(2);
		if (!__LIB_13__::func_666(iLocal_578, 512))
		{
			if (func_296(iParam0, Global_35, func_295(iParam0), 42f, 1, 1744022339, 1))
			{
				func_28(&iLocal_578, 512, 0);
			}
		}
	}
	__LIB_2__::func_73(iLocal_528[iParam0], &(uLocal_536[iParam0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
	if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_528[iParam0], Local_322))
	{
		TASK::CLEAR_PED_SECONDARY_TASK(iLocal_528[iParam0]);
	}
	PED::SET_PED_CONFIG_FLAG(iLocal_528[iParam0], 167, false);
	iVar0 = 68157440;
	iVar1 = 4112;
	TASK::OPEN_SEQUENCE_TASK(&iVar2);
	if ((PED::IS_PED_ON_MOUNT(iLocal_528[iParam0]) && !__LIB_13__::func_666(iLocal_579, 8)) || __LIB_0__::func_163(iLocal_528[iParam0], 1870523043))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	TASK::TASK_COMBAT_PED(0, Global_35, iVar0, iVar1);
	__LIB_1__::func_474(iLocal_528[iParam0], &iVar2, 0, 0, 1, 1);
	func_101(iParam0, 16);
	func_546();
}

bool func_323()
{
	var uVar0;
	if (__LIB_2__::func_448(iLocal_528[2], joaat("DEAD"), "Dead", uVar0, 1.4f, 1))
	{
		return true;
	}
	return false;
}

void func_326(var uParam0)
{
	PED::_0xAAB050DA48B57978(*uParam0, "Default_Panic", 0, -1, 4);
	PED::PED_COWER_MOVE_TO_POINT(*uParam0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam0, 0.1f, 0f, 0f), Global_35, 2f);
}

bool func_327()
{
	bool bVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (__LIB_2__::func_1(iLocal_528[iVar3], 0, 1) && !TASK::IS_PED_IN_WRITHE(iLocal_528[iVar3]))
		{
			iVar1++;
			if (PED::IS_PED_IN_MELEE_COMBAT(iLocal_528[iVar3]))
			{
				fVar2 = 1.5f;
			}
			else
			{
				fVar2 = 2f;
			}
			if (__LIB_0__::func_665(iLocal_528[2], iLocal_528[iVar3], 0, 1) < fVar2)
			{
				bVar0 = true;
			}
		}
		iVar3++;
	}
	if (bVar0)
	{
		if (Local_14.f_98[2] < 1f)
		{
			bVar0 = false;
		}
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_528[2], Global_35, 1, 1))
	{
		bVar0 = false;
	}
	if (!bVar0 && iVar1 > 0)
	{
		return true;
	}
	return false;
}

int func_333(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4, int iParam5, bool bParam6)
{
	int iVar0;
	iVar0 = __LIB_2__::func_214(iParam0, iParam1, sParam2, "", fParam3, 0, 0, 0, 1, fParam3 > 0f, bParam4, iParam5, 1, 1, 0, 0);
	if (iVar0 >= 0)
	{
		if (bParam6)
		{
			__LIB_1__::func_148(&uLocal_637);
			iLocal_702 = iParam0;
			func_260(0, 0);
		}
		return iVar0;
	}
	return -1;
}

void func_336(bool bParam0)
{
	if (!__LIB_13__::func_666(iLocal_579, 1048576) || __LIB_13__::func_666(iLocal_579, 16777216))
	{
		return;
	}
	if (bParam0 || (!__LIB_2__::func_1(iLocal_528[2], 0, 1) && !__LIB_0__::func_163(iLocal_528[2], 1313215416)))
	{
		__LIB_3__::func_465(__LIB_5__::func_729(__LIB_4__::func_81(Local_14.f_3)), 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
		func_28(&iLocal_579, 16777216, 0);
	}
}

Vector3 func_337()
{
	switch (iLocal_738)
	{
		case 9:
			switch (iLocal_737)
			{
				case 0:
					return -301.6397f, 782.3899f, 117.7477f;
				case 1:
					return -312.2f, 795.9f, 119f;
			}
			break;
		case 11:
			switch (iLocal_737)
			{
				case 0:
					return 1359.714f, -1377.673f, 78.44501f;
				case 1:
					return 1400.807f, -1307.331f, 75.98764f;
				case 2:
					return 1400.807f, -1307.331f, 75.98764f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_339()
{
	if (iLocal_406 > 0)
	{
		PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(iLocal_528[2], 0, 1);
		if (func_557())
		{
			__LIB_3__::func_890(11);
		}
	}
	switch (iLocal_406)
	{
		case 0:
			func_558();
			__LIB_3__::func_890(1);
			break;
		case 1:
			if (func_559() && __LIB_2__::func_227(0, 1, iLocal_528[2], 1))
			{
				__LIB_3__::func_890(2);
			}
			break;
		case 2:
			func_560();
			func_561();
			if (func_562())
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432 /* Float: -1f */, 0, -417894478, 1);
					func_563();
					__LIB_3__::func_890(5);
				}
			}
			else
			{
				if (PED::_0x9337183FDA2E9035(iLocal_528[2], iLocal_698))
				{
					PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 3, 2, 1);
					PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 4, 2, 1);
					__LIB_3__::func_890(3);
				}
				else if (PED::_0xA454D234E45BB6E5(iLocal_528[2], iLocal_698))
				{
					PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 3, 2, 1);
					PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 4, 2, 1);
					__LIB_3__::func_890(4);
				}
				if ((__LIB_1__::func_285(&uLocal_594, 7f) && !__LIB_2__::func_341(&(Local_407[2 /*21*/]))) && !__LIB_2__::func_364(iLocal_528[2], 0, 0, 0))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_GOODBYE", -1082130432 /* Float: -1f */, 0, -417894478, 1);
					func_565();
					__LIB_3__::func_890(10);
				}
			}
			break;
		case 3:
			func_560();
			func_561();
			if (func_562())
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432 /* Float: -1f */, 0, -417894478, 1);
					func_563();
					__LIB_3__::func_890(5);
				}
			}
			else if (!PED::_0x9337183FDA2E9035(iLocal_528[2], iLocal_698))
			{
				__LIB_1__::func_283(&uLocal_631, 0);
				if (__LIB_1__::func_285(&uLocal_631, 1f))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_GOODBYE", -1082130432 /* Float: -1f */, 0, -417894478, 1);
					func_565();
					__LIB_3__::func_890(10);
				}
			}
			break;
		case 4:
			func_560();
			func_561();
			if (func_562())
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432 /* Float: -1f */, 0, -417894478, 1);
					func_563();
					__LIB_3__::func_890(5);
				}
			}
			else if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_528[2], 1))
			{
				func_56();
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_528[2], Global_35, 2, 4096, -1082130432 /* Float: -1f */, -1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
				__LIB_2__::func_603(&(iLocal_528[2]), &(Local_407[2 /*21*/]), &Local_471, 1, 1);
				func_28(&iLocal_579, 1, 0);
			}
			break;
		case 5:
			func_561();
			func_336(1);
			if (!func_562())
			{
				if (PED::IS_PED_FLEEING(iLocal_528[2]))
				{
					PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
					func_28(&iLocal_579, 1, 0);
				}
				__LIB_3__::func_890(11);
			}
			break;
		case 10:
			func_561();
			if (func_566())
			{
				__LIB_3__::func_890(11);
			}
			else if (func_562())
			{
				if (__LIB_2__::func_227(0, 1, Global_35, 1))
				{
					func_333(iLocal_528[2], Global_35, "RE_FOOTR_VAL_V1_THANK_ROB_RESPONSE", -1082130432 /* Float: -1f */, 0, -417894478, 1);
					func_563();
					__LIB_3__::func_890(5);
				}
			}
			break;
		case 11:
			return 1;
	}
	return 0;
}

int func_340()
{
	int iVar0;
	iVar0 = -1;
	if (iLocal_406 > 0)
	{
		if (func_557())
		{
			__LIB_3__::func_890(11);
		}
	}
	switch (iLocal_406)
	{
		case 0:
			func_558();
			__LIB_3__::func_890(1);
			break;
		case 1:
			if (func_559() && __LIB_2__::func_227(0, 1, iLocal_528[2], 1))
			{
				__LIB_3__::func_890(7);
			}
			break;
		case 7:
			func_560();
			func_561();
			if (func_562())
			{
				func_563();
				__LIB_3__::func_890(5);
			}
			else if (PED::_0x9337183FDA2E9035(iLocal_528[2], iLocal_698))
			{
				PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 3, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 4, 2, 1);
				__LIB_1__::func_148(&uLocal_594);
				__LIB_3__::func_890(8);
			}
			else if (PED::_0xA454D234E45BB6E5(iLocal_528[2], iLocal_698))
			{
				PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 3, 2, 1);
				PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 4, 2, 1);
				__LIB_1__::func_148(&uLocal_594);
				__LIB_3__::func_890(9);
			}
			else if (__LIB_1__::func_285(&uLocal_594, 9f) && !__LIB_2__::func_364(iLocal_528[2], 0, 0, 0))
			{
				PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 3, 2, 1);
				func_333(Global_35, iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_POS_B", -1082130432 /* Float: -1f */, 1, -417894478, 1);
				func_565();
				__LIB_3__::func_890(10);
			}
			break;
		case 8:
			func_560();
			if (func_562())
			{
				func_563();
				__LIB_3__::func_890(5);
			}
			else if (!PED::_0x9337183FDA2E9035(iLocal_528[2], iLocal_698))
			{
				__LIB_0__::func_268(&uLocal_594, 2.5f);
				func_333(Global_35, iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_POS_B", -1082130432 /* Float: -1f */, 1, -417894478, 1);
				__LIB_3__::func_890(2);
			}
			break;
		case 9:
			func_56();
			if (func_562())
			{
				func_563();
				__LIB_3__::func_890(5);
			}
			else if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_528[2], 1))
			{
				func_56();
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_528[2], Global_35, 1, 4096, -1082130432 /* Float: -1f */, -1, 0);
				func_333(Global_35, iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_NEG_B", -1082130432 /* Float: -1f */, 1, -417894478, 1);
				PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
				__LIB_2__::func_603(&(iLocal_528[2]), &(Local_407[2 /*21*/]), &Local_471, 1, 1);
				func_28(&iLocal_579, 1, 0);
			}
			break;
		case 2:
			func_561();
			if (iVar0 == 1)
			{
			}
			else
			{
				func_560();
				if (func_562())
				{
					func_563();
					__LIB_3__::func_890(5);
				}
				else if (__LIB_1__::func_285(&uLocal_594, 5f) && !__LIB_2__::func_341(&(Local_407[2 /*21*/])))
				{
					func_565();
					__LIB_3__::func_890(10);
				}
				Jump @933; //curOff = 703
				func_561();
				func_336(1);
				if (!func_562())
				{
					PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
					func_28(&iLocal_579, 1, 0);
					__LIB_3__::func_890(11);
				}
				Jump @933; //curOff = 749
				if (iVar0 == 1)
				{
				}
				else
				{
					if (func_562())
					{
						func_563();
						__LIB_3__::func_890(5);
					}
					else if (func_566())
					{
						func_567();
						__LIB_3__::func_890(11);
					}
					else if (PED::_0x9337183FDA2E9035(iLocal_528[2], iLocal_698) || PED::_0xA454D234E45BB6E5(iLocal_528[2], iLocal_698))
					{
						PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 3, 2, 1);
						PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 4, 2, 1);
						PED::_0x20C5459379D75C1C(iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_POS");
						PED::_0xA3C53CDE922BC78B(iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_NEG");
						PED::_0x8AF46E5159A5B620(iLocal_528[2], 291934926);
						__LIB_1__::func_148(&uLocal_594);
						__LIB_3__::func_890(9);
					}
					Jump @933; //curOff = 923
					return 1;
				}
			}
			return 0;
			default:
				break;
	}
}

bool func_480(int iParam0)
{
	if (__LIB_2__::func_466(&(Local_471[iParam0 /*17*/]), 1, 0) && !__LIB_1__::func_489(&(Local_471[iParam0 /*17*/]), 13))
	{
		return true;
	}
	return false;
}

int func_482(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_482(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_498()
{
	if (func_677())
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(Local_322, "base_punch", 1))
		{
			func_27(0);
		}
	}
}

bool func_499()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (bLocal_546[iVar0])
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_500(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	func_678(iParam0, &iVar0, &iVar1, &iVar2);
	if (Local_14.f_98[iVar0] < 42f)
	{
		if (bLocal_551)
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_322, "PBL_PUNCH"))
			{
				sVar4 = "PBL_PUNCH2";
			}
			else
			{
				sVar4 = "PBL_PUNCH";
			}
			if (iParam0 <= 0)
			{
				iVar3 = 1808677283;
			}
			else
			{
				iVar3 = 291934926;
			}
			if (func_679(Local_322, sVar4))
			{
				if (func_296(iVar0, iVar1, func_510(iVar2), 42f, 0, iVar3, 0))
				{
					if (func_26(Local_322, sVar4, 1))
					{
						func_27(1);
						__LIB_1__::func_148(&uLocal_597);
						__LIB_1__::func_148(&uLocal_717);
						if (bParam1)
						{
							func_279();
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_501(int iParam0)
{
	iLocal_405 = iParam0;
}

bool func_503()
{
	float fVar0;
	if (!__LIB_2__::func_227(0, 1, Global_35, 1))
	{
		return false;
	}
	else if (iLocal_710 >= 2)
	{
		return true;
	}
	if (!__LIB_13__::func_666(iLocal_578, 128))
	{
		if (!__LIB_1__::func_285(&uLocal_723, 0.5f))
		{
			return false;
		}
		else if (PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 50f))
		{
			return true;
		}
	}
	if (__LIB_13__::func_666(iLocal_578, 128) && !__LIB_13__::func_666(iLocal_578, 256))
	{
		fVar0 = 7f;
	}
	else if (__LIB_13__::func_666(iLocal_578, 256))
	{
		fVar0 = 7f;
	}
	else
	{
		fVar0 = 7f;
	}
	if ((((__LIB_1__::func_285(&uLocal_723, fVar0) && __LIB_2__::func_227(-5f, 1, 0, 0)) && (!__LIB_0__::func_163(iLocal_528[1], joaat("SCRIPT_TASK_CONFRONT")) || Global_1935630.f_40 != 0)) && !__LIB_2__::func_341(&(Local_407[0 /*21*/]))) && !__LIB_2__::func_341(&(Local_407[1 /*21*/])))
	{
		if (PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 50f))
		{
			return true;
		}
	}
	return false;
}

void func_505(int iParam0)
{
	iLocal_401 = iParam0;
}

int func_506(float fParam0, float fParam1)
{
	if (fParam0 <= 20f)
	{
		if (fLocal_739 == -1f)
		{
			if (ENTITY::GET_ENTITY_SPEED(Global_35) >= 1.5f)
			{
				if (__LIB_0__::func_266(iLocal_528[1], __LIB_2__::func_114(Global_35, 3f), 10f, 1, 1))
				{
					return 1;
				}
			}
			else if (__LIB_0__::func_266(iLocal_528[1], __LIB_2__::func_114(Global_35, 2f), 10f, 1, 1))
			{
				return 1;
			}
			return 0;
		}
	}
	if (fParam0 < (fLocal_739 + 1f))
	{
		if (fParam0 > (fParam1 - 0.2f) || ENTITY::GET_ENTITY_SPEED(Global_35) < 0.7f)
		{
			return 1;
		}
	}
	return 0;
}

int func_507()
{
	if (fLocal_593 > 10f)
	{
		return 0;
	}
	if (!func_514())
	{
		return 0;
	}
	if (Local_14.f_98[1] < 10f)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_528[1], Global_35, 17))
		{
			if (func_682(iLocal_528[0], &(Local_14.f_5), &iLocal_716, 0) || func_682(iLocal_528[1], &(Local_14.f_5), &iLocal_716, 0))
			{
				__LIB_1__::func_283(&uLocal_600, 0);
			}
			if (__LIB_1__::func_285(&uLocal_600, 0.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_508()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	__LIB_2__::func_45(0, Global_35, -1);
	__LIB_1__::func_474(iLocal_528[1], &iVar0, 0, 0, 1, 1);
}

bool func_509(bool bParam0)
{
	vector3 vVar0;
	float fVar3;
	if (bParam0)
	{
		if (__LIB_0__::func_163(iLocal_528[1], -2017877118) || ENTITY::_0x0B7CB1300CBFE19C(iLocal_528[1], 1))
		{
			return false;
		}
	}
	if (!__LIB_0__::func_86(vLocal_650))
	{
		vVar0 = { vLocal_650 };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_528[1], true, false) };
	}
	fVar3 = BUILTIN::VDIST(vVar0, Global_36);
	if (!__LIB_1__::func_285(&uLocal_723, 4f))
	{
		return false;
	}
	if (fVar3 > (fLocal_739 + 1.25f))
	{
		return true;
	}
	if (!PED::IS_PED_FACING_PED(Global_35, iLocal_528[1], 80f))
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.5f)
		{
			return true;
		}
	}
	return false;
}

char* func_510(int iParam0)
{
	switch (iLocal_523)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE_FOOTR_VAL_V1_FAR_01";
				case 1:
					return "RE_FOOTR_VAL_V1_FAR_02";
				case 2:
					return "RE_FOOTR_VAL_V1_FAR_03";
				case 7:
					return "RE_FOOTR_VAL_V1_BEAT_PED_A";
				case 8:
					return "RE_FOOTR_VAL_V1_BEAT_PED_B";
				case 9:
					return "RE_FOOTR_VAL_V1_BEAT_PED_C";
				case 10:
					return "RE_FOOTR_VAL_V1_KILLED";
				case 11:
					return "RE_FOOTR_VAL_V1_WARN_01";
				case 12:
					if (bLocal_653)
					{
						return "RE_FOOTR_VAL_V2_WARN_FEUD_A";
					}
					else
					{
						return "RE_FOOTR_VAL_V1_WARN_02";
					}
					break;
				case 13:
					return "RE_FOOTR_VAL_V1_WARN_03";
				case 15:
					return "RE_FOOTR_VAL_V1_THUG1_AGGRO";
				case 16:
					return "RE_FOOTR_VAL_V1_THUG2_AGGRO";
				case 17:
					return "RE_FOOTR_VAL_V1_THANK";
				case 14:
					return "RE_FOOTR_VAL_V1_DEPART_01";
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE_FOOTR_RHD_V1_FAR_01";
				case 1:
					return "RE_FOOTR_RHD_V1_FAR_02";
				case 2:
					return "RE_FOOTR_RHD_V1_FAR_03";
				case 3:
					return "RE_FOOTR_RHD_V1_FAR_04";
				case 4:
					return "RE_FOOTR_RHD_V1_FAR_05";
				case 5:
					return "RE_FOOTR_RHD_V1_FAR_06";
				case 6:
					return "RE_FOOTR_RHD_V1_THROW";
				case 7:
					return "RE_FOOTR_RHD_V1_BEAT_PED_A";
				case 8:
					return "RE_FOOTR_RHD_V1_BEAT_PED_B";
				case 9:
					return "RE_FOOTR_RHD_V1_BEAT_PED_C";
				case 10:
					return "RE_FOOTR_RHD_V1_KILLED";
				case 11:
					if (bLocal_653)
					{
						return "RE_FOOTR_RHD_V2_WARN_FEUD";
					}
					else
					{
						return "RE_FOOTR_RHD_V1_WARN_01";
					}
					break;
				case 12:
					return "RE_FOOTR_RHD_V1_WARN_02";
				case 13:
					return "RE_FOOTR_RHD_V1_WARN_03";
				case 15:
					return "RE_FOOTR_RHD_V1_THUG1_AGGRO";
				case 16:
					return "RE_FOOTR_RHD_V1_THUG2_AGGRO";
				case 17:
					return "RE_FOOTR_RHD_V1_THANK";
				case 14:
					return "HEADS_UP_CONFRONT";
			}
			break;
	}
	return "MISSING";
}

void func_511()
{
	if (!bLocal_649)
	{
		if (((!__LIB_0__::func_163(iLocal_528[1], joaat("SCRIPT_TASK_CONFRONT")) && __LIB_2__::func_227(-4f, 1, iLocal_528[1], 0)) && !__LIB_2__::func_341(&(Local_407[0 /*21*/]))) && !__LIB_2__::func_341(&(Local_407[1 /*21*/])))
		{
			if (Local_14.f_98[1] < 4f)
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					vLocal_650 = { ENTITY::GET_ENTITY_COORDS(iLocal_528[1], true, false) };
					TASK::TASK_CONFRONT(iLocal_528[1], Global_35, 2);
					__LIB_1__::func_148(&uLocal_723);
					if (iLocal_646 != 0)
					{
						if (!__LIB_13__::func_666(iLocal_578, 256))
						{
							func_296(1, Global_35, func_510(12), -1082130432 /* Float: -1f */, 1, 1744022339, 1);
							func_28(&iLocal_578, 256, 0);
						}
					}
					bLocal_649 = true;
				}
			}
		}
	}
}

bool func_512(bool bParam0)
{
	int iVar0;
	if (bParam0)
	{
		iVar0 = iLocal_528[0];
	}
	else
	{
		iVar0 = iLocal_528[2];
	}
	switch (iLocal_742)
	{
		case 0:
			if (!__LIB_0__::func_86(vLocal_650) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_528[1], vLocal_650, 1f, 1f, 3f, false, true, 0))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_528[1], vLocal_650, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
				func_513(1);
			}
			else
			{
				__LIB_2__::func_45(iLocal_528[1], iVar0, 2000);
				func_513(2);
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_528[1], vLocal_650, 1f, 1f, 3f, false, true, 0))
			{
				__LIB_2__::func_45(iLocal_528[1], iVar0, 2000);
				func_513(2);
			}
			else if (!__LIB_0__::func_163(iLocal_528[1], 2106541073))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_528[1], vLocal_650, 1f, 20000, 1193033728 /* Float: 40000f */, 1056964608 /* Float: 0.5f */, 0);
			}
			break;
		case 2:
			if (PED::IS_PED_FACING_PED(iLocal_528[1], iVar0, 20f))
			{
				TASK::TASK_PLAY_ANIM(iLocal_528[1], Local_305[7 /*2*/], Local_305[7 /*2*/].f_1, 2f, -2f, -1, 1, 0f, false, 0, false, 0, false);
				func_513(4);
			}
			else if (!__LIB_0__::func_163(iLocal_528[1], -875674219))
			{
				__LIB_2__::func_45(iLocal_528[1], iVar0, 2000);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_513(int iParam0)
{
	iLocal_742 = iParam0;
}

bool func_514()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (bLocal_548[iVar0])
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_515(int iParam0, var uParam1, int iParam2, float fParam3, float fParam4, bool bParam5, float fParam6, float fParam7)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < *iParam0)
	{
		if (__LIB_3__::func_892(iVar2, bParam5))
		{
			if (__LIB_8__::func_256((*iParam0)[iVar2], uParam1, iParam2, &bVar1, fParam3, fParam4, fParam6, 1, fParam7, 1))
			{
				return true;
			}
			else if (bVar1)
			{
				bVar0 = true;
			}
		}
		iVar2++;
	}
	if (!bVar0)
	{
		*iParam2 = 0f;
	}
	return false;
}

void func_517()
{
	if (!ANIMSCENE::_0x8D81E7824B7753F7(Local_322, "action", 1) && !ANIMSCENE::_0x8D81E7824B7753F7(Local_322, "Exit", 1))
	{
		return;
	}
	if (!__LIB_13__::func_666(iLocal_578, 8))
	{
		if (__LIB_3__::func_496(iLocal_528[2], "bActionDialogue1", 1067030938 /* Float: 1.2f */))
		{
			func_28(&iLocal_578, 8, 0);
		}
	}
	else if (!__LIB_13__::func_666(iLocal_578, 16))
	{
		if (__LIB_3__::func_496(iLocal_528[2], "bActionDialogue2", 1067030938 /* Float: 1.2f */))
		{
			func_28(&iLocal_578, 16, 0);
		}
	}
	else if (!__LIB_13__::func_666(iLocal_578, 32))
	{
		if (__LIB_3__::func_496(iLocal_528[2], "bActionDialogue3", 1067030938 /* Float: 1.2f */))
		{
			func_28(&iLocal_578, 32, 0);
		}
	}
	if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
	{
		if (((__LIB_3__::func_496(iLocal_528[0], "PunchOne", 1067030938 /* Float: 1.2f */) || __LIB_3__::func_496(iLocal_528[0], "PunchTwo", 1067030938 /* Float: 1.2f */)) || __LIB_3__::func_496(iLocal_528[0], "PunchThree", 1067030938 /* Float: 1.2f */)) || __LIB_3__::func_496(iLocal_528[2], "bKOPunchHit", 1067030938 /* Float: 1.2f */))
		{
			func_279();
		}
		if (func_323())
		{
			__LIB_0__::func_325(&(uLocal_536[2]));
			__LIB_2__::func_930(iLocal_528[2], 0);
			__LIB_2__::func_482(&(Local_471[0 /*17*/]), 1, 1);
			__LIB_2__::func_360(&(Local_471[1 /*17*/]), __LIB_2__::func_460(10));
			__LIB_1__::func_864(iLocal_528[2], 1, 1);
			func_17(1094713344 /* Float: 12f */);
			if (__LIB_0__::func_163(iLocal_528[1], joaat("SCRIPT_TASK_CONFRONT")))
			{
				PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
				TASK::CLEAR_PED_TASKS(iLocal_528[1], true, false);
			}
			if ((fLocal_593 < 30f && Local_14.f_48) && !__LIB_13__::func_666(iLocal_579, 1048576))
			{
				__LIB_3__::func_465(2, 0, 0, "RE_HONOR_WITNESSED_CRIME", 0, 0, 1065353216 /* Float: 1f */, 0);
			}
		}
	}
}

void func_518(int iParam0)
{
	iLocal_402 = iParam0;
}

void func_519()
{
	var uVar0;
	if (!bLocal_747)
	{
		if (__LIB_2__::func_448(iLocal_528[0], joaat("BBLOCKPEDSPEECH"), "bBlockPedSpeech", uVar0, 1.5f, 1))
		{
			if (!__LIB_2__::func_227(-5f, 1, 0, 0) && !__LIB_2__::func_227(0f, 1, iLocal_528[0], 1))
			{
				AUDIO::STOP_PED_SPEAKING(iLocal_528[0], true);
				bLocal_747 = true;
			}
		}
	}
	else if (__LIB_2__::func_448(iLocal_528[0], joaat("BALLOWPEDSPEECH"), "bAllowPedSpeech", uVar0, 1.5f, 1))
	{
		AUDIO::STOP_PED_SPEAKING(iLocal_528[0], false);
	}
}

bool func_520()
{
	return ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_322) > 0.8f;
}

void func_521()
{
	var uVar0;
	if (__LIB_2__::func_448(iLocal_528[0], joaat("BBREAKOUTSTANDING"), "bBreakoutStanding", uVar0, 1.6f, 1) && PED::IS_PED_FACING_PED(iLocal_528[1], Global_35, 30f))
	{
		ANIMSCENE::_0x99B2A2E3655DEAF1(iLocal_528[0], "ClosestScenario");
		__LIB_2__::func_357(iLocal_528[0], Global_36, 6, 0, 1);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_528[0], Global_35, -1, -1f, -1f, -1f);
	}
}

bool func_522()
{
	float fVar0;
	float fVar1;
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		return false;
	}
	fVar0 = (__LIB_3__::func_249(&Local_14, __LIB_3__::func_988()) - 10f);
	fVar1 = BUILTIN::VDIST(Global_36, Local_14.f_51);
	if (fVar1 > fVar0)
	{
		return false;
	}
	if (fVar1 < 10f)
	{
		if (!__LIB_3__::func_291(Global_35, 1))
		{
			return true;
		}
	}
	if (!func_499() || !func_514())
	{
		return false;
	}
	if (func_685(iLocal_528[1], fVar0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || func_685(iLocal_528[2], fVar0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
	{
		if (iLocal_748 == 0)
		{
			iLocal_748 = __LIB_0__::func_485();
			return false;
		}
		else if ((__LIB_0__::func_485() - iLocal_748) > 2000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	iLocal_748 = 0;
	return false;
}

bool func_523()
{
	if (__LIB_2__::func_341(&(Local_407[1 /*21*/])))
	{
		return false;
	}
	if (!__LIB_13__::func_666(iLocal_579, 131072) && (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_528[1], 1)))
	{
		if (iLocal_702 == Global_35)
		{
			if (__LIB_1__::func_285(&uLocal_723, 2f))
			{
				return true;
			}
		}
		else if (__LIB_1__::func_285(&uLocal_723, 6f))
		{
			return true;
		}
	}
	else if (iLocal_702 == Global_35)
	{
		if (__LIB_1__::func_285(&uLocal_723, 2f))
		{
			return true;
		}
	}
	else if (__LIB_1__::func_285(&uLocal_723, 4f))
	{
		return true;
	}
	return false;
}

bool func_524()
{
	var uVar0;
	if (!__LIB_2__::func_227(0, 1, Global_35, 1))
	{
		return false;
	}
	if (__LIB_13__::func_666(iLocal_579, 262144))
	{
		return true;
	}
	if (__LIB_2__::func_448(iLocal_528[0], joaat("BCANTBREAKOUT"), "bCantBreakout", uVar0, 1f, 1) && __LIB_2__::func_1(iLocal_528[2], 0, 1))
	{
		return false;
	}
	if (!func_53(2, 8))
	{
		return false;
	}
	return true;
}

int func_526()
{
	if (iLocal_401 >= 5)
	{
		return 1;
	}
	return 0;
}

bool func_528()
{
	if (Local_14.f_98[0] < 6f || Local_14.f_98[1] < 6f)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_528[0], Global_35, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_528[1], Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_531(int iParam0, var uParam1, var uParam2)
{
	if (__LIB_2__::func_341(uParam2))
	{
		return 1;
	}
	if (__LIB_3__::func_383(iParam0, &uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_541()
{
	if (__LIB_2__::func_443())
	{
		return false;
	}
	if (func_705(&uLocal_589, Local_14.f_5.f_16, &iLocal_528, &(Local_14.f_98), 0, 1, 15f))
	{
		return true;
	}
	return false;
}

void func_542(var uParam0, int iParam1)
{
	if (!uParam0->f_8)
	{
		if (__LIB_1__::func_285(&(uParam0->f_4), uParam0->f_7))
		{
			if (PED::IS_PED_DEFENSIVE_AREA_ACTIVE(iLocal_528[iParam1], false))
			{
				__LIB_1__::func_733(iLocal_528[iParam1]);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_528[iParam1], 2);
				PED::SET_PED_COMBAT_RANGE(iLocal_528[iParam1], 0);
				uParam0->f_8 = 1;
			}
		}
	}
}

int func_543(var uParam0)
{
	if (*uParam0 >= 0)
	{
		AUDIO::_0xDC93F0948F2C28F4(*uParam0);
		*uParam0 = -1;
		return 1;
	}
	return 0;
}

int func_544(int iParam0)
{
	return iLocal_729[iParam0];
}

void func_546()
{
	if (!PED::DOES_GROUP_EXIST(iLocal_701))
	{
		iLocal_701 = PED::CREATE_GROUP(0);
	}
	if (PED::DOES_GROUP_EXIST(iLocal_701))
	{
		__LIB_3__::func_506(&(iLocal_528[0]), &iLocal_701, 1, 1, 1, 1, 0);
		__LIB_3__::func_506(&(iLocal_528[1]), &iLocal_701, 0, 1, 1, 1, 0);
		PED::SET_GROUP_FORMATION(iLocal_701, 3);
		PED::SET_GROUP_FORMATION_SPACING(iLocal_701, 2f, 1f, 2f);
		PED::_0xB05CC690CDE8A4A9(iLocal_701, 1.5f);
		PED::_0x97C475212B327666(iLocal_701, 1);
		PED::_0x40C3524D4ED83554(iLocal_701, 1);
	}
}

bool func_557()
{
	if (__LIB_3__::func_453(iLocal_528[2], 0, &(Local_14.f_5), &iLocal_716, 1, Local_14.f_98[2]))
	{
		if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
		{
			if (func_562())
			{
				return false;
			}
		}
		if (__LIB_3__::func_894(iLocal_716))
		{
			func_336(1);
		}
		if (__LIB_2__::func_1(iLocal_528[2], 0, 1))
		{
			switch (iLocal_523)
			{
				case 1:
					break;
				case 2:
					if (__LIB_3__::func_894(iLocal_716))
					{
						func_296(2, Global_35, "RE_FOOTR_RHD_V1_AGGRO", -1082130432 /* Float: -1f */, 1, 1808677283, 1);
					}
					break;
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_528[2], Global_35, 3, 4096, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
			__LIB_2__::func_603(&(iLocal_528[2]), &(Local_407[2 /*21*/]), &Local_471, 1, 1);
		}
		func_28(&iLocal_579, 1, 0);
		if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
		{
			__LIB_0__::func_325(&(uLocal_536[2]));
		}
		return true;
	}
	return false;
}

void func_558()
{
	int iVar0;
	PED::_0x89F5E7ADECCCB49C(iLocal_528[2], "INJURED_GENERAL");
	PED::_0x16F798A05BB9E3B5(iLocal_528[2]);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_STAND_STILL(0, 100);
	__LIB_1__::func_474(iLocal_528[2], &iVar0, 0.5f, 0, 1, 1);
	__LIB_1__::func_283(&uLocal_594, 0);
	func_715();
	func_260(0, 0);
	__LIB_2__::func_251(&(Local_14.f_5), 0);
	__LIB_2__::func_182(&(Local_14.f_5), 1);
	__LIB_2__::func_105(&(Local_14.f_5), 0);
	__LIB_2__::func_180(&(Local_14.f_5), 0);
	__LIB_2__::func_104(&(Local_14.f_5), 0);
}

bool func_559()
{
	int iVar0;
	float fVar1;
	iVar0 = -1;
	if (__LIB_13__::func_666(iLocal_578, 1024))
	{
		if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
		{
			__LIB_0__::func_325(&(uLocal_536[2]));
		}
		func_561();
		return true;
	}
	if (__LIB_2__::func_1(iLocal_528[2], 8, 1))
	{
		if (!__LIB_13__::func_666(iLocal_579, 33554432))
		{
			iVar0 = func_716();
			if (Local_407[2 /*21*/].f_1 != -1)
			{
				__LIB_1__::func_283(&uLocal_625, 0);
				func_265(0, 0);
				func_28(&iLocal_579, 33554432, 0);
			}
		}
		func_717();
		fVar1 = 3f;
		if (func_53(2, 8))
		{
			fVar1 = 7f;
		}
		if (__LIB_1__::func_285(&uLocal_594, fVar1))
		{
			if (!__LIB_13__::func_666(iLocal_579, 64))
			{
				PED::_0xDE7B2B4144906CDF(-1073596206, iLocal_528[2]);
				func_718();
				func_28(&iLocal_579, 64, 0);
			}
			func_560();
			if (__LIB_13__::func_666(iLocal_579, 33554432) && !__LIB_1__::func_285(&uLocal_625, 3f))
			{
			}
			else if (func_296(2, Global_35, func_510(17), 8f, 1, -417894478, 1))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 252, false);
				MAP::_TRIGGER_SONAR_BLIP_2(1359446981, iLocal_528[2]);
				__LIB_2__::func_603(&(iLocal_528[2]), &(Local_407[2 /*21*/]), &Local_471, 1, 1);
				__LIB_2__::func_105(&(Local_14.f_5), 1);
				__LIB_2__::func_180(&(Local_14.f_5), 1);
				__LIB_2__::func_104(&(Local_14.f_5), 1);
				__LIB_1__::func_148(&uLocal_594);
				PLAYER::_0x3A8611BD7BDE84F7(iLocal_698, 15f);
				PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 3, 2, 0);
				PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 7, 2, 0);
				PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 4, 2, 0);
				switch (iLocal_523)
				{
					case 2:
						PED::_0x1E017404784AA6A3(iLocal_528[2], joaat("VCTM_RHD_V1"));
						break;
					case 1:
						PED::_0x1E017404784AA6A3(iLocal_528[2], joaat("VCTM_VAL_V1"));
						break;
				}
				TASK::TASK_PLAY_ANIM(iLocal_528[2], Local_305[5 /*2*/], Local_305[5 /*2*/].f_1, 8f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
				func_28(&iLocal_578, 1024, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 252, true);
				return true;
			}
		}
	}
	return false;
}

void func_560()
{
	__LIB_2__::func_961(&uLocal_385, iLocal_528[2]);
	__LIB_2__::func_966(Global_35, iLocal_528[2], 1, 1, 1, 0, 0, 0, 0, 1, 1);
	__LIB_2__::func_966(iLocal_528[2], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
}

void func_561()
{
	if (__LIB_2__::func_364(iLocal_528[2], 0, 0, 0) || Local_14.f_98[2] < 15f)
	{
		switch (iLocal_523)
		{
			case 1:
				if (!__LIB_13__::func_666(iLocal_579, 1073741824 /* Float: 2f */))
				{
					PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_VAL_V1_THANK_RPOS");
					PLAYER::_0x98CD760DE43B612E(iLocal_698, "RE_FOOTR_VAL_V1_THANK_RNEG");
					PED::_0x20C5459379D75C1C(iLocal_528[2], "RE_FOOTR_VAL_V1_THANK_POS");
					PED::_0xA3C53CDE922BC78B(iLocal_528[2], "RE_FOOTR_VAL_V1_THANK_NEG");
				}
				else
				{
					PLAYER::_0xC6366A585659D15C(iLocal_698, 0);
					PLAYER::_0x98CD760DE43B612E(iLocal_698, 0);
					PLAYER::_0x628E742FE1F79C4A(iLocal_698, 0);
					PED::_0xE37ACEE15AC50C7E(iLocal_528[2], 0);
					PED::_0x20C5459379D75C1C(iLocal_528[2], 0);
				}
				break;
			case 2:
				if (!__LIB_13__::func_666(iLocal_579, 1073741824 /* Float: 2f */))
				{
					PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_RHD_V1_POST_ILO_POS");
					PLAYER::_0x98CD760DE43B612E(iLocal_698, "RE_FOOTR_RHD_V1_POST_ILO_NEG");
					PED::_0x20C5459379D75C1C(iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_POS");
					PED::_0xA3C53CDE922BC78B(iLocal_528[2], "RE_FOOTR_RHD_V1_POST_ILO_NEG");
				}
				else
				{
					PLAYER::_0xC6366A585659D15C(iLocal_698, 0);
					PLAYER::_0x98CD760DE43B612E(iLocal_698, 0);
					PLAYER::_0x628E742FE1F79C4A(iLocal_698, 0);
					PED::_0xE37ACEE15AC50C7E(iLocal_528[2], 0);
					PED::_0x20C5459379D75C1C(iLocal_528[2], 0);
				}
				break;
		}
		PLAYER::_0x628E742FE1F79C4A(iLocal_698, 291934926);
		func_722();
		PED::SET_PED_RESET_FLAG(iLocal_528[2], 49, true);
		PED::SET_PED_RESET_FLAG(iLocal_528[2], 177, true);
	}
	else
	{
		PLAYER::_0xC6366A585659D15C(iLocal_698, 0);
		PLAYER::_0x98CD760DE43B612E(iLocal_698, 0);
		PLAYER::_0x628E742FE1F79C4A(iLocal_698, 0);
		func_57();
	}
}

bool func_562()
{
	if (PED::_0xE33F98BD76490ABC(iLocal_528[2], iLocal_698, 0) || PED::_0xD0B7AEB56229D317(Global_35) == iLocal_528[2])
	{
		return true;
	}
	return false;
}

void func_563()
{
	PED::_0x58F7DB5BD8FA2288(iLocal_528[2]);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_528[2], false);
	func_56();
	func_28(&iLocal_579, 1073741824 /* Float: 2f */, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_528[2], 1024, true);
}

void func_565()
{
	func_56();
	vLocal_640 = { func_337() };
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_528[2], vLocal_640, 1f, -1, 0.25f, 0, 40000f);
}

bool func_566()
{
	if (MAP::DOES_BLIP_EXIST(uLocal_536[2]))
	{
		__LIB_0__::func_325(&(uLocal_536[2]));
	}
	if (__LIB_0__::func_94(iLocal_528[2], vLocal_640, 0) < 5f)
	{
		return true;
	}
	return false;
}

void func_567()
{
	switch (__LIB_1__::func_898())
	{
		case 9:
			TASK::TASK_WANDER_STANDARD(iLocal_528[2], 40000f, 0);
			break;
		case 11:
			TASK::TASK_WANDER_STANDARD(iLocal_528[2], 40000f, 0);
			break;
	}
}

bool func_677()
{
	if (bLocal_550)
	{
		return ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_322, "BASE_BOOL");
	}
	return false;
}

void func_678(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_523 == 1)
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			else
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			*iParam3 = 0;
			break;
		case 1:
			if (iLocal_523 == 1)
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			else
			{
				*iParam1 = 2;
				*iParam2 = iLocal_528[0];
			}
			*iParam3 = 1;
			break;
		case 2:
			if (iLocal_523 == 1)
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			else
			{
				*iParam1 = 0;
				*iParam2 = iLocal_528[2];
			}
			*iParam3 = 2;
			break;
		case 3:
			*iParam1 = 2;
			*iParam2 = iLocal_528[0];
			*iParam3 = 3;
			break;
		case 4:
			*iParam1 = 0;
			*iParam2 = iLocal_528[2];
			*iParam3 = 4;
			break;
		case 5:
			*iParam1 = 2;
			*iParam2 = iLocal_528[0];
			*iParam3 = 5;
			break;
	}
}

bool func_679(int iParam0, char* sParam1)
{
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(iParam0, true, false))
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam1))
		{
			return true;
		}
	}
	return false;
}

int func_682(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > iParam1->f_5)
	{
		__LIB_2__::func_521(iParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		iParam1->f_12 = fParam3;
	}
	else
	{
		iParam1->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!iParam1->f_1 & 2 != 0)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 0, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 2 != 0)
		{
			if (iParam1->f_12 < 4f)
			{
				if (__LIB_2__::func_82(iParam1, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *iParam1 & 128 != 0, 1, *iParam1 & 256 != 0) && __LIB_2__::func_83(iParam1, iParam0)) && __LIB_2__::func_197(iParam1, iParam0))
					{
						__LIB_0__::func_11();
						*iParam2 = 2;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*iParam1 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*iParam2 = 2;
								__LIB_2__::func_196(iParam0, iParam1, *iParam2);
								return 1;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_41 != 0)
			{
				if (Global_1935630.f_40 == 0)
				{
					if (*iParam1 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *iParam2);
							return 1;
						}
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*iParam1 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*iParam2 = 2;
							__LIB_2__::func_196(iParam0, iParam1, *iParam2);
							return 1;
						}
					}
				}
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_2__::func_81(iParam1, 1065353216 /* Float: 1f */))
			{
				if (!iParam1->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_262(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 4;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
				if (!iParam1->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_263(Global_35, iParam0, iParam1))
					{
						__LIB_0__::func_11();
						*iParam2 = 256;
						__LIB_2__::func_196(iParam0, iParam1, *iParam2);
						return 1;
					}
				}
			}
		}
		if (!iParam1->f_1 & 131072 != 0)
		{
			if (__LIB_3__::func_488(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 131072;
				__LIB_2__::func_196(iParam0, iParam1, *iParam2);
				return 1;
			}
		}
		if (*iParam1 & 4 != 0)
		{
			if (__LIB_2__::func_622(iParam0, iParam1))
			{
				__LIB_0__::func_11();
				*iParam2 = 262144;
				__LIB_2__::func_196(iParam0, iParam1, *iParam2);
				return 1;
			}
		}
	}
	return 0;
}

int func_685(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	float fVar0;
	if (fParam3 > 0f)
	{
		fVar0 = fParam3;
	}
	else
	{
		fVar0 = __LIB_0__::func_94(iParam0, Global_36, 1);
	}
	if (fParam2 > 0f)
	{
		if (fVar0 < fParam2)
		{
			return 1;
		}
	}
	if (fVar0 < fParam1)
	{
		if (PED::_0x5102307CE88798EB(iParam0))
		{
			if (fParam4 > 0f)
			{
				if (PED::_0x164CECC59E70DF86(iParam0, fParam4))
				{
					return 1;
				}
			}
			else if (PED::IS_TRACKED_PED_VISIBLE(iParam0))
			{
				return 1;
			}
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_705(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, float fParam6)
{
	bool bVar0;
	int iVar1[6];
	int iVar8[6];
	int iVar15;
	float fVar16;
	float fVar17;
	vector3 vVar18;
	int iVar21;
	bool bVar22;
	float fVar23;
	bool bVar24;
	bool bVar25;
	if (__LIB_0__::func_27(uParam0->f_3, 16))
	{
		return true;
	}
	bVar0 = false;
	if (PED::_0x285D36C5C72B0569(Global_35) < 1f || (__LIB_0__::func_154(Global_1935630.f_44) && WEAPON::_0x705BE297EEBDB95D(Global_1935630.f_44)))
	{
		bVar0 = true;
	}
	switch (iParam1)
	{
		case 1:
		case 4:
		case 8:
		case 16:
		case 64:
		case 4096:
			bVar0 = true;
			break;
	}
	__LIB_3__::func_470(uParam0, iParam1);
	__LIB_1__::func_283(uParam0, 0);
	if (iParam5 < iParam4)
	{
		iParam5 = (*iParam2 - 1);
	}
	fVar16 = Global_36.f_2;
	if ((((((PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 8000) || WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_UNARMED"), 8000)) || WEAPON::_0x9E2D5D6BC97A5F1E(Global_35, joaat("WEAPON_MELEE_KNIFE"), 8000)) || PED::_0x3BDFCF25B58B0415(Global_35)) || PED::_0x0E99E3BF11BB6367(Global_35)) || __LIB_2__::func_1(PED::GET_PEDS_JACKER(Global_35), 0, 1)) || PED::GET_JACK_TARGET(Global_35) != 0)
	{
		__LIB_1__::func_148(uParam0);
	}
	iVar21 = 1;
	bVar22 = __LIB_3__::func_471();
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (__LIB_2__::func_1((*iParam2)[iVar15], 0, 0))
		{
			if (PED::_GET_LASSO_TARGET(Global_35) == (*iParam2)[iVar15] || PED::_IS_PED_HOGTIED((*iParam2)[iVar15]))
			{
				bVar0 = true;
			}
			fVar23 = __LIB_0__::func_94((*iParam2)[iVar15], Global_36, 1);
			if (fVar23 >= (10f + fParam6))
			{
				iVar1[iVar15] = 1;
			}
			vVar18 = { ENTITY::GET_ENTITY_COORDS((*iParam2)[iVar15], true, false) };
			fVar17 = vVar18.z;
			if (!bVar22 && MISC::ABSF((fVar17 - fVar16)) > 0.75f)
			{
				iVar8[iVar15] = 1;
			}
			iVar21 = 0;
		}
		else
		{
			iVar1[iVar15] = 1;
			iVar8[iVar15] = 1;
		}
		iVar15++;
	}
	if (iVar21 == 1)
	{
		return false;
	}
	bVar24 = true;
	bVar25 = true;
	iVar15 = iParam4;
	while (iVar15 <= iParam5)
	{
		if (!iVar1[iVar15])
		{
			bVar24 = false;
		}
		if (!iVar8[iVar15])
		{
			bVar25 = false;
		}
		iVar15++;
	}
	if (bVar24)
	{
		bVar0 = true;
	}
	if (bVar25)
	{
		bVar0 = true;
	}
	if ((__LIB_0__::func_163(Global_35, 1868526510) || __LIB_0__::func_163(Global_35, 1870523043)) || __LIB_0__::func_163(Global_35, -1794415470))
	{
		bVar0 = true;
	}
	if (__LIB_1__::func_285(uParam0, 8f))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (__LIB_0__::func_27(uParam0->f_3, 1) || !__LIB_0__::func_27(uParam0->f_3, 32))
		{
			func_813(iParam2, iParam4, iParam5, 1);
		}
		else
		{
			func_813(iParam2, iParam4, iParam5, 0);
			LAW::_0x362086B911657B1A(PLAYER::PLAYER_ID(), 1);
			__LIB_1__::func_336(&(uParam0->f_3), 4);
			__LIB_3__::func_473(uParam0);
		}
		__LIB_1__::func_336(&(uParam0->f_3), 16);
		return true;
	}
	return false;
}

void func_715()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	if (__LIB_2__::func_1(iLocal_528[2], 0, 0))
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 301, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 317, false);
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 297, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 406, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_528[2], 505, true);
		__LIB_2__::func_451(&(Local_407[2 /*21*/]), 0);
		__LIB_2__::func_480(&Local_471, 1, 1, 1, 0);
		switch (iLocal_523)
		{
			case 1:
				sVar0 = "RE_FOOTR_VAL_V1_THANK_CALLOUT";
				sVar1 = "RE_FOOTR_VAL_V1_THANK_RNEG";
				sVar2 = "";
				break;
			case 2:
				sVar0 = "RE_FOOTR_RHD_V1_THANK_CALLOUT";
				sVar1 = "RE_FOOTR_RHD_V1_POST_ILO_NEG";
				sVar2 = "";
				break;
		}
		__LIB_2__::func_602(&(Local_471[0 /*17*/]), __LIB_2__::func_460(7), sVar0, joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_471[1 /*17*/]), __LIB_2__::func_460(10), sVar1, joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_471[2 /*17*/]), __LIB_2__::func_460(12), sVar2, joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		func_265(1, 0);
		func_265(2, 0);
		PLAYER::_0x3A8611BD7BDE84F7(iLocal_698, 15f);
		PED::_0x24C82EF607105FAA(iLocal_528[2], joaat("TIMID"));
		PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 7, 2, 1);
		PLAYER::_0xA3DB37EDF9A74635(iLocal_698, iLocal_528[2], 4, 2, 1);
		PED::_0x06D26A96CA1BCA75(iLocal_528[2], 8, 1f, 0);
	}
}

int func_716()
{
	int iVar0;
	int iVar1;
	iVar0 = func_262(&(iLocal_528[2]), &(Local_407[2 /*21*/]), 15f, &Local_471, &(Local_14.f_192), 2f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
	iVar1 = iVar0;
	if (Local_407[2 /*21*/].f_1 != -1)
	{
		func_260(0, 0);
	}
	switch (iVar1)
	{
		case 1:
			if (iLocal_523 == 1)
			{
				PED::SET_PED_KEEP_TASK(iLocal_528[2], true);
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_528[2], Global_35, 3, 4096, -1082130432 /* Float: -1f */, -1, 0);
				func_28(&iLocal_579, 1, 0);
			}
			__LIB_2__::func_592(&Local_471, 1, 1);
			func_28(&iLocal_579, 32768, 0);
			break;
		case 0:
			__LIB_2__::func_592(&Local_471, 1, 1);
			func_28(&iLocal_579, 32768, 0);
			break;
	}
	return iVar1;
}

void func_717()
{
	if (__LIB_2__::func_364(iLocal_528[2], 0, 0, 0))
	{
		switch (iLocal_523)
		{
			case 1:
				PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_VAL_V1_CALLOUT");
				break;
			case 2:
				PLAYER::_0xC6366A585659D15C(iLocal_698, "RE_FOOTR_RHD_V1_CALLOUT");
				break;
		}
		PLAYER::_0x628E742FE1F79C4A(iLocal_698, 291934926);
	}
	else
	{
		PLAYER::_0xC6366A585659D15C(iLocal_698, 0);
		PLAYER::_0x98CD760DE43B612E(iLocal_698, 0);
		PLAYER::_0x628E742FE1F79C4A(iLocal_698, 0);
	}
}

void func_718()
{
	__LIB_3__::func_895(&uLocal_660);
	__LIB_3__::func_887(Global_35, iLocal_528[2], &uLocal_660, 0f, 0f, 0f, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
	__LIB_3__::func_898(iLocal_528[2], Global_35, &uLocal_660, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	__LIB_1__::func_731(&uLocal_385);
}

void func_722()
{
	if (!bLocal_711)
	{
		switch (iLocal_523)
		{
			case 2:
				PED::_0x1E017404784AA6A3(Global_35, joaat("PLYR_RHD_V1"));
				break;
			case 1:
				PED::_0x1E017404784AA6A3(Global_35, joaat("PLYR_VAL_V1"));
				break;
		}
		bLocal_711 = true;
	}
}

void func_813(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	if (bParam3)
	{
		iVar0 = iParam1;
		while (iVar0 <= iParam2)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
			{
				PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 494, true);
				PED::SET_PED_CONFIG_FLAG((*iParam0)[iVar0], 6, false);
			}
			iVar0++;
		}
	}
}

