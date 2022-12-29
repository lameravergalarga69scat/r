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
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 9999;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	struct<32> Local_229[6];
	struct<6> Local_422 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	struct<12> Local_430[1];
	var uLocal_443[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_450[6] = { 0, 0, 0, 0, 0, 0 };
	struct<2> Local_457[1];
	var uLocal_460 = 1;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	vector3 vLocal_469 = { 0f, 0f, 0f };
	float fLocal_472 = 0f;
	vector3 vLocal_473 = { 0f, 0f, 0f };
	vector3 vLocal_476 = { 0f, 0f, 0f };
	vector3 vLocal_479 = { 0f, 0f, 0f };
	vector3 vLocal_482 = { 0f, 0f, 0f };
	int iLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488[2] = { 0, 0 };
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	vector3 vLocal_497 = { 0f, 0f, 0f };
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	char* sLocal_502 = NULL;
	char* sLocal_503 = NULL;
	bool bLocal_504 = false;
	bool bLocal_505 = false;
	int iLocal_506 = 0;
	bool bLocal_507 = false;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	int iLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = -1;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 2;
	var uLocal_522 = 1;
	var uLocal_523 = 1;
	var uLocal_524 = 1;
	var uLocal_525 = 0;
	var uLocal_526 = 1;
	var uLocal_527 = 2;
	var uLocal_528 = 2;
	var uLocal_529 = 3;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 3;
	var uLocal_533 = 1;
	var uLocal_534 = 3;
	var uLocal_535 = 3;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	int iLocal_538 = 0;
	var uLocal_539 = -1;
	var uLocal_540 = 0;
	var uLocal_541 = -1;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = -1;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 1073741824;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 1;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	struct<17> Local_559[3];
	var uLocal_611 = 0;
	int iLocal_612 = 0;
	bool bLocal_613 = false;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
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
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
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
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
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
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	vector3 vLocal_732 = { 0f, 0f, 0f };
	float fLocal_735 = 0f;
	float fLocal_736 = 0f;
	float fLocal_737 = 0f;
	int iLocal_738 = 0;
	var uLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	var uLocal_742 = 0;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	var uLocal_752 = 0;
	int iLocal_753 = 0;
	var uLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	bool bLocal_786 = false;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	int iLocal_799 = 0;
	int iLocal_800 = 0;
	int iLocal_801 = 0;
	int iLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	bool bLocal_821 = false;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	bool bLocal_825 = false;
	bool bLocal_826 = false;
	int iLocal_827 = 0;
	bool bLocal_828 = false;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	bool bLocal_832 = false;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	bool bLocal_841 = false;
	bool bLocal_842 = false;
	char* sLocal_843 = NULL;
	char* sLocal_844 = NULL;
	char* sLocal_845 = NULL;
	char* sLocal_846 = NULL;
	char* sLocal_847 = NULL;
	vector3 vLocal_848 = { 0f, 0f, 0f };
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 1065353216;
	var uLocal_857 = 1119092736;
	var uLocal_858 = 1092616192;
	var uLocal_859 = 1085276160;
	int iLocal_860 = 0;
	struct<26> Local_861 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0 } ;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900[3] = { 0, 0, 0 };
	bool bLocal_904 = false;
	int iLocal_905[6] = { 0, 0, 0, 0, 0, 0 };
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
	iLocal_751 = -1;
	iLocal_773 = 1;
	iLocal_802 = 1;
	iLocal_860 = __LIB_2__::func_340(2, 0, 0);
	Local_15.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_15.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	Local_15.f_45 = 0;
	__LIB_3__::func_368(&Local_15, 1);
	__LIB_0__::func_11();
	__LIB_3__::func_152(65);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_841 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_841, 649, 0);
		if (bLocal_841)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_773)
			{
				case 1:
					if (__LIB_3__::func_454(&Local_15, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10(&Local_15, &uLocal_777, &uLocal_776);
						if (func_11())
						{
							func_7();
						}
						else
						{
							iLocal_773 = 0;
						}
					}
					else if (Local_15.f_160)
					{
						func_7();
					}
					break;
				case 0:
					if (func_12())
					{
						iLocal_773 = 3;
					}
					break;
				case 3:
					if (func_13())
					{
						if (iLocal_14 == 0)
						{
							if (func_14())
							{
								func_15(0);
								iLocal_773 = 4;
							}
						}
						else if (func_14())
						{
							func_15(11);
							iLocal_773 = 4;
						}
					}
					break;
				case 4:
					func_17();
					if (!__LIB_3__::func_466(&Local_15, &uLocal_443, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_7();
					}
					if (func_19())
					{
						Local_15.f_50 = 1;
						func_7();
					}
					if (__LIB_3__::func_431(&Local_15, &uLocal_443, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, iLocal_830))
					{
						Local_15.f_50 = 1;
						func_7();
					}
					break;
			}
			BUILTIN::WAIT(Local_15.f_158);
		}
	}
}

void func_7()
{
	int iVar0;
	int iVar1;
	func_24();
	if (iLocal_838 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		iLocal_838 = 0;
	}
	MAP::DISPLAY_RADAR(true);
	__LIB_0__::func_8(&Global_1935630, 4);
	__LIB_4__::func_441(&uLocal_508, 1);
	if (PED::_0x91A5F9CBEBB9D936(uLocal_486))
	{
		PATHFIND::_0xD17672447692478E(uLocal_487, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_486, true);
	}
	if (__LIB_2__::func_1(uLocal_443[1], 0, 0))
	{
		if (bLocal_786)
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1]) == joaat("REL_PLAYER_LIKE"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1], joaat("REL_CIVFEMALE"));
				bLocal_786 = false;
			}
		}
		if (PED::IS_PED_ON_MOUNT(uLocal_443[1]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_STAND_STILL(0, 1);
			__LIB_1__::func_474(uLocal_443[1], &iVar0, 0, 0, 1, 1);
		}
	}
	__LIB_2__::func_353(&uLocal_611, 1);
	if (Local_15.f_45)
	{
		if (((iLocal_804 == 0 && iLocal_617 < 1) && iLocal_621 < 1) && iLocal_622 < 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_443[1]) && !Global_16)
			{
				if (iLocal_810 == 0)
				{
					__LIB_1__::func_715(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
				}
			}
		}
		else if (iLocal_14 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(uLocal_443[1]))
			{
				if (iLocal_810 == 0)
				{
					__LIB_1__::func_715(4, 0, 0, "RE_HONOR_CRUEL_KILLING", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_810 = 1;
				}
			}
		}
	}
	if (iLocal_837 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 87, false);
		iLocal_837 = 0;
	}
	if (iLocal_506 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
		iLocal_506 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[iVar1]))
		{
			__LIB_2__::func_32(&(uLocal_443[iVar1]));
		}
		iVar1++;
	}
	__LIB_3__::func_475(uLocal_443[0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
	if (!Local_15.f_45 || __LIB_2__::func_118(uLocal_443[1], 1, 0) > 80f)
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[iVar1]) && ENTITY::_0x88AD6CC10D8D35B2(uLocal_443[iVar1]))
			{
				if (!__LIB_1__::func_472(uLocal_443[iVar1], 200f, 80f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
				{
					PED::DELETE_PED(&(uLocal_443[iVar1]));
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[0]) && ENTITY::_0x88AD6CC10D8D35B2(uLocal_443[0]))
		{
			PED::DELETE_PED(&(uLocal_443[0]));
		}
	}
	else
	{
		func_35();
	}
	if (iLocal_839 == 1)
	{
		PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_RESET_FLAG(Global_35, 179, false);
		iLocal_839 = 0;
	}
	func_36(&Local_15, &uLocal_443, &iLocal_450, iLocal_14, uLocal_777, Local_15.f_51.f_4, 0, 1, 0, 1);
	__LIB_3__::func_480(&Local_430);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_738);
	__LIB_1__::func_682(65);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[0]))
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[0], true);
		PED::SET_PED_CAN_RAGDOLL(uLocal_443[0], true);
	}
	if (iLocal_833 == 1)
	{
		__LIB_0__::func_325(&iLocal_780);
		__LIB_0__::func_325(&iLocal_781);
		__LIB_1__::func_721(7);
		__LIB_1__::func_721(1);
		iLocal_833 = 0;
	}
	__LIB_4__::func_445(1);
	__LIB_6__::func_699(&iLocal_538, &Local_559);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[1]))
	{
		__LIB_2__::func_56(uLocal_443[1], 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[2]))
	{
		__LIB_2__::func_56(uLocal_443[2], 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[3]))
	{
		__LIB_2__::func_56(uLocal_443[3], 1, 1);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_779))
	{
		MAP::REMOVE_BLIP(&iLocal_779);
	}
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Local_457[0 /*2*/], Local_457[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(Global_35, Local_457[0 /*2*/], Local_457[0 /*2*/].f_1, -1.5f);
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
	}
	if (iLocal_14 == 1)
	{
		PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
		PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
	}
	func_44(0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 6;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 6;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 6;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 6;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 5:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 6:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
		case 7:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 9:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
	}
}

bool func_11()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (iLocal_14 != 0)
	{
		return false;
	}
	iVar1 = __LIB_0__::func_979(Local_15.f_51);
	switch (iVar1)
	{
		case 6:
		case 7:
			if (Local_15.f_51.f_4 == 3)
			{
				iVar0 = 2097152;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 9:
			iVar0 = 2097152;
			break;
		case 11:
			iVar0 = 8192;
			break;
		default:
			return true;
	}
	iVar2 = __LIB_4__::func_439(iVar0);
	if (__LIB_3__::func_151(iVar2) || __LIB_0__::func_730(iVar2))
	{
		return true;
	}
	return false;
}

bool func_12()
{
	switch (iLocal_774)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_15))
			{
				__LIB_4__::func_446();
				func_57();
				func_58();
				func_59();
				func_60();
				func_61();
				func_62();
				func_63();
				func_64();
				func_63();
				iLocal_774 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_366(&Local_229))
			{
				return false;
			}
			if (!__LIB_3__::func_316(&Local_430))
			{
				return false;
			}
			if (iLocal_14 == 1)
			{
				if (!__LIB_3__::func_315(&uLocal_460))
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_13()
{
	switch (iLocal_775)
	{
		case 0:
			if (__LIB_3__::func_479(Local_15.f_51, Local_15.f_51.f_3, &Local_229, &uLocal_443, 1, 0, -1, 1))
			{
				iLocal_775 = 1;
			}
			break;
		case 1:
			__LIB_3__::func_400(Local_15.f_51, &Local_430, Local_15.f_51.f_3, 0, 0, -1, 0);
			func_70();
			__LIB_4__::func_445(0);
			func_71();
			func_72();
			iLocal_775 = 6;
			break;
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[1]))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_229[1 /*32*/].f_1);
			}
			else
			{
				func_7();
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[0]))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_229[0 /*32*/].f_1);
			}
			return true;
	}
	return false;
}

bool func_14()
{
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_INT"))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_INT", true);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_422, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_422, false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_422);
		return true;
	}
	return false;
}

void func_15(int iParam0)
{
	iLocal_614 = iParam0;
}

void func_17()
{
	__LIB_0__::func_11();
	__LIB_0__::func_11();
	if (iLocal_14 == 0)
	{
		if (iLocal_614 != 4)
		{
			func_75();
		}
	}
	else if (iLocal_614 != 16)
	{
		func_76();
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_422))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_422, false))
		{
			fLocal_736 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_422);
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_422.f_1))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_422.f_1, false))
		{
			fLocal_737 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_422.f_1);
		}
	}
	if (iLocal_829 == 0)
	{
		if (PED::_0xA0BC8FAED8CFEB3C(uLocal_443[0]))
		{
			__LIB_12__::func_514(uLocal_443[0], __LIB_12__::func_505(9), 1);
			iLocal_829 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[2]))
	{
		AUDIO::STOP_PED_SPEAKING(uLocal_443[2], true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[3]))
	{
		AUDIO::STOP_PED_SPEAKING(uLocal_443[3], true);
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_782 = PED::GET_MOUNT(Global_35);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[1]) && ENTITY::DOES_ENTITY_EXIST(iLocal_782))
	{
		if (__LIB_0__::func_94(iLocal_782, vLocal_469, 1) <= 4f)
		{
			if (!PED::IS_PED_ON_MOUNT(Global_35) && iLocal_782 != 0)
			{
				if (!__LIB_0__::func_163(iLocal_782, 518218985))
				{
					TASK::_TASK_FLEE_FROM_PED(iLocal_782, uLocal_443[1], 0f, 0f, 0f, 5f, 5000, 256, 1f, 0);
				}
			}
		}
	}
}

bool func_19()
{
	switch (iLocal_14)
	{
		case 0:
			switch (iLocal_614)
			{
				case 0:
					func_91();
					break;
				case 1:
					func_92();
					break;
				case 2:
					func_93();
					break;
				case 3:
					func_94();
					break;
				case 5:
					func_95();
					break;
				case 6:
					func_96();
					break;
				case 7:
					func_97();
					break;
				case 8:
					func_98();
					break;
				case 4:
					func_99();
					break;
				case 10:
					Local_15.f_44 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_443[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[0], true);
					return true;
				case 9:
					PED::SET_PED_KEEP_TASK(uLocal_443[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[0], true);
					return true;
			}
			break;
		case 1:
			if (iLocal_614 >= 14)
			{
				func_100(&Local_861);
			}
			switch (iLocal_614)
			{
				case 11:
					func_101();
					break;
				case 12:
					func_102();
					break;
				case 13:
					func_103();
					break;
				case 14:
					func_104();
					break;
				case 15:
					func_105();
					break;
				case 16:
					func_106();
					break;
				case 18:
					Local_15.f_44 = 1;
					PED::SET_PED_KEEP_TASK(uLocal_443[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[4], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[5], true);
					return true;
				case 17:
					PED::SET_PED_KEEP_TASK(uLocal_443[1], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[0], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[2], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[3], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[4], true);
					PED::SET_PED_KEEP_TASK(uLocal_443[5], true);
					return true;
			}
			break;
	}
	return false;
}

void func_24()
{
	if (bLocal_613)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_612))
		{
			PED::_0x2EB75FB86C41F026(iLocal_612, 3, 1);
			bLocal_613 = false;
		}
	}
}

void func_35()
{
	if (__LIB_2__::func_1(uLocal_443[1], 0, 1))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
		if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_443[1], false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		if (PED::IS_PED_ON_MOUNT(uLocal_443[1]))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		}
		TASK::_TASK_FLEE_FROM_PED(0, Global_35, 0f, 0f, 0f, 999f, -1, 64, 2f, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		func_128(1);
	}
}

void func_36(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		func_135(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		__LIB_3__::func_335(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = __LIB_3__::func_167(uParam0->f_3, uParam0->f_185);
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
		__LIB_0__::func_701(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_44(bool bParam0)
{
	if (bParam0)
	{
		if (bLocal_504 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[1]))
			{
				PED::_0x89F5E7ADECCCB49C(uLocal_443[1], "INJURED_RIGHT_LEG");
				bLocal_504 = true;
			}
		}
	}
	else if (bLocal_504)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[1]))
		{
			PED::_0x58F7DB5BD8FA2288(uLocal_443[1]);
			bLocal_504 = false;
		}
	}
}

void func_57()
{
	if (iLocal_14 == 1)
	{
		Local_457[0 /*2*/] = "MECH_BUSTED@ARREST";
		Local_457[0 /*2*/].f_1 = "hands_up_transition";
		__LIB_3__::func_318(Local_457[0 /*2*/], &uLocal_460);
	}
}

void func_58()
{
	bool bVar0;
	int iVar1;
	bVar0 = __LIB_4__::func_503(20, 5);
	if (!bVar0)
	{
		__LIB_1__::func_683(&(Local_430[0 /*12*/].f_11), 16);
	}
	Local_430[0 /*12*/].f_7 = joaat("P_LANTERN05X");
	Local_430[0 /*12*/].f_10 = 1;
	Local_430[0 /*12*/].f_4 = { 0f, 0f, 0f };
	switch (Local_15.f_51.f_4)
	{
		case 0:
			Local_430[0 /*12*/] = { 1602.873f, 1619.675f, 146.9995f };
			break;
		case 1:
			Local_430[0 /*12*/] = { 1422.484f, 1099.328f, 185.5029f };
			break;
		case 2:
			Local_430[0 /*12*/] = { 2040.918f, 1719.684f, 154.6122f };
			break;
		case 3:
			Local_430[0 /*12*/] = { 649.54f, 1901.99f, 213.34f };
			break;
		case 4:
			Local_430[0 /*12*/] = { 948.2737f, 386.9772f, 110.5665f };
			break;
		case 5:
			Local_430[0 /*12*/] = { 1353.89f, 467.55f, 87.5f };
			break;
		case 6:
			Local_430[0 /*12*/] = { -468.9537f, -169.3734f, 43.0089f };
			break;
		case 7:
			Local_430[0 /*12*/] = { 1335.754f, -1625.608f, 65.62613f };
			break;
		case 8:
			Local_430[0 /*12*/] = { 1521.31f, -2080.63f, 42.71f };
			break;
		case 9:
			Local_430[0 /*12*/] = { 1166.897f, -2133.632f, 55.90456f };
			break;
	}
	iVar1 = 298;
	__LIB_3__::func_414(&uLocal_611, Local_430[0 /*12*/], 1f, 2, iVar1, 0);
	__LIB_3__::func_314(&Local_430);
}

void func_59()
{
	switch (iLocal_14)
	{
		case 0:
			switch (Local_15.f_51.f_4)
			{
				case 0:
					vLocal_469 = { 1604.07f, 1616.55f, 147.29f };
					fLocal_472 = 140.81f;
					break;
				case 1:
					vLocal_469 = { 1424.09f, 1102.421f, 185.6158f };
					fLocal_472 = -75.88f;
					break;
				case 2:
					vLocal_469 = { 2042.723f, 1721.919f, 154.4438f };
					fLocal_472 = 0f;
					break;
				case 3:
					vLocal_469 = { 648.3405f, 1898.194f, 212.7968f };
					fLocal_472 = 90f;
					break;
				case 4:
					vLocal_469 = { 946.5699f, 388.4111f, 110.6878f };
					fLocal_472 = 9f;
					break;
				case 5:
					vLocal_469 = { 1357.1f, 466.92f, 87.62f };
					fLocal_472 = -166.34f;
					break;
				case 6:
					vLocal_469 = { -471.4132f, -171.1197f, 42.99802f };
					fLocal_472 = -145.18f;
					break;
				case 7:
					vLocal_469 = { 1335.407f, -1622.697f, 65.6165f };
					fLocal_472 = -51.57f;
					break;
				case 8:
					vLocal_469 = { 1519.02f, -2082.39f, 42.68f };
					fLocal_472 = 101.41f;
					break;
				case 9:
					vLocal_469 = { 1169.49f, -2127.449f, 56.3056f };
					fLocal_472 = 180f;
					break;
			}
			break;
		case 1:
			switch (Local_15.f_51.f_4)
			{
				case 0:
					vLocal_469 = { 1602.984f, 1616.687f, 147.0576f };
					fLocal_472 = -151.81f;
					break;
				case 1:
					vLocal_469 = { 1424.09f, 1102.421f, 185.6158f };
					fLocal_472 = -75.88f;
					break;
				case 2:
					vLocal_469 = { 2042.723f, 1721.919f, 154.4438f };
					fLocal_472 = 0f;
					break;
				case 3:
					vLocal_469 = { 648.3405f, 1898.194f, 212.7968f };
					fLocal_472 = 92.98f;
					break;
				case 4:
					vLocal_469 = { 946.5699f, 388.4111f, 110.6878f };
					fLocal_472 = 9f;
					break;
				case 5:
					vLocal_469 = { 1357.1f, 466.92f, 87.52f };
					fLocal_472 = -166.34f;
					break;
				case 6:
					vLocal_469 = { -471.4132f, -171.1197f, 42.99802f };
					fLocal_472 = -145.18f;
					break;
				case 7:
					vLocal_469 = { 1335.407f, -1622.697f, 65.6165f };
					fLocal_472 = -51.57f;
					break;
				case 8:
					vLocal_469 = { 1519.02f, -2082.39f, 42.63f };
					fLocal_472 = 101.41f;
					break;
				case 9:
					vLocal_469 = { 1168.803f, -2132.834f, 56.07936f };
					fLocal_472 = 0f;
					break;
			}
			break;
	}
}

void func_60()
{
	if (iLocal_14 == 0)
	{
		switch (__LIB_1__::func_898())
		{
			case 6:
			case 7:
				if (Local_15.f_51.f_4 == 3)
				{
					vLocal_473 = { -306.7529f, 791.3841f, 116.9215f };
					vLocal_476 = { -312.9f, 779.62f, 118.19f };
				}
				else
				{
					vLocal_473 = { 2941.94f, 1351.1f, 43.01f };
					vLocal_476 = { 2949.25f, 1347.58f, 44.31f };
				}
				break;
			case 9:
				vLocal_473 = { -306.7529f, 791.3841f, 116.9215f };
				vLocal_476 = { -312.9f, 779.62f, 118.19f };
				break;
			case 11:
				vLocal_473 = { 2807.66f, -1111.92f, 45.61f };
				vLocal_476 = { 2819.86f, -1113.45f, 45.9f };
				break;
		}
		Local_229[1 /*32*/].f_6 = { vLocal_469 };
		Local_229[1 /*32*/].f_9 = fLocal_472;
		Local_229[0 /*32*/].f_6 = { vLocal_469 };
		Local_229[0 /*32*/].f_9 = fLocal_472;
		vLocal_479 = { vLocal_469 };
		vLocal_482 = { 0f, 0f, 0f };
	}
	else
	{
		Local_229[1 /*32*/].f_6 = { vLocal_469 };
		Local_229[1 /*32*/].f_9 = fLocal_472;
		Local_229[0 /*32*/].f_6 = { vLocal_469 };
		Local_229[0 /*32*/].f_9 = fLocal_472;
		Local_229[2 /*32*/].f_6 = { vLocal_469 + Vector(-10f, 5f, 0f) };
		Local_229[2 /*32*/].f_9 = fLocal_472;
		Local_229[3 /*32*/].f_6 = { vLocal_469 + Vector(-10f, 0f, 0f) };
		Local_229[3 /*32*/].f_9 = fLocal_472;
		Local_229[4 /*32*/].f_6 = { vLocal_469 + Vector(-10f, 5f, 0f) };
		Local_229[4 /*32*/].f_9 = fLocal_472;
		Local_229[5 /*32*/].f_6 = { vLocal_469 + Vector(-10f, 0f, 0f) };
		Local_229[5 /*32*/].f_9 = fLocal_472;
	}
}

void func_61()
{
	if (iLocal_14 == 0)
	{
		Local_422.f_4 = "script@beat@wilderness@berryGang@trapped_woman";
		Local_422.f_5 = "script@beat@wilderness@inbredkidnap@goodbye";
	}
	else
	{
		Local_422.f_4 = "script@beat@wilderness@berrygang@trapped_woman_trap";
	}
}

