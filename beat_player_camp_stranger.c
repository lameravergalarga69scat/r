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
	char* sLocal_14[27] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	bool bLocal_42 = false;
	struct<2> Local_43[7];
	vector3 vLocal_58 = { 0f, 0f, 0f };
	vector3 vLocal_61 = { 0f, 0f, 0f };
	vector3 vLocal_64 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	struct<193> Local_70 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_263 = 0;
	struct<32> Local_264[8];
	struct<7> Local_521 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_528 = 0;
	int iLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = -1;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 2;
	var uLocal_539 = 1;
	var uLocal_540 = 1;
	var uLocal_541 = 1;
	var uLocal_542 = 0;
	var uLocal_543 = 1;
	var uLocal_544 = 2;
	var uLocal_545 = 2;
	var uLocal_546 = 3;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 3;
	var uLocal_550 = 1;
	var uLocal_551 = 3;
	var uLocal_552 = 3;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 7;
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
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	int iLocal_612[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	bool bLocal_624 = false;
	var uLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 15;
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
	var uLocal_732 = 0;
	var uLocal_733 = 0;
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
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = -1;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 2;
	var uLocal_785 = 1;
	var uLocal_786 = 1;
	var uLocal_787 = 1;
	var uLocal_788 = 0;
	var uLocal_789 = 1;
	var uLocal_790 = 2;
	var uLocal_791 = 2;
	var uLocal_792 = 3;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 3;
	var uLocal_796 = 1;
	var uLocal_797 = 3;
	var uLocal_798 = 3;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 1176256512;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	bool bLocal_807 = false;
	bool bLocal_808 = false;
	bool bLocal_809 = false;
	bool bLocal_810 = false;
	bool bLocal_811 = false;
	bool bLocal_812 = false;
	bool bLocal_813 = false;
	bool bLocal_814 = false;
	bool bLocal_815 = false;
	int iLocal_816 = 0;
	bool bLocal_817 = false;
	bool bLocal_818 = false;
	bool bLocal_819 = false;
	bool bLocal_820 = false;
	int iLocal_821 = 0;
	bool bLocal_822 = false;
	bool bLocal_823 = false;
	bool bLocal_824 = false;
	bool bLocal_825 = false;
	bool bLocal_826 = false;
	bool bLocal_827 = false;
	bool bLocal_828 = false;
	int iLocal_829 = 0;
	int iLocal_830 = 0;
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	int iLocal_838 = 0;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	float fLocal_844 = 0f;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	char[] cLocal_863[8] = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	var uLocal_866 = -1;
	var uLocal_867 = 0;
	var uLocal_868 = -1;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = -1;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 1073741824;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 1;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	struct<17> Local_886[2];
	int iLocal_921 = 0;
	var uLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
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
	iLocal_806 = __LIB_2__::func_340(1, 0, 0);
	cLocal_863 = "TB";
	Local_70.f_3 = __LIB_0__::func_81(&uScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
	__LIB_4__::func_236(&Local_70, 1);
	__LIB_1__::func_403(&(Local_70.f_5), 0);
	__LIB_1__::func_413(&(Local_70.f_5), 1);
	__LIB_1__::func_398(&(Local_70.f_5), 1);
	__LIB_1__::func_406(&(Local_70.f_5), 1);
	__LIB_1__::func_399(&(Local_70.f_5), 1);
	__LIB_2__::func_828(&(Local_70.f_5), 1);
	__LIB_1__::func_402(&(Local_70.f_5), 1);
	__LIB_1__::func_392(&(Local_70.f_5), 1);
	__LIB_2__::func_595(&(Local_70.f_5), 20f);
	__LIB_2__::func_906(&(Local_70.f_5), 150);
	__LIB_3__::func_884(&(Local_70.f_5), 1.25f);
	__LIB_3__::func_900(&(Local_70.f_5), 3000);
	if (!bLocal_809)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_35))
		{
			bLocal_809 = true;
		}
	}
	Local_70.f_184 = 0;
	__LIB_17__::func_872();
	while (true)
	{
		switch (iLocal_628)
		{
			case 0:
				switch (iLocal_921)
				{
					case 0:
						if (func_18())
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
							__LIB_0__::func_489(0, 0);
							iLocal_921 = (1 + iLocal_921);
						}
						break;
					case 1:
						uLocal_922 = uLocal_922;
						iLocal_921++;
						break;
					case 2:
						if (func_20())
						{
							__LIB_3__::func_346(47, &(Local_70.f_51), Local_70.f_161, 0, 0);
							func_22();
							iLocal_628 = 1;
						}
						break;
					case 3:
						iLocal_628 = 1;
						break;
				}
				break;
			case 1:
				func_23();
				func_24(&Local_70, &uLocal_801, &uLocal_837);
				__LIB_1__::func_148(&uLocal_854);
				iLocal_628 = 3;
				break;
			case 3:
				if (func_26())
				{
					iLocal_628 = 4;
				}
				break;
			case 4:
				if (iLocal_838 < 1 && iLocal_627 <= 6)
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0))
					{
						CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
					}
				}
				if (!func_27(&Local_70, &iLocal_612, 0, 0, 1, 0, 1, 0))
				{
					func_3();
				}
				if (!Local_70.f_46)
				{
					if (func_28())
					{
						__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
						Local_70.f_46 = 1;
						iLocal_627 = 8;
					}
				}
				if (func_30())
				{
					Local_70.f_50 = 1;
					func_3();
				}
				if (__LIB_3__::func_365(&Local_70, &iLocal_612, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
				{
					func_3();
				}
				func_32();
				break;
		}
		BUILTIN::WAIT(Local_70.f_158);
	}
}

void func_3()
{
	if (__LIB_0__::func_139(Local_70.f_164))
	{
		__LIB_1__::func_748(&(Local_70.f_164), 1, 1);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_864))
	{
		CAM::DESTROY_CAM(iLocal_864, false);
	}
	if (MAP::DOES_BLIP_EXIST(uLocal_767[0]))
	{
		MAP::REMOVE_BLIP(&(uLocal_767[0]));
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, false);
	__LIB_2__::func_115(Local_70.f_3, 1, 0, 0, 0, 5, 0, 1);
	__LIB_2__::func_115(46, 1, 0, 0, 0, 1, 0, 1);
	func_36();
	func_37(&Local_70, &iLocal_612, &uLocal_767, 0, -1, 0, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_18()
{
	if (((PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL1")) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"))) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL3"))) || PED::_IS_PED_USING_SCENARIO_HASH(Global_35, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL4")))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "MECH_DYNAMIC@WORLD_PLAYER_DYNAMIC_KNEEL_GROUND@GENERIC@MALE_A@base", "base", 1))
		{
			iLocal_529 = 0;
			return true;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "MECH_DYNAMIC@WORLD_PLAYER_CAMP_SIT@MALE_A@BASE", "BASE", 1))
		{
			iLocal_529 = 1;
			return true;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, "MECH_DYNAMIC@WORLD_PLAYER_CAMP_SQUAT@MALE_A@BASE", "BASE", 1))
		{
			iLocal_529 = 2;
			return true;
		}
	}
	return false;
}

