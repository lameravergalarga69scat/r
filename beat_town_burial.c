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
	vector3 vLocal_26 = { 0f, 0f, 0f };
	struct<2> Local_29[28];
	int iLocal_86 = 0;
	struct<193> Local_87 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_280 = 0;
	struct<32> Local_281[7];
	var uLocal_506 = 28;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
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
	var uLocal_528 = 0;
	var uLocal_529 = 0;
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
	var uLocal_541 = 0;
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
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
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
	int iLocal_731[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_739 = { 2, 0, 0, 2 } ;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	struct<5> Local_752 = { 0, 0, 0, 0, 0 } ;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	char* sLocal_760[1] = { NULL };
	float fLocal_762 = 0f;
	var uLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	int iLocal_770 = 0;
	int iLocal_771 = 0;
	var uLocal_772 = 0;
	struct<22> Local_773 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3 } ;
	var uLocal_795 = 3;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	int iLocal_798 = 0;
	var uLocal_799 = -1;
	var uLocal_800 = 0;
	var uLocal_801 = -1;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = -1;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 1073741824;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 1;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	struct<17> Local_819[2];
	int iLocal_854 = 0;
	var uLocal_855 = -1;
	var uLocal_856 = 0;
	var uLocal_857 = -1;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = -1;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 1073741824;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 1;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	struct<17> Local_875[2];
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	var uLocal_915 = 0;
	int iLocal_916 = 0;
	var uLocal_917 = 0;
	int iLocal_918 = 0;
	int iLocal_919 = 0;
	int iLocal_920 = 0;
	int iLocal_921 = 0;
	int iLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	int iLocal_925 = 0;
	int iLocal_926 = 0;
	int iLocal_927 = 0;
	int iLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	int iLocal_940 = 0;
	bool bLocal_941 = false;
	bool bLocal_942 = false;
	bool bLocal_943 = false;
	bool bLocal_944 = false;
	bool bLocal_945 = false;
	bool bLocal_946 = false;
	int iLocal_947 = 0;
	bool bLocal_948 = false;
	int iLocal_949 = 0;
	bool bLocal_950 = false;
	bool bLocal_951 = false;
	bool bLocal_952 = false;
	bool bLocal_953 = false;
	bool bLocal_954 = false;
	bool bLocal_955 = false;
	bool bLocal_956 = false;
	bool bLocal_957 = false;
	bool bLocal_958 = false;
	bool bLocal_959 = false;
	bool bLocal_960 = false;
	bool bLocal_961 = false;
	bool bLocal_962 = false;
	bool bLocal_963 = false;
	bool bLocal_964 = false;
	bool bLocal_965 = false;
	bool bLocal_966 = false;
	bool bLocal_967 = false;
	bool bLocal_968 = false;
	var uLocal_969 = 7;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	var uLocal_979 = 0;
	int iLocal_980 = 0;
	int iLocal_981 = 0;
	int iLocal_982 = 0;
	int iLocal_983 = 0;
	int iLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	var uLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	vector3 vLocal_995 = { 0f, 0f, 0f };
	char* sLocal_998 = NULL;
	char* sLocal_999 = NULL;
	char[] cLocal_1000[8] = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
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
	iLocal_766 = 1;
	iLocal_769 = -1;
	iLocal_914 = __LIB_2__::func_340(1, 0, 0);
	bLocal_943 = true;
	vLocal_995 = { 7f, 7f, 7f };
	sLocal_998 = "";
	sLocal_999 = "";
	cLocal_1000 = "TB";
	Local_87.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_87.f_43 = __LIB_0__::func_12();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_4();
	}
	Local_87.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	uLocal_763 = uLocal_763;
	__LIB_4__::func_414(&Local_87, 1);
	func_7();
	__LIB_2__::func_111(&(Local_87.f_5), 0);
	__LIB_2__::func_182(&(Local_87.f_5), 0);
	__LIB_2__::func_104(&(Local_87.f_5), 1);
	__LIB_2__::func_52(&(Local_87.f_5), 1);
	__LIB_2__::func_51(&(Local_87.f_5), 1);
	__LIB_3__::func_232(&(Local_87.f_5), 1);
	__LIB_2__::func_110(&(Local_87.f_5), 1);
	__LIB_3__::func_230(&(Local_87.f_5), 1);
	__LIB_2__::func_595(&(Local_87.f_5), 20f);
	__LIB_2__::func_906(&(Local_87.f_5), 50);
	__LIB_3__::func_620(&(Local_87.f_5), 1);
	__LIB_3__::func_884(&(Local_87.f_5), 1.25f);
	__LIB_3__::func_900(&(Local_87.f_5), 5000);
	while (true)
	{
		switch (iLocal_766)
		{
			case 1:
				if (__LIB_3__::func_669(&Local_87, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_22(&Local_87, &uLocal_772, &uLocal_917);
					iLocal_766 = 0;
				}
				else if (Local_87.f_160)
				{
					func_4();
				}
				break;
			case 0:
				if (func_23())
				{
					BUILTIN::SETTIMERA(0);
					__LIB_3__::func_914(&Local_819);
					__LIB_3__::func_914(&Local_875);
					iLocal_766 = 3;
				}
				break;
			case 3:
				if (func_26())
				{
					if (func_27() && func_28())
					{
						__LIB_2__::func_133(iLocal_731[0], &(Local_281[0 /*32*/].f_23), 0);
						__LIB_2__::func_133(iLocal_731[1], &(Local_281[1 /*32*/].f_23), 0);
						func_30();
						func_31();
						__LIB_3__::func_414(&uLocal_912, Local_87.f_51, 14.75f, 1, 18, 0);
						__LIB_4__::func_411(&uLocal_910, Local_87.f_51, 20f);
						__LIB_4__::func_412(&uLocal_911, Local_87.f_51, 20f, 0, 0);
						func_35();
						__LIB_3__::func_285(iLocal_731[0], &Local_87, 0);
						__LIB_3__::func_285(iLocal_731[1], &Local_87, 0);
						PED::SET_PED_CONFIG_FLAG(iLocal_731[1], 317, true);
						PED::SET_PED_CONFIG_FLAG(iLocal_731[0], 317, true);
						__LIB_1__::func_991(iLocal_731[0], joaat("HONOR_EVENT_AMBIENT_KILL"));
						if (iLocal_86 == 2)
						{
						}
						else
						{
							ENTITY::_0x18FF3110CF47115D(iLocal_731[2], 7, 0);
							ENTITY::_0x18FF3110CF47115D(iLocal_731[2], 19, 1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_731[2], joaat("REL_PLAYER_ENEMY"));
							PED::SET_PED_CONFIG_FLAG(iLocal_731[2], 6, true);
							LAW::_0xFFEBE5AA96BC2E4E(iLocal_731[2], joaat("CRIME_ASSAULT"), 1);
							func_38();
						}
						iLocal_766 = 4;
					}
				}
				break;
			case 4:
				if (!func_39(&Local_87, &iLocal_731, iLocal_86, 0, 1, 0, 1, 0))
				{
					func_4();
				}
				PED::SET_PED_RESET_FLAG(iLocal_731[0], 202, true);
				if (func_40())
				{
					if (!Local_87.f_46)
					{
						__LIB_2__::func_603(&(iLocal_731[0]), &iLocal_798, &Local_819, 1, 1);
						__LIB_2__::func_603(&(iLocal_731[1]), &iLocal_854, &Local_875, 1, 1);
						iLocal_765 = 4;
						Local_87.f_46 = 1;
					}
				}
				if (!Local_87.f_46)
				{
					if (!bLocal_944)
					{
						if (func_42())
						{
							bLocal_944 = true;
						}
					}
					if (bLocal_944 && !bLocal_946)
					{
						if (func_43())
						{
							bLocal_946 = true;
							iLocal_765 = 2;
						}
					}
				}
				if (!bLocal_966)
				{
					if (__LIB_0__::func_255(iLocal_731[0], 0))
					{
						__LIB_3__::func_465(3, joaat("HONOR_EVENT_AMBIENT_KILL"), 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
						bLocal_966 = true;
					}
				}
				if (func_46())
				{
					Local_87.f_50 = 1;
					func_4();
				}
				if (__LIB_3__::func_365(&Local_87, &iLocal_731, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
				{
					func_4();
				}
				__LIB_3__::func_415(&Local_87, iLocal_731[0], 0f, 0f, 0f, 40);
				break;
		}
		BUILTIN::WAIT(Local_87.f_158);
	}
}

void func_4()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_980))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_980);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_981))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_981);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_982))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_982);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_983))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_983);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_984))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_984);
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_985))
	{
		TASK::_DELETE_SCENARIO_POINT(iLocal_985);
	}
	if (iLocal_994 != 0)
	{
		ENTITY::_0xD2B9C78537ED5759(iLocal_994);
	}
	if (__LIB_2__::func_1(iLocal_731[0], 0, 1))
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_731[0], 0))
		{
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_731[0], vLocal_14, 100f, 0, false, false, false, false);
		}
	}
	if (__LIB_2__::func_1(iLocal_731[0], 0, 1))
	{
		PED::SET_PED_KEEP_TASK(iLocal_731[0], true);
	}
	if (!Local_87.f_48 && !Local_87.f_44)
	{
		PED::_0x39A2FC5AF55A52B1(iLocal_731[2], -1);
	}
	__LIB_3__::func_524(&iLocal_919);
	func_51(&Local_87, &iLocal_731, &uLocal_969, iLocal_86, uLocal_772, uLocal_917, 0, 1, 0, 1);
	func_52();
	__LIB_2__::func_353(&uLocal_912, 1);
	__LIB_4__::func_72(Global_35);
	iLocal_947 = 0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7()
{
	Local_739.f_3[0] = 3f;
	Local_739.f_3[1] = 3f;
}

void func_22(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 4;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 4;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
	}
}