void func_62()
{
	if (iLocal_14 == 0)
	{
		switch (__LIB_1__::func_898())
		{
			case 6:
			case 7:
				Local_229[1 /*32*/].f_1 = joaat("RE_TRAPPEDWOMAN_FEMALES_01");
				Local_229[1 /*32*/].f_3 = -2024423022;
				StringCopy(&(Local_229[1 /*32*/].f_23), "CONCERNED_AUNT", 64);
				break;
			case 9:
				Local_229[1 /*32*/].f_1 = joaat("RE_TRAPPEDWOMAN_FEMALES_01");
				Local_229[1 /*32*/].f_3 = -2024423022;
				StringCopy(&(Local_229[1 /*32*/].f_23), "CONCERNED_AUNT", 64);
				break;
			case 11:
				Local_229[1 /*32*/].f_1 = joaat("RE_TRAPPEDWOMAN_FEMALES_01");
				Local_229[1 /*32*/].f_3 = -1726716657;
				StringCopy(&(Local_229[1 /*32*/].f_23), "PC_TOWNSPERSON", 64);
				break;
		}
		Local_229[0 /*32*/].f_1 = joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT");
	}
	else
	{
		Local_229[1 /*32*/].f_1 = joaat("RE_TRAPPEDWOMAN_FEMALES_01");
		Local_229[1 /*32*/].f_3 = 1799817589;
		StringCopy(&(Local_229[1 /*32*/].f_23), "0867_A_F_M_Civ_Poor_White_AVOID_05", 64);
		Local_229[4 /*32*/].f_1 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
		Local_229[5 /*32*/].f_1 = __LIB_2__::func_44(joaat("HORSE_CLASS_RIDING"), 1);
		Local_229[2 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
		Local_229[2 /*32*/].f_3 = 1913827357;
		StringCopy(&(Local_229[2 /*32*/].f_23), "1063_G_M_M_UniCriminals_01_WHITE_10", 64);
		Local_229[3 /*32*/].f_1 = joaat("G_M_M_UNICRIMINALS_01");
		Local_229[3 /*32*/].f_3 = 1640861587;
		StringCopy(&(Local_229[3 /*32*/].f_23), "1064_G_M_M_UniCriminals_01_BLACK_03", 64);
	}
	__LIB_3__::func_284(&Local_229);
}

void func_63()
{
	if (iLocal_14 == 0)
	{
		switch (__LIB_1__::func_898())
		{
			case 6:
			case 7:
				if (Local_15.f_51.f_4 == 3)
				{
					sLocal_502 = "RETW_TAKE_HOME_B";
					iLocal_512 = 9;
				}
				else
				{
					sLocal_502 = "RETW_TAKE_HOME_A";
					iLocal_512 = 6;
				}
				break;
			case 9:
				sLocal_502 = "RETW_TAKE_HOME_B";
				iLocal_512 = 9;
				break;
			case 11:
				sLocal_502 = "RETW_TAKE_HOME_C";
				iLocal_512 = 11;
				break;
		}
		sLocal_503 = "RETW_RETURN_TO_WOMAN";
	}
}

void func_64()
{
	if (iLocal_14 == 0)
	{
		func_181(&(Local_559[1 /*17*/]), "INTERACT_GREET", func_180(67), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_181(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE", func_180(68), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_181(&(Local_559[0 /*17*/]), "BERRY_CON_HELP", func_180(150), joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		__LIB_4__::func_406(&(Local_559[0 /*17*/]), 1);
		__LIB_3__::func_621(&(Local_559[0 /*17*/]), 1, 0);
		__LIB_3__::func_362(&(Local_559[0 /*17*/]), 6f);
	}
	else
	{
		func_181(&(Local_559[1 /*17*/]), "INTERACT_GREET", func_180(67), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		func_181(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE", func_180(68), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		func_181(&(Local_559[0 /*17*/]), "BERRY_CON_HELP", func_180(150), joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
		__LIB_3__::func_362(&(Local_559[0 /*17*/]), 7f);
		__LIB_3__::func_621(&(Local_559[0 /*17*/]), 1, 0);
	}
}

void func_70()
{
	PED::SET_PED_CONFIG_FLAG(uLocal_443[0], 186, false);
	PED::_0xAE6004120C18DF97(uLocal_443[0], 0, 0);
	PED::_0xAE6004120C18DF97(uLocal_443[0], 1, 0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[0], false);
	PED::SET_PED_CAN_RAGDOLL(uLocal_443[0], false);
	__LIB_3__::func_459(uLocal_443[0], 0);
	PED::_0x6569F31A01B4C097(uLocal_443[0], 1, 0);
	PED::_0x6569F31A01B4C097(uLocal_443[0], 0, 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_443[0], 324, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_443[0], 257, true);
	__LIB_4__::func_405(uLocal_443[0], &(uLocal_488[1]), 1, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[1], false);
	__LIB_3__::func_303(&(Local_229[1 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_443[1], 146, true);
	__LIB_1__::func_991(uLocal_443[1], joaat("HONOR_EVENT_AMBIENT_KILL"));
	if (iLocal_14 == 0)
	{
		__LIB_4__::func_405(uLocal_443[1], &(uLocal_488[0]), 1, 1);
	}
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[1], Local_229[1 /*32*/].f_6, Local_229[1 /*32*/].f_9, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[0], Local_229[0 /*32*/].f_6, Local_229[0 /*32*/].f_9, true, false, true);
	if (ENTITY::DOES_ENTITY_EXIST(Local_430[0 /*12*/].f_8))
	{
		OBJECT::_0x7FCD49388BC9B775(Local_430[0 /*12*/].f_8, 0);
		Local_430[0 /*12*/].f_2 = (Local_430[0 /*12*/].f_2 + 0.09f);
		ENTITY::SET_ENTITY_COORDS(Local_430[0 /*12*/].f_8, Local_430[0 /*12*/], true, false, true, true);
		ENTITY::SET_ENTITY_ROTATION(Local_430[0 /*12*/].f_8, 90f, 0f, 0f, 2, true);
	}
	__LIB_2__::func_133(uLocal_443[1], &(Local_229[1 /*32*/].f_23), 0);
	__LIB_3__::func_285(uLocal_443[1], &Local_15, 0);
	if (iLocal_14 == 0)
	{
		PED::_0xAE6004120C18DF97(uLocal_443[1], 0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_430[0 /*12*/].f_8))
	{
		GRAPHICS::_0xE63D68F455CA0B47(2, Local_430[0 /*12*/], 1.2f, 1.2f, 1f);
	}
	__LIB_2__::func_279(uLocal_443[1], 1);
	PED::_0xF1C03A5352243A30(uLocal_443[1]);
	MAP::ALLOW_SONAR_BLIPS(true);
	iLocal_485 = VOLUME::_CREATE_VOLUME_BOX(vLocal_476, 0f, 0f, 0f, 2f, 2f, 2f);
	PED::_0x4C39C95AE5DB1329(iLocal_485, 0, 15);
	__LIB_3__::func_557(&iLocal_491, vLocal_479, 0f, 0f, 0f, func_198(), "HelpBlocker");
	PED::_0x7C00CFC48A782DC0(iLocal_491, uLocal_443[1], 0f, 3.1f, 0f, vLocal_482 + Vector(20f, 0f, 0f), 2, 1);
	iLocal_492 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_200(), "HelpBlocker2");
	PED::_0x7C00CFC48A782DC0(iLocal_492, uLocal_443[1], -2.75f, 0f, 0f, vLocal_482 + Vector(90f, 0f, 0f), 2, 1);
	iLocal_493 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_201(), "HelpEnabler");
	PED::_0x7C00CFC48A782DC0(iLocal_493, uLocal_443[1], func_202(), func_203(), 2, 1);
	iLocal_494 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_204(), "HelpEnabler2");
	PED::_0x7C00CFC48A782DC0(iLocal_494, uLocal_443[1], func_205(), func_206(), 2, 1);
	iLocal_495 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_201(), "HelpEnabler3");
	PED::_0x7C00CFC48A782DC0(iLocal_495, uLocal_443[1], func_208(), func_203(), 2, 1);
	iLocal_496 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vLocal_479, 0f, 0f, 0f, func_210(), "HelpEnablerNormalNav");
	PED::_0x7C00CFC48A782DC0(iLocal_496, uLocal_443[1], func_211(), func_203(), 2, 1);
	PED::_0x028E7B3BBA0BD2FC(uLocal_443[0]);
	__LIB_1__::func_864(uLocal_443[0], 0, 0);
	PED::SET_PED_CAN_RAGDOLL(uLocal_443[0], true);
	if (iLocal_14 == 1)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[2], Local_229[2 /*32*/].f_6, Local_229[2 /*32*/].f_9, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[3], Local_229[3 /*32*/].f_6, Local_229[3 /*32*/].f_9, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[4], Local_229[4 /*32*/].f_6, Local_229[4 /*32*/].f_9, true, false, true);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[5], Local_229[5 /*32*/].f_6, Local_229[5 /*32*/].f_9, true, false, true);
		PED::_SET_PED_ON_MOUNT(uLocal_443[2], uLocal_443[4], -1, true);
		PED::_SET_PED_ON_MOUNT(uLocal_443[3], uLocal_443[5], -1, true);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_443[2], 2);
		PED::SET_PED_COMBAT_MOVEMENT(uLocal_443[3], 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_443[2], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_443[3], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_443[1], 5, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_443[2], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_443[3], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_443[1], 17, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_443[1], 3, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_443[2], true, true);
		WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_443[3], true, true);
		__LIB_4__::func_7(uLocal_443[2], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_4__::func_7(uLocal_443[3], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), -1, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		__LIB_4__::func_7(uLocal_443[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
		WEAPON::SET_AMMO_IN_CLIP(uLocal_443[2], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100);
		WEAPON::SET_AMMO_IN_CLIP(uLocal_443[3], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 100);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_443[4], true);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_443[5], true);
		PED::APPLY_DAMAGE_TO_PED(uLocal_443[1], 5, 1, 54157, 0);
		__LIB_1__::func_991(uLocal_443[2], 0);
		__LIB_1__::func_991(uLocal_443[3], 0);
		__LIB_3__::func_303(&(Local_229[2 /*32*/].f_22));
		PED::SET_PED_CONFIG_FLAG(uLocal_443[2], 146, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_443[2], 383, true);
		__LIB_3__::func_303(&(Local_229[3 /*32*/].f_22));
		PED::SET_PED_CONFIG_FLAG(uLocal_443[3], 146, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_443[3], 383, true);
		__LIB_2__::func_190(uLocal_443[1], 100);
		__LIB_2__::func_463(uLocal_443[1], joaat("CONSUMABLE_CIGARETTE_BOX"), 1, 0);
	}
	else
	{
		func_44(1);
		PED::APPLY_DAMAGE_TO_PED(uLocal_443[1], 5, 1, 38142, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_443[1], 2, true);
		PED::SET_PED_CONFIG_FLAG(uLocal_443[1], 269, true);
		PED::SET_PED_CONFIG_FLAG(Global_35, 2, true);
		iLocal_506 = 1;
		__LIB_2__::func_190(uLocal_443[1], 200);
		__LIB_2__::func_463(uLocal_443[1], joaat("CONSUMABLE_CHEWING_TOBACCO"), 1, 0);
	}
}

void func_71()
{
	if (iLocal_14 == 0)
	{
		Local_422 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_422.f_4, 64, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_422, vLocal_469, 0f, 0f, fLocal_472, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "player", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "Horse", uLocal_443[0], 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "LADY", uLocal_443[1], 0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_422, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_422);
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_L_Bool", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "LIFT_BOOL", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "MOURN_BOOL", false, false);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_INT");
	}
	else
	{
		Local_422 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_422.f_4, 0, 0, false, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_422, vLocal_469, 0f, 0f, fLocal_472, 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "player", Global_35, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422, "LADY", uLocal_443[1], 0);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_L_Bool", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_INT");
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_422, true, false))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_422);
		}
	}
}

void func_72()
{
	__LIB_2__::func_22(&(Local_15.f_5), uLocal_443[1]);
	__LIB_2__::func_51(&(Local_15.f_5), 1);
	__LIB_2__::func_180(&(Local_15.f_5), 1);
	__LIB_2__::func_111(&(Local_15.f_5), 1);
	__LIB_2__::func_110(&(Local_15.f_5), 1);
	__LIB_2__::func_105(&(Local_15.f_5), 1);
	__LIB_2__::func_50(&(Local_15.f_5), 1);
	__LIB_2__::func_634(&(Local_15.f_5), 1);
	__LIB_2__::func_182(&(Local_15.f_5), 1);
}

void func_75()
{
	int iVar0;
	if (bLocal_505)
	{
		return;
	}
	if (((iLocal_623 == 0 || iLocal_623 == 1) || iLocal_623 == 2) || iLocal_623 == 5)
	{
		if (((((__LIB_0__::func_393(Global_35, iLocal_491, 0, 1) || __LIB_0__::func_393(Global_35, iLocal_492, 0, 1)) && !__LIB_0__::func_393(Global_35, iLocal_493, 0, 1)) && !__LIB_0__::func_393(Global_35, iLocal_494, 0, 1)) && !__LIB_0__::func_393(Global_35, iLocal_495, 0, 1)) && !__LIB_0__::func_393(Global_35, iLocal_496, 0, 1))
		{
			__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
		}
		else
		{
			__LIB_3__::func_515(&(Local_559[0 /*17*/]), 1, 0);
		}
	}
	iVar0 = func_226(&(uLocal_443[1]), &iLocal_538, 12f, &Local_559, &(Local_15.f_192), 0f, 1, 0, 0, iLocal_860, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iVar0 != -1)
	{
	}
	switch (iLocal_623)
	{
		case 0:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
							iLocal_624 = 1;
							break;
						case 2:
							__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
							iLocal_624 = 2;
							break;
						case 0:
							if (func_227(iVar0))
							{
								iLocal_623 = 13;
							}
							break;
					}
					break;
				case 1:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_443[1], 0);
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_228(uLocal_443[1], Global_35, func_180(71), 3f, 0))
					{
						iLocal_624 = 4;
						func_229();
					}
					break;
				case 2:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_443[1], 0);
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_228(uLocal_443[1], Global_35, func_180(72), 3f, 0))
					{
						iLocal_624 = 5;
						func_229();
					}
					break;
				case 4:
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
					{
						iLocal_623 = 2;
						iLocal_624 = 0;
						__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
						__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
						__LIB_3__::func_515(&(Local_559[0 /*17*/]), 1, 0);
					}
					break;
				case 5:
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
					{
						iLocal_623 = 1;
						iLocal_624 = 0;
						__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
						__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
						__LIB_3__::func_515(&(Local_559[0 /*17*/]), 1, 0);
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
							iLocal_624 = 1;
							break;
						case 0:
							if (func_227(iVar0))
							{
								__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(73), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_148(&uLocal_684);
								__LIB_0__::func_37(&uLocal_669);
								iLocal_623 = 13;
							}
							break;
					}
					break;
				case 1:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_443[1], 0);
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_228(uLocal_443[1], Global_35, func_180(71), 3f, 0))
					{
						func_229();
						iLocal_624 = 6;
					}
					break;
				case 6:
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else
					{
						iLocal_623 = 5;
						iLocal_624 = 0;
						Local_559[0 /*17*/].f_13 = "";
						__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
						__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
						__LIB_3__::func_515(&(Local_559[0 /*17*/]), 1, 0);
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
							iLocal_624 = 2;
							break;
						case 0:
							if (func_227(iVar0))
							{
								__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(73), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_623 = 13;
							}
							break;
					}
					break;
				case 2:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_443[1], 0);
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else if (func_228(uLocal_443[1], Global_35, func_180(72), 3f, 0))
					{
						func_229();
						iLocal_624 = 6;
					}
					break;
				case 6:
					if (func_227(iVar0))
					{
						iLocal_623 = 13;
					}
					else
					{
						iLocal_623 = 5;
						iLocal_624 = 0;
						Local_559[0 /*17*/].f_13 = "";
						__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
						__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
						__LIB_3__::func_515(&(Local_559[0 /*17*/]), 1, 0);
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					if (func_227(iVar0))
					{
						__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(73), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_804 = 1;
						__LIB_1__::func_148(&uLocal_684);
						__LIB_0__::func_37(&uLocal_669);
						iLocal_623 = 13;
					}
					break;
			}
			break;
		case 6:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							__LIB_2__::func_504(uLocal_443[1], 0);
							iLocal_806 = 1;
							iLocal_740 = 3;
							__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
							iLocal_624 = 1;
							break;
					}
					break;
				case 1:
					if (!func_235())
					{
						if (func_228(uLocal_443[1], Global_35, func_180(86), 0f, 0))
						{
							iLocal_624 = 6;
						}
					}
					break;
				case 6:
					if (!func_235())
					{
						__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
						__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
						__LIB_2__::func_451(&iLocal_538, 0);
						iLocal_860 = __LIB_2__::func_340(3, 0, 0);
						__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
						Local_559[2 /*17*/].f_13 = func_180(69);
						__LIB_2__::func_360(&(Local_559[2 /*17*/]), "BEAT_GRT_NEG");
						iLocal_623 = 8;
						iLocal_624 = 0;
					}
					break;
			}
			break;
		case 7:
			switch (iVar0)
			{
				case 1:
					func_239();
					iLocal_787 = 1;
					iLocal_740 = 2;
					__LIB_2__::func_451(&iLocal_538, 0);
					iLocal_860 = __LIB_2__::func_340(3, 0, 0);
					if (!MAP::DOES_BLIP_EXIST(iLocal_450[1]))
					{
						iLocal_450[1] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_443[1]);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_450[1], "RE_INTER_STRANGER");
					}
					break;
				case 2:
					__LIB_2__::func_451(&iLocal_538, 0);
					iLocal_860 = __LIB_2__::func_340(3, 0, 0);
					iLocal_787 = 1;
					iLocal_740 = 7;
					break;
			}
			break;
		case 8:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							__LIB_0__::func_8(&Global_1935630, 4);
							__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
							__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
							__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
							if (iLocal_810 == 0)
							{
								__LIB_1__::func_715(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
								iLocal_810 = 1;
							}
							iLocal_790 = 1;
							iLocal_624 = 2;
							break;
					}
					break;
				case 2:
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_443[1], Local_422))
					{
						if (!func_235())
						{
							if (func_228(uLocal_443[1], Global_35, func_180(70), 0f, 0))
							{
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
								TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
								if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_443[1], false))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								}
								if (PED::IS_PED_ON_MOUNT(uLocal_443[1]))
								{
									TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
								}
								TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 656, 0);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
								func_15(8);
								iLocal_624 = 6;
							}
						}
					}
					break;
				case 6:
					break;
			}
			break;
		case 9:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
							__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
							iLocal_624 = 1;
							break;
						case 2:
							if (func_240())
							{
								__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
								iLocal_624 = 2;
							}
							else
							{
								__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
								__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
								iLocal_624 = 2;
							}
							break;
					}
					break;
				case 1:
					if (!func_235())
					{
						if (func_228(uLocal_443[1], Global_35, func_180(76), 0f, 0))
						{
							iLocal_624 = 6;
						}
					}
					break;
				case 2:
					if (!func_235())
					{
						if (func_228(uLocal_443[1], Global_35, func_180(77), 0f, 0))
						{
							if (func_240())
							{
								iLocal_623 = 10;
								Local_559[2 /*17*/].f_13 = func_180(78);
								iLocal_624 = 0;
								__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
							}
							else
							{
								iLocal_624 = 6;
							}
						}
					}
					break;
				case 6:
					func_128(1);
					iLocal_624 = 0;
					iLocal_623 = 13;
					break;
			}
			break;
		case 10:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							iLocal_624 = 2;
							break;
					}
					break;
				case 2:
					if (!func_235())
					{
						if (func_228(uLocal_443[1], Global_35, func_180(79), 0f, 0))
						{
							__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
							iLocal_623 = 11;
							Local_559[2 /*17*/].f_13 = func_180(81);
							iLocal_624 = 0;
						}
					}
					break;
			}
			break;
		case 11:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
							iLocal_624 = 2;
							break;
					}
					break;
				case 2:
					if (!func_235())
					{
						if (func_228(uLocal_443[1], Global_35, func_180(82), 0f, 0))
						{
							func_15(4);
							iLocal_624 = 6;
						}
					}
					break;
				case 6:
					iLocal_624 = 0;
					iLocal_623 = 13;
					break;
			}
			break;
		case 12:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
							__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
							__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
							iLocal_624 = 1;
							break;
						case 2:
							__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
							__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
							__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
							iLocal_624 = 2;
							break;
					}
					break;
				case 1:
					if (!func_235())
					{
						if (func_228(uLocal_443[1], Global_35, func_180(89), 0f, 0))
						{
							iLocal_624 = 4;
						}
					}
					break;
				case 2:
					if (!func_235())
					{
						if (func_228(uLocal_443[1], Global_35, func_180(90), 0f, 0))
						{
							iLocal_624 = 5;
						}
					}
					break;
				case 4:
					iLocal_623 = 13;
					break;
				case 5:
					iLocal_624 = 0;
					iLocal_623 = 13;
					break;
			}
			break;
		case 13:
			__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
			break;
		case 14:
			break;
	}
}

void func_76()
{
	int iVar0;
	if (bLocal_505)
	{
		return;
	}
	iVar0 = func_226(&(uLocal_443[1]), &iLocal_538, 12f, &Local_559, &(Local_15.f_192), 0f, 1, 0, 0, iLocal_860, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	switch (iLocal_623)
	{
		case 0:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							__LIB_2__::func_504(uLocal_443[1], 500);
							__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
							iLocal_624 = 1;
							__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 2:
							__LIB_2__::func_504(uLocal_443[1], 500);
							__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
							iLocal_624 = 2;
							break;
						case 0:
							__LIB_2__::func_504(uLocal_443[1], 500);
							bLocal_828 = true;
							iLocal_623 = 13;
							break;
					}
					break;
				case 1:
					if (iLocal_622 <= 0)
					{
						if (!func_235())
						{
							__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(71), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_241();
							iLocal_624 = 4;
						}
					}
					break;
				case 2:
					if (iLocal_622 <= 0)
					{
						if (!func_235())
						{
							__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(72), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_241();
							iLocal_624 = 5;
						}
					}
					break;
				case 4:
					if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
					{
						iLocal_623 = 2;
						Local_559[2 /*17*/].f_13 = func_180(69);
						iLocal_624 = 0;
						__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
					}
					break;
				case 5:
					if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
					{
						iLocal_623 = 3;
						iLocal_624 = 0;
						Local_559[2 /*17*/].f_13 = func_180(69);
						__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
					}
					break;
			}
			break;
		case 2:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							__LIB_2__::func_504(uLocal_443[1], 500);
							iLocal_624 = 2;
							break;
						case 0:
							__LIB_2__::func_504(uLocal_443[1], 500);
							iLocal_623 = 13;
							break;
					}
					break;
				case 2:
					if (iLocal_622 <= 0)
					{
						if (!func_235())
						{
							__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(70), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_241();
							iLocal_624 = 6;
						}
					}
					break;
				case 6:
					iLocal_623 = 4;
					iLocal_624 = 0;
					__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
					break;
			}
			break;
		case 3:
			switch (iLocal_624)
			{
				case 0:
					switch (iVar0)
					{
						case 2:
							__LIB_2__::func_504(uLocal_443[1], 500);
							iLocal_624 = 2;
							break;
						case 0:
							__LIB_2__::func_504(uLocal_443[1], 500);
							iLocal_623 = 13;
							break;
					}
					break;
				case 2:
					if (iLocal_622 <= 0)
					{
						if (!func_235())
						{
							__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(70), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_241();
							iLocal_624 = 6;
						}
					}
					break;
				case 6:
					iLocal_623 = 4;
					iLocal_624 = 0;
					Local_559[2 /*17*/].f_13 = func_180(75);
					__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
					break;
			}
			break;
		case 4:
			switch (iLocal_772)
			{
				case 0:
					if (!func_235())
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(24), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_0__::func_8(&Global_1935630, 4);
						__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
						iLocal_772++;
					}
					break;
				case 1:
					if (!func_235())
					{
						__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(75), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
						iLocal_772++;
					}
					break;
				case 2:
					if (!func_235())
					{
						if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(140), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							func_242(uLocal_443[1], Global_35);
							func_243();
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, sLocal_844))
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_844, true);
							}
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[1], true);
							PED::_0xAE6004120C18DF97(uLocal_443[1], 0, 1);
							WEAPON::SET_CURRENT_PED_WEAPON(uLocal_443[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
							iLocal_772++;
						}
					}
					break;
				case 3:
					if (!func_235())
					{
						if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(141), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							__LIB_0__::func_8(&Global_1935630, 4);
							func_15(14);
							bLocal_826 = true;
							iLocal_623 = 13;
							iLocal_624 = 6;
						}
					}
					break;
			}
			break;
		case 5:
			switch (iVar0)
			{
				case 0:
					__LIB_2__::func_504(uLocal_443[1], 500);
					iLocal_623 = 13;
					break;
			}
			break;
		case 13:
			__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
			break;
		case 14:
			break;
	}
}

void func_91()
{
	iLocal_738 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING_NEW"), uLocal_443[1], 0f, 30f, 30f, 15f, -1f, 180f, false, false, -1, -1);
	func_281();
	Local_15.f_45 = 0;
	func_15(1);
}

void func_92()
{
	func_282();
	func_283();
	if (__LIB_3__::func_452(&Local_15, 1f, 80f, 65f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_422, false))
	{
		__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), 1);
		__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		func_15(2);
	}
}

void func_93()
{
	func_286(uLocal_443[1], Global_35, &uLocal_513, -1, 15, 0);
	func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
	func_282();
	func_283();
	if (!func_287() && iLocal_811 == 0)
	{
		func_288();
		func_289();
		if (iLocal_797 == 0)
		{
			func_290();
		}
	}
	if (!__LIB_0__::func_75(&uLocal_669))
	{
		if (__LIB_2__::func_118(uLocal_443[1], 1, 1) < 25f)
		{
			__LIB_1__::func_148(&uLocal_669);
		}
	}
	else if (__LIB_0__::func_264(&uLocal_669) >= 60f)
	{
		iLocal_811 = 1;
		if ((iLocal_804 == 0 && __LIB_2__::func_227(0f, 1, 0, 0)) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
		{
			func_15(7);
		}
	}
	if (PED::IS_PED_RAGDOLL(uLocal_443[1]))
	{
		__LIB_1__::func_864(uLocal_443[1], 0, 0);
	}
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_443[1], true))
	{
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[0], true);
		PED::SET_PED_CAN_RAGDOLL(uLocal_443[0], true);
		if (iLocal_810 == 0)
		{
			__LIB_1__::func_715(3, 0, 0, "RE_HONOR_CRUEL_KILLING", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
			iLocal_810 = 1;
		}
		func_15(9);
	}
	if (func_293())
	{
		func_15(3);
	}
}

void func_94()
{
	func_283();
	if (func_294())
	{
		__LIB_2__::func_279(uLocal_443[1], 0);
		if (MAP::DOES_BLIP_EXIST(iLocal_450[1]))
		{
			MAP::REMOVE_BLIP(&(iLocal_450[1]));
		}
		__LIB_4__::func_405(uLocal_443[1], &(uLocal_488[0]), 0, 1);
		func_295();
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_TALK");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_MOURN_LOOP_SUBTLE");
		func_15(5);
	}
}

void func_95()
{
	func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 8, 0);
	func_296();
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_422))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	}
	if (fLocal_736 >= 0.4f)
	{
		if (iLocal_808 == 0)
		{
			iLocal_808 = 1;
			iLocal_623 = 6;
			iLocal_624 = 0;
			__LIB_2__::func_451(&iLocal_538, 0);
			iLocal_860 = __LIB_2__::func_340(1, 0, 0);
			__LIB_4__::func_453(&(Local_559[1 /*17*/]), 0, 1);
			Local_559[1 /*17*/].f_13 = func_180(85);
			Local_559[2 /*17*/].f_13 = func_180(68);
			__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
			__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
		}
	}
	if (fLocal_736 >= 0.41f)
	{
		iLocal_805 = 1;
	}
	if (iLocal_806 == 0)
	{
		func_297();
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_TALK");
		if ((__LIB_2__::func_118(uLocal_443[1], 1, 1) <= 15f && __LIB_0__::func_264(&uLocal_642) >= 30f) && iLocal_760 > 6)
		{
			iLocal_791 = 1;
		}
		if (iLocal_791 == 1 && __LIB_2__::func_118(uLocal_443[1], 1, 1) <= 15f)
		{
			func_298();
		}
	}
	else if (iLocal_805 == 1 && __LIB_2__::func_227(-4f, 1, Global_35, 1))
	{
		func_298();
		if (iLocal_809 == 0)
		{
			iLocal_809 = 1;
			func_239();
		}
	}
	if (__LIB_0__::func_264(&uLocal_645) >= 12f && iLocal_787 == 0)
	{
		func_286(uLocal_443[1], Global_35, &uLocal_513, -1, 8, 0);
		func_299();
	}
}