bool func_20()
{
	int iVar0;
	switch (iLocal_626)
	{
		case 0:
			switch (iLocal_839)
			{
				case 0:
					if (__LIB_3__::func_308(&Local_70))
					{
						__LIB_1__::func_148(&uLocal_854);
						iLocal_839++;
					}
					break;
				case 1:
					func_45();
					iLocal_839++;
					break;
				case 2:
					if (func_46())
					{
						iLocal_839++;
					}
					break;
				case 3:
					func_47();
					func_48();
					func_49();
					func_50(&Local_886);
					func_51();
					STREAMING::REQUEST_MODEL(joaat("P_KNIFE01X"), false);
					iLocal_626 = 1;
					break;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_625, cLocal_863))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_555))
			{
				return false;
			}
			if (!func_54())
			{
				return false;
			}
			if (!func_55())
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_264))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (Local_264[iVar0 /*32*/].f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED(Local_264[iVar0 /*32*/].f_1))
					{
						return false;
					}
				}
				iVar0++;
			}
			__LIB_1__::func_148(&uLocal_854);
			iLocal_626 = 2;
			break;
		case 2:
			return true;
	}
	return false;
}

void func_22()
{
	__LIB_3__::func_426(&Local_70, &(Local_70.f_48), 47, &(Local_70.f_51.f_6));
	Local_70.f_45 = 1;
}

void func_23()
{
	if (bLocal_42)
	{
		Local_264[0 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -10f, 0f, 0f) };
		Local_264[0 /*32*/].f_9 = 137.9453f;
	}
	else
	{
		Local_264[0 /*32*/].f_6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, -10f, 0f, 0f) };
		Local_264[0 /*32*/].f_9 = 137.9453f;
	}
}

void func_24(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*uParam2 = 1;
			break;
	}
}

bool func_26()
{
	switch (iLocal_829)
	{
		case 0:
			iLocal_612[0] = __LIB_3__::func_870(Local_264[0 /*32*/].f_1, &(Local_264[0 /*32*/]), Local_264[0 /*32*/].f_6, Local_264[0 /*32*/].f_9, 1, 0, 1, 0, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_612[0], joaat("REL_PLAYER_LIKE"));
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_612[0]))
			{
				iLocal_829++;
			}
			break;
		case 1:
			__LIB_3__::func_527(&iLocal_622, 1569.125f, -1433.113f, 61.73186f, 0f, 0f, 0f, 4f, 4f, 3f, "volTrespasserVolume");
			__LIB_3__::func_527(&iLocal_623, 1569.125f, -1433.113f, 61.73186f, 0f, 0f, 0f, 11f, 11f, 3f, "volPlayerVolume");
			PED::_0x7C00CFC48A782DC0(iLocal_622, iLocal_612[0], -3f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			PED::_0x7C00CFC48A782DC0(iLocal_623, Global_35, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
			func_73();
			func_74();
			iLocal_829++;
			break;
		case 2:
			PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_612[0], "DEFAULT_SHOCKED");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_612[0], "DEFAULT_NERVOUS");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_612[0], "Flee_Scared");
			iLocal_829++;
			break;
		case 3:
			if (!bLocal_624)
			{
				func_75();
				iLocal_829++;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_27(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_76(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
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

bool func_28()
{
	if (func_84(&iLocal_612, &(Local_70.f_5), &iLocal_805, &uLocal_836, 0, 0, 1) || bLocal_822)
	{
		if (bLocal_822)
		{
			return true;
		}
		if (iLocal_805 != 65536)
		{
			return true;
		}
		else if (bLocal_807)
		{
			if (iLocal_627 != 5)
			{
				iLocal_816 = 1;
				bLocal_825 = true;
				iLocal_627 = 5;
			}
		}
	}
	return false;
}

bool func_30()
{
	func_88();
	func_89();
	if (((iLocal_627 != 5 && iLocal_627 != 8) && iLocal_627 != 4) && iLocal_627 != 9)
	{
		if (bLocal_812)
		{
			iLocal_816 = iLocal_816;
			if (__LIB_0__::func_94(Global_35, vLocal_67, 1) > 6f)
			{
				bLocal_812 = true;
				iLocal_627 = 8;
			}
		}
	}
	switch (iLocal_627)
	{
		case 0:
			__LIB_2__::func_73(iLocal_612[0], &(uLocal_767[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
			ANIMSCENE::START_ANIM_SCENE(Local_521);
			func_92();
			if (CAM::_0xA24C1D341C6E0D53(0, 0, 0))
			{
				bLocal_828 = true;
			}
			iLocal_627 = 1;
			break;
		case 1:
			if (func_93(&Local_70, 3f, 20f, 15f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				if (func_94())
				{
					iLocal_627 = 2;
				}
			}
			break;
		case 2:
			if (func_95())
			{
				if (bLocal_807)
				{
					iLocal_627 = 3;
				}
				if (!bLocal_807)
				{
					iLocal_627 = 4;
				}
				if (bLocal_811)
				{
					iLocal_627 = 4;
				}
			}
			break;
		case 3:
			if (func_96())
			{
				iLocal_627 = 6;
			}
			break;
		case 6:
			if (func_97())
			{
				if (!bLocal_819)
				{
					iLocal_627 = 4;
				}
				else
				{
					iLocal_627 = 5;
				}
			}
			break;
		case 4:
			if (!bLocal_807 || bLocal_811)
			{
				if (func_98())
				{
					if (func_99())
					{
						iLocal_627 = 9;
					}
				}
			}
			if (bLocal_807)
			{
				if (func_100())
				{
					if (func_99())
					{
						iLocal_627 = 9;
					}
				}
			}
			break;
		case 5:
			if (func_101())
			{
				if (func_99())
				{
					iLocal_627 = 9;
				}
			}
			break;
		case 8:
			if (func_102())
			{
				if (!Local_70.f_44)
				{
					Local_70.f_44 = 1;
				}
				iLocal_627 = 9;
			}
			break;
		case 9:
			if (__LIB_0__::func_665(iLocal_612[0], Global_35, 1, 1) > 40f && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_612[0]))
			{
				func_36();
				if (!__LIB_1__::func_235(Global_35))
				{
					return true;
				}
			}
			if (__LIB_0__::func_665(iLocal_612[0], Global_35, 1, 1) > 20f)
			{
				if (MAP::DOES_BLIP_EXIST(uLocal_767[0]))
				{
					MAP::REMOVE_BLIP(&(uLocal_767[0]));
				}
			}
			break;
	}
	if (!bLocal_820)
	{
		if ((iLocal_627 == 8 || iLocal_627 == 5) || iLocal_627 == 4)
		{
			bLocal_820 = true;
		}
	}
	if ((iLocal_627 > 0 && iLocal_627 < 8) && iLocal_627 != 5)
	{
		if (__LIB_1__::func_235(Global_35) || ENTITY::_0x0B7CB1300CBFE19C(Global_35, 1))
		{
			if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
			{
				func_105();
			}
		}
	}
	if (!__LIB_0__::func_491(iLocal_612[0], 518218985))
	{
		if (PED::_IS_PED_HOGTIED(iLocal_612[0]))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_612[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
		}
	}
	return false;
}

void func_32()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_521, false))
	{
		fLocal_844 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_521);
	}
	if (!bLocal_827)
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	}
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	if (!bLocal_812)
	{
		__LIB_4__::func_242(Global_35, iLocal_612[0], &uLocal_530, 0, 10);
	}
	if (iLocal_627 == 8)
	{
		__LIB_4__::func_242(iLocal_612[0], Global_35, &uLocal_530, 0, 10);
	}
	if (bLocal_811)
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_612[0], 130, true);
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 364, true);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1162739759) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_612[0], 1162739759))
	{
		bLocal_826 = true;
	}
	else
	{
		bLocal_826 = false;
	}
}

