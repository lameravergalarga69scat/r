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
	bool bLocal_14 = false;
	vector3 vLocal_15 = { 0f, 0f, 0f };
	vector3 vLocal_18 = { 0f, 0f, 0f };
	vector3 vLocal_21 = { 0f, 0f, 0f };
	float fLocal_24 = 0f;
	char* sLocal_25[33] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	struct<193> Local_59 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_252 = 0;
	struct<32> Local_253[7];
	int iLocal_478 = 0;
	struct<8> Local_479 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_487 = 0;
	struct<2> Local_488[7];
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 1065353216;
	var uLocal_508 = 1065353216;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 1065353216;
	var uLocal_513 = 1065353216;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 1065353216;
	var uLocal_518 = 1065353216;
	var uLocal_519 = 0;
	var uLocal_520 = 1040187392;
	var uLocal_521 = 1040187392;
	var uLocal_522 = -1;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = -1082130432;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 7;
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
	var uLocal_598[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_606 = 0;
	vector3 vLocal_607 = { 0f, 0f, 0f };
	var uLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	char[] cLocal_618[8] = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	var uLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	int iLocal_644 = 0;
	int iLocal_645 = 0;
	int iLocal_646 = 0;
	int iLocal_647 = 0;
	float fLocal_648 = 0f;
	float fLocal_649 = 0f;
	float fLocal_650 = 0f;
	float fLocal_651 = 0f;
	float fLocal_652 = 0f;
	var uLocal_653 = 0;
	bool bLocal_654 = false;
	bool bLocal_655 = false;
	bool bLocal_656 = false;
	bool bLocal_657 = false;
	bool bLocal_658 = false;
	bool bLocal_659 = false;
	bool bLocal_660 = false;
	bool bLocal_661 = false;
	bool bLocal_662 = false;
	bool bLocal_663 = false;
	bool bLocal_664 = false;
	bool bLocal_665 = false;
	bool bLocal_666 = false;
	bool bLocal_667 = false;
	bool bLocal_668 = false;
	bool bLocal_669 = false;
	bool bLocal_670 = false;
	bool bLocal_671 = false;
	bool bLocal_672 = false;
	bool bLocal_673 = false;
	bool bLocal_674 = false;
	bool bLocal_675 = false;
	bool bLocal_676 = false;
	int iLocal_677 = 0;
	bool bLocal_678 = false;
	bool bLocal_679 = false;
	bool bLocal_680 = false;
	bool bLocal_681 = false;
	bool bLocal_682 = false;
	int iLocal_683 = 0;
	bool bLocal_684 = false;
	bool bLocal_685 = false;
	bool bLocal_686 = false;
	bool bLocal_687 = false;
	bool bLocal_688 = false;
	bool bLocal_689 = false;
	bool bLocal_690 = false;
	bool bLocal_691 = false;
	bool bLocal_692 = false;
	bool bLocal_693 = false;
	bool bLocal_694 = false;
	bool bLocal_695 = false;
	bool bLocal_696 = false;
	bool bLocal_697 = false;
	var uLocal_698 = 0;
	bool bLocal_699 = false;
	bool bLocal_700 = false;
	bool bLocal_701 = false;
	bool bLocal_702 = false;
	bool bLocal_703 = false;
	bool bLocal_704 = false;
	bool bLocal_705 = false;
	bool bLocal_706 = false;
	bool bLocal_707 = false;
	bool bLocal_708 = false;
	bool bLocal_709 = false;
	bool bLocal_710 = false;
	bool bLocal_711 = false;
	bool bLocal_712 = false;
	bool bLocal_713 = false;
	bool bLocal_714 = false;
	bool bLocal_715 = false;
	bool bLocal_716 = false;
	bool bLocal_717 = false;
	bool bLocal_718 = false;
	bool bLocal_719 = false;
	bool bLocal_720 = false;
	bool bLocal_721 = false;
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
	int iLocal_765 = 0;
	var uLocal_766[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	var uLocal_778 = -1;
	var uLocal_779 = 0;
	var uLocal_780 = -1;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = -1;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 1073741824;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 1;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	struct<17> Local_798[2];
	int iLocal_833 = 0;
	var uLocal_834 = -1;
	var uLocal_835 = 0;
	var uLocal_836 = -1;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = -1;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 1073741824;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 1;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	struct<17> Local_854[2];
	int iLocal_889 = 0;
	var uLocal_890 = -1;
	var uLocal_891 = 0;
	var uLocal_892 = -1;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = -1;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 1073741824;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 1;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	struct<17> Local_910[2];
	int iLocal_945 = 0;
	var uLocal_946 = -1;
	var uLocal_947 = 0;
	var uLocal_948 = -1;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = -1;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 1073741824;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 1;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	struct<17> Local_966[2];
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 1065353216;
	var uLocal_1008 = 1065353216;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 1065353216;
	var uLocal_1013 = 1065353216;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 1065353216;
	var uLocal_1018 = 1065353216;
	var uLocal_1019 = 0;
	var uLocal_1020 = 1040187392;
	var uLocal_1021 = 1040187392;
	var uLocal_1022 = -1;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = -1082130432;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	int iLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 1176256512;
	var uLocal_1045 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
#endregion
void __EntryFunction__()
{
	bool bVar0;
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	cLocal_618 = "TB";
	iLocal_623 = -1;
	iLocal_624 = -1;
	iLocal_1041 = 1;
	Local_59.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	bVar0 = false;
	Local_59.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bVar0 = true;
	}
	else
	{
		__LIB_3__::func_420(&Local_59, 1);
		func_4();
		__LIB_2__::func_111(&(Local_59.f_5), 1);
		__LIB_2__::func_180(&(Local_59.f_5), 1);
		__LIB_2__::func_104(&(Local_59.f_5), 1);
		__LIB_2__::func_52(&(Local_59.f_5), 1);
		__LIB_2__::func_51(&(Local_59.f_5), 1);
		__LIB_3__::func_333(&(Local_59.f_5), 1);
		__LIB_2__::func_179(&(Local_59.f_5), 1);
		__LIB_3__::func_553(&(Local_59.f_5), 0);
		__LIB_3__::func_387(&(Local_59.f_5), 1);
		__LIB_2__::func_52(&(Local_59.f_5), 0);
		__LIB_2__::func_182(&(Local_59.f_5), 1);
		__LIB_2__::func_110(&(Local_59.f_5), 0);
		__LIB_2__::func_50(&(Local_59.f_5), 1);
		__LIB_3__::func_999(&(Local_59.f_5), 1);
		__LIB_2__::func_595(&(Local_59.f_5), 20f);
		__LIB_2__::func_906(&(Local_59.f_5), 100);
		__LIB_2__::func_507(&(Local_59.f_5), 1000);
	}
	while (true)
	{
		if (bVar0)
		{
			__LIB_2__::func_265(bVar0, 1531, 0);
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_613)
			{
				case 0:
					if (func_23())
					{
						if (func_24())
						{
							iLocal_613 = 1;
						}
					}
					else
					{
						func_21();
					}
					break;
				case 1:
					if (__LIB_3__::func_759(&Local_59, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_26();
						func_27(&Local_798);
						func_28(&Local_854);
						__LIB_3__::func_889(&Local_910);
						__LIB_3__::func_889(&Local_966);
						iLocal_613 = 3;
					}
					else if (Local_59.f_160)
					{
						func_21();
					}
					break;
				case 3:
					if (func_30())
					{
						if (((__LIB_2__::func_1(uLocal_598[0], 0, 1) && __LIB_2__::func_1(uLocal_598[1], 0, 1)) && __LIB_2__::func_1(uLocal_598[2], 0, 1)) && ENTITY::DOES_ENTITY_EXIST(iLocal_606))
						{
							__LIB_0__::func_11();
							func_33();
							func_34();
							func_35();
							func_36();
							PED::SET_PED_CONFIG_FLAG(uLocal_598[0], 317, true);
							PED::SET_PED_CONFIG_FLAG(uLocal_598[1], 317, true);
							AUDIO::STOP_PED_SPEAKING(uLocal_598[0], true);
							AUDIO::STOP_PED_SPEAKING(uLocal_598[1], true);
							AUDIO::STOP_PED_SPEAKING(uLocal_598[2], true);
							uLocal_1045 = GRAPHICS::_0xFA50F79257745E74(vLocal_607, 1f, 1, 14, 0);
							iLocal_613 = 4;
						}
					}
					break;
				case 4:
					func_37();
					if (!Local_59.f_46)
					{
						if (func_38())
						{
							PED::_0x58F7DB5BD8FA2288(uLocal_598[0]);
							PED::_0x58F7DB5BD8FA2288(uLocal_598[1]);
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", uLocal_598[2]);
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_598[0], 0);
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_598[1], 0);
							AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_598[2], 0);
							iLocal_612 = 5;
							Local_59.f_46 = 1;
						}
					}
					if (func_39())
					{
						if (!Local_59.f_44)
						{
							Local_59.f_44 = 1;
						}
						func_21();
					}
					if (__LIB_3__::func_431(&Local_59, &uLocal_598, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_21();
					}
					if (!__LIB_3__::func_466(&Local_59, &uLocal_598, iLocal_478, 0, 1, 0, 1, 0))
					{
						func_21();
					}
					break;
			}
			BUILTIN::WAIT(Local_59.f_158);
		}
	}
}

void func_4()
{
	iLocal_487 = __LIB_3__::func_554(__LIB_1__::func_898(), 0, 0, 0);
	switch (__LIB_1__::func_898())
	{
		case 4:
		case 12:
			iLocal_487 = 3;
			iLocal_478 = 0;
			break;
		case 0:
		case 1:
		case 2:
		case 3:
		case 6:
		case 7:
		case 9:
		case 10:
		case 11:
			iLocal_487 = 0;
			iLocal_478 = 1;
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			iLocal_487 = 5;
			iLocal_478 = 2;
			break;
	}
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		bLocal_14 = __LIB_2__::func_284(iLocal_487, -1);
	}
	Local_59.f_177 = iLocal_487;
}

