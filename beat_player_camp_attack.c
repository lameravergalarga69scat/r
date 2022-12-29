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
	vector3 vLocal_14 = { 0f, 0f, 0f };
	vector3 vLocal_17 = { 0f, 0f, 0f };
	vector3 vLocal_20 = { 0f, 0f, 0f };
	vector3 vLocal_23 = { 0f, 0f, 0f };
	char* sLocal_26[8] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	bool bLocal_35 = false;
	bool bLocal_36 = false;
	struct<193> Local_37 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_230 = 0;
	struct<32> Local_231[8];
	struct<2> Local_488[8];
	int iLocal_505 = 0;
	var uLocal_506 = 2;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = -1;
	var uLocal_517 = 1;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = -1;
	var uLocal_529 = 1;
	var uLocal_530 = 0;
	struct<7> Local_531 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	var uLocal_541 = 8;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
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
	var uLocal_606[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	var uLocal_617 = -1;
	var uLocal_618 = 0;
	var uLocal_619 = -1;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = -1;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 1073741824;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 1;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	struct<17> Local_637[2];
	int iLocal_672 = 0;
	var uLocal_673 = -1;
	var uLocal_674 = 0;
	var uLocal_675 = -1;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = -1;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 1073741824;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 1;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	struct<17> Local_693[2];
	vector3 vLocal_728 = { 0f, 0f, 0f };
	vector3 vLocal_731 = { 0f, 0f, 0f };
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
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
	var uLocal_777[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_786 = 0;
	char[] cLocal_787[8] = 0;
	bool bLocal_788 = false;
	bool bLocal_789 = false;
	bool bLocal_790 = false;
	bool bLocal_791 = false;
	bool bLocal_792 = false;
	bool bLocal_793 = false;
	bool bLocal_794 = false;
	bool bLocal_795 = false;
	var uLocal_796 = 0;
	bool bLocal_797 = false;
	bool bLocal_798 = false;
	bool bLocal_799 = false;
	float fLocal_800 = 0f;
	float fLocal_801 = 0f;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	var uLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	var uLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 1176256512;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = -1082130432;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	int iLocal_828 = 0;
	int iLocal_829 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	vLocal_728 = { 4f, -20f, 2f };
	vLocal_731 = { 0f, -16f, 2f };
	cLocal_787 = "TB";
	iLocal_829 = __LIB_2__::func_340(1, 0, 0);
	Local_37.f_3 = __LIB_0__::func_81(&uScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
	__LIB_4__::func_236(&Local_37, 1);
	__LIB_1__::func_403(&(Local_37.f_5), 0);
	__LIB_1__::func_413(&(Local_37.f_5), 0);
	__LIB_1__::func_398(&(Local_37.f_5), 1);
	__LIB_1__::func_406(&(Local_37.f_5), 1);
	__LIB_1__::func_399(&(Local_37.f_5), 1);
	__LIB_2__::func_828(&(Local_37.f_5), 1);
	__LIB_1__::func_402(&(Local_37.f_5), 1);
	__LIB_2__::func_595(&(Local_37.f_5), 20f);
	__LIB_2__::func_906(&(Local_37.f_5), 150);
	__LIB_2__::func_29(256);
	Local_37.f_184 = 0;
	while (true)
	{
		switch (iLocal_757)
		{
			case 0:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				}
				switch (iLocal_814)
				{
					case 0:
						if (func_15())
						{
							__LIB_17__::func_872();
							__LIB_0__::func_489(0, 0);
							iLocal_814++;
						}
						break;
					case 1:
						vLocal_17 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_HEADING(Global_35), -3f, 5f, 0f) };
						vLocal_14 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), ENTITY::GET_ENTITY_HEADING(Global_35), 0f, -5.5f, 0f) };
						iLocal_814 = (1 + iLocal_814);
						break;
					case 2:
						if (func_18())
						{
							func_19(46, &(Local_37.f_51), Local_37.f_161, 0, 0);
							func_20();
							__LIB_0__::func_568(Local_37.f_51, 20f, 0);
							__LIB_1__::func_148(&uLocal_771);
							iLocal_814 = (1 + iLocal_814);
						}
						break;
					case 3:
						iLocal_757 = 1;
						break;
				}
				break;
			case 1:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				}
				uLocal_796 = uLocal_796;
				func_23(&Local_37, &iLocal_817, &uLocal_815);
				func_24();
				__LIB_1__::func_148(&uLocal_771);
				iLocal_757 = 3;
				break;
			case 3:
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				}
				if (func_25())
				{
					iLocal_757 = 4;
				}
				break;
			case 4:
				func_26();
				if (!func_27(&Local_37, &uLocal_606, iLocal_505, 0, 1, 0, 1, 0))
				{
					func_3();
				}
				if (iLocal_505 == 0)
				{
					if (iLocal_756 < 6)
					{
						if (func_28())
						{
							iLocal_756 = 6;
						}
					}
				}
				if (func_29())
				{
					PED::SET_PED_RESET_FLAG(Global_35, 134, true);
					Local_37.f_50 = 1;
					func_3();
				}
				if (__LIB_3__::func_431(&Local_37, &uLocal_606, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					func_3();
				}
				break;
		}
		BUILTIN::WAIT(Local_37.f_158);
	}
}

void func_3()
{
	if ((Local_37.f_44 || Local_37.f_45) || Local_37.f_46)
	{
		switch (iLocal_539)
		{
			case 0:
				switch (iLocal_505)
				{
					case 0:
						__LIB_3__::func_461(46, 0, 1);
						break;
					case 1:
						__LIB_3__::func_461(46, 0, 2);
						break;
				}
				break;
			case 1:
				switch (iLocal_505)
				{
					case 0:
						__LIB_3__::func_461(46, 1, 1);
						break;
					case 1:
						__LIB_3__::func_461(46, 1, 2);
						break;
				}
				break;
		}
	}
	func_32();
	bLocal_788 = false;
	__LIB_1__::func_979(256);
	PED::SET_PED_RESET_FLAG(Global_35, 134, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
	if (__LIB_3__::func_657(46) == 1)
	{
		__LIB_2__::func_115(Local_37.f_3, 1, 0, 0, 0, 1, 0, 1);
	}
	else if (__LIB_3__::func_657(46) > 1)
	{
		if (__LIB_3__::func_564(46, 0) == 1 && iLocal_505 == 0)
		{
			__LIB_2__::func_115(Local_37.f_3, 1, 0, 0, 0, 5, 0, 1);
		}
		else
		{
			__LIB_2__::func_115(Local_37.f_3, 1, 0, 0, 0, 3, 0, 1);
		}
	}
	__LIB_2__::func_115(47, 1, 0, 0, 0, 3, 0, 1);
	if (Local_37.f_44 && !ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		switch (iLocal_817)
		{
			case 10:
				COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(__LIB_2__::func_31(1));
				break;
			case 12:
				COMPENDIUM::COMPENDIUM_GANG_AMBUSH_SURVIVED(__LIB_2__::func_31(3));
				break;
		}
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	func_38(&Local_37, &uLocal_606, &uLocal_777, iLocal_505, iLocal_817, uLocal_815, 0, 1, 0, 1);
	__LIB_3__::func_480(&uLocal_506);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_15()
{
	if (((PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@GENERIC@MALE_A@base", "base", 1))
		{
			iLocal_540 = 0;
			return true;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "MECH_DYNAMIC@WORLD_PLAYER_CAMP_SIT@MALE_A@BASE", "BASE", 1))
		{
			iLocal_540 = 0;
			return true;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "MECH_DYNAMIC@WORLD_PLAYER_CAMP_SQUAT@MALE_A@BASE", "BASE", 1))
		{
			iLocal_540 = 0;
			return true;
		}
	}
	return false;
}

bool func_18()
{
	switch (iLocal_755)
	{
		case 0:
			switch (iLocal_811)
			{
				case 0:
					if (__LIB_3__::func_308(&Local_37))
					{
						__LIB_1__::func_148(&uLocal_771);
						iLocal_811++;
					}
					break;
				case 1:
					if (__LIB_0__::func_265(&uLocal_771) > 2f)
					{
						func_48();
						func_49();
						func_50();
						iLocal_811++;
					}
					break;
				case 2:
					if (func_51())
					{
						iLocal_811++;
					}
					else if (!__LIB_0__::func_75(&uLocal_751))
					{
						__LIB_1__::func_148(&uLocal_751);
					}
					else if (__LIB_0__::func_265(&uLocal_751) > 3f)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					}
					else if (__LIB_0__::func_265(&uLocal_751) > 6f)
					{
						func_3();
					}
					break;
				case 3:
					func_53();
					func_54();
					func_55();
					func_56();
					func_57(&Local_637);
					func_57(&Local_693);
					iLocal_755 = 1;
					break;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_754, cLocal_787))
			{
				return false;
			}
			if (!func_59())
			{
				return false;
			}
			if (!func_60())
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_231))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_19(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	if (__LIB_1__::func_85(iParam0, 32))
	{
		if (func_63(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_64(Global_35, &(uParam1->f_12)) };
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

void func_20()
{
	__LIB_3__::func_426(&Local_37, &(Local_37.f_48), 46, &(Local_37.f_51.f_6));
	Local_37.f_45 = 1;
}

void func_23(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 12;
			*uParam2 = 0;
			break;
	}
}

void func_24()
{
	if (iLocal_505 == 0)
	{
		if (bLocal_35)
		{
			Local_231[0 /*32*/].f_6 = { vLocal_23 + Vector(0f, -7f, 0f) };
			Local_231[0 /*32*/].f_9 = 137.9453f;
			Local_231[1 /*32*/].f_6 = { vLocal_23 + Vector(0f, -8f, 0f) };
			Local_231[1 /*32*/].f_9 = 106.07f;
			Local_231[2 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 4f, -20f, 2f) };
			Local_231[2 /*32*/].f_9 = 59.0616f;
			Local_231[3 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, -16f, 2f) };
			Local_231[3 /*32*/].f_9 = 106.07f;
		}
		else
		{
			Local_231[0 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -10f, 0f, 0f) };
			Local_231[0 /*32*/].f_9 = 137.9453f;
			Local_231[1 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -9f, 0f, 0f) };
			Local_231[1 /*32*/].f_9 = 106.07f;
			Local_231[2 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 4f, -20f, 2f) };
			Local_231[2 /*32*/].f_9 = 59.0616f;
			Local_231[3 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, -16f, 2f) };
			Local_231[3 /*32*/].f_9 = 106.07f;
		}
	}
	else
	{
		Local_231[0 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 10f, -2f, 3f) };
		Local_231[0 /*32*/].f_9 = 137.9453f;
		Local_231[1 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, -10f, 3f) };
		Local_231[1 /*32*/].f_9 = 106.07f;
	}
}