void func_36()
{
	__LIB_17__::func_873();
	if (!bLocal_827)
	{
		bLocal_827 = true;
	}
}

void func_37(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		while (iVar0 < *iParam1)
		{
			bVar3 = (bParam8 && DECORATOR::DECOR_EXIST_ON((*iParam1)[iVar0], "pedRoam_bInPedRoam"));
			if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 0))
			{
				__LIB_3__::func_259((*iParam1)[iVar0], bVar3);
				if (__LIB_3__::func_239(uParam0, iParam1[iVar0]))
				{
					__LIB_2__::func_32(iParam1[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (__LIB_2__::func_1((*iParam1)[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (PED::GET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::SET_PED_STEALTH_MOVEMENT((*iParam1)[iVar0], 0, 0, 0);
						}
						else if (PED::_GET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0]))
						{
							PED::_SET_PED_CROUCH_MOVEMENT((*iParam1)[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							__LIB_3__::func_288((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
						}
						else
						{
							TASK::TASK_WANDER_STANDARD((*iParam1)[iVar0], 40000f, 0);
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
		func_76(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_126(uParam0->f_3, uParam0->f_185);
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
		func_127(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_45()
{
	iLocal_621 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("PROP_PLAYER_SEAT_CHAIR_PLAYER_CAMP"), 5f, 0, false);
	vLocal_67 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_621, true) };
	vLocal_58 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_67, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_621, true), -6f, 0f, 0f) };
	vLocal_61 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_67, TASK::_GET_SCENARIO_POINT_HEADING(iLocal_621, true), 6f, 0f, 0f) };
}

bool func_46()
{
	if (!__LIB_0__::func_86(vLocal_58) && !__LIB_0__::func_86(vLocal_61))
	{
		if (CAM::IS_SPHERE_VISIBLE(vLocal_58, 1f) && !CAM::IS_SPHERE_VISIBLE(vLocal_61, 1f))
		{
			bLocal_42 = false;
			return true;
		}
		if (CAM::IS_SPHERE_VISIBLE(vLocal_61, 1f) && !CAM::IS_SPHERE_VISIBLE(vLocal_58, 1f))
		{
			bLocal_42 = true;
			return true;
		}
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_61, 1f) && !CAM::IS_SPHERE_VISIBLE(vLocal_58, 1f))
		{
			bLocal_42 = true;
			return true;
		}
	}
	return false;
}

void func_47()
{
	Local_264[0 /*32*/].f_1 = joaat("RE_PLAYERCAMPSTRANGERS_FEMALES_01");
	Local_264[0 /*32*/] = 5;
	StringCopy(&(Local_264[0 /*32*/].f_23), "FREEZING_WOMAN", 64);
	Local_264[0 /*32*/].f_3 = 72764813;
}

void func_48()
{
	__LIB_3__::func_445(&Local_264);
}

void func_49()
{
	Local_43[0 /*2*/] = "script_re@player_camp_stranger@ig2_freezing_woman";
	Local_43[0 /*2*/].f_1 = "female_dialogue_b_exit_back";
	__LIB_3__::func_318(Local_43[0 /*2*/], &uLocal_555);
	Local_43[1 /*2*/] = "script_re@player_camp_stranger@ig2_freezing_woman";
	Local_43[1 /*2*/].f_1 = "female_dialogue_b_exit_right";
	__LIB_3__::func_318(Local_43[1 /*2*/], &uLocal_555);
	Local_43[2 /*2*/] = "script_re@player_camp_stranger@ig2_freezing_woman";
	Local_43[2 /*2*/].f_1 = "arthur_question_idle";
	__LIB_3__::func_318(Local_43[2 /*2*/], &uLocal_555);
	Local_43[3 /*2*/] = "script_re@player_camp_stranger@ig2_freezing_woman";
	Local_43[3 /*2*/].f_1 = "female_answer_back(woman)";
	__LIB_3__::func_318(Local_43[3 /*2*/], &uLocal_555);
	Local_43[4 /*2*/] = "script_re@player_camp_stranger@ig2_freezing_woman";
	Local_43[4 /*2*/].f_1 = "female_answer_right(woman)";
	__LIB_3__::func_318(Local_43[4 /*2*/], &uLocal_555);
	Local_43[5 /*2*/] = "script_re@player_camp_stranger@ig2_freezing_woman";
	Local_43[5 /*2*/].f_1 = "female_player_fires_gun";
	__LIB_3__::func_318(Local_43[5 /*2*/], &uLocal_555);
	Local_43[6 /*2*/] = "script_camp@player_sit@exit";
	Local_43[6 /*2*/].f_1 = "exit";
	__LIB_3__::func_318(Local_43[6 /*2*/], &uLocal_555);
}

void func_50(var uParam0)
{
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_51()
{
	Local_521.f_4 = "script@beat@wilderness@playercampstranger@ig2_freezingwoman@action_new";
	Local_521.f_5 = "script@beat@wilderness@playercampstranger@ig2_freezingwoman@action_new";
	Local_521.f_6 = "script@beat@wilderness@playercampstranger@ig2_freezingwoman@action_new";
	sLocal_14[0] = "Pbl_intro_left";
	sLocal_14[1] = "Pbl_intro_right";
	sLocal_14[2] = "Pbl_no_response_left";
	sLocal_14[3] = "Pbl_no_response_right";
	sLocal_14[4] = "Pbl_negative_response_left";
	sLocal_14[5] = "Pbl_negative_response_right";
	sLocal_14[6] = "Pbl_positive_response_left";
	sLocal_14[7] = "Pbl_positive_response_right";
	sLocal_14[8] = "Pbl_wait_for_response_left";
	sLocal_14[9] = "Pbl_wait_for_response_right";
	sLocal_14[10] = "Pbl_dialogue_a";
	sLocal_14[14] = "Pbl_question";
	sLocal_14[15] = "Pbl_question_idle";
	sLocal_14[16] = "Pbl_question_left";
	sLocal_14[17] = "Pbl_question_right";
	sLocal_14[18] = "Pbl_answer";
	sLocal_14[19] = "Pbl_y_u_lookin_at_me_left";
	sLocal_14[20] = "Pbl_y_u_lookin_at_me_right";
	sLocal_14[21] = "Pbl_answer_back";
	sLocal_14[22] = "Pbl_answer_right";
	sLocal_14[24] = "Pbl_player_fires_gun";
	sLocal_14[12] = "Pbl_dialogue_b_exit_back";
	sLocal_14[13] = "Pbl_dialogue_b_exit_back";
	sLocal_14[25] = "Pbl_dialogue_b_exit_back";
	sLocal_14[26] = "Pbl_dialogue_b_exit_right";
	sLocal_14[23] = "PBL_VILLAGE_DEMON";
	if (!bLocal_42)
	{
		Local_521 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_521.f_4, 64, sLocal_14[1], false, true);
	}
	else
	{
		Local_521 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_521.f_4, 64, sLocal_14[0], false, true);
	}
	Local_521.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_521.f_5, 64, sLocal_14[19], false, true);
	Local_521.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_521.f_6, 64, sLocal_14[20], false, true);
}