void func_21()
{
	int iVar0;
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_606, 0);
	func_50(0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_606))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, false);
		if (!Local_59.f_48 && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_606))
		{
			VEHICLE::DELETE_VEHICLE(&iLocal_606);
		}
		else
		{
			__LIB_10__::func_284(&iLocal_606);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_774);
	}
	__LIB_2__::func_165(Local_59.f_51, 50f, 1, 0, 5);
	if (iLocal_623 < 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_623);
	}
	if (iLocal_624 < 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_624);
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_598[iVar0]))
		{
			AUDIO::STOP_PED_SPEAKING(uLocal_598[iVar0], false);
		}
		iVar0++;
	}
	LAW::_0x710448D44A64C213(1);
	LAW::_0xC805EB785824F712(1);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1002);
	AUDIO::STOP_PED_SPEAKING(uLocal_598[2], false);
	GRAPHICS::_0x9CF1836C03FB67A2(&uLocal_1045, 1);
	if (!Local_59.f_48)
	{
		__LIB_3__::func_475(uLocal_598[2], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		__LIB_3__::func_475(uLocal_598[0], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		__LIB_3__::func_475(uLocal_598[1], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		__LIB_3__::func_475(uLocal_598[4], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		if (iLocal_487 == 3)
		{
			__LIB_3__::func_475(uLocal_598[3], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
		}
	}
	__LIB_3__::func_493(&Local_59, &uLocal_598, &uLocal_766, iLocal_478, -1, 0, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_23()
{
	if (iLocal_487 == 0)
	{
		if (!__LIB_2__::func_633(0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iLocal_487 == 3)
	{
		if (!__LIB_2__::func_633(3) && !__LIB_2__::func_410(75))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iLocal_487 == 5)
	{
		if (!__LIB_2__::func_633(5))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_24()
{
	int iVar0;
	switch (iLocal_611)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_59))
			{
				func_59();
				__LIB_3__::func_352(&Local_59, iLocal_487);
				func_61();
				func_62();
				func_63();
				STREAMING::REQUEST_MODEL(joaat("P_MONEYSTACK01X"), false);
				STREAMING::REQUEST_MODEL(__LIB_4__::func_379(), false);
				if (iLocal_478 == 0)
				{
				}
				else if (iLocal_478 == 1)
				{
				}
				iLocal_611 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_610, cLocal_618))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_541))
			{
				return false;
			}
			if (!func_67())
			{
				return false;
			}
			if (!func_68())
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (Local_253[iVar0 /*32*/].f_1 != 0)
				{
					if (!STREAMING::HAS_MODEL_LOADED(Local_253[iVar0 /*32*/].f_1))
					{
						return false;
					}
				}
				iVar0++;
			}
			if (!STREAMING::HAS_MODEL_LOADED(__LIB_4__::func_379()))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_MONEYSTACK01X")))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_253))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("RECHR_Sounds", 0))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_26()
{
	switch (Local_59.f_51.f_4)
	{
		case 0:
			Local_253[0 /*32*/].f_6 = { -1312.21f, 112.43f, 71.59f };
			Local_253[0 /*32*/].f_9 = -26.12f;
			Local_253[1 /*32*/].f_6 = { -1312.21f, 112.43f, 71.59f };
			Local_253[1 /*32*/].f_9 = 81.6f;
			Local_253[4 /*32*/].f_6 = { -1312.21f, 112.43f, 71.59f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { -1312.21f, 112.43f, 71.59f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[6 /*32*/].f_6 = { -1300.95f, 110.64f, 72.37f };
			Local_253[6 /*32*/].f_9 = -91.99f;
			Local_253[5 /*32*/].f_6 = { -1301.56f, 107.19f, 72.32f };
			Local_253[5 /*32*/].f_9 = 167.49f;
			vLocal_15 = { -1305.2f, 114.73f, 72.78f };
			fLocal_24 = 12.3f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1324.02f, 117.19f, 74.02f };
			vLocal_607 = { -1307.17f, 114.48f, 71.87f };
			break;
		case 1:
			Local_253[0 /*32*/].f_6 = { -1193.09f, -346.84f, 98.15f };
			Local_253[0 /*32*/].f_9 = 0f;
			Local_253[1 /*32*/].f_6 = { -1195.65f, -345.04f, 98.61f };
			Local_253[1 /*32*/].f_9 = 0f;
			Local_253[4 /*32*/].f_6 = { -1192.24f, -346.96f, 98.03f };
			Local_253[4 /*32*/].f_9 = 0f;
			Local_253[2 /*32*/].f_6 = { -1198.44f, -343.93f, 99.04f };
			Local_253[2 /*32*/].f_9 = 0f;
			Local_253[5 /*32*/].f_6 = { -1205.14f, -341.4f, 101.32f };
			Local_253[5 /*32*/].f_9 = 52.14f;
			Local_253[6 /*32*/].f_6 = { -1201.97f, -345.81f, 100.62f };
			Local_253[6 /*32*/].f_9 = -175.95f;
			vLocal_15 = { -1197.46f, -344.73f, 99.76f };
			fLocal_24 = 234.73f;
			vLocal_21 = { -1213.66f, -320.25f, 102.74f };
			vLocal_18 = { -1191.14f, -342.14f, 98.41f };
			vLocal_607 = { -1197.68f, -343.02f, 98.99f };
			break;
		case 2:
			Local_253[0 /*32*/].f_6 = { -1631.463f, -508.5251f, 147.7541f };
			Local_253[0 /*32*/].f_9 = 0f;
			Local_253[1 /*32*/].f_6 = { -1631.463f, -508.5251f, 147.7541f };
			Local_253[1 /*32*/].f_9 = 0f;
			Local_253[4 /*32*/].f_6 = { -1631.463f, -508.5251f, 147.7541f };
			Local_253[4 /*32*/].f_9 = 0f;
			Local_253[2 /*32*/].f_6 = { -1631.463f, -508.5251f, 147.7541f };
			Local_253[2 /*32*/].f_9 = 0f;
			Local_253[5 /*32*/].f_6 = { -1637.45f, -508.1897f, 147.755f };
			Local_253[5 /*32*/].f_9 = -141.12f;
			Local_253[6 /*32*/].f_6 = { -1640.173f, -507.7695f, 147.659f };
			Local_253[6 /*32*/].f_9 = -155.95f;
			vLocal_15 = { -1631.463f, -508.5251f, 147.7541f };
			fLocal_24 = -141.12f;
			vLocal_21 = { -1637.463f, -503.5251f, 147.7541f };
			vLocal_18 = { -1758.201f, -399.4812f, 154.7452f };
			vLocal_607 = { -1630.81f, -506.53f, 147.55f };
			break;
		case 3:
			Local_253[0 /*32*/].f_6 = { 236.77f, 1169.34f, 174.62f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { 236.77f, 1169.34f, 174.62f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { 236.77f, 1169.34f, 174.62f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { 236.77f, 1169.34f, 174.62f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { 251.32f, 1180.34f, 175.6f };
			Local_253[5 /*32*/].f_9 = 163.24f;
			Local_253[6 /*32*/].f_6 = { 248.57f, 1180.03f, 175.64f };
			Local_253[6 /*32*/].f_9 = 136.43f;
			vLocal_15 = { 244.1f, 1174.28f, 175.59f };
			fLocal_24 = 111.29f;
			vLocal_21 = { 247.75f, 1166.65f, 174.73f };
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_607 = { 243.44f, 1172.02f, 174.64f };
			break;
		case 4:
			Local_253[0 /*32*/].f_6 = { -869.7f, -1800.16f, 64.39f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { -872.75f, -1804.54f, 64f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { -868.79f, -1804.09f, 64f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { -873.21f, -1807.84f, 63.76f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[3 /*32*/].f_6 = { -872.44f, -1809.49f, 63.74f };
			Local_253[3 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { -866.13f, -1814.96f, 64.63f };
			Local_253[5 /*32*/].f_9 = 152.9f;
			Local_253[6 /*32*/].f_6 = { -870.73f, -1816.86f, 64.79f };
			Local_253[6 /*32*/].f_9 = 111.61f;
			vLocal_15 = { -865.4097f, -1807.907f, 64.0395f };
			fLocal_24 = 319.3985f;
			vLocal_21 = { -869.7f, -1800.16f, 64.39f };
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_607 = { -866.62f, -1806.84f, 63.96f };
			break;
		case 5:
			Local_253[0 /*32*/].f_6 = { -1401.62f, -1966.7f, 43.51f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { -1403.72f, -1964.08f, 43.65f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { -1408.09f, -1962.03f, 43.81f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { -1410.01f, -1961.63f, 43.91f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[3 /*32*/].f_6 = { -1411.61f, -1963.74f, 43.98f };
			Local_253[3 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { -1413.93f, -1971.1f, 43.68f };
			Local_253[5 /*32*/].f_9 = 26.93f;
			Local_253[6 /*32*/].f_6 = { -1414.71f, -1966.43f, 43.9f };
			Local_253[6 /*32*/].f_9 = 67.68f;
			vLocal_15 = { -1407.439f, -1969.719f, 43.6107f };
			fLocal_24 = 230.1571f;
			vLocal_21 = { -1401.62f, -1966.7f, 43.51f };
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_607 = { -1406.83f, -1968.49f, 43.63f };
			break;
		case 6:
			Local_253[0 /*32*/].f_6 = { -552.22f, -497.59f, 50.64f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { -550.15f, -494.62f, 50.95f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { -547.6475f, -489.3265f, 50.9591f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { -551.76f, -496.31f, 50.79f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { -569.41f, -522.09f, 52.2f };
			Local_253[5 /*32*/].f_9 = -149.37f;
			Local_253[6 /*32*/].f_6 = { -563.72f, -522.5f, 52.02f };
			Local_253[6 /*32*/].f_9 = 128.75f;
			vLocal_15 = { -556.52f, -519.95f, 50.2f };
			fLocal_24 = 261.69f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -553.11f, -506.61f, 50.74f };
			vLocal_607 = { -556.97f, -518.21f, 50.78f };
			break;
		case 7:
			Local_253[0 /*32*/].f_6 = { -484.73f, -188.64f, 43.86f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { -483.78f, -183.71f, 43.67f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { -489.04f, -192.47f, 44.26f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { -483.91f, -186.09f, 43.62f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { -484.4f, -178.28f, 44.89f };
			Local_253[5 /*32*/].f_9 = -167.58f;
			Local_253[6 /*32*/].f_6 = { -487.91f, -178.17f, 44.52f };
			Local_253[6 /*32*/].f_9 = 139.97f;
			vLocal_15 = { -488.51f, -185.91f, 45.01f };
			fLocal_24 = 136.47f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -437.12f, -156.22f, 43.05f };
			vLocal_607 = { -486.92f, -186.59f, 43.78f };
			break;
		case 8:
			Local_253[0 /*32*/].f_6 = { -617.8984f, 200.8106f, 42.3731f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { -617.8984f, 200.8106f, 42.3731f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { -617.8984f, 200.8106f, 42.3731f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { -617.8984f, 200.8106f, 42.3731f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { -594.77f, 201.87f, 44.58f };
			Local_253[5 /*32*/].f_9 = -114.16f;
			Local_253[6 /*32*/].f_6 = { -592.63f, 202.98f, 44.57f };
			Local_253[6 /*32*/].f_9 = -98.02f;
			vLocal_15 = { -590.5f, 209.93f, 44.31f };
			fLocal_24 = 309.1313f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -595.11f, 215.38f, 43.6f };
			vLocal_607 = { -591.41f, 211.15f, 43.37f };
			break;
		case 9:
			Local_253[0 /*32*/].f_6 = { 45.2288f, -309.8703f, 100.0965f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { 45.2288f, -309.8703f, 100.0965f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { 45.2288f, -309.8703f, 100.0965f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { 45.2288f, -309.8703f, 100.0965f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { 43.7662f, -321.3496f, 99.5085f };
			Local_253[5 /*32*/].f_9 = 47.48f;
			Local_253[6 /*32*/].f_6 = { 46.082f, -320.283f, 99.4931f };
			Local_253[6 /*32*/].f_9 = 52.56f;
			vLocal_15 = { 45.2288f, -309.8703f, 100.0965f };
			fLocal_24 = 52.56f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { 39.2288f, -304.8703f, 100.0965f };
			vLocal_607 = { 44.22f, -311.55f, 99.93f };
			break;
		case 10:
			Local_253[0 /*32*/].f_6 = { 553.2196f, -536.8489f, 76.4877f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { 553.2196f, -536.8489f, 76.4877f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { 553.2196f, -536.8489f, 76.4877f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { 553.2196f, -536.8489f, 76.4877f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { 543.27f, -535.21f, 77.01f };
			Local_253[5 /*32*/].f_9 = 66.03f;
			Local_253[6 /*32*/].f_6 = { 546.66f, -539.9f, 77.08f };
			Local_253[6 /*32*/].f_9 = 138.11f;
			vLocal_15 = { 553.2196f, -536.8489f, 76.4877f };
			fLocal_24 = -90f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { 547.2196f, -531.8489f, 76.4877f };
			vLocal_607 = { 553.08f, -535.29f, 76.5f };
			break;
		case 11:
			Local_253[0 /*32*/].f_6 = { -2001.76f, -1381.82f, 116.85f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { -1999.71f, -1382.69f, 116.7f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { -1865.16f, -1329.99f, 98.02f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { -1991.74f, -1383.62f, 116.28f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[3 /*32*/].f_6 = { -1989.89f, -1383.18f, 116.07f };
			Local_253[3 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { -1990.66f, -1367.77f, 117.06f };
			Local_253[5 /*32*/].f_9 = 90.32f;
			Local_253[6 /*32*/].f_6 = { -1987.93f, -1371.15f, 116.63f };
			Local_253[6 /*32*/].f_9 = 40.62f;
			vLocal_15 = { -1995.538f, -1374.255f, 116.3711f };
			fLocal_24 = 82.8f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1870.52f, -1319.83f, 97f };
			vLocal_607 = { -1995.81f, -1375.67f, 116.33f };
			break;
		case 12:
			Local_253[0 /*32*/].f_6 = { -1716.08f, -1723.55f, 87.86f };
			Local_253[0 /*32*/].f_9 = -88f;
			Local_253[1 /*32*/].f_6 = { -1718.87f, -1724.05f, 88.06f };
			Local_253[1 /*32*/].f_9 = -88f;
			Local_253[4 /*32*/].f_6 = { -1721.37f, -1724.84f, 88.17f };
			Local_253[4 /*32*/].f_9 = -88f;
			Local_253[2 /*32*/].f_6 = { -1709.04f, -1725.6f, 87.52f };
			Local_253[2 /*32*/].f_9 = -88f;
			Local_253[3 /*32*/].f_6 = { -1723.08f, -1725.73f, 88.23f };
			Local_253[3 /*32*/].f_9 = -88f;
			Local_253[5 /*32*/].f_6 = { -1720.29f, -1733.52f, 89.96f };
			Local_253[5 /*32*/].f_9 = -68.07f;
			Local_253[6 /*32*/].f_6 = { -1725.06f, -1733.63f, 89.21f };
			Local_253[6 /*32*/].f_9 = -61.94f;
			vLocal_15 = { -1722.938f, -1729f, 88.21406f };
			fLocal_24 = -70.14f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1717.44f, -1720.72f, 88.09f };
			vLocal_607 = { -1716.02f, -1727.22f, 88.08f };
			break;
		case 13:
			Local_253[0 /*32*/].f_6 = { -2210.19f, -1610.43f, 145.28f };
			Local_253[0 /*32*/].f_9 = 19.57f;
			Local_253[1 /*32*/].f_6 = { -2208.26f, -1611.85f, 145.26f };
			Local_253[1 /*32*/].f_9 = -94.74f;
			Local_253[4 /*32*/].f_6 = { -2212.31f, -1608.57f, 145.33f };
			Local_253[4 /*32*/].f_9 = 126.5875f;
			Local_253[2 /*32*/].f_6 = { -2203.24f, -1614.94f, 145.15f };
			Local_253[2 /*32*/].f_9 = 126.5875f;
			Local_253[3 /*32*/].f_6 = { -2198.94f, -1617.79f, 145.09f };
			Local_253[3 /*32*/].f_9 = 126.5875f;
			Local_253[5 /*32*/].f_6 = { -2191.72f, -1612.02f, 147.01f };
			Local_253[5 /*32*/].f_9 = 6.01f;
			Local_253[6 /*32*/].f_6 = { -2191.26f, -1614.95f, 146.47f };
			Local_253[6 /*32*/].f_9 = 52.02f;
			vLocal_15 = { -2202.42f, -1609.38f, 146.43f };
			fLocal_24 = 40.1595f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1848.93f, -1677.75f, 106.46f };
			vLocal_607 = { -2203.1f, -1610.76f, 145.28f };
			break;
		case 14:
			Local_253[0 /*32*/].f_6 = { -5704.61f, -3186.09f, -22.77f };
			Local_253[0 /*32*/].f_9 = 126.5875f;
			Local_253[1 /*32*/].f_6 = { -5704.61f, -3186.09f, -22.77f };
			Local_253[1 /*32*/].f_9 = 126.5875f;
			Local_253[4 /*32*/].f_6 = { -5704.61f, -3186.09f, -22.77f };
			Local_253[4 /*32*/].f_9 = 126.5875f;
			Local_253[2 /*32*/].f_6 = { -5704.61f, -3186.09f, -22.77f };
			Local_253[2 /*32*/].f_9 = 126.5875f;
			Local_253[3 /*32*/].f_6 = { -5704.61f, -3186.09f, -22.77f };
			Local_253[3 /*32*/].f_9 = 126.5875f;
			Local_253[6 /*32*/].f_6 = { -5716.39f, -3191.46f, -21.91f };
			Local_253[6 /*32*/].f_9 = -129.11f;
			Local_253[5 /*32*/].f_6 = { -5719.14f, -3190.35f, -21.81f };
			Local_253[5 /*32*/].f_9 = -154.33f;
			vLocal_15 = { -5710.6f, -3187.24f, -21.92f };
			fLocal_24 = 269.5f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -5709.32f, -3136.62f, -18.8f };
			vLocal_607 = { -5711.39f, -3185.4f, -22.64f };
			break;
		case 15:
			Local_253[0 /*32*/].f_6 = { -5403.85f, -2350.23f, -7.17f };
			Local_253[0 /*32*/].f_9 = 126.5875f;
			Local_253[1 /*32*/].f_6 = { -5403.85f, -2350.23f, -7.17f };
			Local_253[1 /*32*/].f_9 = 126.5875f;
			Local_253[4 /*32*/].f_6 = { -5403.85f, -2350.23f, -7.17f };
			Local_253[4 /*32*/].f_9 = 126.5875f;
			Local_253[2 /*32*/].f_6 = { -5403.85f, -2350.23f, -7.17f };
			Local_253[2 /*32*/].f_9 = 126.5875f;
			Local_253[3 /*32*/].f_6 = { -5403.85f, -2350.23f, -7.17f };
			Local_253[3 /*32*/].f_9 = 126.5875f;
			Local_253[5 /*32*/].f_6 = { -5408.14f, -2360.38f, -6.6f };
			Local_253[5 /*32*/].f_9 = 168.78f;
			Local_253[6 /*32*/].f_6 = { -5411.23f, -2359.97f, -6.89f };
			Local_253[6 /*32*/].f_9 = -140.23f;
			vLocal_15 = { -5402.77f, -2354.41f, -6.24f };
			fLocal_24 = -74.87f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -5402.07f, -2339.51f, -7.05f };
			vLocal_607 = { -5404.08f, -2353.07f, -7.35f };
			break;
		case 16:
			Local_253[0 /*32*/].f_6 = { -4231.62f, -3052.43f, -9.07f };
			Local_253[0 /*32*/].f_9 = 126.5875f;
			Local_253[1 /*32*/].f_6 = { -4231.62f, -3052.43f, -9.07f };
			Local_253[1 /*32*/].f_9 = 126.5875f;
			Local_253[4 /*32*/].f_6 = { -4231.62f, -3052.43f, -9.07f };
			Local_253[4 /*32*/].f_9 = 126.5875f;
			Local_253[2 /*32*/].f_6 = { -4231.62f, -3052.43f, -9.07f };
			Local_253[2 /*32*/].f_9 = 126.5875f;
			Local_253[3 /*32*/].f_6 = { -4231.62f, -3052.43f, -9.07f };
			Local_253[3 /*32*/].f_9 = 126.5875f;
			Local_253[5 /*32*/].f_6 = { -4227.37f, -3051.38f, -7.94f };
			Local_253[5 /*32*/].f_9 = -86.86f;
			Local_253[6 /*32*/].f_6 = { -4227.15f, -3049.07f, -7.91f };
			Local_253[6 /*32*/].f_9 = -18.73f;
			vLocal_15 = { -4238.25f, -3051.37f, -8.53f };
			fLocal_24 = 81.93f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -4241.75f, -3060.61f, -8.89f };
			vLocal_607 = { -4237.77f, -3053.14f, -9.2f };
			break;
		case 17:
			Local_253[0 /*32*/].f_6 = { -1650f, -2458.62f, 42.51f };
			Local_253[0 /*32*/].f_9 = 126.5875f;
			Local_253[1 /*32*/].f_6 = { -1650f, -2458.62f, 42.51f };
			Local_253[1 /*32*/].f_9 = 126.5875f;
			Local_253[4 /*32*/].f_6 = { -1650f, -2458.62f, 42.51f };
			Local_253[4 /*32*/].f_9 = 126.5875f;
			Local_253[2 /*32*/].f_6 = { -1650f, -2458.62f, 42.51f };
			Local_253[2 /*32*/].f_9 = 126.5875f;
			Local_253[3 /*32*/].f_6 = { -1650f, -2458.62f, 42.51f };
			Local_253[3 /*32*/].f_9 = 126.5875f;
			Local_253[6 /*32*/].f_6 = { -1630.76f, -2456.45f, 43.3f };
			Local_253[6 /*32*/].f_9 = 6.03f;
			Local_253[5 /*32*/].f_6 = { -1630.25f, -2459.71f, 43.33f };
			Local_253[5 /*32*/].f_9 = -58.72f;
			vLocal_15 = { -1637.69f, -2454.7f, 43.58f };
			fLocal_24 = 48.81f;
			vLocal_18 = { -2431.363f, -1278.739f, 155.7463f };
			vLocal_21 = { -1645.78f, -2465.31f, 42.99f };
			vLocal_607 = { -1638.47f, -2456.47f, 42.32f };
			break;
	}
}

void func_27(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(10), func_77(29), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

void func_28(var uParam0)
{
	__LIB_2__::func_602(uParam0[0 /*17*/], __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(uParam0[1 /*17*/], __LIB_2__::func_460(10), func_77(39), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
}

bool func_30()
{
	int iVar0;
	switch (iLocal_614)
	{
		case 0:
			if (__LIB_3__::func_449(&Local_253))
			{
				iLocal_614 = 1;
			}
			break;
		case 1:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_59), __LIB_3__::func_526(&Local_59), &Local_253, &uLocal_598, 0, 0, -1, 1))
			{
				func_81();
				iLocal_614 = 6;
			}
			break;
		case 6:
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[0], "Default_Panic");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[0], "DEFAULT_SHOCKED");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[0], "Default_Angry");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[1], "Default_Panic");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[1], "DEFAULT_SHOCKED");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[1], "Default_Angry");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[1], "Default_Brave");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[1], "Default_Curious");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[2], "Default_Shocked");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[2], "Default_Panic");
			PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_598[2], "Default_Shocked");
			if ((((((((((PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[0], "Default_Panic") && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[0], "DEFAULT_SHOCKED")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[0], "Default_Angry")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[1], "Default_Panic")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[1], "DEFAULT_SHOCKED")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[1], "Default_Angry")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[1], "Default_Brave")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[1], "Default_Curious")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[2], "DEFAULT_SHOCKED")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[2], "Default_Panic")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(uLocal_598[2], "Default_Shocked"))
			{
				iVar0 = 0;
				while (iVar0 < 7)
				{
					ENTITY::SET_ENTITY_COORDS(uLocal_598[iVar0], Local_253[iVar0 /*32*/].f_6, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(uLocal_598[iVar0], Local_253[iVar0 /*32*/].f_9);
					iVar0++;
				}
				return true;
			}
			break;
	}
	return false;
}

void func_33()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_598[iVar0]))
		{
			PED::SET_PED_HEARING_RANGE(uLocal_598[iVar0], 40f);
			PED::SET_PED_SEEING_RANGE(uLocal_598[iVar0], 60f);
			PED::SET_PED_CONFIG_FLAG(uLocal_598[iVar0], 96, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_598[iVar0], 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_598[iVar0], 50, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_598[iVar0], 43, true);
			PED::SET_COMBAT_FLOAT(uLocal_598[iVar0], 13, 0f);
			PED::SET_PED_COMBAT_MOVEMENT(uLocal_598[iVar0], 2);
			if ((iVar0 != 0 && iVar0 != 1) && iVar0 != 2)
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_598[iVar0], 146, false);
			}
		}
		iVar0++;
	}
	PED::_0x89F5E7ADECCCB49C(uLocal_598[0], "intimidate");
	PED::_0x89F5E7ADECCCB49C(uLocal_598[1], "intimidate");
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_598[4]) && ENTITY::DOES_ENTITY_EXIST(iLocal_606))
	{
		if (!__LIB_3__::func_330(uLocal_598[4], iLocal_606, 0))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_598[4], iLocal_606, -1);
			__LIB_1__::func_864(uLocal_598[4], 0, 0);
			PED::APPLY_PED_DAMAGE_PACK(uLocal_598[4], "PD_Blood_throat_chest", 0f, 1f);
			PED::APPLY_PED_DAMAGE_PACK(uLocal_598[4], "PD_Blood_face_right", 0f, 1f);
		}
	}
	if (iLocal_487 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_598[2]) && ENTITY::DOES_ENTITY_EXIST(iLocal_606))
		{
			if (!__LIB_3__::func_330(uLocal_598[2], iLocal_606, 0))
			{
				__LIB_2__::func_231(uLocal_598[0], joaat("WEAPON_MELEE_KNIFE"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_2__::func_231(uLocal_598[1], joaat("WEAPON_MELEE_KNIFE"), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_2__::func_231(uLocal_598[0], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				__LIB_2__::func_231(uLocal_598[1], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
				VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_606, 0, false, true);
				VEHICLE::_SET_VEHICLE_DOOR_DESTROY_TYPE(iLocal_606, 3, 11);
				PED::SET_PED_INTO_VEHICLE(uLocal_598[2], iLocal_606, 1);
			}
		}
	}
	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_598[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_598[1]))
		{
			__LIB_2__::func_231(uLocal_598[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			__LIB_2__::func_231(uLocal_598[0], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			__LIB_2__::func_231(uLocal_598[1], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
			__LIB_2__::func_231(uLocal_598[1], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 1, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
	}
	__LIB_3__::func_285(uLocal_598[0], &Local_59, 0);
	__LIB_3__::func_285(uLocal_598[1], &Local_59, 0);
	__LIB_1__::func_991(uLocal_598[0], 0);
	__LIB_1__::func_991(uLocal_598[1], 0);
	__LIB_1__::func_991(uLocal_598[2], 0);
	PED::ADD_RELATIONSHIP_GROUP("RECR_VICTIM", &iLocal_1002);
	PED::ADD_RELATIONSHIP_GROUP("RECR_ROBBER", &iLocal_1001);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_598[2], iLocal_1002);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, iLocal_1002, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_598[0], iLocal_1001);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_598[1], iLocal_1001);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1001, PED::GET_PED_RELATIONSHIP_GROUP_HASH(Global_35));
	LAW::_0x710448D44A64C213(0);
	LAW::_0xC805EB785824F712(0);
	PED::SET_PED_CONFIG_FLAG(uLocal_598[0], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_598[1], 6, true);
	ENTITY::_0x4B436BAC8CBE9B07(uLocal_598[0], 1, 0);
	ENTITY::_0x4B436BAC8CBE9B07(uLocal_598[1], 1, 0);
}

void func_34()
{
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			func_90();
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "SKINNER_01", uLocal_598[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "VICTIM", uLocal_598[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_1, "SKINNER_02", uLocal_598[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_1, "DEAD", uLocal_598[3], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "wagon", iLocal_606, 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_2, "VICTIM", uLocal_598[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_3, "VICTIM", uLocal_598[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "BASE_BOOL", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "IDLE_BOOL", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "FEM_IDLE_BOOL", false, false);
			ANIMSCENE::START_ANIM_SCENE(Local_479);
			ANIMSCENE::START_ANIM_SCENE(Local_479.f_1);
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			func_90();
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "odriscoll", uLocal_598[0], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479, "vic", uLocal_598[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", uLocal_598[2], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_1, "odriscoll", uLocal_598[1], 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_479.f_1, "wagon", iLocal_606, 0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "base_bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "ground_bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "base_bool", false, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "", false, false);
			ANIMSCENE::START_ANIM_SCENE(Local_479);
			ANIMSCENE::START_ANIM_SCENE(Local_479.f_1);
		}
	}
}

void func_35()
{
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		if (iLocal_487 == 0)
		{
			__LIB_3__::func_566(&(uLocal_598[0]), 2061539371);
			__LIB_3__::func_566(&(uLocal_598[1]), 1771140493);
			__LIB_3__::func_566(&(uLocal_598[4]), 1537379613);
			__LIB_3__::func_566(&(uLocal_598[2]), 975618243);
		}
		else if (iLocal_487 == 3)
		{
			__LIB_3__::func_566(&(uLocal_598[0]), 2024768285);
			__LIB_3__::func_566(&(uLocal_598[1]), -1963382864);
			__LIB_3__::func_566(&(uLocal_598[4]), -1532821035);
			__LIB_3__::func_566(&(uLocal_598[2]), 1023712399);
			__LIB_3__::func_566(&(uLocal_598[3]), 1255880764);
		}
		else if (iLocal_487 == 5)
		{
			__LIB_3__::func_566(&(uLocal_598[0]), 1937571152);
			__LIB_3__::func_566(&(uLocal_598[1]), 70688453);
			__LIB_3__::func_566(&(uLocal_598[4]), 633654067);
			__LIB_3__::func_566(&(uLocal_598[2]), 1963369243);
		}
	}
}

void func_36()
{
	if (Local_59.f_161)
	{
		if (!bLocal_684)
		{
			PERSCHAR::_0x92690B0822493CE0();
			PERSCHAR::_0xEFC5C6670E0B99BA();
			__LIB_2__::func_761(Local_59.f_51, 100f, 0, 0);
			__LIB_2__::func_761(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 100f, 0, 0);
			MISC::CLEAR_AREA(Local_59.f_51, 300f, 2442122);
			bLocal_684 = true;
		}
	}
	else
	{
		__LIB_2__::func_761(vLocal_15, 20f, 0, 0);
		__LIB_2__::func_165(Local_59.f_51, 20f, 0, 0, 5);
	}
	__LIB_3__::func_527(&iLocal_774, 1569.125f, -1433.113f, 61.73186f, 0f, 0f, 0f, 1f, 1f, 3f, "volVicBlockingArea");
	PED::_0x7C00CFC48A782DC0(iLocal_774, uLocal_598[2], 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	PATHFIND::_0x19C7567D2F2287D6(iLocal_774, 7);
}

void func_37()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479, false))
	{
		fLocal_648 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_479);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479.f_1, false))
	{
		fLocal_649 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_479.f_1);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479.f_2, false))
	{
		fLocal_650 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_479.f_2);
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[22]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479, false))
		{
			bLocal_703 = true;
			fLocal_651 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_479);
		}
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_479.f_1, sLocal_25[22]))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479.f_1, false))
		{
			fLocal_652 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_479.f_1);
		}
	}
	if (iLocal_612 > 1)
	{
		PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	}
	if (!bLocal_687)
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_598[2], 430, true);
	}
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (!Local_59.f_46)
	{
		func_94();
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[2], 105945964))
	{
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[0], 105945964))
	{
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[1], 105945964))
	{
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[5], Global_35, 1, 1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_598[5], false);
	}
	uLocal_653 = uLocal_653;
}