bool func_23()
{
	switch (iLocal_764)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_87))
			{
				__LIB_2__::func_312(joaat("SCRIPT_RETB_PREACHER"), 15, 0, 0);
				__LIB_2__::func_312(joaat("WORLD_HUMAN_GRAVE_MOURNING"), 15, 0, 0);
				__LIB_2__::func_312(joaat("SC_WORLD_HUMAN_KNEELING"), 15, 0, 0);
				STREAMING::REQUEST_ANIM_DICT("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@RHO@GEN");
				STREAMING::REQUEST_ANIM_DICT("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@RHO@DM");
				STREAMING::REQUEST_ANIM_DICT("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@GEN");
				STREAMING::REQUEST_ANIM_DICT("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@LD");
				STREAMING::REQUEST_ANIM_DICT("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@MFH");
				STREAMING::REQUEST_ANIM_DICT("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@val@DM");
				STREAMING::REQUEST_MODEL(joaat("P_CHURCHBELL01X"), false);
				STREAMING::REQUEST_MODEL(joaat("P_SHOVEL01X"), false);
				if (func_66())
				{
				}
				else
				{
					return false;
				}
				func_67();
				func_68();
				__LIB_1__::func_216(&iLocal_989, Local_87.f_51, 0f, 0f, 0f, 5f, 5f, 5f);
				__LIB_1__::func_216(&iLocal_990, Local_87.f_51, 0f, 0f, 0f, 15f, 15f, 15f);
				func_70();
				func_71();
				func_72();
				func_73();
				if (iLocal_86 != 2)
				{
					func_74();
				}
				iLocal_764 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_763, cLocal_1000))
			{
				return false;
			}
			if (!__LIB_2__::func_313(joaat("SCRIPT_RETB_PREACHER")))
			{
				return false;
			}
			if (((((!STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@RHO@GEN") && !STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@RHO@DM")) && !STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@GEN")) && !STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@LD")) && !STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@VAL@MFH")) && !STREAMING::HAS_ANIM_DICT_LOADED("SCRIPT_RE@TOWN_BURIAL@PREACHER@TRANS@val@DM"))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_SHOVEL01X")))
			{
				return false;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("P_CHURCHBELL01X")))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_281))
			{
				return false;
			}
			if (iLocal_86 != 2)
			{
				if (!func_78())
				{
					return false;
				}
				if (!func_79())
				{
					return false;
				}
			}
			return true;
	}
	return false;
}

bool func_26()
{
	int iVar0;
	switch (iLocal_770)
	{
		case 0:
			if (__LIB_3__::func_449(&Local_281))
			{
				iLocal_770 = 1;
			}
			break;
		case 1:
			if (__LIB_3__::func_479(__LIB_3__::func_179(&Local_87), __LIB_3__::func_526(&Local_87), &Local_281, &iLocal_731, 0, 0, -1, 1))
			{
				iLocal_770 = 2;
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (__LIB_2__::func_1(iLocal_731[iVar0], 0, 1))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_731[iVar0], Local_281[iVar0 /*32*/].f_6, true, false, true, true);
					ENTITY::SET_ENTITY_HEADING(iLocal_731[iVar0], Local_281[iVar0 /*32*/].f_9);
				}
				iVar0++;
			}
			iLocal_770 = 3;
			break;
		case 3:
			iLocal_770 = 5;
			break;
		case 5:
			if (func_85())
			{
				iLocal_770 = 6;
			}
			break;
		case 6:
			if (iLocal_86 == 2)
			{
				__LIB_2__::func_56(iLocal_731[1], 1, 1);
			}
			return true;
	}
	return false;
}

int func_27()
{
	func_87();
	if (__LIB_2__::func_1(iLocal_731[0], 0, 1))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_980))
		{
			if (!bLocal_962)
			{
				if (__LIB_2__::func_1(iLocal_731[0], 0, 1))
				{
					TASK::_TASK_USE_SCENARIO_POINT(iLocal_731[0], iLocal_980, sLocal_998, 0, false, true, 0, false, -1f, false);
					bLocal_962 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_28()
{
	func_88();
	switch (__LIB_0__::func_12())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				func_89();
				return 1;
			}
			break;
		case 38:
			func_89();
			return 1;
	}
	return 0;
}

void func_30()
{
	switch (__LIB_0__::func_12())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				__LIB_1__::func_408(1164928979, 1, 0);
			}
			break;
		case 38:
			__LIB_1__::func_408(527226204, 1, 0);
			break;
	}
}

void func_31()
{
	switch (__LIB_0__::func_12())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				__LIB_3__::func_566(&(iLocal_731[0]), -1543620048);
				__LIB_3__::func_566(&(iLocal_731[1]), 379797347);
			}
			break;
		case 38:
			__LIB_3__::func_566(&(iLocal_731[0]), 1922684772);
			if (iLocal_86 == 0)
			{
				if (__LIB_4__::func_409(38, 1) == joaat("U_M_M_BHT_SKINNERBROTHER"))
				{
					__LIB_5__::func_54(38, 1);
				}
				__LIB_3__::func_566(&(iLocal_731[2]), 1332724617);
				__LIB_3__::func_566(&(iLocal_731[1]), 660824291);
			}
			if (iLocal_86 == 1)
			{
				if (__LIB_4__::func_409(38, 1) == joaat("U_M_M_BHT_SKINNERSEARCH"))
				{
					__LIB_5__::func_54(38, 1);
				}
				__LIB_3__::func_566(&(iLocal_731[2]), -80413685);
				__LIB_3__::func_566(&(iLocal_731[1]), 564117607);
			}
			__LIB_3__::func_459(iLocal_731[2], 0);
			__LIB_4__::func_276(iLocal_731[2], 1, 0);
			break;
	}
}

void func_35()
{
	switch (__LIB_0__::func_12())
	{
		case 105:
			iLocal_987 = VOLUME::_CREATE_VOLUME_BOX(1298.66f, -1215.718f, 78.3682f, 0f, 0f, 9.999997f, 2f, 3.1f, 9f);
			PATHFIND::_0x19C7567D2F2287D6(iLocal_987, 7);
			break;
		case 38:
			iLocal_987 = VOLUME::_CREATE_VOLUME_BOX(-954.5598f, -1203.467f, 54.87126f, 0f, 0f, 0f, 1f, 2f, 4f);
			PATHFIND::_0x19C7567D2F2287D6(iLocal_987, 7);
			break;
	}
}

void func_38()
{
	func_99();
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_752, "Dead", iLocal_731[2], 0);
	ANIMSCENE::START_ANIM_SCENE(Local_752);
}