bool func_54()
{
	ANIMSCENE::LOAD_ANIM_SCENE(Local_521);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_521.f_1);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_521.f_2);
	if ((ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_521, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_521.f_1, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_521.f_2, true, false))
	{
		return true;
	}
	return false;
}

bool func_55()
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_521, sLocal_14[iVar0]))
		{
			if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_521, sLocal_14[iVar0]))
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_521, sLocal_14[iVar0]);
			}
			bVar1 = false;
		}
		iVar0++;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_521.f_1, sLocal_14[19]))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_521.f_1, sLocal_14[19]))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_521.f_1, sLocal_14[19]);
		}
		bVar2 = false;
	}
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_521.f_2, sLocal_14[20]))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_521.f_2, sLocal_14[20]))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_521.f_2, sLocal_14[20]);
		}
		bVar3 = false;
	}
	return ((!bVar1 && !bVar2) && !bVar3);
	return false;
}

void func_73()
{
	__LIB_2__::func_133(iLocal_612[0], &(Local_264[0 /*32*/].f_23), 0);
	PED::SET_PED_CONFIG_FLAG(iLocal_612[0], 297, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_612[0], 130, true);
	PED::SET_PED_CONFIG_FLAG(iLocal_612[0], 317, true);
	__LIB_3__::func_285(iLocal_612[0], &Local_70, 0);
	PED::SET_PED_RESET_FLAG(iLocal_612[0], 12, true);
	ENTITY::SET_ENTITY_PROOFS(iLocal_612[0], 2, false);
}

void func_74()
{
	if (PED::_0xA1FBAC56D38563E2(iLocal_623))
	{
		bLocal_624 = true;
	}
}