bool func_38()
{
	iLocal_776 = PED::GET_MOUNT(Global_35);
	if (!bLocal_681)
	{
		if (((((((__LIB_3__::func_550(&uLocal_598, &(Local_59.f_5), &iLocal_765, &uLocal_635, 0, 2, 1) || ((__LIB_3__::func_330(Global_35, iLocal_606, 0) && __LIB_2__::func_1(uLocal_598[1], 0, 1)) && iLocal_612 < 4)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_776, uLocal_598[0], 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_776, uLocal_598[1], 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_776, uLocal_598[2], 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, uLocal_598[0], 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, uLocal_598[1], 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, uLocal_598[2], 1, 1))
		{
			if ((((iLocal_765 != 131072 || iLocal_765 != 262144) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, uLocal_598[0], 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, uLocal_598[1], 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Global_35, uLocal_598[2], 1, 1))
			{
				bLocal_660 = true;
				bLocal_661 = true;
				return true;
			}
		}
	}
	if (iLocal_612 >= 4)
	{
		if (__LIB_3__::func_550(&uLocal_598, &(Local_59.f_5), &iLocal_765, &uLocal_635, 0, 1, 1))
		{
			bLocal_660 = true;
			bLocal_661 = true;
			__LIB_0__::func_11();
			return true;
		}
		if (func_97())
		{
			bLocal_660 = true;
			return true;
		}
	}
	if (((__LIB_0__::func_394(Global_35, uLocal_598[5], 0) || __LIB_0__::func_394(Global_35, uLocal_598[6], 0)) || __LIB_1__::func_348(Global_35, uLocal_598[1]) < 1f) || __LIB_1__::func_348(Global_35, uLocal_598[0]) < 1f)
	{
		bLocal_660 = true;
		return true;
	}
	if (!bLocal_709)
	{
		if (__LIB_2__::func_726(uLocal_598[1], &(Local_59.f_5)) || __LIB_2__::func_726(uLocal_598[0], &(Local_59.f_5)))
		{
			bLocal_709 = true;
		}
	}
	if (WEAPON::_IS_WEAPON_BOW(__LIB_0__::func_399(Global_35, 1, 0, 0)))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[1], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[0], Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[2], Global_35, 1, 1))
		{
			bLocal_660 = true;
			return true;
		}
	}
	if ((iLocal_487 == 5 && bLocal_721) && !__LIB_2__::func_136(Global_35, 0))
	{
		__LIB_0__::func_11();
		return true;
	}
	return false;
}

bool func_39()
{
	func_103();
	switch (iLocal_612)
	{
		case 0:
			iLocal_1041 = __LIB_2__::func_340(1, 0, 0);
			func_50(1);
			if (func_105())
			{
				func_106(0);
				iLocal_623 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING_NEW"), __LIB_3__::func_179(&Local_59), 0f, 20f, -1f, -1f, -1f, -1, -1);
				if (iLocal_487 == 0 || iLocal_487 == 5)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_606, 2);
				}
				__LIB_2__::func_411(&(Local_854[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_854[1 /*17*/]), 0, 0);
				iLocal_612 = 1;
			}
			break;
		case 1:
			if (__LIB_3__::func_452(&Local_59, 1f, 60f, 55f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "BASE_BOOL", true, false);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "BASE_BOOL", true, false);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, true);
				if (iLocal_487 == 0)
				{
					__LIB_3__::func_461(Local_59.f_3, 0, 1);
				}
				else if (iLocal_487 == 5)
				{
					__LIB_3__::func_461(Local_59.f_3, 1, 2);
				}
				else if (iLocal_487 == 3)
				{
					__LIB_3__::func_461(Local_59.f_3, 2, 3);
					AITRANSPORT::_0x8886D83A430537FD(uLocal_598[2], 0);
				}
				iLocal_612 = 2;
			}
			else
			{
				func_110();
			}
			break;
		case 2:
			if (func_111())
			{
				iLocal_612 = 4;
			}
			break;
		case 5:
			if (!bLocal_662)
			{
				if (iLocal_487 != 3)
				{
					switch (iLocal_644)
					{
						case 0:
							TASK::TASK_PLAY_ANIM(uLocal_598[2], Local_488[4 /*2*/], Local_488[4 /*2*/].f_1, 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
							iLocal_644++;
							break;
						case 1:
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_598[2], Local_488[4 /*2*/], Local_488[4 /*2*/].f_1, 1) || ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_598[2], Local_488[4 /*2*/], Local_488[4 /*2*/].f_1) >= 0.98f)
							{
								TASK::TASK_PLAY_ANIM(uLocal_598[2], Local_488[5 /*2*/], Local_488[5 /*2*/].f_1, 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
								bLocal_662 = true;
								iLocal_644++;
							}
							break;
					}
				}
			}
			if (func_112())
			{
				if (!PED::IS_PED_IN_COMBAT(uLocal_598[0], Global_35))
				{
					TASK::TASK_COMBAT_PED(uLocal_598[0], Global_35, 0, 0);
				}
				if (!PED::IS_PED_IN_COMBAT(uLocal_598[1], Global_35))
				{
					TASK::TASK_COMBAT_PED(uLocal_598[1], Global_35, 0, 0);
				}
				if ((__LIB_2__::func_1(uLocal_598[2], 0, 1) && !__LIB_2__::func_1(uLocal_598[0], 0, 1)) && !__LIB_2__::func_1(uLocal_598[1], 0, 1))
				{
					func_113();
					func_106(1);
					iLocal_612 = 3;
				}
				if ((!__LIB_2__::func_1(uLocal_598[2], 0, 1) && !__LIB_2__::func_1(uLocal_598[0], 0, 1)) && !__LIB_2__::func_1(uLocal_598[1], 0, 1))
				{
					func_113();
					func_106(1);
					iLocal_612 = 6;
				}
			}
			break;
		case 3:
			if (func_114())
			{
				if (!Local_59.f_44)
				{
					Local_59.f_44 = 1;
				}
				iLocal_612 = 6;
			}
			break;
		case 4:
			if (!Local_59.f_46 && !bLocal_678)
			{
				if (func_115())
				{
					iLocal_612 = 6;
				}
			}
			if (bLocal_678)
			{
				if (func_116())
				{
					iLocal_612 = 6;
				}
			}
			break;
		case 6:
			if (((!__LIB_2__::func_1(uLocal_598[0], 0, 1) && !__LIB_2__::func_1(uLocal_598[0], 0, 1)) || __LIB_0__::func_665(uLocal_598[0], Global_35, 1, 1) > 100f) || __LIB_0__::func_665(uLocal_598[1], Global_35, 1, 1) > 100f)
			{
				if ((__LIB_0__::func_94(Global_35, Local_59.f_51, 1) > 100f && !__LIB_2__::func_1(uLocal_598[2], 0, 1)) || __LIB_0__::func_94(Global_35, Local_59.f_51, 1) > 200f)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_50(bool bParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 1)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 1), "DRAFT_HARNESS_RR");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 1), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 0)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 0), "DRAFT_HARNESS_LR");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 0), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 5)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 5), "DRAFT_HARNESS_RF");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 5), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 4)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 4), "DRAFT_HARNESS_LF");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 4), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 2)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 2), "DRAFT_HARNESS_LM");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 2), 48, bParam0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 3)))
	{
		PED::SET_PED_NAME_DEBUG(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 3), "DRAFT_HARNESS_RM");
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 3), 48, bParam0);
	}
}

void func_59()
{
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		if (iLocal_487 == 0)
		{
			Local_253[0 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_03");
			Local_253[0 /*32*/] = 4;
			StringCopy(&(Local_253[0 /*32*/].f_23), "0361_G_M_M_UniDuster_03_WHITE_01", 64);
			Local_253[0 /*32*/].f_3 = 2061539371;
			Local_253[1 /*32*/].f_1 = joaat("G_M_M_UNIDUSTER_03");
			Local_253[1 /*32*/] = 4;
			StringCopy(&(Local_253[1 /*32*/].f_23), "0362_G_M_M_UniDuster_03_WHITE_02", 64);
			Local_253[1 /*32*/].f_3 = 1771140493;
			Local_253[4 /*32*/].f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[4 /*32*/] = 4;
			Local_253[4 /*32*/].f_3 = 1537379613;
			Local_253[2 /*32*/].f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[2 /*32*/] = 4;
			StringCopy(&(Local_253[2 /*32*/].f_23), "0595_A_M_M_Civ_White_AVOID_11", 64);
			Local_253[2 /*32*/].f_3 = 975618243;
			Local_253[3 /*32*/].f_1 = 0;
			Local_253[5 /*32*/].f_1 = __LIB_2__::func_185(0, 0, 1);
			Local_253[6 /*32*/].f_1 = __LIB_2__::func_185(0, 0, 1);
		}
		else if (iLocal_487 == 3)
		{
			Local_253[0 /*32*/].f_1 = joaat("G_M_M_UNIMOUNTAINMEN_01");
			Local_253[0 /*32*/] = 4;
			StringCopy(&(Local_253[0 /*32*/].f_23), "0257_G_M_M_UniMountainMen_02_WHITE_01", 64);
			Local_253[0 /*32*/].f_3 = 2024768285;
			Local_253[1 /*32*/].f_1 = joaat("G_M_M_UNIMOUNTAINMEN_01");
			Local_253[1 /*32*/] = 4;
			StringCopy(&(Local_253[1 /*32*/].f_23), "0255_G_M_M_UniMountainMen_01_WHITE_01", 64);
			Local_253[1 /*32*/].f_3 = -1963382864;
			Local_253[4 /*32*/].f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[4 /*32*/] = 4;
			Local_253[4 /*32*/].f_3 = -1532821035;
			Local_253[2 /*32*/].f_1 = joaat("RE_COACHROBBERY_FEMALES_01");
			Local_253[2 /*32*/] = 4;
			StringCopy(&(Local_253[2 /*32*/].f_23), "CONCERNED_AUNT", 64);
			Local_253[2 /*32*/].f_3 = 1023712399;
			Local_253[3 /*32*/].f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[3 /*32*/] = 4;
			Local_253[3 /*32*/].f_3 = 1255880764;
			Local_253[5 /*32*/].f_1 = __LIB_2__::func_185(3, 0, 1);
			Local_253[6 /*32*/].f_1 = __LIB_2__::func_185(3, 0, 1);
		}
		else if (iLocal_487 == 5)
		{
			Local_253[0 /*32*/].f_1 = joaat("G_M_M_UNIBANDITOS_01");
			Local_253[0 /*32*/] = 4;
			StringCopy(&(Local_253[0 /*32*/].f_23), "1022_G_M_M_UniBanditos_01_HISPANIC_04", 64);
			Local_253[0 /*32*/].f_3 = 1937571152;
			Local_253[1 /*32*/].f_1 = joaat("G_M_M_UNIBANDITOS_01");
			Local_253[1 /*32*/] = 4;
			StringCopy(&(Local_253[1 /*32*/].f_23), "1021_G_M_M_UniBanditos_01_HISPANIC_03", 64);
			Local_253[1 /*32*/].f_3 = 70688453;
			Local_253[4 /*32*/].f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[4 /*32*/] = 4;
			Local_253[4 /*32*/].f_3 = 633654067;
			Local_253[2 /*32*/].f_1 = joaat("RE_COACHROBBERY_MALES_01");
			Local_253[2 /*32*/] = 4;
			StringCopy(&(Local_253[2 /*32*/].f_23), "1071_A_M_M_ArmTownfolk_01_WHITE_02", 64);
			Local_253[2 /*32*/].f_3 = 1963369243;
			Local_253[3 /*32*/].f_1 = 0;
			Local_253[5 /*32*/].f_1 = __LIB_2__::func_185(5, 0, 1);
			Local_253[6 /*32*/].f_1 = __LIB_2__::func_185(5, 0, 1);
		}
	}
}

void func_61()
{
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			Local_488[0 /*2*/] = "script_re@coach_robbery@odriscoll";
			Local_488[0 /*2*/].f_1 = "thanks_vic";
			__LIB_3__::func_318(Local_488[0 /*2*/], &uLocal_541);
			Local_488[3 /*2*/] = "script_re@coach_robbery@odriscoll";
			Local_488[3 /*2*/].f_1 = "trans_to_knee_vic";
			__LIB_3__::func_318(Local_488[3 /*2*/], &uLocal_541);
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			Local_488[0 /*2*/] = "script_re@coach_robbery@odriscoll";
			Local_488[0 /*2*/].f_1 = "thanks_vic";
			__LIB_3__::func_318(Local_488[0 /*2*/], &uLocal_541);
			Local_488[1 /*2*/] = "script_re@coach_robbery@odriscoll";
			Local_488[1 /*2*/].f_1 = "action_05_wagon";
			__LIB_3__::func_318(Local_488[1 /*2*/], &uLocal_541);
			Local_488[3 /*2*/] = "script_re@coach_robbery@odriscoll";
			Local_488[3 /*2*/].f_1 = "trans_to_sit_vic";
			__LIB_3__::func_318(Local_488[3 /*2*/], &uLocal_541);
			Local_488[4 /*2*/] = "script_re@coach_robbery@odriscoll";
			Local_488[4 /*2*/].f_1 = "breakout_01_vic";
			__LIB_3__::func_318(Local_488[4 /*2*/], &uLocal_541);
			Local_488[5 /*2*/] = "script_re@coach_robbery@odriscoll";
			Local_488[5 /*2*/].f_1 = "ground_vic";
			__LIB_3__::func_318(Local_488[5 /*2*/], &uLocal_541);
		}
	}
}

void func_62()
{
	__LIB_3__::func_445(&Local_253);
}

void func_63()
{
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			Local_479.f_4 = "script@beat@wilderness@CoachRobbery@skinner_pt01";
			Local_479.f_5 = "script@beat@wilderness@CoachRobbery@skinner_pt02";
			Local_479.f_6 = "script@beat@wilderness@CoachRobbery@skinner_pt01";
			Local_479.f_7 = "script@beat@wilderness@CoachRobbery@skinner_pt01";
			sLocal_25[11] = "PBL_BASE";
			sLocal_25[18] = "PBL_ACTION_01";
			sLocal_25[16] = "PBL_BASE_VAR";
			sLocal_25[17] = "PBL_ACTION_02";
			sLocal_25[0] = "PBL_BRKOUT_FEM";
			sLocal_25[1] = "PBL_BRKOUT_STG01_F";
			sLocal_25[2] = "PBL_BRKOUT_STG01_R";
			sLocal_25[3] = "PBL_BRKOUT_STG01_L";
			sLocal_25[4] = "PBL_BRKOUT_STG02_F";
			sLocal_25[5] = "PBL_BRKOUT_STG02_R";
			sLocal_25[6] = "PBL_BRKOUT_STG02_L";
			sLocal_25[7] = "PBL_BRKOUT_STG03_F";
			sLocal_25[8] = "PBL_BRKOUT_STG03_B";
			sLocal_25[9] = "PBL_BRKOUT_STG03_R";
			sLocal_25[10] = "PBL_BRKOUT_STG03_L";
			sLocal_25[12] = "PBL_BRKOUT_03_F";
			sLocal_25[13] = "PBL_BRKOUT_03_B";
			sLocal_25[14] = "PBL_BRKOUT_03_R";
			sLocal_25[15] = "PBL_BRKOUT_03_L";
			Local_479 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_4, 64, sLocal_25[18], false, true);
			Local_479.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_5, 64, sLocal_25[16], false, true);
			Local_479.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_6, 64, sLocal_25[0], false, true);
			Local_479.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_7, 64, sLocal_25[17], false, true);
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			Local_479.f_4 = "script@beat@wilderness@CoachRobbery@odriscoll_pt01";
			Local_479.f_5 = "script@beat@wilderness@CoachRobbery@odriscoll_pt02";
			Local_479.f_6 = "script@beat@wilderness@CoachRobbery@odriscoll_pt01";
			sLocal_25[18] = "PBL_ACTION_01";
			sLocal_25[17] = "PBL_ACTION_02";
			sLocal_25[19] = "PBL_ACTION_03";
			sLocal_25[20] = "PBL_ACTION_04";
			sLocal_25[21] = "PBL_ACTION_05";
			sLocal_25[22] = "PBL_ACTION_06";
			sLocal_25[23] = "PBL_ACTION_EXIT";
			sLocal_25[24] = "PBL_BREAKOUT_01";
			sLocal_25[25] = "PBL_BREAKOUT_02";
			sLocal_25[27] = "PBL_CALLOUT_01_F";
			sLocal_25[26] = "PBL_CALLOUT_01_R";
			sLocal_25[28] = "PBL_CALLOUT_01_L";
			sLocal_25[30] = "PBL_CALLOUT_02_F";
			sLocal_25[29] = "PBL_CALLOUT_02_R";
			sLocal_25[31] = "PBL_CALLOUT_02_L";
			sLocal_25[32] = "PBL_VIC";
			Local_479 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_4, 64, sLocal_25[18], false, true);
			Local_479.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_5, 64, sLocal_25[18], false, true);
			Local_479.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_479.f_6, 64, sLocal_25[32], false, true);
		}
	}
}