bool func_39(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_100(uParam0, iParam2);
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
					__LIB_3__::func_433(uParam0, uParam0->f_193, 2f);
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

bool func_40()
{
	if (!Local_87.f_46)
	{
		if (func_109(&iLocal_731, &(Local_87.f_5), &iLocal_913, &uLocal_936, 0, 1, 1))
		{
			if (iLocal_913 != 2048 && iLocal_913 != 65536)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_42()
{
	switch (iLocal_767)
	{
		case 0:
			if (func_112())
			{
				func_113();
				__LIB_2__::func_461(0);
				bLocal_943 = false;
				bLocal_941 = true;
				__LIB_2__::func_411(&(Local_819[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_819[1 /*17*/]), 0, 0);
				iLocal_767 = 1;
			}
			break;
		case 1:
			func_116();
			if (iLocal_765 < 4)
			{
				iLocal_767 = 2;
			}
			else
			{
				iLocal_767 = 4;
			}
			break;
		case 2:
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_731[0], 0);
			if (__LIB_1__::func_205(Global_35, iLocal_987, 1, 0))
			{
				__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(16), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(17), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			}
			__LIB_1__::func_148(&uLocal_1001);
			iLocal_767 = 3;
			break;
		case 3:
			if (__LIB_0__::func_265(&uLocal_1001) > 8f)
			{
				if (!__LIB_1__::func_205(Global_35, iLocal_987, 1, 0))
				{
					func_122();
					bLocal_941 = false;
				}
				bLocal_943 = false;
				bLocal_944 = true;
				iLocal_767 = 4;
			}
			break;
		case 4:
			if ((iLocal_86 != 0 && iLocal_86 != 1) && iLocal_86 != 2)
			{
				bLocal_964 = true;
			}
			return true;
	}
	return false;
}

bool func_43()
{
	switch (iLocal_768)
	{
		case 0:
			if ((__LIB_0__::func_265(&uLocal_1001) > 5f && func_112()) || __LIB_1__::func_205(Global_35, iLocal_987, 1, 0))
			{
				__LIB_1__::func_148(&uLocal_1001);
				iLocal_768 = 1;
			}
			break;
		case 1:
			if ((!__LIB_2__::func_136(iLocal_731[1], 0) && !__LIB_2__::func_136(Global_35, 0)) && !__LIB_2__::func_136(iLocal_731[0], 0))
			{
				__LIB_2__::func_603(&(iLocal_731[1]), &iLocal_854, &Local_875, 1, 1);
				PED::_0xE737D5F14304A2EC(iLocal_731[1], PLAYER::PLAYER_ID(), 120000);
				PED::_0x24C82EF607105FAA(iLocal_731[1], joaat("AGGRESSIVE"));
				__LIB_2__::func_56(iLocal_731[1], 1, 1);
				__LIB_2__::func_603(&(iLocal_731[0]), &iLocal_798, &Local_819, 1, 1);
				PED::_0xE737D5F14304A2EC(iLocal_731[0], PLAYER::PLAYER_ID(), 120000);
				PED::_0x24C82EF607105FAA(iLocal_731[0], joaat("AGGRESSIVE"));
				__LIB_2__::func_56(iLocal_731[0], 1, 1);
				bLocal_941 = true;
				bLocal_943 = false;
				func_116();
				iLocal_768 = 2;
			}
			break;
		case 2:
			__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(18), "", 100f, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_148(&uLocal_1001);
			iLocal_768 = 3;
			break;
		case 3:
			__LIB_1__::func_148(&uLocal_1001);
			iLocal_768 = 4;
			break;
		case 4:
			LAW::_0xF0B67BAD53C35BD9(iLocal_731[0], Global_35, iLocal_731[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("CRIME_DISTURBANCE"));
			LAW::_0xF0B67BAD53C35BD9(iLocal_731[1], Global_35, iLocal_731[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("CRIME_DISTURBANCE"));
			iLocal_768 = 6;
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_46()
{
	func_128();
	func_129();
	func_130();
	func_131();
	func_132();
	if (iLocal_765 > 1)
	{
		func_133();
	}
	if (Local_87.f_48)
	{
		func_134();
		func_135();
	}
	switch (iLocal_765)
	{
		case 0:
			if ((iLocal_86 == 2 || iLocal_86 == 0) || iLocal_86 == 1)
			{
				__LIB_1__::func_991(iLocal_731[2], 0);
			}
			iLocal_765 = 1;
			break;
		case 1:
			if (func_136())
			{
				if (func_137(&Local_87, 1f, 1114636288 /* Float: 60f */, 22f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_731[0]))
				{
					func_138(&Local_87, ENTITY::GET_ENTITY_COORDS(iLocal_731[0], true, false), 25f, 10f, 2, 0, 0, 0);
					__LIB_1__::func_148(&uLocal_1001);
					iLocal_765 = 3;
				}
			}
			break;
		case 3:
			if (func_139())
			{
				__LIB_1__::func_148(&uLocal_1001);
				iLocal_765 = 2;
			}
			break;
		case 2:
			switch (iLocal_930)
			{
				case 0:
					if (bLocal_946)
					{
						if (iLocal_86 == 2)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_731[0], 1357.49f, -1311.44f, 75.9f, 1.5f, -1, 0.25f, 0, 40000f);
							iLocal_930++;
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_731[0], -755.42f, -1269.1f, 43.02f, 1.5f, -1, 0.25f, 0, 40000f);
							iLocal_930++;
						}
					}
					else
					{
						if (!__LIB_2__::func_1(iLocal_731[0], 0, 1))
						{
							iLocal_930++;
						}
						if (__LIB_0__::func_265(&uLocal_1001) > 2f)
						{
							if (func_140())
							{
								iLocal_930++;
							}
						}
					}
					break;
				case 1:
					if (func_141())
					{
						iLocal_930++;
					}
					break;
				case 2:
					__LIB_1__::func_148(&uLocal_1001);
					iLocal_765 = 5;
					bLocal_945 = false;
					break;
			}
			break;
		case 4:
			if (func_142())
			{
				bLocal_945 = true;
				iLocal_765 = 5;
			}
			break;
		case 5:
			if (!bLocal_945)
			{
				if (__LIB_0__::func_265(&uLocal_1001) > 160f || __LIB_0__::func_94(Global_35, Local_87.f_51, 1) > 30f)
				{
					func_144();
					return true;
				}
			}
			if (bLocal_945)
			{
				if (PED::IS_PED_INJURED(iLocal_731[1]) && PED::IS_PED_INJURED(iLocal_731[0]))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_51(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		__LIB_3__::func_468(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_100(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_162(uParam0->f_3, uParam0->f_185);
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
		func_163(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_52()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_988))
	{
		POPULATION::_0x74C2B3DC0B294102(iLocal_988);
		POPULATION::_0xA1CFB35069D23C23(iLocal_988);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_979, false);
		VOLUME::_DELETE_VOLUME(iLocal_988);
	}
}

bool func_66()
{
	if (func_189())
	{
		return true;
	}
	return false;
}

void func_67()
{
	switch (__LIB_0__::func_12())
	{
		case 105:
			vLocal_14 = { 1282.87f, -1224.5f, 81.52f };
			Local_281[0 /*32*/].f_6 = { 1298.23f, -1214.09f, 81.39f };
			Local_281[0 /*32*/].f_9 = -157.81f;
			Local_281[1 /*32*/].f_6 = { 1291.59f, -1219.94f, 80.78f };
			Local_281[1 /*32*/].f_9 = -83.96f;
			vLocal_17 = { 1304.12f, -1136.88f, 80.25f };
			vLocal_20 = { 1370.99f, -1155.04f, 79.8f };
			vLocal_23 = { 1298.71f, -1216.46f, 79.54f };
			fLocal_762 = -41.88f;
			break;
		case 38:
			Local_281[0 /*32*/].f_6 = { -955.24f, -1200.35f, 55.41f };
			Local_281[0 /*32*/].f_9 = -166.91f;
			Local_281[2 /*32*/].f_6 = { -954.5765f, -1203.323f, 53.5528f };
			Local_281[2 /*32*/].f_9 = 0f;
			Local_281[1 /*32*/].f_6 = { -950.65f, -1206.26f, 54.3f };
			Local_281[1 /*32*/].f_9 = 35.72f;
			vLocal_14 = { -974.81f, -1178.95f, 57.23f };
			vLocal_17 = { -952.19f, -1203.54f, 53.96f };
			fLocal_762 = 68.37f;
			vLocal_23 = { -954.1f, -1203.55f, 54.48f };
			vLocal_26 = { -954.55f, -1203.43f, 53.56f };
			break;
	}
}

void func_68()
{
	__LIB_1__::func_266(&iLocal_988, Local_87.f_51, 0f, 0f, 0f, vLocal_995);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_988))
	{
		POPULATION::_0x18262CAFEBB5FBE1(iLocal_988, 0, 0, 0, -1, -1, 0);
		POPULATION::_0xB56D41A694E42E86(iLocal_988, 0, 0, 0, -1, -1, 0);
		uLocal_979 = PED::_0x4C39C95AE5DB1329(iLocal_988, 0, 15);
	}
}

void func_70()
{
	switch (__LIB_0__::func_12())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				Local_281[0 /*32*/].f_1 = joaat("RE_TOWNBURIAL_MALES_01");
				Local_281[0 /*32*/] = 4;
				StringCopy(&(Local_281[0 /*32*/].f_23), "RHD_PREACHER", 64);
				Local_281[0 /*32*/].f_3 = -1543620048;
				Local_281[1 /*32*/].f_1 = joaat("RE_TOWNBURIAL_MALES_01");
				Local_281[1 /*32*/] = 4;
				StringCopy(&(Local_281[1 /*32*/].f_23), "0827_S_M_M_LiveryWorker_01_WHITE_03", 64);
				Local_281[1 /*32*/].f_3 = 379797347;
			}
			break;
		case 38:
			Local_281[0 /*32*/].f_1 = joaat("RE_TOWNBURIAL_MALES_01");
			Local_281[0 /*32*/] = 4;
			StringCopy(&(Local_281[0 /*32*/].f_23), "RHD_PREACHER", 64);
			Local_281[0 /*32*/].f_3 = 1922684772;
			if (iLocal_86 == 0)
			{
				Local_281[2 /*32*/].f_1 = joaat("U_M_M_BHT_SKINNERBROTHER");
				Local_281[2 /*32*/] = 4;
				Local_281[2 /*32*/].f_3 = 1332724617;
				Local_281[1 /*32*/].f_1 = joaat("RE_TOWNBURIAL_MALES_01");
				Local_281[1 /*32*/] = 4;
				Local_281[1 /*32*/].f_3 = 660824291;
				StringCopy(&(Local_281[1 /*32*/].f_23), "FAKE_BEGGAR", 64);
			}
			else if (iLocal_86 == 1)
			{
				Local_281[2 /*32*/].f_1 = joaat("U_M_M_BHT_SKINNERSEARCH");
				Local_281[2 /*32*/] = 4;
				Local_281[2 /*32*/].f_3 = -80413685;
				Local_281[1 /*32*/].f_1 = joaat("RE_TOWNBURIAL_MALES_01");
				Local_281[1 /*32*/] = 4;
				Local_281[1 /*32*/].f_3 = 564117607;
				StringCopy(&(Local_281[1 /*32*/].f_23), "0828_S_M_M_LiveryWorker_01_WHITE_04", 64);
			}
			break;
	}
	func_67();
	__LIB_3__::func_445(&Local_281);
}

void func_71()
{
	Local_29[11 /*2*/] = "amb@world_human_leaning@male@wall@back@legs_crossed@enter";
	Local_29[11 /*2*/].f_1 = "enter_front";
	switch (__LIB_0__::func_12())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				Local_29[0 /*2*/] = "script_re@town_burial@mourner@rhodes@generic";
				Local_29[1 /*2*/].f_1 = "line_01";
				Local_29[2 /*2*/].f_1 = "line_02";
				Local_29[3 /*2*/].f_1 = "";
				Local_29[4 /*2*/].f_1 = "neg_response";
				__LIB_3__::func_318(Local_29[0 /*2*/], &uLocal_506);
				Local_29[9 /*2*/] = "amb@world_human_leaning@male@wall@back@legs_crossed@base";
				Local_29[9 /*2*/].f_1 = "base";
				__LIB_3__::func_318(Local_29[9 /*2*/], &uLocal_506);
			}
			break;
		case 38:
			if (iLocal_86 == 0 || iLocal_86 == 1)
			{
				Local_29[0 /*2*/] = "script_re@town_burial@mourner@valentine@generic";
				Local_29[1 /*2*/].f_1 = "line_01";
				Local_29[2 /*2*/].f_1 = "line_02";
				Local_29[3 /*2*/].f_1 = "";
				Local_29[4 /*2*/].f_1 = "neg_response";
				__LIB_3__::func_318(Local_29[0 /*2*/], &uLocal_506);
				Local_29[9 /*2*/] = "amb@world_human_leaning@male@wall@back@legs_crossed@base";
				Local_29[9 /*2*/].f_1 = "base";
				__LIB_3__::func_318(Local_29[9 /*2*/], &uLocal_506);
				Local_29[10 /*2*/] = "amb@world_human_leaning@male@wall@back@legs_crossed@exit";
				Local_29[10 /*2*/].f_1 = "exit_back";
				__LIB_3__::func_318(Local_29[10 /*2*/], &uLocal_506);
			}
			break;
	}
}

void func_72()
{
	Local_773 = { 0f, 0f, 0f };
	Local_773.f_4 = 21030;
	Local_773.f_3 = Global_35;
	Local_773.f_8 = 4;
	Local_773.f_19 = 4;
	Local_773.f_21 = 4;
	Local_773.f_17 = 4;
	Local_773.f_18 = 4;
	Local_773.f_7 = 0;
}

void func_73()
{
	Local_29[12 /*2*/] = "props_misc@church_bells";
	Local_29[12 /*2*/].f_1 = "loop";
	__LIB_3__::func_318(Local_29[12 /*2*/], &uLocal_506);
}

void func_74()
{
	Local_752.f_4 = "script@beat@town@townburial@coffin";
	sLocal_760[0] = "Pb_dead";
	Local_752 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_752.f_4, 0, 0, false, true);
}

bool func_78()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_752, true, false))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_752, true))
		{
			ANIMSCENE::LOAD_ANIM_SCENE(Local_752);
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_79()
{
	bool bVar0;
	if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_752, sLocal_760[0]))
	{
		if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_752, sLocal_760[0]))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_752, sLocal_760[0]);
		}
		bVar0 = false;
	}
	return !bVar0;
	return false;
}