void func_75()
{
	func_175();
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_521, "Female", iLocal_612[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_521.f_1, "Female", iLocal_612[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_521.f_2, "Female", iLocal_612[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_521, "InternalLoopEvent", false, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_521, "Loop", false, false);
}

void func_76(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_126(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

bool func_84(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (func_202((*iParam0)[*uParam3], 0, uParam1, iParam2, 0, 0))
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

void func_88()
{
	if (!bLocal_817)
	{
		if (ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[10]))
		{
			bLocal_817 = true;
		}
	}
}

void func_89()
{
	if (Local_70.f_46 == 1)
	{
		return;
	}
	iLocal_840 = func_203(&(iLocal_612[0]), &iLocal_865, 15f, &Local_886, &(Local_70.f_192), 0, 1, 0, 0, iLocal_806, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (bLocal_823 && iLocal_832 != 99)
	{
		iLocal_832 = 99;
	}
	switch (iLocal_832)
	{
		case 0:
			__LIB_3__::func_158(&(Local_886[1 /*17*/]), 0);
			__LIB_3__::func_158(&(Local_886[0 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
			iLocal_832++;
			break;
		case 1:
			if (iLocal_627 >= 2)
			{
				iLocal_806 = 1;
				__LIB_2__::func_360(&(Local_886[1 /*17*/]), __LIB_2__::func_460(0));
				__LIB_2__::func_360(&(Local_886[0 /*17*/]), __LIB_2__::func_460(1));
				__LIB_2__::func_451(&iLocal_865, 0);
				__LIB_2__::func_411(&(Local_886[1 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_886[0 /*17*/]), 1, 0);
				iLocal_832++;
			}
			break;
		case 2:
			if (bLocal_808)
			{
				if (bLocal_807)
				{
					__LIB_4__::func_72(iLocal_612[0]);
					iLocal_806 = __LIB_2__::func_340(1, 0, 0);
					__LIB_2__::func_451(&iLocal_865, 0);
					iLocal_832++;
				}
				if (!bLocal_807)
				{
					__LIB_4__::func_72(iLocal_612[0]);
					iLocal_806 = __LIB_2__::func_340(1, 0, 0);
					__LIB_4__::func_72(iLocal_612[0]);
					iLocal_832 = 100;
				}
			}
			break;
		case 3:
			if (bLocal_817 && fLocal_844 >= 0.22f)
			{
				__LIB_2__::func_360(&(Local_886[1 /*17*/]), __LIB_2__::func_460(7));
				__LIB_2__::func_360(&(Local_886[0 /*17*/]), __LIB_2__::func_460(10));
				__LIB_2__::func_451(&iLocal_865, 0);
				iLocal_832++;
			}
			break;
		case 4:
			if (func_208())
			{
				iLocal_832 = 98;
			}
			break;
		case 98:
			bLocal_825 = true;
			iLocal_627 = 5;
			iLocal_832 = 101;
			break;
		case 99:
			if (func_209())
			{
				bLocal_822 = true;
				iLocal_832 = 101;
			}
			break;
		case 100:
			break;
		case 101:
			break;
	}
}

void func_92()
{
	if (iLocal_529 == 2)
	{
		iLocal_923 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_67, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"), 1f, 0, false);
		TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_923, "WORLD_PLAYER_CAMP_FIRE_SQUAT_MALE_A", 0, false, true, 0, false, 8f, false);
	}
	else if (iLocal_529 == 1)
	{
		iLocal_923 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_67, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"), 1f, 0, false);
		TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_923, "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, false, true, 0, false, 8f, false);
	}
	else if (iLocal_529 == 0)
	{
		iLocal_923 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vLocal_67, joaat("WORLD_PLAYER_CAMP_FIRE_KNEEL2"), 1f, 0, false);
		TASK::_TASK_USE_SCENARIO_POINT(Global_35, iLocal_923, "WORLD_PLAYER_CAMP_FIRE_SIT_MALE_A", 0, false, true, 0, false, 8f, false);
	}
}

bool func_93(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bVar1 = false;
	fVar2 = __LIB_3__::func_249(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (MISC::ABSF((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar1 = true;
		fVar3 = __LIB_0__::func_514(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				__LIB_3__::func_336(&(uParam0->f_121[iVar0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			__LIB_3__::func_336(&(uParam0->f_121[0 /*9*/]), fVar3, 1082130432 /* Float: 4f */, 1, 90f, 0, 0);
		}
		if (__LIB_3__::func_280(&(uParam0->f_121), iParam4, fParam1))
		{
			__LIB_3__::func_164(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				STATS::_0xB2A38826E5886E83(func_126(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_121[iVar0 /*9*/].f_6))
		{
			if (BUILTIN::VDIST2(Global_36, ENTITY::GET_ENTITY_COORDS(uParam0->f_121[iVar0 /*9*/].f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173) && !(bParam8 && PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)))
					{
						if (!ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						__LIB_3__::func_426(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_126(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_94()
{
	float fVar0;
	fVar0 = 0.1f;
	if (iLocal_821 == 0)
	{
		if (fLocal_844 >= fVar0)
		{
			CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_612[0], 0f, 0f, 0f, true, 2000, 4000, 4000, 0);
			iLocal_821 = 1;
		}
	}
	switch (iLocal_835)
	{
		case 0:
			if (__LIB_2__::func_1(iLocal_612[0], 0, 1))
			{
				Local_70.f_44 = 1;
				iLocal_835++;
			}
			break;
		case 1:
			if (fLocal_844 >= fVar0)
			{
				__LIB_3__::func_208(&Local_70, ENTITY::GET_ENTITY_COORDS(iLocal_612[0], true, false), 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				__LIB_1__::func_148(&uLocal_845);
				iLocal_835++;
			}
			break;
		case 2:
			if (fLocal_844 > 0.99f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_521, "Loop", false, false);
				if (bLocal_42)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[8], true);
					iLocal_835++;
				}
				else
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[9], true);
					iLocal_835++;
				}
			}
			break;
		case 3:
			iLocal_835++;
			break;
		case 4:
			return true;
		case 5:
			break;
	}
	return false;
}

bool func_95()
{
	if (iLocal_924 > 0)
	{
		if (iLocal_840 == 1)
		{
			__LIB_2__::func_303(Global_35, iLocal_612[0], func_211(3), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_3__::func_465(12, 0, 0, "Offered Help", iLocal_612[0], 0, 1065353216 /* Float: 1f */, 0);
			bLocal_807 = true;
			bLocal_808 = true;
			__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
			if (MAP::DOES_BLIP_EXIST(uLocal_767[0]))
			{
				MAP::REMOVE_BLIP(&(uLocal_767[0]));
			}
			return true;
		}
		else if (iLocal_840 == 0)
		{
			__LIB_3__::func_465(2, 0, 0, 0, iLocal_612[0], 0, 1065353216 /* Float: 1f */, 0);
			__LIB_2__::func_303(Global_35, iLocal_612[0], func_211(15), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_807 = false;
			bLocal_808 = true;
			iLocal_806 = __LIB_2__::func_340(1, 0, 0);
			__LIB_2__::func_451(&iLocal_865, 0);
			__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
			if (MAP::DOES_BLIP_EXIST(uLocal_767[0]))
			{
				MAP::REMOVE_BLIP(&(uLocal_767[0]));
			}
			iLocal_924 = 5;
		}
		if (bLocal_812 && __LIB_0__::func_94(Global_35, vLocal_67, 1) > 6f)
		{
			__LIB_2__::func_303(Global_35, iLocal_612[0], func_211(15), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_807 = false;
			bLocal_808 = true;
			iLocal_806 = __LIB_2__::func_340(1, 0, 0);
			__LIB_2__::func_451(&iLocal_865, 0);
			__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
			if (MAP::DOES_BLIP_EXIST(uLocal_767[0]))
			{
				MAP::REMOVE_BLIP(&(uLocal_767[0]));
			}
			return true;
		}
	}
	switch (iLocal_924)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_845);
			iLocal_924++;
			break;
		case 1:
			if (!bLocal_810)
			{
				if (__LIB_0__::func_265(&uLocal_845) > 10f)
				{
					__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
					if (bLocal_42)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[2], true);
						__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(2), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_148(&uLocal_845);
						bLocal_810 = true;
						iLocal_924++;
					}
					else
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[3], true);
						__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(2), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_148(&uLocal_845);
						bLocal_810 = true;
						iLocal_924++;
					}
				}
			}
			break;
		case 2:
			if (!__LIB_2__::func_136(iLocal_612[0], 0))
			{
				__LIB_2__::func_411(&(Local_886[1 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_886[0 /*17*/]), 1, 0);
				__LIB_1__::func_148(&uLocal_845);
				iLocal_924++;
			}
			break;
		case 3:
			if (bLocal_810 && !bLocal_811)
			{
				if (__LIB_0__::func_265(&uLocal_845) > 10f)
				{
					__LIB_1__::func_148(&uLocal_845);
					bLocal_811 = true;
					iLocal_924++;
				}
			}
			break;
		case 4:
			bLocal_807 = false;
			bLocal_808 = true;
			__LIB_3__::func_465(2, 0, 0, 0, iLocal_612[0], 0, 1065353216 /* Float: 1f */, 0);
			iLocal_806 = __LIB_2__::func_340(1, 0, 0);
			__LIB_2__::func_451(&iLocal_865, 0);
			__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
			return true;
		case 5:
			if (__LIB_0__::func_265(&uLocal_845) > 2f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_96()
{
	switch (iLocal_830)
	{
		case 0:
			if (bLocal_42)
			{
				if (bLocal_828)
				{
				}
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[6], true);
				iLocal_830++;
			}
			else if (!bLocal_42)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[7], true);
				iLocal_830++;
			}
			break;
		case 1:
			return true;
	}
	return false;
}

bool func_97()
{
	if (!bLocal_825)
	{
	}
	switch (iLocal_838)
	{
		case 0:
			if (fLocal_844 >= 0.99f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[10], true);
				iLocal_838++;
			}
			break;
		case 1:
			if (fLocal_844 >= 0.99f)
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_521, "internalLoopEvent", false, false);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[14], true);
				__LIB_1__::func_148(&uLocal_845);
				iLocal_838++;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_845) > 5f)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[23], true);
				if (ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[23]))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_521, "loop", true, false);
					iLocal_838++;
				}
			}
			break;
		case 3:
			if (fLocal_844 >= 0.99f)
			{
				bLocal_819 = true;
				func_216();
				iLocal_838 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_98()
{
	switch (iLocal_833)
	{
		case 0:
			if (bLocal_42)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[4], true);
			}
			else if (!bLocal_42)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[5], true);
			}
			iLocal_833++;
			break;
		case 1:
			if (fLocal_844 >= 0.88f)
			{
				if (!bLocal_812)
				{
					func_216();
					iLocal_833++;
				}
				else
				{
					iLocal_833++;
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_99()
{
	if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_521, "Female") || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_612[0], Local_521))
	{
		if (!Local_70.f_46)
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_612[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
		}
		else
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_612[0], 1619979220, false, 0, false);
		}
		func_216();
		bLocal_824 = true;
	}
	if (bLocal_824)
	{
		if (!Local_70.f_46)
		{
			TASK::_TASK_FLEE_FROM_PED(iLocal_612[0], Global_35, 0f, 0f, 0f, 200f, -1, 24832, 2f, 0);
			bLocal_823 = true;
			return true;
		}
		else
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_612[0], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			bLocal_823 = true;
		}
	}
	return false;
}

bool func_100()
{
	switch (iLocal_834)
	{
		case 0:
			func_216();
			__LIB_1__::func_148(&uLocal_845);
			iLocal_834++;
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_845) > 5f || fLocal_844 >= 0.98f)
			{
				bLocal_817 = false;
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_521, "Female", iLocal_612[0]);
				if (bLocal_42)
				{
					TASK::TASK_PLAY_ANIM(iLocal_612[0], Local_43[4 /*2*/], Local_43[4 /*2*/].f_1, 4f, -1.5f, -1, 16388, 0f, false, 0, false, 0, false);
					iLocal_834++;
				}
				else
				{
					TASK::TASK_PLAY_ANIM(iLocal_612[0], Local_43[3 /*2*/], Local_43[3 /*2*/].f_1, 4f, -1.5f, -1, 16388, 0f, false, 0, false, 0, false);
					iLocal_834++;
				}
			}
			break;
		case 2:
			if ((ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_612[0], Local_43[4 /*2*/], Local_43[4 /*2*/].f_1) >= 0.98f || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_612[0], Local_43[3 /*2*/], Local_43[3 /*2*/].f_1) >= 0.98f) || !ENTITY::_0x0B7CB1300CBFE19C(iLocal_612[0], 1))
			{
				bLocal_824 = true;
				__LIB_1__::func_148(&uLocal_845);
				iLocal_834++;
			}
			break;
		case 3:
			return true;
	}
	if (!bLocal_814)
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_612[0], Local_43[4 /*2*/], Local_43[4 /*2*/].f_1) >= 0.1f || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_612[0], Local_43[3 /*2*/], Local_43[3 /*2*/].f_1) >= 0.1f)
		{
			__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(13), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_814 = true;
		}
	}
	if (!bLocal_815)
	{
		if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_612[0], Local_43[4 /*2*/], Local_43[4 /*2*/].f_1) >= 0.6f || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_612[0], Local_43[3 /*2*/], Local_43[3 /*2*/].f_1) >= 0.6f)
		{
			__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(14), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			bLocal_815 = true;
		}
	}
	return false;
}