bool func_67()
{
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			if (((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479.f_1, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479.f_2, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479.f_3, true, false))
			{
				if (((!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_479, true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_479.f_1, true)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_479.f_2, true)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_479.f_3, true))
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_479);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_1);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_2);
					ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_3);
				}
			}
			else
			{
				return true;
			}
			ANIMSCENE::LOAD_ANIM_SCENE(Local_479);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_1);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_2);
			ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_3);
			if (((ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479, true, false) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479.f_1, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479.f_2, true, false)) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479.f_3, true, false))
			{
				return true;
			}
		}
		else if ((!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479.f_1, true, false)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_479.f_2, true, false))
		{
			if ((!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_479, true) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_479.f_1, true)) && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_479.f_2, true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_479);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_1);
				ANIMSCENE::LOAD_ANIM_SCENE(Local_479.f_2);
			}
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_68()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			iVar4 = 0;
			while (iVar4 <= 11)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[iVar4]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479, sLocal_25[iVar4]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[iVar4]);
					}
					bVar0 = false;
				}
				iVar4++;
			}
			iVar4 = 11;
			while (iVar4 <= 17)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[iVar4]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_1, sLocal_25[iVar4]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[iVar4]);
					}
					bVar1 = false;
				}
				iVar4++;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_2, sLocal_25[4]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_2, sLocal_25[4]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_2, sLocal_25[4]);
				}
				bVar2 = false;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_3, sLocal_25[17]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_3, sLocal_25[17]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_3, sLocal_25[17]);
				}
				bVar3 = false;
			}
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			iVar4 = 17;
			while (iVar4 <= 32)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[iVar4]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479, sLocal_25[iVar4]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[iVar4]);
					}
					bVar0 = false;
				}
				iVar4++;
			}
			iVar4 = 17;
			while (iVar4 <= 31)
			{
				if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[iVar4]))
				{
					if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_1, sLocal_25[iVar4]))
					{
						ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[iVar4]);
					}
					bVar1 = false;
				}
				iVar4++;
			}
			if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_2, sLocal_25[32]))
			{
				if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_479.f_2, sLocal_25[32]))
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_2, sLocal_25[32]);
				}
				bVar2 = false;
			}
		}
	}
	if (iLocal_487 == 3)
	{
		return (!bVar0 && !bVar1);
	}
	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		return (((!bVar0 && !bVar1) && !bVar2) && !bVar3);
	}
	return false;
}

char* func_77(int iParam0)
{
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		if (iLocal_487 == 0)
		{
			switch (iParam0)
			{
				case 0:
					return "RE_RC_ODR_V1_OPN_A";
				case 1:
					return "RE_RC_ODR_V1_OPN_B";
				case 3:
					return "RE_RC_ODR_V1_ACTION_1";
				case 4:
					return "RE_RC_ODR_V1_ACTION_2";
				case 5:
					return "RE_RC_ODR_V1_ACTION_3";
				case 6:
					return "RE_RC_ODR_V1_ACTION_4";
				case 7:
					return "RE_RC_ODR_V1_ACTION_5";
				case 8:
					return "RE_RC_ODR_V1_ACTION_6";
				case 9:
					return "RE_RC_ODR_V1_ACTION_7";
				case 10:
					return "RE_RC_ODR_V1_ACTION_8";
				case 11:
					return "RE_RC_ODR_V1_ACTION_9";
				case 12:
					return "RE_RC_ODR_V1_ACTION_10";
				case 13:
					return "RE_RC_ODR_V1_ACTION_11";
				case 14:
					return "RE_RC_ODR_V1_CALLOUT_1";
				case 15:
					return "RE_RC_ODR_V1_CALLOUT_2";
				case 16:
					return "RE_RC_ODR_V1_CALLOUT_3";
				case 17:
					return "RE_RC_ODR_V1_AGGRO_FEUD_B";
				case 18:
					return "RE_RC_ODR_V1_AGGRO_FEUD_A";
				case 19:
					return "RE_RC_ODR_V1_AGGRO_3";
				case 20:
					return "RE_RC_ODR_V1_AGGRO_2";
				case 21:
					return "RE_RC_ODR_V1_GEN_AGGRO";
				case 22:
					return "RE_RC_ODR_V1_AGGRO_5";
				case 23:
					return "GENERIC_SHOCKED_HIGH";
				case 24:
					return "RE_RC_ODR_V1_ILO_AGGRO";
				case 25:
					return "RE_RC_ODR_V1_THANKS_1";
				case 26:
					return "RE_RC_ODR_V1_THANKS_2";
				case 27:
					return "RE_RC_ODR_V1_THANKS_3";
				case 28:
					return "RE_RC_ODR_V1_THANKS_3_ALT";
				case 29:
					return "RE_RC_ODR_V1_THANKS_4";
				case 33:
					return "RE_RC_ODR_V1_THANKS_5";
				case 30:
					return "RE_RC_ODR_V1_THANKS_2B";
				case 31:
					return "RE_RC_ODR_V1_THANKS_OPEN";
				case 32:
					return "RE_RC_ODR_V1_THANKS_OPEN_B";
				case 34:
					return "RE_RC_ODR_V1_ILO_A";
				case 35:
					return "RE_RC_ODR_V1_ILO_A_ALT";
				case 36:
					return "RE_RC_ODR_V1_ILO_B";
				case 37:
					return "RE_RC_ODR_V1_ILO_C";
				case 38:
					return "RE_RC_ODR_V1_ILO_D";
				case 39:
					return "RE_RC_ODR_V1_ILO_E";
				case 40:
					return "RE_RC_ODR_V1_THANKS_RESP_FINAL_HIGH";
				case 41:
					return "RE_RC_ODR_V1_THANKS_RESP_FINAL_LOW";
			}
		}
		else if (iLocal_487 == 3)
		{
			switch (iParam0)
			{
				case 0:
					return "RE_RC_SVG_V1_OPN_A";
				case 1:
					return "RE_RC_SVG_V1_OPN_B";
				case 3:
					return "RE_RC_SVG_V1_ACTION_1";
				case 4:
					return "RE_RC_SVG_V1_ACTION_2";
				case 5:
					return "RE_RC_SVG_V1_ACTION_3";
				case 6:
					return "RE_RC_SVG_V1_ACTION_4";
				case 14:
					return "RE_RC_SVG_V1_WRN_A";
				case 15:
					return "RE_RC_SVG_V1_WRN_B";
				case 17:
					return "RE_RC_SVG_V1_FACE_BREAKOUT";
				case 18:
					return "RE_RC_SVG_V1_OPN_AGGRO";
				case 19:
					return "RE_RC_SVG_V1_AGGRO_4";
				case 21:
					return "RE_RC_SVG_V1_AGGRO";
				case 20:
					return "RE_RC_SVG_V1_POST_B";
				case 23:
					return "GENERIC_SHOCKED_HIGH";
				case 33:
					return "RE_RC_SVG_V1_AGGRO_5";
				case 24:
					return "RE_RC_SVG_V1_THANK_NEG_RESP";
				case 25:
					return "RE_RC_SVG_V1_THANK_1";
				case 26:
					return "RE_RC_SVG_V1_THANK_2";
				case 27:
					return "RE_RC_SVG_V1_THANK_3";
				case 29:
					return "RE_RC_SVG_V1_THANK_4";
				case 31:
					return "RE_RC_SVG_V1_THANK_5";
				case 34:
					return "RE_RC_SVG_V1_ILO_A";
				case 35:
					return "RE_RC_SVG_V1_ILO_A_ALT";
				case 36:
					return "RE_RC_SVG_V1_ILO_B";
				case 39:
					return "RE_RC_SVG_V1_ILO_C";
				case 40:
					return "RE_RC_ODR_V1_THANKS_RESP_FINAL_HIGH";
				case 41:
					return "RE_RC_ODR_V1_THANKS_RESP_FINAL_LOW";
			}
		}
		else if (iLocal_487 == 5)
		{
			switch (iParam0)
			{
				case 0:
					return "RE_RC_ODR_V1_OPN_A";
				case 1:
					return "RE_RC_ODR_V1_OPN_B";
				case 3:
					return "RE_RC_BND_V1_ACTION_1";
				case 4:
					return "RE_RC_BND_V1_ACTION_2";
				case 5:
					return "RE_RC_BND_V1_ACTION_3";
				case 6:
					return "RE_RC_BND_V1_ACTION_4";
				case 7:
					return "RE_RC_BND_V1_ACTION_5";
				case 8:
					return "RE_RC_BND_V1_ACTION_6";
				case 9:
					return "RE_RC_BND_V1_ACTION_7";
				case 10:
					return "RE_RC_BND_V1_ACTION_8";
				case 11:
					return "RE_RC_BND_V1_ACTION_9";
				case 12:
					return "RE_RC_BND_V1_ACTION_10";
				case 13:
					return "RE_RC_BND_V1_ACTION_11";
				case 14:
					return "RE_RC_BND_V1_CALLOUT_1";
				case 15:
					return "RE_RC_BND_V1_CALLOUT_2";
				case 16:
					return "RE_RC_BND_V1_CALLOUT_3";
				case 17:
					return "RE_RC_BND_V1_AGGRO_4";
				case 18:
					return "GANG_INTERACT_CHAT_WARNING";
				case 19:
					return "RE_RC_BND_V1_AGGRO_3";
				case 24:
					return "RE_RC_BND_V1_AGGRO_2";
				case 21:
					return "RE_RC_BND_V1_AGGRO_4";
				case 22:
					return "RE_RC_BND_V1_AGGRO_5";
				case 23:
					return "GENERIC_SHOCKED_HIGH";
				case 25:
					return "RE_RC_BND_V1_THANKS_1";
				case 26:
					return "RE_RC_BND_V1_THANKS_2";
				case 27:
					return "RE_RC_BND_V1_THANKS_3";
				case 28:
					return "RE_RC_BND_V1_THANKS_3_ALT";
				case 29:
					return "RE_RC_BND_V1_THANKS_4";
				case 33:
					return "RE_RC_BND_V1_THANKS_5";
				case 30:
					return "RE_RC_ODR_V1_THANKS_OPEN_B";
				case 31:
					return "RE_RC_ODR_V1_THANKS_OPEN";
				case 32:
					return "RE_RC_ODR_V1_THANKS_OPEN_B";
				case 34:
					return "RE_RC_BND_V1_ILO_A";
				case 35:
					return "RE_RC_BND_V1_ILO_A_ALT";
				case 36:
					return "RE_RC_BND_V1_ILO_B";
				case 37:
					return "RE_RC_BND_V1_ILO_C";
				case 38:
					return "RE_RC_BND_V1_ILO_D";
				case 39:
					return "RE_RC_BND_V1_ILO_E";
				case 40:
					return "RE_RC_BND_V1_THANKS_RESP_FINAL_HIGH";
				case 41:
					return "RE_RC_BND_V1_THANKS_RESP_FINAL_LOW";
			}
		}
	}
	return "RERC_ODR_V1_END_A";
}

void func_81()
{
	iLocal_606 = VEHICLE::CREATE_VEHICLE(__LIB_4__::func_379(), vLocal_15, fLocal_24, true, true, false, false);
	ENTITY::_0x9587913B9E772D29(iLocal_606, 0);
	__LIB_2__::func_19(iLocal_606);
}

void func_90()
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_479, ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) + Vector(0f, 0f, 0f), 0f, 0f, fLocal_24, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_479.f_1, ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) + Vector(0f, 0f, 0f), 0f, 0f, fLocal_24, 2);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_479.f_2, ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) + Vector(0f, 0f, 0f), 0f, 0f, fLocal_24, 2);
	if (iLocal_487 == 3)
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_479.f_3, ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) + Vector(0f, 0f, 0f), 0f, 0f, 0f, 2);
	}
}

void func_94()
{
	if (!bLocal_703)
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479, false))
		{
			if (!bLocal_691)
			{
				if (fLocal_649 > 0.556866f)
				{
					VEHICLE::_0x9D12796EF4BF9EA9(iLocal_606);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_606, 5, false, false);
					bLocal_700 = true;
					bLocal_691 = true;
				}
			}
		}
	}
	else if (!bLocal_691)
	{
		VEHICLE::_0x9D12796EF4BF9EA9(iLocal_606);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_606, 5, false, false);
		bLocal_700 = true;
		bLocal_691 = true;
	}
}

bool func_97()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		if (fLocal_648 > 0.7f && fLocal_648 < 0.73f)
		{
			return false;
		}
	}
	if (func_200())
	{
		bVar1 = (__LIB_0__::func_94(uLocal_598[0], Global_36, 1) < 20f || __LIB_0__::func_94(uLocal_598[1], Global_36, 1) < 20f);
	}
	else
	{
		bVar0 = (__LIB_0__::func_94(uLocal_598[0], Global_36, 1) < 20f || __LIB_0__::func_94(uLocal_598[1], Global_36, 1) < 20f);
	}
	if (bVar0 || bVar1)
	{
	}
	if (!bLocal_656)
	{
		if (__LIB_0__::func_94(uLocal_598[0], Global_36, 1) < 15f)
		{
			bLocal_656 = true;
			__LIB_2__::func_613(&(Local_59.f_5), 1);
		}
	}
	else if (__LIB_0__::func_94(uLocal_598[0], Global_36, 1) >= 15f)
	{
		__LIB_2__::func_613(&(Local_59.f_5), 0);
	}
	iVar2 = 0;
	while (iVar2 <= 2)
	{
		if (__LIB_3__::func_549(uLocal_598[iVar2], &(Local_59.f_5), &iLocal_765, 0) && __LIB_0__::func_665(uLocal_598[0], Global_35, 1, 1) < 15f)
		{
			return true;
		}
		iVar2++;
	}
	if (bLocal_693)
	{
		return true;
	}
	return false;
}

void func_103()
{
	func_206();
	func_207();
	func_208();
	func_209();
	if (bLocal_700)
	{
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_606, false))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479.f_1, false))
		{
			func_113();
		}
		func_50(0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, false);
		__LIB_10__::func_284(&iLocal_606);
	}
	if (!bLocal_678)
	{
		if (func_210())
		{
			__LIB_1__::func_727(uLocal_598[2], 1);
			bLocal_678 = true;
			iLocal_612 = 4;
		}
	}
	if (iLocal_487 == 3)
	{
		func_212();
		if (func_213())
		{
		}
	}
	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		func_214();
	}
	if (func_215())
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, false);
		__LIB_10__::func_284(&iLocal_606);
	}
	if (!Local_59.f_46 && iLocal_612 != 5)
	{
		if (func_216())
		{
			if (!bLocal_662)
			{
				if (iLocal_487 != 3)
				{
					func_217();
				}
				else
				{
					bLocal_676 = true;
				}
			}
			__LIB_2__::func_461(0);
			iLocal_612 = 5;
		}
	}
	if (bLocal_710)
	{
		__LIB_2__::func_504(uLocal_598[1], 0);
	}
	if (!__LIB_2__::func_1(uLocal_598[2], 0, 1))
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
		{
			PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_774);
		}
	}
	func_220();
	if (bLocal_654)
	{
		__LIB_2__::func_411(&(Local_798[1 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_798[0 /*17*/]), 0, 0);
	}
}