bool func_85()
{
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[1], "Flee_Scared");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[1], "DEFAULT_DEFUSE");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[0], "Default_Curious");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[0], "DEFAULT_DEFUSE");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[0], "Flee_Panic");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[1], "Flee_Panic");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[0], "Interaction_Panic");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[1], "Interaction_Panic");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[0], "TaskCombat_Panic");
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_731[1], "TaskCombat_Panic");
	if (((((((((PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[1], "Flee_Scared") && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[0], "Default_Curious")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[0], "DEFAULT_DEFUSE")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[1], "DEFAULT_DEFUSE")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[0], "Flee_Panic")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[1], "Flee_Panic")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[0], "Interaction_Panic")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[1], "Interaction_Panic")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[0], "TaskCombat_Panic")) && PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iLocal_731[1], "TaskCombat_Panic"))
	{
		return true;
	}
	return false;
}

void func_87()
{
	vector3 vVar0;
	vVar0 = { Local_281[0 /*32*/].f_6 - Vector(1f, 0f, 0f) };
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_731[0]) && !TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_980))
	{
		iLocal_980 = __LIB_2__::func_944(joaat("SCRIPT_RETB_PREACHER"), vVar0, Local_281[0 /*32*/].f_9, 0, 0, 0);
		sLocal_998 = "SCRIPT_RETB_PREACHER_Aa";
	}
}

void func_88()
{
	vector3 vVar0;
	vVar0 = { Local_281[1 /*32*/].f_6 };
	if ((iLocal_86 == 0 || iLocal_86 == 1) || iLocal_86 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_731[1]) && !TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_986))
		{
			iLocal_986 = __LIB_2__::func_944(joaat("WORLD_HUMAN_LEAN_BACK_WALL_NO_PROPS"), vVar0, Local_281[1 /*32*/].f_9, 0, 0, 0);
			sLocal_999 = "WORLD_HUMAN_LEAN_POST_RIGHT_MALE_A";
		}
	}
}

void func_89()
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_986))
	{
		if (__LIB_2__::func_1(iLocal_731[1], 0, 1))
		{
			TASK::_TASK_USE_SCENARIO_POINT(iLocal_731[1], iLocal_986, sLocal_999, 0, true, false, 0, false, -1f, false);
		}
	}
}

void func_99()
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_752, vLocal_26, 0f, 0f, -180f, 2);
}

void func_100(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_162(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

bool func_109(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
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
		if (__LIB_17__::func_891((*iParam0)[*uParam3], 0, iParam1, iParam2, 0, 0))
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

bool func_112()
{
	if (func_109(&iLocal_731, &(Local_87.f_5), &iLocal_913, &uLocal_936, 0, 1, 1))
	{
		if (iLocal_913 == 2048)
		{
			return true;
		}
		if (iLocal_913 == 64)
		{
			return true;
		}
		if (!bLocal_948)
		{
			if (iLocal_913 == 65536)
			{
				return true;
			}
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_987, 1, 0))
	{
		if (!bLocal_965)
		{
			__LIB_3__::func_465(1, 0, 0, 0, iLocal_731[0], 0, 1065353216 /* Float: 1f */, 0);
			bLocal_965 = true;
		}
		return true;
	}
	if (func_250())
	{
		return true;
	}
	if (func_251())
	{
		return true;
	}
	if (bLocal_964)
	{
		return true;
	}
	return false;
}

void func_113()
{
	__LIB_2__::func_411(&(Local_819[1 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_819[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_875[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_875[1 /*17*/]), 0, 0);
}

void func_116()
{
	func_259();
	func_260(iLocal_731[0], Global_35, 2, 2, -1f);
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_731[1], 0))
	{
		func_260(iLocal_731[1], Global_35, 2, 2, 1086324736 /* Float: 6f */);
	}
	else
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_731[1], Global_35, -1, -1f, -1f, -1f);
	}
}

char* func_118(int iParam0)
{
	if (iLocal_86 == 2)
	{
		switch (iParam0)
		{
			case 0:
				return "RE_TB_RHD_V3_FUNERAL_INITIAL_A";
			case 1:
				return "RE_TB_RHD_V3_FUNERAL_INITIAL_B";
			case 2:
				return "RE_TB_RHD_V3_FNL_OUTLAW_A";
			case 3:
				return "RE_TB_RHD_V3_FNL_OUTLAW_B";
			case 4:
				return "RE_TB_RHD_V3_FNL_OUTLAW_C";
			case 5:
				return "RE_TB_RHD_V3_FNL_OUTLAW_D";
			case 6:
				return "RE_TB_RHD_V3_FNL_OUTLAW_E";
			case 7:
				return "RE_TB_RHD_V3_FNL_OUTLAW_F";
			case 8:
				return "RE_TB_RHD_V3_FNL_OUTLAW_G";
			case 9:
				return "RE_TB_RHD_V3_FNL_OUTLAW_E";
			case 10:
				return "RE_TB_RHD_V3_TALK";
			case 11:
				return "RE_TB_RHD_V3_TALK_POS_RPLY";
			case 12:
				return "RE_TB_RHD_V3_TALK_POS";
			case 14:
				return "RE_TB_RHD_V3_TALK_NEG_RPLY";
			case 15:
				return "RE_TB_RHD_V3_TALK_NEG";
			case 16:
				return "RE_TB_RHD_V0_WRN_D";
			case 17:
				return "RE_TB_RHD_V0_WRN_A";
			case 18:
				return "RE_TB_RHD_V0_WRN_C";
			case 19:
				return "";
			case 20:
				return "";
			case 21:
				return "RE_TB_RHD_V3_AGGRO_A";
			case 22:
				return "";
			case 23:
				return "";
			case 24:
				return "";
			case 25:
				return "";
			case 26:
				return "";
			case 33:
				return "RE_TB_RHD_V3_PLAYER_ILO_POS_B";
			case 34:
				return "RE_TB_RHD_V3_PLAYER_ILO_NEG_B";
			case 35:
				return "RE_TB_RHD_V3_PREACHER_ILO_POS_B";
			case 36:
				return "RE_TB_RHD_V3_PREACHER_ILO_NEG_B";
			case 39:
				return "RE_TB_RHD_V3_PLY_ILO_POS";
			case 40:
				return "RE_TB_RHD_V3_PREACHER_ILO_POS";
			case 41:
				return "RE_TB_RHD_V3_PLY_ILO_NEG_A";
			case 42:
				return "RE_TB_RHD_V3_PREACHER_ILO_NEG_A";
			case 43:
				return "RE_TB_RHD_V3_PLY_DEFUSE";
			case 45:
				return "RE_TB_RHD_V3_PREACHER_DEFUSE";
			case 44:
				return "RE_TB_RHD_V3_PLY_ILO_NEG_B";
			case 46:
				return "RE_TB_RHD_V3_PREACHER_ILO_NEG_B2";
			case 47:
				return "RE_TB_RHD_V3_PLY_ILO_NEG_C";
			case 48:
				return "RE_TB_RHD_V3_PREACHER_ILO_NEG_C";
		}
	}
	else if (iLocal_86 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return "RE_TB_BLK_V1_FUNERAL_INITIAL_A";
			case 1:
				return "RE_TB_BLK_V1_FUNERAL_INITIAL_B";
			case 2:
				return "RE_TB_BLK_V1_FNL_OUTLAW_A";
			case 3:
				return "RE_TB_BLK_V1_FNL_OUTLAW_B";
			case 4:
				return "RE_TB_BLK_V1_FNL_OUTLAW_C";
			case 5:
				return "RE_TB_BLK_V1_FNL_OUTLAW_D";
			case 6:
				return "RE_TB_BLK_V1_FNL_OUTLAW_E";
			case 7:
				return "RE_TB_BLK_V1_FNL_OUTLAW_F";
			case 9:
				return "RE_TB_BLK_V1_FNL_OUTLAW_END";
			case 10:
				return "RE_TB_BLK_V1_TALK";
			case 11:
				return "RE_TB_BLK_V1_TALK_POS_RPLY";
			case 12:
				return "RE_TB_BLK_V1_TALK_POS";
			case 14:
				return "RE_TB_BLK_V1_TALK_NEG_RPLY";
			case 15:
				return "RE_TB_BLK_V1_TALK_NEG";
			case 16:
				return "RE_TB_BLK_V0_WRN_D";
			case 17:
				return "RE_TB_BLK_V0_WRN_A";
			case 18:
				return "RE_TB_BLK_V0_WRN_C";
			case 19:
				return "";
			case 20:
				return "";
			case 21:
				return "RE_TB_BLK_V1_AGGRO_A";
			case 22:
				return "";
			case 23:
				return "";
			case 24:
				return "";
			case 25:
				return "";
			case 26:
				return "";
			case 27:
				return "";
			case 28:
				return "";
			case 33:
				return "RE_TB_BLK_V1_PLAYER_ILO_POS_B";
			case 34:
				return "RE_TB_BLK_V1_PLAYER_ILO_NEG_B";
			case 35:
				return "RE_TB_BLK_V1_PREACHER_MID_ILO_POS_B";
			case 36:
				return "RE_TB_BLK_V1_PREACHER_MID_ILO_NEG_B";
			case 39:
				return "RE_TB_BLK_V1_PLY_ILO_POS";
			case 40:
				return "RE_TB_BLK_V1_PREACHER_ILO_POS";
			case 41:
				return "RE_TB_BLK_V1_PLY_ILO_NEG_A";
			case 42:
				return "RE_TB_BLK_V1_PREACHER_ILO_NEG_A";
			case 43:
				return "RE_TB_BLK_V1_PLY_DEFUSE";
			case 45:
				return "RE_TB_BLK_V1_PREACHER_DEFUSE";
			case 44:
				return "RE_TB_BLK_V1_PLY_ILO_NEG_B";
			case 46:
				return "RE_TB_BLK_V1_PREACHER_MID_ILO_POS_B";
			case 47:
				return "RE_TB_BLK_V1_PLY_ILO_NEG_C";
			case 48:
				return "RE_TB_BLK_V1_PREACHER_ILO_NEG_C";
		}
	}
	else if (iLocal_86 == 1)
	{
		switch (iParam0)
		{
			case 0:
				return "RE_TB_BLK_V2_FUNERAL_INITIAL_A";
			case 1:
				return "RE_TB_BLK_V2_FUNERAL_INITIAL_B";
			case 2:
				return "RE_TB_BLK_V2_FNL_OUTLAW_A";
			case 3:
				return "RE_TB_BLK_V2_FNL_OUTLAW_B";
			case 4:
				return "RE_TB_BLK_V2_FNL_OUTLAW_C";
			case 5:
				return "RE_TB_BLK_V2_FNL_OUTLAW_D";
			case 6:
				return "RE_TB_BLK_V2_FNL_OUTLAW_E";
			case 7:
				return "RE_TB_BLK_V2_FNL_OUTLAW_F";
			case 9:
				return "RE_TB_BLK_V2_FNL_OUTLAW_END";
			case 10:
				return "RE_TB_BLK_V2_TALK";
			case 11:
				return "RE_TB_BLK_V2_TALK_POS_RPLY";
			case 12:
				return "RE_TB_BLK_V2_TALK_POS_RPLY";
			case 14:
				return "RE_TB_BLK_V2_TALK_NEG_RPLY";
			case 15:
				return "RE_TB_BLK_V2_TALK_NEG_RPLY";
			case 16:
				return "RE_TB_BLK_V0_WRN_D";
			case 17:
				return "RE_TB_BLK_V0_WRN_A";
			case 18:
				return "RE_TB_BLK_V0_WRN_C";
			case 19:
				return "";
			case 20:
				return "";
			case 21:
				return "RE_TB_BLK_V2_AGGRO_A";
			case 22:
				return "";
			case 23:
				return "";
			case 24:
				return "";
			case 25:
				return "";
			case 26:
				return "";
			case 27:
				return "";
			case 28:
				return "RE_TB_BLK_V2_PREACHER_INTERACTION_B";
			case 33:
				return "RE_TB_BLK_V2_PLAYER_ILO_POS_B";
			case 34:
				return "RE_TB_BLK_V2_PLAYER_ILO_NEG_B";
			case 35:
				return "RE_TB_BLK_V2_PREACHER_MID_ILO_POS_B";
			case 36:
				return "RE_TB_BLK_V2_PREACHER_MID_ILO_NEG_B";
			case 39:
				return "RE_TB_BLK_V2_PLY_ILO_POS";
			case 40:
				return "RE_TB_BLK_V2_PREACHER_ILO_POS";
			case 41:
				return "RE_TB_BLK_V2_PLY_ILO_NEG_A";
			case 42:
				return "RE_TB_BLK_V2_PREACHER_ILO_NEG_A";
			case 43:
				return "RE_TB_BLK_V2_PLY_DEFUSE";
			case 45:
				return "RE_TB_BLK_V2_PREACHER_DEFUSE";
			case 44:
				return "RE_TB_BLK_V2_PLY_ILO_NEG_B";
			case 46:
				return "RE_TB_BLK_V2_PREACHER_MID_ILO_NEG_B";
			case 47:
				return "RE_TB_BLK_V2_PLY_ILO_NEG_C";
			case 48:
				return "RE_TB_BLK_V2_PREACHER_ILO_NEG_C";
		}
	}
	return "RERC_ODR_V1_END_A";
}

void func_122()
{
	func_266();
	func_267(iLocal_731[0], 2);
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_731[1], 0))
	{
		func_267(iLocal_731[1], 2);
	}
	else
	{
		func_268();
	}
}