void func_96()
{
	int iVar0;
	int iVar1;
	func_295();
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_422.f_1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	}
	if (!func_300(uLocal_443[1]) && !ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_473, 20f, 20f, 10f, false, true, 0))
	{
		func_286(uLocal_443[1], Global_35, &uLocal_513, -1, 15, 0);
	}
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_473, 35f, 35f, 3f, false, true, 0))
	{
		if (iLocal_820 == 0)
		{
			iLocal_820 = 1;
			func_301();
		}
		if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(Global_35)))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.5f);
		}
	}
	if (!__LIB_0__::func_75(&uLocal_687))
	{
		if (func_302())
		{
			__LIB_1__::func_148(&uLocal_687);
		}
	}
	if (__LIB_0__::func_264(&uLocal_648) > 15f)
	{
		if (func_300(uLocal_443[1]))
		{
			if (func_303())
			{
				if (iLocal_796 == 0 && !func_235())
				{
					iLocal_796 = 1;
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(108), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			if ((__LIB_4__::func_447(&uLocal_209, PED::GET_MOUNT(Global_35), vLocal_473) && func_300(Global_35)) && func_302() == 0)
			{
				if (!__LIB_0__::func_75(&uLocal_651))
				{
					__LIB_1__::func_148(&uLocal_651);
				}
				__LIB_1__::func_148(&uLocal_672);
				func_306();
			}
			else if (__LIB_4__::func_448(&uLocal_209, func_307()) && func_302() == 0)
			{
				if (!__LIB_0__::func_75(&uLocal_651))
				{
					__LIB_1__::func_148(&uLocal_651);
				}
				__LIB_1__::func_148(&uLocal_672);
				func_309();
			}
			else if (((__LIB_4__::func_449(&uLocal_209, Global_35, 20, 1090519040 /* Float: 8f */) && func_302() == 0) && PED::_0x42688E94E96FD9B4(uLocal_443[0], 3, 0) == 0f) || !func_300(Global_35))
			{
				if (!__LIB_0__::func_75(&uLocal_651))
				{
					__LIB_1__::func_148(&uLocal_651);
				}
				__LIB_1__::func_148(&uLocal_672);
				func_311();
			}
			else if (bLocal_821 == 1)
			{
				if (!__LIB_0__::func_75(&uLocal_693))
				{
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_1__::func_148(&uLocal_693);
					}
				}
				else if (__LIB_0__::func_264(&uLocal_693) >= 3f)
				{
					if (!func_312())
					{
						bLocal_821 = false;
						__LIB_0__::func_37(&uLocal_693);
					}
					else if (iLocal_744 == 0 || iLocal_743 == 0)
					{
						bLocal_821 = false;
					}
					else
					{
						__LIB_0__::func_37(&uLocal_636);
						func_313();
						__LIB_0__::func_37(&uLocal_693);
					}
				}
			}
			else if ((__LIB_0__::func_264(&uLocal_648) >= 25f && __LIB_0__::func_264(&uLocal_672) >= 5f) && iLocal_745 < 1)
			{
				if (iLocal_512 == 11)
				{
					func_314();
				}
				else if (iLocal_512 == 6 || iLocal_512 == 7)
				{
					func_315();
				}
				else
				{
					func_315();
				}
			}
			if (__LIB_0__::func_264(&uLocal_687) >= IntToFloat(func_316()))
			{
				func_317();
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_473, 6f, 6f, 2f, false, true, 0))
	{
		iLocal_807 = 1;
	}
	if (iLocal_807 == 1)
	{
		iVar0 = func_318();
		iVar1 = func_319(PED::IS_PED_IN_ANY_VEHICLE(uLocal_443[1], false));
		if (iVar0 && iVar1)
		{
			func_15(8);
		}
	}
	else
	{
		if (!__LIB_0__::func_75(&uLocal_654))
		{
			__LIB_1__::func_148(&uLocal_654);
		}
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (iLocal_835 == 0)
		{
			__LIB_4__::func_405(uLocal_443[1], &(uLocal_488[0]), 0, 0);
			iLocal_835 = 1;
		}
		func_320();
		func_321();
		if (iLocal_792 == 0)
		{
			func_322();
		}
		if (!func_300(uLocal_443[1]) && iLocal_812 == 1)
		{
			bLocal_832 = true;
			func_15(4);
		}
		func_323();
		if (!func_300(uLocal_443[1]) && iLocal_812 == 0)
		{
			if ((!PED::IS_PED_FACING_PED(uLocal_443[1], Global_35, 30f) && !__LIB_0__::func_163(uLocal_443[1], -875674219)) && iLocal_793 == 0)
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_443[1], Global_35, -1, -1f, -1f, -1f);
			}
			if (__LIB_0__::func_264(&uLocal_654) >= 30f && iLocal_793 == 0)
			{
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				if (func_240())
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(32), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(103), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_443[1], 1f, 656, 0);
				__LIB_0__::func_769();
				func_15(8);
			}
			if (__LIB_0__::func_264(&uLocal_654) >= 30f && iLocal_793 == 1)
			{
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				if (func_240())
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(32), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(103), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_443[1], 1f, 656, 0);
				__LIB_0__::func_769();
				func_15(8);
			}
		}
	}
	func_296();
	func_325();
	func_326(75);
}

void func_97()
{
	func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 3, 0);
	func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 5, 0);
	switch (iLocal_617)
	{
		case 0:
			__LIB_2__::func_451(&iLocal_538, 0);
			iLocal_860 = __LIB_2__::func_340(3, 0, 0);
			if (iLocal_810 == 0)
			{
				__LIB_1__::func_715(2, 0, 0, "RE_HONOR_IGNORED_VICTIM", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
				iLocal_810 = 1;
			}
			__LIB_4__::func_405(uLocal_443[1], &(uLocal_488[0]), 0, 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_443[1], 0);
			__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(91), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", true, false);
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_FREE_HERSELF"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_FREE_HERSELF", true);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_443[0]))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[0], true);
				PED::SET_PED_CAN_RAGDOLL(uLocal_443[0], true);
			}
			__LIB_2__::func_360(&(Local_559[0 /*17*/]), "INTERACT_ROB");
			__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
			if (MAP::DOES_BLIP_EXIST(iLocal_450[1]))
			{
				MAP::REMOVE_BLIP(&(iLocal_450[1]));
			}
			if (__LIB_0__::func_264(&uLocal_684) >= 10f)
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			iLocal_617 = 1;
			break;
		case 1:
			if (fLocal_736 >= 0.75f)
			{
				func_296();
			}
			if (fLocal_736 >= 0.99f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 656, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				__LIB_3__::func_552(uLocal_443[1]);
				__LIB_2__::func_279(uLocal_443[1], 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[1], true);
				PED::_0xAE6004120C18DF97(uLocal_443[1], 0, 1);
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(92), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_617 = 2;
			}
			break;
		case 2:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_422))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_422);
			}
			func_295();
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_4__::func_453(&(Local_559[1 /*17*/]), 0, 1);
				__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
				__LIB_4__::func_454(&(Local_559[0 /*17*/]), 1);
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
				Local_559[1 /*17*/].f_13 = func_180(87);
				Local_559[2 /*17*/].f_13 = func_180(88);
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_360(&(Local_559[0 /*17*/]), "INTERACT_ROB");
				__LIB_4__::func_454(&(Local_559[0 /*17*/]), 0);
				iLocal_860 = __LIB_2__::func_340(3, 0, 0);
				iLocal_623 = 12;
				iLocal_617 = 3;
			}
			break;
		case 3:
			func_296();
			break;
	}
}

void func_98()
{
	func_286(uLocal_443[1], Global_35, &uLocal_513, -1, 6, 0);
	if (MAP::DOES_BLIP_EXIST(iLocal_779))
	{
		MAP::REMOVE_BLIP(&iLocal_779);
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_450[1]))
	{
		MAP::REMOVE_BLIP(&(iLocal_450[1]));
	}
	func_296();
}

void func_99()
{
	switch (iLocal_620)
	{
		case 0:
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[1], true);
			PED::_0xAE6004120C18DF97(uLocal_443[1], 0, 1);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[0], true);
			PED::SET_PED_CAN_RAGDOLL(uLocal_443[0], true);
			PED::_0xEEED8FAFEC331A70(uLocal_443[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
			__LIB_2__::func_279(uLocal_443[1], 0);
			__LIB_0__::func_769();
			__LIB_2__::func_122(uLocal_443[1], "GENERIC_FRIGHTENED_HIGH", -1408561526, 0, 1, 0, 0, 1);
			__LIB_1__::func_281(&(Local_15.f_162), 1, 1);
			__LIB_0__::func_325(&iLocal_779);
			__LIB_6__::func_699(&iLocal_538, &Local_559);
			if (__LIB_2__::func_1(uLocal_443[1], 0, 0))
			{
				if (bLocal_786)
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1]) == joaat("REL_PLAYER_LIKE"))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1], joaat("REL_CIVFEMALE"));
						bLocal_786 = false;
					}
				}
			}
			if (iLocal_805 == 1 && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "exit_help_walk_girl", 1))
			{
				func_242(uLocal_443[1], Global_35);
				func_331();
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, sLocal_844))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_844, true);
				}
				if (bLocal_832 == 0)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(112), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_620 = 1;
			}
			else
			{
				__LIB_17__::func_894(&(uLocal_443[1]), &iLocal_538, &Local_559, 1, 1);
				func_35();
				iLocal_620 = 2;
			}
			break;
		case 1:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY") || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_443[1], Local_422))
			{
				if (MAP::DOES_BLIP_EXIST(iLocal_450[1]))
				{
					MAP::REMOVE_BLIP(&(iLocal_450[1]));
				}
				__LIB_17__::func_894(&(uLocal_443[1]), &iLocal_538, &Local_559, 1, 1);
				func_35();
				iLocal_620 = 3;
			}
			break;
		case 2:
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_443[1], true))
			{
				if (func_228(uLocal_443[1], Global_35, func_180(22), 0.8f, 0))
				{
					iLocal_620 = 3;
				}
			}
			else
			{
				iLocal_620 = 3;
			}
			break;
		case 3:
			func_333();
			break;
	}
}

void func_100(var uParam0)
{
	if (uParam0->f_35)
	{
		return;
	}
	if (!uParam0->f_8)
	{
		return;
	}
	if (uParam0->f_14 && !uParam0->f_13)
	{
		if (__LIB_0__::func_154(Global_1935630.f_44) || uParam0->f_6)
		{
			if (__LIB_0__::func_139(uParam0->f_36))
			{
				__LIB_1__::func_281(&(uParam0->f_36), 1, 1);
				uParam0->f_13 = 1;
			}
		}
	}
	if (!__LIB_0__::func_75(&(uParam0->f_29)))
	{
		if (__LIB_2__::func_342(uParam0->f_28))
		{
			__LIB_1__::func_283(&(uParam0->f_29), 0);
		}
	}
	else if (uParam0->f_6 && !uParam0->f_1)
	{
		if (__LIB_1__::func_285(&(uParam0->f_29), 3f) && __LIB_2__::func_342(uParam0->f_28))
		{
			__LIB_0__::func_105(1);
			uParam0->f_35 = 1;
			if (!__LIB_1__::func_285(&(uParam0->f_29), 6f) && !uParam0->f_4)
			{
				__LIB_2__::func_355(609);
			}
		}
	}
}

void func_101()
{
	iLocal_738 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING_NEW"), uLocal_443[1], 0f, 30f, 30f, 15f, -1f, 180f, false, false, -1, -1);
	func_281();
	Local_15.f_45 = 0;
	func_15(12);
}

void func_102()
{
	func_282();
	func_283();
	if (__LIB_3__::func_452(&Local_15, 1f, 80f, 65f, 1, 0, 0, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_422, false))
	{
		__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), 1);
		__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		func_15(13);
	}
}

void func_103()
{
	func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
	func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
	func_282();
	func_283();
	if (!func_287() && iLocal_811 == 0)
	{
		func_288();
		func_289();
	}
	if (__LIB_2__::func_118(uLocal_443[1], 1, 1) <= 5f)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_35))
		{
			func_15(14);
		}
		if (iLocal_778 == 2048)
		{
			func_15(14);
		}
	}
	if (bLocal_828 && __LIB_2__::func_227(-3f, 1, Global_35, 1))
	{
		func_15(14);
	}
	if (!__LIB_0__::func_75(&uLocal_678))
	{
		if (__LIB_2__::func_118(uLocal_443[1], 1, 1) < 30f)
		{
			__LIB_1__::func_148(&uLocal_678);
		}
	}
	else if (__LIB_0__::func_264(&uLocal_678) >= 30f)
	{
		if ((iLocal_804 == 0 && __LIB_2__::func_227(1f, 1, 0, 0)) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
		{
			iLocal_811 = 1;
			func_15(14);
		}
	}
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_443[1], true))
	{
		__LIB_1__::func_715(2, 0, 0, "RE_HONOR_CRUEL_KILLING", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
		func_15(17);
	}
	if (PED::_IS_PED_LASSOED(uLocal_443[1]) || PED::_IS_PED_HOGTIED(uLocal_443[1]))
	{
		func_15(14);
	}
}

void func_104()
{
	bool bVar0;
	func_283();
	func_341();
	switch (iLocal_622)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(iLocal_450[1]))
			{
				MAP::REMOVE_BLIP(&(iLocal_450[1]));
				__LIB_2__::func_73(uLocal_443[1], &(iLocal_450[1]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
			}
			__LIB_1__::func_148(&uLocal_723);
			__LIB_2__::func_279(uLocal_443[1], 0);
			iLocal_623 = 13;
			PED::SET_PED_CONFIG_FLAG(uLocal_443[1], 6, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_443[2], 6, true);
			PED::SET_PED_CONFIG_FLAG(uLocal_443[3], 6, true);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_443[4], false);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_443[5], false);
			func_343();
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[4], Local_229[4 /*32*/].f_6, Local_229[4 /*32*/].f_9, true, true, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[5], Local_229[5 /*32*/].f_6, Local_229[4 /*32*/].f_9, true, true, true);
			ENTITY::_0x9587913B9E772D29(uLocal_443[4], 0);
			ENTITY::_0x9587913B9E772D29(uLocal_443[5], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1], joaat("REL_PLAYER_ENEMY"));
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_443[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			func_344();
			iLocal_622 = 1;
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			if (__LIB_2__::func_118(uLocal_443[1], 1, 1) <= 35f)
			{
				iLocal_738 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), uLocal_443[1], 8000f, 40f, 40f, -1f, -1f, 180f, false, false, -1, -1);
				if (__LIB_2__::func_227(0, 1, uLocal_443[1], 1) || bLocal_826)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
					TASK::TASK_GO_TO_ENTITY(0, uLocal_443[1], -1, 15f, 2f, 20f, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_443[2], iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_443[2], 3f, -3f, 0f, 2f, -1, 2f, 1, 1, 1, 1, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_443[3], iLocal_501);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					func_242(uLocal_443[1], Global_35);
					func_243();
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, sLocal_844))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_844, true);
					}
					if (iLocal_811 == 1 && bLocal_826 == 0)
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(140), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_4__::func_405(uLocal_443[1], &(uLocal_488[0]), 0, 0);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[1], true);
					PED::_0xAE6004120C18DF97(uLocal_443[1], 0, 1);
					iLocal_622 = 3;
				}
			}
			else
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
				TASK::TASK_GO_TO_ENTITY(0, uLocal_443[1], -1, 15f, 2f, 20f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_443[2], iLocal_500);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_443[2], 3f, -3f, 0f, 2f, -1, 2f, 1, 1, 1, 1, 1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_443[3], iLocal_501);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
				func_242(uLocal_443[1], uLocal_443[2]);
				func_243();
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, sLocal_844))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_844, true);
				}
				__LIB_4__::func_405(uLocal_443[1], &(uLocal_488[0]), 0, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[1], true);
				PED::_0xAE6004120C18DF97(uLocal_443[1], 0, 1);
				iLocal_899 = PED::CREATE_GROUP(0);
				PED::SET_PED_AS_GROUP_LEADER(uLocal_443[2], iLocal_899, false);
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_443[3], iLocal_899);
				PED::SET_PED_CONFIG_FLAG(uLocal_443[3], 279, true);
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), true);
				iLocal_622 = 2;
			}
			break;
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), false);
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_443[1], Local_422) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_443[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				func_345();
				PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_BEHIND"), true);
				iLocal_622 = 4;
			}
			break;
		case 2:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_443[1], Local_422) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY"))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, uLocal_443[2], 0, -1f, -1f, -1f);
				TASK::TASK_PAUSE(0, 3000);
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_443[4], -1, 0, 1f, 1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				iLocal_622 = 8;
			}
			break;
		case 4:
			if (__LIB_2__::func_118(uLocal_443[1], 1, 1) <= 30f)
			{
				__LIB_4__::func_441(&uLocal_508, 0);
				func_345();
				func_346(&(uLocal_443[1]), 1, 1, 1, 1, 0, 0, 0);
				if (__LIB_2__::func_227(0f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
				{
					__LIB_1__::func_240(610, 1);
					PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), uLocal_443[1], 1, 0);
					PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), func_180(169));
					iLocal_839 = 1;
					PED::SET_PED_RESET_FLAG(Global_35, 179, true);
					if (bLocal_826 == 0)
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(141), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					vLocal_848 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
					__LIB_2__::func_451(&iLocal_538, 0);
					iLocal_860 = __LIB_2__::func_340(2, 0, 0);
					__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
					__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
					__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
					iLocal_622 = 5;
				}
			}
			else
			{
				func_15(16);
			}
			break;
		case 5:
			PED::SET_PED_RESET_FLAG(Global_35, 179, true);
			if (__LIB_2__::func_118(uLocal_443[1], 1, 1) > 20f)
			{
				if (iLocal_839 == 1)
				{
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
					PED::SET_PED_RESET_FLAG(Global_35, 179, false);
					iLocal_839 = 0;
				}
				func_15(16);
			}
			func_346(&(uLocal_443[1]), 1, 1, 1, 1, 0, 0, 0);
			if (__LIB_2__::func_227(0f, 1, uLocal_443[1], 1))
			{
				if (!__LIB_0__::func_75(&uLocal_681))
				{
					__LIB_1__::func_148(&uLocal_681);
					__LIB_2__::func_303(uLocal_443[2], Global_35, func_180(80), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (__LIB_0__::func_264(&uLocal_681) >= 7f || __LIB_3__::func_332(vLocal_848, 1) >= 5f)
				{
					if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(25), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						bLocal_826 = true;
						PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
						PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
						iLocal_622 = 9;
					}
				}
			}
			if (PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
			{
				iLocal_860 = __LIB_2__::func_340(3, 0, 0);
				__LIB_2__::func_451(&iLocal_538, 0);
				__LIB_1__::func_148(&uLocal_708);
				PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
				iLocal_622 = 6;
			}
			break;
		case 6:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
			func_346(&(uLocal_443[1]), 0, 0, 1, 1, 0, 0, 0);
			if (__LIB_0__::func_264(&uLocal_708) >= 2f)
			{
				if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(132), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_0__::func_37(&uLocal_708);
				}
			}
			if ((((PED::IS_PED_ON_MOUNT(Global_35) || __LIB_0__::func_163(Global_35, 501393341)) || __LIB_0__::func_163(Global_35, 1553520516)) || __LIB_0__::func_163(Global_35, 1920417248)) || PAD::IS_CONTROL_JUST_PRESSED(0, joaat("INPUT_HORSE_EXIT")))
			{
			}
			else
			{
				if (func_349(uLocal_443[1], &Local_861, 0.1f, 1, 0, 18, 0, 0, 0, 2000, 0, 0))
				{
					if (Local_861.f_4)
					{
						__LIB_4__::func_441(&uLocal_508, 1);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
						TASK::TASK_MOUNT_ANIMAL(0, uLocal_443[4], -1, 0, 3f, 1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
						TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
						iLocal_767 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(__LIB_0__::func_492(1)) * 0.1f));
						__LIB_2__::func_190(uLocal_443[1], iLocal_767);
						iLocal_899 = PED::CREATE_GROUP(0);
						PED::SET_PED_AS_GROUP_LEADER(uLocal_443[2], iLocal_899, false);
						PED::SET_PED_AS_GROUP_MEMBER(uLocal_443[3], iLocal_899);
						PED::SET_PED_CONFIG_FLAG(uLocal_443[3], 279, true);
						PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
						PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
						iLocal_622 = 7;
					}
					else
					{
						bVar0 = true;
					}
				}
				if ((((PLAYER::_0xDAB6A2FC56B7DE65(PLAYER::PLAYER_ID()) >= 0.8f || MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Local_861.f_25, true) >= 4f) || Local_861.f_1) || Local_861.f_5) || (bVar0 && !Local_861.f_4))
				{
					PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
					PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
					bLocal_826 = true;
					__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(143), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(25), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					iLocal_622 = 9;
				}
				Jump @3362; //curOff = 2528
				func_351();
				if (PED::IS_PED_ON_MOUNT(uLocal_443[1]))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2, 64, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_443[2], iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_443[2], 3f, -3f, 0f, 2f, -1, 2f, 1, 1, 1, 1, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_443[3], iLocal_501, 0.8f, 0.8f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					iLocal_622 = 10;
				}
				Jump @3362; //curOff = 2695
				func_351();
				if (iLocal_839 == 1)
				{
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
					PED::SET_PED_RESET_FLAG(Global_35, 179, false);
					iLocal_839 = 0;
				}
				if ((__LIB_2__::func_118(uLocal_443[2], 1, 1) <= 25f || __LIB_2__::func_118(uLocal_443[3], 1, 1) <= 25f) || __LIB_2__::func_118(uLocal_443[1], 1, 1) <= 25f)
				{
					func_286(uLocal_443[2], Global_35, &uLocal_513, 3000, 25, 0);
					func_286(uLocal_443[3], Global_35, &uLocal_513, 3000, 25, 0);
					func_286(uLocal_443[1], Global_35, &uLocal_513, 3000, 25, 0);
				}
				if (func_352() && ((__LIB_0__::func_94(uLocal_443[2], vLocal_469, 1) >= 40f && __LIB_0__::func_94(uLocal_443[3], vLocal_469, 1) >= 40f) && __LIB_0__::func_94(uLocal_443[1], vLocal_469, 1) >= 40f))
				{
					__LIB_2__::func_303(uLocal_443[2], uLocal_443[1], func_180(114), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					bLocal_826 = true;
					func_15(16);
				}
				Jump @3362; //curOff = 3008
				PED::SET_PED_RESET_FLAG(uLocal_443[1], 27, true);
				if (iLocal_839 == 1)
				{
					PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), 0);
					PED::SET_PED_RESET_FLAG(Global_35, 179, false);
					iLocal_839 = 0;
				}
				if ((__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(-4f, 1, uLocal_443[2], 1)) && __LIB_2__::func_227(-4f, 1, uLocal_443[3], 1))
				{
					func_15(16);
				}
				Jump @3362; //curOff = 3124
				func_286(uLocal_443[1], uLocal_443[2], &uLocal_513, -1, 15, 0);
				func_286(uLocal_443[2], uLocal_443[1], &uLocal_513, -1, 15, 0);
				func_286(uLocal_443[3], uLocal_443[1], &uLocal_513, -1, 15, 0);
				if (PED::IS_PED_ON_MOUNT(uLocal_443[1]))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
					TASK::_TASK_SMART_FLEE_STYLE_COORD(0, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2, 64, -1082130432 /* Float: -1f */, -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_443[2], iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, uLocal_443[2], 3f, -3f, 0f, 2f, -1, 2f, 1, 1, 1, 1, 1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_443[3], iLocal_501, 0.8f, 0.8f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
					iLocal_622 = 11;
				}
			}
			default:
				break;
	}
}

void func_105()
{
	vector3 vVar0;
	func_283();
	switch (iLocal_621)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(iLocal_450[1]))
			{
				MAP::REMOVE_BLIP(&(iLocal_450[1]));
			}
			__LIB_2__::func_279(uLocal_443[1], 0);
			__LIB_2__::func_451(&iLocal_538, 0);
			iLocal_860 = __LIB_2__::func_340(3, 0, 0);
			__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
			__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
			__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
			__LIB_2__::func_360(&(Local_559[0 /*17*/]), "INTERACT_ROB");
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_443[4], false);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_443[5], false);
			func_343();
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[4], Local_229[4 /*32*/].f_6, Local_229[4 /*32*/].f_9, true, true, false);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_443[5], Local_229[5 /*32*/].f_6, Local_229[4 /*32*/].f_9, true, true, false);
			ENTITY::_0x9587913B9E772D29(uLocal_443[4], 0);
			ENTITY::_0x9587913B9E772D29(uLocal_443[5], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1], joaat("REL_PLAYER_ENEMY"));
			__LIB_4__::func_405(uLocal_443[1], &(uLocal_488[0]), 0, 0);
			vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), ENTITY::GET_ENTITY_HEADING(uLocal_443[1]), 0f, -7f, 0f) };
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vVar0, Global_35, 3f, 0, 20f, 1082130432 /* Float: 4f */, 1, 1048580, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_443[2], iLocal_500);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
			TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vVar0, Global_35, 3f, 0, 20f, 1082130432 /* Float: 4f */, 1, 1048580, 0, joaat("FIRING_PATTERN_BURST_FIRE"), -1, 0);
			TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_443[3], iLocal_501);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
			iLocal_621 = 1;
			break;
		case 1:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY") || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_443[1], Local_422))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				iLocal_621 = 2;
			}
			if (ENTITY::IS_ENTITY_DEAD(uLocal_443[1]))
			{
				iLocal_621 = 2;
			}
			break;
		case 2:
			func_15(16);
			iLocal_621 = 3;
			break;
		case 3:
			break;
	}
}