bool func_105()
{
	func_221();
	if ((__LIB_0__::func_665(Global_35, uLocal_598[0], 1, 1) < IntToFloat(iLocal_633) || __LIB_2__::func_215(Global_35, uLocal_598[0], 1, 150f, 0)) || __LIB_2__::func_215(Global_35, uLocal_598[1], 1, 150f, 0))
	{
		if (!bLocal_668)
		{
			if (iLocal_487 == 0)
			{
				switch (iLocal_630)
				{
					case 0:
						AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", uLocal_598[0], "REFC_Sounds", false, 0, 0);
						__LIB_2__::func_315(1066055203, uLocal_598[0], 1);
						__LIB_1__::func_148(&uLocal_734);
						iLocal_630++;
						break;
					case 1:
						if (__LIB_0__::func_265(&uLocal_734) > 2f && __LIB_0__::func_665(Global_35, uLocal_598[0], 1, 1) < 130f)
						{
							__LIB_2__::func_303(uLocal_598[2], Global_35, "GUN_RUN", "", 150f, 2, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
							__LIB_1__::func_148(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 2:
						if (!__LIB_2__::func_136(uLocal_598[2], 0))
						{
							__LIB_1__::func_148(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 3:
						__LIB_2__::func_303(uLocal_598[2], Global_35, "PANIC_HELP", "", 150f, 2, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
						__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
						__LIB_1__::func_148(&uLocal_734);
						iLocal_630++;
						break;
					case 4:
						if (!__LIB_2__::func_136(uLocal_598[2], 0))
						{
							bLocal_668 = true;
							return true;
						}
						break;
				}
			}
			else if (iLocal_487 == 5)
			{
				switch (iLocal_630)
				{
					case 0:
						AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", uLocal_598[0], "REFC_Sounds", false, 0, 0);
						__LIB_2__::func_315(1066055203, uLocal_598[0], 1);
						__LIB_1__::func_148(&uLocal_734);
						iLocal_630++;
						break;
					case 1:
						if (__LIB_0__::func_265(&uLocal_734) > 2f && __LIB_0__::func_665(Global_35, uLocal_598[0], 1, 1) < 120f)
						{
							__LIB_2__::func_303(uLocal_598[2], Global_35, "PLEAD", "", 150f, 1, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
							__LIB_1__::func_148(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 2:
						if (!__LIB_2__::func_136(uLocal_598[2], 0))
						{
							__LIB_1__::func_148(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 3:
						__LIB_2__::func_303(uLocal_598[2], Global_35, "PANIC_HELP", "", 150f, 1, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
						__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
						__LIB_1__::func_148(&uLocal_734);
						iLocal_630++;
						break;
					case 4:
						if (!__LIB_2__::func_136(uLocal_598[2], 0))
						{
							bLocal_668 = true;
							return true;
						}
						break;
				}
			}
			else if (iLocal_487 == 3)
			{
				switch (iLocal_630)
				{
					case 0:
						AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", uLocal_598[0], "REFC_Sounds", false, 0, 0);
						__LIB_2__::func_315(1066055203, uLocal_598[0], 1);
						__LIB_1__::func_148(&uLocal_734);
						iLocal_630++;
						break;
					case 1:
						if (__LIB_0__::func_265(&uLocal_734) > 2f && __LIB_0__::func_665(Global_35, uLocal_598[0], 1, 1) < 130f)
						{
							__LIB_2__::func_303(uLocal_598[2], Global_35, "RE_RC_SVG_V1_OPN_IDLE_A", "", 150f, 0, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
							__LIB_1__::func_148(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 2:
						if (!__LIB_2__::func_136(uLocal_598[2], 0))
						{
							__LIB_1__::func_148(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 3:
						if (__LIB_0__::func_265(&uLocal_734) > 0.5f)
						{
							__LIB_2__::func_122(uLocal_598[2], "SCREAM_TERROR", 1744022339, 0, 1, 0, 0, 1);
							__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
							__LIB_1__::func_148(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 4:
						if (__LIB_0__::func_265(&uLocal_734) > 2f)
						{
							__LIB_2__::func_303(uLocal_598[2], Global_35, "GENERIC_FRIGHTENED_HIGH", "", 150f, 1, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
							__LIB_1__::func_148(&uLocal_734);
							iLocal_630++;
						}
						break;
					case 5:
						if (!__LIB_2__::func_136(uLocal_598[2], 0))
						{
							__LIB_2__::func_303(uLocal_598[2], Global_35, "GENERIC_FRIGHTENED_HIGH", "", 150f, 2, 0, 0, 2, 0, 0, 1808677283, 1, 0, 0);
							__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
							bLocal_668 = true;
							return true;
						}
						break;
				}
			}
		}
	}
	return false;
}

void func_106(bool bParam0)
{
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_606, bParam0, 3f);
}

void func_110()
{
	switch (iLocal_647)
	{
		case 0:
			if (__LIB_0__::func_265(&uLocal_734) > 6f)
			{
				if (iLocal_487 == 3)
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, "RE_RC_SVG_V1_OPN_IDLE_A", "", 200f, 0, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
					__LIB_1__::func_148(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 5)
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, "PLEAD", "", 200f, 2, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
					__LIB_1__::func_148(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 0)
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, "PANIC_HELP", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
					__LIB_1__::func_148(&uLocal_734);
					iLocal_647++;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_734) > 6f)
			{
				if (iLocal_487 == 3)
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, "PANIC_HELP", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
					__LIB_1__::func_148(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 5)
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, "PANIC_HELP", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
					__LIB_1__::func_148(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 0)
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, "GUN_BEG", "", 200f, 2, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
					__LIB_1__::func_148(&uLocal_734);
					iLocal_647++;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_734) > 6f)
			{
				if (iLocal_487 == 3)
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, "PANIC_HELP", "", 200f, 2, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
					__LIB_1__::func_148(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 5)
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, "GUN_RUN", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
					__LIB_1__::func_148(&uLocal_734);
					iLocal_647++;
				}
				else if (iLocal_487 == 0)
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, "PANIC_HELP", "", 200f, 1, 0, 0, 2, 0, 0, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(1891783641, uLocal_598[2], 1);
					__LIB_1__::func_148(&uLocal_734);
					iLocal_647++;
				}
			}
			break;
	}
}

bool func_111()
{
	if (!bLocal_718)
	{
		if (!bLocal_655)
		{
			if (func_237())
			{
				iLocal_612 = 4;
				return true;
			}
		}
	}
	return false;
}

bool func_112()
{
	switch (iLocal_627)
	{
		case 0:
			if (!Local_59.f_44)
			{
				Local_59.f_44 = 1;
			}
			PED::REGISTER_TARGET(uLocal_598[0], Global_35, 1);
			PED::REGISTER_HATED_TARGETS_AROUND_PED(uLocal_598[1], 100f);
			PED::REGISTER_TARGET(uLocal_598[0], Global_35, 1);
			PED::REGISTER_HATED_TARGETS_AROUND_PED(uLocal_598[1], 100f);
			if (iLocal_487 == 0 || iLocal_487 == 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_606))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_1, "wagon", iLocal_606);
				}
				bLocal_667 = true;
				__LIB_1__::func_148(&uLocal_731);
				if (func_238())
				{
					__LIB_1__::func_148(&uLocal_728);
					iLocal_627 = 1;
				}
			}
			else
			{
				bLocal_667 = true;
				switch (iLocal_619)
				{
					case 0:
						if (func_239())
						{
							__LIB_1__::func_148(&uLocal_728);
							iLocal_619++;
						}
						break;
					case 1:
						if (iLocal_487 == 3)
						{
							__LIB_0__::func_11();
							if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479.f_1, false) || !ENTITY::_0x0B7CB1300CBFE19C(uLocal_598[1], 1)) || fLocal_649 > 0.5f)
							{
								__LIB_4__::func_232(uLocal_598[0], 0, 0);
								__LIB_4__::func_232(uLocal_598[1], 0, 0);
								TASK::TASK_AIM_AT_ENTITY(uLocal_598[0], Global_35, -1, 0, 0);
								TASK::TASK_AIM_AT_ENTITY(uLocal_598[1], Global_35, -1, 0, 0);
								iLocal_619++;
							}
						}
						break;
					case 2:
						__LIB_1__::func_148(&uLocal_728);
						iLocal_627 = 1;
						break;
				}
			}
			break;
		case 1:
			if (bLocal_709)
			{
				if (iLocal_487 == 0 && !bLocal_711)
				{
					if (__LIB_2__::func_1(uLocal_598[0], 0, 1))
					{
						__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(23), "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_598[1], Global_35, func_77(23), "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (iLocal_487 != 3)
				{
					if (__LIB_2__::func_1(uLocal_598[1], 0, 1))
					{
						if (__LIB_2__::func_1(uLocal_598[1], 0, 1))
						{
							__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(17), "", 100f, -1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							bLocal_717 = true;
						}
						else
						{
							__LIB_2__::func_303(uLocal_598[1], Global_35, func_77(23), "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else
					{
						__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(23), "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (__LIB_2__::func_1(uLocal_598[0], 0, 1))
				{
					__LIB_2__::func_303(uLocal_598[0], Global_35, "RE_RC_SVG_V1_OPN_BREAKOUT", "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_728);
				iLocal_627++;
			}
			else
			{
				if (iLocal_487 != 3)
				{
					if (__LIB_2__::func_1(uLocal_598[0], 0, 1))
					{
						__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(23), "", 100f, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_598[1], Global_35, func_77(23), "", 100f, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (__LIB_2__::func_1(uLocal_598[0], 0, 1))
				{
					__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(23), "", 100f, 3, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(uLocal_598[1], Global_35, "GENERIC_ANGRY_REACTION", "", 100f, 1, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_148(&uLocal_728);
				iLocal_627++;
			}
			break;
		case 2:
			if (((!bLocal_717 && __LIB_0__::func_265(&uLocal_728) > 1f) || (bLocal_717 && !__LIB_2__::func_136(uLocal_598[0], 0))) || bLocal_661)
			{
				__LIB_0__::func_11();
				func_241();
				func_242();
				__LIB_2__::func_603(&(uLocal_598[0]), &iLocal_889, &Local_910, 1, 1);
				__LIB_2__::func_603(&(uLocal_598[1]), &iLocal_945, &Local_966, 1, 1);
				if (bLocal_669 && bLocal_670)
				{
					__LIB_1__::func_148(&uLocal_728);
					iLocal_627++;
				}
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_728) > 1f)
			{
				if (iLocal_487 == 3)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_598[0], 5, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_598[1], 5, true);
				}
				if (!PED::IS_PED_IN_COMBAT(uLocal_598[0], Global_35))
				{
					if (__LIB_0__::func_491(uLocal_598[0], -1073489615) || __LIB_0__::func_491(uLocal_598[0], -1207174364))
					{
						TASK::TASK_COMBAT_PED(uLocal_598[0], Global_35, 100663296, 0);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS(uLocal_598[0], -1f);
					}
				}
				if (!PED::IS_PED_IN_COMBAT(uLocal_598[1], Global_35))
				{
					if (__LIB_0__::func_491(uLocal_598[1], -1073489615) || __LIB_0__::func_491(uLocal_598[1], -1207174364))
					{
						TASK::TASK_COMBAT_PED(uLocal_598[1], Global_35, 100663296, 0);
					}
					else
					{
						TASK::TASK_COMBAT_HATED_TARGETS(uLocal_598[1], -1f);
					}
				}
				if (!__LIB_2__::func_136(uLocal_598[0], 0) && !__LIB_2__::func_136(uLocal_598[1], 0))
				{
					if (iLocal_487 == 3)
					{
						__LIB_2__::func_303(uLocal_598[1], Global_35, "FIGHT", "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else if (iLocal_487 == 0)
					{
						if (__LIB_2__::func_1(uLocal_598[1], 0, 1))
						{
							__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(21), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (iLocal_487 == 5)
					{
						__LIB_2__::func_303(uLocal_598[1], Global_35, func_77(17), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_148(&uLocal_728);
					iLocal_627++;
				}
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_728) > 5f)
			{
				if (iLocal_487 == 0)
				{
					__LIB_2__::func_303(uLocal_598[1], Global_35, func_77(21), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (iLocal_487 == 3)
				{
					if (__LIB_2__::func_1(uLocal_598[0], 0, 1))
					{
						if (__LIB_2__::func_1(uLocal_598[1], 0, 1))
						{
							__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(21), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(18), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (__LIB_2__::func_1(uLocal_598[1], 0, 1))
					{
						__LIB_2__::func_303(uLocal_598[1], Global_35, "FIGHT", "", 100f, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (iLocal_487 == 5)
				{
					__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(18), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_627++;
			}
			break;
		case 5:
			func_113();
			__LIB_1__::func_148(&uLocal_728);
			iLocal_627++;
			break;
		case 6:
			if (__LIB_0__::func_265(&uLocal_728) > 2f)
			{
				AUDIO::STOP_PED_SPEAKING(uLocal_598[0], true);
				AUDIO::STOP_PED_SPEAKING(uLocal_598[1], true);
				return true;
			}
			break;
	}
	return false;
}

void func_113()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_606))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479.f_1, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_1, "wagon", iLocal_606);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_606, false);
	}
}

bool func_114()
{
	int iVar0;
	if (bLocal_678)
	{
		return false;
	}
	if (iLocal_487 != 3)
	{
		if (iLocal_631 < 5)
		{
			PED::_0x2371C39D4F91C288(uLocal_598[2]);
		}
	}
	if (iLocal_631 < 6)
	{
		if (__LIB_2__::func_1(uLocal_598[2], 0, 1))
		{
			TASK::TASK_LOOK_AT_ENTITY(uLocal_598[2], Global_35, 0, 0, 51, 0);
		}
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_774);
	}
	if (bLocal_692)
	{
		if (iLocal_631 > 7 && iLocal_631 < 11)
		{
			if (__LIB_0__::func_491(uLocal_598[2], 1868526510))
			{
				if (!PED::_IS_MOUNT_SEAT_FREE(uLocal_598[5], -1))
				{
					bLocal_692 = false;
				}
			}
		}
	}
	if (!bLocal_695)
	{
		switch (iLocal_631)
		{
			case 0:
				PED::SET_PED_CONFIG_FLAG(uLocal_598[2], 317, true);
				__LIB_2__::func_411(&(Local_854[1 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_854[0 /*17*/]), 1, 0);
				__LIB_3__::func_552(uLocal_598[2]);
				__LIB_3__::func_686(uLocal_598[2], 4);
				PED::SET_PED_CONFIG_FLAG(uLocal_598[2], 336, true);
				__LIB_1__::func_148(&uLocal_737);
				iLocal_631++;
				break;
			case 1:
				if (__LIB_0__::func_265(&uLocal_737) > 1f)
				{
					if (iLocal_487 == 3)
					{
						if (!bLocal_704)
						{
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_2, "fem_idle_bool", true, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_2, "ground_bool", true, false);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "ground_bool", true, false);
							if (ANIMSCENE::_0x005E6F28DD7ED58D(Local_479.f_2, "VICTIM") || !ENTITY::_0x0B7CB1300CBFE19C(uLocal_598[2], 1))
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", uLocal_598[2]);
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_1, "VICTIM", uLocal_598[2]);
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "VICTIM", uLocal_598[2]);
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_3, "VICTIM", uLocal_598[2]);
								__LIB_1__::func_148(&uLocal_737);
								iLocal_631 = 3;
							}
						}
						else
						{
							PED::_0x16F798A05BB9E3B5(uLocal_598[2]);
							TASK::TASK_REACT(uLocal_598[2], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Shocked", 1f, 10f, 4);
							__LIB_1__::func_148(&uLocal_737);
							iLocal_631 = 5;
						}
					}
					else
					{
						TASK::TASK_PLAY_ANIM(uLocal_598[2], Local_488[3 /*2*/], Local_488[3 /*2*/].f_1, 1000f, -8f, -1, 2, 0f, false, 1, false, 0, false);
						__LIB_1__::func_148(&uLocal_737);
						iLocal_631++;
					}
				}
				break;
			case 2:
				if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_598[2], Local_488[3 /*2*/], Local_488[3 /*2*/].f_1) >= 0.99f || !ENTITY::_0x0B7CB1300CBFE19C(uLocal_598[2], 1))
				{
					bLocal_687 = true;
					__LIB_1__::func_148(&uLocal_737);
					iLocal_631++;
				}
				break;
			case 3:
				bLocal_687 = true;
				if (iLocal_487 == 3)
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_598[2], iLocal_606, false))
					{
						if (!__LIB_0__::func_491(uLocal_598[2], joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
						{
							TASK::TASK_LEAVE_VEHICLE(uLocal_598[2], iLocal_606, 196608, 0);
						}
					}
				}
				__LIB_1__::func_148(&uLocal_737);
				iLocal_631++;
				break;
			case 4:
				if (__LIB_0__::func_265(&uLocal_737) > 2f)
				{
					if (__LIB_0__::func_665(uLocal_598[2], Global_35, 1, 1) < 25f)
					{
						if (__LIB_0__::func_665(uLocal_598[2], Global_35, 1, 1) < 25f || __LIB_0__::func_265(&uLocal_737) > 15f)
						{
							__LIB_1__::func_148(&uLocal_737);
							if (iLocal_487 != 3)
							{
								PED::_0xEAA8242C8479C27D(uLocal_598[2], "REAR");
							}
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_598[2], Global_35, -1, -1f, -1f, -1f);
							iLocal_631++;
						}
					}
					else if (__LIB_0__::func_665(uLocal_598[2], Global_35, 1, 1) < 50f)
					{
						if (iLocal_487 != 3)
						{
							PED::_0xEAA8242C8479C27D(uLocal_598[2], "REAR");
						}
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_598[2], Global_35, -1, -1f, -1f, -1f);
						iLocal_631++;
					}
					else if (__LIB_0__::func_665(uLocal_598[2], Global_35, 1, 1) > 50f)
					{
						iLocal_631 = 10;
					}
				}
				break;
			case 5:
				if (__LIB_0__::func_265(&uLocal_737) > 3f)
				{
					__LIB_3__::func_158(&(Local_798[0 /*17*/]), 0);
					__LIB_3__::func_158(&(Local_798[1 /*17*/]), 0);
					__LIB_2__::func_411(&(Local_798[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_798[1 /*17*/]), 1, 0);
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(uLocal_598[2], Local_488[0 /*2*/], Local_488[0 /*2*/].f_1, Global_35, -1, 1000f, -1.5f, 67108880, 0f, false, false, -1f, "", 65536, -1f);
					bLocal_713 = true;
					__LIB_2__::func_480(&Local_854, 1, 0, 1, 0);
					__LIB_1__::func_148(&uLocal_737);
					iLocal_631++;
				}
				break;
			case 6:
				if (__LIB_0__::func_265(&uLocal_737) > 10f || !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_598[2], Local_488[0 /*2*/], Local_488[0 /*2*/].f_1, 1))
				{
					__LIB_1__::func_148(&uLocal_737);
					iLocal_631++;
				}
				break;
			case 7:
				if (__LIB_0__::func_265(&uLocal_737) > 1f)
				{
					if (__LIB_2__::func_1(uLocal_598[5], 0, 1))
					{
						PED::_0x2EB75FB86C41F026(uLocal_598[5], 3, 0);
					}
					if ((__LIB_2__::func_1(uLocal_598[5], 0, 1) && PED::_IS_MOUNT_SEAT_FREE(uLocal_598[5], -1)) && __LIB_0__::func_665(uLocal_598[5], uLocal_598[2], 1, 1) < 50f)
					{
						TASK::TASK_MOUNT_ANIMAL(uLocal_598[2], uLocal_598[5], 20000, -1, 1f, 1, 0, 0);
						bLocal_692 = true;
						iLocal_631++;
					}
					else if ((__LIB_2__::func_1(uLocal_598[5], 0, 1) && PED::_IS_MOUNT_SEAT_FREE(uLocal_598[5], -1)) && __LIB_0__::func_665(uLocal_598[6], uLocal_598[2], 1, 1) < 50f)
					{
						TASK::TASK_MOUNT_ANIMAL(uLocal_598[2], uLocal_598[6], -1, -1, 1f, 1, 0, 0);
						bLocal_692 = true;
						iLocal_631++;
					}
					else
					{
						iLocal_631++;
					}
				}
				break;
			case 8:
				if (iLocal_487 != 3)
				{
					if (!__LIB_2__::func_136(Global_35, 0) && !__LIB_2__::func_136(uLocal_598[2], 0))
					{
						if (iLocal_487 == 0)
						{
							if (bLocal_700)
							{
								__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(26), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(31), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
						__LIB_1__::func_148(&uLocal_737);
						iLocal_631++;
					}
				}
				else
				{
					iLocal_631 = 10;
				}
				break;
			case 9:
				if ((__LIB_0__::func_265(&uLocal_737) > 5f || __LIB_0__::func_491(uLocal_598[2], -875674219)) || iLocal_487 == 5)
				{
					if (!__LIB_2__::func_136(uLocal_598[2], 0))
					{
						if (bLocal_700)
						{
							__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(30), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(32), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_631++;
					}
				}
				break;
			case 10:
				if (bLocal_692)
				{
					if (PED::IS_PED_ON_MOUNT(uLocal_598[2]))
					{
						PED::_0x606D529DADA3C940(uLocal_598[2], 1);
						TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_598[2], 1.5f, 0, 0);
						iLocal_631++;
					}
				}
				else
				{
					PED::_0x606D529DADA3C940(uLocal_598[2], 1);
					TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_598[2], 1.5f, 0, 0);
					PED::SET_PED_KEEP_TASK(uLocal_598[2], true);
					iLocal_631++;
				}
				break;
			case 11:
				iLocal_631++;
				break;
			case 12:
				if (!__LIB_2__::func_136(uLocal_598[2], 0))
				{
					if (!__LIB_2__::func_136(Global_35, 0))
					{
						if (iLocal_487 != 3 && !bLocal_712)
						{
							if (__LIB_3__::func_582())
							{
								__LIB_2__::func_303(Global_35, Global_35, func_77(40), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(Global_35, Global_35, func_77(41), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					iLocal_631++;
				}
				break;
			case 13:
				if ((__LIB_0__::func_665(Global_35, uLocal_598[2], 1, 1) > 15f && !__LIB_2__::func_136(uLocal_598[2], 0)) || !__LIB_2__::func_1(uLocal_598[2], 0, 1))
				{
					return true;
				}
				break;
		}
	}
	else
	{
		switch (iLocal_640)
		{
			case 0:
				__LIB_3__::func_552(uLocal_598[2]);
				__LIB_3__::func_686(uLocal_598[2], 4);
				if ((!__LIB_2__::func_136(Global_35, 0) && !__LIB_2__::func_136(uLocal_598[2], 0)) || !bLocal_696)
				{
					if (bLocal_696)
					{
						if (bLocal_700)
						{
							__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(26), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(31), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						iLocal_640++;
					}
					else
					{
						switch (iLocal_645)
						{
							case 0:
								TASK::TASK_REACT(uLocal_598[2], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Shocked", 2f, 10f, 4);
								__LIB_2__::func_504(uLocal_598[2], 0);
								__LIB_1__::func_148(&uLocal_758);
								iLocal_645++;
								break;
							case 1:
								if (__LIB_0__::func_265(&uLocal_758) > 1f && !__LIB_2__::func_136(Global_35, 0))
								{
									if (__LIB_2__::func_1(uLocal_598[5], 0, 1))
									{
										PED::_0x2EB75FB86C41F026(uLocal_598[5], 3, 0);
									}
									TASK::OPEN_SEQUENCE_TASK(&iVar0);
									TASK::TASK_MOUNT_ANIMAL(0, uLocal_598[5], -1, -1, 1.5f, 1, 0, 0);
									TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.5f, 0, 0);
									__LIB_1__::func_474(uLocal_598[2], &iVar0, 0, 0, 1, 1);
									__LIB_1__::func_148(&uLocal_758);
									iLocal_645++;
								}
								break;
							case 2:
								if (__LIB_0__::func_265(&uLocal_758) > 1f)
								{
									PED::_0xE737D5F14304A2EC(uLocal_598[2], PLAYER::GET_PLAYER_INDEX(), 120000);
									__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(24), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									__LIB_1__::func_148(&uLocal_758);
									iLocal_645++;
								}
								break;
							case 3:
								iLocal_640 = 3;
								break;
						}
					}
				}
				break;
			case 1:
				iLocal_631 = 7;
				break;
			case 2:
				if (!__LIB_2__::func_136(Global_35, 0) && !__LIB_2__::func_136(uLocal_598[2], 0))
				{
					if (bLocal_700)
					{
						__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(30), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(32), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				iLocal_640++;
				break;
			case 3:
				if (!__LIB_2__::func_136(uLocal_598[2], 0))
				{
					if (!__LIB_2__::func_136(Global_35, 0) && !bLocal_712)
					{
						if (iLocal_487 != 3)
						{
							if (__LIB_3__::func_582())
							{
								__LIB_2__::func_303(Global_35, Global_35, func_77(40), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(Global_35, Global_35, func_77(41), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
					}
					iLocal_640++;
				}
				break;
			case 4:
				if ((__LIB_0__::func_665(Global_35, uLocal_598[2], 1, 1) > 15f && !__LIB_2__::func_136(uLocal_598[2], 0)) || !__LIB_2__::func_1(uLocal_598[2], 0, 1))
				{
					return true;
				}
				break;
		}
	}
	if (!bLocal_675)
	{
		switch (iLocal_639)
		{
			case 0:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_598[2], Local_488[0 /*2*/], Local_488[0 /*2*/].f_1, 1))
				{
					iLocal_639++;
				}
				break;
			case 1:
				if (iLocal_487 == 0 || iLocal_487 == 5)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_598[2], Local_488[0 /*2*/], Local_488[0 /*2*/].f_1) >= 0.1f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_598[2]))
						{
							switch (iLocal_638)
							{
								case 0:
									if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_598[2], Local_488[0 /*2*/], Local_488[0 /*2*/].f_1) >= 0.7f)
									{
										__LIB_3__::func_465(13, 0, 0, "Saved Victim", uLocal_598[2], 0, 1065353216 /* Float: 1f */, 0);
										bLocal_689 = true;
										iLocal_638++;
									}
									break;
								case 1:
									iLocal_638++;
									break;
								case 2:
									bLocal_675 = true;
									break;
							}
						}
					}
				}
				else if (iLocal_487 == 3)
				{
					if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_598[2], Local_488[0 /*2*/], Local_488[0 /*2*/].f_1) >= 0.22f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_598[2]))
						{
							switch (iLocal_638)
							{
								case 0:
									if (!__LIB_2__::func_136(Global_35, 0))
									{
										bLocal_689 = true;
										__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(25), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
										iLocal_638++;
									}
									break;
								case 1:
									if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_598[2], Local_488[0 /*2*/], Local_488[0 /*2*/].f_1) >= 0.9f)
									{
										if (!__LIB_2__::func_136(Global_35, 0))
										{
											__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(26), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
											__LIB_3__::func_465(13, 0, 0, "Saved Victim", uLocal_598[2], 0, 1065353216 /* Float: 1f */, 0);
											iLocal_638++;
										}
									}
									break;
								case 2:
									bLocal_675 = true;
									break;
							}
						}
					}
				}
				break;
		}
	}
	return false;
}

bool func_115()
{
	switch (iLocal_626)
	{
		case 0:
			if (!PED::IS_PED_ON_MOUNT(uLocal_598[0]) && !PED::IS_PED_ON_MOUNT(uLocal_598[0]))
			{
				TASK::TASK_MOUNT_ANIMAL(uLocal_598[0], uLocal_598[5], -1, -1, 1f, 1, 0, 0);
				TASK::TASK_MOUNT_ANIMAL(uLocal_598[1], uLocal_598[6], -1, -1, 1f, 1, 0, 0);
				iLocal_626++;
			}
			else
			{
				iLocal_626++;
			}
			break;
		case 1:
			iLocal_775 = PED::CREATE_GROUP(0);
			PED::SET_PED_AS_GROUP_LEADER(uLocal_598[0], iLocal_775, false);
			PED::SET_PED_AS_GROUP_MEMBER(uLocal_598[1], iLocal_775);
			PED::_0xA8A95CECB1906EA2(iLocal_775, 0);
			PED::SET_GROUP_FORMATION(iLocal_775, 10);
			TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_598[0], 1.75f, 0, 0);
			PED::SET_PED_KEEP_TASK(uLocal_598[0], true);
			__LIB_1__::func_148(&uLocal_722);
			iLocal_626++;
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_722) > 1f)
			{
				PED::SET_PED_KEEP_TASK(uLocal_598[0], true);
				iLocal_626++;
			}
			break;
		case 3:
			if (__LIB_0__::func_665(uLocal_598[0], Global_35, 1, 1) > 100f || __LIB_0__::func_665(uLocal_598[1], Global_35, 1, 1) > 100f)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_116()
{
	int iVar0;
	int iVar1;
	switch (iLocal_636)
	{
		case 0:
			PED::REMOVE_RELATIONSHIP_GROUP(iLocal_1002);
			__LIB_2__::func_461(0);
			LAW::_0x710448D44A64C213(1);
			LAW::_0xC805EB785824F712(1);
			PED::SET_PED_CONFIG_FLAG(uLocal_598[2], 146, true);
			func_113();
			PED::_0x58F7DB5BD8FA2288(uLocal_598[2]);
			PED::_0x24C82EF607105FAA(uLocal_598[2], joaat("AGGRESSIVE"));
			PED::_0xE737D5F14304A2EC(uLocal_598[2], PLAYER::GET_PLAYER_INDEX(), 120000);
			__LIB_2__::func_603(&(uLocal_598[2]), &iLocal_833, &Local_854, 1, 1);
			__LIB_2__::func_603(&(uLocal_598[2]), &iLocal_777, &Local_798, 1, 1);
			if (!Local_59.f_46)
			{
				Local_59.f_46 = 1;
			}
			iLocal_636++;
			break;
		case 1:
			PED::_0x2371C39D4F91C288(uLocal_598[2]);
			if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_598[2], Local_479.f_2) && iLocal_487 != 3)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_PLAY_ANIM(0, "script_re@coach_robbery@odriscoll", "trans_to_knee_vic", 1000f, -8f, -1, 0, 0f, false, 0, false, 0, false);
				PED::_0xEAA8242C8479C27D(uLocal_598[2], "REAR");
				TASK::_TASK_FLEE_FROM_PED(0, Global_35, vLocal_18, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
				__LIB_1__::func_474(uLocal_598[2], &iVar0, 0, 0, 1, 1);
				iLocal_636 = 3;
			}
			else
			{
				if (PED::_0xB086C8C0F5701D14(uLocal_598[2]))
				{
					PED::_0x16F798A05BB9E3B5(uLocal_598[2]);
				}
				iLocal_636++;
			}
			break;
		case 2:
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 1f, 0f, 4);
			TASK::_TASK_FLEE_FROM_PED(0, Global_35, vLocal_18, 200f, -1, 0, 1077936128 /* Float: 3f */, 0);
			__LIB_1__::func_474(uLocal_598[2], &iVar1, 0, 0, 1, 1);
			iLocal_636++;
			break;
		case 3:
			iLocal_636++;
			break;
		case 4:
			__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(19), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			iLocal_636++;
			break;
		case 5:
			if (!bLocal_719)
			{
				if (!bLocal_688)
				{
					__LIB_3__::func_465(3, 0, 0, 0, uLocal_598[2], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_3__::func_686(uLocal_598[2], 9);
					bLocal_719 = true;
				}
				else
				{
					__LIB_3__::func_465(4, 0, 0, 0, uLocal_598[2], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_3__::func_686(uLocal_598[2], 9);
					bLocal_719 = true;
				}
			}
			return true;
	}
	return false;
}

bool func_200()
{
	vector3 vVar0;
	vector3 vVar3;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_606) };
	return __LIB_0__::func_195(vVar0, vVar3, Global_36);
}

void func_206()
{
	if (iLocal_487 == 0 || (iLocal_487 == 5 && !bLocal_710))
	{
		if (__LIB_2__::func_1(uLocal_598[2], 0, 1))
		{
			if ((Local_59.f_48 && !Local_59.f_46) && !bLocal_655)
			{
				if (fLocal_648 >= 0.709652f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_598[2]) && !bLocal_705)
					{
						func_389();
						__LIB_3__::func_465(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
						bLocal_705 = true;
					}
				}
			}
		}
	}
}

void func_207()
{
	iLocal_621 = func_390(&(uLocal_598[0]), &iLocal_889, 30f, &Local_910, &(Local_59.f_192), 0f, 1, 0, 0, iLocal_1041, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	iLocal_622 = func_390(&(uLocal_598[1]), &iLocal_945, 30f, &Local_966, &(Local_59.f_192), 0f, 1, 0, 0, iLocal_1041, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (iLocal_487 != 3)
	{
		func_391();
	}
	else
	{
		func_392();
	}
}

void func_208()
{
	if (__LIB_2__::func_1(uLocal_598[0], 0, 1) || __LIB_2__::func_1(uLocal_598[1], 0, 1))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[0], 236822383) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[1], 236822383))
		{
			if (!bLocal_706)
			{
				bLocal_671 = true;
				bLocal_706 = true;
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[0], 2113601320) || ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[1], 2113601320))
		{
			if (!bLocal_707)
			{
				bLocal_672 = true;
				bLocal_707 = true;
			}
		}
		if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[0], 1622787238))
		{
			if (!bLocal_708)
			{
				bLocal_673 = true;
				bLocal_708 = true;
			}
		}
		if (iLocal_487 == 0 || iLocal_487 == 5)
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[0], 696572081))
			{
				bLocal_674 = true;
			}
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[2], 696572081))
		{
			bLocal_674 = true;
		}
	}
}