void func_128()
{
	if (!bLocal_963)
	{
		if (iLocal_765 > 1)
		{
			if (PED::_0x7F9B9791D4CB71F6(Global_35, iLocal_731[0], 0, 0) == 1)
			{
				if (iLocal_769 > 2)
				{
					Local_87.f_44 = 1;
					bLocal_963 = true;
					func_284();
				}
			}
		}
	}
}

void func_129()
{
	if (bLocal_946)
	{
		if (bLocal_960)
		{
			if (func_285())
			{
				bLocal_960 = false;
			}
		}
	}
}

void func_130()
{
	if (iLocal_765 > 1)
	{
		if (!bLocal_961)
		{
			if (__LIB_17__::func_891(iLocal_731[1], 0, &(Local_87.f_5), &iLocal_913, 1, 0))
			{
				if (iLocal_913 == 2048)
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_978);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_978);
					if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_731[2], iLocal_987, true, 0))
					{
						TASK::TASK_CLIMB(0, true);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_20, 1f, -1, 0.25f, 0, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_20, 5f, 0, false, false, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_978);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_731[1], iLocal_978);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_978);
					PED::SET_PED_KEEP_TASK(iLocal_731[2], true);
					bLocal_961 = true;
				}
			}
		}
	}
}

void func_131()
{
	iLocal_918 = func_286(&(iLocal_731[0]), &iLocal_854, 20f, &Local_875, &(Local_87.f_192), 0f, 1, 0, 0, iLocal_914, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	if (!bLocal_959)
	{
		switch (iLocal_928)
		{
			case 0:
				if (__LIB_2__::func_136(iLocal_731[0], 0))
				{
					func_287(0);
				}
				else
				{
					func_287(1);
				}
				if (iLocal_918 == 0)
				{
					func_287(0);
					__LIB_2__::func_411(&(Local_819[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_819[1 /*17*/]), 0, 0);
					func_260(iLocal_731[0], Global_35, 1, 1, 1086324736 /* Float: 6f */);
					__LIB_2__::func_303(Global_35, iLocal_731[0], func_118(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					bLocal_968 = true;
					bLocal_941 = true;
					iLocal_928 = 1;
				}
				else if (iLocal_918 == 1)
				{
					func_287(0);
					func_260(iLocal_731[0], Global_35, 3, 1, 1086324736 /* Float: 6f */);
					__LIB_2__::func_303(Global_35, iLocal_731[0], func_118(34), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_2__::func_411(&(Local_819[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_819[1 /*17*/]), 0, 0);
					bLocal_968 = true;
					bLocal_941 = true;
					iLocal_928 = 2;
				}
				break;
			case 1:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(35), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_928 = 3;
				}
				break;
			case 2:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(36), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_928 = 3;
				}
				break;
			case 3:
				if (!__LIB_2__::func_136(iLocal_731[0], 0))
				{
					bLocal_968 = false;
					bLocal_941 = false;
					iLocal_928++;
				}
				break;
		}
	}
	else
	{
		switch (iLocal_927)
		{
			case 0:
				__LIB_2__::func_360(&(Local_875[0 /*17*/]), __LIB_2__::func_460(7));
				__LIB_2__::func_360(&(Local_875[1 /*17*/]), __LIB_2__::func_460(10));
				__LIB_2__::func_451(&iLocal_854, 0);
				iLocal_927++;
				break;
			case 1:
				if (__LIB_2__::func_136(iLocal_731[0], 0))
				{
					func_287(0);
				}
				else
				{
					func_287(1);
				}
				if (iLocal_918 == 0)
				{
					func_287(0);
					__LIB_2__::func_303(Global_35, iLocal_731[0], func_118(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 2;
				}
				else if (iLocal_918 == 1)
				{
					func_287(0);
					__LIB_2__::func_303(Global_35, iLocal_731[0], func_118(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 3;
				}
				break;
			case 2:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 4;
				}
				break;
			case 3:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 5;
				}
				break;
			case 4:
				if (!__LIB_2__::func_136(iLocal_731[0], 0))
				{
					__LIB_2__::func_411(&(Local_875[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_875[1 /*17*/]), 1, 0);
					if (iLocal_918 == 1)
					{
						func_287(0);
						__LIB_2__::func_303(Global_35, iLocal_731[0], func_118(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						bLocal_967 = true;
						iLocal_927 = 6;
					}
				}
				else
				{
					func_287(0);
				}
				break;
			case 5:
				if (!__LIB_2__::func_136(iLocal_731[0], 0))
				{
					__LIB_2__::func_360(&(Local_875[0 /*17*/]), __LIB_2__::func_460(8));
					__LIB_2__::func_360(&(Local_875[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_451(&iLocal_854, 0);
					iLocal_927 = 6;
				}
				break;
			case 6:
				if (!bLocal_967)
				{
					if (iLocal_918 == 0)
					{
						func_287(0);
						__LIB_2__::func_303(Global_35, iLocal_731[0], func_118(43), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						iLocal_927 = 7;
					}
				}
				if (iLocal_918 == 1)
				{
					func_287(0);
					__LIB_2__::func_303(Global_35, iLocal_731[0], func_118(44), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 8;
				}
				break;
			case 7:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(45), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 9;
				}
				break;
			case 8:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(46), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 9;
				}
				break;
			case 9:
				if (!__LIB_2__::func_136(iLocal_731[0], 0))
				{
					__LIB_2__::func_360(&(Local_875[0 /*17*/]), __LIB_2__::func_460(8));
					__LIB_2__::func_360(&(Local_875[1 /*17*/]), __LIB_2__::func_460(10));
					__LIB_2__::func_451(&iLocal_854, 0);
					__LIB_2__::func_411(&(Local_875[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_875[1 /*17*/]), 1, 0);
					iLocal_927 = 10;
				}
				break;
			case 10:
				if (iLocal_918 == 1)
				{
					func_287(0);
					__LIB_2__::func_303(Global_35, iLocal_731[0], func_118(47), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					iLocal_927 = 11;
				}
				break;
			case 11:
				if (!__LIB_2__::func_136(Global_35, 0))
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(48), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					TASK::_TASK_FLEE_FROM_PED(iLocal_731[0], Global_35, 0f, 0f, 0f, 100f, -1, 0, 3f, 0);
					PED::_0xE737D5F14304A2EC(iLocal_731[0], PLAYER::PLAYER_ID(), 120000);
					PED::_0x24C82EF607105FAA(iLocal_731[0], joaat("AGGRESSIVE"));
					__LIB_2__::func_56(iLocal_731[0], 1, 1);
					__LIB_2__::func_788(&(iLocal_731[0]), 1, 0, 1);
					iLocal_927 = 12;
				}
				break;
			case 12:
				break;
		}
	}
}

void func_132()
{
	int iVar0;
	if (iLocal_86 != 2)
	{
		iLocal_940 = func_286(&(iLocal_731[1]), &iLocal_798, 20f, &Local_819, &(Local_87.f_192), 0, 1, 0, "", iLocal_914, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if ((bLocal_943 && !func_112()) && !bLocal_968)
		{
			iLocal_933 = 15;
			iLocal_934 = 12;
			iLocal_935 = 5;
			if (bLocal_942)
			{
				if (__LIB_2__::func_1(iLocal_731[1], 0, 1))
				{
					if (__LIB_2__::func_118(iLocal_731[1], 1, 1) > IntToFloat(iLocal_933) || __LIB_1__::func_205(Global_35, iLocal_987, 1, 0))
					{
						__LIB_2__::func_411(&(Local_819[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_819[1 /*17*/]), 0, 0);
						__LIB_1__::func_683(&iLocal_920, 2);
						func_89();
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_731[1], false, 0f);
						func_267(iLocal_731[0], 1);
						bLocal_948 = false;
						bLocal_941 = false;
						bLocal_942 = false;
					}
				}
			}
			if (!__LIB_0__::func_27(iLocal_920, 2))
			{
				switch (iLocal_771)
				{
					case 0:
						__LIB_2__::func_411(&(Local_819[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_819[1 /*17*/]), 0, 0);
						if (__LIB_2__::func_118(iLocal_731[1], 1, 1) < IntToFloat(iLocal_934))
						{
							_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_731[1], &Local_773);
							if (__LIB_2__::func_118(iLocal_731[1], 1, 1) < IntToFloat(iLocal_935))
							{
								iLocal_771 = 1;
							}
						}
						break;
					case 1:
						if (__LIB_2__::func_118(iLocal_731[1], 1, 1) < IntToFloat(iLocal_935) && ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_990, true, 0))
						{
							if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_731[1], 0))
							{
								func_260(iLocal_731[1], Global_35, 2, 1, 60f);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&iVar0);
								TASK::TASK_REACT(0, Global_35, 0f, 0f, 0f, "Default_Curious", 1f, 60f, 4);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
								__LIB_1__::func_474(iLocal_731[1], &iVar0, 0, 0, 1, 1);
							}
							bLocal_942 = true;
							bLocal_948 = true;
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_731[1], true, 0f);
							iLocal_771 = 2;
						}
						break;
					case 2:
						if ((__LIB_2__::func_1(iLocal_731[1], 0, 1) && bLocal_948) && !__LIB_2__::func_136(iLocal_731[0], 0))
						{
							__LIB_2__::func_303(iLocal_731[1], Global_35, func_118(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							func_260(iLocal_731[1], Global_35, 2, 1, 1086324736 /* Float: 6f */);
							if (!bLocal_963)
							{
								Local_87.f_44 = 1;
								bLocal_963 = true;
								func_284();
							}
							iLocal_949 = 1;
							__LIB_1__::func_148(&uLocal_1001);
							__LIB_1__::func_148(&uLocal_1025);
							iLocal_771 = 3;
						}
						break;
					case 3:
						if (!__LIB_2__::func_136(iLocal_731[1], 0))
						{
							__LIB_2__::func_411(&(Local_819[0 /*17*/]), 1, 0);
							__LIB_2__::func_411(&(Local_819[1 /*17*/]), 1, 0);
							if (iLocal_940 == 0)
							{
								__LIB_2__::func_411(&(Local_819[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_819[1 /*17*/]), 0, 0);
								iLocal_771 = 4;
							}
							if (iLocal_940 == 1)
							{
								__LIB_2__::func_411(&(Local_819[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_819[1 /*17*/]), 0, 0);
								iLocal_771 = 5;
							}
							if (__LIB_0__::func_265(&uLocal_1001) > 15f)
							{
								__LIB_2__::func_411(&(Local_819[0 /*17*/]), 0, 0);
								__LIB_2__::func_411(&(Local_819[1 /*17*/]), 0, 0);
								iLocal_771 = 7;
							}
						}
						break;
					case 4:
						__LIB_2__::func_303(Global_35, iLocal_731[1], func_118(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						iLocal_771 = 6;
						break;
					case 5:
						__LIB_2__::func_303(Global_35, iLocal_731[1], func_118(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						iLocal_771 = 7;
						break;
					case 6:
						if (!__LIB_2__::func_136(Global_35, 0))
						{
							func_260(iLocal_731[1], Global_35, 2, 1, 1086324736 /* Float: 6f */);
							__LIB_2__::func_303(iLocal_731[1], Global_35, func_118(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							iLocal_771 = 8;
						}
						break;
					case 7:
						if (!__LIB_2__::func_136(Global_35, 0))
						{
							func_260(iLocal_731[1], Global_35, 1, 2, 1086324736 /* Float: 6f */);
							__LIB_2__::func_303(iLocal_731[1], Global_35, func_118(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							iLocal_771 = 8;
						}
						break;
					case 8:
						if (!__LIB_2__::func_136(iLocal_731[1], 0))
						{
							iLocal_771 = 13;
						}
						break;
					case 9:
						break;
					case 10:
						break;
					case 11:
						break;
					case 12:
						break;
					case 13:
						__LIB_2__::func_480(&Local_819, 0, 0, 1, 0);
						PED::_0x24C82EF607105FAA(iLocal_731[1], joaat("AGGRESSIVE"));
						TASK::_0x541E5B41DCA45828(iLocal_731[0], 1, 0);
						iLocal_771 = 14;
						break;
					case 14:
						TASK::TASK_CLEAR_LOOK_AT(iLocal_731[1]);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_731[1], false, 0f);
						if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_731[1]))
						{
							TASK::_TASK_USE_SCENARIO_POINT(iLocal_731[1], iLocal_986, sLocal_999, 0, false, false, 0, false, -1f, false);
						}
						iLocal_947 = 0;
						bLocal_948 = false;
						bLocal_943 = false;
						bLocal_941 = false;
						break;
				}
			}
		}
	}
}

void func_133()
{
	int iVar0;
	if ((iLocal_86 == 2 || iLocal_86 == 0) || iLocal_86 == 1)
	{
		if (!bLocal_944)
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (__LIB_2__::func_1(iLocal_731[iVar0], 0, 1))
				{
					PED::_0x8B3B71C80A29A4BB(iLocal_731[iVar0], joaat("MOODNORMAL"), 6);
				}
				iVar0++;
			}
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 7)
			{
				if (__LIB_2__::func_1(iLocal_731[iVar0], 0, 1))
				{
					PED::_0x8B3B71C80A29A4BB(iLocal_731[iVar0], joaat("MOODANGRY"), 6);
				}
				iVar0++;
			}
		}
	}
}

void func_134()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_731[0], -1026974320))
	{
		bLocal_950 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_731[0], 2022082827))
	{
		bLocal_951 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_731[0], -432511891))
	{
		bLocal_952 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_731[0], -1707488143))
	{
		bLocal_953 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_731[0], -1949159518))
	{
		bLocal_954 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_731[0], 1118641373))
	{
		bLocal_955 = true;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_731[0], -1353779557))
	{
		bLocal_956 = true;
	}
}

void func_135()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_2__::func_1(iLocal_731[iVar0], 0, 1))
		{
			PED::SET_PED_RESET_FLAG(iLocal_731[iVar0], 12, true);
		}
		iVar0++;
	}
}

bool func_136()
{
	float fVar0;
	float fVar1;
	switch (__LIB_0__::func_12())
	{
		case 105:
			fVar0 = 55f;
			fVar1 = 45f;
			break;
		case 38:
			fVar0 = 50f;
			fVar1 = 30f;
			break;
	}
	switch (iLocal_932)
	{
		case 0:
			if (__LIB_0__::func_665(iLocal_731[0], Global_35, 1, 1) < fVar0)
			{
				__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(0), "", 100f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				__LIB_2__::func_315(1891783641, iLocal_731[0], 1);
				__LIB_1__::func_148(&uLocal_1013);
				iLocal_932++;
			}
			break;
		case 1:
			if ((__LIB_0__::func_265(&uLocal_1013) > 4f && __LIB_0__::func_665(iLocal_731[0], Global_35, 1, 1) < fVar1) || __LIB_0__::func_265(&uLocal_1013) > 7f)
			{
				if (!__LIB_2__::func_136(iLocal_731[0], 0))
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(1), "", 100f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_932++;
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_137(var uParam0, float fParam1, int iParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
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
				STATS::_0xB2A38826E5886E83(func_162(uParam0->f_3, uParam0->f_185), 0);
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
					STATS::_0xB2A38826E5886E83(func_162(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_138(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, float fParam9)
{
	float fVar0;
	fVar0 = 35f;
	if (__LIB_1__::func_923())
	{
		fVar0 = 30f;
	}
	func_295(iParam6, vParam1 + Vector(2f, 0f, 0f), iParam4, iParam5, fParam9, iParam7, 1073741824 /* Float: 2f */, uParam8, fVar0, 3, 1, 1);
	uParam0->f_170 = 1;
}

bool func_139()
{
	if (bLocal_941)
	{
		return false;
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_731[0], false);
	switch (iLocal_769)
	{
		case -1:
			if (TASK::_0x02EBBB3989B7E695(iLocal_731[0]))
			{
				if (__LIB_0__::func_265(&uLocal_1001) > 3f && !__LIB_2__::func_136(iLocal_731[0], 0))
				{
					iLocal_769 = 0;
				}
			}
			break;
		case 0:
			if (func_296(0, 0))
			{
				if (bLocal_950)
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(2), "", 200f, 0, 0, 0, 1, 0, 0, 291934926, 1, 0, 0);
					bLocal_959 = false;
					__LIB_1__::func_148(&uLocal_1001);
					if (iLocal_86 == 2)
					{
						iLocal_769 = 2;
					}
					else
					{
						iLocal_769 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_296(1, 0))
			{
				if (bLocal_951)
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(3), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1001);
					iLocal_769 = 2;
				}
			}
			break;
		case 2:
			if (func_296(2, 0) && bLocal_952)
			{
				__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(4), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1001);
				iLocal_769 = 3;
			}
			break;
		case 3:
			if (iLocal_86 == 2)
			{
				if (func_296(3, 0) && bLocal_953)
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(5), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1001);
					iLocal_769 = 4;
				}
			}
			if (iLocal_86 == 1 || iLocal_86 == 0)
			{
				if (!bLocal_957 || bLocal_958)
				{
					iLocal_769 = 5;
				}
				else if (func_296(3, 0) && bLocal_953)
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(5), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1001);
					iLocal_769 = 4;
				}
			}
			break;
		case 4:
			if (iLocal_86 == 2)
			{
				if (func_296(4, 0) && bLocal_954)
				{
					__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(6), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1001);
					iLocal_769 = 6;
				}
			}
			else if (func_296(4, 0) && bLocal_954)
			{
				__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(6), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1001);
				iLocal_769 = 5;
			}
			break;
		case 5:
			if (func_296(5, 0) && bLocal_955)
			{
				__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(7), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1001);
				iLocal_769 = 6;
			}
			break;
		case 6:
			if ((func_296(6, 0) && bLocal_956) || (iLocal_86 == 2 && __LIB_0__::func_265(&uLocal_1001) > 3f))
			{
				__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(9), "", 200f, 0, 0, 0, 2, 1, 0, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1001);
				iLocal_769 = 7;
			}
			break;
		case 7:
			if (TASK::_0x02EBBB3989B7E695(iLocal_731[0]))
			{
				__LIB_1__::func_148(&uLocal_1001);
				bLocal_959 = true;
				iLocal_769 = 8;
			}
			break;
		case 8:
			if (func_297())
			{
				__LIB_1__::func_148(&uLocal_1001);
				iLocal_769 = 9;
			}
			break;
		case 9:
			return true;
	}
	return false;
}