bool func_101()
{
	switch (iLocal_843)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_848);
			iLocal_843++;
			break;
		case 1:
			bLocal_826 = true;
			if (((bLocal_825 && !__LIB_2__::func_136(Global_35, 0)) && bLocal_826) || fLocal_844 >= 0.98f)
			{
				if (bLocal_817)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[19], true);
					__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(18), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_612[0], Global_35, -1, 0, 51, 0);
					iLocal_843++;
				}
				else
				{
					TASK::TASK_REACT(iLocal_612[0], Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 1f, 2f, 4);
					__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(18), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_848);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_612[0], Global_35, -1, 0, 51, 0);
					iLocal_843++;
				}
			}
			break;
		case 2:
			if (bLocal_817)
			{
				if (fLocal_844 >= 0.9f)
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_521, sLocal_14[21], true);
					__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(19), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_843++;
				}
			}
			else if (__LIB_0__::func_265(&uLocal_848) > 5f)
			{
				__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(19), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_848);
				iLocal_843++;
			}
			break;
		case 3:
			if (bLocal_817)
			{
				if (ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[21]) || ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[22]))
				{
					__LIB_1__::func_148(&uLocal_848);
					iLocal_843++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_848);
				iLocal_843++;
			}
			break;
		case 4:
			if (bLocal_817)
			{
				bLocal_817 = false;
				iLocal_843++;
			}
			else
			{
				iLocal_843++;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

bool func_102()
{
	bool bVar0;
	if (bLocal_818)
	{
		if (__LIB_0__::func_265(&uLocal_851) > 2f)
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		switch (iLocal_831)
		{
			case 0:
				__LIB_3__::func_465(3, 0, 0, 0, iLocal_612[0], 0, 1065353216 /* Float: 1f */, 0);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_612[0], Global_35, 4000, 0, 51, 0);
				__LIB_4__::func_72(iLocal_612[0]);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_612[0], joaat("REL_PLAYER_DISLIKE"));
				if (((((((!ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[25]) && !ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[26])) && !ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[21])) && !ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[19])) && !ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[20])) && !ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[22])) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_612[0], Local_43[3 /*2*/], Local_43[3 /*2*/].f_1, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_612[0], Local_43[3 /*2*/], Local_43[3 /*2*/].f_1, 1))
				{
					if (bLocal_817 || ANIMSCENE::_0x1F0E401031E20146(Local_521, sLocal_14[10]))
					{
						if (ENTITY::_0x61914209C36EFDDB(iLocal_612[0]) == 0 && !PED::_IS_PED_LASSOED(iLocal_612[0]))
						{
							TASK::TASK_PLAY_ANIM(iLocal_612[0], Local_43[5 /*2*/], Local_43[5 /*2*/].f_1, 1000f, -4f, -1, 16388, 0f, false, 0, false, 0, false);
						}
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_521, "Loop", true, false);
						if (!bLocal_818 || iLocal_805 != 65536)
						{
							TASK::TASK_REACT(iLocal_612[0], Global_35, 0f, 0f, 0f, "Flee_Scared", 1f, 60f, 4);
						}
						else
						{
							TASK::TASK_REACT(iLocal_612[0], Global_35, 0f, 0f, 0f, "DEFAULT_SHOCKED", 1f, 60f, 4);
						}
					}
				}
				if (!bLocal_822)
				{
					__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(21), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(26), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_831++;
				break;
			case 1:
				if ((ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iLocal_612[0], Local_43[5 /*2*/], Local_43[5 /*2*/].f_1) >= 0.6f || !__LIB_0__::func_491(iLocal_612[0], -2017877118)) || !bLocal_817)
				{
					if (!bLocal_818 || iLocal_805 != 65536)
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_612[0], Global_35, 500f, -1, 0, 1077936128 /* Float: 3f */, 0);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_612[0], Global_35, 500f, -1, 0, 1f, 0);
					}
					__LIB_2__::func_603(&(iLocal_612[0]), &iLocal_865, &Local_886, 1, 1);
					iLocal_831++;
				}
				break;
			case 2:
				return true;
		}
	}
	return false;
}