bool func_25()
{
	switch (iLocal_828)
	{
		case 0:
			iLocal_828 = 1;
			iLocal_816 = MISC::GET_GAME_TIMER() + 12000;
			break;
		case 1:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_37), __LIB_3__::func_526(&Local_37), &Local_231, &uLocal_606, 0, 0, -1, 1))
			{
				iLocal_828 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_1(uLocal_606[0], 0, 1) && __LIB_2__::func_1(uLocal_606[1], 0, 1))
			{
				func_80();
				if (iLocal_539 == 0)
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_606[2], false);
					ENTITY::SET_ENTITY_VISIBLE(uLocal_606[3], false);
				}
				iLocal_828 = 3;
			}
			break;
		case 3:
			ENTITY::_0x9587913B9E772D29(uLocal_606[0], 0);
			ENTITY::_0x9587913B9E772D29(uLocal_606[1], 0);
			if (iLocal_505 == 0)
			{
				ENTITY::_0x9587913B9E772D29(uLocal_606[2], 0);
				ENTITY::_0x9587913B9E772D29(uLocal_606[3], 0);
			}
			func_81();
			iLocal_828 = 5;
			break;
		case 5:
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_606[0], "TaskCombat_Panic");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_606[1], "TaskCombat_Panic");
			if (PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_606[0], "TaskCombat_Panic") && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_606[1], "TaskCombat_Panic"))
			{
				__LIB_1__::func_148(&uLocal_774);
				iLocal_828 = 6;
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&uLocal_774) > 2f)
			{
				if (__LIB_2__::func_1(uLocal_606[0], 0, 1) && __LIB_2__::func_1(uLocal_606[1], 0, 1))
				{
					func_82();
					return true;
				}
			}
			break;
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_816)
	{
		func_3();
	}
	return false;
}

void func_26()
{
	if (!bLocal_799)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	}
	else
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_531, false))
	{
		fLocal_800 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_531);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	if (!bLocal_792)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("BREAKOUT_B")))
		{
			bLocal_792 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_606[0], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_606[1], 6, true);
	if (!Local_37.f_46)
	{
		PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 8, 0, 1);
	}
}

bool func_27(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_83(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_4__::func_230(&(uParam0->f_5));
			}
			__LIB_0__::func_7(&(uParam0->f_5), 16384);
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
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!__LIB_3__::func_490(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (__LIB_1__::func_85(uParam0->f_3, 128))
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[0]) && !PED::IS_PED_INJURED((*uParam1)[0])) && uParam0->f_3 != 49)
		{
			if (!VOLUME::_0xF6A8A652A6B186CD(VOLUME::_0xF6F5447D418DAA82((*uParam1)[0])))
			{
				__LIB_3__::func_345(uParam0, (*uParam1)[0]);
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

bool func_28()
{
	if (func_91(&uLocal_606, &(Local_37.f_5), &uLocal_758, &uLocal_808, 0, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_29()
{
	func_92();
	func_93();
	func_94();
	if (iLocal_804 >= 3)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	}
	if (!bLocal_793 && !bLocal_799)
	{
		HUD::_0xC9CAEAEEC1256E54(724769646);
	}
	switch (iLocal_756)
	{
		case 0:
			if (iLocal_505 == 0)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
				if (iLocal_539 == 0)
				{
					__LIB_2__::func_546(uLocal_606[0], 0, 4, 0);
					__LIB_2__::func_546(uLocal_606[1], 0, 2, 0);
					__LIB_2__::func_231(uLocal_606[0], joaat("WEAPON_MELEE_KNIFE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					__LIB_2__::func_231(uLocal_606[1], joaat("WEAPON_MELEE_KNIFE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				}
				else
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_606[0], joaat("WEAPON_MELEE_KNIFE"), -1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_606[1], joaat("WEAPON_REPEATER_HENRY"), -1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				iLocal_756 = 1;
			}
			if (iLocal_505 == 1)
			{
				if (iLocal_539 == 0)
				{
					__LIB_2__::func_546(uLocal_606[0], 0, 3, 0);
					__LIB_2__::func_546(uLocal_606[1], 0, 3, 0);
					__LIB_2__::func_231(uLocal_606[0], joaat("WEAPON_MELEE_KNIFE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
					__LIB_2__::func_231(uLocal_606[1], joaat("WEAPON_MELEE_KNIFE"), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				}
				else
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_606[1], joaat("WEAPON_REPEATER_HENRY"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_606[0], joaat("WEAPON_REPEATER_HENRY"), -1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
				AUDIO::PLAY_ANIMAL_VOCALIZATION(uLocal_606[0], "WHINNY_SHORT", false);
				Local_37.f_46 = 1;
				iLocal_756 = 1;
			}
			break;
		case 1:
			if (iLocal_505 == 1)
			{
				if (func_97())
				{
					Local_37.f_44 = 1;
					iLocal_756 = 6;
				}
			}
			else
			{
				Local_37.f_44 = 1;
				iLocal_756 = 2;
			}
			break;
		case 2:
			if (func_98())
			{
				iLocal_756 = 3;
			}
			break;
		case 3:
			if (!bLocal_790)
			{
				if (func_99())
				{
					iLocal_756 = 4;
				}
			}
			break;
		case 4:
			iLocal_756 = 5;
			break;
		case 5:
			if (bLocal_791 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				if (func_100(uLocal_606[0], &uLocal_825, &uLocal_821, 1092616192 /* Float: 10f */, 2f, 1065353216 /* Float: 1f */, 1110704128 /* Float: 45f */, 0) || func_100(uLocal_606[1], &uLocal_825, &uLocal_821, 1092616192 /* Float: 10f */, 2f, 1065353216 /* Float: 1f */, 1110704128 /* Float: 45f */, 0))
				{
					iLocal_756 = 6;
				}
			}
			if (__LIB_0__::func_665(uLocal_606[1], Global_35, 1, 1) > 50f)
			{
				iLocal_756 = 7;
			}
			break;
		case 6:
			if (func_102())
			{
			}
			if ((!__LIB_2__::func_1(uLocal_606[0], 0, 1) && !__LIB_2__::func_1(uLocal_606[1], 0, 1)) || (((__LIB_0__::func_665(uLocal_606[1], Global_35, 1, 1) > 100f && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_606[1])) && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_606[0])) && ((__LIB_0__::func_665(uLocal_606[0], Global_35, 1, 1) > 100f && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_606[1])) && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_606[0]))))
			{
				iLocal_756 = 7;
			}
			break;
		case 7:
			if ((!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_606[1]) && !ENTITY::IS_ENTITY_ON_SCREEN(uLocal_606[0])) || (!__LIB_2__::func_1(uLocal_606[0], 0, 1) && !__LIB_2__::func_1(uLocal_606[1], 0, 1)))
			{
				func_32();
				return true;
			}
			break;
	}
	switch (iLocal_813)
	{
		case 0:
			if (iLocal_505 == 0)
			{
				if (bLocal_790)
				{
					iLocal_813++;
				}
			}
			break;
		case 1:
			if (iLocal_756 != 6)
			{
				func_103();
			}
			break;
	}
	return false;
}

void func_32()
{
	__LIB_17__::func_873();
	bLocal_788 = true;
	if (!bLocal_799)
	{
		bLocal_799 = true;
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), true);
	}
}

void func_38(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	int iVar9;
	if (MISC::ARE_STRINGS_EQUAL(MISC::_0xF81C53561D15F330(), __LIB_3__::func_165(uParam0->f_3)))
	{
		MISC::_0x1096603B519C905F("");
	}
	if (uParam0->f_48)
	{
		AUDIO::STOP_AUDIO_SCENE("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			__LIB_3__::func_238(uParam0->f_3, 524288);
		}
	}
	if (__LIB_2__::func_1(PLAYER::PLAYER_PED_ID(), 0, 1))
	{
		iVar1 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*uParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*uParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, uParam1[iVar0]))
				{
					__LIB_2__::func_32(uParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*uParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*uParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*uParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*uParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*uParam1)[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		__LIB_17__::func_874(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_83(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_122(uParam0->f_3, uParam0->f_185);
		MISC::_INT_TO_STRING(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_123(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_48()
{
	switch (__LIB_1__::func_898())
	{
		case 12:
			iLocal_539 = 1;
			Local_37.f_177 = 3;
			break;
		case 10:
			iLocal_539 = 0;
			Local_37.f_177 = 1;
			break;
	}
	if (__LIB_2__::func_15(Local_37.f_177, 0))
	{
		if (__LIB_2__::func_284(Local_37.f_177, -1) || __LIB_2__::func_155(Local_37.f_177, 1))
		{
			bLocal_36 = true;
		}
		else
		{
			bLocal_36 = false;
		}
	}
}

void func_49()
{
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		iLocal_615 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_615))
		{
			vLocal_23 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_615, true) };
		}
	}
}

int func_50()
{
	switch (iLocal_539)
	{
		case 0:
			switch (__LIB_3__::func_564(46, 0))
			{
				case 0:
					iLocal_505 = 0;
					break;
				case 1:
					iLocal_505 = 1;
					break;
				default:
					return 0;
			}
			break;
		case 1:
			switch (__LIB_3__::func_564(46, 1))
			{
				case 0:
					iLocal_505 = 0;
					break;
				case 1:
					iLocal_505 = 1;
					break;
				default:
					return 0;
			}
			break;
	}
	return 1;
}

bool func_51()
{
	if (!__LIB_0__::func_86(vLocal_17) && !__LIB_0__::func_86(vLocal_14))
	{
		if (iLocal_505 == 0)
		{
			if (iLocal_539 == 0)
			{
				if (!CAM::IS_SPHERE_VISIBLE(vLocal_17, 1f))
				{
					bLocal_35 = true;
					return true;
				}
				if (!CAM::IS_SPHERE_VISIBLE(vLocal_14, 1f))
				{
					bLocal_35 = false;
					return true;
				}
			}
			else if (iLocal_539 == 1)
			{
				if (!CAM::IS_SPHERE_VISIBLE(vLocal_14, 1f))
				{
					bLocal_35 = false;
					return true;
				}
			}
		}
		else if (iLocal_505 == 1)
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_14, 1f))
			{
				bLocal_35 = false;
				return true;
			}
		}
	}
	return false;
}