bool func_140()
{
	int iVar0;
	switch (iLocal_916)
	{
		case 0:
			if (__LIB_2__::func_1(iLocal_731[0], 0, 1))
			{
				uLocal_915 = ENTITY::_0x6F3068258A499E52(joaat("P_CS_BIBLE01X"), ENTITY::GET_ENTITY_COORDS(iLocal_731[0], true, false), 11);
				iLocal_916++;
			}
			break;
		case 1:
			ENTITY::_0x4735E2A4BB83D9DA(uLocal_915);
			iLocal_993 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_915));
			PED::_0xCE7A6C1D5CDE1F9D(iLocal_731[0], iLocal_993, "p_cs_book04x_PH_R_HAND", "CODE_HUMAN_BOOK_WANDER");
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_992, iLocal_731[0], PED::GET_PED_BONE_INDEX(iLocal_731[0], 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			PED::_0xE8ABE3B73FC7FE17(iLocal_731[0], iLocal_993, "p_cs_book04x_PH_R_HAND", "CODE_HUMAN_BOOK_WANDER");
			iLocal_916++;
			break;
		case 2:
			PED::_0xA3A9299C4F2ADB98(iLocal_731[0]);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_731[0], iLocal_987, true, 0))
			{
				TASK::TASK_CLIMB(0, true);
			}
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_14, 1f, -1, 5f, 1, 40000f);
			TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_14, 10f, 0, false, false, true, false);
			__LIB_1__::func_474(iLocal_731[0], &iVar0, 0, 0, 1, 1);
			__LIB_2__::func_480(&Local_875, 0, 0, 1, 0);
			iLocal_916++;
			break;
		case 3:
			if (!__LIB_2__::func_136(iLocal_731[0], 0) && !__LIB_2__::func_136(Global_35, 0))
			{
				__LIB_2__::func_56(iLocal_731[0], 1, 1);
				iLocal_916++;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_141()
{
	switch (iLocal_929)
	{
		case 0:
			PED::_0xE737D5F14304A2EC(iLocal_731[1], PLAYER::PLAYER_ID(), 120000);
			__LIB_2__::func_56(iLocal_731[1], 1, 1);
			if (!bLocal_946)
			{
				__LIB_2__::func_915(iLocal_731[1], joaat("WORLD_HUMAN_DRINK_FLASK"), Local_281[1 /*32*/].f_6, fLocal_762, -1, 1, 0, "WORLD_HUMAN_DRINK_FLASK_MALE_A", -1082130432 /* Float: -1f */);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_731[1], Global_35, 8, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			iLocal_929++;
			break;
		case 1:
			return true;
	}
	return false;
}

bool func_142()
{
	if (!bLocal_946)
	{
		if (func_299())
		{
			return true;
		}
	}
	else if (func_300())
	{
		return true;
	}
	return false;
}

void func_144()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		PED::_0xE737D5F14304A2EC(iLocal_731[iVar0], PLAYER::PLAYER_ID(), 120000);
		__LIB_2__::func_56(iLocal_731[iVar0], 1, 1);
		__LIB_2__::func_788(&(iLocal_731[iVar0]), 1, 0, 1);
		iVar0++;
	}
}