void func_105()
{
	if (!__LIB_0__::func_491(iLocal_612[0], 150319005))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_612[0], Global_35, -1, 0, 51, 0);
		__LIB_3__::func_440(&uLocal_776, Global_35, 1, -1, 3, 1, 2, 1, 0, 0, 0, 0);
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_612[0], &uLocal_776);
	}
}

int func_126(int iParam0, int iParam1)
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
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
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
			case 24:
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
			case 25:
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
			case 26:
				return -1065165983;
			case 27:
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
			case 28:
				return -1641231995;
			case 29:
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
			case 30:
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
			case 31:
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
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
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
			case 37:
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
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
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
			case 41:
				return 598461796;
			case 42:
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
			case 43:
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
			case 44:
				return 544369376;
			case 45:
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
			case 46:
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
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
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
			case 51:
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
			case 52:
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
			case 53:
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
			case 54:
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
			case 55:
				return 1762656414;
			case 56:
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
			case 57:
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
			case 58:
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
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
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
			case 63:
				return -1618254924;
			case 64:
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
			case 65:
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
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
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
			case 68:
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
			case 69:
				return -2137572125;
			case 70:
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
			case 71:
				return -774894224;
			case 72:
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
			case 73:
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
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
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
				Jump @5434; //curOff = 4587
				return -307424281;
				Jump @5434; //curOff = 4598
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
				Jump @5434; //curOff = 4645
				return -1979014350;
				Jump @5434; //curOff = 4656
				return 2096137174;
				Jump @5434; //curOff = 4667
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
				Jump @5434; //curOff = 4728
				return 1152564685;
				Jump @5434; //curOff = 4739
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
				Jump @5434; //curOff = 4884
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
				Jump @5434; //curOff = 4931
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
				Jump @5434; //curOff = 4978
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
				Jump @5434; //curOff = 5025
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
				Jump @5434; //curOff = 5071
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
				Jump @5434; //curOff = 5160
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
				Jump @5434; //curOff = 5193
				return 1487351956;
				Jump @5434; //curOff = 5204
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
				Jump @5434; //curOff = 5279
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
				Jump @5434; //curOff = 5326
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
				Jump @5434; //curOff = 5373
				return -689015496;
				Jump @5434; //curOff = 5384
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
void func_127(int iParam0, int iParam1, int iParam2)
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

void func_175()
{
	float fVar0;
	if (func_267())
	{
		fVar0 = (ENTITY::GET_ENTITY_HEADING(Global_35) + 90f);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_521, vLocal_64, 0f, 0f, fVar0, 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_521.f_1, vLocal_64, 0f, 0f, fVar0, 2);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_521.f_2, vLocal_64, 0f, 0f, fVar0, 2);
	}
}