void func_53()
{
	if (iLocal_539 == 0)
	{
		if (iLocal_505 == 0 || iLocal_505 == 1)
		{
			Local_231[0 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_231[0 /*32*/] = 22;
			StringCopy(&(Local_231[0 /*32*/].f_23), "0199_G_M_M_UniInbred_01_WHITE_01", 64);
			Local_231[0 /*32*/].f_3 = 339884989;
			Local_231[1 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_231[1 /*32*/] = 22;
			StringCopy(&(Local_231[1 /*32*/].f_23), "0200_G_M_M_UniInbred_01_WHITE_02", 64);
			Local_231[1 /*32*/].f_3 = 425805307;
			if (iLocal_505 == 0)
			{
				Local_231[2 /*32*/].f_1 = __LIB_2__::func_185(1, 0, 1);
				Local_231[3 /*32*/].f_1 = __LIB_2__::func_185(1, 0, 1);
			}
			__LIB_3__::func_352(&Local_37, 1);
			__LIB_3__::func_478(&(Local_231[0 /*32*/].f_22));
			__LIB_3__::func_478(&(Local_231[1 /*32*/].f_22));
		}
	}
	else if (iLocal_539 == 1)
	{
		Local_231[0 /*32*/].f_1 = joaat("G_M_M_UNIMOUNTAINMEN_01");
		Local_231[0 /*32*/] = 22;
		StringCopy(&(Local_231[0 /*32*/].f_23), "0256_G_M_M_UniMountainMen_01_WHITE_02", 64);
		Local_231[0 /*32*/].f_3 = 655638393;
		Local_231[1 /*32*/].f_1 = joaat("G_M_M_UNIMOUNTAINMEN_01");
		Local_231[1 /*32*/] = 22;
		StringCopy(&(Local_231[1 /*32*/].f_23), "0257_G_M_M_UniMountainMen_02_WHITE_01", 64);
		Local_231[1 /*32*/].f_3 = 894229482;
		if (iLocal_505 == 0)
		{
			Local_231[2 /*32*/].f_1 = __LIB_2__::func_185(3, 0, 1);
			Local_231[3 /*32*/].f_1 = __LIB_2__::func_185(3, 0, 1);
		}
		__LIB_3__::func_352(&Local_37, 3);
		__LIB_3__::func_478(&(Local_231[0 /*32*/].f_22));
		__LIB_3__::func_478(&(Local_231[1 /*32*/].f_22));
	}
}

void func_54()
{
	__LIB_3__::func_445(&Local_231);
}

void func_55()
{
	if (iLocal_539 == 0)
	{
		if (iLocal_505 == 0)
		{
			Local_531.f_4 = "script@playercamp@warning_murfree_brood@action";
			Local_531.f_5 = "script@playercamp@warning_murfree_brood@action";
			sLocal_26[0] = "PBL_KNEELING_ACTION_BK";
			sLocal_26[1] = "PBL_KNEELING_ACTION_BK";
			sLocal_26[2] = "PBL_KNEELING_ACTION";
			sLocal_26[4] = "PBL_KNEELING_BREAKOUT_RT_A";
			sLocal_26[3] = "PBL_KNEELING_BREAKOUT_RT_B";
			sLocal_26[7] = "PL_B_ALT_ARTHUR_GET_UP";
			Local_531.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_531.f_5, 64, 0, false, true);
			if (!bLocal_35)
			{
				Local_531 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_531.f_4, 64, sLocal_26[0], false, true);
			}
			else
			{
				Local_531 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_531.f_4, 64, sLocal_26[1], false, true);
			}
		}
		else if (iLocal_505 == 1)
		{
			Local_531.f_4 = "script@playercamp@warning_murfree_brood@action_kneeling";
			sLocal_26[4] = "PBL_KNEELING_BREAKOUT_RT_A";
			sLocal_26[3] = "PBL_KNEELING_BREAKOUT_RT_A";
			Local_531 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_531.f_4, 64, sLocal_26[3], false, true);
		}
	}
	else if (iLocal_539 == 1)
	{
		if (iLocal_505 == 0)
		{
			Local_531.f_4 = "script@playercamp@warning_skinner_brothers@action_kneeling";
			Local_531.f_5 = "script@playercamp@warning_skinner_brothers@action_kneeling";
			Local_531.f_6 = "script@playercamp@warning_murfree_brood@action";
			sLocal_26[0] = "PBL_KNEELING_ACTION";
			sLocal_26[4] = "PBL_KNEELING_BREAKOUT_RT_A";
			sLocal_26[3] = "PBL_KNEELING_BREAKOUT_RT_B";
			Local_531 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_531.f_4, 64, sLocal_26[0], false, true);
		}
		else if (iLocal_505 == 1)
		{
			Local_531.f_4 = "script@playercamp@warning_murfree_brood@action";
			sLocal_26[4] = "PBL_KNEELING_BREAKOUT_RT_A";
			sLocal_26[3] = "PBL_KNEELING_BREAKOUT_RT_B";
			Local_531 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_531.f_4, 64, sLocal_26[4], false, true);
		}
	}
}

void func_56()
{
	Local_488[7 /*2*/] = "script_camp@player_sit@exit";
	Local_488[7 /*2*/].f_1 = "exit";
	__LIB_3__::func_318(Local_488[7 /*2*/], &uLocal_541);
	Local_488[3 /*2*/] = "script_re@warning_murfree_brothers";
	Local_488[3 /*2*/].f_1 = "player_b_alt_arthur_get_up";
	__LIB_3__::func_318(Local_488[3 /*2*/], &uLocal_541);
	Local_488[4 /*2*/] = "script_re@warning_murfree_brothers";
	Local_488[4 /*2*/].f_1 = "player_kneeling_breakout_right_a";
	__LIB_3__::func_318(Local_488[4 /*2*/], &uLocal_541);
	Local_488[5 /*2*/] = "script_re@warning_murfree_brothers";
	Local_488[5 /*2*/].f_1 = "player_kneeling_breakout_right_b";
	__LIB_3__::func_318(Local_488[5 /*2*/], &uLocal_541);
	Local_488[6 /*2*/] = "script_re@warning_murfree_brothers";
	Local_488[6 /*2*/].f_1 = "player_c_ambush_attack_left_loop";
	__LIB_3__::func_318(Local_488[6 /*2*/], &uLocal_541);
}

void func_57(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
}

bool func_59()
{
	if (iLocal_539 == 0)
	{
		if (iLocal_505 == 0)
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_531, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_531.f_1, true, false))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_531);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_531.f_1);
			}
			else
			{
				return true;
			}
		}
		else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_531, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_531);
		}
		else
		{
			return true;
		}
	}
	else if (iLocal_505 == 0)
	{
		if ((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_531, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_531.f_1, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_531.f_2, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_531);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_531.f_1);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_531.f_2);
		}
		else
		{
			return true;
		}
	}
	else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_531, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_531);
	}
	else
	{
		return true;
	}
	return false;
}