int func_162(int iParam0, int iParam1)
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
				Jump @3257; //curOff = 2812
				return -1618254924;
				Jump @3257; //curOff = 2823
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
				Jump @3257; //curOff = 2870
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
				Jump @3257; //curOff = 2917
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3257; //curOff = 2950
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
				Jump @3257; //curOff = 2997
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
				Jump @3257; //curOff = 3044
				return -2137572125;
				Jump @3257; //curOff = 3055
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
				Jump @3257; //curOff = 3102
				return -774894224;
				Jump @3257; //curOff = 3113
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
				Jump @3257; //curOff = 3160
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
				Jump @3257; //curOff = 3221
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
void func_163(int iParam0, int iParam1, int iParam2)
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

bool func_189()
{
	switch (__LIB_0__::func_12())
	{
		case 105:
			if (__LIB_3__::func_564(113, 3) != 2)
			{
				iLocal_86 = 2;
				return true;
			}
			break;
		case 38:
			if (__LIB_4__::func_17(17) && __LIB_3__::func_564(113, 4) != 3)
			{
				iLocal_86 = 0;
				return true;
			}
			else if (__LIB_4__::func_17(18) && __LIB_3__::func_564(113, 4) != 4)
			{
				iLocal_86 = 1;
				return true;
			}
			else
			{
				SCRIPTS::TERMINATE_THIS_THREAD();
			}
			break;
	}
	return false;
}

bool func_250()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (__LIB_2__::func_1(iLocal_731[iVar0], 0, 1))
		{
			if (PED::_0x29FCE825613FEFCA(iLocal_731[iVar0], 2000))
			{
				if (iVar0 != 1 && iVar0 != 0)
				{
					TASK::_TASK_FLEE_FROM_PED(iLocal_731[iVar0], Global_35, vLocal_14, 1f, -1, 0, 1.5f, 0);
					PED::_0xE737D5F14304A2EC(iLocal_731[iVar0], PLAYER::PLAYER_ID(), 120000);
					PED::_0x24C82EF607105FAA(iLocal_731[iVar0], joaat("AGGRESSIVE"));
					__LIB_2__::func_56(iLocal_731[iVar0], 1, 1);
					__LIB_2__::func_788(&(iLocal_731[iVar0]), 1, 0, 1);
					return true;
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_251()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_989, true, 0))
		{
			return true;
		}
	}
	return false;
}

void func_259()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 != 1 && iVar0 != 0)
		{
			func_260(iLocal_731[iVar0], Global_35, 2, 2, 1086324736 /* Float: 6f */);
		}
		iVar0++;
	}
}

void func_260(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	TASK::_0xE7FA07624574B79A(uParam0, uParam1, iParam2, iParam3, iParam4, 1, 0, 0, 0);
}

void func_266()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iVar0 != 1 && iVar0 != 0)
		{
			func_267(iLocal_731[iVar0], 2);
		}
		iVar0++;
	}
}

void func_267(int iParam0, int iParam1)
{
	TASK::_0x541E5B41DCA45828(iParam0, iParam1, 0);
	_NAMESPACE29::_0x0EABF182FBB63D72(iParam0, 6, 1);
	TASK::TASK_CLEAR_LOOK_AT(iParam0);
}

void func_268()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_731[0], 0, -1f, -1f, -1f);
	if (PED::IS_PED_FACING_PED(iLocal_731[1], iLocal_731[0], 10f))
	{
		if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_986))
		{
			if (__LIB_2__::func_1(iLocal_731[1], 0, 1))
			{
				TASK::_TASK_USE_SCENARIO_POINT(iLocal_731[1], iLocal_986, sLocal_999, 0, false, true, 0, false, -1f, false);
			}
		}
	}
	__LIB_1__::func_474(iLocal_731[1], &iVar0, 0, 0, 1, 1);
}

void func_284()
{
	if (!Local_87.f_161)
	{
		if (iLocal_86 == 2)
		{
			__LIB_3__::func_461(113, 3, 2);
		}
		else if (iLocal_86 == 0)
		{
			__LIB_3__::func_461(113, 4, 3);
		}
		else if (iLocal_86 == 1)
		{
			__LIB_3__::func_461(113, 4, 4);
		}
	}
}