void func_106()
{
	int iVar0;
	int iVar1;
	func_286(uLocal_443[1], Global_35, &uLocal_513, -1, 15, 0);
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Local_457[0 /*2*/], Local_457[0 /*2*/].f_1, 1))
	{
		TASK::STOP_ANIM_TASK(Global_35, Local_457[0 /*2*/], Local_457[0 /*2*/].f_1, -1.5f);
		TASK::CLEAR_PED_SECONDARY_TASK(Global_35);
	}
	__LIB_4__::func_441(&uLocal_508, 1);
	switch (iLocal_619)
	{
		case 0:
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_443[2], true))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_450[2]))
				{
					iLocal_450[2] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_443[2]);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_443[3], true))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_450[3]))
				{
					iLocal_450[3] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_443[3]);
				}
			}
			__LIB_2__::func_451(&iLocal_538, 0);
			iLocal_860 = __LIB_2__::func_340(3, 0, 0);
			__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
			__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
			__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
			__LIB_2__::func_360(&(Local_559[0 /*17*/]), "INTERACT_ROB");
			__LIB_2__::func_279(uLocal_443[1], 0);
			__LIB_4__::func_405(uLocal_443[1], &(uLocal_488[0]), 0, 0);
			__LIB_0__::func_325(&(iLocal_450[1]));
			iLocal_450[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_443[1]);
			PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
			PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), 0, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1], joaat("REL_PLAYER_ENEMY"));
			PED::_0xD8736EFDA38EDC5C(uLocal_443[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3f);
			WEAPON::SET_CURRENT_PED_WEAPON(uLocal_443[1], joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
			iLocal_619 = 1;
			break;
		case 1:
			if (__LIB_2__::func_1(uLocal_443[1], 0, 1))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
				TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
			}
			if (__LIB_2__::func_1(uLocal_443[2], 0, 1))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
				TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_443[2], iLocal_500, 0.5f, 0.5f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
			}
			if (__LIB_2__::func_1(uLocal_443[3], 0, 1))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
				TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
				TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_443[3], iLocal_501, 1f, 1f);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
			}
			iLocal_619 = 2;
			break;
		case 2:
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_443[1], true))
			{
				func_353();
			}
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_443[2], true) && PED::IS_PED_DEAD_OR_DYING(uLocal_443[3], true))
			{
				if ((PED::_IS_PED_HOGTIED(uLocal_443[1]) && !PED::IS_PED_RAGDOLL(uLocal_443[1])) && !PED::_IS_PED_HOGTYING(Global_35))
				{
					func_354();
				}
			}
			func_355();
			func_356();
			if (__LIB_0__::func_71(uLocal_443[1]))
			{
				if (iLocal_834 == 0)
				{
					iVar0 = PED::GET_MOUNT(uLocal_443[1]);
					if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
					{
						iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
						if ((iVar1 == 0 || PED::_IS_MOUNT_SEAT_FREE(iVar0, -1)) || iVar1 == Global_35)
						{
							iLocal_834 = 1;
							TASK::CLEAR_PED_TASKS(uLocal_443[1], true, false);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
							TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
							TASK::TASK_COMBAT_PED(0, Global_35, 16777216, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
						}
					}
				}
			}
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_443[2], true) || PED::_IS_PED_HOGTIED(uLocal_443[2]))
			{
				if (!PED::IS_PED_INJURED(uLocal_443[4]))
				{
					if (PED::_GET_RIDER_OF_MOUNT(uLocal_443[4], false) == 0)
					{
						if (PED::IS_PED_FLEEING(uLocal_443[4]) == 0)
						{
							TASK::TASK_SMART_FLEE_PED(uLocal_443[4], Global_35, 9999f, -1, 0, 1077936128 /* Float: 3f */, 0);
						}
					}
					else if (PED::IS_PED_FLEEING(uLocal_443[4]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_443[4], true, false);
					}
				}
			}
			if (PED::IS_PED_DEAD_OR_DYING(uLocal_443[3], true) || PED::_IS_PED_HOGTIED(uLocal_443[3]))
			{
				if (!PED::IS_PED_INJURED(uLocal_443[5]))
				{
					if (PED::_GET_RIDER_OF_MOUNT(uLocal_443[5], false) == 0)
					{
						if (PED::IS_PED_FLEEING(uLocal_443[5]) == 0)
						{
							TASK::TASK_SMART_FLEE_PED(uLocal_443[5], Global_35, 9999f, -1, 0, 1077936128 /* Float: 3f */, 0);
						}
					}
					else if (PED::IS_PED_FLEEING(uLocal_443[5]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_443[5], true, false);
					}
				}
			}
			if (func_358())
			{
				func_15(18);
			}
			break;
	}
}

void func_128(bool bParam0)
{
	__LIB_17__::func_894(&(uLocal_443[1]), &iLocal_538, &Local_559, 1, 1);
	__LIB_2__::func_56(uLocal_443[1], 1, 1);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_443[1], 7, 0, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_443[1], 20, 0, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_443[1], 19, 0, true);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_443[1], 3, 1, false);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_443[1], 4, 1, false);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_443[1], 3, 2, bParam0);
	PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), uLocal_443[1], 4, 2, !bParam0);
	bLocal_505 = true;
	PED::_0xE737D5F14304A2EC(uLocal_443[1], PLAYER::GET_PLAYER_INDEX(), 120000);
	if (bParam0)
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_443[1], 330, false);
	}
}

void func_135(var uParam0)
{
	if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_171))
	{
		__LIB_3__::func_142(uParam0->f_171);
		POPULATION::_0xA1CFB35069D23C23(uParam0->f_171);
		POPULATION::_0x74C2B3DC0B294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	__LIB_3__::func_920(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!__LIB_3__::func_451(uParam0))
	{
		if (VOLUME::_0xF6A8A652A6B186CD(uParam0->f_51.f_11))
		{
			VOLUME::_0xFDFECC6EE4491E11(uParam0->f_51.f_11);
		}
		__LIB_1__::func_222(uParam0->f_51, 0);
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_51.f_6))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		__LIB_1__::func_345();
	}
	if (!__LIB_1__::func_982(uParam0->f_3) && !__LIB_1__::func_85(uParam0->f_3, 256))
	{
		__LIB_2__::func_115(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	__LIB_0__::func_172(uParam0->f_173);
	__LIB_0__::func_172(uParam0->f_172);
}

char* func_180(int iParam0)
{
	if (iLocal_14 == 0)
	{
		switch (iParam0)
		{
			case 35:
				if (iLocal_512 == 6 || iLocal_512 == 7)
				{
					return "RE_TWO_MTN_V1_ASK_HOME_F";
				}
				if (Local_15.f_51.f_4 == 3)
				{
					return "RE_TWO_MTN_V1_ASK_HOME_G";
				}
				if (iLocal_512 == 9)
				{
					return "RE_TWO_MTN_V1_ASK_HOME_G";
				}
				if (iLocal_512 == 11)
				{
					return "RE_TWO_SCL_V1_ASK_HOME_STD";
				}
				break;
		}
		if ((iLocal_512 == 6 || iLocal_512 == 7) || iLocal_512 == 9)
		{
			switch (iParam0)
			{
				case 0:
					return "RE_TWO_MTN_V1_CALLOUT_IDLE_A";
				case 1:
					return "RE_TWO_MTN_V1_CALLOUT_IDLE_B";
				case 2:
					return "RE_TWO_MTN_V1_TRAPPED";
				case 3:
					return "RE_TWO_MTN_V1_MY_LEG";
				case 4:
					return "RE_TWO_MTN_V1_HELP_ME";
				case 5:
					return "RE_TWO_MTN_V1_CALL";
				case 6:
					return "RE_TWO_MTN_V1_HANG_AROUND_A";
				case 7:
					return "RE_TWO_MTN_V1_HANG_AROUND_B";
				case 8:
					return "RE_TWO_MTN_V1_HANG_AROUND_C";
				case 12:
					return "RE_TWO_MTN_V1_THANKS";
				case 13:
					return "RE_TWO_MTN_V1_STUCK_A";
				case 14:
					return "RE_TWO_MTN_V1_MOSES";
				case 15:
					return "RE_TWO_MTN_V1_MOSESTHANKS";
				case 16:
					return "RE_TWO_MTN_V1_AIM";
				case 17:
					return "GUN";
				case 18:
					return "PLEAD";
				case 19:
					return "PLEAD";
				case 20:
					return "RE_TWO_MTN_V1_SHOOTING";
				case 21:
					return "RE_TWO_MTN_V1_DYNAMITE";
				case 22:
					return "RE_TWO_MTN_V1_AGGRO";
				case 24:
					return "CUT_THAT_OUT";
				case 26:
					return "RE_TWO_MTN_V1_ASK_HOME_A";
				case 27:
					return "RE_TWO_MTN_V1_ASK_HOME_B";
				case 28:
					return "RE_TWO_MTN_V1_ASK_HOME_A";
				case 29:
					return "RE_TWO_MTN_V1_ASK_HOME_B";
				case 30:
					return "RE_TWO_MTN_V1_ASK_HOME_A";
				case 31:
					return "RE_TWO_MTN_V1_ASK_HOME_B";
				case 32:
					return "RE_TWO_MTN_V1_ASK_HOME_C";
				case 33:
					return "RE_TWO_MTN_V1_ASK_HOME_D";
				case 34:
					return "RE_TWO_MTN_V1_ASK_HOME_E";
				case 36:
					return "RE_TWO_MTN_V1_ASK_HOME_I";
				case 39:
					return "RE_TWO_MTN_V1_TAKE_HOME_A";
				case 40:
					return "RE_TWO_MTN_V1_TAKE_HOME_B";
				case 41:
					return "RE_TWO_MTN_V1_TAKE_HOME_C";
				case 55:
					return "RE_TWO_MTN_V1_TAKE_HOME_PLY_INT_A";
				case 42:
					return "RE_TWO_MTN_V1_TAKE_HOME_D";
				case 43:
					return "RE_TWO_MTN_V1_TAKE_HOME_E";
				case 58:
					return "RE_TWO_MTN_V1_TAKE_HOME_F";
				case 45:
					return "RE_TWO_MTN_V1_TAKE_HOME_G";
				case 59:
					return "RE_TWO_MTN_V1_TAKE_HOME_WEALTHYMEN_A";
				case 47:
					return "RE_TWO_MTN_V1_TAKE_HOME_H";
				case 61:
					return "RE_TWO_MTN_V1_TAKE_HOME_WEALTHYMEN_B";
				case 48:
					return "RE_TWO_MTN_V1_TAKE_HOME_I";
				case 62:
					return "RE_TWO_MTN_V1_TAKE_HOME_PLY_INT_V";
				case 49:
					return "RE_TWO_MTN_V1_TAKE_HOME_J";
				case 50:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_CLOSE";
				case 63:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_A";
				case 64:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_B";
				case 65:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_C";
				case 66:
					return "RE_TWO_MTN_V1_ARRIVED_HOME_REWARD";
				case 98:
					return "RE_TWO_MTN_V1_WRONG_WAY_A";
				case 99:
					return "RE_TWO_MTN_V1_WRONG_WAY_B";
				case 100:
					return "RE_TWO_MTN_V1_WRONG_WAY_C";
				case 101:
					return "RE_TWO_MTN_V1_TOO_LONG_A";
				case 102:
					return "RE_TWO_MTN_V1_TOO_LONG_B";
				case 103:
					return "RE_TWO_MTN_V1_TOO_LONG_C";
				case 104:
					return "RE_TWO_MTN_V1_STATIONARY_A";
				case 105:
					return "RE_TWO_MTN_V1_STATIONARY_B";
				case 106:
					return "RE_TWO_MTN_V1_STATIONARY_C";
				case 107:
					return "RE_TWO_MTN_V1_WOMAN_LEAVING_A";
				case 108:
					return "RE_TWO_MTN_V1_WRONG_TOWN_A";
				case 109:
					return "RE_TWO_MTN_V1_TAKE_HOME_JUMP";
				case 110:
					return "RE_TWO_MTN_V1_TAKE_HOME_OFFHORSE";
				case 111:
					return "RE_TWO_MTN_V1_TOOFAST";
				case 112:
					return "GENERIC_SHOCKED_HIGH";
				case 113:
					return "SCARED_HELP";
				case 67:
					return "RE_TWO_MTN_V1_ILO_PLAYER_POS_A";
				case 68:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_A";
				case 69:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_B";
				case 70:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_B";
				case 74:
					return "RE_TWO_MTN_V1_ILO_PLAYER_POS_C";
				case 75:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_C";
				case 78:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_C_CONT";
				case 81:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_D_CONT";
				case 87:
					return "RE_TWO_MTN_V1_ILO_PLAYER_POS_E";
				case 88:
					return "RE_TWO_MTN_V1_ILO_PLAYER_NEG_E";
				case 83:
					return "RE_TWO_MTN_V1_PLAYER_RESPONSE_A";
				case 84:
					return "RE_TWO_MTN_V1_PLAYER_RESPONSE_B";
				case 71:
					return "RE_TWO_MTN_V1_ILO_PED_POS_A";
				case 72:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_A";
				case 73:
					return "RE_TWO_MTN_V1_ILO_AGREE_A";
				case 76:
					return "RE_TWO_MTN_V1_ILO_PED_POS_C";
				case 77:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_C";
				case 79:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_C_CONT";
				case 82:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_D_CONT";
				case 85:
					return "RE_TWO_MTN_V1_ILO_PLAYER_POS_D";
				case 86:
					return "RE_TWO_MTN_V1_ILO_PED_POS_D";
				case 89:
					return "RE_TWO_MTN_V1_ILO_PED_POS_E";
				case 90:
					return "RE_TWO_MTN_V1_ILO_PED_NEG_E";
				case 91:
					return "RE_TWO_MTN_V1_TIMEOUT_A";
				case 92:
					return "RE_TWO_MTN_V1_TIMEOUT_B";
				case 93:
					return "RE_TWO_MTN_V1_CANCEL_HELP_A";
				case 94:
					return "RE_TWO_MTN_V1_CANCEL_HELP_B";
				case 95:
					return "RE_TWO_MTN_V1_CANCEL_HELP_C";
				case 96:
					return "RE_TWO_MTN_V1_MOAN_B";
				case 97:
					return "RE_TWO_MTN_V1_MOAN_C";
				case 145:
					return "RE_TWO_MTN_V1_ANIMAL_ON_HORSE_A";
				case 146:
					return "RE_TWO_MTN_V1_HELP_YES_START";
				case 147:
					return "RE_TWO_MTN_V1_HELP_YES_RISING";
				case 148:
					return "RE_TWO_MTN_V1_SEGUE";
				case 149:
					return "RE_TWO_MTN_V1_SEGUE";
				case 163:
					return "RE_TWO_MTN_V1_LIFT_GRUNT";
				case 164:
					return "RE_TWO_MTN_V1_THANKS_RSP";
				case 165:
					return "RE_TWO_MTN_V1_MOAN_A";
				case 166:
					return "RE_TWO_MTN_V1_MOAN_B";
				case 167:
					return "RE_TWO_MTN_V1_MOAN_C";
				case 168:
					return "STORM_OFF";
				default:
					break;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					return "RE_TWO_SCL_V1_CALLOUT_IDLE_A";
				case 1:
					return "RE_TWO_SCL_V1_CALLOUT_IDLE_B";
				case 2:
					return "RE_TWO_SCL_V1_TRAPPED";
				case 3:
					return "RE_TWO_SCL_V1_MY_LEG";
				case 4:
					return "RE_TWO_SCL_V1_HELP_ME";
				case 5:
					return "RE_TWO_SCL_V1_CALL";
				case 6:
					return "RE_TWO_SCL_V1_HANG_AROUND_A";
				case 7:
					return "RE_TWO_SCL_V1_HANG_AROUND_B";
				case 8:
					return "RE_TWO_SCL_V1_HANG_AROUND_C";
				case 12:
					return "RE_TWO_SCL_V1_THANKS";
				case 13:
					return "RE_TWO_SCL_V1_STUCK_A";
				case 14:
					return "RE_TWO_SCL_V1_MOSES";
				case 23:
					return "RE_TWO_SCL_V1_SOB";
				case 16:
					return "RE_TWO_SCL_V1_AIM";
				case 17:
					return "RE_TWO_SCL_V1_AIM_CONT";
				case 18:
					return "RE_TWO_SCL_V1_AIM_CONT";
				case 19:
					return "RE_TWO_SCL_V1_AIM_CONT";
				case 20:
					return "RE_TWO_SCL_V1_SHOOTING";
				case 21:
					return "RE_TWO_SCL_V1_DYNAMITE";
				case 22:
					return "RE_TWO_SCL_V1_TAKE_HOME_AGGRO";
				case 24:
					return "DONT_BE_STUPID";
				case 26:
					return "RE_TWO_SCL_V1_ASK_HOME_A";
				case 27:
					return "RE_TWO_SCL_V1_ASK_HOME_B";
				case 28:
					return "RE_TWO_SCL_V1_ASK_HOME_SICK_A";
				case 29:
					return "RE_TWO_SCL_V1_ASK_HOME_SICK_B";
				case 30:
					return "RE_TWO_SCL_V1_ASK_HOME_POSSE_A";
				case 31:
					return "RE_TWO_SCL_V1_ASK_HOME_POSSE_B";
				case 32:
					return "RE_TWO_SCL_V1_ASK_HOME_C";
				case 33:
					return "RE_TWO_SCL_V1_ASK_HOME_D";
				case 34:
					return "RE_TWO_SCL_V1_ASK_HOME_E";
				case 36:
					return "RE_TWO_SCL_V1_ASK_HOME_I";
				case 39:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_A";
				case 40:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_B";
				case 41:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_C";
				case 42:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_D";
				case 43:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_E";
				case 44:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_F";
				case 45:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_G";
				case 46:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_G2";
				case 47:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_H";
				case 48:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_CLOSE";
				case 49:
					return "RE_TWO_SCL_V1_TAKE_HOME_RANDOM";
				case 51:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPA";
				case 52:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPB";
				case 53:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_B_SIGH";
				case 54:
					return "RE_TWO_MTN_V1_TAKE_HOME_PLY_INT_A";
				case 56:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPD";
				case 57:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPE";
				case 60:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPG";
				case 61:
					return "RE_TWO_SCL_V1_TAKE_HOME_STORY_RESPH";
				case 63:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_A";
				case 64:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_B";
				case 65:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_C";
				case 66:
					return "RE_TWO_SCL_V1_ARRIVED_HOME_REWARD";
				case 98:
					return "RE_TWO_SCL_V1_TAKE_HOME_WRONG_WAY";
				case 99:
					return "RE_TWO_SCL_V1_TAKE_HOME_WRONG_WAY";
				case 100:
					return "RE_TWO_SCL_V1_WRONG_WAY_C";
				case 101:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOLONG_A";
				case 102:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOLONG_B";
				case 103:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOLONG_C";
				case 104:
					return "RE_TWO_SCL_V1_STATIONARY_A";
				case 105:
					return "RE_TWO_SCL_V1_STATIONARY_B";
				case 106:
					return "RE_TWO_SCL_V1_STATIONARY_C";
				case 107:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOLONG_C";
				case 109:
					return "RE_TWO_SCL_V1_TAKE_HOME_JUMP";
				case 110:
					return "RE_TWO_SCL_V1_TAKE_HOME_OFFHORSE";
				case 111:
					return "RE_TWO_SCL_V1_TAKE_HOME_TOOFAST";
				case 112:
					return "RE_TWO_SCL_V1_CRAZY_RIDE";
				case 113:
					return "RE_TWO_SCL_V1_CRAZY_RIDE";
				case 67:
					return "RE_TWO_SCL_V1_ILO_PLAYER_POS_A";
				case 68:
					return "RE_TWO_SCL_V1_ILO_PLAYER_NEG_A";
				case 69:
					return "RE_TWO_SCL_V1_ILO_PLAYER_NEG_B";
				case 70:
					return "RE_TWO_SCL_V1_ILO_PED_NEG_B";
				case 74:
					return "RE_TWO_SCL_V1_ILO_PLAYER_POS_C";
				case 75:
					return "RE_TWO_SCL_V1_ILO_PLAYER_NEG_C";
				case 87:
					return "RE_TWO_SCL_V1_ILO_PLAYER_POS_E";
				case 88:
					return "RE_TWO_SCL_V1_ILO_PLAYER_NEG_E";
				case 83:
					return "RE_TWO_SCL_V1_PLAYER_RESPONSE_A";
				case 84:
					return "RE_TWO_SCL_V1_PLAYER_RESPONSE_B";
				case 71:
					return "RE_TWO_SCL_V1_ILO_PED_POS_A";
				case 72:
					return "RE_TWO_SCL_V1_ILO_PED_NEG_A";
				case 73:
					return "RE_TWO_SCL_V1_ILO_AGREE_A";
				case 76:
					return "RE_TWO_SCL_V1_ILO_PED_POS_C";
				case 77:
					return "RE_TWO_SCL_V1_ILO_PED_NEG_C";
				case 85:
					return "RE_TWO_SCL_V1_ILO_PLAYER_POS_D";
				case 86:
					return "RE_TWO_SCL_V1_ASK_HOME_E";
				case 89:
					return "RE_TWO_SCL_V1_ILO_PED_POS_E";
				case 90:
					return "RE_TWO_SCL_V1_ILO_PED_NEG_E";
				case 91:
					return "RE_TWO_SCL_V1_TIMEOUT_A";
				case 92:
					return "RE_TWO_SCL_V1_TIMEOUT_B";
				case 93:
					return "RE_TWO_SCL_V1_CANCEL_HELP_A";
				case 94:
					return "RE_TWO_SCL_V1_CANCEL_HELP_B";
				case 95:
					return "RE_TWO_SCL_V1_CANCEL_HELP_C";
				case 145:
					return "RE_TWO_SCL_V1_ANIMAL_ON_HORSE_A";
				case 146:
					return "RE_TWO_SCL_V1_HELP_YES_START";
				case 147:
					return "RE_TWO_SCL_V1_HELP_YES_RISING";
				case 148:
					return "RE_TWO_SCL_V1_SEGUE";
				case 149:
					return "RE_TWO_SCL_V1_SEGUE";
				case 151:
					return "RE_TWO_SCL_V1_SD_A";
				case 152:
					return "RE_TWO_SCL_V1_SD_B_NICE";
				case 153:
					return "RE_TWO_SCL_V1_SD_B_NICE2";
				case 154:
					return "RE_TWO_SCL_V1_SD_C_NICE";
				case 155:
					return "RE_TWO_SCL_V1_SD_C_NICE";
				case 156:
					return "RE_TWO_SCL_V1_SD_C_NICE_CONT";
				case 157:
					return "RE_TWO_SCL_V1_SD_B_OTHER";
				case 158:
					return "RE_TWO_SCL_V1_SD_B_OTHER2";
				case 159:
					return "RE_TWO_SCL_V1_SD_C_OTHER";
				case 160:
					return "RE_TWO_SCL_V1_SD_C_OTHER";
				case 161:
					return "RE_TWO_SCL_V1_SD_C_OTHER_CONT";
				case 162:
					return "RE_TWO_SCL_V1_NEAR_SLUMS";
				case 163:
					return "RE_TWO_SCL_V1_LIFT_GRUNT";
				case 164:
					return "RE_TWO_SCL_V1_THANKS_RSP";
				case 165:
					return "RE_TWO_SCL_V1_MOAN_A";
				case 166:
					return "RE_TWO_SCL_V1_MOAN_A";
				case 167:
					return "RE_TWO_SCL_V1_MOAN_A";
				case 168:
					return "STORM_OFF";
				default:
					break;
			}
		}
	}
	else
	{
		switch (iParam0)
		{
			case 2:
				return "RE_TWO_MTN_V2_TRAPPED";
			case 3:
				return "RE_TWO_MTN_V2_MY_LEG";
			case 4:
				return "RE_TWO_MTN_V2_HELP_ME";
			case 5:
				return "RE_TWO_MTN_V2_CALL";
			case 6:
				return "RE_TWO_MTN_V2_HANG_AROUND_A";
			case 7:
				return "RE_TWO_MTN_V2_HANG_AROUND_B";
			case 8:
				return "RE_TWO_MTN_V2_HANG_AROUND_C";
			case 9:
				return "RE_TWO_MTN_V2_HANG_AROUND_D";
				return "RE_TWO_MTN_V2_HANG_AROUND_E";
				return "RE_TWO_MTN_V2_HANG_AROUND_F";
				return "RE_TWO_MTN_V2_AIM";
				return "RE_TWO_MTN_V2_SHOOTING";
				return "RE_TWO_MTN_V2_DYNAMITE";
				return "RE_TWO_MTN_V2_ATTACKED_A_1";
				return "RE_TWO_MTN_V2_ATTACKED_A_2";
				return "RE_TWO_MTN_V2_ATTACKED_A_2_B";
				return "RE_TWO_MTN_V2_PLAYER_KILLS_THUG_A";
				return "RE_TWO_MTN_V2_PLAYER_KILLS_THUG_B";
				return "RE_TWO_MTN_V2_WOMAN_SOLO_A";
				return "RE_TWO_MTN_V2_WOMAN_SOLO_B";
				return "RE_TWO_MTN_V2_WOMAN_SOLO_C";
				return "RE_TWO_MTN_V2_HOGTIE_POST_A";
				return "RE_TWO_MTN_V2_HOGTIE_POST_B";
				return "RE_TWO_MTN_V2_SOLO_LEAVE_A";
				return "RE_TWO_MTN_V2_SOLO_LEAVE_B";
				return "OPENS_FIRE";
				return "OPENS_FIRE";
				return "OPENS_FIRE";
				return "OPENS_FIRE";
				return "GENERIC_INSULT_MED_MALE";
				return "RE_TWO_MTN_V2_HELPED_A";
				return "RE_TWO_MTN_V2_HELPED_B";
				return "RE_TWO_MTN_V2_HELPED_C";
				return "RE_TWO_MTN_V2_HELPED_D";
				return "RE_TWO_MTN_V2_HELPED_E";
				return "RE_TWO_MTN_V2_HELPED_F";
				return "RE_TWO_MTN_V2_HELPED_G";
				return "RE_TWO_MTN_V2_GANG_LEAVES_A";
				return "RE_TWO_MTN_V2_GANG_LEAVES_B";
				return "RE_TWO_MTN_V2_GANG_LEAVES_C";
				return "RE_TWO_MTN_V2_PLAYER_ROB_A";
				return "RE_TWO_MTN_V2_PLAYER_ROB_B";
				return "RE_TWO_MTN_V2_PLAYER_ROB_C";
				return "RE_TWO_MTN_V2_PLAYER_HELP";
				return "RE_TWO_MTN_V2_PLAYER_DISOBEYS_A";
				return "RE_TWO_MTN_V2_PLAYER_DISOBEYS_B";
				return "RE_TWO_MTN_V2_ILO_PLAYER_POS_A";
				return "RE_TWO_MTN_V2_ILO_PLAYER_NEG_A";
				return "RE_TWO_MTN_V2_ILO_PLAYER_NEG_B";
				return "RE_TWO_MTN_V2_ILO_PLAYER_NEG_C";
				return "RE_TWO_MTN_V2_ILO_START_D";
				return "RE_TWO_MTN_V2_ILO_START_D2";
				return "DONT_BE_STUPID_02";
				return "GANG_INTERACT_COMPLY";
				return "DONT_BE_STUPID";
				return "RE_TWO_MTN_V1_LIFT_GRUNT";
				return "RE_TWO_MTN_V2_THANKS_RSP";
				return "RE_TWO_MTN_V1_MOAN_A";
				return "RE_TWO_MTN_V1_MOAN_B";
				return "RE_TWO_MTN_V1_MOAN_C";
				return "STORM_OFF";
				return "RE_TWO_MTN_V2_PLAYER_SURRENDERS";
			}
			return "";
		}
void func_181(int* iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = sParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (__LIB_0__::func_139(iParam0->f_6))
		{
			if (MISC::IS_BIT_SET(*iParam0, 1))
			{
				__LIB_1__::func_483(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				__LIB_1__::func_484(iParam0->f_6, iParam0->f_5, 0);
			}
			__LIB_1__::func_221(iParam0->f_6, 0, 1);
		}
		else
		{
			MISC::SET_BIT(iParam0, 14);
		}
		MISC::SET_BIT(iParam0, 0);
	}
	else
	{
		__LIB_2__::func_360(iParam0, iParam0->f_5);
		if (!MISC::IS_BIT_SET(*iParam0, 13))
		{
			MISC::SET_BIT(iParam0, 0);
		}
	}
	MISC::SET_BIT(iParam0, 15);
}

Vector3 func_198()
{
	return 2.37f, 5.5f, 2f;
}

Vector3 func_200()
{
	return 14.42f, 6.5f, 2f;
}

Vector3 func_201()
{
	return 6.5f, 7.69f, 2.5f;
}

Vector3 func_202()
{
	return -0.58f, 5.83f, 0f;
}

Vector3 func_203()
{
	return 0f, 0f, 131.69f;
}

Vector3 func_204()
{
	return 8.7f, 7.69f, 2.5f;
}

Vector3 func_205()
{
	return -5f, -2.27f, 0f;
}

Vector3 func_206()
{
	return 0f, 0f, 90.19f;
}

Vector3 func_208()
{
	return -4.98f, -0.77f, 0f;
}

Vector3 func_210()
{
	return 6.5f, 9.19f, 2.5f;
}

Vector3 func_211()
{
	return -0.28f, -5.27f, 0f;
}

int func_226(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_453(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_227(int iParam0)
{
	if (iParam0 == 0)
	{
		iLocal_804 = 1;
		vLocal_497 = { Global_36 };
		__LIB_1__::func_148(&uLocal_684);
		__LIB_0__::func_37(&uLocal_669);
		return true;
	}
	return false;
}

bool func_228(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4)
{
	if (!__LIB_0__::func_75(&uLocal_657))
	{
		__LIB_1__::func_148(&uLocal_657);
	}
	else if (__LIB_0__::func_264(&uLocal_657) > fParam3)
	{
		__LIB_2__::func_303(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, iParam4, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		__LIB_0__::func_37(&uLocal_657);
		return true;
	}
	return false;
}

void func_229()
{
	func_242(uLocal_443[1], Global_35);
	func_456();
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, sLocal_845))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_845, true);
	}
}

bool func_235()
{
	if (!__LIB_2__::func_227(0, 1, Global_35, 1))
	{
		return true;
	}
	if (!__LIB_2__::func_227(0, 1, uLocal_443[1], 1))
	{
		return true;
	}
	return false;
}

void func_239()
{
	func_242(uLocal_443[1], Global_35);
	func_461();
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, sLocal_846))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_846, true);
	}
}