void func_209()
{
	if (!bLocal_686)
	{
		if (Local_59.f_46)
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_598[6], Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
			PED::_0x2EB75FB86C41F026(uLocal_598[5], 3, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_598[6], true);
			bLocal_686 = true;
		}
	}
	if (!bLocal_685)
	{
		if (!__LIB_2__::func_1(uLocal_598[0], 0, 1))
		{
			if (__LIB_2__::func_1(uLocal_598[5], 0, 1))
			{
				bLocal_685 = true;
			}
		}
	}
}

bool func_210()
{
	if (__LIB_3__::func_464(uLocal_598[2], 0, &(Local_59.f_5), &iLocal_765, 0, 0) || ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[5], Global_35, 1, 1) && !__LIB_2__::func_1(uLocal_598[0], 0, 1)) && !__LIB_2__::func_1(uLocal_598[1], 0, 1)))
	{
		if ((!bLocal_678 && !__LIB_2__::func_1(uLocal_598[0], 0, 1)) && !__LIB_2__::func_1(uLocal_598[1], 0, 1))
		{
			if (bLocal_687 && iLocal_631 > 1)
			{
				__LIB_2__::func_507(&(Local_59.f_5), 2000);
				if (((iLocal_765 == 2 || iLocal_765 == 4) || iLocal_765 == 8) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[5], Global_35, 1, 1))
				{
					if (iLocal_765 == 2)
					{
					}
					else if (iLocal_765 == 4)
					{
					}
					else if (iLocal_765 == 8)
					{
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[5], Global_35, 1, 1))
					{
					}
					if (!bLocal_719)
					{
						if (!bLocal_688 && !bLocal_689)
						{
							__LIB_3__::func_465(3, 0, 0, 0, uLocal_598[2], 0, 1065353216 /* Float: 1f */, 0);
							__LIB_3__::func_686(uLocal_598[2], 9);
							bLocal_719 = true;
						}
						else
						{
							__LIB_3__::func_465(4, 0, 0, 0, uLocal_598[2], 0, 1065353216 /* Float: 1f */, 0);
							__LIB_3__::func_686(uLocal_598[2], 9);
							bLocal_719 = true;
						}
					}
					return true;
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[2], Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[5], Global_35, 1, 1))
			{
				if (!bLocal_719)
				{
					if (!bLocal_688)
					{
						__LIB_3__::func_465(3, 0, 0, 0, uLocal_598[2], 0, 1065353216 /* Float: 1f */, 0);
						__LIB_3__::func_686(uLocal_598[2], 9);
						bLocal_719 = true;
					}
					else
					{
						__LIB_3__::func_465(4, 0, 0, 0, uLocal_598[2], 0, 1065353216 /* Float: 1f */, 0);
						__LIB_3__::func_686(uLocal_598[2], 9);
						bLocal_719 = true;
					}
				}
				return true;
			}
		}
	}
	return false;
}

void func_212()
{
	if (!bLocal_676)
	{
		if (fLocal_648 < 0.461892f)
		{
			iLocal_677 = 1;
		}
		if (fLocal_648 > 0.461892f && fLocal_648 < 0.745843f)
		{
			if (!bLocal_682)
			{
				bLocal_682 = true;
				bLocal_705 = true;
			}
		}
		if (fLocal_648 > 0.745843f)
		{
			iLocal_683 = 1;
		}
	}
}

bool func_213()
{
	if (bLocal_676)
	{
		if (!bLocal_673 && !bLocal_682)
		{
			if (!bLocal_672)
			{
				switch (iLocal_632)
				{
					case 0:
						if (PED::IS_PED_IN_VEHICLE(uLocal_598[2], iLocal_606, false))
						{
							if (!__LIB_0__::func_491(uLocal_598[2], joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
							{
								TASK::TASK_LEAVE_VEHICLE(uLocal_598[2], iLocal_606, 196608, 0);
							}
						}
						else
						{
							PED::_0xAAB050DA48B57978(uLocal_598[2], "TaskCower_Default", 0, -1, 4);
							ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", uLocal_598[2]);
							PED::SET_PED_TO_RAGDOLL(uLocal_598[2], 2000, 2000, 0, false, false, false);
							__LIB_1__::func_148(&uLocal_752);
							iLocal_632++;
						}
						break;
					case 1:
						if (__LIB_0__::func_265(&uLocal_752) > 2f || !PED::IS_PED_RAGDOLL(uLocal_598[2]))
						{
							bLocal_704 = true;
							TASK::TASK_COWER(uLocal_598[2], -1, Global_35, 0);
							iLocal_632++;
						}
						break;
					case 2:
						return true;
				}
			}
			else
			{
				switch (iLocal_632)
				{
					case 0:
						__LIB_1__::func_148(&uLocal_743);
						iLocal_632++;
						break;
					case 1:
						if (!TASK::IS_PED_GETTING_UP(uLocal_598[2]))
						{
							ANIMSCENE::START_ANIM_SCENE(Local_479.f_2);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_2, "fem_idle_bool", false, false);
							iLocal_632++;
						}
						break;
					case 2:
						if (!__LIB_2__::func_1(uLocal_598[0], 0, 1) && !__LIB_2__::func_1(uLocal_598[1], 0, 1))
						{
							iLocal_632++;
						}
						break;
					case 3:
						return true;
				}
			}
		}
		else
		{
			switch (iLocal_632)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_598[2]))
					{
						func_389();
						bLocal_705 = true;
					}
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
					{
						PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_774);
					}
					func_393();
					if (__LIB_2__::func_1(uLocal_598[2], 0, 1))
					{
						ANIMSCENE::START_ANIM_SCENE(Local_479.f_3);
					}
					iLocal_632++;
					break;
				case 1:
					iLocal_632++;
					break;
				case 2:
					return true;
			}
		}
	}
	return false;
}

void func_214()
{
	if ((__LIB_2__::func_1(uLocal_598[2], 0, 1) && __LIB_2__::func_1(uLocal_598[0], 0, 1)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479.f_2, false))
	{
		if (bLocal_690)
		{
			if (fLocal_648 > 0.074717f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "vic", uLocal_598[2]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", uLocal_598[2]);
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
				{
					PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_774);
				}
				AUDIO::_PLAY_SOUND_FROM_ENTITY("CarbineShotDistant", uLocal_598[0], "REFC_Sounds", false, 0, 0);
				func_393();
				func_389();
				if (!bLocal_667)
				{
					__LIB_3__::func_465(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					__LIB_3__::func_465(2, 0, 0, "Ignored Victim", 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				__LIB_2__::func_360(&(Local_910[0 /*17*/]), __LIB_2__::func_460(7));
				__LIB_2__::func_360(&(Local_966[0 /*17*/]), __LIB_2__::func_460(7));
				__LIB_2__::func_360(&(Local_910[1 /*17*/]), __LIB_2__::func_460(10));
				__LIB_2__::func_360(&(Local_966[1 /*17*/]), __LIB_2__::func_460(10));
				__LIB_2__::func_451(&iLocal_889, 0);
				__LIB_2__::func_451(&iLocal_945, 0);
				bLocal_715 = true;
				bLocal_705 = true;
				__LIB_2__::func_788(&(uLocal_598[2]), 0, 0, 1);
			}
		}
		if (!bLocal_703)
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[18]))
			{
				if (fLocal_648 > 0.75f)
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "vic", uLocal_598[2]);
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", uLocal_598[2]);
					if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
					{
						PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_774);
					}
					func_393();
					func_389();
					__LIB_3__::func_465(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
					bLocal_705 = true;
					__LIB_2__::func_788(&(uLocal_598[2]), 0, 0, 1);
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_598[2], Global_35, 1, 1))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", uLocal_598[2]);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_598[2]))
				{
					func_389();
					if (!Local_59.f_46)
					{
						__LIB_3__::func_465(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
					}
					bLocal_705 = true;
				}
			}
		}
		else if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[18]))
		{
			if (fLocal_651 > 0.108318f)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "vic", uLocal_598[2]);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", uLocal_598[2]);
				if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
				{
					PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_774);
				}
				func_393();
				func_389();
				__LIB_3__::func_465(3, 0, 0, "Watched Murder", 0, 0, 1065353216 /* Float: 1f */, 0);
				bLocal_705 = true;
				__LIB_2__::func_788(&(uLocal_598[2]), 0, 0, 1);
			}
		}
	}
}