bool func_285()
{
	int iVar0;
	switch (iLocal_931)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_1010);
			iVar0 = 0;
			while (iVar0 < iLocal_731)
			{
				iVar0++;
			}
			iLocal_919 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), Global_35, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			iLocal_931++;
			break;
		case 1:
			if (__LIB_2__::func_1(iLocal_731[2], 0, 1))
			{
				if (__LIB_0__::func_265(&uLocal_1010) > 0.5f)
				{
					__LIB_2__::func_788(&(iLocal_731[2]), 1, 0, 1);
					iLocal_931++;
				}
			}
			else
			{
				iLocal_931++;
			}
			break;
		case 3:
			if (__LIB_2__::func_1(iLocal_731[1], 0, 1))
			{
				if (__LIB_0__::func_265(&uLocal_1010) > 1.5f)
				{
					PED::_0xE737D5F14304A2EC(iLocal_731[1], PLAYER::PLAYER_ID(), 120000);
					__LIB_2__::func_56(iLocal_731[1], 1, 1);
					__LIB_2__::func_788(&(iLocal_731[1]), 1, 0, 1);
					iLocal_931++;
				}
			}
			else
			{
				iLocal_931++;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_286(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_465(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_287(bool bParam0)
{
	__LIB_2__::func_411(&(Local_875[0 /*17*/]), bParam0, 0);
	__LIB_2__::func_411(&(Local_875[1 /*17*/]), bParam0, 0);
}

void func_295(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, var uParam7, float fParam8, int iParam9, int iParam10, int iParam11, var uParam12, var uParam13)
{
	struct<18> Var0;
	int iVar18;
	if (Global_1359489.f_63.f_297 >= 3)
	{
		return;
	}
	iVar18 = 0;
	while (iVar18 < 3)
	{
		if (!Global_1359489.f_63.f_242[iVar18 /*18*/].f_15)
		{
			Var0 = iParam0;
			Var0.f_2 = { vParam1 };
			Var0.f_5 = (fParam4 * fParam4);
			Var0.f_1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			Var0.f_15 = 1;
			Var0.f_6 = iParam5;
			Var0.f_7 = iParam11;
			Var0.f_8 = 0;
			Var0.f_13 = iParam6;
			Var0.f_14 = uParam7;
			Var0.f_10 = fParam8;
			Var0.f_11 = iParam9;
			Var0.f_12 = iParam10;
			Var0.f_9 = uParam12;
			Var0.f_17 = uParam13;
			Global_1359489.f_63.f_242[iVar18 /*18*/] = { Var0 };
			Global_1359489.f_63.f_297++;
			return;
		}
		iVar18++;
	}
}

int func_296(int iParam0, float fParam1)
{
	if (func_470(fParam1))
	{
		return func_471(0, iParam0, 0.1f);
	}
	return 0;
}

bool func_297()
{
	float fVar0;
	switch (__LIB_0__::func_12())
	{
		case 105:
			if (iLocal_86 == 2)
			{
			}
			break;
		case 38:
			break;
	}
	switch (iLocal_922)
	{
		case 0:
			if ((iLocal_86 != 0 && iLocal_86 != 1) && iLocal_86 != 2)
			{
				__LIB_1__::func_148(&uLocal_1007);
				bLocal_943 = false;
				__LIB_2__::func_593(&iLocal_798, &Local_819);
				iLocal_922++;
			}
			else
			{
				iLocal_922 = 7;
			}
			break;
		case 1:
			if (__LIB_0__::func_265(&uLocal_1001) > fVar0)
			{
				if (__LIB_2__::func_1(iLocal_731[1], 0, 1))
				{
					PED::_0x923583741DC87BCE(iLocal_731[1], "Default");
					PED::_0x89F5E7ADECCCB49C(iLocal_731[1], "sad");
					PED::_0x62FDAD5E01D2DD47(iLocal_731[1], vLocal_23, 2, 0);
					switch (__LIB_0__::func_12())
					{
						case 38:
						case 105:
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_977);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_977);
							if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_731[1], iLocal_987, true, 0))
							{
								TASK::TASK_CLIMB(0, true);
							}
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_17, 1f, -1, 0.25f, 0, 40000f);
							TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_17, 10f, 0, false, false, true, false);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_977);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_731[1], iLocal_977);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_977);
							break;
					}
					__LIB_1__::func_148(&uLocal_1007);
					iLocal_922++;
				}
				else
				{
					iLocal_922++;
				}
			}
			break;
		case 7:
			iLocal_922++;
			break;
		case 8:
			return true;
	}
	return false;
}

bool func_299()
{
	int iVar0;
	int iVar1;
	switch (iLocal_925)
	{
		case 0:
			if (__LIB_2__::func_1(iLocal_731[0], 0, 0))
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_731[0], 0);
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_731[0], 0))
				{
					PED::_0xF1C03A5352243A30(iLocal_731[0]);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_731[0], 0))
				{
					TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "TaskCombat_Panic", 1f, 60f, 4);
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_731[0], iLocal_987, true, 0))
				{
					TASK::TASK_CLIMB(0, true);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(iLocal_731[0], &iVar0, 0, 0, 1, 1);
				LAW::_0xF0B67BAD53C35BD9(iLocal_731[0], Global_35, iLocal_731[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("CRIME_ASSAULT"));
				__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_788(&(iLocal_731[0]), 1, 0, 1);
				iLocal_925++;
			}
			else
			{
				iLocal_925++;
			}
			break;
		case 1:
			if (__LIB_2__::func_1(iLocal_731[1], 0, 0))
			{
				__LIB_2__::func_303(iLocal_731[1], Global_35, func_118(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_731[1], 1))
				{
					PED::_0xF1C03A5352243A30(iLocal_731[1]);
				}
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_731[0], 0))
				{
					TASK::TASK_REACT(0, Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), "TaskCombat_Panic", 1f, 60f, 4);
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_731[1], iLocal_987, true, 0))
				{
					TASK::TASK_CLIMB(0, true);
				}
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, 0);
				__LIB_1__::func_474(iLocal_731[1], &iVar1, 0, 0, 1, 1);
				LAW::_0xF0B67BAD53C35BD9(iLocal_731[1], Global_35, iLocal_731[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), joaat("CRIME_ASSAULT"));
				__LIB_2__::func_788(&(iLocal_731[1]), 1, 0, 1);
				iLocal_925++;
			}
			else
			{
				iLocal_925++;
			}
			break;
		case 2:
			iLocal_925++;
			break;
		case 3:
			return true;
	}
	return false;
}

bool func_300()
{
	switch (iLocal_926)
	{
		case 0:
			bLocal_960 = true;
			PED::_0xF1C03A5352243A30(iLocal_731[1]);
			TASK::TASK_COMBAT_PED(iLocal_731[1], Global_35, 68157440, 0);
			PED::SET_PED_KEEP_TASK(iLocal_731[1], true);
			iLocal_926++;
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_731[2], iLocal_987, true, 0))
				{
					TASK::TASK_CLIMB(iLocal_731[0], true);
				}
				__LIB_2__::func_303(iLocal_731[0], Global_35, func_118(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				iLocal_926++;
			}
			break;
		case 2:
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 0, 0, -1082130432 /* Float: -1f */, -1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_731[0], true);
			iLocal_926++;
			break;
		case 3:
			return true;
	}
	return false;
}

int func_465(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_465(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

bool func_470(float fParam0)
{
	if (func_587(1))
	{
		return true;
	}
	if (!func_587(0))
	{
		if (func_588())
		{
			if (fParam0 <= 0f)
			{
				func_589(1);
				return true;
			}
			else
			{
				func_589(0);
				__LIB_1__::func_148(&uLocal_1004);
			}
		}
	}
	else if (__LIB_0__::func_265(&uLocal_1004) > fParam0)
	{
		func_589(1);
		func_590(0);
		__LIB_0__::func_37(&uLocal_1004);
		return true;
	}
	return false;
}

int func_471(int iParam0, int iParam1, float fParam2)
{
	func_592(iLocal_731[iParam0], func_591(iParam1), fParam2);
	if (!TASK::_0x02EBBB3989B7E695(iLocal_731[iParam0]))
	{
		return 1;
	}
	return 0;
}

bool func_587(int iParam0)
{
	return MISC::IS_BIT_SET(iLocal_921, iParam0);
}

bool func_588()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_731[0]))
	{
		if (func_659(0))
		{
			return true;
		}
	}
	return false;
}

void func_589(int iParam0)
{
	MISC::SET_BIT(&iLocal_921, iParam0);
}

void func_590(int iParam0)
{
	MISC::CLEAR_BIT(&iLocal_921, iParam0);
}

char* func_591(int iParam0)
{
	switch (__LIB_0__::func_12())
	{
		case 105:
			if (iLocal_86 == 2)
			{
				switch (iParam0)
				{
					case 0:
						return "RETB_RHO_PRE_GEN_LINE01";
					case 1:
						return "RETB_RHO_PRE_GEN_LINE02";
					case 2:
						return "RETB_RHO_PRE_GEN_LINE03";
					case 3:
						return "RETB_RHO_PRE_GEN_LINE04";
					case 4:
						return "RETB_RHO_PRE_GEN_LINE05";
					case 5:
						return "RETB_RHO_PRE_GEN_LINE06";
					case 6:
						return "RETB_RHO_PRE_GEN_LINE07";
					default:
						break;
				}
			}
			break;
		case 38:
			if (iLocal_86 == 0 || iLocal_86 == 1)
			{
				switch (iParam0)
				{
					case 0:
						return "RETB_VAL_PRE_GEN_LINE01";
					case 1:
						return "RETB_VAL_PRE_GEN_LINE02";
					case 2:
						return "RETB_VAL_PRE_GEN_LINE03";
					case 3:
						return "RETB_VAL_PRE_GEN_LINE04";
					case 4:
						return "RETB_VAL_PRE_GEN_LINE05";
					case 5:
						return "RETB_VAL_PRE_GEN_LINE06";
					case 6:
						return "RETB_VAL_PRE_GEN_LINE07";
					default:
						break;
				}
			}
			break;
	}
	return "";
}

void func_592(int iParam0, char* sParam1, float fParam2)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return;
	}
	if (PED::_0x68821369A2CEADD5(iParam0, MISC::GET_HASH_KEY(sParam1)))
	{
		return;
	}
	PED::_0xD65FDC686A031C83(iParam0, MISC::GET_HASH_KEY(sParam1), fParam2);
}

bool func_659(int iParam0)
{
	return TASK::_0x02EBBB3989B7E695(iLocal_731[iParam0]);
}