bool func_60()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	if (iLocal_539 == 0)
	{
		if (iLocal_505 == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_531, sLocal_26[iVar0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_531, sLocal_26[iVar0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_531, sLocal_26[iVar0]);
					}
					bVar1 = false;
				}
				iVar0++;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_531.f_1, sLocal_26[4]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_531.f_1, sLocal_26[4]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_531.f_1, sLocal_26[4]);
				}
				bVar2 = false;
			}
		}
		else if (iLocal_505 == 1)
		{
			iVar0 = 5;
			while (iVar0 <= 6)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_531, sLocal_26[iVar0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_531, sLocal_26[iVar0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_531, sLocal_26[iVar0]);
					}
					bVar1 = false;
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_539 == 1)
	{
		if (iLocal_505 == 0)
		{
			iVar0 = 0;
			while (iVar0 <= 0)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_531, sLocal_26[iVar0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_531, sLocal_26[iVar0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_531, sLocal_26[iVar0]);
					}
					bVar1 = false;
				}
				iVar0++;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_531.f_1, sLocal_26[4]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_531.f_1, sLocal_26[4]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_531.f_1, sLocal_26[4]);
				}
				bVar2 = false;
			}
			iVar0 = 3;
			while (iVar0 <= 4)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_531.f_2, sLocal_26[iVar0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_531.f_2, sLocal_26[iVar0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_531.f_2, sLocal_26[iVar0]);
					}
					bVar3 = false;
				}
				iVar0++;
			}
		}
		else if (iLocal_505 == 1)
		{
			iVar0 = 3;
			while (iVar0 <= 4)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_531, sLocal_26[iVar0]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_531, sLocal_26[iVar0]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_531, sLocal_26[iVar0]);
					}
					bVar1 = false;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_505 == 1)
	{
		return !bVar1;
	}
	else if (iLocal_539 == 1)
	{
		if (iLocal_505 == 0)
		{
			return ((!bVar1 && !bVar2) && !bVar3);
		}
		else
		{
			return !bVar1;
		}
	}
	else
	{
		return (!bVar1 && !bVar2);
	}
	return false;
}

bool func_63(int iParam0, int iParam1, var uParam2)
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
				case 27:
					*(uParam2[0 /*3*/]) = { 2782.415f, 634.97f, 74.323f };
					*(uParam2[1 /*3*/]) = { 2594.708f, 556.157f, 75.742f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 28:
					*(uParam2[0 /*3*/]) = { 3268.065f, 1618.25f, 51.5041f };
					*(uParam2[1 /*3*/]) = { 3151.345f, 1476.824f, 42.9185f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 29:
					*(uParam2[0 /*3*/]) = { 2524.41f, 1402.663f, 97.646f };
					*(uParam2[1 /*3*/]) = { 2436.137f, 1254.158f, 109.722f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
				case 30:
					*(uParam2[0 /*3*/]) = { 2145.954f, 1592.128f, 118.3828f };
					*(uParam2[1 /*3*/]) = { 2118.189f, 1395.341f, 146.675f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
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
			break;
		case 44:
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
			break;
		case 50:
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
					Jump @7740; //curOff = 7059
					*(uParam2[0 /*3*/]) = { 1832.606f, -1986.944f, 43.5085f };
					*(uParam2[1 /*3*/]) = { 1691.085f, -1896.396f, 47.2405f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @7740; //curOff = 7170
					*(uParam2[0 /*3*/]) = { 1375.404f, -1591.844f, 68.4645f };
					*(uParam2[1 /*3*/]) = { 1603.71f, -1744.756f, 52.1714f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @7740; //curOff = 7281
					*(uParam2[0 /*3*/]) = { 816.4478f, -915.9297f, 49.4983f };
					*(uParam2[1 /*3*/]) = { 1006.361f, -1293.403f, 53.9613f };
					*(uParam2[2 /*3*/]) = { 1094.919f, -1166.476f, 67.619f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @7740; //curOff = 7404
					*(uParam2[0 /*3*/]) = { 810.3403f, -872.8113f, 51.4344f };
					*(uParam2[1 /*3*/]) = { 825.1677f, -576.8741f, 79.2273f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @7740; //curOff = 7515
					*(uParam2[0 /*3*/]) = { 1018.101f, -922.2153f, 66.9381f };
					*(uParam2[1 /*3*/]) = { 832.2029f, -891.5154f, 51.1305f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					Jump @7740; //curOff = 7626
					*(uParam2[0 /*3*/]) = { 1472.147f, -437.5275f, 75.9389f };
					*(uParam2[1 /*3*/]) = { 1224.738f, -51.7863f, 93.1655f };
					*(uParam2[2 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[3 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[4 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[5 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[6 /*3*/]) = { 0f, 0f, 0f };
					*(uParam2[7 /*3*/]) = { 0f, 0f, 0f };
					return true;
					return false;
				}
Vector3 func_64(int iParam0, var uParam1)
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

void func_80()
{
	if (__LIB_2__::func_1(uLocal_606[0], 0, 1))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_606[0], true, true);
	}
	if (__LIB_2__::func_1(uLocal_606[1], 0, 1))
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_606[1], true, true);
	}
	if (iLocal_505 == 1)
	{
		ENTITY::SET_ENTITY_COORDS(uLocal_606[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 4f, -7f, 0f), true, false, true, true);
		ENTITY::SET_ENTITY_COORDS(uLocal_606[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, -7f, 0f), true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uLocal_606[0], ENTITY::GET_ENTITY_HEADING(Global_35));
		ENTITY::SET_ENTITY_HEADING(uLocal_606[1], ENTITY::GET_ENTITY_HEADING(Global_35));
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(uLocal_606[3], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -1f, -11f, 0f), true, false, true, true);
		ENTITY::SET_ENTITY_COORDS(uLocal_606[2], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 3f, -9f, 0f), true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(uLocal_606[2], ENTITY::GET_ENTITY_HEADING(Global_35));
		ENTITY::SET_ENTITY_HEADING(uLocal_606[3], ENTITY::GET_ENTITY_HEADING(Global_35));
		ENTITY::SET_ENTITY_COORDS(uLocal_606[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, -8f, 0f), true, false, true, true);
		ENTITY::SET_ENTITY_COORDS(uLocal_606[1], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, -9f, 0f), true, false, true, true);
	}
	AUDIO::STOP_PED_SPEAKING(uLocal_606[0], true);
	AUDIO::STOP_PED_SPEAKING(uLocal_606[1], true);
	PED::SET_PED_CONFIG_FLAG(uLocal_606[0], 317, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_606[1], 317, true);
	PED::SET_PED_RESET_FLAG(uLocal_606[0], 12, true);
	PED::SET_PED_RESET_FLAG(uLocal_606[1], 12, true);
	__LIB_3__::func_285(uLocal_606[0], &Local_37, 0);
	__LIB_3__::func_285(uLocal_606[1], &Local_37, 0);
	__LIB_2__::func_133(uLocal_606[0], &(Local_231[0 /*32*/].f_23), 0);
	__LIB_2__::func_133(uLocal_606[1], &(Local_231[1 /*32*/].f_23), 0);
}

void func_81()
{
	if (iLocal_539 == 0)
	{
		__LIB_3__::func_566(&(uLocal_606[0]), 339884989);
		__LIB_3__::func_566(&(uLocal_606[1]), 425805307);
	}
	else if (iLocal_539 == 1)
	{
		__LIB_3__::func_566(&(uLocal_606[0]), 655638393);
		__LIB_3__::func_566(&(uLocal_606[1]), 894229482);
	}
}

void func_82()
{
	func_166();
	if (iLocal_539 == 0)
	{
		if (iLocal_505 == 0)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531, "Armed_Murfree", uLocal_606[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531, "Murfree", uLocal_606[0], 0);
			if (iLocal_540 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531.f_1, "player", Global_35, 0);
			}
		}
		else if (iLocal_505 == 1)
		{
			if (iLocal_540 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531, "player", Global_35, 0);
			}
		}
	}
	else if (iLocal_539 == 1)
	{
		if (iLocal_505 == 0)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531, "KNIFE_BROTHER", uLocal_606[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531, "RIFLE_BROTHER", uLocal_606[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531.f_1, "KNIFE_BROTHER", uLocal_606[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531.f_1, "RIFLE_BROTHER", uLocal_606[1], 0);
			if (iLocal_540 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531, "PLAYER_THREE", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531.f_1, "player", Global_35, 0);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531.f_2, "player", Global_35, 0);
			}
		}
		else if (iLocal_505 == 1)
		{
			if (iLocal_540 == 0)
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_531, "player", Global_35, 0);
			}
		}
	}
}