bool func_240()
{
	if (iLocal_14 == 0)
	{
		if ((iLocal_512 == 6 || iLocal_512 == 7) || iLocal_512 == 9)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return false;
}

void func_241()
{
	func_242(uLocal_443[1], Global_35);
	func_462();
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, sLocal_845))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_845, true);
	}
}

void func_242(int iParam0, int iParam1)
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
			iLocal_618 = 0;
		}
		else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, ENTITY::GET_ENTITY_COORDS(iParam1, true, false)))
		{
			iLocal_618 = 1;
		}
		else
		{
			iLocal_618 = 2;
		}
	}
	else if (__LIB_0__::func_195(vVar0, vVar0 + vVar6, vVar3))
	{
		iLocal_618 = 3;
	}
	else
	{
		iLocal_618 = 4;
	}
}

void func_243()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_844 = "PB_BRK_N";
			break;
		case 2:
			sLocal_844 = "PB_BRK_BACK";
			break;
		case 1:
			sLocal_844 = "PB_BRK_BACK";
			break;
		case 3:
			sLocal_844 = "PB_BRK_L";
			break;
		case 4:
			sLocal_844 = "PB_BRK_R";
			break;
	}
}

void func_281()
{
	if (iLocal_14 == 0)
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_LB");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_N");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_RB");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "pb_cower_l");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "pb_cower_r");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_FREE_HERSELF");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BREAK_HELP");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_HELP");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_MOURN");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_MOURN_SUBTLE");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_TALK");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_INT");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BRKOUT_BACK_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BRKOUT_BACK_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BRKOUT_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BRKOUT_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BRKOUT_N");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_N");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_BR");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_BL");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_RIDE_N");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_RIDE_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_RIDE_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_RIDE_BR");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_RIDE_BL");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_ASK_N");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_ASK_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_ASK_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_ASK_BACK_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_ASK_BACK_L");
	}
	else
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_LB");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_N");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_CALL_RB");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "pb_cower_l");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "pb_cower_r");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BRK_BACK");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BRK_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BRK_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_BRK_N");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_INT");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_TRAP_L");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_TRAP_R");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_PUSH_AWAY");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_BL_NEG");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_BL_POS");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_BR_NEG");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_BR_POS");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_L_NEG");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_L_POS");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_R_NEG");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_R_POS");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_N_NEG");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_ILO_N_POS");
	}
}

void func_282()
{
	if (((((PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_AIM")) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_443[1], Global_35, 17)) && WEAPON::_0xCB690F680A3EA971(Global_35, 4)) && __LIB_4__::func_207(uLocal_443[1], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0)) || (__LIB_2__::func_118(uLocal_443[1], 1, 1) <= 3f && __LIB_4__::func_207(uLocal_443[1], 1090519040 /* Float: 8f */, 1103626240 /* Float: 25f */, 1097859072 /* Float: 15f */, 0))) || __LIB_3__::func_822(uLocal_443[1], 0, &(Local_15.f_5), &iLocal_778, 0, 0))
	{
		iLocal_800 = 1;
		iLocal_803 = 1;
		Local_15.f_45 = 1;
		if (Local_15.f_48 == 0)
		{
			__LIB_3__::func_426(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
		}
	}
	else
	{
		iLocal_800 = 0;
	}
	if (iLocal_800 == 1)
	{
		if (!func_287())
		{
			__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
			__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
			if (iLocal_14 == 0)
			{
				__LIB_2__::func_451(&iLocal_538, 0);
				iLocal_860 = __LIB_2__::func_340(3, 0, 0);
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
				__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
			}
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "pb_cower_l");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "pb_cower_r");
			func_242(uLocal_443[1], Global_35);
			func_507();
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, sLocal_847))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_847, true);
			}
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_L_Bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_r_Bool", false, false);
		}
	}
	if ((iLocal_800 == 0 && iLocal_801 == 1) && iLocal_803 == 1)
	{
		if (!__LIB_0__::func_75(&uLocal_627))
		{
			__LIB_1__::func_148(&uLocal_627);
		}
	}
	if (__LIB_0__::func_75(&uLocal_627))
	{
		if (__LIB_0__::func_264(&uLocal_627) >= 2f)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_L_Bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "cower_r_Bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_INT");
			if (func_508())
			{
				iLocal_803 = 0;
				if (iLocal_14 == 1)
				{
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_INT"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_INT", true);
					}
				}
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
				__LIB_3__::func_515(&(Local_559[0 /*17*/]), 1, 0);
				__LIB_0__::func_37(&uLocal_627);
				if (iLocal_14 == 0)
				{
					func_15(7);
				}
			}
		}
	}
	if (PED::IS_PED_PLANTING_BOMB(Global_35) && __LIB_2__::func_118(uLocal_443[1], 1, 1) <= 6f)
	{
		if (iLocal_794 == 0)
		{
			iLocal_794 = 1;
			__LIB_2__::func_461(0);
			__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	if (iLocal_795 == 0)
	{
		if (__LIB_3__::func_822(uLocal_443[1], 0, &(Local_15.f_5), &iLocal_778, 0, 0))
		{
			if (iLocal_778 == 4 || iLocal_778 == 256)
			{
				iLocal_795 = 1;
				__LIB_2__::func_461(0);
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(20), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			}
		}
	}
	if (iLocal_800 == 1)
	{
		if (__LIB_3__::func_822(uLocal_443[1], 0, &(Local_15.f_5), &iLocal_778, 0, 0))
		{
			if (iLocal_778 == 8)
			{
				func_509();
			}
		}
	}
}

void func_283()
{
	if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_SURPRISING_NEW"), ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), 5f))
	{
		iLocal_738 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING_NEW"), uLocal_443[1], 0f, 30f, 30f, 15f, -1f, 180f, false, false, -1, -1);
	}
}

void func_286(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		if (iParam5 == 0)
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam3, 2060, 51, 0);
		}
		else
		{
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam3, 2048, 51, 0);
		}
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

bool func_287()
{
	if (iLocal_14 == 0)
	{
		if (((((((ANIMSCENE::_0x1F0E401031E20146(Local_422, "pb_cower_l") || ANIMSCENE::_0x1F0E401031E20146(Local_422, "pb_cower_r")) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "cower_l_loop_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "cower_l_enter_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "cower_l_exit_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "cower_r_loop_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "cower_r_enter_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "cower_r_exit_girl", 1))
		{
			Local_15.f_44 = 1;
			iLocal_801 = 1;
			return true;
		}
	}
	else if (((((((ANIMSCENE::_0x1F0E401031E20146(Local_422, "pb_cower_l") || ANIMSCENE::_0x1F0E401031E20146(Local_422, "pb_cower_r")) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "cower_l_loop_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "cower_l_enter_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "cower_l_exit_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "cower_r_loop_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "cower_r_enter_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "cower_r_exit_girl", 1))
	{
		Local_15.f_44 = 1;
		iLocal_801 = 1;
		return true;
	}
	return false;
}

void func_288()
{
	if (__LIB_2__::func_118(uLocal_443[1], 1, 1) <= func_510() && iLocal_797 == 0)
	{
		func_242(uLocal_443[1], Global_35);
		func_511();
		func_286(uLocal_443[1], Global_35, &uLocal_513, -1, 30, 0);
		Local_15.f_45 = 1;
		if (Local_15.f_48 == 0)
		{
			__LIB_3__::func_426(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
		}
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", true, false);
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, sLocal_843))
		{
			ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, sLocal_843, true);
		}
		if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
		{
			__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), 1);
		if (!MAP::DOES_BLIP_EXIST(iLocal_450[1]))
		{
			iLocal_450[1] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_443[1]);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_450[1], "RE_INTER_STRANGER");
		}
		Local_15.f_44 = 1;
		iLocal_797 = 1;
	}
	if (iLocal_14 == 0)
	{
		if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "callout_l_girl", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "callout_l_back_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "callout_n_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "callout_r_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang", "callout_r_back_girl", 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
		}
	}
	else if ((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "callout_l_girl", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "callout_l_back_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "callout_n_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "callout_r_girl", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_443[1], "script_re@berry_gang@trap", "callout_r_back_girl", 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "INT_BOOL", false, false);
	}
}

void func_289()
{
	if (__LIB_2__::func_118(uLocal_443[1], 1, 1) < 25f)
	{
		if (!__LIB_0__::func_75(&uLocal_630))
		{
			__LIB_1__::func_148(&uLocal_630);
		}
		else if (__LIB_0__::func_264(&uLocal_630) > 6f)
		{
			func_286(uLocal_443[1], Global_35, &uLocal_513, -1, 15, 0);
			func_512();
		}
	}
}

void func_290()
{
	switch (iLocal_749)
	{
		case 0:
			if ((__LIB_2__::func_118(uLocal_443[1], 1, 1) >= 30f && __LIB_2__::func_227(1f, 1, 0, 0)) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				if (iLocal_831 == 0)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					__LIB_3__::func_277(1515458263, ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), 1);
					iLocal_831 = 1;
					iLocal_749++;
				}
				else
				{
					iLocal_749++;
				}
			}
			break;
		case 1:
			if ((__LIB_2__::func_118(uLocal_443[1], 1, 1) >= 30f && __LIB_2__::func_227(1f, 1, 0, 0)) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				__LIB_3__::func_277(joaat("SONAR_OVERHEARD_BEAT_BIG"), ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), 1);
				iLocal_749++;
			}
			break;
		case 2:
			if (iLocal_14 == 0 && iLocal_797 == 0)
			{
				if (__LIB_2__::func_227(1f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					__LIB_3__::func_277(joaat("SONAR_OVERHEARD_BEAT_BIG"), ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), 1);
					iLocal_749++;
				}
			}
			else
			{
				iLocal_749++;
			}
			break;
		case 3:
			if (iLocal_14 == 0 && iLocal_797 == 0)
			{
				if (__LIB_2__::func_227(1f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					__LIB_3__::func_277(joaat("SONAR_OVERHEARD_BEAT_BIG"), ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), 1);
					iLocal_749++;
				}
			}
			else
			{
				iLocal_749++;
			}
			break;
	}
}

bool func_293()
{
	switch (iLocal_615)
	{
		case 0:
			if (!func_287())
			{
				if ((__LIB_0__::func_264(&uLocal_684) >= 10f && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1)) && iLocal_799 == 0)
				{
					iLocal_623 = 5;
					iLocal_624 = 0;
					Local_559[0 /*17*/].f_13 = "";
					__LIB_4__::func_454(&(Local_559[0 /*17*/]), 0);
					__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
					__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
					__LIB_3__::func_515(&(Local_559[0 /*17*/]), 1, 0);
					iLocal_798 = 0;
					iLocal_804 = 0;
					__LIB_1__::func_148(&uLocal_684);
				}
				if (iLocal_798 == 1)
				{
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
					PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
					if (__LIB_3__::func_332(vLocal_732, 1) <= 0.5f && iLocal_799 == 0)
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_HELP"))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_HELP", true);
						}
						if (iLocal_837 == 1)
						{
							PED::SET_PED_CONFIG_FLAG(Global_35, 87, false);
							iLocal_837 = 0;
						}
						iLocal_799 = 1;
					}
				}
				if (ANIMSCENE::_0x1F0E401031E20146(Local_422, "PB_HELP"))
				{
					iLocal_615 = 1;
				}
				if (iLocal_798 == 0 && iLocal_799 == 0)
				{
					if (iLocal_804 == 1)
					{
						iLocal_837 = 1;
						Local_15.f_44 = 1;
						func_515();
						__LIB_2__::func_451(&iLocal_538, 0);
						iLocal_860 = __LIB_2__::func_340(3, 0, 0);
						__LIB_4__::func_453(&(Local_559[1 /*17*/]), 1, 1);
						__LIB_4__::func_453(&(Local_559[2 /*17*/]), 1, 1);
						__LIB_4__::func_454(&(Local_559[0 /*17*/]), 1);
						iLocal_798 = 1;
						if (__LIB_0__::func_139(Local_15.f_162))
						{
							__LIB_1__::func_281(&(Local_15.f_162), 1, 1);
						}
					}
				}
			}
			break;
		case 1:
			return true;
	}
	return false;
}

bool func_294()
{
	switch (iLocal_616)
	{
		case 0:
			__LIB_2__::func_461(0);
			iLocal_898 = __LIB_4__::func_450("BERRY_LIFT_HORSE", joaat("INPUT_CONTEXT_ACTION"), 9, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_HELP"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_HELP", true);
			}
			__LIB_0__::func_45("BERRY_CON_LIFT", -1, 0, 0, 0, 1);
			__LIB_1__::func_148(&uLocal_675);
			iLocal_616 = 1;
			break;
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
			if (__LIB_4__::func_442(iLocal_898, 1))
			{
				__LIB_1__::func_515(iLocal_898, 1);
			}
			func_520();
			func_521();
			if (__LIB_4__::func_458(&(Local_15.f_162), "BERRY_CANCEL_LIFT", 0f, 0f, 0f, uLocal_443[1], joaat("INPUT_CONTEXT_B"), 5f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0) || __LIB_0__::func_264(&uLocal_675) >= 20f)
			{
				__LIB_2__::func_451(&iLocal_538, 0);
				__LIB_1__::func_281(&iLocal_898, 1, 1);
				__LIB_1__::func_281(&(Local_15.f_162), 1, 1);
				__LIB_1__::func_148(&uLocal_669);
				__LIB_0__::func_105(1);
				iLocal_616 = 2;
			}
			if (__LIB_4__::func_443(iLocal_898, 1))
			{
				PAD::SET_PAD_SHAKE(0, 100, 100);
			}
			if (__LIB_0__::func_567(iLocal_898, 1))
			{
				__LIB_1__::func_281(&iLocal_898, 1, 1);
				__LIB_0__::func_105(1);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uLocal_443[1], true);
				PED::_0xAE6004120C18DF97(uLocal_443[1], 0, 1);
				if (iLocal_838 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_838 = 0;
				}
				__LIB_1__::func_715(12, 0, 0, "RE_HONOR_SAVED_VICTIM", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "LIFT_BOOL", true, false);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_MOURN");
				PED::SET_PED_CAN_RAGDOLL(uLocal_443[0], true);
				__LIB_1__::func_148(&uLocal_633);
				__LIB_1__::func_148(&uLocal_642);
				__LIB_1__::func_281(&(Local_15.f_162), 1, 1);
				func_525();
				iLocal_860 = __LIB_2__::func_340(0, 0, 0);
				iLocal_616 = 3;
			}
			break;
		case 2:
			if (iLocal_840 == 0)
			{
				if (iLocal_753 > 0 && __LIB_2__::func_227(0f, 1, Global_35, 1))
				{
					iLocal_860 = __LIB_2__::func_340(3, 0, 0);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "LIFT_BOOL", true, false);
					if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_BREAK_HELP"))
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_BREAK_HELP", true);
					}
					iLocal_840 = 1;
					if (iLocal_838 == 1)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
						iLocal_838 = 0;
					}
				}
			}
			if (PED::IS_PED_RAGDOLL(uLocal_443[1]))
			{
				__LIB_1__::func_864(uLocal_443[1], 0, 0);
			}
			if (func_526() && iLocal_840)
			{
				if (__LIB_0__::func_264(&uLocal_669) >= 10f)
				{
					func_15(7);
				}
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_295()
{
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_SURPRISING_NEW"), ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), 5f))
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_738);
	}
}

void func_296()
{
	if (__LIB_3__::func_822(uLocal_443[1], 0, &(Local_15.f_5), &iLocal_778, 0, 0))
	{
		Local_15.f_45 = 1;
		if (bLocal_825 == 0)
		{
			if (PED::IS_PED_ON_MOUNT(uLocal_443[1]))
			{
				if ((iLocal_778 == 256 || iLocal_778 == 4) || iLocal_778 == 8)
				{
					bLocal_825 = true;
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(24), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_3__::func_237(&(Local_15.f_5), &iLocal_778);
					__LIB_1__::func_148(&uLocal_726);
					return;
				}
			}
		}
		if (((bLocal_825 && __LIB_2__::func_227(0f, 1, uLocal_443[1], 1)) && __LIB_0__::func_264(&uLocal_726) > 6f) || bLocal_825 == 0)
		{
			__LIB_0__::func_769();
			if (Local_15.f_48 == 0)
			{
				__LIB_3__::func_426(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
			}
			Local_15.f_44 = 1;
			__LIB_0__::func_8(&Global_1935630, 4);
			func_15(4);
		}
	}
}

void func_297()
{
	switch (iLocal_760)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_0__::func_264(&uLocal_633) > 2.4f)
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_760++;
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_633) > 3.4f)
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(164), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_760++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-1f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_760++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-3f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_760++;
			}
			break;
		case 4:
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_422, "MOURN_LOOP", 1))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_TALK", true);
				iLocal_760++;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RETW_ILO_OFFER_HELP");
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
				__LIB_2__::func_451(&iLocal_538, 0);
				iLocal_860 = __LIB_2__::func_340(2, 0, 0);
				if (func_240())
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(23), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_760++;
			}
			break;
		case 6:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_MOURN_SUBTLE");
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_MOURN_SUBTLE"))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "TALK_BOOL", true, false);
			}
			if (ANIMSCENE::_0x8D81E7824B7753F7(Local_422, "MOURN_SUBTLE", 1) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_422) >= 0.99f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_MOURN_SUBTLE", true);
				iLocal_760++;
			}
			break;
	}
}

void func_298()
{
	int iVar0;
	struct<7> Var1;
	int iVar9;
	Var1.f_5 = 1;
	Var1.f_6 = 1;
	switch (iLocal_740)
	{
		case 0:
			if ((__LIB_2__::func_227(4f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1)) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_TALK"))
			{
				iVar0 = 26;
				if (__LIB_2__::func_140(0))
				{
					iVar0 = 28;
				}
				if (__LIB_1__::func_149(1) > 0)
				{
					iVar0 = 30;
				}
				if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(iVar0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_TALK", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "TALK_BOOL", false, false);
					iLocal_860 = __LIB_2__::func_340(3, 0, 0);
					__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
					__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
					iLocal_740++;
				}
			}
			break;
		case 1:
			if (iLocal_822 == 0 && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				iLocal_822 = 1;
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "TALK_BOOL", true, false);
				__LIB_2__::func_451(&iLocal_538, 0);
				iLocal_860 = __LIB_2__::func_340(2, 0, 0);
				__LIB_4__::func_453(&(Local_559[1 /*17*/]), 0, 1);
				__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
				iLocal_623 = 7;
				Local_559[1 /*17*/].f_13 = func_180(83);
				Local_559[2 /*17*/].f_13 = func_180(84);
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), __LIB_2__::func_460(4));
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), __LIB_2__::func_460(6));
				__LIB_1__::func_148(&uLocal_645);
			}
			break;
		case 2:
			func_530();
			if (!func_235())
			{
				if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(34), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					func_530();
					iLocal_740++;
				}
			}
			break;
		case 3:
			func_530();
			if (!func_235())
			{
				if (func_228(uLocal_443[1], Global_35, func_180(35), 2f, 0))
				{
					func_530();
					__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
					__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
					__LIB_2__::func_451(&iLocal_538, 0);
					iLocal_860 = __LIB_2__::func_340(3, 0, 0);
					__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
					Local_559[2 /*17*/].f_13 = func_180(69);
					__LIB_2__::func_360(&(Local_559[2 /*17*/]), "BEAT_GRT_NEG");
					iLocal_623 = 8;
					iLocal_624 = 0;
					iLocal_740++;
				}
			}
			break;
		case 4:
			func_530();
			func_320();
			if (!func_235())
			{
				if (__LIB_0__::func_113())
				{
					__LIB_2__::func_214(Global_35, uLocal_443[1], "ARTHUR_FAREWELL_CONTRIBUTION_RESPONSE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, -417894478, 1, 1, 0, 0);
					iLocal_740++;
				}
				else
				{
					Var1 = "ACCEPT_INVITATION";
					Var1.f_3 = -417894478;
					Var1.f_4 = uLocal_443[1];
					Var1.f_5 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
					Var1.f_6 = 0;
					Var1.f_2 = 3;
					Var1.f_1 = "John";
					iVar9 = AUDIO::_0x72E4D1C4639BC465(Global_35, &Var1);
					if (iVar9 >= 0)
					{
						AUDIO::_0xB18FEC133C7C6C69(iVar9);
					}
					iLocal_740++;
				}
			}
			break;
		case 5:
			func_530();
			func_320();
			if (!func_300(Global_35))
			{
				if (__LIB_2__::func_227(2f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(36), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						iLocal_740++;
					}
				}
			}
			else
			{
				iLocal_740++;
			}
			break;
		case 6:
			func_530();
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_443[1], -1) || __LIB_3__::func_496(uLocal_443[1], "canwalk", 1067030938 /* Float: 1.2f */))
			{
				__LIB_3__::func_475(uLocal_443[0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_443[0]));
				func_15(6);
			}
			break;
		case 7:
			func_530();
			if (!func_235())
			{
				if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_MOURN");
					iLocal_740++;
				}
			}
			break;
		case 8:
			func_530();
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_MOURN"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_MOURN", true);
				}
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "MOURN_BOOL", true, false);
				iLocal_740++;
			}
			break;
		case 9:
			func_530();
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY"))
			{
				iLocal_623 = 9;
				__LIB_4__::func_406(&(Local_559[0 /*17*/]), 0);
				__LIB_3__::func_362(&(Local_559[0 /*17*/]), 12f);
				Local_559[1 /*17*/].f_13 = func_180(74);
				Local_559[2 /*17*/].f_13 = func_180(75);
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_360(&(Local_559[0 /*17*/]), "INTERACT_ROB");
				__LIB_4__::func_454(&(Local_559[0 /*17*/]), 1);
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_443[1], 1f, 656, 0);
				func_15(8);
			}
			break;
	}
}