bool func_202(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
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
				*iParam3 = 128;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (__LIB_4__::func_237(iParam0, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (__LIB_2__::func_969(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (__LIB_4__::func_235(iParam0, uParam2))
				{
					*iParam3 = 64;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630.f_26 && __LIB_2__::func_173(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 4;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (__LIB_2__::func_876(Global_35, iParam0, uParam2))
					{
						*iParam3 = 256;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 16;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (__LIB_2__::func_877(Global_35, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630.f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (__LIB_2__::func_971(iParam0, uParam2))
				{
					*iParam3 = 32;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 4096;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 2;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
								*iParam3 = 2;
								__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 2;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
							*iParam3 = 2;
							__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
				*iParam3 = 1024;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (__LIB_2__::func_867(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (__LIB_2__::func_878(iParam0, uParam2))
					{
						*iParam3 = 8192;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (__LIB_2__::func_440(iParam0, uParam2))
				{
					*iParam3 = 32768;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
						*iParam3 = 512;
						__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
					*iParam3 = 65536;
					uParam2->f_4 = 0;
					__LIB_2__::func_831(iParam0, uParam2, *iParam3);
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
				*iParam3 = 1;
				__LIB_2__::func_831(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_203(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_328(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_208()
{
	switch (iLocal_842)
	{
		case 0:
			__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
			iLocal_842++;
			break;
		case 1:
			__LIB_1__::func_148(&uLocal_860);
			iLocal_842++;
			break;
		case 2:
			if (bLocal_817 && fLocal_844 >= 0.22f)
			{
				__LIB_2__::func_451(&iLocal_865, 0);
				iLocal_842++;
			}
			break;
		case 3:
			if (bLocal_826)
			{
				__LIB_2__::func_411(&(Local_886[0 /*17*/]), 1, 0);
			}
			else
			{
				__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
			}
			if (iLocal_840 == 0)
			{
				__LIB_3__::func_465(2, 0, 0, 0, iLocal_612[0], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_2__::func_303(Global_35, iLocal_612[0], func_211(22), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
				__LIB_1__::func_148(&uLocal_851);
				__LIB_1__::func_148(&uLocal_860);
				bLocal_813 = true;
				iLocal_842++;
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_860) > 2f)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_612[0], 0);
				return true;
			}
			break;
	}
	return false;
}

bool func_209()
{
	switch (iLocal_841)
	{
		case 0:
			iLocal_806 = __LIB_2__::func_340(1, 0, 0);
			__LIB_2__::func_360(&(Local_886[1 /*17*/]), __LIB_2__::func_460(7));
			__LIB_2__::func_360(&(Local_886[0 /*17*/]), __LIB_2__::func_460(10));
			__LIB_2__::func_451(&iLocal_865, 0);
			__LIB_2__::func_411(&(Local_886[1 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_886[0 /*17*/]), 1, 0);
			__LIB_1__::func_148(&uLocal_857);
			iLocal_841++;
			break;
		case 1:
			if (iLocal_840 == 1 || (__LIB_1__::func_205(Global_35, iLocal_622, 1, 0) && __LIB_0__::func_265(&uLocal_857) > 5f))
			{
				if (bLocal_807 && !bLocal_811)
				{
					if (!bLocal_813)
					{
						__LIB_2__::func_303(Global_35, iLocal_612[0], func_211(25), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, iLocal_612[0], "RE_PCS_V1_W_GREET_LEAVE_B", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else
				{
					__LIB_2__::func_303(Global_35, iLocal_612[0], "RE_PCS_V1_W_FORCE_LEAVE_POS", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
				__LIB_1__::func_148(&uLocal_857);
				iLocal_841++;
			}
			else if (iLocal_840 == 0)
			{
				if (bLocal_807 && !bLocal_811)
				{
					__LIB_2__::func_303(Global_35, iLocal_612[0], func_211(24), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(Global_35, iLocal_612[0], "RE_PCS_V1_W_FORCE_LEAVE_NEG", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
				__LIB_1__::func_148(&uLocal_857);
				iLocal_841 = 3;
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_857) > 2f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_612[0], Global_35, 3000, 0, 51, 1);
				if (!bLocal_813)
				{
					__LIB_2__::func_303(iLocal_612[0], Global_35, func_211(27), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(iLocal_612[0], Global_35, "RE_PCS_V1_W_FORCE_LEAVE_RESP", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_841 = 4;
			}
			break;
		case 3:
			iLocal_841 = 6;
			__LIB_1__::func_148(&uLocal_857);
			break;
		case 4:
			if (iLocal_840 == 0)
			{
				if (bLocal_807 && !bLocal_811)
				{
					if (!bLocal_813)
					{
						__LIB_2__::func_303(Global_35, iLocal_612[0], func_211(24), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, Global_35, "RE_PCS_V1_W_ANTAGONIZE_LEAVE_B", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else
				{
					__LIB_2__::func_303(Global_35, iLocal_612[0], "RE_PCS_V1_W_FORCE_LEAVE_NEG", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_2__::func_411(&(Local_886[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_886[0 /*17*/]), 0, 0);
				__LIB_1__::func_148(&uLocal_857);
				iLocal_841++;
			}
			break;
		case 5:
			if (__LIB_0__::func_265(&uLocal_857) > 2f)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_612[0], Global_35, 3000, 0, 51, 1);
				__LIB_2__::func_303(iLocal_612[0], Global_35, "RE_PCS_V1_W_GREET_LEAVE_RESP_B", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_841++;
			}
			break;
		case 6:
			if (__LIB_0__::func_265(&uLocal_857) > 2f)
			{
				TASK::TASK_REACT(iLocal_612[0], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "DEFAULT_SHOCKED", 1f, 2f, 4);
				PED::_0x24C82EF607105FAA(iLocal_612[0], joaat("AGGRESSIVE"));
				__LIB_2__::func_593(&iLocal_865, &Local_886);
				__LIB_2__::func_56(iLocal_612[0], 1, 1);
				return true;
			}
			break;
	}
	return false;
}

char* func_211(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "RE_PCS_V1_W_OCONVO_A";
		case 1:
			return "RE_PCS_V1_W_OCONVO_B";
		case 2:
			return "RE_PCS_V1_W_PLEA_A";
		case 3:
			return "RE_PCS_V1_W_ACCEPT_A";
		case 4:
			return "RE_PCS_V1_W_ACCEPT_B";
		case 5:
			return "RE_PCS_V1_W_ACCEPT_C";
		case 6:
			return "RE_PCS_V1_W_MCONVO_A";
		case 7:
			return "RE_PCS_V1_W_MCONVO_B";
		case 8:
			return "RE_PCS_V1_W_MCONVO_C";
		case 9:
			return "RE_PCS_V1_W_MCONVO_D";
		case 10:
			return "RE_PCS_V1_W_QUESTION";
		case 11:
			return "RE_PCS_V1_W_PLR_RESPONSE_P";
		case 12:
			return "RE_PCS_V1_W_PLR_RESPONSE_N";
		case 13:
			return "RE_PCS_V1_W_PED_LEAVES_A";
		case 14:
			return "RE_PCS_V1_W_PED_LEAVES_B";
		case 15:
			return "RE_PCS_V1_W_DECLINE_A";
		case 16:
			return "RE_PCS_V1_W_DECLINE_B";
		case 17:
			return "RE_PCS_V1_W_DECLINE_C";
		case 18:
			return "RE_PCS_V1_W_LOOKING_AT_A";
		case 19:
			return "RE_PCS_V1_W_LOOKING_AT_B";
		case 20:
			return "RE_PCS_V1_W_LOOKING_AT_C";
		case 21:
			return "RE_PCS_V1_W_AGGRO_A";
		case 22:
			return "RE_PCS_V1_W_ANTAGONIZE";
		case 24:
			return "RE_PCS_V1_W_ANTAGONIZE_LEAVE";
		case 25:
			return "RE_PCS_V1_W_GREET_LEAVE";
		case 26:
			return "RE_PCS_V1_W_ANTAGONIZE_RESP";
		case 27:
			return "RE_PCS_V1_W_GREET_LEAVE_RESP";
		case 28:
			return "RE_PCS_V1_W_PLR_LOOKING_RESP_P";
		case 29:
			return "RE_PCS_V1_W_PLR_LOOKING_RESP_N";
	}
	return "RERC_ODR_V1_END_A";
}

void func_216()
{
	func_36();
}

bool func_267()
{
	vLocal_64 = { Global_43886 };
	return true;
}

int func_328(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_328(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