bool func_215()
{
	if (((((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 1), Global_35, 1, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 0), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 5), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 4), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 2), Global_35, 1, 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_606, 3), Global_35, 1, 1))
	{
		return true;
	}
	return false;
}

bool func_216()
{
	switch (iLocal_616)
	{
		case 0:
			bLocal_718 = false;
			if (func_97())
			{
				if (iLocal_487 == 0 || iLocal_487 == 5)
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[18]))
					{
						if (fLocal_648 > 0.713533f)
						{
							iLocal_616 = 2;
						}
						else if (!func_38())
						{
							if (bLocal_667)
							{
								if (__LIB_0__::func_265(&uLocal_731) > 5f)
								{
									iLocal_628 = 0;
									bLocal_655 = true;
									iLocal_616 = 1;
								}
							}
							else
							{
								iLocal_628 = 0;
								bLocal_655 = true;
								iLocal_616 = 1;
							}
						}
					}
					else if (bLocal_690)
					{
						bLocal_655 = true;
						iLocal_616 = 2;
					}
					else
					{
						iLocal_616 = 3;
					}
				}
				if (iLocal_487 == 3)
				{
					if (!func_38())
					{
						if (bLocal_667)
						{
							if (__LIB_0__::func_265(&uLocal_731) > 5f)
							{
								iLocal_628 = 0;
								bLocal_655 = true;
								iLocal_616 = 1;
							}
						}
						else
						{
							iLocal_628 = 0;
							bLocal_655 = true;
							iLocal_616 = 3;
						}
					}
					else
					{
						iLocal_616 = 3;
					}
				}
			}
			break;
		case 1:
			if (func_239())
			{
				if (bLocal_667)
				{
					iLocal_616 = 0;
				}
				else
				{
					__LIB_1__::func_148(&uLocal_725);
					__LIB_2__::func_461(0);
					iLocal_616 = 2;
				}
			}
			break;
		case 2:
			if (iLocal_487 == 0 || iLocal_487 == 5)
			{
				if (func_396())
				{
					iLocal_616 = 3;
				}
			}
			else if (iLocal_487 == 3)
			{
				if (func_397())
				{
					iLocal_616 = 3;
				}
			}
			break;
		case 3:
			if (iLocal_487 == 0 || iLocal_487 == 5)
			{
				if (!bLocal_660 || bLocal_699)
				{
					if (__LIB_0__::func_265(&uLocal_725) > 1f)
					{
						iLocal_616 = 4;
					}
				}
				else if (__LIB_0__::func_265(&uLocal_725) > 1f)
				{
					iLocal_616 = 4;
				}
			}
			else if (iLocal_487 == 3)
			{
				iLocal_616 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_217()
{
	ANIMSCENE::START_ANIM_SCENE(Local_479.f_2);
	bLocal_662 = true;
}

void func_220()
{
	if (bLocal_713)
	{
		__LIB_2__::func_480(&Local_854, 1, 0, 1, 0);
		iLocal_620 = func_390(&(uLocal_598[2]), &iLocal_777, 30f, &Local_798, &(Local_59.f_192), 0f, 1, 0, 0, iLocal_1041, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (!bLocal_712)
		{
			if (__LIB_2__::func_136(uLocal_598[2], 0))
			{
				__LIB_2__::func_411(&(Local_798[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_798[1 /*17*/]), 0, 0);
			}
			else
			{
				__LIB_1__::func_148(&uLocal_761);
				__LIB_2__::func_411(&(Local_798[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_798[1 /*17*/]), 1, 0);
			}
		}
		if (!bLocal_695)
		{
			if (iLocal_620 == 1)
			{
				bLocal_712 = true;
				TASK::TASK_REACT(uLocal_598[2], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Shocked", 2f, 10f, 4);
				__LIB_1__::func_148(&uLocal_737);
				__LIB_1__::func_148(&uLocal_740);
				bLocal_696 = false;
				bLocal_654 = true;
				bLocal_695 = true;
				__LIB_2__::func_411(&(Local_798[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_798[1 /*17*/]), 0, 0);
			}
			if (!bLocal_720)
			{
				if (iLocal_620 == 0)
				{
					__LIB_2__::func_411(&(Local_798[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_798[1 /*17*/]), 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(Global_35, uLocal_598[2], 2, 0, 51, 1);
					if (iLocal_487 == 3)
					{
						if (bLocal_692)
						{
							__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(31), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(27), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else if (bLocal_692)
					{
						__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(27), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(28), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					bLocal_720 = true;
					bLocal_712 = true;
				}
			}
			else
			{
				__LIB_2__::func_411(&(Local_798[0 /*17*/]), 0, 0);
			}
		}
	}
	else
	{
		iLocal_641 = func_390(&(uLocal_598[2]), &iLocal_833, 35f, &Local_854, &(Local_59.f_192), 0f, 1, 0, 0, iLocal_1041, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		__LIB_2__::func_411(&(Local_854[1 /*17*/]), 0, 0);
		if (iLocal_487 != 3)
		{
			if (iLocal_641 == 0)
			{
				__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(39), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_411(&(Local_854[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_854[1 /*17*/]), 0, 0);
			}
		}
		else if (iLocal_641 == 0)
		{
			__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(39), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_2__::func_411(&(Local_854[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_854[1 /*17*/]), 0, 0);
		}
	}
}

void func_221()
{
	iLocal_633 = 200;
}

bool func_237()
{
	if (__LIB_2__::func_15(iLocal_487, 0))
	{
		if (iLocal_487 == 3)
		{
			switch (iLocal_625)
			{
				case 0:
					if (iLocal_612 >= 1)
					{
						iLocal_625++;
					}
					break;
				case 1:
					if (Local_59.f_48 && iLocal_612 >= 2)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "BASE_BOOL", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "IDLE_BOOL", true, false);
						iLocal_625++;
					}
					break;
				case 2:
					func_414();
					if (fLocal_648 >= 0.787719f)
					{
						if (!bLocal_679)
						{
							if (!PED::IS_PED_ON_MOUNT(uLocal_598[0]))
							{
								TASK::TASK_MOUNT_ANIMAL(uLocal_598[0], uLocal_598[5], 20000, -1, 1f, 1, 0, 0);
								bLocal_679 = true;
							}
						}
					}
					if (fLocal_649 >= 0.85519f)
					{
						if (!bLocal_680)
						{
							if (!PED::IS_PED_ON_MOUNT(uLocal_598[1]))
							{
								TASK::TASK_MOUNT_ANIMAL(uLocal_598[1], uLocal_598[6], 20000, -1, 1f, 1, 0, 0);
								bLocal_680 = true;
							}
						}
					}
					if (PED::IS_PED_ON_MOUNT(uLocal_598[0]) && PED::IS_PED_ON_MOUNT(uLocal_598[1]))
					{
						iLocal_625++;
					}
					break;
				case 3:
					if (!PED::IS_PED_ON_MOUNT(uLocal_598[0]))
					{
						PED::_SET_PED_ON_MOUNT(uLocal_598[0], uLocal_598[5], -1, true);
					}
					if (!PED::IS_PED_ON_MOUNT(uLocal_598[1]))
					{
						PED::_SET_PED_ON_MOUNT(uLocal_598[1], uLocal_598[6], -1, true);
					}
					iLocal_625++;
					break;
				case 4:
					return true;
			}
		}
		else if (iLocal_487 == 0)
		{
			switch (iLocal_625)
			{
				case 0:
					if (iLocal_612 >= 1)
					{
						iLocal_625++;
					}
					break;
				case 1:
					if (Local_59.f_48 && iLocal_612 >= 2)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "base_bool", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "base_bool", true, false);
						iLocal_625++;
					}
					break;
				case 2:
					if (!bLocal_703)
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[18]))
						{
							if (fLocal_648 >= 0.917974f)
							{
								if (!bLocal_679)
								{
									if (!PED::IS_PED_ON_MOUNT(uLocal_598[0]))
									{
										TASK::TASK_MOUNT_ANIMAL(uLocal_598[0], uLocal_598[5], 20000, -1, 1f, 1, 0, 0);
										bLocal_679 = true;
									}
								}
							}
							if (fLocal_649 >= 0.888096f)
							{
								if (!bLocal_680)
								{
									if (!PED::IS_PED_ON_MOUNT(uLocal_598[1]))
									{
										TASK::TASK_MOUNT_ANIMAL(uLocal_598[1], uLocal_598[6], 20000, -1, 1f, 1, 0, 0);
										bLocal_680 = true;
									}
								}
							}
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[22]))
					{
						if (fLocal_651 >= 0.664624f || (bLocal_690 && fLocal_651 >= 0.233699f))
						{
							if (!bLocal_679)
							{
								if (!PED::IS_PED_ON_MOUNT(uLocal_598[0]))
								{
									TASK::TASK_MOUNT_ANIMAL(uLocal_598[0], uLocal_598[5], 20000, -1, 1f, 1, 0, 0);
									bLocal_679 = true;
								}
							}
						}
						if (fLocal_652 >= 0.678759f)
						{
							if (!bLocal_680)
							{
								if (!PED::IS_PED_ON_MOUNT(uLocal_598[1]))
								{
									TASK::TASK_MOUNT_ANIMAL(uLocal_598[1], uLocal_598[6], 20000, -1, 1f, 1, 0, 0);
									bLocal_680 = true;
								}
							}
						}
					}
					if (PED::IS_PED_ON_MOUNT(uLocal_598[0]) && PED::IS_PED_ON_MOUNT(uLocal_598[1]))
					{
						iLocal_625++;
					}
					break;
				case 3:
					if (!PED::IS_PED_ON_MOUNT(uLocal_598[0]))
					{
						PED::_SET_PED_ON_MOUNT(uLocal_598[0], uLocal_598[5], -1, true);
					}
					if (!PED::IS_PED_ON_MOUNT(uLocal_598[1]))
					{
						PED::_SET_PED_ON_MOUNT(uLocal_598[1], uLocal_598[6], -1, true);
					}
					iLocal_625++;
					break;
				case 4:
					return true;
			}
		}
		else if (iLocal_487 == 5)
		{
			switch (iLocal_625)
			{
				case 0:
					if (iLocal_612 >= 1)
					{
						iLocal_625++;
					}
					break;
				case 1:
					if (Local_59.f_48 && iLocal_612 >= 2)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479, "base_bool", true, false);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_479.f_1, "base_bool", true, false);
						iLocal_625++;
					}
					break;
				case 2:
					if (!bLocal_703)
					{
						if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[18]))
						{
							if (fLocal_648 >= 0.917974f)
							{
								if (!bLocal_679)
								{
									if (!PED::IS_PED_ON_MOUNT(uLocal_598[0]))
									{
										TASK::TASK_MOUNT_ANIMAL(uLocal_598[0], uLocal_598[5], 20000, -1, 1f, 1, 0, 0);
										bLocal_679 = true;
									}
								}
							}
							if (fLocal_649 >= 0.888096f)
							{
								if (!bLocal_680)
								{
									if (!PED::IS_PED_ON_MOUNT(uLocal_598[1]))
									{
										TASK::TASK_MOUNT_ANIMAL(uLocal_598[1], uLocal_598[6], 20000, -1, 1f, 1, 0, 0);
										bLocal_680 = true;
									}
								}
							}
						}
					}
					else if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[22]))
					{
						if (fLocal_651 >= 0.664624f || (bLocal_690 && fLocal_651 >= 0.233699f))
						{
							if (!bLocal_679)
							{
								if (!PED::IS_PED_ON_MOUNT(uLocal_598[0]))
								{
									TASK::TASK_MOUNT_ANIMAL(uLocal_598[0], uLocal_598[5], 20000, -1, 1f, 1, 0, 0);
									bLocal_679 = true;
								}
							}
						}
						if (fLocal_652 >= 0.678759f)
						{
							if (!bLocal_680)
							{
								if (!PED::IS_PED_ON_MOUNT(uLocal_598[1]))
								{
									TASK::TASK_MOUNT_ANIMAL(uLocal_598[1], uLocal_598[6], 20000, -1, 1f, 1, 0, 0);
									bLocal_680 = true;
								}
							}
						}
					}
					if (PED::IS_PED_ON_MOUNT(uLocal_598[0]) && PED::IS_PED_ON_MOUNT(uLocal_598[1]))
					{
						iLocal_625++;
					}
					break;
				case 3:
					if (!PED::IS_PED_ON_MOUNT(uLocal_598[0]))
					{
						PED::_SET_PED_ON_MOUNT(uLocal_598[0], uLocal_598[5], -1, true);
					}
					if (!PED::IS_PED_ON_MOUNT(uLocal_598[1]))
					{
						PED::_SET_PED_ON_MOUNT(uLocal_598[1], uLocal_598[6], -1, true);
					}
					iLocal_625++;
					break;
				case 4:
					return true;
			}
		}
	}
	return false;
}

bool func_238()
{
	if (!bLocal_663 && !bLocal_664)
	{
		if (fLocal_648 < 0.52002f)
		{
			bLocal_663 = true;
		}
		if (fLocal_648 > 0.52002f && fLocal_648 < 0.716116f)
		{
			if (fLocal_648 >= 0.636267f)
			{
				bLocal_664 = true;
			}
			else
			{
				bLocal_663 = true;
			}
		}
		if (fLocal_648 >= 0.716116f)
		{
			bLocal_664 = true;
		}
	}
	if (bLocal_663)
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[24]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[24]))
		{
			if (!bLocal_665)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[24], true);
			}
			else
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "odriscoll", uLocal_598[0]);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[24], true);
				TASK::TASK_REACT(uLocal_598[0], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Brave", 1f, 0f, 4);
			}
			return true;
		}
		else
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[24]);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[24]);
		}
	}
	if (bLocal_664)
	{
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[25]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[25]))
		{
			if (!bLocal_665)
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[25], true);
			}
			else
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "odriscoll", uLocal_598[0]);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[25], true);
				TASK::TASK_REACT(uLocal_598[0], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Brave", 1f, 0f, 4);
			}
			return true;
		}
		else
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[25]);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[25]);
		}
	}
	if (!__LIB_2__::func_1(uLocal_598[0], 0, 1) && !__LIB_2__::func_1(uLocal_598[1], 0, 1))
	{
		return true;
	}
	return false;
}

bool func_239()
{
	func_415();
	if (iLocal_487 == 0 || iLocal_487 == 5)
	{
		if (func_416())
		{
			if (!bLocal_690)
			{
				return true;
			}
			else if (__LIB_0__::func_265(&uLocal_731) > 4f)
			{
				return true;
			}
		}
	}
	else if (iLocal_487 == 3)
	{
		if (func_417())
		{
			return true;
		}
	}
	return false;
}

void func_241()
{
	if ((__LIB_2__::func_1(uLocal_598[0], 0, 1) && !bLocal_669) && !PED::IS_PED_IN_COMBAT(uLocal_598[0], 0))
	{
		switch (iLocal_642)
		{
			case 0:
				if (((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479, false) || fLocal_648 > 0.5f) || !ENTITY::_0x0B7CB1300CBFE19C(uLocal_598[0], 1)) || iLocal_487 == 0)
				{
					iLocal_642++;
				}
				break;
			case 1:
				if (!MAP::DOES_BLIP_EXIST(uLocal_766[0]))
				{
					__LIB_2__::func_73(uLocal_598[0], &(uLocal_766[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
				if (iLocal_487 == 3)
				{
					__LIB_4__::func_232(uLocal_598[0], 0, 0);
				}
				iLocal_642++;
				break;
			case 2:
				TASK::TASK_COMBAT_HATED_TARGETS(uLocal_598[0], -1f);
				if (iLocal_487 == 3)
				{
					PED::_0x1854217C640B39EC(uLocal_598[0], Global_35, 0f, 0f, 0f, 2f, 0, 0);
				}
				iLocal_642++;
				break;
			case 3:
				if (PED::IS_PED_IN_COMBAT(uLocal_598[0], Global_35))
				{
					iLocal_642++;
				}
				else
				{
					TASK::TASK_COMBAT_HATED_TARGETS(uLocal_598[0], -1f);
				}
				break;
			case 4:
				bLocal_669 = true;
				break;
		}
	}
	else
	{
		bLocal_669 = true;
	}
}

void func_242()
{
	if (__LIB_2__::func_1(uLocal_598[1], 0, 1) && !bLocal_670)
	{
		switch (iLocal_643)
		{
			case 0:
				if ((((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_479.f_1, false) || !ENTITY::_0x0B7CB1300CBFE19C(uLocal_598[1], 1)) || fLocal_649 > 0.5f) || iLocal_487 == 0) || iLocal_487 == 5)
				{
					iLocal_643++;
				}
				break;
			case 1:
				if (!MAP::DOES_BLIP_EXIST(uLocal_766[1]))
				{
					__LIB_2__::func_73(uLocal_598[1], &(uLocal_766[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
				}
				if (iLocal_487 == 3)
				{
					__LIB_4__::func_232(uLocal_598[1], 0, 0);
				}
				PED::SET_PED_USING_ACTION_MODE(uLocal_598[1], true, -1, 0);
				iLocal_643++;
				break;
			case 2:
				TASK::TASK_COMBAT_HATED_TARGETS(uLocal_598[1], -1f);
				iLocal_643++;
				break;
			case 3:
				if (PED::IS_PED_IN_COMBAT(uLocal_598[1], Global_35))
				{
					iLocal_643++;
				}
				break;
			case 4:
				bLocal_670 = true;
				break;
		}
	}
	else
	{
		bLocal_670 = true;
	}
}

void func_389()
{
	if (iLocal_487 == 3)
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "VICTIM", uLocal_598[2]);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "VICTIM", uLocal_598[2]);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_3, "VICTIM", uLocal_598[2]);
	}
	else
	{
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "vic", uLocal_598[2]);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479.f_2, "vic", uLocal_598[2]);
	}
	__LIB_1__::func_864(uLocal_598[2], 0, 0);
	if (!Local_59.f_44 && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_606))
	{
		Local_59.f_44 = 1;
	}
}