void func_299()
{
	int iVar0;
	switch (iLocal_741)
	{
		case 0:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_TALK");
			if ((__LIB_2__::func_227(2f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1)) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_TALK"))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_TALK", true);
				if (__LIB_2__::func_118(uLocal_443[1], 1, 1) <= 20f)
				{
					iVar0 = 27;
					if (__LIB_2__::func_140(0))
					{
						iVar0 = 29;
					}
					if (__LIB_1__::func_149(1) > 0)
					{
						iVar0 = 31;
					}
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(iVar0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_741++;
			}
			break;
		case 1:
			if ((__LIB_2__::func_227(4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_645) >= 26f) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				if (__LIB_2__::func_118(uLocal_443[1], 1, 1) <= 20f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(32), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_741++;
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422, "PB_MOURN");
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 0, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 0, 0);
				__LIB_3__::func_515(&(Local_559[0 /*17*/]), 0, 0);
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_451(&iLocal_538, 0);
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_422, "PB_MOURN"))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_422, "PB_MOURN", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_422, "MOURN_BOOL", true, false);
					iLocal_741++;
				}
			}
			break;
		case 3:
			if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_422, "LADY"))
			{
				iLocal_860 = __LIB_2__::func_340(3, 0, 0);
				iLocal_623 = 9;
				__LIB_4__::func_406(&(Local_559[0 /*17*/]), 0);
				__LIB_3__::func_362(&(Local_559[0 /*17*/]), 12f);
				__LIB_4__::func_453(&(Local_559[1 /*17*/]), 0, 1);
				__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
				Local_559[1 /*17*/].f_13 = func_180(74);
				Local_559[2 /*17*/].f_13 = func_180(75);
				__LIB_4__::func_454(&(Local_559[0 /*17*/]), 1);
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_360(&(Local_559[0 /*17*/]), "INTERACT_ROB");
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_443[1], 1f, 656, 0);
				func_15(8);
			}
			break;
	}
}

bool func_300(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		return true;
	}
	if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true))
	{
		return true;
	}
	return false;
}

void func_301()
{
	Local_422.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_422.f_5, 0, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422.f_1, "Female", uLocal_443[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422.f_1, "player", Global_35, 0);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_422.f_1, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_422.f_1);
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_422.f_1, "PBL_GOODBYE");
}

bool func_302()
{
	int iVar0;
	if (__LIB_1__::func_923())
	{
		iVar0 = __LIB_3__::func_343(0);
		switch (iLocal_512)
		{
			case 6:
				if (iVar0 == 2)
				{
					return true;
				}
				break;
			case 9:
				if (iVar0 == 2097152)
				{
					return true;
				}
				break;
			case 11:
				if (iVar0 == 8192)
				{
					return true;
				}
				break;
		}
	}
	else
	{
		return false;
	}
	return false;
}

bool func_303()
{
	int iVar0;
	if (__LIB_1__::func_923())
	{
		iVar0 = __LIB_3__::func_343(0);
		if (iVar0 == 0 || MAP::_0xF47A1EB2A538A3A3())
		{
			return false;
		}
		switch (iLocal_512)
		{
			case 6:
				if (iVar0 != 2)
				{
					if (iVar0 != 32)
					{
						return true;
					}
				}
				break;
			case 9:
				if (iVar0 != 2097152)
				{
					return true;
				}
				break;
			case 11:
				if (iVar0 != 8192)
				{
					return true;
				}
				break;
		}
	}
	else
	{
		return false;
	}
	return false;
}

void func_306()
{
	switch (iLocal_746)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_651);
			iLocal_746++;
			break;
		case 1:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 2f) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(98), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_821 = true;
				__LIB_0__::func_37(&uLocal_651);
				iLocal_746++;
			}
			break;
		case 2:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 15f) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(99), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_821 = true;
				__LIB_0__::func_37(&uLocal_651);
				iLocal_746++;
			}
			break;
		case 3:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 20f) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(100), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_821 = true;
				__LIB_0__::func_37(&uLocal_651);
				iLocal_746++;
			}
			break;
		case 4:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 8f) && !func_235())
			{
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				func_538();
			}
			break;
	}
}

int func_307()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			return 318;
		case 1:
			return 318;
		case 2:
			return 198;
		case 3:
			return 198;
		case 4:
			return 240;
		case 5:
			return 198;
		case 6:
			return 240;
		case 7:
			return 300;
		case 8:
			return 318;
		case 9:
			return 240;
	}
	return 720;
}

void func_309()
{
	switch (iLocal_747)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_651);
			iLocal_747++;
			break;
		case 1:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 2f) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(101), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_0__::func_37(&uLocal_651);
				bLocal_821 = true;
				iLocal_747++;
			}
			break;
		case 2:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 17f) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(102), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_0__::func_37(&uLocal_651);
				bLocal_821 = true;
				iLocal_747++;
			}
			break;
		case 3:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 15f) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(103), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_0__::func_37(&uLocal_651);
				bLocal_821 = true;
				iLocal_747++;
			}
			break;
		case 4:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 18f) && !func_235())
			{
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				func_538();
			}
			break;
	}
}

void func_311()
{
	switch (iLocal_748)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_651);
			iLocal_748++;
			break;
		case 1:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 0f) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(104), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_0__::func_37(&uLocal_651);
				bLocal_821 = true;
				iLocal_748++;
			}
			break;
		case 2:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 25f) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(105), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_0__::func_37(&uLocal_651);
				bLocal_821 = true;
				iLocal_748++;
			}
			break;
		case 3:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 15f) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(106), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_0__::func_37(&uLocal_651);
				bLocal_821 = true;
				iLocal_748++;
			}
			break;
		case 4:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_651) >= 13f) && !func_235())
			{
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				func_538();
			}
			break;
	}
}

bool func_312()
{
	if (func_240())
	{
		if ((((iLocal_743 == 4 || iLocal_743 == 9) || iLocal_743 == 13) || iLocal_743 == 14) || iLocal_743 == 15)
		{
			if (bLocal_821)
			{
				bLocal_821 = false;
			}
			return false;
		}
		else
		{
			return true;
		}
	}
	else if ((iLocal_744 == 6 || iLocal_744 == 28) || iLocal_744 == 29)
	{
		if (bLocal_821)
		{
			bLocal_821 = false;
		}
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

void func_313()
{
	switch (iLocal_759)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(148), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_759++;
				bLocal_821 = false;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(149), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_759++;
				bLocal_821 = false;
			}
			break;
		case 2:
			if (bLocal_821)
			{
				bLocal_821 = false;
			}
			break;
	}
}

void func_314()
{
	switch (iLocal_744)
	{
		case 0:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 1;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(51), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 2;
			}
			break;
		case 2:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 3;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(2f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(52), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 4;
			}
			break;
		case 4:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(53), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_744 = 5;
			}
			break;
		case 5:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 6;
			}
			break;
		case 6:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 7;
			}
			break;
		case 7:
			if (!func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(56), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 8;
			}
			break;
		case 8:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(43), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 9;
			}
			break;
		case 9:
			if (__LIB_2__::func_227(1f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(57), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 10;
			}
			break;
		case 10:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(44), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 11;
			}
			break;
		case 11:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(45), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 12;
			}
			break;
		case 12:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(46), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_744 = 13;
			}
			break;
		case 13:
			if (!func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(60), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 29;
				__LIB_1__::func_148(&uLocal_702);
				__LIB_1__::func_148(&uLocal_696);
				iLocal_769 = MISC::GET_RANDOM_INT_IN_RANGE(15, 35);
			}
			break;
		case 16:
			if (__LIB_0__::func_94(Global_35, vLocal_473, 1) <= 550f || func_302())
			{
				if (!func_235())
				{
					if (__LIB_0__::func_264(&uLocal_699) > 3f || !__LIB_0__::func_75(&uLocal_699))
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(151), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_148(&uLocal_720);
						iLocal_744 = 22;
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_699);
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_699);
			}
			break;
		case 22:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_720) > 3f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(157), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 23;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_720);
			}
			break;
		case 23:
			if (__LIB_0__::func_94(Global_35, 2411f, -1232f, 46f, 1) <= 250f)
			{
				iLocal_744 = 24;
				__LIB_1__::func_148(&uLocal_720);
			}
			else
			{
				iLocal_744 = 24;
			}
			break;
		case 24:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_720) > 0f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(159), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 25;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_720);
			}
			break;
		case 25:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_720) > 0f)
				{
					__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(160), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 26;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_720);
			}
			break;
		case 26:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_720) > 2f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(161), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 17;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_720);
			}
			break;
		case 17:
			if (bLocal_842 == 0)
			{
				if (__LIB_0__::func_94(Global_35, 2411f, -1232f, 46f, 1) <= 50f || __LIB_0__::func_94(Global_35, 2415f, -1188f, 46f, 1) <= 50f)
				{
					bLocal_842 = true;
					__LIB_1__::func_148(&uLocal_720);
				}
			}
			if (bLocal_842)
			{
				if (!func_235())
				{
					if (__LIB_0__::func_264(&uLocal_720) > 10f)
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(152), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_744 = 18;
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_720);
				}
			}
			if (__LIB_0__::func_94(Global_35, vLocal_473, 1) <= 100f)
			{
				iLocal_744 = 27;
			}
			break;
		case 18:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_720) > 1f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(153), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 19;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_720);
			}
			break;
		case 19:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_720) > 1f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(154), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 20;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_720);
			}
			break;
		case 20:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_720) > 1f)
				{
					__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(155), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 21;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_720);
			}
			break;
		case 21:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_720) > 1f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(156), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 27;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_720);
			}
			break;
		case 27:
			if (__LIB_0__::func_94(Global_35, vLocal_473, 1) <= 100f)
			{
				if (!func_235())
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(162), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_744 = 28;
				}
			}
			break;
		case 28:
			if (__LIB_0__::func_94(Global_35, vLocal_473, 1) <= 50f || func_302())
			{
				if (!func_235())
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(48), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
					iLocal_830 = 1;
					iLocal_744 = 14;
				}
			}
			break;
		case 14:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(47), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_744 = 15;
			}
			break;
		case 15:
			if (!func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(61), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				__LIB_1__::func_148(&uLocal_696);
				iLocal_769 = MISC::GET_RANDOM_INT_IN_RANGE(15, 35);
				iLocal_744 = 30;
			}
			break;
		case 29:
			if (__LIB_0__::func_94(Global_35, vLocal_473, 1) <= 530f || func_302())
			{
				iLocal_744 = 16;
			}
			if ((iLocal_770 < 3 && iLocal_807 == 0) && __LIB_0__::func_94(Global_35, vLocal_473, 1) > 600f)
			{
				if (__LIB_0__::func_264(&uLocal_696) > IntToFloat(iLocal_769))
				{
					if (!func_235())
					{
						if (__LIB_0__::func_264(&uLocal_702) > 3f || !__LIB_0__::func_75(&uLocal_702))
						{
							__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(49), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
							func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
							__LIB_1__::func_148(&uLocal_696);
							iLocal_769 = MISC::GET_RANDOM_INT_IN_RANGE(15, 35);
							iLocal_770++;
						}
					}
					else
					{
						__LIB_1__::func_148(&uLocal_702);
					}
				}
				else
				{
					__LIB_1__::func_148(&uLocal_702);
				}
			}
			break;
		case 30:
			break;
	}
}

void func_315()
{
	switch (iLocal_743)
	{
		case 0:
			if (__LIB_2__::func_227(3f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_743 = 1;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-2f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_743 = 2;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-2f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_743 = 3;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-2f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_743 = 4;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				__LIB_1__::func_148(&uLocal_729);
				iLocal_743 = 5;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-2f, 1, 0, 0) && !func_235())
			{
				if (__LIB_0__::func_264(&uLocal_729) > 1f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(43), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
					iLocal_743 = 6;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_729);
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-2f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(58), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_743 = 7;
			}
			break;
		case 7:
			if (__LIB_2__::func_227(-3f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(45), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_743 = 8;
			}
			break;
		case 8:
			if (__LIB_2__::func_227(-3f, 1, 0, 0) && !func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(59), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_743 = 9;
			}
			break;
		case 9:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(47), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_743 = 10;
			}
			break;
		case 10:
			if (!func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(61), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				__LIB_1__::func_148(&uLocal_729);
				iLocal_743 = 11;
			}
			break;
		case 11:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_729) > 1f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(48), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
					iLocal_743 = 12;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_729);
			}
			break;
		case 12:
			if (!func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(62), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				__LIB_1__::func_148(&uLocal_729);
				iLocal_743 = 13;
			}
			break;
		case 13:
			if (!func_235())
			{
				if (__LIB_0__::func_264(&uLocal_729) > 1f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(49), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
					iLocal_743 = 14;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_729);
			}
			break;
		case 14:
			if (!func_235() && __LIB_0__::func_94(Global_35, vLocal_473, 1) <= 200f)
			{
				iLocal_830 = 1;
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(50), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_743 = 15;
			}
			break;
		case 15:
			break;
	}
}

int func_316()
{
	if (__LIB_1__::func_923())
	{
		switch (iLocal_512)
		{
			case 6:
				return 80;
			case 9:
				return 80;
			case 11:
				return 120;
		}
	}
	return 60;
}

void func_317()
{
	switch (iLocal_756)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_690);
			iLocal_756++;
			break;
		case 1:
			if (iLocal_807 == 0)
			{
				if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_0__::func_264(&uLocal_690) >= 5f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(101), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_690);
					iLocal_756++;
				}
			}
			break;
		case 2:
			if (iLocal_807 == 0)
			{
				if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_0__::func_264(&uLocal_690) >= BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(-3, 65536)))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(105), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_690);
					iLocal_756++;
				}
			}
			break;
		case 3:
			if (iLocal_807 == 0)
			{
				if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_0__::func_264(&uLocal_690) >= BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(-3, 65536)))
				{
					func_540();
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(107), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_0__::func_769();
					func_15(8);
					__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
					__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
					iLocal_756++;
				}
			}
			break;
	}
}

int func_318()
{
	int iVar0;
	iVar0 = PED::GET_MOUNT(Global_35);
	switch (iLocal_625)
	{
		case 0:
			func_44(0);
			if (MAP::DOES_BLIP_EXIST(iLocal_779))
			{
				MAP::REMOVE_BLIP(&iLocal_779);
			}
			__LIB_0__::func_769();
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				iLocal_838 = 1;
				__LIB_3__::func_460(Global_35, &uLocal_742, 65, 256, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
				func_542(iVar0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				if (!__LIB_0__::func_163(iVar0, -982327190))
				{
					TASK::TASK_STAND_STILL(iVar0, 10000);
				}
				if (TASK::IS_PED_STILL(iVar0) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 0.3f)
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_422.f_1, "HORSE", iVar0, 0);
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_422.f_1, PED::GET_PED_BONE_COORDS(iVar0, 0, 0f, 0f, 0f), ENTITY::GET_ENTITY_ROTATION(iVar0, 2), 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_422.f_1, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 0));
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_422.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					iLocal_625 = 1;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_443[1], true))
			{
				iLocal_784 = PED::GET_VEHICLE_PED_IS_IN(uLocal_443[1], false);
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_784, 2f, 3, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				iLocal_838 = 1;
				iLocal_625 = 4;
			}
			else if (TASK::_0xEFC4303DDC6E60D3(Global_35) && TASK::_0xED1F514AF4732258(Global_35) == PED::GET_MOUNT(uLocal_443[1]))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				iLocal_838 = 1;
				iLocal_625 = 5;
			}
			break;
		case 1:
			ANIMSCENE::START_ANIM_SCENE(Local_422.f_1);
			__LIB_3__::func_552(uLocal_443[1]);
			iLocal_625 = 2;
			break;
		case 2:
			if (fLocal_737 >= 0.98f)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_443[1], true, true);
				iLocal_625 = 3;
			}
			if (iLocal_836 == 0)
			{
				if (fLocal_737 >= 0.316384f)
				{
					func_543(joaat("PROVISION_RING_SILVER"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					__LIB_1__::func_715(12, 0, 0, "RE_HONOR_HELPED_VICTIM", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_836 = 1;
				}
			}
			break;
		case 3:
			if (__LIB_3__::func_439(Local_422.f_1))
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_422.f_1))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_422.f_1);
				}
				if (iLocal_838 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_838 = 0;
				}
				func_540();
				func_24();
				iLocal_623 = 9;
				__LIB_4__::func_406(&(Local_559[0 /*17*/]), 0);
				__LIB_3__::func_362(&(Local_559[0 /*17*/]), 12f);
				__LIB_4__::func_454(&(Local_559[0 /*17*/]), 1);
				__LIB_4__::func_453(&(Local_559[1 /*17*/]), 0, 1);
				__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
				Local_559[1 /*17*/].f_13 = func_180(74);
				Local_559[2 /*17*/].f_13 = func_180(75);
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_360(&(Local_559[0 /*17*/]), "INTERACT_ROB");
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
				iLocal_624 = 0;
				iLocal_625 = 6;
			}
			break;
		case 4:
			if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_784))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_443[1], false))
				{
					func_540();
				}
				else
				{
					__LIB_1__::func_715(12, 0, 0, "RE_HONOR_HELPED_VICTIM", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_623 = 9;
					__LIB_4__::func_406(&(Local_559[0 /*17*/]), 0);
					__LIB_3__::func_362(&(Local_559[0 /*17*/]), 12f);
					__LIB_4__::func_454(&(Local_559[0 /*17*/]), 1);
					__LIB_4__::func_453(&(Local_559[1 /*17*/]), 0, 1);
					__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
					Local_559[1 /*17*/].f_13 = func_180(74);
					Local_559[2 /*17*/].f_13 = func_180(75);
					__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
					__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
					__LIB_2__::func_360(&(Local_559[0 /*17*/]), "INTERACT_ROB");
					__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
					__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
					iLocal_624 = 0;
					iLocal_625 = 6;
				}
			}
			break;
		case 5:
			if (TASK::IS_PED_STILL(uLocal_443[1]))
			{
				if (iLocal_838 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_838 = 0;
				}
				func_540();
				__LIB_1__::func_715(12, 0, 0, "RE_HONOR_HELPED_VICTIM", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
				iLocal_623 = 9;
				__LIB_4__::func_406(&(Local_559[0 /*17*/]), 0);
				__LIB_3__::func_362(&(Local_559[0 /*17*/]), 12f);
				__LIB_4__::func_454(&(Local_559[0 /*17*/]), 1);
				__LIB_4__::func_453(&(Local_559[1 /*17*/]), 0, 1);
				__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
				Local_559[1 /*17*/].f_13 = func_180(74);
				Local_559[2 /*17*/].f_13 = func_180(75);
				__LIB_2__::func_360(&(Local_559[1 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_360(&(Local_559[0 /*17*/]), "INTERACT_ROB");
				__LIB_3__::func_515(&(Local_559[1 /*17*/]), 1, 0);
				__LIB_3__::func_515(&(Local_559[2 /*17*/]), 1, 0);
				iLocal_624 = 0;
				iLocal_625 = 6;
			}
			break;
		case 6:
			__LIB_0__::func_8(&Global_1935630, 4);
			if (iLocal_838 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				iLocal_838 = 0;
			}
			return 1;
	}
	return 0;
}

int func_319(bool bParam0)
{
	switch (iLocal_745)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(63), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_745++;
				__LIB_0__::func_325(&iLocal_779);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_745++;
				__LIB_0__::func_325(&iLocal_779);
			}
			break;
		case 2:
			if (!func_235())
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
				func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
				iLocal_745++;
				__LIB_0__::func_325(&iLocal_779);
			}
			break;
		case 3:
			if (fLocal_737 >= 0.45f || bParam0)
			{
				if (!func_235())
				{
					__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(66), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 15, 0);
					func_286(Global_35, uLocal_443[1], &uLocal_513, 2000, 15, 0);
					iLocal_745++;
				}
			}
			break;
		case 4:
			iLocal_745++;
			break;
		case 5:
			iLocal_745++;
			break;
		case 6:
			return 1;
	}
	return 0;
}

void func_320()
{
	if ((func_300(Global_35) && !func_300(uLocal_443[1])) && !func_545(iLocal_782))
	{
		if (iLocal_793 == 0)
		{
			iLocal_793 = 1;
			__LIB_1__::func_148(&uLocal_654);
			func_546();
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_491))
			{
				VOLUME::_DELETE_VOLUME(iLocal_491);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_492))
			{
				VOLUME::_DELETE_VOLUME(iLocal_492);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_493))
			{
				VOLUME::_DELETE_VOLUME(iLocal_493);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_494))
			{
				VOLUME::_DELETE_VOLUME(iLocal_494);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_495))
			{
				VOLUME::_DELETE_VOLUME(iLocal_495);
			}
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_496))
			{
				VOLUME::_DELETE_VOLUME(iLocal_496);
			}
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_MOUNT_ANIMAL(uLocal_443[1], iLocal_785, -1, 0, 1.5f, 1, 0, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_784, true))
			{
				TASK::TASK_ENTER_VEHICLE(uLocal_443[1], iLocal_784, -1, 0, 1.5f, 8388608, 0);
			}
		}
		else if (!__LIB_0__::func_163(uLocal_443[1], 1868526510) && !__LIB_0__::func_163(uLocal_443[1], -1794415470))
		{
			iLocal_793 = 0;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_779) && func_300(uLocal_443[1]))
	{
		if (iLocal_824 == 0)
		{
			iLocal_824 = 1;
			iLocal_812 = 1;
			if (__LIB_0__::func_75(&uLocal_636))
			{
				__LIB_0__::func_37(&uLocal_636);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_422))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_422);
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_900[0]))
			{
				iLocal_900[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1646.43f, -284.92f, 166.25f, 0f, 0f, 0f, 10f, 10f, 3f, "GPS Volume 0");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_900[1]))
			{
				iLocal_900[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1410.98f, -343.39f, 104.89f, 0f, 0f, 0f, 10f, 10f, 3f, "GPS Volume 1");
			}
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_900[2]))
			{
				iLocal_900[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1382.54f, -88.17f, 87.18f, 0f, 0f, 0f, 10f, 10f, 3f, "GPS Volume 2");
			}
			PATHFIND::_0xF2A2177AC848B3A8(iLocal_900[0], 0, 1);
			PATHFIND::_0xF2A2177AC848B3A8(iLocal_900[1], 0, 1);
			PATHFIND::_0xF2A2177AC848B3A8(iLocal_900[2], 0, 1);
			__LIB_0__::func_7(&Global_1935630, 4);
			iLocal_779 = MAP::_BLIP_ADD_FOR_COORD(408396114, vLocal_473);
			MAP::_BLIP_SET_MODIFIER(iLocal_779, -1878373110);
			MAP::_BLIP_SET_MODIFIER(iLocal_779, 231194138);
			__LIB_1__::func_148(&uLocal_672);
			__LIB_1__::func_148(&uLocal_648);
			__LIB_1__::func_148(&uLocal_705);
		}
	}
}

void func_321()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	if (iLocal_817 == 0)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(uLocal_443[1]))
		{
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP")))
			{
				if (!__LIB_0__::func_75(&uLocal_711))
				{
					__LIB_1__::func_283(&uLocal_711, 0);
				}
			}
			if (__LIB_0__::func_264(&uLocal_711) > 1f)
			{
				if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(109), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_817 = 1;
					__LIB_0__::func_37(&uLocal_711);
				}
			}
		}
	}
	bVar0 = PED::IS_PED_ON_MOUNT(uLocal_443[1]);
	bVar1 = PED::IS_PED_ON_MOUNT(Global_35);
	bVar2 = PED::IS_PED_IN_ANY_VEHICLE(uLocal_443[1], false);
	bVar3 = PED::IS_PED_IN_ANY_VEHICLE(Global_35, false);
	if ((bVar0 && !bVar1) || (bVar2 && !bVar3))
	{
		if (iLocal_818 == 0)
		{
			if ((bVar0 && func_228(uLocal_443[1], Global_35, func_180(110), 1f, 0)) || bVar2)
			{
				iLocal_818 = 1;
				iLocal_771++;
				if (iLocal_771 > 1)
				{
					func_538();
				}
			}
		}
	}
	else
	{
		iLocal_818 = 0;
	}
	if (bVar0 && bVar1)
	{
		if (PED::GET_MOUNT(uLocal_443[1]) != PED::GET_MOUNT(Global_35))
		{
			bVar4 = true;
		}
	}
	if (bVar3 && bVar2)
	{
		if (PED::GET_VEHICLE_PED_IS_IN(uLocal_443[1], false) != PED::GET_VEHICLE_PED_IS_IN(Global_35, false))
		{
			bVar4 = true;
		}
	}
	if ((bVar2 && bVar1) || (bVar3 && bVar0))
	{
		bVar4 = true;
	}
	if (bVar4)
	{
		if (__LIB_2__::func_227(0, 1, uLocal_443[1], 1))
		{
			iLocal_818 = 1;
			iLocal_771++;
			func_538();
		}
	}
	if (!__LIB_0__::func_75(&uLocal_663))
	{
		__LIB_1__::func_148(&uLocal_663);
	}
	else if (__LIB_0__::func_264(&uLocal_663) >= 20f)
	{
		if ((bVar1 && bVar0) && Global_1935630.f_40 == PED::GET_MOUNT(uLocal_443[1]))
		{
			if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) >= 3f)
			{
				if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(111), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					__LIB_1__::func_148(&uLocal_699);
					__LIB_0__::func_37(&uLocal_663);
				}
			}
		}
	}
	if (!__LIB_0__::func_75(&uLocal_705))
	{
		__LIB_1__::func_148(&uLocal_705);
	}
	else if (__LIB_0__::func_264(&uLocal_705) > 6f)
	{
		if (iLocal_819 == 0)
		{
			if ((bVar1 && bVar0) && Global_1935630.f_40 == PED::GET_MOUNT(uLocal_443[1]))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) >= 1.5f)
				{
					if (PED::_0x498F2E77982D6945(Global_35, "FoliageActive") && PED::_0x56E58D4D118FB45E(Global_35, "FoliageHeight") >= 1.8f)
					{
						if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(112), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							__LIB_1__::func_148(&uLocal_699);
							iLocal_819 = 1;
						}
					}
				}
			}
		}
	}
	if (iLocal_827 == 0)
	{
		if ((bVar1 && bVar0) && Global_1935630.f_40 == PED::GET_MOUNT(uLocal_443[1]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PED::GET_MOUNT(Global_35)) && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(PED::GET_MOUNT(Global_35)) >= 0.5f)
			{
				if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(113), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_827 = 1;
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_WATER(PED::GET_MOUNT(Global_35)))
			{
				iLocal_827 = 0;
			}
		}
	}
	if (!__LIB_0__::func_75(&uLocal_666))
	{
		__LIB_1__::func_148(&uLocal_666);
	}
	else if (__LIB_0__::func_264(&uLocal_666) >= 20f)
	{
		if ((bVar1 && bVar0) && Global_1935630.f_40 == PED::GET_MOUNT(uLocal_443[1]))
		{
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_MOUNT(Global_35)) && ENTITY::_0x6D58167F62238284(PED::GET_MOUNT(Global_35)) > 2f)
			{
				if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(112), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
				}
				__LIB_1__::func_148(&uLocal_666);
			}
		}
	}
}