void func_83(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_122(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

bool func_91(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = __LIB_0__::func_259(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_192((*uParam0)[*uParam3], 0, uParam1, uParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

void func_92()
{
	if (!bLocal_789)
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_531, sLocal_26[2]))
		{
			if (iLocal_539 == 0)
			{
				if (fLocal_800 > 0.516557f)
				{
					bLocal_789 = true;
				}
			}
			else if (fLocal_800 > 0.516557f)
			{
				bLocal_789 = true;
			}
		}
	}
}

void func_93()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (iLocal_505 == 1)
	{
		return;
	}
	if (bLocal_790)
	{
		return;
	}
	if (iLocal_539 == 0)
	{
		fLocal_801 = 0.87f;
	}
	else
	{
		fLocal_801 = 0.8f;
	}
	fLocal_801 = fLocal_801;
	if (iLocal_539 == 0)
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_531, "Murfree"))
		{
			bLocal_794 = true;
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_531, "Armed_Murfree"))
		{
			bLocal_795 = true;
		}
	}
	else
	{
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_531, "KNIFE_BROTHER"))
		{
			bLocal_794 = true;
		}
		if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_531, "RIFLE_BROTHER"))
		{
			bLocal_795 = true;
		}
	}
	switch (iLocal_802)
	{
		case 0:
			if (iLocal_539 == 0)
			{
				if (!PED::IS_PED_ON_MOUNT(uLocal_606[0]))
				{
					if (bLocal_794)
					{
						PED::FORCE_PED_MOTION_STATE(uLocal_606[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						if (__LIB_2__::func_1(uLocal_606[2], 0, 1))
						{
							TASK::TASK_MOUNT_ANIMAL(0, uLocal_606[2], -1, -1, 1f, 1, 0, 0);
						}
						else
						{
							TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.5f, 8, 0);
						}
						__LIB_1__::func_474(uLocal_606[0], &iVar0, 0, 0, 1, 1);
						__LIB_1__::func_148(&uLocal_759);
						iLocal_802++;
					}
				}
			}
			else if (!PED::IS_PED_ON_MOUNT(uLocal_606[1]))
			{
				if (bLocal_795)
				{
					PED::FORCE_PED_MOTION_STATE(uLocal_606[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					if (__LIB_2__::func_1(uLocal_606[3], 0, 1))
					{
						TASK::TASK_MOUNT_ANIMAL(0, uLocal_606[3], -1, -1, 1f, 1, 0, 0);
					}
					else
					{
						TASK::_TASK_MOVE_IN_TRAFFIC_3(0, Global_35, 1.5f, 8, 0);
					}
					__LIB_1__::func_474(uLocal_606[1], &iVar1, 0, 0, 1, 1);
					__LIB_1__::func_148(&uLocal_759);
					iLocal_802++;
				}
			}
			break;
		case 1:
			if (iLocal_539 == 0)
			{
				if (bLocal_795)
				{
					PED::FORCE_PED_MOTION_STATE(uLocal_606[1], joaat("MOTIONSTATE_WALK"), false, 0, false);
					TASK::OPEN_SEQUENCE_TASK(&iVar2);
					if (__LIB_2__::func_1(uLocal_606[3], 0, 1))
					{
						TASK::TASK_MOUNT_ANIMAL(0, uLocal_606[3], -1, -1, 1f, 1, 0, 0);
					}
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_606[0], 2f, 2f, 0f, 1.75f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
					__LIB_1__::func_474(uLocal_606[1], &iVar2, 0, 0, 1, 1);
					iLocal_802++;
				}
			}
			else if (bLocal_794)
			{
				PED::FORCE_PED_MOTION_STATE(uLocal_606[0], joaat("MOTIONSTATE_WALK"), false, 0, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar3);
				if (__LIB_2__::func_1(uLocal_606[2], 0, 1))
				{
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_606[2], -1, -1, 1f, 1, 0, 0);
				}
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_606[1], 2f, 2f, 0f, 1.75f, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
				__LIB_1__::func_474(uLocal_606[0], &iVar3, 0, 0, 1, 1);
				iLocal_802++;
			}
			break;
		case 2:
			if (iLocal_539 == 0)
			{
				if (__LIB_2__::func_1(uLocal_606[2], 0, 1))
				{
					if (PED::IS_PED_ON_MOUNT(uLocal_606[1]))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_606[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
						iLocal_802++;
					}
				}
				else
				{
					iLocal_802++;
				}
			}
			else if (__LIB_2__::func_1(uLocal_606[3], 0, 1))
			{
				if (PED::IS_PED_ON_MOUNT(uLocal_606[0]))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_606[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
					iLocal_802++;
				}
			}
			else
			{
				iLocal_802++;
			}
			break;
		case 3:
			break;
	}
}

void func_94()
{
	iLocal_809 = func_194(&(uLocal_606[0]), &iLocal_616, 300f, &Local_637, &(Local_37.f_192), 0, 1, 0, 0, iLocal_829, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iLocal_810 = func_194(&(uLocal_606[1]), &iLocal_672, 300f, &Local_693, &(Local_37.f_192), 0, 1, 0, 0, iLocal_829, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (!bLocal_798)
	{
		bLocal_798 = true;
	}
	if (iLocal_804 >= 3)
	{
		if (!Local_37.f_46 && !bLocal_790)
		{
			if (!bLocal_793)
			{
				__LIB_2__::func_411(&(Local_637[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_693[0 /*17*/]), 0, 0);
			}
			else
			{
				__LIB_2__::func_411(&(Local_637[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_693[0 /*17*/]), 1, 0);
			}
			if (!bLocal_797)
			{
				if (__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_411(&(Local_637[1 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_693[1 /*17*/]), 0, 0);
				}
			}
			if (iLocal_809 == 0 || iLocal_810 == 0)
			{
				bLocal_790 = true;
			}
			if (iLocal_809 == 1 || iLocal_810 == 1)
			{
				__LIB_2__::func_411(&(Local_637[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_693[1 /*17*/]), 0, 0);
				bLocal_797 = true;
			}
		}
		else
		{
			__LIB_2__::func_411(&(Local_637[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_637[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_693[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_693[1 /*17*/]), 0, 0);
		}
	}
	else
	{
		__LIB_2__::func_411(&(Local_637[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_693[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_637[1 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_693[1 /*17*/]), 0, 0);
	}
}

bool func_97()
{
	vector3 vVar0;
	switch (iLocal_803)
	{
		case 0:
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_14, 1f))
			{
				PED::SET_PED_USING_ACTION_MODE(uLocal_606[0], true, -1, 0);
				PED::SET_PED_USING_ACTION_MODE(uLocal_606[1], true, -1, 0);
				PED::SET_PED_ACCURACY(uLocal_606[0], 0);
				PED::SET_PED_ACCURACY(uLocal_606[1], 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_606[0], Global_35, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_606[1], Global_35, Global_35, 1f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				__LIB_1__::func_148(&uLocal_768);
				iLocal_803++;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_768) > 1f)
			{
				if (iLocal_539 == 1)
				{
					if (!bLocal_36)
					{
						__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(18), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(23), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					}
					__LIB_2__::func_315(1891783641, uLocal_606[0], 1);
				}
				else
				{
					if (!bLocal_36)
					{
						__LIB_2__::func_303(uLocal_606[1], Global_35, func_203(18), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_606[1], Global_35, func_203(23), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					}
					__LIB_2__::func_315(1891783641, uLocal_606[1], 1);
				}
				__LIB_1__::func_148(&uLocal_768);
				iLocal_803++;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_768) > 1f)
			{
				vVar0 = { PED::GET_PED_BONE_COORDS(Global_35, 21030, 0f, 0f, 1f) };
				PED::_0x4C57F27D1554E6B0(uLocal_606[0], vVar0, 1, -1082130432 /* Float: -1f */, 0, -1082130432 /* Float: -1f */);
				PED::_0x89F5E7ADECCCB49C(Global_35, "combat");
				__LIB_1__::func_148(&uLocal_768);
				__LIB_2__::func_315(1066055203, uLocal_606[0], 1);
				__LIB_1__::func_148(&uLocal_768);
				iLocal_803++;
			}
			break;
		case 3:
			if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_606[0], 0f, 0f, 0f, true, 2000, 2000, 3000, 0);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			}
			ANIMSCENE::START_ANIM_SCENE(Local_531);
			bLocal_788 = true;
			__LIB_1__::func_148(&uLocal_768);
			iLocal_803++;
			break;
		case 4:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_531) > 0.85f)
			{
				__LIB_4__::func_232(Global_35, 0, 0);
				PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				func_32();
				HUD::_DISPLAY_HUD_COMPONENT(2011163970);
				__LIB_1__::func_148(&uLocal_768);
				iLocal_803++;
			}
			break;
		case 5:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_531))
			{
				TASK::TASK_COMBAT_PED(uLocal_606[0], Global_35, 100663296, 0);
				__LIB_2__::func_73(uLocal_606[1], &(uLocal_777[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_2__::func_73(uLocal_606[0], &(uLocal_777[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_1__::func_148(&uLocal_768);
				iLocal_803++;
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&uLocal_768) > 1f)
			{
				TASK::TASK_COMBAT_PED(uLocal_606[1], Global_35, 100663296, 0);
				func_208();
				if (!bLocal_36)
				{
					if (iLocal_539 == 0)
					{
						__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(11), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_606[1], Global_35, func_203(11), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					}
				}
				else if (iLocal_539 == 0)
				{
					__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(20), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(uLocal_606[1], Global_35, func_203(20), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				}
				bLocal_788 = true;
				__LIB_1__::func_148(&uLocal_759);
				iLocal_803++;
			}
			break;
		case 7:
			if (__LIB_0__::func_265(&uLocal_768) > 2f)
			{
				PED::SET_PED_ACCURACY(uLocal_606[0], 55);
				PED::SET_PED_ACCURACY(uLocal_606[1], 55);
				return true;
			}
			break;
	}
	return false;
}

bool func_98()
{
	bool bVar0;
	if (!bVar0)
	{
		if (fLocal_800 > 0.180877f)
		{
			if (iLocal_505 == 0)
			{
				ENTITY::SET_ENTITY_VISIBLE(uLocal_606[2], true);
				ENTITY::SET_ENTITY_VISIBLE(uLocal_606[3], true);
			}
			bVar0 = true;
		}
	}
	switch (iLocal_804)
	{
		case 0:
			ANIMSCENE::START_ANIM_SCENE(Local_531);
			__LIB_1__::func_148(&uLocal_765);
			iLocal_804++;
			break;
		case 1:
			if (iLocal_539 == 0)
			{
				if (fLocal_800 > 0.08f || __LIB_2__::func_136(uLocal_606[0], 0))
				{
					if (!CAM::_0xA24C1D341C6E0D53(0, 0, 0))
					{
						CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_606[0], 0f, 0f, 0f, true, 2000, 4000, 6000, 0);
					}
					else
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					}
					ENTITY::SET_ENTITY_VISIBLE(uLocal_606[2], true);
					ENTITY::SET_ENTITY_VISIBLE(uLocal_606[3], true);
					__LIB_1__::func_148(&uLocal_765);
					iLocal_804++;
				}
			}
			else
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(uLocal_606[0], 0f, 0f, 0f, true, 2000, 4000, 6000, 0);
				__LIB_1__::func_148(&uLocal_765);
				iLocal_804++;
			}
			break;
		case 2:
			if (iLocal_539 == 0)
			{
				if (fLocal_800 >= 0.2f)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_804++;
				}
			}
			else if (iLocal_539 == 1)
			{
				if (fLocal_800 > 0.197306f)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_804++;
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_99()
{
	int iVar0;
	switch (iLocal_807)
	{
		case 0:
			if ((iLocal_539 == 0 && fLocal_800 > 0.9f) || (iLocal_539 == 1 && fLocal_800 > 0.8f))
			{
				bLocal_793 = true;
				iLocal_807++;
			}
			break;
		case 1:
			iLocal_807++;
			break;
		case 2:
			if (fLocal_800 > 0.98f || !__LIB_1__::func_235(Global_35))
			{
				if (__LIB_1__::func_235(Global_35))
				{
					iVar0 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_23, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1"), 1f, 0, false);
					TASK::_TASK_USE_SCENARIO_POINT(Global_35, iVar0, "WORLD_PLAYER_DYNAMIC_CAMP_FIRE_KNEEL_ARTHUR", 0, false, true, 0, false, -1f, false);
					func_32();
					__LIB_1__::func_148(&uLocal_759);
					iLocal_807++;
				}
				else
				{
					iLocal_807++;
				}
			}
			break;
		case 3:
			bLocal_791 = true;
			iLocal_807++;
			break;
		case 4:
			return true;
	}
	return false;
}

int func_100(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	float fVar0;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!__LIB_0__::func_75(uParam1))
	{
		__LIB_1__::func_148(uParam1);
	}
	if (uParam2->f_3 < 0f)
	{
		uParam2->f_3 = __LIB_0__::func_265(uParam1);
		uParam2->f_1 = uParam2->f_3;
	}
	fVar0 = (__LIB_0__::func_265(uParam1) - uParam2->f_1);
	*uParam2 = (*uParam2 + fVar0);
	if (fVar0 >= 0.5f)
	{
		if ((bParam7 || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fParam6)) && __LIB_1__::func_410(__LIB_2__::func_114(Global_35, fParam5), ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam3, 1))
		{
			uParam2->f_2 = (uParam2->f_2 + fVar0);
		}
		else if (uParam2->f_2 > 0f)
		{
			uParam2->f_2 = (uParam2->f_2 - fVar0);
			if (uParam2->f_2 < 0f)
			{
				uParam2->f_2 = 0f;
			}
		}
		uParam2->f_1 = __LIB_0__::func_265(uParam1);
	}
	if (uParam2->f_2 >= fParam4)
	{
		return 1;
	}
	return 0;
}

bool func_102()
{
	int iVar0;
	int iVar1;
	if (!__LIB_2__::func_1(uLocal_606[0], 0, 1))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_606[2], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
	if (!__LIB_2__::func_1(uLocal_606[1], 0, 1))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_606[3], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
	}
	if (iLocal_505 == 0)
	{
		switch (iLocal_806)
		{
			case 0:
				PED::SET_PED_RESET_FLAG(uLocal_606[0], 12, true);
				PED::SET_PED_RESET_FLAG(uLocal_606[1], 12, true);
				iLocal_806++;
				break;
			case 1:
				if (!Local_37.f_46)
				{
					if (((iLocal_539 == 0 && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_531) > 0.99f) || (iLocal_539 == 0 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_531))) || iLocal_539 == 1)
					{
						if (!bLocal_790)
						{
							__LIB_2__::func_303(Global_35, uLocal_606[1], func_203(7), "", -1f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
						__LIB_1__::func_148(&uLocal_762);
						PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
						func_32();
						HUD::_DISPLAY_HUD_COMPONENT(2011163970);
						iLocal_806++;
					}
				}
				break;
			case 2:
				func_208();
				if (iLocal_539 == 0)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_531.f_1, "player", Global_35);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_531, "player", Global_35);
					__LIB_4__::func_232(uLocal_606[0], 0, 0);
					__LIB_1__::func_148(&uLocal_762);
					Local_37.f_46 = 1;
					iLocal_806++;
				}
				else
				{
					__LIB_4__::func_232(uLocal_606[0], 0, 0);
					__LIB_1__::func_148(&uLocal_762);
					Local_37.f_46 = 1;
					iLocal_806++;
				}
				break;
			case 3:
				__LIB_2__::func_73(uLocal_606[0], &(uLocal_777[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_2__::func_73(uLocal_606[1], &(uLocal_777[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				__LIB_1__::func_148(&uLocal_762);
				iLocal_806++;
				break;
			case 4:
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "TaskCombat_Panic", 1f, 10f, 4);
				TASK::TASK_COMBAT_PED(0, Global_35, 34603008, 0);
				__LIB_1__::func_474(uLocal_606[1], &iVar0, 0, 0, 1, 1);
				iLocal_806++;
				break;
			case 5:
				if (__LIB_0__::func_265(&uLocal_762) > 0.5f)
				{
					__LIB_1__::func_148(&uLocal_762);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "TaskCombat_Panic", 1f, 10f, 4);
					TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
					__LIB_1__::func_474(uLocal_606[0], &iVar1, 0, 0, 1, 1);
					iLocal_806++;
				}
				break;
			case 6:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					if (__LIB_2__::func_1(uLocal_606[0], 0, 1))
					{
						if (bLocal_790 && iLocal_539 != 1)
						{
							__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						__LIB_1__::func_148(&uLocal_762);
						iLocal_806++;
					}
					else
					{
						if (iLocal_539 == 1)
						{
							__LIB_2__::func_303(uLocal_606[1], Global_35, func_203(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_606[1], Global_35, func_203(23), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						__LIB_1__::func_148(&uLocal_762);
						iLocal_806++;
					}
				}
				break;
			case 7:
				if (__LIB_0__::func_265(&uLocal_762) > 3f)
				{
					if (iLocal_539 == 1)
					{
						if (!bLocal_36)
						{
							__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(20), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (!bLocal_36)
					{
						__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					AUDIO::STOP_PED_SPEAKING(uLocal_606[0], false);
					AUDIO::STOP_PED_SPEAKING(uLocal_606[1], false);
					iLocal_806++;
				}
				break;
			case 8:
				if (!PED::IS_PED_IN_COMBAT(uLocal_606[0], 0))
				{
					TASK::TASK_COMBAT_PED(uLocal_606[0], Global_35, 0, 0);
				}
				if (!PED::IS_PED_IN_COMBAT(uLocal_606[1], 0))
				{
					TASK::TASK_COMBAT_PED(uLocal_606[1], Global_35, 0, 0);
				}
				iLocal_806++;
				break;
			case 9:
				return true;
		}
	}
	if (iLocal_505 == 1)
	{
		switch (iLocal_805)
		{
			case 0:
				PED::SET_PED_RESET_FLAG(uLocal_606[0], 12, true);
				PED::SET_PED_RESET_FLAG(uLocal_606[1], 12, true);
				__LIB_1__::func_148(&uLocal_759);
				iLocal_805++;
				break;
			case 1:
				__LIB_1__::func_148(&uLocal_759);
				iLocal_805++;
				break;
			case 2:
				__LIB_1__::func_148(&uLocal_759);
				iLocal_805++;
				break;
			case 3:
				__LIB_1__::func_148(&uLocal_759);
				iLocal_805++;
				break;
			case 4:
				if (__LIB_0__::func_265(&uLocal_759) > 3f)
				{
					if (!bLocal_36)
					{
						if (iLocal_539 == 0)
						{
							__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(16), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_606[1], Global_35, func_203(16), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						}
					}
					else
					{
						__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(22), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					}
					iLocal_805++;
				}
				break;
			case 5:
				if (__LIB_0__::func_265(&uLocal_759) > 3f)
				{
					if (!bLocal_36)
					{
						if (iLocal_539 == 0)
						{
							__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(12), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_606[1], Global_35, func_203(16), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						}
					}
					else
					{
						__LIB_2__::func_303(uLocal_606[0], Global_35, func_203(22), "", -1f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					}
					AUDIO::STOP_PED_SPEAKING(uLocal_606[0], false);
					AUDIO::STOP_PED_SPEAKING(uLocal_606[1], false);
					iLocal_805++;
				}
				break;
			case 6:
				return true;
		}
	}
	return false;
}

void func_103()
{
	int iVar0;
	if (iLocal_756 == 6)
	{
		return;
	}
	switch (iLocal_812)
	{
		case 0:
			if (!bLocal_788)
			{
				if (iLocal_540 == 0)
				{
					if (bLocal_792)
					{
						if (iLocal_539 == 0)
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_531, sLocal_26[3], true);
						}
						else if (iLocal_540 == 1)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_PLAY_ANIM(0, Local_488[3 /*2*/], Local_488[3 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
							TASK::TASK_PLAY_ANIM(0, Local_488[6 /*2*/], Local_488[6 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
							__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
						}
						else
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_PLAY_ANIM(0, Local_488[4 /*2*/], Local_488[4 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
							TASK::TASK_PLAY_ANIM(0, Local_488[6 /*2*/], Local_488[6 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
							__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
						}
					}
					else if (iLocal_539 == 0)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_531, sLocal_26[4], true);
					}
					else if (iLocal_540 == 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_PLAY_ANIM(0, Local_488[3 /*2*/], Local_488[3 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
						TASK::TASK_PLAY_ANIM(0, Local_488[6 /*2*/], Local_488[6 /*2*/].f_1, 8f, -8f, -1, 33, 0f, false, 0, false, 0, false);
						__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_PLAY_ANIM(0, Local_488[4 /*2*/], Local_488[4 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
						TASK::TASK_PLAY_ANIM(0, Local_488[6 /*2*/], Local_488[6 /*2*/].f_1, 8f, -8f, -1, 33, 0f, false, 0, false, 0, false);
						__LIB_1__::func_474(Global_35, &iVar0, 0, 0, 1, 1);
					}
				}
				else if (iLocal_539 == 0)
				{
					if (iLocal_540 == 1)
					{
					}
					if (iLocal_540 == 2)
					{
					}
				}
				else
				{
					if (iLocal_540 == 1)
					{
					}
					if (iLocal_540 == 2)
					{
					}
				}
			}
			PED::SET_PED_USING_ACTION_MODE(Global_35, true, -1, 0);
			iLocal_812++;
			break;
		case 1:
			__LIB_4__::func_232(Global_35, 0, 0);
			__LIB_2__::func_303(Global_35, uLocal_606[1], func_203(8), "", -1f, 0, 0, 0, 1, 1, 1, -500314840, 1, 0, 0);
			iLocal_812++;
			break;
		case 2:
			if (__LIB_0__::func_665(Global_35, uLocal_606[1], 1, 1) < 5f)
			{
				TASK::TASK_REACT(uLocal_606[1], Global_35, 0f, 0f, 0f, "TaskCombat_Panic", 1f, 10f, 4);
			}
			iLocal_812++;
			break;
		case 3:
			if (__LIB_0__::func_665(Global_35, uLocal_606[0], 1, 1) < 7f)
			{
				TASK::TASK_REACT(uLocal_606[0], Global_35, 0f, 0f, 0f, "TaskCombat_Panic", 1f, 10f, 4);
			}
			iLocal_812++;
			break;
		case 4:
			bLocal_788 = true;
			if ((__LIB_0__::func_665(Global_35, uLocal_606[1], 1, 1) < 20f && __LIB_2__::func_1(uLocal_606[1], 0, 1)) && __LIB_2__::func_1(uLocal_606[0], 0, 1))
			{
				iLocal_756 = 6;
			}
			break;
	}
}

int func_122(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
				Jump @3265; //curOff = 1260
				return 856957155;
				Jump @3265; //curOff = 1271
				return 199192985;
				Jump @3265; //curOff = 1282
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
				Jump @3265; //curOff = 1357
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
				Jump @3265; //curOff = 1404
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
				Jump @3265; //curOff = 1451
				return -1065165983;
				Jump @3265; //curOff = 1462
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
				Jump @3265; //curOff = 1523
				return -1641231995;
				Jump @3265; //curOff = 1534
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
				Jump @3265; //curOff = 1581
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
				Jump @3265; //curOff = 1628
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
				Jump @3265; //curOff = 1675
				return -800701784;
				Jump @3265; //curOff = 1686
				return -1599472750;
				Jump @3265; //curOff = 1697
				return 239043929;
				Jump @3265; //curOff = 1708
				return -1534174498;
				Jump @3265; //curOff = 1719
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
				Jump @3265; //curOff = 1766
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
				Jump @3265; //curOff = 1813
				return 1895786957;
				Jump @3265; //curOff = 1824
				return -2058137475;
				Jump @3265; //curOff = 1835
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
				Jump @3265; //curOff = 1924
				return 598461796;
				Jump @3265; //curOff = 1935
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
				Jump @3265; //curOff = 1982
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
				Jump @3265; //curOff = 2057
				return 544369376;
				Jump @3265; //curOff = 2068
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
				Jump @3265; //curOff = 2115
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
				Jump @3265; //curOff = 2162
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
				Jump @3265; //curOff = 2195
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
				Jump @3265; //curOff = 2228
				return 1602493990;
				Jump @3265; //curOff = 2239
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
				Jump @3265; //curOff = 2328
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
				Jump @3265; //curOff = 2375
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
				Jump @3265; //curOff = 2422
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
				Jump @3265; //curOff = 2469
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
				Jump @3265; //curOff = 2516
				return 1762656414;
				Jump @3265; //curOff = 2527
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
				Jump @3265; //curOff = 2588
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
				Jump @3265; //curOff = 2649
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
				Jump @3265; //curOff = 2696
				return -2018341642;
				Jump @3265; //curOff = 2707
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
				Jump @3265; //curOff = 2740
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
				Jump @3265; //curOff = 2773
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
				Jump @3265; //curOff = 2820
				return -1618254924;
				Jump @3265; //curOff = 2831
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
				Jump @3265; //curOff = 2878
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
				Jump @3265; //curOff = 2925
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3265; //curOff = 2958
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
				Jump @3265; //curOff = 3005
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
				Jump @3265; //curOff = 3052
				return -2137572125;
				Jump @3265; //curOff = 3063
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
				Jump @3265; //curOff = 3110
				return -774894224;
				Jump @3265; //curOff = 3121
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
				Jump @3265; //curOff = 3168
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
				Jump @3265; //curOff = 3229
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
			}
			else if (iParam0 >= 75 && iParam0 <= 118)
			{
				switch (iParam0)
				{
					case 75:
						return -346537584;
					case 76:
						switch (iParam1)
						{
							case 0:
								return -550739017;
							default:
								break;
						}
						return -1829585536;
					case 77:
						switch (iParam1)
						{
							case 0:
								return -609376390;
							case 1:
								return -311112952;
							case 2:
								return -682765316;
							case 3:
								return -2127446978;
							default:
								break;
						}
						return 1338777472;
					case 78:
						switch (iParam1)
						{
							case 0:
								return 581221752;
							case 1:
								return 20416722;
							default:
								break;
						}
						return 1293249792;
					case 79:
						switch (iParam1)
						{
							case 0:
								return -1786500412;
							default:
								break;
						}
						return 235904384;
					case 80:
						return -334565466;
					case 81:
						switch (iParam1)
						{
							case 0:
								return 31964051;
							case 1:
								return 245875704;
							default:
								break;
						}
						return 1046770304;
					case 82:
						switch (iParam1)
						{
							case 0:
								return 48921735;
							case 1:
								return 1062398415;
							default:
								break;
						}
						return -2047991552;
					case 83:
						return -1752276745;
					case 84:
						switch (iParam1)
						{
							case 0:
								return 418356694;
							case 1:
								return -1090928636;
							default:
								break;
						}
						return -1021157760;
					case 85:
						switch (iParam1)
						{
							case 0:
								return 278246928;
							case 1:
								return 1092461253;
							default:
								break;
						}
						return 900051136;
					case 86:
						return 1417655457;
					case 87:
						switch (iParam1)
						{
							case 0:
								return 188835226;
							case 1:
								return 220332139;
							default:
								break;
						}
						return 1359760512;
					case 88:
						switch (iParam1)
						{
							case 0:
								return -1638860831;
							case 1:
								return -812497188;
							default:
								break;
						}
						return 1616003072;
					case 89:
						return -69702063;
					case 90:
						switch (iParam1)
						{
							case 0:
								return -479871262;
							default:
								break;
						}
						return -1670654720;
					case 91:
						return -331264815;
					case 92:
						return -1217205534;
					case 93:
						switch (iParam1)
						{
							case 0:
								return -1662432355;
							case 1:
								return -368935814;
							default:
								break;
						}
						return -1021345856;
					case 94:
						switch (iParam1)
						{
							case 0:
								return -735413614;
							case 1:
								return -972169639;
							case 2:
								return -673250821;
							case 3:
								return 161473916;
							default:
								break;
						}
						return -1329933952;
					case 95:
						switch (iParam1)
						{
							case 0:
								return -1645068573;
							default:
								break;
						}
						return 1248360320;
					case 96:
						switch (iParam1)
						{
							case 0:
								return 884363685;
							case 1:
								return 368673822;
							case 2:
								return 578628915;
							case 3:
								return 689154642;
							case 4:
								return 471198511;
							case 5:
								return 967199063;
							case 6:
								return -38616787;
							case 7:
								return -1294637989;
							default:
								break;
						}
						return -84111088;
					case 97:
						switch (iParam1)
						{
							case 0:
								return -1639179308;
							case 1:
								return -436408638;
							default:
								break;
						}
						return 1995021696;
					case 98:
						switch (iParam1)
						{
							case 0:
								return 1464772696;
							case 1:
								return 6449957;
							default:
								break;
						}
						return -1853564800;
					case 99:
						switch (iParam1)
						{
							case 0:
								return 803309489;
							case 1:
								return -31873580;
							case 2:
								return -1922690045;
							case 3:
								return 515105064;
							default:
								break;
						}
						return -1759022208;
					case 100:
						return -307424281;
					case 101:
						switch (iParam1)
						{
							case 0:
								return 1006898715;
							case 1:
								return 1573993134;
							default:
								break;
						}
						return -1402545280;
					case 102:
						return -1979014350;
					case 103:
						return 2096137174;
					case 104:
						switch (iParam1)
						{
							case 0:
								return -861435303;
							case 1:
								return 2076430727;
							case 2:
								return -1266577036;
							default:
								break;
						}
						return 493009408;
					case 105:
						return 1152564685;
					case 106:
						switch (iParam1)
						{
							case 0:
								return 2036836823;
							case 1:
								return 2046057828;
							case 2:
								return -526712830;
							case 3:
								return -242317110;
							case 4:
								return 1729814355;
							case 5:
								return 1868875718;
							case 6:
								return -785635151;
							case 7:
								return 1586170447;
							case 8:
								return -291036947;
							default:
								break;
						}
						return -832026176;
					case 107:
						switch (iParam1)
						{
							case 0:
								return -981210833;
							case 1:
								return 875440489;
							default:
								break;
						}
						return -508430848;
					case 108:
						switch (iParam1)
						{
							case 0:
								return 1491780341;
							case 1:
								return 1920169067;
							default:
								break;
						}
						return -227796128;
					case 109:
						switch (iParam1)
						{
							case 0:
								return -1255044808;
							case 1:
								return -1012076841;
							default:
								break;
						}
						return -871899648;
					case 110:
						switch (iParam1)
						{
							case 0:
								return 792345848;
							case 1:
								return 121209110;
							default:
								break;
						}
						return 14115413;
					case 111:
						switch (iParam1)
						{
							case 0:
								return -1152301466;
							case 1:
								return -1113682855;
							case 2:
								return -1801389871;
							case 3:
								return -180725957;
							case 4:
								return 1811628790;
							default:
								break;
						}
						return 2016864128;
					case 112:
						switch (iParam1)
						{
							case 0:
								return 635397890;
							default:
								break;
						}
						return -717212864;
					case 113:
						return 1487351956;
					case 114:
						switch (iParam1)
						{
							case 0:
								return 1955914312;
							case 1:
								return 1685893021;
							case 2:
								return -711771194;
							case 3:
								return 146337879;
							default:
								break;
						}
						return 205846784;
					case 115:
						switch (iParam1)
						{
							case 0:
								return -775876869;
							case 1:
								return -39469638;
							default:
								break;
						}
						return 1483441280;
					case 116:
						switch (iParam1)
						{
							case 0:
								return 2113065035;
							case 1:
								return -2101774133;
							default:
								break;
						}
						return -815072896;
					case 117:
						return -689015496;
					case 118:
						switch (iParam1)
						{
							case 0:
								return -18903616;
							case 1:
								return -1607469655;
							default:
								break;
						}
						return -640409664;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 119:
						return 1996937952;
				}
			}
			return 1968536545;
		}
void func_123(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (__LIB_0__::func_2() == 0)
	{
		vVar0.x = Global_265238.f_79565.f_208.f_17;
	}
	STATS::_0xD5910ECF81A2278C(iParam0, iParam1, iParam2, &vVar0);
}

void func_166()
{
	float fVar0;
	func_49();
	fVar0 = ENTITY::GET_ENTITY_HEADING(Global_35);
	vLocal_20 = { vLocal_20 };
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_531, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0f, 0f, fVar0, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_531.f_1, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0f, 0f, fVar0, 2);
	if (iLocal_539 == 1)
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_531.f_2, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 0f, 0f, fVar0, 2);
	}
}

bool func_192(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;
	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_5)
	{
		__LIB_5__::func_686(uParam2, 1, iVar0);
	}
	if (!Global_1935630.f_12 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (__LIB_2__::func_968(iParam0, uParam2))
			{
				*uParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*uParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_25)
		{
			if (__LIB_1__::func_395(uParam2, 1065353216 /* Float: 1f */))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (__LIB_2__::func_875(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630.f_29) < 300)
			{
				if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*uParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630.f_25 || uParam2->f_12 < 20f)
			{
				if (__LIB_1__::func_327(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_30 || Global_1935630.f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
					{
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((__LIB_2__::func_2(iParam0, Global_1935630.f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && __LIB_1__::func_328(uParam2, iParam0)) && __LIB_2__::func_832(uParam2, iParam0))
				{
					*uParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630.f_40 == 0)
				{
					if (Global_1935630.f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
							{
								__LIB_0__::func_11();
								*uParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *uParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630.f_40 == 0)
			{
				if (Global_1935630.f_41 != 0)
				{
					if (*uParam2 & 131072 == 0)
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_41))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (__LIB_2__::func_840(uParam2, iParam0) || (uParam2->f_9 > 0 && (__LIB_0__::func_485() - uParam2->f_9) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						__LIB_0__::func_11();
						*uParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630.f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (__LIB_1__::func_330())
					{
						if (__LIB_1__::func_329(iParam0, Global_1935630.f_42))
						{
							__LIB_0__::func_11();
							*uParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (__LIB_2__::func_833(uParam2, iParam0))
			{
				*uParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*uParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*uParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (__LIB_1__::func_331(uParam2, 4000))
				{
					if (__LIB_1__::func_332(&iParam0, uParam2))
					{
						*uParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (__LIB_2__::func_834(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (__LIB_1__::func_333(uParam2, iParam0))
			{
				*uParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

int func_194(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_324(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

char* func_203(int iParam0)
{
	if (iLocal_539 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return "RE_PCA_RKR_V1_PCA_OPN_A";
			case 1:
				return "RE_PCA_RKR_V1_PCA_OPN_A_LAUGH";
			case 2:
				return "RE_PCA_RKR_V1_PCA_OPN_B";
			case 3:
				return "RE_PCA_RKR_V1_PCA_OPN_C";
			case 4:
				return "RE_PCA_RKR_V1_PCA_OPN_D";
			case 5:
				return "RE_PCA_RKR_V1_PCA_OPN_D_LAUGH";
			case 6:
				return "RE_PCA_RKR_V1_PCA_OPN_E";
			case 7:
				return "RE_PCA_RKR_V1_AGGRO_A";
			case 8:
				return "RE_PCA_RKR_V1_AGGRO_CALLOUT";
			case 9:
				return "RE_PCA_RKR_V1_AGGRO_B";
			case 11:
				return "RE_PCA_RKR_V1_AGGRO_D";
			case 12:
				return "RE_PCA_RKR_V1_AGGRO_E";
			case 13:
				return "RE_PCA_RKR_V1_AGGRO_K_FEUD";
			case 14:
				return "RE_PCA_RKR_V1_AGGRO_G";
			case 16:
				return "RE_PCA_RKR_V1_AGGRO_I";
			case 17:
				return "RE_PCA_RKR_V1_AGGRO_J";
			case 18:
				return "RE_PCA_RKR_V1_AGGRO_K";
			case 19:
				return "RE_PCA_RKR_V1_AGGRO_L";
			case 20:
				return "RE_PCA_RKR_V1_AGGRO_D_FEUD";
			case 21:
				return "RE_PCA_RKR_V1_AGGRO_E_FEUD";
			case 22:
				return "RE_PCA_RKR_V1_AGGRO_I_FEUD";
			case 23:
				return "RE_PCA_RKR_V1_AGGRO_K_FEUD";
			case 24:
				return "RE_PCA_RKR_V1_EXIT_A";
			case 25:
				return "RE_PCA_RKR_V1_EXIT_B";
			case 26:
				return "";
		}
	}
	else if (iLocal_539 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "RE_PCA_RKR_V2_PCA_OPN_A";
			case 1:
				return "RE_PCA_RKR_V2_PCA_OPN_A_LAUGH";
			case 2:
				return "RE_PCA_RKR_V2_PCA_OPN_B";
			case 3:
				return "RE_PCA_RKR_V2_PCA_OPN_C";
			case 4:
				return "RE_PCA_RKR_V2_PCA_OPN_D";
			case 5:
				return "RE_PCA_RKR_V2_PCA_OPN_D_LAUGH";
			case 6:
				return "RE_PCA_RKR_V2_PCA_OPN_E";
			case 7:
				return "RE_PCA_RKR_V2_AGGRO_A";
			case 8:
				return "RE_PCA_RKR_V2_AGGRO_CALLOUT";
			case 9:
				return "RE_PCA_RKR_V2_AGGRO_B";
			case 11:
				return "RE_PCA_RKR_V2_AGGRO_D";
			case 12:
				return "RE_PCA_RKR_V2_AGGRO_E";
			case 13:
				return "RE_PCA_RKR_V1_AGGRO_K_FEUD";
			case 14:
				return "RE_PCA_RKR_V2_AGGRO_G";
			case 16:
				return "RE_PCA_RKR_V2_AGGRO_I";
			case 17:
				return "RE_PCA_RKR_V2_AGGRO_J";
			case 18:
				return "RE_PCA_RKR_V2_AGGRO_K";
			case 19:
				return "RE_PCA_RKR_V2_AGGRO_L";
			case 23:
				return "RE_PCA_RKR_V2_AGGRO_K_FEUD";
			case 20:
				return "RE_PCA_RKR_V2_AGGRO_D_FEUD";
			case 21:
				return "RE_PCA_RKR_V2_AGGRO_E_FEUD";
			case 22:
				return "RE_PCA_RKR_V2_AGGRO_I_FEUD";
			case 24:
				return "RE_PCA_RKR_V2_EXIT_A";
			case 25:
				return "RE_PCA_RKR_V2_EXIT_B";
			case 26:
				return "";
		}
	}
	return "RERC_ODR_V1_END_A";
}

void func_208()
{
	if (iLocal_505 != 0)
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_606[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 20f, 0, 0, 0);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_606[0], 0);
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_606[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 10f, 0, 0, 0);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_606[1], 2);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_606[1], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_606[1], 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_606[1], 42, true);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_606[0], 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_606[0], 2, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_606[0], 42, true);
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_606[0], 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_606[1], 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_606[0], 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_606[1], 17, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_606[0], joaat("REL_PLAYER_DISLIKE"));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_606[1], joaat("REL_PLAYER_DISLIKE"));
}

int func_324(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_4__::func_231(*uParam0, iParam1, uParam3))
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
						return func_324(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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
				if (__LIB_3__::func_888(uParam0, iParam1, fParam4, bVar6))
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