int func_390(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_544(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_391()
{
	switch (iLocal_615)
	{
		case 0:
			if (bLocal_705 || !__LIB_2__::func_1(uLocal_598[2], 0, 1))
			{
				if (!bLocal_714)
				{
					__LIB_2__::func_360(&(Local_910[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_360(&(Local_966[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_451(&iLocal_889, 0);
					__LIB_2__::func_451(&iLocal_945, 0);
					bLocal_714 = true;
				}
			}
			if (iLocal_621 == 0 || iLocal_622 == 0)
			{
				__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(36), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_548();
				__LIB_1__::func_148(&uLocal_749);
				if (!Local_59.f_44)
				{
					Local_59.f_44 = 1;
				}
				iLocal_615 = 1;
			}
			else if (iLocal_621 == 1 || iLocal_622 == 1)
			{
				if (!bLocal_714)
				{
					__LIB_3__::func_465(10, 0, 0, "RE_HONOR_INTERVENED", uLocal_598[0], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(34), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(35), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (iLocal_487 == 5)
				{
					bLocal_721 = true;
				}
				func_548();
				bLocal_699 = true;
				if (!Local_59.f_44)
				{
					Local_59.f_44 = 1;
				}
				__LIB_1__::func_148(&uLocal_749);
				iLocal_615 = 4;
			}
			if (bLocal_716)
			{
				func_548();
				__LIB_1__::func_148(&uLocal_749);
				iLocal_615 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_749) > 2f && !__LIB_2__::func_136(Global_35, 0))
			{
				if (!bLocal_715)
				{
					bLocal_693 = true;
					if (!Local_59.f_44)
					{
						Local_59.f_44 = 1;
					}
					__LIB_2__::func_360(&(Local_910[0 /*17*/]), __LIB_2__::func_460(8));
					__LIB_2__::func_360(&(Local_966[0 /*17*/]), __LIB_2__::func_460(8));
					__LIB_2__::func_360(&(Local_910[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_360(&(Local_966[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_451(&iLocal_889, 0);
					__LIB_2__::func_451(&iLocal_945, 0);
					__LIB_2__::func_411(&(Local_910[1 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_966[1 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_910[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_966[0 /*17*/]), 0, 0);
					bLocal_715 = true;
				}
				if ((!__LIB_2__::func_136(uLocal_598[0], 0) && !__LIB_2__::func_136(uLocal_598[1], 0)) && !bLocal_705)
				{
					if (bLocal_716)
					{
						__LIB_2__::func_411(&(Local_910[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_966[0 /*17*/]), 1, 0);
					}
				}
				else
				{
					__LIB_2__::func_411(&(Local_910[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_966[0 /*17*/]), 0, 0);
				}
				if (iLocal_621 == 0 || iLocal_622 == 0)
				{
					__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(38), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_548();
					__LIB_1__::func_148(&uLocal_749);
					iLocal_615 = 2;
				}
				if (iLocal_621 == 1 || iLocal_622 == 1)
				{
					if (!bLocal_705)
					{
						if (bLocal_716)
						{
							__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(37), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(37), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(35), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					if (iLocal_487 == 5)
					{
						bLocal_721 = true;
					}
					bLocal_699 = true;
					bLocal_697 = true;
					func_548();
					__LIB_1__::func_148(&uLocal_749);
					iLocal_615 = 2;
				}
			}
			break;
		case 2:
			if (__LIB_0__::func_265(&uLocal_749) > 2f)
			{
				if (bLocal_697)
				{
					__LIB_1__::func_148(&uLocal_749);
					iLocal_615 = 4;
				}
				else
				{
					__LIB_2__::func_360(&(Local_910[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_360(&(Local_966[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_451(&iLocal_889, 0);
					__LIB_2__::func_451(&iLocal_945, 0);
					__LIB_2__::func_411(&(Local_966[1 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_966[0 /*17*/]), 1, 0);
					iLocal_615 = 3;
				}
			}
			break;
		case 3:
			if (iLocal_621 == 1 || iLocal_622 == 1)
			{
				__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(37), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_548();
				if (iLocal_487 == 5)
				{
					bLocal_721 = true;
				}
				bLocal_699 = true;
				__LIB_1__::func_148(&uLocal_749);
				iLocal_615 = 4;
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_749) > 2f)
			{
				bLocal_694 = true;
				if (!bLocal_662)
				{
					func_217();
				}
				iLocal_616 = 2;
				iLocal_615 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_392()
{
	switch (iLocal_615)
	{
		case 0:
			if (bLocal_705 || !__LIB_2__::func_1(uLocal_598[2], 0, 1))
			{
				if (!bLocal_714)
				{
					__LIB_2__::func_360(&(Local_910[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_360(&(Local_966[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_451(&iLocal_889, 0);
					__LIB_2__::func_451(&iLocal_945, 0);
					bLocal_714 = true;
				}
			}
			if (iLocal_621 == 1 || iLocal_622 == 1)
			{
				__LIB_3__::func_465(12, 0, 0, "RE_HONOR_INTERVENED", uLocal_598[0], 0, 1065353216 /* Float: 1f */, 0);
				if (!bLocal_714)
				{
					__LIB_3__::func_465(10, 0, 0, "RE_HONOR_INTERVENED", uLocal_598[0], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(34), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(35), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_548();
				__LIB_1__::func_148(&uLocal_749);
				iLocal_615 = 1;
			}
			else if (iLocal_621 == 0 || iLocal_622 == 0)
			{
				__LIB_2__::func_303(Global_35, uLocal_598[2], func_77(36), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_548();
				__LIB_1__::func_148(&uLocal_749);
				iLocal_615 = 1;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_749) > 2f)
			{
				__LIB_2__::func_461(1);
				bLocal_693 = true;
				iLocal_615 = 5;
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
	}
}

void func_393()
{
	__LIB_2__::func_161(Local_59.f_51, 20f, 5);
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_623);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_774))
	{
		PATHFIND::_0x2C87C3E1C7B96EE2(iLocal_774);
	}
	iLocal_624 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), __LIB_3__::func_179(&Local_59), 0f, 20f, -1f, -1f, -1f, -1, -1);
}

bool func_396()
{
	int iVar0;
	int iVar1;
	if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_598[0], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, false))
	{
		__LIB_2__::func_231(uLocal_598[0], __LIB_3__::func_672(0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(uLocal_598[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, false))
	{
		__LIB_2__::func_231(uLocal_598[1], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 1, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	}
	if (!bLocal_660)
	{
		switch (iLocal_637)
		{
			case 0:
				bLocal_718 = true;
				PED::_0x58F7DB5BD8FA2288(uLocal_598[0]);
				PED::_0x58F7DB5BD8FA2288(uLocal_598[1]);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Angry", 0.5f, 0f, 4);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
				__LIB_1__::func_474(uLocal_598[0], &iVar0, 0, 0, 1, 1);
				__LIB_1__::func_148(&uLocal_725);
				if (!bLocal_660 && iLocal_487 != 5)
				{
					__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(18), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					bLocal_711 = true;
				}
				iLocal_637++;
				break;
			case 1:
				if (__LIB_0__::func_265(&uLocal_725) > 1f)
				{
					PED::_0x58F7DB5BD8FA2288(uLocal_598[1]);
					TASK::OPEN_SEQUENCE_TASK(&iVar1);
					TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Angry", 0.5f, 0f, 4);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 4f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, true, 1);
					__LIB_1__::func_474(uLocal_598[1], &iVar1, 0, 0, 1, 1);
					__LIB_1__::func_148(&uLocal_725);
					bLocal_710 = false;
					iLocal_637++;
				}
				break;
			case 2:
				__LIB_1__::func_148(&uLocal_725);
				iLocal_637++;
				break;
			case 3:
				if (((__LIB_0__::func_265(&uLocal_725) > 1f || (bLocal_697 && bLocal_694)) || bLocal_699) || bLocal_721)
				{
					if (!__LIB_2__::func_136(Global_35, 0))
					{
						if (iLocal_487 == 5 && !bLocal_660)
						{
							if (bLocal_721)
							{
								__LIB_2__::func_303(uLocal_598[0], Global_35, "RE_RC_BND_V1_CALLOUT_2", "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(uLocal_598[0], Global_35, "GENERIC_SHOCKED_HIGH", "", 100f, 2, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
						}
						__LIB_1__::func_148(&uLocal_725);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		TASK::TASK_REACT(uLocal_598[0], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Angry", 0.5f, 0f, 4);
		TASK::TASK_REACT(uLocal_598[1], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.8f, 0f, 4);
		return true;
	}
	return false;
}

bool func_397()
{
	int iVar0;
	int iVar1;
	switch (iLocal_637)
	{
		case 0:
			PED::_0x58F7DB5BD8FA2288(uLocal_598[0]);
			PED::_0x58F7DB5BD8FA2288(uLocal_598[1]);
			if (!bLocal_701)
			{
				if (fLocal_648 < 0.9f || bLocal_659)
				{
					if (!bLocal_659)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_598[0], Global_35, -1, false, 1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.5f, 0f, 4);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
						__LIB_1__::func_474(uLocal_598[0], &iVar0, 0, 0, 1, 1);
					}
					__LIB_2__::func_461(0);
					bLocal_701 = true;
				}
			}
			if (!bLocal_702)
			{
				if (fLocal_649 < 0.98f || bLocal_659)
				{
					if (!bLocal_659)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_598[1], Global_35, -1, false, 1);
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.5f, 0f, 4);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
						__LIB_1__::func_474(uLocal_598[1], &iVar1, 0, 0, 1, 1);
					}
					__LIB_2__::func_461(0);
					bLocal_702 = true;
				}
			}
			if (bLocal_702 && bLocal_701)
			{
				iLocal_637++;
			}
			break;
		case 1:
			__LIB_1__::func_148(&uLocal_725);
			return true;
	}
	return false;
}

void func_414()
{
	switch (iLocal_646)
	{
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[0], 105945964))
			{
				__LIB_2__::func_303(uLocal_598[0], Global_35, "RE_RC_SVG_V1_OPN_IDLE_A", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[0], 411844579))
			{
				__LIB_2__::func_303(uLocal_598[0], Global_35, "RE_RC_SVG_V1_OPN_IDLE_B", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[2], 1191718119))
			{
				__LIB_2__::func_303(uLocal_598[2], Global_35, "RE_RC_SVG_V1_OPN_IDLE_A", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_598[2], -632269967))
			{
				__LIB_2__::func_303(uLocal_598[2], Global_35, "RE_RC_SVG_V1_OPN_IDLE_B", "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_646++;
			}
			break;
		case 4:
			break;
	}
}

void func_415()
{
	if (iLocal_487 == 3)
	{
		iLocal_617 = __LIB_3__::func_547(uLocal_598[0], Global_35, 0.5f);
	}
	else
	{
		iLocal_617 = __LIB_3__::func_547(iLocal_606, Global_35, 1060437492 /* Float: 0.707f */);
		if (func_559())
		{
			iLocal_617 = 3;
		}
		else
		{
			iLocal_617 = 2;
		}
	}
}

bool func_416()
{
	int iVar0;
	if (bLocal_660)
	{
		if (!bLocal_663 && !bLocal_664)
		{
			if (((ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[18]) || ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[17])) || ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[19])) || ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[20]))
			{
				bLocal_663 = true;
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[18]))
			{
				if (fLocal_648 >= 0.713533f)
				{
					bLocal_664 = true;
				}
				else
				{
					bLocal_663 = true;
				}
			}
			if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[22]))
			{
				bLocal_664 = true;
			}
		}
		if (bLocal_663)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[24]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[24]))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[24], true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[24], true);
				return true;
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[24]);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[24]);
			}
		}
		if (bLocal_664)
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[25]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[25]))
			{
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[25], true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[25], true);
				return true;
			}
			else
			{
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[25]);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[25]);
			}
		}
	}
	else
	{
		if (!bLocal_665 && !bLocal_666)
		{
			if (ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[18]))
			{
				if (fLocal_648 >= 0.7f)
				{
					bLocal_666 = true;
				}
				else
				{
					bLocal_665 = true;
				}
			}
		}
		switch (iLocal_628)
		{
			case 0:
				if (iLocal_617 == 1 || iLocal_617 == 0)
				{
					if (bLocal_665)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[27]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[27]))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[27], true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[27]);
						}
					}
					if (bLocal_666)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[30]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[25]))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[30], true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[30]);
						}
					}
				}
				else if (iLocal_617 == 3)
				{
					if (bLocal_665)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[28]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[28]))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[28], true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[28]);
						}
					}
					if (bLocal_666)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[29]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[29]))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[29], true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[29]);
						}
					}
				}
				else if (iLocal_617 == 2)
				{
					if (bLocal_665)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[26]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[26]))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[26], true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[26]);
						}
					}
					if (bLocal_666)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[31]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[31]))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[31], true);
							iLocal_628++;
						}
						else
						{
							ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[31]);
						}
					}
				}
				break;
			case 1:
				__LIB_1__::func_148(&uLocal_731);
				iLocal_628++;
				break;
			case 2:
				if (fLocal_648 >= 0.99f || func_560())
				{
					if (iLocal_487 != 3)
					{
						if ((__LIB_0__::func_665(uLocal_598[0], Global_35, 1, 1) > 25f && __LIB_0__::func_665(uLocal_598[1], Global_35, 1, 1) > 25f) || (__LIB_3__::func_507(&uLocal_1042, 5000) && __LIB_0__::func_665(uLocal_598[0], Global_35, 1, 1) > 15f))
						{
							bLocal_710 = false;
							if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[22]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[22]))
							{
								ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_479, "odriscoll", uLocal_598[0]);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[22], true);
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[22], true);
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_AIM_AT_ENTITY(0, uLocal_598[2], -1, 1, 0);
								TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(uLocal_598[2], true, false), 1000, 0, 0);
								__LIB_1__::func_474(uLocal_598[0], &iVar0, 0, 0, 1, 1);
								bLocal_690 = true;
								bLocal_655 = false;
								bLocal_667 = true;
								bLocal_693 = false;
								__LIB_1__::func_148(&uLocal_731);
								return true;
							}
							else
							{
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[22]);
								ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[22]);
							}
						}
						else
						{
							func_217();
							bLocal_676 = true;
							return true;
						}
					}
					else
					{
						func_217();
						bLocal_676 = true;
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_417()
{
	int iVar0;
	if (!__LIB_0__::func_75(&uLocal_755))
	{
		__LIB_1__::func_148(&uLocal_755);
	}
	else
	{
		if (__LIB_0__::func_265(&uLocal_755) > 1f)
		{
		}
		if ((!bLocal_657 && !bLocal_658) && !bLocal_659)
		{
			if (fLocal_649 < 0.846916f)
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_598[2], iLocal_606, false))
				{
					if (!__LIB_0__::func_491(uLocal_598[2], joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
					{
						if (fLocal_649 >= 0.72f)
						{
							if (__LIB_2__::func_1(uLocal_598[2], 0, 1))
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_LEAVE_VEHICLE(0, iLocal_606, 196608, 0);
								TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 2f, 2f, 4);
								__LIB_1__::func_474(uLocal_598[2], &iVar0, 0, 0, 1, 1);
							}
						}
					}
				}
				else
				{
					if (ANIMSCENE::_0x1F0E401031E20146(Local_479, "PBL_ACTION_01"))
					{
						if (bLocal_671)
						{
							__LIB_1__::func_148(&uLocal_746);
							__LIB_1__::func_148(&uLocal_737);
							bLocal_657 = true;
						}
					}
					if (bLocal_672)
					{
						bLocal_658 = true;
						__LIB_1__::func_148(&uLocal_746);
						__LIB_1__::func_148(&uLocal_737);
					}
					if (bLocal_673)
					{
						bLocal_659 = true;
						__LIB_1__::func_148(&uLocal_746);
						__LIB_1__::func_148(&uLocal_737);
					}
					if (bLocal_674)
					{
						bLocal_676 = true;
						__LIB_1__::func_148(&uLocal_746);
						__LIB_1__::func_148(&uLocal_737);
					}
				}
			}
		}
		if (func_562())
		{
			TASK::TASK_REACT(uLocal_598[0], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.5f, 0f, 4);
			TASK::TASK_REACT(uLocal_598[1], Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "Default_Panic", 0.8f, 0f, 4);
			return true;
		}
		bLocal_657 = bLocal_657;
		if (!bLocal_658 && !func_562())
		{
			if (iLocal_617 == 1 || iLocal_617 == 0)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[1]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[12]))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[1], true);
					bLocal_676 = true;
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[12], true);
					return true;
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[1]);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[12]);
				}
			}
			else if (iLocal_617 == 2)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[2]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[14]))
				{
					switch (iLocal_634)
					{
						case 0:
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[14], true);
							__LIB_1__::func_148(&uLocal_746);
							iLocal_634++;
							break;
						case 1:
							if (__LIB_0__::func_265(&uLocal_746) > 0.5f)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[2], true);
								bLocal_676 = true;
								return true;
							}
							break;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[2]);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[14]);
				}
			}
			else if (iLocal_617 == 3)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[3]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[15]))
				{
					switch (iLocal_634)
					{
						case 0:
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[3], true);
							bLocal_676 = true;
							__LIB_1__::func_148(&uLocal_746);
							iLocal_634++;
							break;
						case 1:
							if (__LIB_0__::func_265(&uLocal_746) > 0.5f)
							{
								ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[15], true);
								return true;
							}
							break;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[3]);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[15]);
				}
			}
		}
		if (bLocal_658 && !bLocal_659)
		{
			if (iLocal_617 == 1 || iLocal_617 == 0)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[4]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[12]))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[12], true);
					if (__LIB_0__::func_265(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[4], true);
						bLocal_676 = true;
						return true;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[4]);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[12]);
				}
			}
			else if (iLocal_617 == 2)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[5]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[14]))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[14], true);
					if (__LIB_0__::func_265(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[5], true);
						bLocal_676 = true;
						return true;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[5]);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[14]);
				}
			}
			else if (iLocal_617 == 3)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[6]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[15]))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[6], true);
					bLocal_676 = true;
					if (__LIB_0__::func_265(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[15], true);
						return true;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[6]);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[15]);
				}
			}
		}
		if (bLocal_659)
		{
			if (iLocal_617 == 1 || iLocal_617 == 0)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[7]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[12]))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[7], true);
					bLocal_676 = true;
					if (__LIB_0__::func_265(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[12], true);
						return true;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[7]);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[12]);
				}
			}
			else if (iLocal_617 == 2)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[9]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[14]))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[9], true);
					bLocal_676 = true;
					if (__LIB_0__::func_265(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[14], true);
						return true;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[9]);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[14]);
				}
			}
			else if (iLocal_617 == 3)
			{
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_479, sLocal_25[10]) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_479.f_1, sLocal_25[15]))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479, sLocal_25[10], true);
					bLocal_676 = true;
					if (__LIB_0__::func_265(&uLocal_737) > 0.5f)
					{
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_479.f_1, sLocal_25[15], true);
						return true;
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479, sLocal_25[10]);
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_479.f_1, sLocal_25[15]);
				}
			}
		}
	}
	return false;
}

int func_544(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_544(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

void func_548()
{
	__LIB_2__::func_411(&(Local_910[1 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_910[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_966[1 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_966[0 /*17*/]), 0, 0);
}

bool func_559()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_606, true, false) };
	return __LIB_0__::func_195(vVar0, vLocal_21, Global_36);
}

bool func_560()
{
	if ((((((ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[27]) || ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[30])) || ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[26])) || ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[29])) || ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[31])) || ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[28])) || ANIMSCENE::_0x1F0E401031E20146(Local_479, sLocal_25[29]))
	{
		switch (iLocal_629)
		{
			case 0:
				__LIB_2__::func_461(0);
				__LIB_2__::func_504(uLocal_598[1], 0);
				bLocal_710 = true;
				iLocal_629++;
				break;
			case 1:
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_598[2], Local_479))
				{
					__LIB_2__::func_303(uLocal_598[2], Global_35, func_77(14), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_910[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_966[0 /*17*/]), 0, 0);
					iLocal_629++;
				}
				break;
			case 2:
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_598[0], Local_479))
				{
					if (fLocal_648 >= 0.25f)
					{
						__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(15), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_629++;
					}
				}
				break;
			case 3:
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_598[0], Local_479))
				{
					if (fLocal_648 >= 0.45f)
					{
						__LIB_2__::func_411(&(Local_910[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_966[0 /*17*/]), 1, 0);
						__LIB_2__::func_303(uLocal_598[0], Global_35, func_77(16), "", 100f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						bLocal_716 = true;
						iLocal_629++;
					}
				}
				break;
			case 4:
				if (fLocal_648 >= 0.98f || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_598[0], Local_479))
				{
					return true;
				}
				break;
		}
	}
	return false;
}

bool func_562()
{
	if (fLocal_649 >= 0.846916f)
	{
		bLocal_681 = true;
		return true;
	}
	return false;
}