void func_322()
{
	int iVar0;
	if (func_548(uLocal_443[1]))
	{
		if (func_548(Global_35))
		{
			if (iLocal_833 == 1)
			{
				__LIB_0__::func_325(&iLocal_780);
				__LIB_0__::func_325(&iLocal_781);
				if (__LIB_0__::func_398(7) == Global_1935630.f_41 && Global_1935630.f_41 == PED::GET_MOUNT(uLocal_443[1]))
				{
					__LIB_1__::func_721(7);
				}
				else if (__LIB_0__::func_398(1) == Global_1935630.f_41 && Global_1935630.f_41 == PED::GET_MOUNT(uLocal_443[1]))
				{
					__LIB_1__::func_721(1);
				}
				iLocal_833 = 0;
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_450[1]))
			{
				MAP::REMOVE_BLIP(&(iLocal_450[1]));
			}
			if (!bLocal_507)
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_779))
				{
					iLocal_779 = MAP::_BLIP_ADD_FOR_COORD(408396114, vLocal_473);
					MAP::_BLIP_SET_MODIFIER(iLocal_779, -1878373110);
					MAP::_BLIP_SET_MODIFIER(iLocal_779, 231194138);
				}
			}
		}
		else
		{
			if (!bLocal_507)
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_450[1]))
				{
					iLocal_450[1] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_443[1]);
					MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_450[1], "RE_INTER_STRANGER");
					if (iLocal_833 == 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_443[1], true))
						{
							iVar0 = PED::GET_VEHICLE_PED_IS_IN(uLocal_443[1], true);
							if (!bLocal_786)
							{
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1], joaat("REL_PLAYER_LIKE"));
								bLocal_786 = true;
							}
							__LIB_2__::func_73(iVar0, &iLocal_780, 408396114, 0, 0, 0);
						}
						else if (__LIB_0__::func_398(7) == Global_1935630.f_41)
						{
							__LIB_1__::func_718(7);
						}
						else if (__LIB_0__::func_398(1) == Global_1935630.f_41)
						{
							__LIB_1__::func_718(1);
						}
						else
						{
							__LIB_2__::func_73(Global_1935630.f_41, &iLocal_781, 408396114, 0, 0, 0);
						}
						iLocal_833 = 1;
					}
				}
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_779))
			{
				MAP::REMOVE_BLIP(&iLocal_779);
			}
		}
	}
	else
	{
		if (iLocal_833 == 1)
		{
			__LIB_0__::func_325(&iLocal_780);
			__LIB_0__::func_325(&iLocal_781);
			if (__LIB_0__::func_398(7) == Global_1935630.f_41 && Global_1935630.f_41 == PED::GET_MOUNT(uLocal_443[1]))
			{
				__LIB_1__::func_721(7);
			}
			else if (__LIB_0__::func_398(1) == Global_1935630.f_41 && Global_1935630.f_41 == PED::GET_MOUNT(uLocal_443[1]))
			{
				__LIB_1__::func_721(1);
			}
			iLocal_833 = 0;
		}
		if (!bLocal_507)
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_450[1]))
			{
				iLocal_450[1] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_443[1]);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_450[1], "RE_INTER_STRANGER");
			}
		}
	}
}

void func_323()
{
	switch (iLocal_626)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_ON_MOUNT(uLocal_443[1]))
			{
				if (func_545(iLocal_782))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(145), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_654);
					iLocal_626 = 1;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_FACING_PED(uLocal_443[1], Global_35, 30f) && !__LIB_0__::func_163(uLocal_443[1], -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_443[1], Global_35, 0, -1f, -1f, -1f);
			}
			if (!func_545(iLocal_782))
			{
				TASK::TASK_MOUNT_ANIMAL(uLocal_443[1], iLocal_782, -1, 0, 1f, 1, 0, 0);
				iLocal_793 = 0;
				__LIB_1__::func_148(&uLocal_654);
				iLocal_626 = 2;
			}
			if (__LIB_0__::func_264(&uLocal_654) >= 40f)
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_443[1], 1f, 656, 0);
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(107), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				func_15(8);
			}
			break;
		case 2:
			iLocal_626 = 0;
			break;
	}
}

void func_325()
{
	if (func_300(uLocal_443[1]))
	{
		if (__LIB_4__::func_447(&uLocal_209, Global_35, vLocal_473) || __LIB_4__::func_449(&uLocal_209, Global_35, 20, 1090519040 /* Float: 8f */))
		{
			if (!__LIB_0__::func_75(&uLocal_636) && func_302() == 0)
			{
				__LIB_1__::func_148(&uLocal_636);
				iLocal_765 = 4;
			}
		}
		if (!func_300(Global_35))
		{
			if (!__LIB_0__::func_75(&uLocal_639))
			{
				__LIB_1__::func_148(&uLocal_639);
				iLocal_765 = 7;
				iLocal_789 = 1;
			}
		}
	}
	if (!func_300(uLocal_443[1]))
	{
		if (!__LIB_0__::func_75(&uLocal_636))
		{
			__LIB_1__::func_148(&uLocal_636);
			iLocal_765 = 12;
		}
	}
	if (iLocal_790 == 0)
	{
		if (iLocal_789 == 1)
		{
			if (__LIB_0__::func_264(&uLocal_639) >= IntToFloat(iLocal_766))
			{
				iLocal_789 = 0;
				__LIB_1__::func_148(&uLocal_636);
				__LIB_1__::func_422(sLocal_503, 7500, 0, 1, 0, 0, -1, -1, 0);
			}
		}
		if (iLocal_788 == 0)
		{
			if (func_300(uLocal_443[1]) && func_300(uLocal_443[1]))
			{
				if (__LIB_0__::func_264(&uLocal_636) >= IntToFloat(iLocal_765))
				{
					iLocal_788 = 1;
					__LIB_0__::func_37(&uLocal_636);
					__LIB_1__::func_422(sLocal_502, 7500, 0, 1, 0, 0, -1, -1, 0);
				}
			}
		}
	}
}

void func_326(int iParam0)
{
	if (__LIB_2__::func_118(uLocal_443[1], 1, 1) > IntToFloat(iParam0))
	{
		if (func_300(uLocal_443[1]))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_MOUNT_ANIMAL(0, PED::GET_MOUNT(uLocal_443[1]), -1, 0, 1f, 16, 0, 0);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
			{
				TASK::TASK_ENTER_VEHICLE(0, PED::GET_VEHICLE_PED_IS_USING(uLocal_443[1]), -1, 0, 1f, 16, 0);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 656, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		}
		else
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
			TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 656, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		}
		__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(107), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		__LIB_0__::func_769();
		func_15(8);
	}
}

void func_331()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_844 = "PB_BRKOUT_N";
			break;
		case 2:
			sLocal_844 = "PB_BRKOUT_BACK_R";
			break;
		case 1:
			sLocal_844 = "PB_BRKOUT_BACK_L";
			break;
		case 3:
			sLocal_844 = "PB_BRKOUT_L";
			break;
		case 4:
			sLocal_844 = "PB_BRKOUT_R";
			break;
	}
}

void func_333()
{
	switch (iLocal_768)
	{
		case 0:
			if (!PED::IS_PED_RAGDOLL(uLocal_443[1]))
			{
				if (bLocal_832)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(168), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_768++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(2f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_122(uLocal_443[1], "SCREAM_TERROR", joaat("SPEECH_PARAMS_FORCE_SHOUTED"), 0, 1, 0, 0, 1);
				iLocal_768++;
			}
			break;
	}
}

int func_341()
{
	if ((((func_555(&uLocal_443, &(Local_15.f_5), &iLocal_778, &uLocal_739, 1, 3, 1) || ENTITY::IS_ENTITY_DEAD(uLocal_443[2])) || ENTITY::IS_ENTITY_DEAD(uLocal_443[3])) || ENTITY::IS_ENTITY_DEAD(uLocal_443[1])) || (uLocal_508 && __LIB_4__::func_451(&uLocal_508)))
	{
		Local_15.f_45 = 1;
		if (Local_15.f_48 == 0)
		{
			__LIB_3__::func_426(&Local_15, &(Local_15.f_48), Local_15.f_3, &(Local_15.f_51.f_6));
		}
		Local_15.f_46 = 1;
		if (iLocal_778 == 2048 && !ENTITY::IS_ENTITY_DEAD(uLocal_443[1]))
		{
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_443[1], 0);
			__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(132), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_15(16);
		return 1;
	}
	return 0;
}

void func_343()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			if (!CAM::IS_SPHERE_VISIBLE(1639.15f, 1583.75f, 153.7f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { 1639.15f, 1583.75f, 149.78f };
				Local_229[5 /*32*/].f_6 = { 1637.7f, 1582.11f, 149.77f };
				Local_229[4 /*32*/].f_9 = 57.2f;
				Local_229[5 /*32*/].f_9 = 57.2f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { 1566.22f, 1593.56f, 146.43f };
				Local_229[5 /*32*/].f_6 = { 1567.9f, 1591.92f, 146.46f };
				Local_229[4 /*32*/].f_9 = -40.67f;
				Local_229[5 /*32*/].f_9 = -40.67f;
			}
			break;
		case 1:
			if (!CAM::IS_SPHERE_VISIBLE(1417.81f, 1162.01f, 184.03f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { 1420.02f, 1161.46f, 183.98f };
				Local_229[5 /*32*/].f_6 = { 1417.81f, 1162.01f, 184.03f };
				Local_229[4 /*32*/].f_9 = 177.34f;
				Local_229[5 /*32*/].f_9 = 177.34f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { 1440.75f, 1080.24f, 182.72f };
				Local_229[5 /*32*/].f_6 = { 1442.38f, 1081.87f, 182.72f };
				Local_229[4 /*32*/].f_9 = 36.9f;
				Local_229[5 /*32*/].f_9 = 36.9f;
			}
			break;
		case 2:
			if (!CAM::IS_SPHERE_VISIBLE(1977.03f, 1695.66f, 163.46f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { 1977.03f, 1695.66f, 161.46f };
				Local_229[5 /*32*/].f_6 = { 1976.8f, 1698.08f, 161.35f };
				Local_229[4 /*32*/].f_9 = -49.84f;
				Local_229[5 /*32*/].f_9 = -49.84f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { 2061.05f, 1732.16f, 152.78f };
				Local_229[5 /*32*/].f_6 = { 2061.48f, 1729.58f, 152.87f };
				Local_229[4 /*32*/].f_9 = 155.62f;
				Local_229[5 /*32*/].f_9 = 155.62f;
			}
			break;
		case 3:
			if (!CAM::IS_SPHERE_VISIBLE(657.9f, 1941.64f, 223.2f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { 657.9f, 1941.64f, 221.2f };
				Local_229[5 /*32*/].f_6 = { 655.31f, 1942.22f, 221.08f };
				Local_229[4 /*32*/].f_9 = 175.46f;
				Local_229[5 /*32*/].f_9 = 175.46f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { 643.16f, 1845.39f, 204.49f };
				Local_229[5 /*32*/].f_6 = { 645.38f, 1845.46f, 204.55f };
				Local_229[4 /*32*/].f_9 = 5.23f;
				Local_229[5 /*32*/].f_9 = 5.23f;
			}
			break;
		case 4:
			if (!CAM::IS_SPHERE_VISIBLE(902f, 391.47f, 117.88f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { 902f, 391.47f, 115.88f };
				Local_229[5 /*32*/].f_6 = { 902.32f, 389.06f, 115.84f };
				Local_229[4 /*32*/].f_9 = -58.46f;
				Local_229[5 /*32*/].f_9 = -58.46f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { 1006.58f, 402.63f, 105.39f };
				Local_229[5 /*32*/].f_6 = { 1005.74f, 404.6f, 105.42f };
				Local_229[4 /*32*/].f_9 = 42.43f;
				Local_229[5 /*32*/].f_9 = 42.43f;
			}
			break;
		case 5:
			if (!CAM::IS_SPHERE_VISIBLE(1408.96f, 488.42f, 88.2f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { 1408.96f, 488.42f, 86.2f };
				Local_229[5 /*32*/].f_6 = { 1407.61f, 490.23f, 86.19f };
				Local_229[4 /*32*/].f_9 = 76.47f;
				Local_229[5 /*32*/].f_9 = 76.47f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { 1303.55f, 463.51f, 86.98f };
				Local_229[5 /*32*/].f_6 = { 1304.14f, 461.11f, 86.93f };
				Local_229[4 /*32*/].f_9 = -62.2f;
				Local_229[5 /*32*/].f_9 = -62.2f;
			}
			break;
		case 6:
			if (!CAM::IS_SPHERE_VISIBLE(-420.27f, -132.75f, 45.4f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { -420.27f, -132.75f, 43.4f };
				Local_229[5 /*32*/].f_6 = { -422.16f, -131.99f, 43.33f };
				Local_229[4 /*32*/].f_9 = 155.93f;
				Local_229[5 /*32*/].f_9 = 155.93f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { -494.54f, -212.7f, 46.52f };
				Local_229[5 /*32*/].f_6 = { -491.78f, -211.96f, 46.41f };
				Local_229[4 /*32*/].f_9 = -57.95f;
				Local_229[5 /*32*/].f_9 = -57.95f;
			}
			break;
		case 7:
			if (!CAM::IS_SPHERE_VISIBLE(1264.2f, -1601.4f, 66.07f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { 1262.8f, -1604.4f, 64.07f };
				Local_229[5 /*32*/].f_6 = { 1264.2f, -1601.4f, 64.1f };
				Local_229[4 /*32*/].f_9 = -108f;
				Local_229[5 /*32*/].f_9 = -108f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { 1378.56f, -1640.28f, 66.38f };
				Local_229[5 /*32*/].f_6 = { 1378.34f, -1637.9f, 66.28f };
				Local_229[4 /*32*/].f_9 = 44.4f;
				Local_229[5 /*32*/].f_9 = 44.4f;
			}
			break;
		case 8:
			if (!CAM::IS_SPHERE_VISIBLE(1517.16f, -2042.11f, 44.94f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { 1517.16f, -2042.11f, 42.94f };
				Local_229[5 /*32*/].f_6 = { 1514.66f, -2042.05f, 42.88f };
				Local_229[4 /*32*/].f_9 = 169.36f;
				Local_229[5 /*32*/].f_9 = 169.36f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { 1517.76f, -2131.14f, 42.19f };
				Local_229[5 /*32*/].f_6 = { 1519.67f, -2130.73f, 42.23f };
				Local_229[4 /*32*/].f_9 = 33.94f;
				Local_229[5 /*32*/].f_9 = 33.94f;
			}
			break;
		case 9:
			if (!CAM::IS_SPHERE_VISIBLE(1124.98f, -2120.87f, 53.25f, 1f))
			{
				Local_229[4 /*32*/].f_6 = { 1124.98f, -2120.87f, 51.25f };
				Local_229[5 /*32*/].f_6 = { 1124.41f, -2123.29f, 51.18f };
				Local_229[4 /*32*/].f_9 = -109.47f;
				Local_229[5 /*32*/].f_9 = -109.47f;
			}
			else
			{
				Local_229[4 /*32*/].f_6 = { 1206.88f, -2145.83f, 53.53f };
				Local_229[5 /*32*/].f_6 = { 1208.32f, -2143.71f, 53.7f };
				Local_229[4 /*32*/].f_9 = 72.6f;
				Local_229[5 /*32*/].f_9 = 72.6f;
			}
			break;
	}
}

void func_344()
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_500);
	TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, func_557(), 0, 15f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 1048580);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_500);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_443[2], iLocal_500);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_500);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_501);
	TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, uLocal_443[2], Global_35, 0, -1, 9f, 1073741824 /* Float: 2f */, 0);
	TASK::TASK_CONFRONT(0, Global_35, 128);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_501);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_443[3], iLocal_501);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_501);
}

void func_345()
{
	if (__LIB_0__::func_264(&uLocal_723) > 0.5f)
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_450[2]))
		{
			__LIB_2__::func_73(uLocal_443[2], &(iLocal_450[2]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
	}
	if (__LIB_0__::func_264(&uLocal_723) > 1f)
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_450[3]))
		{
			__LIB_2__::func_73(uLocal_443[3], &(iLocal_450[3]), joaat("BLIP_STYLE_ENEMY"), 0, 0, 0);
		}
	}
}

int func_346(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	if (((PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, bParam6, bParam7) && (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iVar0))) && ENTITY::IS_ENTITY_A_PED(iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == *uParam0)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, bParam1);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, bParam2);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, bParam3);
		return 1;
	}
	if (bParam4)
	{
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 3, 2, false);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 4, 2, false);
		PLAYER::_0xA3DB37EDF9A74635(PLAYER::GET_PLAYER_INDEX(), *uParam0, 7, 2, false);
	}
	return 0;
}

bool func_349(int iParam0, var uParam1, float fParam2, bool bParam3, float fParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	func_100(uParam1);
	if (Global_1935630.f_12)
	{
		uParam1->f_1 = 0;
		uParam1->f_2 = 1;
		return true;
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_INTERACT_LOCKON"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_HORSE_COLLECT"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 194, true);
	switch (*uParam1)
	{
		case 0:
			if (!uParam1->f_7)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_16))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_16, 0, -1082130432 /* Float: -1f */, uParam1->f_21, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_7 = 1;
			}
			if ((((((!PED::IS_PED_RAGDOLL(Global_35) && !PED::IS_PED_FALLING(Global_35)) && !PED::_IS_PED_FALLING_2(Global_35)) && !ENTITY::IS_ENTITY_IN_AIR(Global_35, 1)) && !__LIB_0__::func_163(Global_35, 501393341)) && !__LIB_0__::func_163(Global_35, 1553520516)) && !__LIB_0__::func_163(Global_35, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
			{
				PED::_0xC163DAC52AC975D3(iParam0, 32);
				uParam1->f_25 = { Global_36 };
				if (__LIB_0__::func_27(iParam5, 4))
				{
					PED::FORCE_PED_MOTION_STATE(Global_35, joaat("MOTIONSTATE_IDLE"), false, 0, false);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
				}
				if (__LIB_0__::func_154(Global_1935630.f_44))
				{
					__LIB_1__::func_283(&(uParam1->f_32), 0);
				}
				else
				{
					__LIB_2__::func_462(&(uParam1->f_32), 0.5f, 0);
				}
				TASK::TASK_ROB_PED(iParam0, Global_35, 0f, iParam5, iParam9);
				if (!__LIB_0__::func_474(609))
				{
					__LIB_0__::func_105(1);
					uParam1->f_28 = __LIB_0__::func_45("TF_AIM_AMBUSH", 10000, 0, 0, 0, 1);
					__LIB_0__::func_378(609, &uVar0, &uVar1);
					__LIB_2__::func_447(&uVar0, &uVar1);
				}
				uParam1->f_8 = 1;
				*uParam1 = 2;
			}
			break;
		case 2:
			if (((!uParam1->f_12 && !uParam1->f_13) && __LIB_1__::func_285(&(uParam1->f_32), 2f)) && __LIB_2__::func_448(iParam0, joaat("BSTARTSUCCESS"), "bStartSuccess", 1, 1.8f, 1))
			{
				if (__LIB_4__::func_458(&(uParam1->f_36), "PLAYER_SURRENDER_REACH_FOR_WEAPON", Global_36, 0, joaat("INPUT_ATTACK"), 1097859072 /* Float: 15f */, 0, 0, 1, "", 1, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					uParam1->f_12 = 1;
				}
				if (!uParam1->f_14)
				{
					if (__LIB_0__::func_139(uParam1->f_36))
					{
						uParam1->f_14 = 1;
					}
				}
			}
			if (uParam1->f_14)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BENDSUCCESS"), "bEndSuccess", 1, 1.8f, 1))
				{
					__LIB_1__::func_281(&(uParam1->f_36), 1, 1);
				}
			}
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				uParam1->f_1 = 1;
				return true;
			}
			bVar2 = false;
			if (__LIB_2__::func_470() && PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				bVar2 = true;
			}
			else if (Global_1935630.f_25)
			{
				bVar2 = true;
			}
			else if (PED::IS_PED_IN_COMBAT(iParam0, 0) && __LIB_0__::func_163(iParam0, 780511057))
			{
				bVar2 = true;
			}
			else if (__LIB_2__::func_518(uParam1))
			{
				bVar2 = true;
			}
			else if (__LIB_2__::func_508(uParam1, bParam11))
			{
				bVar2 = true;
			}
			else if ((__LIB_0__::func_27(iParam5, 16) && !__LIB_0__::func_163(iParam0, 1435919172)) && !ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				bVar2 = true;
			}
			if (!uParam1->f_15)
			{
				if (PED::IS_PED_SHOOTING(iParam0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, true, false);
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_20))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(Global_35, iParam0, uParam1->f_20, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_281(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				uParam1->f_6 = 1;
				return true;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, joaat("OBJECTEXCHANGE")))
			{
				if (iParam6 != 0)
				{
					func_567(iParam6, 1, 0, -142743235, 0);
					__LIB_2__::func_463(iParam0, iParam6, 1, 0);
				}
				iVar3 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(__LIB_0__::func_492(1)) * fParam2));
				if (iVar3 > 0)
				{
					__LIB_1__::func_432(iVar3, 0, 0, 1, 1);
					__LIB_2__::func_449(iVar3);
					__LIB_2__::func_55(iParam0, &iVar4);
					__LIB_2__::func_190(iParam0, (iVar4 + iVar3));
				}
				PAD::SET_PAD_SHAKE(0, 100, 100);
				if (!uParam1->f_3)
				{
					uParam1->f_2 = 1;
				}
			}
			if (bParam7)
			{
				if (__LIB_2__::func_448(iParam0, joaat("BBEFOREHITBREAKOUT"), "bBeforeHitBreakout", iParam8, 0.9f, 0))
				{
					uParam1->f_5 = 1;
					return true;
				}
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_INTRO"), "DLG_INTRO", iParam8, 0.5f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_17))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(0f, 1, iParam0, 1))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_17, 0, -1082130432 /* Float: -1f */, uParam1->f_22, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_15 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_HIT"), "DLG_HIT", iParam8, 0.6f, 0))
			{
				if (bParam3)
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_2__::func_461(0);
					}
				}
				if (uParam1->f_11)
				{
					if (__LIB_2__::func_227(0, 1, iParam0, 1))
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
						{
							__LIB_2__::func_303(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
				}
				else if (__LIB_2__::func_227(fParam4, 1, 0, 0))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_18))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_18, 0, -1082130432 /* Float: -1f */, uParam1->f_23, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_281(&(uParam1->f_36), 1, 1);
				uParam1->f_13 = 1;
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_cut_cheek", 0f, 1f);
				PED::APPLY_PED_DAMAGE_PACK(Global_35, "PD_Right_bruise_eye_A", 0f, 1f);
				if (bParam10)
				{
				}
				uParam1->f_4 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("DLG_FAILED"), "DLG_FAILED", iParam8, 0.7f, 0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam1->f_19))
				{
					if (bParam3)
					{
						__LIB_2__::func_461(0);
					}
					if (__LIB_2__::func_227(fParam4, 1, 0, 0))
					{
						__LIB_2__::func_303(iParam0, Global_35, uParam1->f_19, 0, -1082130432 /* Float: -1f */, uParam1->f_24, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				uParam1->f_2 = 0;
				uParam1->f_3 = 1;
			}
			if (__LIB_2__::func_448(iParam0, joaat("BLENDOUT"), "Blendout", iParam8, 0.8f, 0) || !__LIB_0__::func_163(iParam0, 2137044382))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_351()
{
	switch (iLocal_755)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], uLocal_443[2], func_180(131), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(-4f, 1, uLocal_443[2], 1))
			{
				__LIB_2__::func_303(uLocal_443[2], uLocal_443[1], func_180(133), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(-4f, 1, uLocal_443[2], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(134), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(-4f, 1, uLocal_443[2], 1))
			{
				__LIB_2__::func_303(uLocal_443[2], uLocal_443[1], func_180(135), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(-4f, 1, uLocal_443[2], 1))
			{
				__LIB_2__::func_303(uLocal_443[2], uLocal_443[1], func_180(137), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[3], 1) && __LIB_2__::func_227(-4f, 1, uLocal_443[2], 1))
			{
				__LIB_2__::func_303(uLocal_443[3], uLocal_443[1], func_180(138), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[3], 1) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], uLocal_443[3], func_180(139), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_755++;
			}
			break;
	}
}

bool func_352()
{
	float fVar0;
	vector3 vVar1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = 20f;
	}
	else
	{
		fVar0 = 15f;
	}
	if (PED::_GET_PED_CROUCH_MOVEMENT(Global_35))
	{
		vVar1 = { 0f, 0f, 0f };
	}
	else if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		vVar1 = { 16f, 16f, 10f };
	}
	else
	{
		vVar1 = { 10f, 10f, 10f };
	}
	if ((((((__LIB_0__::func_665(uLocal_443[2], Global_35, 1, 1) <= fVar0 && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_443[2], Global_35, 17)) || (__LIB_0__::func_665(uLocal_443[3], Global_35, 1, 1) <= fVar0 && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_443[3], Global_35, 17))) || (__LIB_0__::func_665(uLocal_443[1], Global_35, 1, 1) <= fVar0 && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_443[1], Global_35, 17))) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_443[2], true, false), vVar1, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_443[3], true, false), vVar1, false, true, 0)) || ENTITY::IS_ENTITY_AT_COORD(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_443[1], true, false), vVar1, false, true, 0))
	{
		func_286(uLocal_443[2], Global_35, &uLocal_513, 2000, 25, 0);
		func_286(uLocal_443[3], Global_35, &uLocal_513, 2000, 25, 0);
		func_286(uLocal_443[1], Global_35, &uLocal_513, 2000, 25, 0);
		Local_15.f_44 = 1;
		return true;
	}
	return false;
}

void func_353()
{
	switch (iLocal_761)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[3], 1) && __LIB_2__::func_227(-4f, 1, uLocal_443[2], 1))
			{
				__LIB_2__::func_303(uLocal_443[3], Global_35, func_180(115), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				bLocal_826 = true;
				iLocal_761++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[3], 1) && __LIB_2__::func_227(-4f, 1, uLocal_443[2], 1))
			{
				__LIB_2__::func_303(uLocal_443[3], Global_35, func_180(116), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_761++;
			}
			break;
	}
}

void func_354()
{
	switch (iLocal_763)
	{
		case 0:
			iLocal_763++;
			break;
		case 1:
			if (iLocal_767 > 0)
			{
				if (__LIB_2__::func_227(2f, 1, uLocal_443[1], 1))
				{
					if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(127), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0))
					{
						iLocal_763++;
					}
				}
			}
			else if (__LIB_2__::func_227(0f, 1, uLocal_443[1], 1))
			{
				if (__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(126), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 0, 0, 0))
				{
					iLocal_763++;
				}
			}
			break;
		case 2:
			iLocal_763++;
			break;
		case 3:
			iLocal_763++;
			break;
	}
}

void func_355()
{
	switch (iLocal_762)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && PED::IS_PED_DEAD_OR_DYING(uLocal_443[2], true))
			{
				if (!__LIB_0__::func_75(&uLocal_714))
				{
					__LIB_1__::func_283(&uLocal_714, 0);
				}
				else if (__LIB_0__::func_264(&uLocal_714) > 1.5f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(121), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_826 = true;
					iLocal_762 = 1;
				}
			}
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && PED::IS_PED_DEAD_OR_DYING(uLocal_443[3], true))
			{
				if (!__LIB_0__::func_75(&uLocal_717))
				{
					__LIB_1__::func_283(&uLocal_717, 0);
				}
				else if (__LIB_0__::func_264(&uLocal_717) > 2.5f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(122), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					bLocal_826 = true;
					iLocal_762 = 2;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && PED::IS_PED_DEAD_OR_DYING(uLocal_443[3], true))
			{
				if (!__LIB_0__::func_75(&uLocal_717))
				{
					__LIB_1__::func_283(&uLocal_717, 0);
				}
				else
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(122), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_762 = 3;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && PED::IS_PED_DEAD_OR_DYING(uLocal_443[2], true))
			{
				if (!__LIB_0__::func_75(&uLocal_714))
				{
					__LIB_1__::func_283(&uLocal_714, 0);
				}
				else if (__LIB_0__::func_264(&uLocal_714) > 1f)
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(121), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_762 = 3;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(123), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_762++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(124), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_762++;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(125), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_762++;
			}
			break;
	}
}

void func_356()
{
	var uVar0[3];
	int iVar4;
	if (bLocal_826 == 0)
	{
		uVar0[0] = uLocal_443[2];
		uVar0[1] = uLocal_443[3];
		uVar0[2] = uLocal_443[1];
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if ((!ENTITY::IS_ENTITY_DEAD(uVar0[iVar4]) && !PED::IS_PED_RAGDOLL(uVar0[iVar4])) && __LIB_2__::func_227(-4f, 1, uVar0[iVar4], 1))
			{
				__LIB_3__::func_822(uVar0[iVar4], 0, &(Local_15.f_5), &iLocal_778, 0, 0);
				if (PED::_IS_PED_HOGTIED(uVar0[iVar4]) || PED::_IS_PED_LASSOED(uVar0[iVar4]))
				{
					if (iLocal_813 == 0)
					{
						iLocal_813 = 1;
						iLocal_751 = 1;
					}
				}
				if (iLocal_778 == 8)
				{
					if (iLocal_814 == 0)
					{
						iLocal_814 = 1;
						iLocal_751 = 3;
					}
				}
				if (((((((iLocal_778 == 4 || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar0[iVar4], Global_35, 1, 1)) || iLocal_778 == 0) || iLocal_778 == 8192) || iLocal_778 == 1) || iLocal_778 == 256) || iLocal_778 == 2) || iLocal_778 == 2048)
				{
					if (iLocal_815 == 0)
					{
						iLocal_815 = 1;
						iLocal_751 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uVar0[iVar4], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uVar0[iVar4])
				{
					if (iLocal_816 == 0)
					{
						iLocal_816 = 1;
						iLocal_751 = 2;
					}
				}
				if (iLocal_823 == 1 || uVar0[iVar4] == uLocal_443[1])
				{
					iLocal_751 = 4;
				}
			}
			switch (iLocal_751)
			{
				case 0:
					if (func_228(uVar0[iVar4], Global_35, func_180(117), 0.8f, 0))
					{
						bLocal_826 = true;
						iLocal_751 = -1;
					}
					break;
				case 1:
					if (func_228(uVar0[iVar4], Global_35, func_180(118), 0.8f, 0))
					{
						bLocal_826 = true;
						iLocal_751 = -1;
					}
					break;
				case 2:
					if (func_228(uVar0[iVar4], Global_35, func_180(119), 0.8f, 0))
					{
						bLocal_826 = true;
						iLocal_751 = -1;
					}
					break;
				case 3:
					if (func_228(uVar0[iVar4], Global_35, func_180(120), 0.8f, 0))
					{
						bLocal_826 = true;
						iLocal_751 = -1;
					}
					break;
				case 4:
					if (func_228(uLocal_443[1], Global_35, func_180(25), 0.8f, 0))
					{
						bLocal_826 = true;
						iLocal_751 = -1;
					}
					break;
			}
			iVar4++;
		}
	}
}

bool func_358()
{
	int iVar0;
	int iVar1;
	iVar1 = 1;
	while (iVar1 <= 3)
	{
		if (__LIB_2__::func_1(uLocal_443[iVar1], 0, 1))
		{
			iLocal_905[iVar1] = 0;
			iVar0++;
		}
		else if (!iLocal_905[iVar1])
		{
			if (PED::_IS_PED_HOGTIED(uLocal_443[iVar1]))
			{
				if (iVar1 == 1)
				{
					if (iLocal_763 <= 3)
					{
						iVar0++;
					}
					else
					{
						TASK::TASK_COMBAT_PED(uLocal_443[iVar1], Global_35, 0, 0);
						__LIB_0__::func_325(&(iLocal_450[iVar1]));
						iLocal_905[iVar1] = 1;
					}
					iVar1++;
					return iVar0 <= 0;
				}
			}
		}
	}
}

int func_453(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
		if (__LIB_3__::func_519(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_637(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_453(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_17__::func_866(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_643(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					if (__LIB_6__::func_698(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (MISC::IS_BIT_SET(*iParam1, 1))
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
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
					__LIB_13__::func_220(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_643(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_17__::func_866(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
				}
				else if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (!bVar4)
					{
						__LIB_2__::func_624(uParam3, 0, 0, 1, 1);
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
			__LIB_6__::func_699(iParam1, uParam3);
			MISC::SET_BIT(iParam1, 3);
		}
	}
	return -1;
}

void func_456()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_845 = "PB_ILO_N";
			break;
		case 2:
			sLocal_845 = "PB_ILO_BR";
			break;
		case 1:
			sLocal_845 = "PB_ILO_BL";
			break;
		case 3:
			sLocal_845 = "PB_ILO_L";
			break;
		case 4:
			sLocal_845 = "PB_ILO_R";
			break;
	}
}

void func_461()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_846 = "PB_ILO_RIDE_N";
			break;
		case 2:
			sLocal_846 = "PB_ILO_RIDE_BR";
			break;
		case 1:
			sLocal_846 = "PB_ILO_RIDE_BL";
			break;
		case 3:
			sLocal_846 = "PB_ILO_RIDE_L";
			break;
		case 4:
			sLocal_846 = "PB_ILO_RIDE_R";
			break;
	}
}

void func_462()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_845 = "PB_ILO_N_NEG";
			break;
		case 2:
			sLocal_845 = "PB_ILO_BR_NEG";
			break;
		case 1:
			sLocal_845 = "PB_ILO_BL_NEG";
			break;
		case 3:
			sLocal_845 = "PB_ILO_L_NEG";
			break;
		case 4:
			sLocal_845 = "PB_ILO_R_NEG";
			break;
	}
}

void func_507()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_847 = "pb_cower_r";
			break;
		case 2:
			sLocal_847 = "pb_cower_r";
			break;
		case 1:
			sLocal_847 = "pb_cower_l";
			break;
		case 3:
			sLocal_847 = "pb_cower_l";
			break;
		case 4:
			sLocal_847 = "pb_cower_r";
			break;
	}
}

bool func_508()
{
	if (iLocal_14 == 0)
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_443[1], "script_re@berry_gang", "cower_l_exit_girl") >= 0.88f || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_443[1], "script_re@berry_gang", "cower_r_exit_girl") >= 0.88f)
		{
			return true;
		}
	}
	else if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_443[1], "script_re@berry_gang@trap", "cower_l_exit_girl") >= 0.88f || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_443[1], "script_re@berry_gang@trap", "cower_r_exit_girl") >= 0.88f)
	{
		return true;
	}
	return false;
}

void func_509()
{
	switch (iLocal_764)
	{
		case 0:
			__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_764++;
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(-1f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(17), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_764++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(-1f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_764++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_2__::func_227(-1f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_764++;
			}
			break;
	}
}

float func_510()
{
	float fVar0;
	float fVar1;
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35));
		if (fVar0 == 0f)
		{
			fVar1 = 15f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 20f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 20f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 30f;
		}
		else
		{
			fVar1 = 40f;
		}
	}
	else
	{
		fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35);
		if (fVar0 == 0f)
		{
			fVar1 = 15f;
		}
		else if (fVar0 == 1f)
		{
			fVar1 = 20f;
		}
		else if (fVar0 > 1f && fVar0 <= 1.5f)
		{
			fVar1 = 25f;
		}
		else if (fVar0 > 1.5f && fVar0 <= 2f)
		{
			fVar1 = 30f;
		}
		else
		{
			fVar1 = 30f;
		}
	}
	return fVar1;
}

void func_511()
{
	switch (iLocal_618)
	{
		case 0:
			sLocal_843 = "PB_CALL_N";
			break;
		case 2:
			sLocal_843 = "PB_CALL_RB";
			break;
		case 1:
			sLocal_843 = "PB_CALL_LB";
			break;
		case 3:
			sLocal_843 = "PB_CALL_L";
			break;
		case 4:
			sLocal_843 = "PB_CALL_R";
			break;
	}
}

void func_512()
{
	if (iLocal_14 == 0)
	{
		if (iLocal_798 == 0 && !func_287())
		{
			switch (iLocal_750)
			{
				case 0:
					if (__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_750++;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(1f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_750++;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(1f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_750++;
					}
					break;
			}
		}
	}
	else if ((iLocal_798 == 0 && !func_287()) && iLocal_624 == 0)
	{
		switch (iLocal_750)
		{
			case 0:
				if (iLocal_831 == 0)
				{
					if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
					{
						__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
						iLocal_831 = 1;
						iLocal_750++;
					}
				}
				else
				{
					iLocal_750++;
				}
				break;
			case 1:
				if (__LIB_2__::func_227(-1f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 2:
				if (__LIB_2__::func_227(-1f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 3:
				if (__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 4:
				if (__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 5:
				if (__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
			case 6:
				if (__LIB_2__::func_227(1f, 1, 0, 0) && __LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
				{
					__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_750++;
				}
				break;
		}
	}
}

void func_515()
{
	vector3 vVar0;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	fLocal_735 = __LIB_3__::func_656(Global_35, Local_422, "player", "PB_HELP", 0);
	vLocal_732 = { __LIB_3__::func_508(Global_35, Local_422, "player", "PB_HELP", 0) };
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
	PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
	bVar4 = __LIB_2__::func_157(iLocal_493, vLocal_497);
	bVar5 = __LIB_2__::func_157(iLocal_493, Global_36);
	bVar6 = (__LIB_2__::func_157(iLocal_494, vLocal_497) || __LIB_2__::func_157(iLocal_495, vLocal_497));
	bVar7 = (__LIB_2__::func_157(iLocal_494, Global_36) || __LIB_2__::func_157(iLocal_495, Global_36));
	bVar8 = __LIB_2__::func_157(iLocal_496, vLocal_497);
	bVar9 = __LIB_2__::func_157(iLocal_496, Global_36);
	bVar10 = __LIB_2__::func_157(iLocal_491, Global_36);
	bVar11 = __LIB_2__::func_157(iLocal_492, Global_36);
	if ((bVar4 || bVar5) && (bVar10 || bVar11))
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_732, fLocal_735, 1.4f, -0.25f, 0f) };
		__LIB_2__::func_106(&vVar0, 1, 10, 0);
	}
	if ((bVar6 || bVar7) && (bVar10 || bVar11))
	{
		vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_732, fLocal_735, -1.5f, 0.4f, 0f) };
		__LIB_2__::func_106(&vVar0, 1, 10, 0);
	}
	if (bVar8 || bVar9)
	{
		vVar0 = { 0f, 0f, 0f };
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar3);
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
	}
	TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
	if (!__LIB_0__::func_86(vVar0))
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1.5f, 9000, 0.25f, 1, 40000f);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_732, 1.5f, 9000, 0.25f, 0, fLocal_735);
	TASK::CLOSE_SEQUENCE_TASK(iVar3);
	TASK::TASK_PERFORM_SEQUENCE(Global_35, iVar3);
}

void func_520()
{
	switch (iLocal_757)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_0__::func_486(iLocal_898, 1) >= 0.05f)
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(146), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_757++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1) && __LIB_0__::func_486(iLocal_898, 1) >= 0.5f)
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(147), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_757++;
			}
			break;
	}
}

void func_521()
{
	switch (iLocal_758)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, Global_35, 1) && __LIB_0__::func_486(iLocal_898, 1) >= 0.05f)
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(163), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_758++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, Global_35, 1) && __LIB_0__::func_486(iLocal_898, 1) >= 0.5f)
			{
				__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(163), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_758++;
			}
			break;
	}
}

void func_525()
{
	__LIB_2__::func_360(&(Local_559[1 /*17*/]), "INTERACT_GREET");
	__LIB_2__::func_360(&(Local_559[2 /*17*/]), "RE_INTER_ANTAGONIZE");
	__LIB_4__::func_453(&(Local_559[1 /*17*/]), 0, 1);
	__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
	__LIB_4__::func_453(&(Local_559[2 /*17*/]), 0, 1);
	__LIB_4__::func_453(&(Local_559[1 /*17*/]), 0, 1);
}

int func_526()
{
	switch (iLocal_753)
	{
		case 0:
			if (!func_235())
			{
				if (__LIB_2__::func_303(Global_35, uLocal_443[1], func_180(93), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_753++;
				}
			}
			break;
		case 1:
			if (!func_235())
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(94), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_753++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(95), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_753++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(96), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_753++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, uLocal_443[1], 1))
			{
				iLocal_753++;
			}
			break;
		case 5:
			return 1;
	}
	return 0;
}

void func_530()
{
	if ((!__LIB_0__::func_163(uLocal_443[1], 1435919172) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_443[1], Global_35, 1, 1)) && !PED::IS_PED_RAGDOLL(uLocal_443[1]))
	{
		if (__LIB_2__::func_598(uLocal_443[1], Local_422, "LADY", 0, 0, 1, 0))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_443[1], Global_35, -1, -1f, -1f, -1f);
		}
	}
}

void func_538()
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_443[1], true);
	if (iLocal_833 == 1)
	{
		__LIB_0__::func_325(&iLocal_780);
		__LIB_0__::func_325(&iLocal_781);
		if (__LIB_0__::func_398(7) == Global_1935630.f_41 && Global_1935630.f_41 == PED::GET_MOUNT(uLocal_443[1]))
		{
			__LIB_1__::func_721(7);
		}
		else if (__LIB_0__::func_398(1) == Global_1935630.f_41 && Global_1935630.f_41 == PED::GET_MOUNT(uLocal_443[1]))
		{
			__LIB_1__::func_721(1);
		}
		iLocal_833 = 0;
	}
	bLocal_507 = true;
	__LIB_0__::func_769();
	iLocal_790 = 1;
	if (__LIB_2__::func_1(uLocal_443[1], 0, 0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
		if (func_300(uLocal_443[1]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_443[1], false))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4096);
			}
			if (PED::IS_PED_ON_MOUNT(uLocal_443[1]))
			{
				TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
			}
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, vLocal_473, 999f, -1, 321, 1.5f, 0);
		}
		else
		{
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, vLocal_473, 999f, -1, 320, 1.5f, 0);
		}
		TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
		if (bLocal_786)
		{
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1]) == joaat("REL_PLAYER_LIKE"))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_443[1], joaat("REL_CIVFEMALE"));
				bLocal_786 = false;
			}
		}
	}
	__LIB_1__::func_715(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", uLocal_443[1], 0, 1065353216 /* Float: 1f */, 0);
	func_128(1);
	__LIB_2__::func_303(uLocal_443[1], Global_35, func_180(107), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	__LIB_0__::func_769();
	func_15(8);
}

void func_540()
{
	vector3 vVar0;
	if (bLocal_904)
	{
		return;
	}
	switch (iLocal_512)
	{
		case 6:
		case 7:
			vVar0 = { 2947.83f, 1348.28f, 43.8f };
			break;
		case 9:
			vVar0 = { -312.07f, 781.36f, 117.75f };
			break;
		case 11:
			vVar0 = { 2818.74f, -1114.02f, 45.47f };
			break;
	}
	bLocal_507 = true;
	if (MAP::DOES_BLIP_EXIST(iLocal_450[1]))
	{
		__LIB_0__::func_325(&(iLocal_450[1]));
	}
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_783);
	if (PED::IS_PED_ON_MOUNT(uLocal_443[1]))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 1, 0, 0, 0, 0);
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_443[1], false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, 1f, -1, 0.25f, 7471124, 40000f);
	TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_476, 5f, 0, false, false, true, false);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_783);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_443[1], iLocal_783);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_783);
	bLocal_904 = true;
}

void func_542(int iParam0)
{
	iLocal_612 = iParam0;
	PED::_0x2EB75FB86C41F026(iLocal_612, 3, 0);
	bLocal_613 = true;
}

int func_543(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_1__::func_831(iParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
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
				func_543(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_4__::func_297(28);
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
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
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
					if (__LIB_0__::func_708(0) && __LIB_1__::func_708(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
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
			if (!__LIB_1__::func_823(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_3__::func_708(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 866047851))
		{
			__LIB_17__::func_895(iParam0);
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
						func_543(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_543(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_543(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_543(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_543(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_543(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_543(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_4__::func_297(24);
				if (Global_1946804.f_1497.f_1[27 /*3*/] == Global_1946804.f_57[27 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_OFFHAND_HOLSTER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_3"), 1, 1, 1, 0, 1, 0);
				}
				if (__LIB_0__::func_918(&iVar9, 0))
				{
					__LIB_1__::func_708(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case joaat("UPGRADE_BANDOLIER"):
				if (__LIB_0__::func_2() == -1 && Global_1946804.f_1497.f_1[25 /*3*/] == Global_1946804.f_57[25 /*11*/])
				{
					__LIB_1__::func_775(PLAYER::PLAYER_PED_ID(), joaat("UPGRADE_BANDOLIER"), 0, joaat("MP_COMPONENT_TYPE_LOADOUT_1"), 1, 1, 1, 0, 1, 0);
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
					func_543(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_543(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		if (!__LIB_3__::func_427(iVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!__LIB_0__::func_708(0))
		{
			return 1;
		}
		if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
		{
			__LIB_4__::func_460(iParam0);
		}
		if (__LIB_0__::func_192(iParam0, -1979000645))
		{
			__LIB_17__::func_860(iParam0);
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
				func_543(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		__LIB_1__::func_158(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_545(int iParam0)
{
	return __LIB_4__::func_444(iParam0);
}

void func_546()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_785 = PED::GET_MOUNT(Global_35);
	}
	if ((PED::IS_PED_IN_ANY_VEHICLE(Global_35, true) && !PED::IS_PED_IN_ANY_BOAT(Global_35)) && !PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		iLocal_784 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
	}
}

bool func_548(int iParam0)
{
	if (PED::IS_PED_IN_VEHICLE(iParam0, iLocal_784, false))
	{
		return true;
	}
	if (__LIB_0__::func_394(iParam0, iLocal_785, 0))
	{
		return true;
	}
	return false;
}

bool func_555(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_3__::func_822((*uParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
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

float func_557()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			return 3f;
		case 1:
			return 3f;
		case 2:
			return 3f;
		case 3:
			return 3f;
		case 4:
			return 3f;
		case 5:
			return 3f;
		case 6:
			return 3f;
		case 7:
			return 3f;
		case 8:
			return 3f;
		case 9:
			return 3f;
	}
	return 3f;
}

int func_567(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = __LIB_0__::func_937(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!__LIB_1__::func_707(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { __LIB_0__::func_777(iParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((__LIB_1__::func_614(iParam0, 0, 0) - iParam1) < 0)
		{
			func_567(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (__LIB_0__::func_356(iParam0) == joaat("WEAPON"))
	{
		if (!__LIB_1__::func_433(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!__LIB_1__::func_698(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == joaat("DOCUMENT_PLAYER_JOURNAL"))
	{
		Global_1935496.f_20 = 0;
	}
	if (!__LIB_0__::func_708(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != joaat("UPGRADE_FSH_BAIT_NONE"))
	{
		__LIB_1__::func_158(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

bool func_637(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	char cVar0[32];
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		MISC::_0xE98D55C5983F2509(*uParam0);
		bVar4 = __LIB_0__::func_27(iParam4, 32);
		__LIB_4__::func_452(iParam1, uParam2, 0);
		iVar5 = __LIB_4__::func_455(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_624(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!__LIB_0__::func_27(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (__LIB_0__::func_27(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (__LIB_0__::func_27(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (__LIB_0__::func_27(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (__LIB_0__::func_27(iParam4, 8388608) || __LIB_0__::func_27(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (__LIB_0__::func_27(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (__LIB_0__::func_27(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (__LIB_1__::func_489(iParam1, 4))
		{
			iVar6 |= 1024;
			EVENT::_0xBB1E41DD3D3C6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!__LIB_1__::func_489(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (__LIB_0__::func_27(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (MISC::_0x870708A6E147A9AD(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = __LIB_2__::func_388(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
						{
							iParam6 = MISC::GET_HASH_KEY(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5) && iParam6 == 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, MISC::GET_HASH_KEY(sParam5));
				}
				else if (iParam6 != 2)
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(*uParam0, iParam6);
				}
			}
			PED::SET_PED_CONFIG_FLAG(*uParam0, 130, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 297, true);
			PED::SET_PED_CONFIG_FLAG(*uParam0, 301, false);
			if (__LIB_0__::func_27(iParam4, 268435456))
			{
				iVar8 = __LIB_1__::func_498(uParam2, joaat("INPUT_INTERACT_LOCKON_NEG"));
				if (iVar8 > -1)
				{
					__LIB_2__::func_394(iParam1, uParam2[iVar8 /*17*/]);
				}
			}
			if (__LIB_1__::func_489(iParam1, 23))
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 331, false);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(*uParam0, 315, true);
				PED::SET_PED_CONFIG_FLAG(*uParam0, 493, false);
			}
			if (__LIB_0__::func_27(iParam4, 2) || __LIB_0__::func_27(iParam4, 16))
			{
				__LIB_1__::func_488(*uParam0, 1, 1);
			}
			else
			{
				__LIB_1__::func_488(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

bool func_643(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	float fVar12;
	iVar1 = __LIB_0__::func_492(1);
	bVar2 = MISC::IS_BIT_SET(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = PED::IS_PED_ON_FOOT(Global_35);
	bVar10 = PED::IS_PED_INJURED(*uParam0);
	bVar11 = (((PED::_IS_PED_CARRYING(Global_35) || __LIB_2__::func_365(Global_35)) || __LIB_1__::func_869(Global_35)) || __LIB_2__::func_366(Global_35));
	fVar12 = -1f;
	if (__LIB_0__::func_75(&(iParam1->f_13)))
	{
		fVar12 = __LIB_0__::func_265(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((uParam4[iVar0 /*17*/])->f_8 != iParam12)
		{
			iParam12 = (uParam4[iVar0 /*17*/])->f_8;
		}
		bVar4 = __LIB_0__::func_139((uParam4[iVar0 /*17*/])->f_6);
		__LIB_4__::func_457(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 20))
		{
			bVar3 = true;
		}
		if (__LIB_2__::func_475(*uParam0, iParam1, uParam4[iVar0 /*17*/], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (__LIB_2__::func_367(iParam12, (uParam4[iVar0 /*17*/])->f_6))
				{
					if (!bVar7)
					{
						__LIB_2__::func_624(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_4__::func_101(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_4__::func_452(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = MISC::IS_BIT_SET((*uParam4)[iParam1->f_1 /*17*/], 16);
					if (!iParam1->f_9)
					{
						MISC::SET_BIT(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_11))
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY((uParam4[iVar0 /*17*/])->f_12))
							{
								TASK::TASK_PLAY_ANIM(Global_35, (uParam4[iVar0 /*17*/])->f_11, (uParam4[iVar0 /*17*/])->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (__LIB_1__::func_500(iParam1, fParam6, iParam1->f_9))
					{
						__LIB_1__::func_148(&(iParam1->f_18));
						if (bVar6)
						{
							__LIB_4__::func_101(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		__LIB_1__::func_501(iParam1, fParam2);
	}
	return bVar5;
}

