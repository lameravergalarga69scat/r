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
	char[] cLocal_14[8] = 0;
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	struct<10> Local_17 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_27 = 11;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	char cLocal_116[32] = "";
	char cLocal_120[32] = "";
	char cLocal_124[32] = "";
	struct<193> Local_128 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_321 = 0;
	struct<32> Local_322[4];
	vector3 vLocal_451 = { 0f, 0f, 0f };
	float fLocal_454 = 0f;
	vector3 vLocal_455 = { 0f, 0f, 0f };
	float fLocal_458 = 0f;
	vector3 vLocal_459[3] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_469 = { 0f, 0f, 0f };
	float fLocal_472 = 0f;
	float fLocal_473 = 0f;
	char* sLocal_474 = NULL;
	struct<23> Local_475 = { 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3 } ;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501[4] = { 0, 0, 0, 0 };
	var uLocal_506[4] = { 0, 0, 0, 0 };
	int iLocal_511 = 0;
	var uLocal_512[5] = { 0, 0, 0, 0, 0 };
	var uLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	var uLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	struct<7> Local_533 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_540 = 0;
	vector3 vLocal_541 = { 0f, 0f, 0f };
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	struct<10> Local_553 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	int iLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = -1;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 1097859072;
	var uLocal_584 = 1000;
	var uLocal_585 = 1067450368;
	var uLocal_586 = 5000;
	var uLocal_587 = 42;
	var uLocal_588 = 1103626240;
	var uLocal_589 = 1077936128;
	var uLocal_590 = 1106247680;
	var uLocal_591 = 1103101952;
	var uLocal_592 = 1097859072;
	var uLocal_593 = 1103626240;
	var uLocal_594 = 0;
	struct<24> Local_595 = { 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1048576000, 1048576000, 1193033728, 1092616192, 1065353216, 0, 0 } ;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	var uLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633 = 0;
	int iLocal_634 = 0;
	int iLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 1112014848;
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
	var uLocal_710 = 9;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 1;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 24;
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
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = -1082130432;
	var uLocal_822 = -1082130432;
	var uLocal_823 = 1103626240;
	var uLocal_824 = -1067450368;
	var uLocal_825 = 1097859072;
	var uLocal_826 = 1073741824;
	var uLocal_827 = 4000;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 1073741824;
	var uLocal_850 = 0;
	struct<38> Local_851 = { 0, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 0, 0, 1065353216, 1065353216, 0, 1040187392, 1040187392, -1, 0, 0, 0, 0, 0, 0, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_889 = 0;
	bool bLocal_890 = false;
	var uLocal_891 = 0;
	bool bLocal_892 = false;
	bool bLocal_893 = false;
	int iLocal_894 = 0;
	bool bLocal_895 = false;
	bool bLocal_896 = false;
	var uLocal_897 = 0;
	float fLocal_898 = 0f;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	var uLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	var uLocal_909 = 0;
	char* sLocal_910 = NULL;
	vector3 vLocal_911 = { 0f, 0f, 0f };
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	int iLocal_923 = 0;
	int iLocal_924 = 0;
	var uLocal_925 = 0;
	int iLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 1065353216;
	var uLocal_933 = 1119092736;
	var uLocal_934 = 1092616192;
	var uLocal_935 = 1085276160;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981[4] = { 0, 0, 0, 0 };
	var uLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988[4] = { 0, 0, 0, 0 };
	int iLocal_993[4] = { 0, 0, 0, 0 };
	struct<21> Local_998[4];
	struct<17> Local_1083[2];
	struct<17> Local_1118[2];
	struct<6> Local_1153 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1159 = -1082130432;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
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
	cLocal_14 = "CALL";
	fLocal_473 = 3f;
	iLocal_529 = joaat("WORLD_ANIMAL_DOG_EATING_GROUND");
	iLocal_530 = joaat("WORLD_ANIMAL_DOG_RESTING");
	iLocal_531 = joaat("WORLD_HUMAN_SIT_GROUND");
	iLocal_532 = joaat("WORLD_ANIMAL_SQUIRREL_EATING");
	bLocal_893 = true;
	sLocal_910 = "script_re@lost_dog";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_895 = true;
	}
	if (!bLocal_895)
	{
		Local_128.f_3 = __LIB_0__::func_81(&vScriptParam_0);
		Local_128.f_43 = __LIB_0__::func_12();
		Local_128.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
		func_4();
		if (__LIB_1__::func_898() == 1)
		{
			iLocal_15 = 0;
		}
		else
		{
			iLocal_15 = 1;
		}
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_895, 956, 0);
		if (bLocal_895)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_633)
			{
				case 0:
					if (func_8())
					{
						iLocal_633 = 1;
					}
					break;
				case 1:
					if (__LIB_3__::func_454(&Local_128, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10(&Local_128, &uLocal_909, &uLocal_905);
						func_11(&uLocal_637);
						func_12();
						func_13();
						func_14();
						func_15();
						iLocal_633 = 4;
					}
					else if (Local_128.f_160)
					{
						func_6();
					}
					break;
				case 4:
					if (!func_16(&Local_128, &iLocal_501, iLocal_15, 0, 1, 0, 1, 0))
					{
						func_6();
					}
					if (!Local_128.f_46)
					{
						if (func_17() || __LIB_0__::func_27(iLocal_901, 524288))
						{
							Local_128.f_46 = 1;
							func_19();
							if (__LIB_2__::func_1(iLocal_501[0], 0, 1))
							{
								__LIB_2__::func_504(iLocal_501[0], 250);
							}
							__LIB_3__::func_609(12, 1);
							__LIB_0__::func_172(iLocal_520);
							__LIB_3__::func_264(&Local_128);
							__LIB_1__::func_539();
							if (!__LIB_0__::func_27(iLocal_900, 65536))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]) && !__LIB_2__::func_1(iLocal_501[1], 0, 1))
								{
									__LIB_3__::func_662("DOG_DEAD", 7500, 0, 0, -1, -1, 0);
								}
								else if (iLocal_632 <= 14 && __LIB_0__::func_27(iLocal_987, 2))
								{
									__LIB_3__::func_662("DOG_ESCAPE", 7500, 0, 0, -1, -1, 0);
								}
							}
							__LIB_0__::func_325(&(uLocal_506[0]));
							__LIB_0__::func_325(&(uLocal_506[1]));
							iLocal_632 = 19;
						}
					}
					if (bLocal_890 || (!__LIB_2__::func_1(iLocal_501[0], 0, 1) && !__LIB_0__::func_27(iLocal_900, 536870912)))
					{
						func_6();
					}
					if (iLocal_902 != 0)
					{
						iLocal_899 = 0;
						fLocal_898 = __LIB_2__::func_118(iLocal_501[0], 0, 1);
						if (fLocal_898 > 30f)
						{
							iLocal_899 = 10000;
						}
						else if (fLocal_898 < 10f)
						{
							iLocal_899 = -10000;
						}
						if (MISC::GET_GAME_TIMER() - iLocal_902) > (25000 - iLocal_899)
						{
							__LIB_2__::func_303(iLocal_501[0], Global_35, "", "", 30f, 0, 1, 0, 1, 1, 1, 291934926, 1, 0, 0);
							TASK::TASK_WANDER_STANDARD(iLocal_501[0], 40000f, 0);
							__LIB_0__::func_325(&(uLocal_506[0]));
							func_6();
						}
					}
					if (func_30())
					{
						Local_128.f_50 = 1;
						func_6();
					}
					if (__LIB_3__::func_365(&Local_128, &iLocal_501, 1, 1, 0, func_31(), 1, 1, 0, 0, 0, 0, 0))
					{
						func_6();
					}
					break;
			}
			BUILTIN::WAIT(Local_128.f_158);
		}
	}
}

void func_4()
{
	__LIB_4__::func_116(&Local_128, 1);
	__LIB_3__::func_393(&(Local_128.f_5), 0);
	__LIB_2__::func_105(&(Local_128.f_5), 1);
	__LIB_3__::func_391(&(Local_128.f_5), 1);
	__LIB_2__::func_662(&(Local_128.f_5), 0);
	__LIB_3__::func_392(&(Local_128.f_5), 1);
	__LIB_2__::func_182(&(Local_128.f_5), 1);
	__LIB_2__::func_507(&(Local_128.f_5), 1500);
	__LIB_4__::func_64(&uLocal_566);
	__LIB_4__::func_65(&uLocal_566);
	__LIB_2__::func_105(&uLocal_566, 1);
	__LIB_2__::func_662(&uLocal_566, 0);
	__LIB_2__::func_51(&uLocal_566, 0);
}

void func_6()
{
	func_44();
	__LIB_2__::func_480(&Local_1083, 0, 0, 1, 0);
	if (__LIB_0__::func_27(iLocal_987, 2))
	{
		__LIB_0__::func_769();
	}
	__LIB_1__::func_345();
	__LIB_2__::func_353(&uLocal_986, 1);
	__LIB_2__::func_353(&(uLocal_981[0]), 1);
	__LIB_2__::func_353(&(uLocal_981[1]), 1);
	__LIB_2__::func_353(&(uLocal_981[2]), 1);
	__LIB_2__::func_353(&(uLocal_981[3]), 1);
	func_49();
	__LIB_1__::func_682(97);
	if (__LIB_2__::func_1(iLocal_501[0], 0, 1))
	{
		__LIB_1__::func_727(iLocal_501[0], 1);
	}
	if (__LIB_0__::func_27(iLocal_900, -2147483648))
	{
		func_52(0);
	}
	if (__LIB_2__::func_1(iLocal_501[0], 0, 1))
	{
		PED::_0xA6F67BEC53379A32(iLocal_501[0], "IsSearching");
	}
	if (__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		func_53(0);
		__LIB_2__::func_603(&(iLocal_501[1]), &(Local_998[1 /*21*/]), &Local_1118, 1, 1);
		__LIB_2__::func_56(iLocal_501[1], 1, 1);
	}
	func_56(&Local_128, &iLocal_501, &uLocal_506, iLocal_15, uLocal_909, uLocal_905, !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[0]), 1, 0, 1);
	func_57();
	__LIB_3__::func_525(&uLocal_920, &uLocal_919);
	__LIB_3__::func_525(&uLocal_518, &uLocal_521);
	__LIB_3__::func_525(&uLocal_922, &uLocal_921);
	__LIB_3__::func_525(&uLocal_925, &uLocal_918);
	__LIB_0__::func_172(iLocal_923);
	__LIB_0__::func_172(iLocal_924);
	__LIB_0__::func_172(iLocal_520);
	__LIB_0__::func_172(iLocal_519);
	func_59(1, 0);
	func_60(0);
	AUDIO::STOP_AUDIO_SCENE("RELD_LOST_DOG_SCENE");
	AUDIO::_0x531A78D6BF27014B("RELD_Sounds");
	func_19();
	if (PERSCHAR::_0x800DF3FC913355F3(iLocal_914))
	{
		PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_914);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_8()
{
	switch (iLocal_631)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_128))
			{
				iLocal_500 = __LIB_0__::func_12();
				func_63();
				func_64();
				func_65();
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_529, 15, 0, 0);
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_531, 4194303, 0, 0);
				STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_530, 15, 0, 0);
				if (iLocal_500 == 26)
				{
					STREAMING::_REQUEST_SCENARIO_TYPE(iLocal_532, 15, 0, 0);
				}
				iLocal_631 = 1;
			}
			break;
		case 1:
			if (!__LIB_0__::func_0(&uLocal_630, cLocal_14))
			{
				return false;
			}
			if (!__LIB_3__::func_315(&uLocal_27))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_529, false))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_531, false))
			{
				return false;
			}
			if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_530, false))
			{
				return false;
			}
			if (iLocal_500 == 26)
			{
				if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(iLocal_532, false))
				{
					return false;
				}
			}
			if (!__LIB_3__::func_449(&Local_322))
			{
				return false;
			}
			if (!AUDIO::_0xD9130842D7226045("RELD_Sounds", 0))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 1;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 9;
			*uParam2 = 0;
			break;
		case 4:
			*uParam1 = 9;
			*uParam2 = 1;
			break;
		case 5:
			*uParam1 = 9;
			*uParam2 = 2;
			break;
	}
}

void func_11(var uParam0)
{
	if (iLocal_500 == 26)
	{
		StringCopy(&(uParam0->f_34), "RE_LD_STR_V1_THANKS", 64);
		StringCopy(&(uParam0->f_54), "RE_LD_STR_V1_WELCOME", 64);
	}
	else if (iLocal_500 == 69)
	{
		StringCopy(&(uParam0->f_34), "RE_LD_EMR_V1_THANKS", 64);
		StringCopy(&(uParam0->f_54), "RE_LD_EMR_V1_WELCOME", 64);
	}
	uParam0->f_72 = __LIB_3__::func_687(Local_128.f_3);
	StringCopy(&(uParam0->f_2), "script_re@lost_dog", 64);
	StringCopy(&(uParam0->f_10), "thanks_kid", 64);
	uParam0->f_190 = 4000;
	uParam0->f_186 = 5f;
}

void func_12()
{
	Local_533.f_4 = "script@beat@town@lostDog@feedMeat";
	Local_533.f_5 = "script@beat@town@lostDog@reunion";
	Local_533.f_6 = "script@beat@town@lostDog@reunionResults";
}

void func_13()
{
	iLocal_501[0] = __LIB_3__::func_870(Local_322[0 /*32*/].f_1, &(Local_322[0 /*32*/]), Local_128.f_51 + Local_322[0 /*32*/].f_6, Local_322[0 /*32*/].f_9, 1, 0, 1, 0, 1);
	__LIB_2__::func_133(iLocal_501[0], &(Local_322[0 /*32*/].f_23), 0);
	__LIB_3__::func_285(iLocal_501[0], &Local_128, 0);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_501[0], false, 0f);
	ENTITY::SET_ENTITY_PROOFS(iLocal_501[0], 2, false);
	__LIB_1__::func_991(iLocal_501[0], 0);
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_501[0], "Flee_Human_MajorThreat");
}

void func_14()
{
	switch (iLocal_500)
	{
		case 26:
			vLocal_455 = { -1773.092f, -429.01f, 153.582f };
			fLocal_458 = 40f;
			break;
		case 69:
			vLocal_455 = { 1338.029f, 294.1752f, 87.02629f };
			fLocal_458 = -113.227f;
			break;
	}
}

void func_15()
{
	Local_533 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_533.f_4, 64, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_533, "pedPlayer", Global_35, 0);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_533);
	Local_533.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_533.f_5, 64, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_533.f_1, vLocal_455, 0f, 0f, fLocal_458, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_533.f_1, "pedKid", iLocal_501[0], 0);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_533.f_1);
	Local_533.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_533.f_6, 64, &cLocal_116, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_533.f_2, "pedKid", iLocal_501[0], 0);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_533.f_2);
}

bool func_16(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_79(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_317(uParam0, iParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				__LIB_4__::func_65(&(uParam0->f_5));
			}
			__LIB_1__::func_336(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
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
					func_85(uParam0, uParam0->f_193, 2f);
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

bool func_17()
{
	int iVar0;
	iVar0 = 0;
	if (((__LIB_3__::func_276(iLocal_501[0], 0, &(Local_128.f_5), &iLocal_565, 0, 0) || func_89()) || DECORATOR::DECOR_EXIST_ON(iLocal_501[0], "bHasBeenTrampledByHorse")) || (PED::IS_PED_RAGDOLL(iLocal_501[0]) && Local_128.f_98[0] < 5f))
	{
		iVar0 = 1;
	}
	if (__LIB_0__::func_27(iLocal_900, 262144))
	{
		if (!__LIB_0__::func_27(iLocal_987, 512))
		{
			if (__LIB_3__::func_276(iLocal_501[1], 0, &uLocal_566, &uLocal_594, 0, 0))
			{
				__LIB_1__::func_683(&iLocal_900, 2097152);
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

void func_19()
{
	if (__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		if (PED::DOES_GROUP_EXIST(iLocal_889))
		{
			if (PED::IS_PED_GROUP_MEMBER(iLocal_501[1], iLocal_889, 0))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_501[1]);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_501[1], true);
			}
		}
	}
}

bool func_30()
{
	float fVar0;
	float fVar1;
	func_97();
	func_98();
	func_99();
	func_100();
	func_101();
	func_102();
	func_103();
	func_104();
	if (iLocal_632 > 1)
	{
		func_105();
	}
	if (iLocal_632 >= 3)
	{
		func_106();
		if (iLocal_632 < 8)
		{
			_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
			__LIB_2__::func_966(iLocal_501[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		}
	}
	if (__LIB_0__::func_27(iLocal_900, 16384))
	{
		if (__LIB_0__::func_27(iLocal_987, 2) && !__LIB_0__::func_27(iLocal_987, 512))
		{
			if (!__LIB_0__::func_27(iLocal_900, 32768))
			{
				__LIB_3__::func_662("DOG_ESCAPE", 7500, 0, 0, -1, -1, 0);
			}
		}
		return true;
	}
	switch (iLocal_632)
	{
		case 0:
			__LIB_0__::func_11();
			func_109(Global_35, -1);
			func_110();
			func_111();
			func_52(1);
			func_60(1);
			PED::_REQUEST_PED_EMOTIONAL_PRESET(iLocal_501[0], "Flee_Panic");
			iLocal_523 = TASK::CREATE_SCENARIO_POINT(iLocal_531, vLocal_455, fLocal_458, 0, 0, 0);
			iLocal_632 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_901, 256))
			{
				if (func_112())
				{
					__LIB_1__::func_683(&iLocal_901, 256);
					iLocal_632 = 3;
				}
			}
			else
			{
				iLocal_632 = 3;
			}
			break;
		case 3:
			func_113();
			if (__LIB_0__::func_27(iLocal_901, 512))
			{
				if (__LIB_2__::func_227(0, 1, iLocal_501[0], 1))
				{
					__LIB_1__::func_683(&iLocal_987, 1);
					__LIB_1__::func_148(&uLocal_948);
					iLocal_632 = 4;
				}
			}
			break;
		case 4:
			func_113();
			if (__LIB_0__::func_27(iLocal_987, 2))
			{
				func_116();
				__LIB_1__::func_345();
				__LIB_4__::func_16(&(Local_1153.f_5));
				func_109(Global_35, 5000);
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
				iLocal_632 = 6;
				Jump @2482; //curOff = 525
			}
			else if (__LIB_0__::func_27(iLocal_987, 4))
			{
				func_118();
				__LIB_1__::func_345();
				__LIB_4__::func_16(&(Local_1153.f_5));
				func_109(Global_35, 5000);
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
				iLocal_632 = 5;
			}
			else
			{
				if (__LIB_0__::func_265(&uLocal_948) > 30f)
				{
					__LIB_3__::func_609(12, 1);
					__LIB_1__::func_345();
					__LIB_4__::func_16(&(Local_1153.f_5));
					__LIB_1__::func_683(&iLocal_987, 8);
					func_109(Global_35, 5000);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
					iLocal_632 = 5;
				}
				Jump @2482; //curOff = 661
				if (__LIB_0__::func_27(iLocal_987, 32) && __LIB_0__::func_27(iLocal_901, 1024))
				{
					if (__LIB_0__::func_181())
					{
						__LIB_1__::func_715(1, 0, 0, "RE_HONOR_IGNORED_STRANGER", iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
					}
					iLocal_632 = 20;
				}
				Jump @2482; //curOff = 727
				if (__LIB_0__::func_27(iLocal_901, 2048))
				{
					__LIB_1__::func_148(&uLocal_939);
					MAP::REMOVE_BLIP(&(uLocal_506[0]));
					__LIB_1__::func_539();
					iLocal_632 = 8;
				}
				Jump @2482; //curOff = 769
				if (__LIB_2__::func_227(0, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(6), 1))
				{
					if (func_123())
					{
						func_124();
						func_125();
						if (iLocal_15 == 0)
						{
							__LIB_3__::func_662("DOG_OBJ01", 7500, 0, 0, -1, -1, 0);
						}
						else
						{
							__LIB_3__::func_662("DOG_OBJ04", 7500, 0, 0, -1, -1, 0);
						}
						__LIB_1__::func_683(&iLocal_900, 262144);
						iLocal_632 = 9;
					}
				}
				Jump @2482; //curOff = 880
				if (__LIB_0__::func_27(iLocal_987, 512))
				{
					func_118();
					iLocal_632 = 5;
				}
				else
				{
					if (__LIB_0__::func_27(iLocal_987, 128) && bLocal_893)
					{
						func_59(0, 1);
					}
					if (!__LIB_0__::func_27(iLocal_900, 1))
					{
						if (((Local_128.f_98[1] < 6f && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[1])) && Local_128.f_98[1] > 0f) && ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]))
						{
							__LIB_0__::func_325(&(uLocal_506[1]));
							func_49();
							__LIB_2__::func_73(iLocal_501[1], &(uLocal_506[1]), -1749618580, 580546400, 0, 0);
							__LIB_1__::func_683(&iLocal_900, 1);
						}
					}
					if (__LIB_0__::func_27(iLocal_987, 128))
					{
						__LIB_3__::func_525(&uLocal_922, &uLocal_921);
						func_49();
						__LIB_2__::func_73(iLocal_501[1], &(uLocal_506[1]), -1749618580, 580546400, 0, 0);
						func_127();
						__LIB_1__::func_148(&uLocal_951);
						if (bLocal_893 == 0)
						{
							iLocal_632 = 11;
						}
						else
						{
							func_128();
							func_129(&iLocal_522);
							func_130(vLocal_451, fLocal_454);
							iLocal_632 = 10;
						}
					}
				}
				Jump @2482; //curOff = 1160
				__LIB_4__::func_151(iLocal_501[1], &uLocal_927, 0f, 0f, 0f, 1, 30f, 10f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
				if (func_132(Global_35, Local_533, "pedPlayer", &cLocal_124, &uLocal_636, 1065353216 /* Float: 1f */, 1, 1, 1) || __LIB_0__::func_265(&uLocal_951) > 10f)
				{
					iLocal_632 = 11;
				}
				Jump @2482; //curOff = 1266
				__LIB_4__::func_151(iLocal_501[1], &uLocal_927, 0f, 0f, 0f, 1, 30f, 10f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
				func_133();
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -651608924) || bLocal_893 == 0)
				{
					if (iLocal_894 == 0)
					{
						__LIB_2__::func_303(Global_35, iLocal_501[1], func_134("OFFER_BAIT", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_894 = 1;
					}
				}
				if (!__LIB_0__::func_27(iLocal_900, 32))
				{
					if (bLocal_893)
					{
						func_59(0, 1);
					}
				}
				else
				{
					func_135();
					func_136();
					if (__LIB_0__::func_27(iLocal_900, 4194304))
					{
						if (__LIB_0__::func_27(iLocal_901, 2))
						{
							if (func_137())
							{
								__LIB_1__::func_539();
								__LIB_0__::func_37(&uLocal_939);
								func_59(1, 0);
								iLocal_632 = 12;
							}
						}
					}
				}
				Jump @2482; //curOff = 1495
				func_139();
				func_140();
				if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, &cLocal_116))
				{
					fVar0 = 35f;
					if (iLocal_15 == 0)
					{
						if (__LIB_0__::func_393(iLocal_501[1], uLocal_512[3], 0, 1) || __LIB_0__::func_393(iLocal_501[1], uLocal_512[4], 0, 1))
						{
							fVar0 = 18f;
						}
					}
					fVar1 = __LIB_0__::func_665(iLocal_501[0], iLocal_501[1], 1, 1);
					if ((__LIB_10__::func_477(iLocal_501[0], &(Local_128.f_33), &uLocal_897, &uLocal_891, 1f, fVar0, 0, 0, 1092616192 /* Float: 10f */, 1) && fVar1 < (fVar0 + 15f)) || (fVar1 < 15f && PED::_0x7F9B9791D4CB71F6(iLocal_501[0], iLocal_501[1], false, 0) == 1))
					{
						StringCopy(&cLocal_120, func_143(), 32);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_120))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_533.f_1, &cLocal_120, true);
							ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_533.f_1, "bAdvanceSitLoop", true, false);
							if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_533.f_1, "pedKid", &Local_553, true, &cLocal_120, 2))
							{
							}
							__LIB_1__::func_683(&iLocal_901, 4096);
							iLocal_632 = 13;
						}
					}
				}
				else
				{
					ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, &cLocal_116);
				}
				Jump @2482; //curOff = 1795
				func_109(iLocal_501[1], -1);
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
				if (!__LIB_0__::func_27(iLocal_901, 32))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533.f_1, false))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_533.f_1, "pedKid", iLocal_501[0]);
						__LIB_1__::func_683(&iLocal_901, 32);
					}
				}
				else if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_533.f_2, true, false))
				{
					if (!__LIB_0__::func_27(iLocal_900, 512))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], 1435919172, true) != 1)
						{
							func_144();
						}
					}
					else if (__LIB_0__::func_27(iLocal_900, 65536))
					{
						func_145();
						iLocal_632 = 14;
					}
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_533.f_2);
				}
				Jump @2482; //curOff = 1970
				if (__LIB_0__::func_27(iLocal_900, 16))
				{
					__LIB_0__::func_769();
					__LIB_3__::func_319(Local_533.f_1);
					__LIB_1__::func_681(&iLocal_901, 4);
					func_109(iLocal_501[1], 0);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
					__LIB_3__::func_525(&uLocal_920, &uLocal_919);
					__LIB_3__::func_525(&uLocal_922, &uLocal_921);
					__LIB_1__::func_683(&iLocal_900, 16777216);
					if (iLocal_15 == 0)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_533.f_2, "bAdvanceCallover", true, false);
						__LIB_3__::func_609(12, 3);
						iLocal_632 = 16;
					}
					else if (iLocal_15 == 1)
					{
						__LIB_1__::func_715(13, 0, 0, "RE_HONOR_HELPED_STRANGER", iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
						ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_533.f_2, "bAdvanceCallover", true, false);
						iLocal_632 = 17;
					}
				}
				Jump @2482; //curOff = 2149
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533.f_2, false))
				{
					func_109(Global_35, 10000);
					_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
					__LIB_1__::func_715(13, 0, 0, "RE_HONOR_HELPED_STRANGER", iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_632 = 15;
				}
				Jump @2482; //curOff = 2219
				if (__LIB_0__::func_27(iLocal_901, 1048576))
				{
					AUDIO::STOP_AUDIO_SCENE("RELD_LOST_DOG_SCENE");
					__LIB_0__::func_325(&(uLocal_506[0]));
					__LIB_0__::func_325(&(uLocal_506[1]));
					Local_128.f_44 = 1;
					iLocal_632 = 20;
				}
				Jump @2482; //curOff = 2273
				if (func_148(iLocal_501[0], &(uLocal_506[0]), Global_35, &uLocal_850, &uLocal_637, &Local_128))
				{
					__LIB_0__::func_172(iLocal_924);
					func_60(0);
					__LIB_1__::func_683(&iLocal_901, 8);
					AUDIO::STOP_AUDIO_SCENE("RELD_LOST_DOG_SCENE");
					__LIB_0__::func_325(&(uLocal_506[0]));
					__LIB_0__::func_325(&(uLocal_506[1]));
					Local_128.f_44 = 1;
					iLocal_632 = 20;
				}
				Jump @2482; //curOff = 2364
				iLocal_632 = 20;
				Jump @2482; //curOff = 2372
				func_149();
				func_44();
				if (__LIB_2__::func_1(iLocal_501[0], 0, 1) && Local_128.f_98[0] > 50f)
				{
					if ((__LIB_2__::func_1(iLocal_501[1], 0, 1) && Local_128.f_98[1] > 50f) || !__LIB_2__::func_1(iLocal_501[1], 0, 1))
					{
						return true;
					}
				}
				else
				{
					func_150();
				}
			}
			return false;
			default:
				break;
	}
}

bool func_31()
{
	if (__LIB_0__::func_27(iLocal_900, 262144) && !__LIB_0__::func_27(iLocal_900, 65536))
	{
		return true;
	}
	return false;
}

void func_44()
{
	if (__LIB_0__::func_27(iLocal_900, 4))
	{
		__LIB_0__::func_8(&Global_1935630, 4);
		__LIB_1__::func_681(&iLocal_900, 4);
	}
}

void func_49()
{
	__LIB_0__::func_325(&iLocal_511);
}

void func_52(bool bParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	if (bParam0)
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iLocal_501[0], true, false) };
		iVar3 = 0;
		iVar4 = 0;
		iVar5 = 0;
		iVar6 = ITEMSET::CREATE_ITEMSET(true);
		ENTITY::_0x59B57C4B06531E1E(vVar0, 100f, iVar6, 1);
		iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar6);
		if (ITEMSET::IS_ITEMSET_VALID(iVar6))
		{
		}
		iVar3 = 0;
		while (iVar3 <= (iVar4 - 1))
		{
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar6)));
			if ((!ENTITY::IS_ENTITY_DEAD(iVar5) && !PED::IS_PED_HUMAN(iVar5)) && iVar5 != iLocal_501[1])
			{
				if (((((((((((((PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGAMERICANFOXHOUND_01")) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGAUSTRALIANSHEPERD_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGBLUETICKCOONHOUND_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGCATAHOULACUR_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGCHESBAYRETRIEVER_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGCOLLIE_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGHOBO_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGHOUND_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGHUSKY_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGLAB_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGLION_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGPOODLE_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGRUFUS_01"))) || PED::IS_PED_MODEL(iVar5, joaat("A_C_DOGSTREET_01")))
				{
					if (!ENTITY::IS_ENTITY_OCCLUDED(iVar5))
					{
						PED::DELETE_PED(&iVar5);
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iVar5, Global_35, 300f, -1, 0, 1.5f, 0);
					}
				}
			}
			iVar3++;
		}
		ITEMSET::DESTROY_ITEMSET(iVar6);
		if (__LIB_0__::func_12() == 69)
		{
			iVar7 = __LIB_0__::func_120(606);
			if (PERSCHAR::_0x800DF3FC913355F3(iVar7))
			{
				iLocal_914 = iVar7;
				TASK::TASK_SMART_FLEE_PED(PERSCHAR::_0x31C70A716CAE1FEE(iLocal_914), Global_35, 300f, -1, 0, 1.5f, 0);
				PED::SET_PED_KEEP_TASK(PERSCHAR::_0x31C70A716CAE1FEE(iLocal_914), true);
				PERSCHAR::_0xA8C406C2A56EDC16(iLocal_914);
			}
			iVar8 = __LIB_0__::func_120(607);
			if (PERSCHAR::_0x800DF3FC913355F3(iVar8))
			{
				iLocal_915 = iVar8;
				TASK::TASK_SMART_FLEE_PED(PERSCHAR::_0x31C70A716CAE1FEE(iLocal_915), Global_35, 300f, -1, 0, 1.5f, 0);
				PED::SET_PED_KEEP_TASK(PERSCHAR::_0x31C70A716CAE1FEE(iLocal_915), true);
				PERSCHAR::_0xA8C406C2A56EDC16(iLocal_915);
			}
			iVar9 = __LIB_0__::func_120(608);
			if (PERSCHAR::_0x800DF3FC913355F3(iVar9))
			{
				iLocal_916 = iVar9;
				TASK::TASK_SMART_FLEE_PED(PERSCHAR::_0x31C70A716CAE1FEE(iLocal_916), Global_35, 300f, -1, 0, 1.5f, 0);
				PED::SET_PED_KEEP_TASK(PERSCHAR::_0x31C70A716CAE1FEE(iLocal_916), true);
				PERSCHAR::_0xA8C406C2A56EDC16(iLocal_916);
			}
		}
		else if (__LIB_0__::func_12() == 26)
		{
			iVar7 = __LIB_0__::func_120(502);
			if (PERSCHAR::_0x800DF3FC913355F3(iVar7))
			{
				iLocal_914 = iVar7;
				TASK::TASK_SMART_FLEE_PED(PERSCHAR::_0x31C70A716CAE1FEE(iLocal_914), Global_35, 300f, -1, 0, 1.5f, 0);
				PED::SET_PED_KEEP_TASK(PERSCHAR::_0x31C70A716CAE1FEE(iLocal_914), true);
				PERSCHAR::_0xA8C406C2A56EDC16(iLocal_914);
			}
		}
		__LIB_1__::func_683(&iLocal_900, -2147483648);
		if (iVar4 == 0)
		{
		}
	}
	else
	{
		if (iLocal_914 != 0)
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_914);
		}
		if (iLocal_915 != 0)
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_915);
		}
		if (iLocal_916 != 0)
		{
			PERSCHAR::_0x4F81EAD1DE8FA19B(iLocal_916);
		}
	}
}

void func_53(bool bParam0)
{
	if (__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		if (bParam0)
		{
			if (!__LIB_0__::func_27(iLocal_900, 64))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 375, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 255, false);
				__LIB_1__::func_683(&iLocal_900, 64);
			}
		}
		else if (__LIB_0__::func_27(iLocal_900, 64))
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 375, false);
			PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 255, true);
			__LIB_1__::func_681(&iLocal_900, 64);
		}
	}
}

void func_56(var uParam0, int iParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
							__LIB_3__::func_416((*iParam1)[iVar0], 1073741824 /* Float: 2f */, __LIB_0__::func_514(iVar0 < iVar2, uParam0->f_98[iVar0], -1f), iVar1, 0);
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
		func_172(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_79(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_174(uParam0->f_3, uParam0->f_185);
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
		func_175(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_57()
{
	func_176(iLocal_522, iLocal_529);
	func_176(iLocal_525, iLocal_530);
	func_176(iLocal_523, iLocal_531);
	func_176(iLocal_524, iLocal_531);
}

void func_59(bool bParam0, bool bParam1)
{
	if (!bParam0)
	{
		if (!__LIB_0__::func_27(iLocal_900, 4096) || bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
			__LIB_1__::func_683(&iLocal_900, 4096);
		}
	}
	else if (__LIB_0__::func_27(iLocal_900, 4096))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		__LIB_1__::func_681(&iLocal_900, 4096);
	}
}

void func_60(bool bParam0)
{
	if (bParam0)
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_926))
		{
			if (iLocal_15 == 1)
			{
				__LIB_3__::func_557(&iLocal_926, 1349.121f, 304.086f, 87.806f, 0f, 0f, 0f, 5f, 5f, 5f, "m_volRoads");
			}
			else
			{
				__LIB_3__::func_557(&iLocal_926, -1796.937f, -435.442f, 163.087f, 0f, 0f, 63.567f, 43.517f, 29.955f, 26.353f, "m_volRoads");
			}
			PATHFIND::_0xB03944057FD735BA(iLocal_926, 3, 0);
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_926))
	{
		PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_926, 3, 0);
	}
}

void func_63()
{
	if (iLocal_500 == 26)
	{
		Local_322[0 /*32*/].f_1 = joaat("RE_LOSTDOG_TEENS_01");
		Local_322[0 /*32*/] = 4;
		StringCopy(&(Local_322[0 /*32*/].f_23), "U_M_Y_UniStoneSkipper_01", 64);
		Local_322[0 /*32*/].f_3 = 268321530;
		Local_322[1 /*32*/].f_1 = joaat("RE_LOSTDOG_DOGS_01");
		Local_322[1 /*32*/] = 28;
		Local_322[1 /*32*/].f_3 = -1039019633;
		Local_322[2 /*32*/].f_1 = joaat("A_C_DOGLAB_01");
		Local_322[2 /*32*/] = 28;
	}
	else if (iLocal_500 == 69)
	{
		Local_322[0 /*32*/].f_1 = joaat("RE_LOSTDOG_TEENS_01");
		Local_322[0 /*32*/] = 4;
		StringCopy(&(Local_322[0 /*32*/].f_23), "DUEL_NEPHEW", 64);
		Local_322[0 /*32*/].f_3 = 591620484;
		Local_322[1 /*32*/].f_1 = joaat("RE_LOSTDOG_DOGS_01");
		Local_322[1 /*32*/].f_3 = 1613150473;
		Local_322[1 /*32*/] = 28;
		Local_322[2 /*32*/].f_1 = joaat("A_C_DOGLAB_01");
		Local_322[2 /*32*/] = 28;
	}
	func_182();
}

void func_64()
{
	__LIB_3__::func_318("script_re@lost_dog", &uLocal_27);
	__LIB_3__::func_318("amb_creature_mammal@world_squirrel_eating@idle0", &uLocal_27);
	__LIB_3__::func_318("amb_creature_mammal@world_dog_eating_ground@stand_enter", &uLocal_27);
	__LIB_3__::func_318("amb_creature_mammal@world_dog_eating_ground@base", &uLocal_27);
	__LIB_3__::func_318("amb_creature_mammal@world_dog_eating_ground@stand_exit", &uLocal_27);
	__LIB_3__::func_318("amb_creature_mammal@world_dog_sitting@stand_enter", &uLocal_27);
	__LIB_3__::func_318("amb_creature_mammal@world_dog_sitting@stand_exit", &uLocal_27);
	if (iLocal_500 == 26)
	{
		__LIB_3__::func_318("script_re@lost_dog@dog@squirrel", &uLocal_27);
	}
	else if (iLocal_500 == 69)
	{
		__LIB_3__::func_318("script_re@lost_dog@dog@timid", &uLocal_27);
		__LIB_3__::func_318("amb_creature_mammal@world_dog_sleeping@idle", &uLocal_27);
	}
}

void func_65()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_322[iVar0 /*32*/].f_1 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_322[iVar0 /*32*/].f_1, false);
		}
		iVar0++;
	}
}

void func_79(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_174(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_83(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!__LIB_0__::func_35(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (__LIB_0__::func_190())
	{
		__LIB_3__::func_180(1);
	}
	func_224(iParam2, uParam0->f_43);
	__LIB_1__::func_309(iParam2, 0, 0, 0, 0);
	if (__LIB_3__::func_181(iParam2) != -1)
	{
		MISC::_SET_WEATHER_TYPE_FROZEN(true);
	}
	AUDIO::START_AUDIO_SCENE("RE_active_location_scene");
	MISC::_0x1096603B519C905F(__LIB_3__::func_165(uParam0->f_3));
	if (MAP::DOES_BLIP_EXIST(*iParam3))
	{
		MAP::REMOVE_BLIP(iParam3);
	}
	func_227(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_85(var uParam0, int iParam1, float fParam2)
{
	bool bVar0;
	float fVar1;
	bVar0 = false;
	if (uParam0->f_178 && __LIB_3__::func_248())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !__LIB_3__::func_235(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
			return;
		}
		if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_173))
		{
			if (!__LIB_1__::func_205(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = __LIB_3__::func_249(uParam0, bVar0);
		__LIB_3__::func_336(&(uParam0->f_121[iParam1 /*9*/]), fVar1, 1082130432 /* Float: 4f */, 0, 90f, 0, uParam0->f_98[iParam1]);
		if (__LIB_3__::func_280(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			__LIB_3__::func_164(&(uParam0->f_121));
		}
	}
}

bool func_89()
{
	int iVar0;
	if (Local_128.f_46)
	{
		return false;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 1, 0, 0);
	if ((iVar0 == joaat("WEAPON_LASSO") && PED::IS_PED_SHOOTING(Global_35)) && __LIB_2__::func_0(iLocal_501[0], 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */, 0, 1061158912 /* Float: 0.75f */))
	{
		return true;
	}
	return false;
}

void func_97()
{
	if (!__LIB_0__::func_27(iLocal_900, 8388608))
	{
		if (!__LIB_0__::func_86(vLocal_455))
		{
			if (!CAM::IS_SPHERE_VISIBLE(vLocal_455, 2f))
			{
				__LIB_3__::func_618(vLocal_455, 4f, 1, 0, 0, 0, 0);
				__LIB_3__::func_594(&uLocal_920, &uLocal_919, vLocal_455, 0f, 0f, 0f, 4f, 4f, 4f, 0, 0, 1, 0, 0);
				__LIB_3__::func_337(&(uLocal_981[0]), vLocal_455, 1.5f);
				__LIB_1__::func_683(&iLocal_900, 8388608);
			}
		}
	}
}

void func_98()
{
	if (__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_501[1], false);
	}
}

void func_99()
{
	int iVar0;
	func_298();
	if (iLocal_632 >= 3 && iLocal_632 < 8)
	{
		_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
		__LIB_2__::func_966(iLocal_501[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	}
	if (Local_128.f_46)
	{
		if (iLocal_634 < 18)
		{
			iLocal_634 = 18;
		}
	}
	switch (iLocal_634)
	{
		case 0:
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_501[0], 1);
			func_299();
			PED::_SET_PED_BLACKBOARD_BOOL(iLocal_501[0], "IsSearching", true, -1);
			iLocal_634 = 1;
			break;
		case 1:
			if (__LIB_0__::func_27(iLocal_901, 256))
			{
				if (ENTITY::_0x0B7CB1300CBFE19C(iLocal_501[0], 1))
				{
					if (!ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 888864458))
					{
						PED::_0xA6F67BEC53379A32(iLocal_501[0], "IsSearching");
						func_300();
						iLocal_634 = 2;
					}
				}
				else
				{
					PED::_0xA6F67BEC53379A32(iLocal_501[0], "IsSearching");
					func_300();
					iLocal_634 = 2;
				}
			}
			else
			{
				func_301();
			}
			break;
		case 2:
			if ((__LIB_0__::func_265(&uLocal_966) > 1.75f || TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], 1435919172, true) != 1) && Local_128.f_98[0] < 10f)
			{
				if (iLocal_15 == 0)
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("MISTER_GEN", 1), 0, 15f, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (!MAP::DOES_BLIP_EXIST(uLocal_506[0]))
				{
					__LIB_2__::func_73(iLocal_501[0], &(uLocal_506[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
				}
				func_302(iLocal_501[0], Local_851, sLocal_910, func_122(2), 0, 0);
				iLocal_634 = 3;
			}
			break;
		case 3:
			func_303(5f);
			if ((__LIB_2__::func_227(0, 1, iLocal_501[0], 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(2), 1)) && Local_128.f_98[0] < 15f)
			{
				if (iLocal_15 == 0)
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("HOURS", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				func_302(iLocal_501[0], Local_851, sLocal_910, func_122(3), 0, 0);
				iLocal_634 = 4;
			}
			break;
		case 4:
			func_303(5f);
			if (!__LIB_0__::func_27(iLocal_901, 512))
			{
				if (!__LIB_0__::func_75(&uLocal_978))
				{
					__LIB_1__::func_148(&uLocal_978);
				}
				else if (__LIB_0__::func_265(&uLocal_978) > 2f)
				{
					if (__LIB_2__::func_227(0, 1, iLocal_501[0], 1))
					{
						__LIB_1__::func_683(&iLocal_901, 512);
					}
				}
			}
			else
			{
				func_305();
			}
			if (__LIB_0__::func_27(iLocal_987, 2))
			{
				iLocal_634 = 5;
				return;
			}
			else if (__LIB_0__::func_27(iLocal_987, 4))
			{
				iLocal_634 = 6;
				return;
			}
			else if (__LIB_0__::func_27(iLocal_987, 8))
			{
				func_109(Global_35, 8000);
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
				iLocal_634 = 6;
				return;
			}
			break;
		case 5:
			if (__LIB_0__::func_27(iLocal_987, 16))
			{
				if ((__LIB_2__::func_227(0, 1, iLocal_501[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(5), 1))
				{
					func_302(iLocal_501[0], Local_851, sLocal_910, func_122(6), 0, 0);
					iLocal_634 = 8;
				}
			}
			break;
		case 6:
			if ((__LIB_2__::func_227(0, 1, iLocal_501[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1)) && __LIB_0__::func_27(iLocal_987, 32))
			{
				__LIB_1__::func_683(&iLocal_901, 1024);
				if (!func_306(1088421888 /* Float: 7f */))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[0], vLocal_455, 1f, -1, 0.25f, 0, fLocal_458);
				}
				else
				{
					func_299();
				}
				__LIB_0__::func_325(&(uLocal_506[0]));
				iLocal_634 = 10;
			}
			break;
		case 8:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 1725482796))
			{
				if (iLocal_15 == 0)
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, "RE_LD_STR_V1_WHT_BRN_FOX", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, "RE_LD_EMR_V1_YEL_LAB_ALT_TREE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			if ((__LIB_2__::func_227(0, 1, iLocal_501[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(6), 1))
			{
				__LIB_1__::func_683(&iLocal_901, 2048);
				iLocal_634 = 9;
			}
			break;
		case 9:
			if (__LIB_0__::func_27(iLocal_900, 262144))
			{
				if (!func_306(1088421888 /* Float: 7f */))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[0], vLocal_455, 1f, -1, 0.25f, 0, fLocal_458);
				}
				else
				{
					func_299();
				}
				iLocal_634 = 10;
			}
			break;
		case 10:
			if (!__LIB_0__::func_27(iLocal_900, 2))
			{
				if (!__LIB_0__::func_27(iLocal_900, 33554432))
				{
					if (!__LIB_0__::func_27(iLocal_901, 16777216))
					{
						func_307();
					}
					else
					{
						func_308();
					}
				}
			}
			if (__LIB_0__::func_27(iLocal_901, 4096))
			{
				__LIB_1__::func_681(&iLocal_901, 2);
				__LIB_1__::func_683(&iLocal_901, 4);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_501[0], iLocal_501[1], -1, 2060, 41, 0);
				__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("RETURN", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				TASK::TASK_CLEAR_LOOK_AT(iLocal_501[0]);
				func_109(iLocal_501[1], -1);
				_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
				iLocal_634 = 12;
			}
			else if (__LIB_0__::func_27(iLocal_901, 262144))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_501[0], Global_35, 200f, -1, 256, 2f, 0);
				__LIB_1__::func_148(&uLocal_954);
				iLocal_634 = 11;
			}
			break;
		case 11:
			if (__LIB_0__::func_27(iLocal_901, 131072))
			{
				if (__LIB_2__::func_227(0, 1, iLocal_501[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, "RE_LD_EMR_V1_ILO_LINGER_END", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_901, 524288);
				}
			}
			break;
		case 12:
			if (__LIB_0__::func_27(iLocal_900, 65536))
			{
				if (iLocal_15 == 0)
				{
					func_309();
				}
				else if (__LIB_0__::func_27(iLocal_900, 512))
				{
					func_309();
				}
				if (__LIB_0__::func_27(iLocal_900, 16777216))
				{
					if (iLocal_15 == 0)
					{
						__LIB_2__::func_303(iLocal_501[0], iLocal_501[1], func_134("KID_LAUGH", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_634 = 13;
					}
					else
					{
						iLocal_634 = 15;
					}
				}
			}
			break;
		case 13:
			if (__LIB_0__::func_27(iLocal_901, 8))
			{
				iLocal_634 = 14;
			}
			break;
		case 14:
			func_310(1);
			break;
		case 15:
			if (__LIB_0__::func_27(iLocal_901, 1048576))
			{
				PED::FORCE_PED_MOTION_STATE(iLocal_501[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_501[1], -1, 0.25f, 2f, 0f, 1);
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				__LIB_1__::func_474(iLocal_501[0], &iVar0, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_501[0], true);
				iLocal_634 = 16;
			}
			break;
		case 16:
			if (func_312())
			{
				iLocal_634 = 17;
			}
			break;
		case 17:
			if (__LIB_0__::func_27(iLocal_901, 262144))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_501[0], Global_35, 200f, -1, 256, 2f, 0);
				__LIB_1__::func_148(&uLocal_954);
				iLocal_634 = 11;
			}
			break;
		case 18:
			if (func_313())
			{
				iLocal_634 = 19;
			}
			break;
		case 19:
			if (Local_128.f_46)
			{
				func_314();
			}
			break;
	}
}

void func_100()
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]))
	{
		return;
	}
	func_315();
	func_316(iLocal_501[1], &uLocal_969, 1, 25);
	if (Local_128.f_46)
	{
		if (iLocal_628 < 10)
		{
			iLocal_628 = 10;
		}
	}
	else
	{
		PED::SET_PED_RESET_FLAG(iLocal_501[1], 313, true);
	}
	switch (iLocal_628)
	{
		case 0:
			if (!__LIB_0__::func_27(iLocal_987, 128))
			{
				func_317();
				PED::SET_PED_RESET_FLAG(iLocal_501[1], 12, true);
				__LIB_4__::func_151(iLocal_501[1], &uLocal_927, 0f, 0f, 0f, 1, 30f, 10f, -1, 3000, 2000, 1075838976 /* Float: 2.5f */, 0, 1, 1084227584 /* Float: 5f */);
			}
			else if (func_318())
			{
				func_319();
				__LIB_1__::func_683(&iLocal_900, 32);
				iLocal_628 = 1;
			}
			break;
		case 1:
			if (func_320())
			{
				if (iLocal_15 == 1)
				{
					PED::_0x89F5E7ADECCCB49C(iLocal_501[1], "sad");
				}
				func_321();
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_501[1], 1);
				func_322();
				__LIB_1__::func_683(&iLocal_900, 4194304);
				iLocal_628 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_27(iLocal_901, 4096))
			{
				iLocal_628 = 3;
			}
			else
			{
				if (__LIB_0__::func_71(Global_35) && PED::_GET_GROUP_FORMATION(iLocal_889) != 9)
				{
					PED::SET_GROUP_FORMATION(iLocal_889, 9);
				}
				else if (PED::_GET_GROUP_FORMATION(iLocal_889) != 0)
				{
					PED::SET_GROUP_FORMATION(iLocal_889, 0);
				}
				if (__LIB_0__::func_665(iLocal_501[1], iLocal_501[0], 1, 1) < 15f)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], 1056466932, true) == 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_501[1], true, false);
					}
				}
			}
			break;
		case 3:
			func_144();
			func_324();
			if (__LIB_0__::func_27(iLocal_900, 512))
			{
				__LIB_1__::func_683(&iLocal_900, 65536);
				func_19();
				func_325();
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_917);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_917);
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, uLocal_512[3], true, 0) && iLocal_15 == 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1775.909f, -415.2195f, 154.1063f, 2f, 20000, 2f, 524289, 40000f);
				}
				if (__LIB_0__::func_94(iLocal_501[1], vLocal_541, 1) < 7f)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_541, 1f, 20000, 7f, 524289, vLocal_541.f_3.f_2);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_541, 2f, 20000, 7f, 524289, vLocal_541.f_3.f_2);
				}
				__LIB_1__::func_474(iLocal_501[1], &iLocal_917, 0, 0, 1, 1);
				PED::SET_PED_KEEP_TASK(iLocal_501[1], true);
				func_327(iLocal_501[1], vLocal_541, vLocal_541.f_3.f_2);
				iLocal_628 = 4;
			}
			break;
		case 4:
			func_325();
			if (__LIB_0__::func_94(iLocal_501[1], vLocal_541, 1) < 10f)
			{
				iLocal_628 = 5;
			}
			else
			{
				func_328();
				func_329();
			}
			break;
		case 5:
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1f);
			func_325();
			if (func_330(&Local_595, 106))
			{
				func_53(0);
				__LIB_1__::func_683(&iLocal_900, 16);
				if (iLocal_15 == 0)
				{
					iLocal_628 = 6;
				}
				else
				{
					iLocal_628 = 7;
				}
			}
			break;
		case 6:
			if (iLocal_632 == 15)
			{
				__LIB_3__::func_699(&(iLocal_501[1]), 0, iLocal_501[0], 1, 0, 0, 0, 1);
				func_332();
				iLocal_628 = 8;
			}
			else if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533.f_2, false))
			{
				if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_533.f_2) > 0.5f)
				{
					func_332();
				}
			}
			break;
		case 7:
			if (func_333())
			{
				iLocal_628 = 9;
			}
			break;
		case 8:
			break;
		case 9:
			func_334(0);
			break;
		case 10:
			func_335();
			iLocal_628 = 11;
			break;
		case 11:
			break;
	}
}

void func_101()
{
	if (__LIB_0__::func_27(iLocal_987, 2))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 217, true);
	}
}

void func_102()
{
	if (iLocal_632 <= 4 || __LIB_0__::func_27(iLocal_900, 16384))
	{
		return;
	}
	func_336();
}

void func_103()
{
	if (__LIB_0__::func_27(iLocal_901, 1048576))
	{
		return;
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -1931509438))
	{
		__LIB_1__::func_683(&iLocal_901, 1048576);
	}
}

void func_104()
{
	if (!__LIB_0__::func_27(iLocal_900, 262144) || __LIB_0__::func_27(iLocal_900, 1073741824 /* Float: 2f */))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_474))
	{
		return;
	}
	else if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_474))
	{
		TASK::REQUEST_WAYPOINT_RECORDING(sLocal_474);
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_501[2]))
	{
		func_337();
		PED::SET_PED_RESET_FLAG(iLocal_501[2], 170, true);
	}
	if (!PLAYER::_0x0E6846476906C9DD(PLAYER::PLAYER_ID(), iLocal_501[2]))
	{
		PLAYER::_0x543DFE14BE720027(PLAYER::PLAYER_ID(), iLocal_501[2], 0);
		ENTITY::SET_ENTITY_COORDS(iLocal_501[2], 0f, 0f, 0f, true, false, true, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_501[2], true);
		__LIB_1__::func_683(&iLocal_900, 1073741824 /* Float: 2f */);
	}
	if (__LIB_4__::func_61(iLocal_501[2], sLocal_474, 1, 1061360239 /* Float: 0.762f */, 1053609165 /* Float: 0.4f */, 0, 0, 1))
	{
	}
}

void func_105()
{
	if (!__LIB_0__::func_27(iLocal_908, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_501[1]) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[1], Global_35, 1, 1))
			{
				__LIB_1__::func_715(4, 0, 0, "RE_HONOR_CRUEL_KILLING", iLocal_501[1], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_683(&iLocal_908, 1);
			}
		}
	}
	if (iLocal_15 == 0)
	{
		if (!__LIB_0__::func_27(iLocal_908, 2))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_501[0]) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[0], Global_35, 1, 1))
			{
				__LIB_1__::func_715(4, 0, 0, "RE_HONOR_CRUEL_KILLING", iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_683(&iLocal_908, 2);
			}
		}
	}
	else if (iLocal_15 == 1)
	{
		if (!__LIB_0__::func_27(iLocal_908, 2))
		{
			if (__LIB_0__::func_27(iLocal_900, 16))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_501[0]) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[0], Global_35, 1, 1))
				{
					__LIB_1__::func_715(1, 0, 0, 0, iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_1__::func_683(&iLocal_908, 2);
				}
			}
			else if (ENTITY::IS_ENTITY_DEAD(iLocal_501[0]) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[0], Global_35, 1, 1))
			{
				__LIB_1__::func_715(4, 0, 0, "RE_HONOR_CRUEL_KILLING", iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_1__::func_683(&iLocal_908, 2);
			}
		}
		if (!__LIB_0__::func_27(iLocal_908, 4))
		{
			if (__LIB_0__::func_27(iLocal_900, 16))
			{
				if (PED::GET_PED_CONFIG_FLAG(iLocal_501[0], 11, true))
				{
					__LIB_1__::func_715(11, 0, 0, "RE_HONOR_JUSTICE_SERVED", iLocal_501[0], 0, 1065353216 /* Float: 1f */, 0);
					__LIB_1__::func_683(&iLocal_908, 4);
				}
			}
		}
	}
}

int func_106()
{
	if (!__LIB_0__::func_27(iLocal_900, 262144))
	{
		return 0;
	}
	if (__LIB_0__::func_27(iLocal_900, 1048576))
	{
		return 1;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_533, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_533);
	}
	else
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533, "PBL_NO_FEED_ALL");
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_533, "PBL_NO_FEED_ALL"))
		{
			__LIB_1__::func_683(&iLocal_900, 1048576);
			return 1;
		}
	}
	return 0;
}

void func_109(var uParam0, int iParam1)
{
	Local_475.f_3 = uParam0;
	Local_475 = { 0f, 0f, 0f };
	Local_475.f_8 = 4;
	Local_475.f_20 = 4;
	Local_475.f_19 = 4;
	Local_475.f_22 = 4;
	Local_475.f_21 = 4;
	Local_475.f_17 = 4;
	Local_475.f_18 = 4;
	Local_475.f_4 = 21030;
	Local_475.f_7 = iParam1;
	Local_475.f_13 = 2;
}

void func_110()
{
	switch (iLocal_500)
	{
		case 26:
			__LIB_3__::func_557(&(uLocal_512[3]), -1775.679f, -392.4636f, 163.0866f, 0f, 0f, 60.86665f, 49.10442f, 34.55846f, 26.35269f, "volDogFR");
			__LIB_3__::func_557(&(uLocal_512[4]), -1765.776f, -420.9764f, 163.0866f, 0f, 0f, 58.29212f, 11.29032f, 11.43307f, 26.35269f, "volDogR");
			__LIB_3__::func_557(&(uLocal_512[1]), -1792.451f, -422.8227f, 163.0866f, 0f, 0f, 63.56664f, 18.78336f, 32.46287f, 26.35269f, "volDogF");
			__LIB_3__::func_557(&(uLocal_512[0]), -1793.625f, -443.0624f, 163.0866f, 0f, 0f, 93.04421f, 24.85473f, 35.51765f, 26.35269f, "volDogL");
			break;
		case 69:
			__LIB_3__::func_557(&(uLocal_512[4]), 1341.482f, 274.648f, 87.806f, 0f, 0f, 80.479f, 36.835f, 20.063f, 25f, "volDogR");
			__LIB_3__::func_557(&(uLocal_512[3]), 1362.41f, 267.942f, 88.952f, 0f, 0f, 19.31f, 27.848f, 50.741f, 25f, "volDogFR");
			__LIB_3__::func_557(&(uLocal_512[2]), 1360.98f, 304.967f, 87.685f, 0f, 0f, 104.782f, 25f, 36.394f, 32.971f, "volDogFL");
			__LIB_3__::func_557(&(uLocal_512[0]), 1344.317f, 318.623f, 87.685f, 0f, 0f, 17.264f, 36.835f, 39.569f, 25f, "volDogL");
			break;
	}
	if (iLocal_15 == 0)
	{
		StringCopy(&cLocal_116, "pblExitGood", 32);
	}
	else
	{
		StringCopy(&cLocal_116, "pblExitBad", 32);
	}
}

void func_111()
{
	if (iLocal_15 == 1)
	{
		iLocal_923 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1404.695f, 315.1154f, 90.49152f, 0f, 0f, 100.8236f, 186.8191f, 174.625f, 44.5228f, "volLostDog");
	}
	else
	{
		iLocal_923 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1798.875f, -354.4025f, 159.6362f, 0f, 0f, -30.96453f, 168.6743f, 218.4974f, 151.9258f, "volLostDog");
	}
	POPULATION::_0xB56D41A694E42E86(iLocal_923, 256, 0, joaat("SPECIES_DOMESTIC_CAT"), -1, -1, 2);
	POPULATION::_0xB56D41A694E42E86(iLocal_923, 256, 0, joaat("SPECIES_DOMESTIC_DOG"), -1, -1, 2);
	if (!__LIB_0__::func_86(vLocal_455))
	{
		iLocal_924 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vLocal_455, 0f, 0f, 0f, 3f, 3f, 3f, "m_volKidLoiter");
		POPULATION::_0xB56D41A694E42E86(iLocal_923, 262144, 0, 0, -1, -1, 2);
	}
}

bool func_112()
{
	if (func_340(&Local_128, 0.5f, 25f, 10f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) && (__LIB_2__::func_215(iLocal_501[0], Global_35, 1, 18f, 0) || Local_128.f_98[0] < 4f))
	{
		return true;
	}
	if (__LIB_0__::func_27(iLocal_987, 1024))
	{
		if (__LIB_0__::func_265(&uLocal_960) > 2f)
		{
			return true;
		}
	}
	return false;
}

void func_113()
{
	if (__LIB_0__::func_27(iLocal_901, 16384))
	{
		func_342(&uLocal_1161, &Local_1153, iLocal_501[0], 0f, 0f, 0f, 0, -1, 2000, 1250, 1, 0, 1, 1106247680 /* Float: 30f */);
	}
}

void func_116()
{
	if (!__LIB_0__::func_27(iLocal_900, 4))
	{
		__LIB_3__::func_152(97);
		__LIB_0__::func_7(&Global_1935630, 4);
		__LIB_1__::func_683(&iLocal_900, 4);
	}
}

void func_118()
{
	__LIB_3__::func_609(12, 1);
	func_109(Global_35, 8000);
	_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[0], &Local_475);
	__LIB_1__::func_345();
	func_44();
	__LIB_1__::func_683(&iLocal_900, 2048);
}

char* func_122(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "come_here_girl_kid";
			break;
		case 2:
			sVar0 = "hey_mister_kid";
			break;
		case 3:
			sVar0 = "shes_been_gone_kid";
			break;
		case 4:
			sVar0 = "alright_kid";
			break;
		case 5:
			sVar0 = "i_appreciate_kid";
			break;
		case 6:
			sVar0 = "black_retriever_kid";
			break;
		case 7:
			sVar0 = "alright_kid";
			break;
		case 8:
			sVar0 = "enter_feeding_player";
			break;
		case 9:
			sVar0 = "idle_feed_player";
			break;
		case 10:
			sVar0 = "exit_feed_player";
			break;
		case 18:
			sVar0 = "breakout_sit_left_kid";
			break;
		case 19:
			sVar0 = "breakout_sit_right_kid";
			break;
		case 20:
			sVar0 = "breakout_stand_left_kid";
			break;
		case 21:
			sVar0 = "breakout_stand_right_kid";
			break;
		case 22:
			sVar0 = "idle_01_dog";
			break;
		case 23:
			sVar0 = "idle_02_dog";
			break;
		case 24:
			sVar0 = "jump_01_dog";
			break;
		case 25:
			sVar0 = "jump_02_dog";
			break;
		case 26:
			sVar0 = "jump_03_dog";
			break;
		case 27:
			sVar0 = "base_dog";
			break;
	}
	return sVar0;
}

bool func_123()
{
	if (!__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		func_354();
		iLocal_501[1] = __LIB_3__::func_870(Local_322[1 /*32*/].f_1, &(Local_322[1 /*32*/]), vLocal_469, fLocal_472, 0, 0, 1, 0, 1);
		__LIB_3__::func_459(iLocal_501[1], 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_501[1], false, 0f);
		__LIB_2__::func_279(iLocal_501[1], 1);
		TASK::_0xE01C8DC8EDD28D31(iLocal_501[1], 1);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_533.f_2, "pedDog", iLocal_501[1], 0);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_501[1], "RELD_DOG_MIXGROUP", 0f);
		AUDIO::START_AUDIO_SCENE("RELD_LOST_DOG_SCENE");
		PED::_0x4F27603E44A8E4C0(iLocal_501[1], 10, 0);
		__LIB_3__::func_618(vLocal_469, 5f, 1, 0, 0, 0, 0);
		__LIB_3__::func_594(&uLocal_922, &uLocal_921, vLocal_469, 0f, 0f, 0f, 5f, 5f, 5f, 0, 0, 1, 0, "m_volDog");
		if (iLocal_16 == 1)
		{
			__LIB_3__::func_594(&uLocal_925, &uLocal_918, -1786.716f, -327.9248f, 179.2992f, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, 0, 0, 1, 0, "m_volNearDogScenario");
		}
		if (iLocal_16 == 2)
		{
			__LIB_3__::func_585(&(uLocal_981[2]), 1451.781f, 367.7539f, 87.67948f, 1f);
		}
		else if (iLocal_16 == 3)
		{
			__LIB_3__::func_337(&(uLocal_981[2]), 1459.54f, 328.2583f, 88.65903f, 0.8f);
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_124()
{
	__LIB_3__::func_558(&iLocal_519, vLocal_469, 0f, 0f, 0f, 8f, 8f, 8f, "m_volSafeFeed");
	iLocal_520 = VOLUME::_0x0EB78C2B156635B1(joaat("VOLCYLINDER"), vLocal_469, 0f, 0f, 0f, 2f, 2f, 2f);
}

void func_125()
{
	switch (iLocal_15)
	{
		case 0:
			__LIB_4__::func_78(-1798.4f, -397.8385f, 152.6189f, 120f, &iLocal_511, -1282792512);
			break;
		case 1:
			__LIB_4__::func_78(1413.383f, 316.321f, 87.39703f, 100f, &iLocal_511, -1282792512);
			break;
	}
}

void func_127()
{
	if (iLocal_15 == 0)
	{
		__LIB_2__::func_354(&(uLocal_981[1]), -1787.52f, -432.5891f, 154.3505f, 1.5f, 2, 286, 0);
		__LIB_2__::func_354(&(uLocal_981[2]), -1787.52f, -432.5891f, 154.3505f, 1.5f, 1, 28, 0);
		__LIB_3__::func_337(&(uLocal_981[3]), -1774.121f, -436.3038f, 154.0623f, 1.5f);
	}
}

void func_128()
{
	StringCopy(&cLocal_124, "PBL_NO_FEED_ALL", 32);
}

void func_129(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	vector3 vVar4;
	vLocal_451 = { ENTITY::GET_ENTITY_COORDS(Global_35, true, false) };
	fLocal_454 = __LIB_0__::func_152(Global_36, vLocal_469, 1);
	OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Global_36, fLocal_454, 0f, 0.6f, 0f);
	__LIB_3__::func_409(&vLocal_451, 1088421888 /* Float: 7f */);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_533, vLocal_451, 0f, 0f, fLocal_454, 2);
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vLocal_451, fLocal_454, 0f, 2.01f, 0f) };
	fVar3 = (fLocal_454 - 225f);
	__LIB_3__::func_409(&vVar0, 0.5f);
	*iParam0 = TASK::CREATE_SCENARIO_POINT(iLocal_529, vVar0, fVar3, 0, 0, 0);
	vVar4 = { TASK::_GET_SCENARIO_POINT_COORDS(*iParam0, true) };
}

void func_130(vector3 vParam0, float fParam3)
{
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_533, vParam0, 0f, 0f, fParam3, 2);
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_533, &cLocal_124, true);
}

bool func_132(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		switch (*uParam4)
		{
			case 0:
				if (bParam8 && PED::IS_PED_ON_MOUNT(iParam0))
				{
					vVar0 = { __LIB_3__::func_508(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!__LIB_0__::func_86(vVar0))
					{
						if (__LIB_0__::func_195(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					TASK::TASK_DISMOUNT_ANIMAL(iParam0, iVar5, 0, 0, 0, 0);
					*uParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, false, 0, 0);
					}
					if (PED::_IS_PED_CARRYING(iParam0))
					{
						iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar6, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 2f, 8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 1:
				if (!PED::IS_PED_ON_MOUNT(iParam0))
				{
					iVar3 = PED::_GET_LAST_MOUNT(iParam0);
					if (!ENTITY::IS_ENTITY_DEAD(iVar3))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						WEAPON::_0x4820A6939D7CEF28(Global_35, 0);
						WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar4);
					if (bParam6)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, false, 0, 0);
					}
					TASK::TASK_ENTER_ANIM_SCENE(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432 /* Float: -1f */);
					__LIB_1__::func_474(iParam0, &iVar4, 0, 0, 1, 1);
					*uParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iParam0, iParam1))
					{
						return true;
					}
				}
				else if (__LIB_0__::func_163(iParam0, 242628503))
				{
					if (!bParam6 || TASK::GET_SEQUENCE_PROGRESS(iParam0) > 0)
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam1, sParam3))
						{
							if (!ANIMSCENE::_0x3B393716C3FD8237(iParam0) && ANIMSCENE::_0x337F1CC8EE895601(iParam1, sParam2))
							{
								*uParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

void func_133()
{
	if (!Local_128.f_46)
	{
		if (!__LIB_0__::func_27(iLocal_901, 2))
		{
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "pblIdleReturn");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "PB_INTRO_FL");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "PB_INTRO_FR");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "PB_INTRO_L");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "PB_INTRO_N");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "PB_INTRO_R");
			if (((((ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "pblIdleReturn") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "PB_INTRO_FL")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "PB_INTRO_FR")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "PB_INTRO_L")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "PB_INTRO_N")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "PB_INTRO_R"))
			{
				func_371();
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_501[0], false, true);
				ENTITY::SET_ENTITY_COORDS(iLocal_501[0], vLocal_455, true, false, true, true);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_533.f_1, "pblIdleReturn", true);
				ANIMSCENE::START_ANIM_SCENE(Local_533.f_1);
				iLocal_906 = Local_533.f_1;
				__LIB_1__::func_683(&iLocal_901, 2);
			}
		}
	}
}

char* func_134(char* sParam0, bool bParam1)
{
	char cVar0[64];
	char cVar8[64];
	char cVar16[64];
	StringCopy(&cVar16, "RE_LD_", 64);
	if (iLocal_500 == 26)
	{
		StringCopy(&cVar0, "STR_", 64);
	}
	else if (iLocal_500 == 69)
	{
		StringCopy(&cVar0, "EMR_", 64);
	}
	if (iLocal_15 == 0 || bParam1)
	{
		StringCopy(&cVar8, "V1_", 64);
	}
	else if (iLocal_15 == 1)
	{
		StringCopy(&cVar8, "V2_", 64);
	}
	StringConCat(&cVar16, &cVar0, 64);
	StringConCat(&cVar16, &cVar8, 64);
	__LIB_0__::func_482(sParam0);
	StringConCat(&cVar16, sParam0, 64);
	return __LIB_1__::func_569(cVar16);
}

void func_135()
{
	if (__LIB_0__::func_27(iLocal_900, 33554432))
	{
		return;
	}
	if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_533) > 0.99f) || bLocal_893 == 0)
	{
		__LIB_1__::func_683(&iLocal_900, 33554432);
	}
}

void func_136()
{
	if ((!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_533) > 0.99f) || bLocal_893 == 0)
	{
		if (__LIB_0__::func_27(iLocal_900, 4096))
		{
			func_59(1, 0);
		}
	}
}

bool func_137()
{
	if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_533) > 0.99f) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533, false))
	{
		return true;
	}
	return false;
}

void func_139()
{
	if (!__LIB_0__::func_27(iLocal_900, 2))
	{
		if (!__LIB_0__::func_75(&uLocal_939))
		{
			__LIB_1__::func_148(&uLocal_939);
		}
		else if (__LIB_1__::func_313(&uLocal_939, 1f))
		{
			__LIB_1__::func_422("DOG_OBJ03", 7500, 0, 1, 0, 0, -1, -1, 0);
			__LIB_2__::func_73(iLocal_501[0], &(uLocal_506[0]), -89429847, joaat("BLIP_MODIFIER_FRIENDLY_OBJECTIVE"), 0, 0);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_506[0], "RE_INTER_STRANGER");
			MAP::_BLIP_SET_STYLE(uLocal_506[1], joaat("BLIP_STYLE_COMPANION"));
			__LIB_1__::func_683(&iLocal_900, 2);
		}
	}
}

void func_140()
{
	int iVar0;
	if (Local_17 == -1)
	{
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			if (__LIB_0__::func_393(iLocal_501[1], uLocal_512[iVar0], 0, 1) || __LIB_0__::func_393(Global_35, uLocal_512[iVar0], 0, 1))
			{
				Local_17 = iVar0;
			}
			iVar0++;
		}
		if (Local_17 != -1)
		{
			switch (iLocal_500)
			{
				case 26:
					switch (Local_17)
					{
						case 1:
						case 3:
						case 4:
							Local_17.f_6 = { -1786.558f, -432.515f, 154.328f };
							Local_17.f_9 = 19.302f;
							Local_17.f_2 = { -1788.245f, -432.748f, 154.37f };
							Local_17.f_5 = 19.302f;
							break;
						case 0:
							Local_17.f_6 = { -1774.482f, -436.1153f, 154.0681f };
							Local_17.f_9 = 40.6423f;
							Local_17.f_2 = { -1775.511f, -437.183f, 154.0404f };
							Local_17.f_5 = 27.444f;
							break;
					}
					break;
				case 69:
					Local_17.f_6 = { vLocal_455 };
					Local_17.f_9 = fLocal_458;
					break;
			}
		}
	}
}

char* func_143()
{
	char* sVar0;
	switch (iLocal_15)
	{
		case 0:
			if (__LIB_1__::func_205(iLocal_501[1], uLocal_512[4], 1, 0))
			{
				sVar0 = "PB_INTRO_R";
			}
			else if (__LIB_1__::func_205(iLocal_501[1], uLocal_512[3], 1, 0))
			{
				sVar0 = "PB_INTRO_N";
			}
			else if (__LIB_1__::func_205(iLocal_501[1], uLocal_512[1], 1, 0))
			{
				sVar0 = "PB_INTRO_FL";
			}
			else if (__LIB_1__::func_205(iLocal_501[1], uLocal_512[0], 1, 0))
			{
				sVar0 = "PB_INTRO_L";
			}
			break;
		case 1:
			if (__LIB_1__::func_205(iLocal_501[1], uLocal_512[4], 1, 0))
			{
				sVar0 = "PB_INTRO_R";
			}
			else if (__LIB_1__::func_205(iLocal_501[1], uLocal_512[3], 1, 0))
			{
				sVar0 = "PB_INTRO_FR";
			}
			else if (__LIB_1__::func_205(iLocal_501[1], uLocal_512[2], 1, 0))
			{
				sVar0 = "PB_INTRO_FL";
			}
			else if (__LIB_1__::func_205(iLocal_501[1], uLocal_512[0], 1, 0))
			{
				sVar0 = "PB_INTRO_L";
			}
			break;
	}
	return sVar0;
}

void func_144()
{
	float fVar0;
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_533.f_2, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_533.f_2);
	}
	else if (!ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_2, &cLocal_116))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_2, &cLocal_116);
	}
	else if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_2, &cLocal_116))
	{
		if (__LIB_0__::func_27(iLocal_901, 32))
		{
			if (!__LIB_0__::func_27(iLocal_900, 256))
			{
				__LIB_3__::func_409(&(Local_553.f_6), 1f);
				ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_533.f_2, Local_553.f_6, 0f, 0f, Local_553.f_9.f_2, 2);
				ANIMSCENE::START_ANIM_SCENE(Local_533.f_2);
				iLocal_906 = Local_533.f_2;
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_533.f_2, &cLocal_116, true);
				__LIB_1__::func_683(&iLocal_900, 256);
			}
			else if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_533.f_2, "pedDog", &vLocal_541, true, &cLocal_116, 2))
			{
				fVar0 = vLocal_541.z;
				__LIB_3__::func_409(&vLocal_541, 1f);
				if (fVar0 > vLocal_541.z)
				{
					vLocal_541.f_2 = fVar0;
				}
				__LIB_1__::func_683(&iLocal_900, 512);
			}
		}
	}
}

void func_145()
{
	if (iLocal_15 == 0 && __LIB_4__::func_66())
	{
		Local_17.f_6 = { -1776.959f, -445.702f, 153.971f };
		Local_17.f_9 = 19.31f;
		Local_17.f_2 = { -1776.288f, -445.08f, 153.937f };
		Local_17.f_5 = 30.354f;
	}
	iLocal_524 = TASK::CREATE_SCENARIO_POINT(iLocal_531, Local_17.f_6, Local_17.f_9, 0, 0, 0);
	iLocal_525 = TASK::CREATE_SCENARIO_POINT(iLocal_530, Local_17.f_2, Local_17.f_5, 0, 0, 0);
	__LIB_3__::func_594(&uLocal_518, &uLocal_521, Local_17.f_6, 0f, 0f, 0f, 2.5f, 2.5f, 2.5f, 0, 0, 1, 8, 0);
}

bool func_148(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4, var uParam5)
{
	if (func_380(iParam0, iParam1, iParam2, uParam3, uParam4))
	{
		return true;
	}
	else if (*uParam3 > 2 && uParam5->f_44 == 0)
	{
		uParam5->f_44 = 1;
	}
	return false;
}

void func_149()
{
	float fVar0;
	if ((bLocal_892 || __LIB_0__::func_27(iLocal_987, 2048)) || __LIB_0__::func_27(iLocal_987, 4096))
	{
		return;
	}
	if (iLocal_15 == 0)
	{
		if (__LIB_0__::func_27(iLocal_901, 8))
		{
			if (__LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (!__LIB_0__::func_75(&uLocal_972))
				{
					__LIB_1__::func_148(&uLocal_972);
				}
				else if (__LIB_0__::func_265(&uLocal_972) > 3f)
				{
					if (__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_501[0], 1))
					{
						if (__LIB_0__::func_871())
						{
							__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("PLYFINAL_HIGH", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("PLYFINAL_LOW", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						}
						bLocal_892 = true;
					}
				}
			}
		}
	}
	else if (__LIB_0__::func_27(iLocal_901, 1048576))
	{
		if (__LIB_2__::func_227(0, 1, Global_35, 1))
		{
			if (!__LIB_0__::func_75(&uLocal_972))
			{
				__LIB_1__::func_148(&uLocal_972);
			}
			else
			{
				fVar0 = __LIB_0__::func_265(&uLocal_972);
				if ((((fVar0 < 20f && !__LIB_0__::func_27(iLocal_987, 2048)) && !__LIB_0__::func_27(iLocal_987, 8192)) && !__LIB_0__::func_27(iLocal_987, 4096)) && !__LIB_0__::func_27(iLocal_987, 16384))
				{
					if (fVar0 > 3f)
					{
						if ((__LIB_2__::func_227(0, 1, Global_35, 1) && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && Local_128.f_98[0] > 15f)
						{
							if (__LIB_0__::func_871())
							{
								__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("PLYFINAL_HIGH", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("PLYFINAL_LOW", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							}
							bLocal_892 = true;
						}
					}
				}
				else
				{
					bLocal_892 = true;
				}
			}
		}
	}
}

void func_150()
{
	if (!__LIB_0__::func_27(iLocal_901, 131072))
	{
		if ((__LIB_0__::func_27(iLocal_987, 16384) || __LIB_0__::func_27(iLocal_987, 262144)) || __LIB_0__::func_27(iLocal_901, 262144))
		{
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(Global_35) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]))
			{
				if (Local_128.f_98[0] < 10f)
				{
					if (!__LIB_0__::func_75(&uLocal_954))
					{
						__LIB_1__::func_148(&uLocal_954);
					}
					else if (__LIB_0__::func_265(&uLocal_954) > 20f)
					{
						if (iLocal_15 == 0)
						{
							if (__LIB_2__::func_140(0))
							{
								__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("LINGER_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(iLocal_501[0], Global_35, "IGNORING_YOU", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
						}
						else if (__LIB_2__::func_140(0))
						{
							__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("LINGER_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else
						{
							__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("LINGER_END", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						__LIB_1__::func_683(&iLocal_901, 131072);
					}
				}
			}
		}
	}
}

void func_172(var uParam0)
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
	__LIB_3__::func_264(uParam0);
	__LIB_3__::func_311(uParam0);
	__LIB_3__::func_252(uParam0);
	if (!func_394(uParam0))
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

int func_174(int iParam0, int iParam1)
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
				Jump @3261; //curOff = 3048
				return -2137572125;
				Jump @3261; //curOff = 3059
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
				Jump @3261; //curOff = 3106
				return -774894224;
				Jump @3261; //curOff = 3117
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
				Jump @3261; //curOff = 3164
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
				Jump @3261; //curOff = 3225
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
void func_175(int iParam0, int iParam1, int iParam2)
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

void func_176(int iParam0, int iParam1)
{
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam0))
	{
		TASK::_DELETE_SCENARIO_POINT(iParam0);
		STREAMING::_0x4EDDD9E9CA5AF985(iParam1);
	}
}

void func_182()
{
	Local_322[0 /*32*/].f_6 = { 0f, 0f, 0f };
	Local_322[0 /*32*/].f_9 = 90f;
	switch (iLocal_500)
	{
		case 26:
			vLocal_459[0 /*3*/] = { -1789.921f, -378.5114f, 157.9496f };
			vLocal_459[1 /*3*/] = { -1776.22f, -415.929f, 154.1867f };
			vLocal_459[2 /*3*/] = { -1827.303f, -415.506f, 160.0764f };
			break;
		case 69:
			vLocal_459[0 /*3*/] = { 1356.624f, 308.2545f, 86.5694f };
			vLocal_459[1 /*3*/] = { 1422.414f, 322.5242f, 87.36899f };
			vLocal_459[2 /*3*/] = { 1434.257f, 386.2798f, 88.67645f };
			break;
	}
}

void func_224(int iParam0, int iParam1)
{
	float fVar0;
	if (MISC::GET_RANDOM_EVENT_FLAG())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0 /*8*/].f_1++;
	if (__LIB_1__::func_85(iParam0, 2))
	{
		__LIB_3__::func_255(iParam0, __LIB_3__::func_372(iParam1));
	}
	else
	{
		__LIB_3__::func_299(iParam0, __LIB_1__::func_898());
	}
	fVar0 = (1f + (BUILTIN::TO_FLOAT((Global_17504.f_42[iParam0 /*8*/].f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	__LIB_2__::func_212(iParam0, Global_1310750[iParam0 /*111*/].f_36, fVar0, 1, 0);
	__LIB_3__::func_262(iParam0, 0);
	__LIB_3__::func_196(iParam0);
	func_435(1);
	PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_RANDOM_EVENT_FLAG(true);
	}
	AUDIO::_0x33D51F801CB16E4F();
	Global_1310750[iParam0 /*111*/].f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!__LIB_1__::func_85(iParam0, 16))
	{
		__LIB_1__::func_309(iParam0, 0, 0, 0, 0);
	}
}

void func_227(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || __LIB_0__::func_1(Global_1310750[uParam0->f_3 /*111*/], 16777216))
	{
		if (bParam2)
		{
			if (__LIB_1__::func_85(uParam0->f_3, 1073741824 /* Float: 2f */))
			{
				func_439(2, -1, 0, 0, 0);
			}
			else
			{
				func_439(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_439(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!__LIB_0__::func_563(1, uParam0->f_177))
				{
					__LIB_3__::func_197(16, uParam0->f_177);
					__LIB_3__::func_198(1, uParam0->f_177);
				}
				COMPENDIUM::COMPENDIUM_GANG_ENCOUNTERED(__LIB_2__::func_31(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_439(8, -1, 0, 0, 0);
	}
}

void func_298()
{
	if (__LIB_0__::func_27(iLocal_987, 16777216))
	{
		return;
	}
	if (Local_128.f_46)
	{
		if (!__LIB_0__::func_27(iLocal_987, 16777216))
		{
			__LIB_2__::func_593(&(Local_998[0 /*21*/]), &Local_1083);
			__LIB_1__::func_683(&iLocal_987, 16777216);
			return;
		}
	}
	if (iLocal_993[0] > 0)
	{
		if ((__LIB_0__::func_27(iLocal_987, 64) && !__LIB_0__::func_27(iLocal_987, 2)) && !__LIB_0__::func_27(iLocal_987, 4))
		{
			iLocal_988[0] = func_513(&(iLocal_501[0]), &(Local_998[0 /*21*/]), 20f, &Local_1083, &(Local_128.f_192), 0f, 1, 0, "", __LIB_2__::func_340(2, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			iLocal_988[0] = func_513(&(iLocal_501[0]), &(Local_998[0 /*21*/]), 20f, &Local_1083, &(Local_128.f_192), 0f, 1, 0, "", __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		}
	}
	switch (iLocal_993[0])
	{
		case 0:
			__LIB_2__::func_602(&(Local_1083[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
			__LIB_2__::func_602(&(Local_1083[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
			iLocal_993[0] = 1;
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_901, 256))
			{
				switch (iLocal_988[0])
				{
					case 0:
						__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("CALLOUT", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
						__LIB_1__::func_683(&iLocal_987, 1024);
						__LIB_1__::func_148(&uLocal_960);
						iLocal_993[0] = 2;
						break;
					case 1:
						break;
				}
			}
			else
			{
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
				iLocal_993[0] = 2;
			}
			break;
		case 2:
			if (!__LIB_0__::func_27(iLocal_901, 16384))
			{
				if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]))
				{
					__LIB_1__::func_683(&iLocal_901, 16384);
				}
			}
			if (__LIB_0__::func_27(iLocal_987, 1))
			{
				__LIB_2__::func_451(&(Local_998[0 /*21*/]), 0);
				__LIB_2__::func_602(&(Local_1083[0 /*17*/]), __LIB_2__::func_460(4), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_1083[1 /*17*/]), __LIB_2__::func_460(6), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 1, 0);
				__LIB_1__::func_683(&iLocal_987, 64);
				iLocal_993[0] = 3;
			}
			break;
		case 3:
			if (!__LIB_0__::func_27(iLocal_987, 8))
			{
				switch (iLocal_988[0])
				{
					case 0:
						__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("SURE", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
						__LIB_2__::func_451(&(Local_998[0 /*21*/]), 0);
						__LIB_1__::func_683(&iLocal_987, 2);
						__LIB_1__::func_148(&uLocal_960);
						iLocal_993[0] = 4;
						break;
					case 1:
						__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("SORRY", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
						__LIB_2__::func_451(&(Local_998[0 /*21*/]), 0);
						__LIB_1__::func_683(&iLocal_987, 4);
						iLocal_993[0] = 5;
						break;
				}
			}
			else
			{
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
				iLocal_993[0] = 5;
			}
			break;
		case 4:
			if (__LIB_0__::func_265(&uLocal_960) > 2.5f)
			{
				func_302(iLocal_501[0], Local_851, sLocal_910, func_122(5), 0, 0);
				__LIB_1__::func_683(&iLocal_987, 16);
				__LIB_1__::func_148(&uLocal_960);
				iLocal_993[0] = 6;
			}
			break;
		case 6:
			if (!__LIB_0__::func_27(iLocal_987, 1048576))
			{
				if (__LIB_2__::func_140(0))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 168964286))
					{
						__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ACCEPTED_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -375693339))
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ACCEPTED", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (__LIB_0__::func_27(iLocal_900, 262144) && !__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_501[0])))
				{
					__LIB_2__::func_451(&(Local_998[0 /*21*/]), 0);
					__LIB_2__::func_602(&(Local_1083[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					if (__LIB_0__::func_27(iLocal_900, 4194304))
					{
						__LIB_2__::func_602(&(Local_1083[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					}
					__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 1, 0);
					__LIB_1__::func_683(&iLocal_987, 1048576);
				}
			}
			else if (__LIB_0__::func_27(iLocal_900, 4194304))
			{
				__LIB_2__::func_602(&(Local_1083[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
				iLocal_993[0] = 9;
			}
			else
			{
				switch (iLocal_988[0])
				{
					case 0:
						if (!__LIB_0__::func_27(iLocal_987, 2097152))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GRT_POS_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
							__LIB_1__::func_148(&uLocal_960);
							__LIB_1__::func_683(&iLocal_987, 2097152);
							iLocal_993[0] = 7;
						}
						break;
					case 1:
						__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_CHANGE_MIND_NO", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_501[0]))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_501[0], Global_35, 0, -1f, -1f, -1f);
						}
						__LIB_2__::func_426(&(iLocal_501[1]));
						__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
						func_49();
						__LIB_0__::func_172(iLocal_520);
						if (__LIB_4__::func_68("DOG_OBJ01", 1))
						{
							__LIB_1__::func_390("DOG_OBJ01", 1);
						}
						else if (__LIB_4__::func_68("DOG_OBJ04", 1))
						{
							__LIB_1__::func_390("DOG_OBJ04", 1);
						}
						if (__LIB_0__::func_27(iLocal_987, 2))
						{
							__LIB_0__::func_769();
						}
						__LIB_1__::func_683(&iLocal_987, 4);
						__LIB_1__::func_683(&iLocal_987, 512);
						__LIB_1__::func_683(&iLocal_901, 8192);
						__LIB_1__::func_681(&iLocal_987, 1048576);
						iLocal_993[0] = 5;
						break;
				}
			}
			break;
		case 7:
			if ((__LIB_0__::func_265(&uLocal_960) > 3f && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GRT_POS_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 1, 0);
				iLocal_993[0] = 6;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-4f, 1, Global_35, 1))
			{
				if (__LIB_0__::func_27(iLocal_987, 512))
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_CHANGE_MIND_NO", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					func_302(iLocal_501[0], Local_851, sLocal_910, func_122(7), 0, 0);
				}
				__LIB_1__::func_683(&iLocal_987, 32);
				iLocal_993[0] = 8;
			}
			break;
		case 8:
			func_521();
			if (__LIB_0__::func_27(iLocal_901, 8192))
			{
				__LIB_1__::func_681(&iLocal_901, 8192);
			}
			if (__LIB_0__::func_27(iLocal_987, 131072) && func_522())
			{
				iLocal_993[0] = 18;
			}
			else if (!__LIB_0__::func_27(iLocal_987, 4194304))
			{
				if (!func_523())
				{
					if (__LIB_0__::func_27(iLocal_987, 64))
					{
						__LIB_2__::func_593(&(Local_998[0 /*21*/]), &Local_1083);
						__LIB_2__::func_602(&(Local_1083[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
						__LIB_2__::func_602(&(Local_1083[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
						__LIB_1__::func_681(&iLocal_987, 64);
						__LIB_2__::func_451(&(Local_998[0 /*21*/]), 0);
					}
					func_524();
					__LIB_1__::func_683(&iLocal_987, 4194304);
				}
			}
			else
			{
				switch (iLocal_988[0])
				{
					case 0:
						__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
						if (!__LIB_0__::func_27(iLocal_987, 32768))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GREET_POS_END_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_987, 32768);
						}
						else if (!__LIB_0__::func_27(iLocal_987, 131072))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GREET_POS_END_NO_FIND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_987, 131072);
						}
						__LIB_1__::func_148(&uLocal_960);
						iLocal_993[0] = 13;
						break;
					case 1:
						__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
						__LIB_1__::func_683(&iLocal_987, -2147483648);
						if (!__LIB_0__::func_27(iLocal_987, 65536))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_987, 65536);
						}
						else if (!__LIB_0__::func_27(iLocal_987, 262144))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_NO_FIND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_987, 262144);
						}
						else if (!__LIB_0__::func_27(iLocal_987, 524288))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_NO_FIND3", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_987, 524288);
						}
						__LIB_1__::func_148(&uLocal_960);
						iLocal_993[0] = 14;
						break;
				}
			}
			break;
		case 9:
			if (__LIB_0__::func_27(iLocal_987, 16384))
			{
				iLocal_993[0] = 18;
			}
			else if (__LIB_0__::func_27(iLocal_901, 8) || __LIB_0__::func_27(iLocal_901, 1048576))
			{
				if (!__LIB_0__::func_27(iLocal_987, 4194304))
				{
					func_524();
					__LIB_1__::func_683(&iLocal_987, 4194304);
				}
				else
				{
					switch (iLocal_988[0])
					{
						case 0:
							if (!__LIB_0__::func_27(iLocal_987, 2048))
							{
								__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GREET_POS_END_FOUND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_987, 2048);
							}
							else if (!__LIB_0__::func_27(iLocal_987, 8192))
							{
								__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GREET_POS_END_FOUND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_987, 8192);
							}
							__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
							__LIB_1__::func_148(&uLocal_960);
							iLocal_993[0] = 11;
							break;
						case 1:
							if (!__LIB_0__::func_27(iLocal_987, 4096))
							{
								if (iLocal_15 == 1 && __LIB_1__::func_985())
								{
									__LIB_2__::func_303(Global_35, iLocal_501[0], "RE_LD_EMR_V1_RUNAWAY_ILO", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
									__LIB_1__::func_683(&iLocal_987, 1073741824 /* Float: 2f */);
								}
								else
								{
									__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_FOUND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
								}
								__LIB_1__::func_683(&iLocal_987, 4096);
							}
							else if (!__LIB_0__::func_27(iLocal_987, 16384))
							{
								__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("ILO_GREET_NEG_END_FOUND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
								__LIB_1__::func_683(&iLocal_987, 16384);
							}
							__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
							__LIB_1__::func_683(&iLocal_987, -2147483648);
							__LIB_1__::func_148(&uLocal_960);
							iLocal_993[0] = 12;
							break;
					}
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_265(&uLocal_960) > 4f && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (__LIB_0__::func_27(iLocal_987, 8192))
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_POS_END_FOUND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_POS_END_FOUND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_681(&iLocal_987, 4194304);
				iLocal_993[0] = 9;
			}
			break;
		case 12:
			if (__LIB_0__::func_265(&uLocal_960) > 4f && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (__LIB_0__::func_27(iLocal_987, 16384))
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_FOUND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else if (__LIB_0__::func_27(iLocal_987, 1073741824 /* Float: 2f */))
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, "RE_LD_EMR_V1_RUNAWAY_ILO_RESP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_FOUND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_681(&iLocal_987, 4194304);
				iLocal_993[0] = 9;
			}
			break;
		case 13:
			if ((__LIB_0__::func_265(&uLocal_960) > 3f && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (__LIB_0__::func_27(iLocal_987, 131072))
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_POS_END_NO_FIND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				else
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_POS_END_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				}
				__LIB_1__::func_681(&iLocal_987, 4194304);
				iLocal_993[0] = 8;
			}
			break;
		case 14:
			if ((__LIB_0__::func_265(&uLocal_960) > 3f && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				if (__LIB_0__::func_27(iLocal_987, 524288))
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_NO_FIND3", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_901, 262144);
					iLocal_993[0] = 16;
				}
				else if (__LIB_0__::func_27(iLocal_987, 262144))
				{
					if (__LIB_2__::func_140(0))
					{
						__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_NO_FIND2_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_NO_FIND2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					}
					if (iLocal_15 == 1)
					{
						__LIB_1__::func_681(&iLocal_987, 4194304);
						__LIB_1__::func_683(&iLocal_901, 16777216);
						iLocal_993[0] = 8;
					}
					else
					{
						iLocal_993[0] = 18;
					}
				}
				else
				{
					__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("ILO_GREET_NEG_END_NO_FIND", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_681(&iLocal_987, 4194304);
					iLocal_993[0] = 8;
				}
			}
			break;
		case 15:
			__LIB_2__::func_451(&(Local_998[0 /*21*/]), 0);
			if (iLocal_15 == 1)
			{
				__LIB_2__::func_602(&(Local_1083[0 /*17*/]), __LIB_2__::func_460(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 1, 0);
			}
			else
			{
				__LIB_2__::func_602(&(Local_1083[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
			}
			__LIB_2__::func_602(&(Local_1083[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
			iLocal_993[0] = 16;
			break;
		case 16:
			if (!__LIB_0__::func_27(iLocal_901, 8388608))
			{
				if (!func_523())
				{
					__LIB_2__::func_593(&(Local_998[0 /*21*/]), &Local_1083);
					__LIB_2__::func_602(&(Local_1083[0 /*17*/]), __LIB_2__::func_460(8), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
					__LIB_2__::func_602(&(Local_1083[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
					__LIB_1__::func_683(&iLocal_901, 8388608);
				}
			}
			else
			{
				switch (iLocal_988[0])
				{
					case 0:
						__LIB_2__::func_303(Global_35, iLocal_501[0], "RE_LD_EMR_V1_ILO_DEFUSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_960);
						iLocal_993[0] = 17;
						break;
					case 1:
						__LIB_2__::func_303(Global_35, iLocal_501[0], func_134("PLYFINAL_FLEE", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
						iLocal_993[0] = 18;
						break;
				}
			}
			break;
		case 17:
			if ((__LIB_0__::func_265(&uLocal_960) > 4f && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				__LIB_2__::func_303(iLocal_501[0], Global_35, "RE_LD_EMR_V1_ILO_DEFUSE", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, 1, 291934926, 1, 0, 0);
				iLocal_993[0] = 18;
			}
			break;
		case 18:
			break;
	}
}

void func_299()
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_459[0 /*3*/], 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, 0, 0);
	TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_459[1 /*3*/], 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, 0, 0);
	TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_459[2 /*3*/], 1073741824 /* Float: 2f */, -1082130432 /* Float: -1f */, 0, 0);
	TASK::SET_SEQUENCE_TO_REPEAT(iVar0, true);
	__LIB_1__::func_474(iLocal_501[0], &iVar0, 0, 0, 1, 1);
}

void func_300()
{
	TASK::CLEAR_PED_SECONDARY_TASK(iLocal_501[0]);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_501[0], Global_35, 0, -1f, -1f, -1f);
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_501[0]))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_501[0], 0);
	}
	__LIB_4__::func_170(iLocal_501[0], Global_35, &Local_851, 1.8f, 0, 0, 2f, -1082130432 /* Float: -1f */, 1, 256, 0, 0, 3f, -1f, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
	__LIB_0__::func_37(&uLocal_954);
	__LIB_1__::func_148(&uLocal_966);
}

void func_301()
{
	bool bVar0;
	if (func_527(8f, &uLocal_954) > 2f)
	{
	}
	else
	{
		if (!__LIB_0__::func_75(&uLocal_975))
		{
			__LIB_1__::func_148(&uLocal_975);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[0], sLocal_910, func_122(0), 1))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (__LIB_0__::func_33(&uLocal_975))
			{
				__LIB_2__::func_112(&uLocal_975);
			}
			if (__LIB_0__::func_265(&uLocal_975) > fLocal_473)
			{
				TASK::TASK_PLAY_ANIM(iLocal_501[0], sLocal_910, func_122(0), 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
				__LIB_1__::func_148(&uLocal_975);
				if (__LIB_0__::func_27(iLocal_901, 2097152))
				{
					if (iLocal_526 < 7)
					{
						fLocal_473 = MISC::GET_RANDOM_FLOAT_IN_RANGE(4f, 6f);
					}
					else
					{
						fLocal_473 = MISC::GET_RANDOM_FLOAT_IN_RANGE(8f, 15f);
					}
				}
				else
				{
					fLocal_473 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 3f);
				}
			}
		}
		else if (!__LIB_0__::func_33(&uLocal_975))
		{
			__LIB_2__::func_113(&uLocal_975);
		}
		if ((Local_128.f_98[0] < 65f && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[0])) || Local_128.f_98[0] < 50f)
		{
			func_530();
		}
	}
}

void func_302(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, char[4] cParam39, char* sParam40, int iParam41, bool bParam42)
{
	func_531(&uParam1, cParam39, sParam40, iParam41, bParam42);
	TASK::TASK_SCRIPTED_ANIMATION(iParam0, &uParam1);
}

void func_303(float fParam0)
{
	if (Local_128.f_98[0] < fParam0 && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[0]))
	{
		__LIB_3__::func_699(&Global_35, 0, iLocal_501[0], 1, 0, 0, 0, 1);
	}
}

void func_305()
{
	float fVar0;
	fVar0 = __LIB_0__::func_265(&uLocal_948);
	if (fVar0 < 30f)
	{
		if (__LIB_0__::func_27(iLocal_987, 2) || __LIB_0__::func_27(iLocal_987, 4))
		{
			if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iLocal_501[0]))
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(iLocal_501[0], 0);
			}
		}
		switch (iLocal_15)
		{
			case 0:
				switch (iLocal_903)
				{
					case 0:
						if (fVar0 >= (30f * 0.5f) && __LIB_2__::func_227(0, 1, iLocal_501[0], 1))
						{
							__LIB_2__::func_303(iLocal_501[0], Global_35, "RE_LD_STR_V1_IMPATIENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_903++;
						}
						break;
					case 1:
						break;
				}
				break;
			case 1:
				switch (iLocal_903)
				{
					case 0:
						if (fVar0 >= (30f * 0.33f) && __LIB_2__::func_227(0, 1, iLocal_501[0], 1))
						{
							__LIB_2__::func_303(iLocal_501[0], Global_35, "RE_LD_EMR_V1_IMPATIENT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_903++;
						}
						break;
					case 1:
						if (fVar0 >= (30f * 0.66f) && __LIB_2__::func_227(0, 1, iLocal_501[0], 1))
						{
							__LIB_2__::func_303(iLocal_501[0], Global_35, "RE_LD_EMR_V1_IMPATIENT_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_903++;
						}
						break;
					case 2:
						break;
				}
				break;
		}
	}
}

bool func_306(float fParam0)
{
	var uVar0;
	var uVar6;
	uVar0 = 5;
	uVar6 = 1;
	if (__LIB_11__::func_842(&uVar0, &uVar6, 1, vLocal_455, fParam0) > 0)
	{
		if (!CAM::IS_SPHERE_VISIBLE(vLocal_455, fParam0))
		{
			func_371();
		}
		else
		{
			return true;
		}
	}
	return false;
}

void func_307()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_901, 8192))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_901, 2))
	{
		if (__LIB_0__::func_94(iLocal_501[0], vLocal_455, 1) < 2f)
		{
			if (!__LIB_0__::func_27(iLocal_901, 128) || TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], 1435919172, true) != 1)
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_455, 1f, -1, 0.25f, 0, fLocal_458);
				TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_523, "", -1, true, false, 0, false, -1f, false);
				__LIB_1__::func_474(iLocal_501[0], &iVar0, 0, 0, 1, 1);
				__LIB_1__::func_683(&iLocal_901, 128);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], 1435919172, true) != 1 && !ENTITY::_0x0B7CB1300CBFE19C(iLocal_501[0], 1))
		{
			if (func_306(1088421888 /* Float: 7f */))
			{
				func_299();
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[0], vLocal_455, 1f, -1, 0.25f, 0, fLocal_458);
			}
		}
	}
}

void func_308()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_901, 33554432))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_901, 2))
	{
		TASK::OPEN_SEQUENCE_TASK(&iVar0);
		if (__LIB_0__::func_27(iLocal_901, 128))
		{
		}
		TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 0, 0, 0f, -1, 0);
		__LIB_1__::func_474(iLocal_501[0], &iVar0, 0, 0, 1, 1);
		__LIB_1__::func_683(&iLocal_901, 33554432);
	}
}

void func_309()
{
	if (!__LIB_0__::func_27(iLocal_901, 67108864))
	{
		switch (iLocal_528)
		{
			case 0:
				if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -510508715) && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && __LIB_0__::func_94(iLocal_501[1], vLocal_541, 1) > 10f)
				{
					if (iLocal_15 == 1)
					{
						__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("BECKON_A", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("BECKON_A2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					iLocal_528++;
				}
				break;
			case 1:
				if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -242425526) && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && __LIB_0__::func_94(iLocal_501[1], vLocal_541, 1) > 10f)
				{
					if (iLocal_15 == 1)
					{
						__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("BECKON_B", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("BECKON_B2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					iLocal_528++;
				}
				break;
			case 2:
				if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 545537848) && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && __LIB_0__::func_94(iLocal_501[1], vLocal_541, 1) > 10f)
				{
					if (iLocal_15 == 1)
					{
						__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("BECKON_C", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("BECKON_C2", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
					}
					__LIB_1__::func_683(&iLocal_901, 67108864);
				}
				break;
		}
	}
}

void func_310(bool bParam0)
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_901, 1))
	{
		return;
	}
	if (__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[0], 1435919172, true) != 1 || bParam0)
		{
			if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_524))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (iLocal_15 == 0 && __LIB_0__::func_94(iLocal_501[0], vLocal_455, 1) < 8f)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_524, true), -1788.896f, -432.6824f, 154.3864f, true) < 8f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1784.623f, -428.0092f, 154.226f, 1f, 20000, 3f, 1, 40000f);
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(iLocal_524, true), -1777.444f, -444.8972f, 153.9746f, true) < 8f)
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1778.01f, -434.3291f, 154.1013f, 1f, 20000, 3f, 1, 40000f);
					}
				}
				TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_524, "", -1, true, false, 0, false, -1f, false);
				__LIB_1__::func_474(iLocal_501[0], &iVar0, 0, 0, 1, 1);
			}
			__LIB_1__::func_683(&iLocal_901, 1);
		}
	}
}

bool func_312()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_987, 8388608))
	{
		return true;
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_923))
	{
		if (__LIB_0__::func_665(iLocal_501[1], iLocal_501[0], 1, 1) > 110f || !__LIB_1__::func_205(iLocal_501[0], iLocal_923, 1, 0))
		{
			if (__LIB_2__::func_227(0, 1, iLocal_501[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				__LIB_2__::func_303(iLocal_501[0], 0, "RE_LD_EMR_V1_RUNAWAY_RUN_GIVEUP", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				PED::_0x89F5E7ADECCCB49C(iLocal_501[0], "Depressed");
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_STAND_STILL(0, 1500);
				TASK::TASK_REACT(0, iLocal_501[1], ENTITY::GET_ENTITY_COORDS(iLocal_501[1], true, false), "DEFAULT_ANGRY", 3f, 0, 4);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_455, 1f, -1, 0.25f, 0, fLocal_458);
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_523))
				{
					TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_523, "", -1, true, false, 0, false, -1f, false);
				}
				__LIB_1__::func_474(iLocal_501[0], &iVar0, 0, 0, 1, 1);
				__LIB_1__::func_683(&iLocal_987, 8388608);
				return true;
			}
		}
		else
		{
			func_534();
		}
	}
	return false;
}

bool func_313()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_901, 16))
	{
		if (func_535())
		{
			__LIB_1__::func_683(&iLocal_901, 16);
			if (iLocal_906 == Local_533.f_2)
			{
			}
			else if (iLocal_906 == Local_533.f_1)
			{
			}
			TASK::CLEAR_PED_SECONDARY_TASK(iLocal_501[0]);
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_906))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_906, false))
				{
					if (ANIMSCENE::GET_ANIM_SCENE_BOOL(iLocal_906, "bAdvanceSitLoop") == 0)
					{
						ANIMSCENE::SET_ANIM_SCENE_BOOL(iLocal_906, "bAdvanceSitLoop", true, false);
					}
				}
			}
			func_314();
			if (__LIB_0__::func_27(iLocal_901, 4) && ENTITY::_0x3EC28DA1FFAC9DDD(iLocal_501[1], Global_35, 1, 1))
			{
				func_536();
				iLocal_635 = __LIB_3__::func_547(iLocal_501[0], Global_35, 1f);
				switch (iLocal_635)
				{
					case 2:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_906, "pblBreakoutStandL", true);
						break;
					case 3:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_906, "pblBreakoutStandR", true);
						break;
				}
			}
			else if (__LIB_0__::func_27(iLocal_901, 2))
			{
				func_536();
				iLocal_635 = __LIB_3__::func_547(iLocal_501[0], Global_35, 1060437492 /* Float: 0.707f */);
				switch (iLocal_635)
				{
					case 2:
						if (__LIB_0__::func_27(iLocal_900, 2097152))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_906, "pblBreakoutSitL", true);
						}
						else
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_906, "pblBreakoutSitQuickL", true);
						}
						break;
					case 3:
						if (__LIB_0__::func_27(iLocal_900, 2097152))
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_906, "pblBreakoutSitR", true);
						}
						else
						{
							ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_906, "pblBreakoutSitQuickR", true);
						}
						break;
					case 0:
					case 1:
						ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(iLocal_906, "pblBreakoutSitQuickFwd", true);
						break;
				}
			}
			else if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_501[0]))
			{
				PED::_0xAAB050DA48B57978(iLocal_501[0], "Flee_Panic", Global_35, -1, 4);
				if (PED::_0xEEED8FAFEC331A70(iLocal_501[0], Global_36, 3))
				{
					TASK::_0x2E1D6D87346BB7D2(iLocal_501[0], Global_35, 0, 0);
					TASK::OPEN_SEQUENCE_TASK(&iVar0);
					TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, 500f, -1, 0);
					__LIB_1__::func_474(iLocal_501[0], &iVar0, 0, 0, 1, 1);
					PED::_0x2208438012482A1A(iLocal_501[0], false, false);
					__LIB_1__::func_683(&iLocal_901, 64);
				}
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::TASK_REACT(0, Global_35, Global_36, "Flee_Human_MajorThreat", 1f, 2f, 4);
				TASK::TASK_SMART_FLEE_PED(0, Global_35, 500f, -1, 0, 3f, 0);
				__LIB_1__::func_474(iLocal_501[0], &iVar0, 0, 0, 1, 1);
				PED::_0x2208438012482A1A(iLocal_501[0], false, false);
				__LIB_1__::func_683(&iLocal_901, 64);
			}
		}
	}
	else if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_906) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_906, false))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -1931509438))
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_501[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
			func_538(iLocal_501[0], 2f, -1, 2f, 1048576000 /* Float: 0.25f */, 1, 0, 1120403456 /* Float: 100f */, 0, 0, 1148846080 /* Float: 1000f */, 0, 1);
			PED::SET_PED_KEEP_TASK(iLocal_501[0], true);
			ANIMSCENE::_DELETE_ANIM_SCENE(iLocal_906);
			return true;
		}
		else if ((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -641223575) || __LIB_0__::func_27(iLocal_901, 64)) || (__LIB_0__::func_27(iLocal_901, 2) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_906) > 0.99f))
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_501[0], joaat("MOTIONSTATE_RUN"), false, 0, false);
			TASK::TASK_SMART_FLEE_PED(iLocal_501[0], Global_35, 500f, -1, 0, 2f, 0);
			return true;
		}
	}
	else
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_906))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_906, false))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iLocal_906, "PED_KID", iLocal_501[0]);
			}
		}
		return true;
	}
	return false;
}

void func_314()
{
	if ((__LIB_0__::func_27(iLocal_901, 4194304) || PED::IS_PED_RAGDOLL(iLocal_501[0])) || !__LIB_2__::func_1(iLocal_501[0], 0, 1))
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_900, 2097152))
	{
		if (__LIB_0__::func_27(iLocal_901, 4096))
		{
			__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("AGGRO_DOG", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
	}
	else if (!__LIB_0__::func_27(iLocal_901, 524288))
	{
		if ((Local_128.f_98[1] < 15f && !__LIB_2__::func_1(iLocal_501[1], 0, 1)) && __LIB_0__::func_27(iLocal_900, 4194304))
		{
			__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("AGGRO_DOG_ATTACK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		else if (iLocal_565 == 16384)
		{
			__LIB_2__::func_303(iLocal_501[0], Global_35, "GENERIC_AFRAID_REACTION", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		else if (iLocal_15 == 0 && (((iLocal_565 == 1 || iLocal_565 == 1) || iLocal_565 == 2) || iLocal_565 == 4))
		{
			__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("AGGRO_EXTREME", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("AGGRO", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
		}
	}
	__LIB_1__::func_683(&iLocal_901, 4194304);
}

void func_315()
{
	if (__LIB_0__::func_27(iLocal_987, 256) || !ENTITY::DOES_ENTITY_EXIST(iLocal_501[1]))
	{
		return;
	}
	func_539();
	if (!__LIB_0__::func_27(iLocal_987, 256))
	{
		if (Local_128.f_46)
		{
			__LIB_2__::func_593(&(Local_998[1 /*21*/]), &Local_1118);
			__LIB_1__::func_683(&iLocal_987, 256);
		}
	}
	if (iLocal_993[1] > 0)
	{
		if (!__LIB_0__::func_27(iLocal_987, 128))
		{
			iLocal_988[1] = func_513(&(iLocal_501[1]), &(Local_998[1 /*21*/]), 10f, &Local_1118, &(Local_128.f_192), 0, 2, 1, 0, __LIB_2__::func_340(2, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
		}
		else
		{
			iLocal_988[1] = func_513(&(iLocal_501[1]), &(Local_998[1 /*21*/]), 10f, &Local_1118, &(Local_128.f_192), 0, 1, 1, 0, __LIB_2__::func_340(3, 0, 0), 0, 0, 2, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
	switch (iLocal_993[1])
	{
		case 0:
			iLocal_993[1] = 2;
			break;
		case 2:
			if (__LIB_0__::func_27(iLocal_900, 262144))
			{
				__LIB_2__::func_602(&(Local_1118[0 /*17*/]), __LIB_2__::func_460(33), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
				__LIB_2__::func_602(&(Local_1118[1 /*17*/]), __LIB_2__::func_460(32), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
				__LIB_2__::func_411(&(Local_1118[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_1118[1 /*17*/]), 0, 0);
				iLocal_993[1] = 3;
			}
			break;
		case 3:
			switch (iLocal_988[1])
			{
				case 0:
					__LIB_2__::func_411(&(Local_1118[0 /*17*/]), 0, 0);
					__LIB_1__::func_683(&iLocal_987, 128);
					__LIB_2__::func_451(&(Local_998[1 /*21*/]), 0);
					if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
					{
						bLocal_893 = false;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(Global_35, true, false);
						func_59(0, 0);
					}
					iLocal_993[1] = 10;
					break;
				case 1:
					break;
			}
			break;
		case 10:
			if ((__LIB_0__::func_27(iLocal_987, 67108864) && __LIB_0__::func_27(iLocal_987, 268435456)) || (__LIB_0__::func_27(iLocal_900, 65536) && iLocal_15 == 1))
			{
				__LIB_2__::func_411(&(Local_1118[0 /*17*/]), 0, 0);
				__LIB_2__::func_411(&(Local_1118[1 /*17*/]), 0, 0);
				__LIB_2__::func_451(&(Local_998[1 /*21*/]), 0);
				iLocal_993[1] = 18;
			}
			else if (!__LIB_0__::func_27(iLocal_987, 536870912))
			{
				if (!__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_501[1])))
				{
					__LIB_2__::func_593(&(Local_998[1 /*21*/]), &Local_1118);
					func_540();
					__LIB_1__::func_683(&iLocal_987, 536870912);
				}
			}
			else
			{
				if (__LIB_0__::func_27(iLocal_900, 16) && !__LIB_0__::func_27(iLocal_987, 268435456))
				{
					__LIB_2__::func_411(&(Local_1118[1 /*17*/]), 0, 0);
					__LIB_1__::func_683(&iLocal_987, 268435456);
				}
				switch (iLocal_988[1])
				{
					case 0:
						__LIB_0__::func_172(iLocal_520);
						if (__LIB_0__::func_27(iLocal_900, 16) && !__LIB_0__::func_27(iLocal_987, 33554432))
						{
							__LIB_1__::func_683(&iLocal_987, 33554432);
						}
						if (!__LIB_0__::func_27(iLocal_987, 33554432))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[1], func_134("PRAISE", 1), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 2, 1, !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_501[1], -1), 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_987, 33554432);
						}
						else if (!__LIB_0__::func_27(iLocal_987, 67108864))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[1], func_134("PRAISE", 1), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 2, 1, !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_501[1], -1), 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_987, 67108864);
						}
						__LIB_2__::func_411(&(Local_1118[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1118[1 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_963);
						iLocal_993[1] = 11;
						break;
					case 1:
						if (!__LIB_0__::func_27(iLocal_987, 134217728))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[1], func_134("SCOLD", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_501[1], -1), 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_987, 134217728);
						}
						else if (!__LIB_0__::func_27(iLocal_987, 268435456))
						{
							__LIB_2__::func_303(Global_35, iLocal_501[1], func_134("SCOLD", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 2, 1, !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_501[1], -1), 291934926, 1, 0, 0);
							__LIB_1__::func_683(&iLocal_987, 268435456);
						}
						__LIB_2__::func_411(&(Local_1118[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_1118[1 /*17*/]), 0, 0);
						__LIB_1__::func_148(&uLocal_963);
						iLocal_993[1] = 12;
						break;
				}
			}
			break;
		case 11:
			if (__LIB_0__::func_265(&uLocal_963) > 4f)
			{
				func_540();
				iLocal_993[1] = 10;
			}
			break;
		case 12:
			if (__LIB_0__::func_265(&uLocal_963) > 4f)
			{
				__LIB_4__::func_62(iLocal_501[1], 10);
				func_540();
				iLocal_993[1] = 10;
			}
			break;
		case 18:
			break;
	}
}

void func_316(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_900, 16))
	{
		iVar0 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		if (iVar0 < iParam3)
		{
			if (!__LIB_0__::func_75(uParam1))
			{
				__LIB_1__::func_148(uParam1);
			}
			else if (__LIB_0__::func_265(uParam1) > IntToFloat(iParam2))
			{
				__LIB_4__::func_63(iParam0, iVar0 + 1);
				__LIB_1__::func_148(uParam1);
			}
		}
	}
}

void func_317()
{
	int iVar0;
	if (__LIB_0__::func_27(iLocal_900, 131072))
	{
	}
	else
	{
		if (iLocal_15 == 0)
		{
			func_543();
		}
		else if (iLocal_15 == 1)
		{
			func_544();
		}
		if (__LIB_0__::func_27(iLocal_900, 1))
		{
			if (iLocal_15 == 0)
			{
				if (!__LIB_0__::func_27(iLocal_900, 131072))
				{
					if (!__LIB_0__::func_27(iLocal_900, 67108864))
					{
						__LIB_1__::func_683(&iLocal_900, 67108864);
					}
					else if (__LIB_0__::func_27(iLocal_900, 134217728) && !PED::IS_PED_RAGDOLL(iLocal_501[1]))
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
						__LIB_1__::func_474(iLocal_501[1], &iVar0, 1.5f, 1.5f, 1, 1);
						__LIB_1__::func_683(&iLocal_900, 131072);
					}
				}
			}
		}
	}
}

bool func_318()
{
	if (!__LIB_0__::func_75(&uLocal_951))
	{
		if (iLocal_15 == 0)
		{
			TASK::OPEN_SEQUENCE_TASK(&iLocal_917);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
			__LIB_1__::func_474(iLocal_501[1], &iLocal_917, 0.75f, 0.75f, 1, 1);
			PED::_0x2208438012482A1A(iLocal_501[1], false, false);
		}
		__LIB_1__::func_148(&uLocal_951);
	}
	if (((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_533) > 0.25f) || __LIB_0__::func_265(&uLocal_951) > 20f) || (bLocal_893 == 0 && __LIB_0__::func_265(&uLocal_951) > 2.5f))
	{
		return true;
	}
	return false;
}

void func_319()
{
	TASK::CLEAR_PED_TASKS(iLocal_501[1], true, false);
	PED::_0x2208438012482A1A(iLocal_501[1], false, false);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_917);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_917);
	if (iLocal_15 == 1)
	{
		TASK::TASK_PLAY_ANIM(0, "script_re@lost_dog@dog@timid", "action", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	}
	TASK::TASK_PLAY_ANIM(0, "amb_creature_mammal@world_dog_sitting@stand_enter", "enter", 4f, -2f, -1, 0, 0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_ANIM(0, "amb_creature_mammal@world_dog_sitting@stand_exit", "exit", 8f, -2f, -1, 0, 0f, false, 0, false, 0, false);
	TASK::TASK_GO_TO_ENTITY(0, Global_35, 20000, 0.5f, 1f, 2f, 0);
	__LIB_1__::func_474(iLocal_501[1], &iLocal_917, 0, 0, 1, 1);
}

bool func_320()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533, false) || ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_533) > 0.99f)
	{
		if (iLocal_15 == 0)
		{
			return true;
		}
		else if (((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], "script_re@lost_dog@dog@timid", "action", 1) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], "amb_creature_mammal@world_dog_eating_ground@stand_enter", "enter", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], "amb_creature_mammal@world_dog_eating_ground@base", "base", 1)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], "amb_creature_mammal@world_dog_eating_ground@stand_exit", "exit", 1))
		{
			return true;
		}
	}
	if (!__LIB_0__::func_75(&uLocal_957))
	{
		__LIB_1__::func_148(&uLocal_957);
	}
	else if (__LIB_0__::func_265(&uLocal_957) > 17f)
	{
		return true;
	}
	__LIB_3__::func_699(&(iLocal_501[1]), 0, Global_35, 1, 0, 0, 0, 1);
	__LIB_3__::func_699(&Global_35, 0, iLocal_501[1], 1, 0, 0, 0, 1);
	return false;
}

void func_321()
{
	TASK::CLEAR_PED_TASKS(iLocal_501[1], true, false);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_501[1], false);
	iLocal_889 = PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID());
	PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 279, true);
	PED::SET_PED_AS_GROUP_MEMBER(iLocal_501[1], iLocal_889);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_501[1], joaat("REL_NO_RELATIONSHIP"));
	if (__LIB_0__::func_71(Global_35))
	{
		PED::SET_GROUP_FORMATION(iLocal_889, 9);
	}
	else
	{
		PED::SET_GROUP_FORMATION(iLocal_889, 0);
	}
	PED::SET_GROUP_FORMATION_SPACING(iLocal_889, 1.25f, 1f, 2f);
}

void func_322()
{
	__LIB_0__::func_172(iLocal_519);
	__LIB_0__::func_172(iLocal_520);
}

void func_324()
{
	float fVar0;
	fVar0 = __LIB_0__::func_665(iLocal_501[1], iLocal_501[0], 1, 1);
	if (fVar0 < 10f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 0f);
	}
	else if (fVar0 < 20f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1f);
	}
}

void func_325()
{
	if (!__LIB_0__::func_86(vLocal_541))
	{
		if (__LIB_0__::func_94(iLocal_501[1], vLocal_541, 1) < 5f)
		{
			PED::SET_PED_RESET_FLAG(iLocal_501[1], 12, true);
			PED::SET_PED_RESET_FLAG(iLocal_501[1], 172, true);
			PED::SET_PED_RESET_FLAG(iLocal_501[1], 201, true);
			func_53(1);
		}
	}
}

void func_327(int iParam0, vector3 vParam1, var uParam4)
{
	Local_595 = 4;
	__LIB_3__::func_409(&vParam1, 1f);
	Local_595.f_8 = { vParam1 };
	Local_595.f_19 = uParam4;
	Local_595.f_1 = iParam0;
	Local_595.f_14 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	Local_595.f_23 = 256;
	if (iLocal_15 == 0)
	{
		Local_595.f_18 = 0.3f;
	}
	else
	{
		Local_595.f_18 = 0.25f;
	}
}

void func_328()
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(iLocal_501[1], vLocal_541, 1);
	if (fVar0 > 20f)
	{
		if (iLocal_15 == 0)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 3f);
		}
		else
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1f);
		}
	}
	else if (fVar0 <= 12f)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1f);
	}
	else if (iLocal_15 == 0)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1.5f);
	}
	else
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_501[1], 1f);
	}
}

void func_329()
{
	if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], 1435919172, true) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], 1435919172, true) != 0) && !__LIB_0__::func_86(vLocal_541))
	{
		if (__LIB_0__::func_94(iLocal_501[1], vLocal_541, 1) > 20f)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[1], vLocal_541, 2f, 20000, 0.25f, 0, vLocal_541.f_3.f_2);
		}
		else
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_501[1], vLocal_541, 1f, 20000, 0.25f, 0, vLocal_541.f_3.f_2);
		}
	}
}

bool func_330(int iParam0, int iParam1)
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
	if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1) && !__LIB_0__::func_27(iParam0->f_23, 4))
	{
		PED::SET_PED_RESET_FLAG(iParam0->f_1, 179, true);
	}
	switch (*iParam0)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (PED::IS_PED_A_PLAYER(iParam0->f_1))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0->f_3, false);
					if (__LIB_0__::func_27(iParam0->f_23, 2048))
					{
						HUD::_DISPLAY_HUD_COMPONENT(724769646);
					}
				}
				if (iParam0->f_24 == 0)
				{
					PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
				}
				if (!__LIB_0__::func_27(iParam0->f_23, 4))
				{
					TASK::CLEAR_PED_SECONDARY_TASK(iParam0->f_1);
				}
				if (!__LIB_0__::func_27(iParam0->f_23, 2))
				{
					iParam0->f_2 = PED::_GET_LAST_MOUNT(iParam0->f_1);
					if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_2) && __LIB_0__::func_71(iParam0->f_1))
					{
						__LIB_3__::func_622(iParam0->f_1);
						iVar0 = __LIB_2__::func_431(iParam0->f_1, iParam0->f_8, 1f);
						switch (iVar0)
						{
							case 3:
								iVar1 = 131072;
								break;
							case 2:
								iVar1 = 262144;
								break;
						}
						TASK::TASK_DISMOUNT_ANIMAL(iParam0->f_1, iVar1, 0, 0, 0, 0);
					}
					else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0->f_1, true))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(iParam0->f_1, true);
						VEHICLE::BRING_VEHICLE_TO_HALT(iVar2, 5f, -1, false);
						iVar3 = __LIB_2__::func_431(iParam0->f_1, iParam0->f_8, 1f);
						switch (iVar3)
						{
							case 3:
								iVar4 = 131072;
								break;
							case 2:
								iVar4 = 262144;
								break;
						}
						TASK::TASK_LEAVE_ANY_VEHICLE(iParam0->f_1, 0, iVar4);
					}
					else
					{
						__LIB_1__::func_336(&(iParam0->f_23), 2);
					}
				}
				if (__LIB_0__::func_86(iParam0->f_14))
				{
					iParam0->f_14 = { iParam0->f_8 };
				}
				__LIB_1__::func_649(iParam0, 1, iParam1);
			}
			else
			{
				__LIB_1__::func_649(iParam0, 6, iParam1);
			}
			break;
		case 1:
			if (__LIB_4__::func_249(iParam0, iParam1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (!__LIB_4__::func_255(iParam0, iParam1))
				{
					__LIB_4__::func_69();
				}
				__LIB_1__::func_649(iParam0, 2, iParam1);
			}
			break;
		case 2:
			if (__LIB_4__::func_255(iParam0, iParam1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (!__LIB_0__::func_27(iParam0->f_23, 4))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
					WEAPON::SET_CURRENT_PED_WEAPON(iParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
					TASK::TASK_SWAP_WEAPON(iParam0->f_1, 1, __LIB_0__::func_27(iParam0->f_23, 512), 0, 0);
				}
				__LIB_1__::func_649(iParam0, 3, iParam1);
			}
			break;
		case 3:
			if (__LIB_4__::func_250(iParam0, iParam1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (!PED::_IS_PED_CARRYING(iParam0->f_1))
				{
					__LIB_1__::func_336(&(iParam0->f_23), 256);
				}
				if (__LIB_0__::func_27(iParam0->f_23, 4096) && !PED::_IS_PED_CARRYING(iParam0->f_1))
				{
					__LIB_1__::func_336(&(iParam0->f_23), 256);
					iVar6 = PED::_GET_LAST_MOUNT(iParam0->f_1);
					if (__LIB_0__::func_665(iVar6, iParam0->f_1, 1, 1) < 5f)
					{
						iVar5 = __LIB_3__::func_661(iVar6);
						TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0->f_1, iVar5);
					}
				}
				else if (!__LIB_0__::func_27(iParam0->f_23, 256))
				{
					iVar5 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0->f_1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iParam0->f_1, iVar5, iParam0->f_14, iParam0->f_21, iParam0->f_4);
				}
				__LIB_1__::func_649(iParam0, 4, iParam1);
			}
			break;
		case 4:
			if (__LIB_4__::func_251(iParam0, iParam1))
			{
				__LIB_1__::func_148(&(iParam0->f_5));
				if (__LIB_0__::func_27(iParam0->f_23, 8192))
				{
					if (__LIB_0__::func_27(iParam0->f_23, 1024))
					{
						iVar7 = 64;
					}
					else
					{
						iVar7 = 2;
					}
					TASK::TASK_ENTER_ANIM_SCENE(iParam0->f_1, iParam0->f_25, &(iParam0->f_30), &(iParam0->f_26), iParam0->f_21, false, iVar7, 20000, -1082130432 /* Float: -1f */);
				}
				else
				{
					if (!__LIB_0__::func_86(iParam0->f_11))
					{
					}
					iVar8 = 0;
					if (!__LIB_0__::func_27(iParam0->f_23, 1024))
					{
						iVar8 |= 1;
					}
					TASK::OPEN_SEQUENCE_TASK(&iVar9);
					if (!__LIB_0__::func_86(iParam0->f_11))
					{
						if (__LIB_0__::func_27(iParam0->f_23, 16))
						{
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, iParam0->f_11, iParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_11, iParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
						}
					}
					if (__LIB_0__::func_27(iParam0->f_23, 16))
					{
						TASK::TASK_GO_STRAIGHT_TO_COORD(0, iParam0->f_8, iParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(iParam0->f_23, 128), 20000, -1), iParam0->f_19, iParam0->f_17, 0);
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, iParam0->f_8, iParam0->f_21, __LIB_0__::func_55(!__LIB_0__::func_27(iParam0->f_23, 128), 20000, -1), iParam0->f_17, iVar8, iParam0->f_19);
					}
					if (__LIB_0__::func_27(iParam0->f_23, 1))
					{
						TASK::TASK_ACHIEVE_HEADING(0, iParam0->f_19, 0);
					}
					__LIB_1__::func_474(iParam0->f_1, &iVar9, 0, 0, 1, 1);
				}
				__LIB_1__::func_649(iParam0, 5, iParam1);
			}
			break;
		case 5:
			if (__LIB_0__::func_27(iParam0->f_23, 8192))
			{
				if (ANIMSCENE::_0x337F1CC8EE895601(iParam0->f_25, &(iParam0->f_30)))
				{
					iVar10 = 1;
				}
			}
			else if (!__LIB_0__::func_27(iParam0->f_23, 1))
			{
				iParam0->f_19 = ENTITY::GET_ENTITY_HEADING(iParam0->f_1);
			}
			if (!__LIB_0__::func_27(iParam0->f_23, 128) && __LIB_1__::func_313(&(iParam0->f_5), 15f))
			{
				iVar10 = 1;
			}
			if (!__LIB_0__::func_27(iParam0->f_23, 8192))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1, 242628503, true) == 8)
				{
					iVar10 = 1;
				}
				if ((__LIB_0__::func_86(iParam0->f_11) || !__LIB_0__::func_163(iParam0->f_1, 242628503)) || TASK::GET_SEQUENCE_PROGRESS(iParam0->f_1) > 0)
				{
					iVar11 = 1;
				}
				if (__LIB_3__::func_625(iParam0->f_1, iParam0->f_8, iParam0->f_19, iParam0->f_18, iParam0->f_20, __LIB_0__::func_27(iParam0->f_23, 8)) && (!__LIB_0__::func_27(iParam0->f_23, 64) || MISC::ABSF(__LIB_3__::func_592(iParam0->f_1, iParam0->f_8)) < iParam0->f_22))
				{
					iVar12 = 1;
				}
			}
			if ((iVar11 && iVar12) || iVar10)
			{
				if (__LIB_0__::func_27(iParam0->f_23, 32))
				{
					TASK::TASK_TURN_PED_TO_FACE_COORD(iParam0->f_1, iParam0->f_8, 0);
				}
				__LIB_0__::func_37(&(iParam0->f_5));
				__LIB_1__::func_649(iParam0, 6, iParam1);
				return true;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

void func_332()
{
	int iVar0;
	if (__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		if (!__LIB_0__::func_27(iLocal_900, 1024))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], 1435919172, true) != 1 && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(iLocal_501[1], -1))
			{
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				if (__LIB_2__::func_1(iLocal_501[0], 0, 1))
				{
					TASK::TASK_SMART_FLEE_PED(0, iLocal_501[0], 1.5f, 5000, 0, 1f, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_501[0], 7000, -1f, -1f, -1f);
				}
				if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_525))
				{
					TASK::_TASK_USE_SCENARIO_POINT(0, iLocal_525, "", -1, true, false, 0, false, -1f, false);
				}
				__LIB_1__::func_474(iLocal_501[1], &iVar0, 0, 0, 1, 1);
				__LIB_1__::func_683(&iLocal_900, 1024);
			}
		}
	}
}

bool func_333()
{
	if (!__LIB_0__::func_27(iLocal_900, 8))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -825774819))
		{
			TASK::_0x2E1D6D87346BB7D2(iLocal_501[1], iLocal_501[0], 0, 0);
			__LIB_1__::func_683(&iLocal_900, 8);
		}
	}
	func_334(0);
	if (__LIB_0__::func_27(iLocal_901, 1048576))
	{
		func_334(1);
		ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_533.f_2, "pedDog", iLocal_501[1]);
		return true;
	}
	return false;
}

void func_334(bool bParam0)
{
	if (iLocal_15 != 1)
	{
		return;
	}
	if (__LIB_0__::func_27(iLocal_900, 16))
	{
		if (!__LIB_0__::func_27(iLocal_900, 128))
		{
			if (((ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[1], joaat("ENDSINRUN")) || !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533.f_2, false)) || ANIMSCENE::_0x005E6F28DD7ED58D(Local_533.f_2, "pedDog")) || bParam0)
			{
				func_60(0);
				func_556();
				__LIB_1__::func_683(&iLocal_900, 128);
			}
		}
	}
}

void func_335()
{
	if (__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		if (__LIB_0__::func_665(iLocal_501[0], iLocal_501[1], 1, 1) < 25f && iLocal_15 == 0)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_501[1], joaat("REL_PLAYER_ENEMY"));
			TASK::TASK_COMBAT_PED(iLocal_501[1], Global_35, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_501[1], true);
			__LIB_2__::func_73(iLocal_501[1], &(uLocal_506[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
			__LIB_1__::func_683(&iLocal_900, 536870912);
		}
		else
		{
			TASK::_0x2E1D6D87346BB7D2(iLocal_501[1], Global_35, 0, 0);
			PED::_0x58F7DB5BD8FA2288(iLocal_501[1]);
			TASK::TASK_SMART_FLEE_PED(iLocal_501[1], Global_35, 500f, -1, 0, 2f, 0);
			PED::SET_PED_KEEP_TASK(iLocal_501[1], true);
		}
	}
}

void func_336()
{
	if (__LIB_0__::func_27(iLocal_900, 65536))
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_900, 8192))
	{
		if (!func_557())
		{
			__LIB_1__::func_148(&uLocal_942);
			vLocal_911 = { Global_36 };
			if (__LIB_0__::func_27(iLocal_900, 33554432))
			{
				__LIB_0__::func_45("DOG_ABANDON", 10000, 0, 0, 0, 1);
			}
			else
			{
				__LIB_0__::func_45("DOG_TOWN", 10000, 0, 0, 0, 1);
			}
			__LIB_1__::func_683(&iLocal_900, 8192);
		}
	}
	else if (func_557())
	{
		__LIB_1__::func_681(&iLocal_900, 8192);
		__LIB_0__::func_37(&uLocal_942);
		vLocal_911 = { 0f, 0f, 0f };
	}
	else if (__LIB_0__::func_265(&uLocal_942) > 30f)
	{
		__LIB_1__::func_683(&iLocal_900, 16384);
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_911, true) > 200f)
	{
		if (__LIB_0__::func_265(&uLocal_942) > 5f)
		{
			__LIB_1__::func_683(&iLocal_900, 16384);
		}
	}
}

void func_337()
{
	iLocal_501[2] = __LIB_3__::func_870(Local_322[2 /*32*/].f_1, &(Local_322[2 /*32*/]), vLocal_469.x, vLocal_469.y, (vLocal_469.z + 0.25f), fLocal_472, 0, 0, 1, 0, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_501[2], false, 0f);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_501[2], false);
}

bool func_340(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
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
				STATS::_0xB2A38826E5886E83(func_174(uParam0->f_3, uParam0->f_185), 0);
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
						func_83(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				__LIB_3__::func_164(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					STATS::_0xB2A38826E5886E83(func_174(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_342(var uParam0, var uParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, bool bParam12, float fParam13)
{
	return;
	if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
	{
		if (__LIB_0__::func_51(uParam0, 64))
		{
			__LIB_1__::func_748(&(uParam1->f_5), 1, 1);
			__LIB_0__::func_8(uParam0, 64);
		}
	}
	else if (bParam12)
	{
		if (uParam1->f_3 == 0)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iParam2))
			{
				if (!__LIB_0__::func_51(uParam0, 64))
				{
					if (uParam1->f_5 == 0)
					{
						uParam1->f_5 = func_563("BEAT_RESPOND", joaat("INPUT_CINEMATIC_CAM"), iParam2, 3, 0, 0, 0, 0, fParam13, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), 0, 0);
					}
					__LIB_1__::func_148(uParam1);
					__LIB_0__::func_7(uParam0, 64);
				}
			}
			else if (__LIB_0__::func_75(uParam1) && __LIB_0__::func_265(uParam1) > 6f)
			{
				if (__LIB_0__::func_51(uParam0, 64))
				{
					__LIB_1__::func_748(&(uParam1->f_5), 1, 1);
					__LIB_0__::func_8(uParam0, 64);
				}
			}
		}
		else if (!__LIB_0__::func_51(uParam0, 64))
		{
			__LIB_0__::func_7(uParam0, 64);
		}
	}
	else if (!__LIB_0__::func_51(uParam0, 64))
	{
		__LIB_0__::func_7(uParam0, 64);
	}
	if (__LIB_0__::func_51(uParam0, 64))
	{
		__LIB_4__::func_47(uParam1, iParam2, vParam3, iParam6, iParam7, fParam8, iParam9, iParam10, iParam11);
	}
}

void func_354()
{
	vector3 vVar0[3];
	float fVar10[3];
	int iVar14;
	int iVar15;
	float fVar16;
	float fVar17;
	bool bVar18;
	fVar17 = 0f;
	bVar18 = true;
	switch (iLocal_500)
	{
		case 26:
			vVar0[0 /*3*/] = { -1867.726f, -399.8446f, 169.9069f };
			fVar10[0] = 257.1588f;
			vVar0[1 /*3*/] = { -1784.728f, -338.1369f, 180.2827f };
			fVar10[1] = 45.7488f;
			break;
		case 69:
			vVar0[0 /*3*/] = { 1459.359f, 327.9647f, 88.64633f };
			fVar10[0] = 241.8177f;
			vVar0[1 /*3*/] = { 1443.147f, 293.7058f, 88.46765f };
			fVar10[1] = 91.734f;
			vVar0[2 /*3*/] = { 1451.438f, 368.6502f, 87.65598f };
			fVar10[2] = 185.4836f;
			break;
	}
	iVar14 = 0;
	while (iVar14 <= 2)
	{
		if (!__LIB_0__::func_86(vVar0[iVar14 /*3*/]))
		{
			fVar16 = __LIB_0__::func_94(Global_35, vVar0[iVar14 /*3*/], 0);
			if (fVar16 < 50f || CAM::IS_SPHERE_VISIBLE(vVar0[iVar14 /*3*/], 1f))
			{
				bVar18 = false;
			}
			if (fVar16 > fVar17)
			{
				iVar15 = iVar14;
				fVar17 = fVar16;
			}
		}
		iVar14++;
	}
	if (bVar18)
	{
		if (iLocal_500 == 26)
		{
			iVar15 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 2);
		}
		else
		{
			iVar15 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3);
		}
	}
	if (iLocal_500 == 26)
	{
		switch (iVar15)
		{
			case 0:
				iLocal_16 = 0;
				sLocal_474 = "re_lost_dog_str_jail";
				break;
			case 1:
				iLocal_16 = 1;
				sLocal_474 = "re_lost_dog_str_rock";
				break;
		}
	}
	else
	{
		switch (iVar15)
		{
			case 0:
				iLocal_16 = 3;
				sLocal_474 = "re_lost_dog_emr_wagon";
				break;
			case 1:
				iLocal_16 = 4;
				sLocal_474 = "re_lost_dog_emr_watertower";
				break;
			case 2:
				iLocal_16 = 2;
				sLocal_474 = "re_lost_dog_emr_house";
				break;
		}
	}
	vLocal_469 = { vVar0[iVar15 /*3*/] };
	fLocal_472 = fVar10[iVar15];
}

void func_371()
{
	__LIB_3__::func_618(vLocal_455, 7f, 1, 0, 0, 0, 0);
}

bool func_380(int iParam0, int* iParam1, int iParam2, var uParam3, var uParam4)
{
	if (!__LIB_2__::func_1(iParam0, 0, 1))
	{
		return true;
	}
	else if (!__LIB_2__::func_1(iParam2, 0, 1))
	{
		return true;
	}
	switch (*uParam3)
	{
		case 0:
			uParam4->f_183 = __LIB_0__::func_665(iParam0, iParam2, 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam2, -1, 0, 51, 0);
			if (!(__LIB_1__::func_472(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */) || __LIB_0__::func_665(iParam0, iParam2, 1, 1) < 2f) && !uParam4->f_79)
			{
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iParam0, iParam2, 0f, 6f, 0.5f, uParam4->f_212, -1, 1036831949 /* Float: 0.1f */, 1, 1, 0, 0, 1);
			}
			else
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, iParam2, 0, -1f, -1f, -1f);
			}
			if (uParam4->f_180)
			{
				if (__LIB_0__::func_232(iParam0, iParam2, 1) >= 16f)
				{
					TASK::TASK_GO_TO_ENTITY(iParam0, iParam2, 20000, 0.5f, uParam4->f_212, 2f, 0);
					__LIB_1__::func_148(&(uParam4->f_191));
				}
				else
				{
					uParam4->f_180 = 0;
					uParam4->f_79 = 1;
				}
			}
			*uParam3 = 1;
			break;
		case 1:
			if (__LIB_0__::func_665(iParam0, iParam2, 0, 1) > (uParam4->f_183 + uParam4->f_1))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, iParam2, 1000f, -1, 0, 3f, 0);
				return true;
			}
			else if ((!uParam4->f_180 && (__LIB_0__::func_665(iParam0, iParam2, 1, 1) < uParam4->f_188 || uParam4->f_79)) || (uParam4->f_180 && (__LIB_1__::func_313(&(uParam4->f_191), uParam4->f_189) || __LIB_0__::func_232(iParam0, iParam2, 1) < 16f)))
			{
				if (((uParam4->f_180 || __LIB_1__::func_472(iParam0, uParam4->f_188, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */)) || uParam4->f_77) || (uParam4->f_79 && (uParam4->f_77 || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_35, 17))))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_FOLLOW_AND_CONVERSE_WITH_PED(iParam0, iParam2, &(uParam4->f_62), &(uParam4->f_66), uParam4->f_184, uParam4->f_185, 8, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */);
					}
					else
					{
						__LIB_3__::func_210(iParam0, &(uParam4->f_181), -1, !uParam4->f_77);
					}
					*uParam3 = 2;
				}
			}
			break;
		case 2:
			if ((uParam4->f_76 || uParam4->f_79) || ((__LIB_2__::func_215(iParam0, iParam2, 0, uParam4->f_188, 0) && (uParam4->f_80 || __LIB_3__::func_210(iParam0, &(uParam4->f_181), -1, !uParam4->f_77))) || uParam4->f_180))
			{
				if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
					{
						if (uParam4->f_80 || uParam4->f_180)
						{
							TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 1.5f, -1.5f, -1, 24, 0f, false, 0, false, 0, false);
						}
						else
						{
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 67108880, 0f, false, false, -1f, 0, 65536, -1f);
						}
					}
					*uParam4 = MISC::GET_GAME_TIMER();
					if (uParam4->f_194)
					{
						MemCopy(&(uParam4->f_34), {uParam4->f_199}, 8);
					}
					__LIB_3__::func_912(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_34), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					func_598(uParam4);
					if (uParam4->f_194 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_204)))
					{
						*uParam3 = 4;
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_42)))
					{
						*uParam3 = 3;
					}
					else
					{
						*uParam3 = 5;
					}
				}
			}
			else if (!__LIB_2__::func_1(iParam0, 0, 1))
			{
				return true;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_2)))
				{
					if (uParam4->f_80)
					{
						TASK::TASK_PLAY_ANIM(iParam0, &(uParam4->f_2), &(uParam4->f_10), 4f, -4f, -1, 24, 0f, false, 0, false, 0, false);
					}
					else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_26)))
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_18), &(uParam4->f_26), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
					else
					{
						TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iParam0, &(uParam4->f_2), &(uParam4->f_10), iParam2, -1, 4f, -4f, 16, 0f, false, false, -1f, 0, 0, -1f);
					}
				}
				__LIB_3__::func_912(uParam4->f_179, &(uParam4->f_81), iParam0, iParam2, &(uParam4->f_42), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
				*uParam3 = 5;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182))
			{
				if (func_599(&(uParam4->f_203), &(uParam4->f_204), 0f, 0f, 0f, iParam0, joaat("INPUT_CONTEXT_B"), 10f, 0f, 0, 1, 0, 0, 0, 0, 0, 1, 0, joaat("SHORT_TIMED_EVENT"), 0))
				{
					MemCopy(&(uParam4->f_54), {uParam4->f_195}, 8);
					*uParam3 = 5;
				}
				else if ((MISC::GET_GAME_TIMER() - *uParam4) > 18000)
				{
					__LIB_1__::func_748(&(uParam4->f_203), 1, 1);
					uParam4->f_194 = 0;
					*uParam3 = 6;
				}
			}
			break;
		case 5:
			if ((__LIB_2__::func_227(uParam4->f_187, 1, iParam0, uParam4->f_182) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0)) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(iParam0))
			{
				if (!MISC::IS_STRING_NULL(&(uParam4->f_54)))
				{
					*uParam4 = MISC::GET_GAME_TIMER();
					__LIB_3__::func_912(uParam4->f_179, &(uParam4->f_81), iParam2, iParam0, &(uParam4->f_54), 0, 1116471296 /* Float: 70f */, 0, 0, 0, 1);
					*uParam3 = 6;
				}
				else
				{
					if (uParam4->f_75 != 0)
					{
						__LIB_1__::func_616(uParam4->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
					}
					else if (uParam4->f_70 != 0)
					{
						__LIB_1__::func_797(uParam4->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
					}
					*uParam3 = 6;
				}
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0, 1, iParam0, uParam4->f_182) || (uParam4->f_190 > 0 && (MISC::GET_GAME_TIMER() - *uParam4) > uParam4->f_190))
			{
				if (MAP::DOES_BLIP_EXIST(*iParam1))
				{
					MAP::REMOVE_BLIP(iParam1);
				}
				if (uParam4->f_78)
				{
					TASK::TASK_WANDER_STANDARD(iParam0, 40000f, 0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_208)))
				{
					__LIB_0__::func_45(&(uParam4->f_208), 10000, 0, 0, 0, 1);
				}
				*uParam3 = 7;
				return true;
			}
			break;
		case 7:
			return true;
	}
	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_35, 1, 1))
	{
		TASK::TASK_SMART_FLEE_PED(iParam0, Global_35, 1000f, -1, 0, 3f, 0);
		return true;
	}
	return false;
}

bool func_394(var uParam0)
{
	if (__LIB_3__::func_211(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		__LIB_3__::func_424(uParam0->f_3);
		func_227(uParam0, 0, 1);
		__LIB_3__::func_404(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		__LIB_0__::func_703(0, 0);
		return true;
	}
	return false;
}

int func_435(bool bParam0)
{
	if (!bParam0 && func_628(373691918))
	{
		return 0;
	}
	LAW::_0xC61EDEBF16CD9668(joaat("BOUNTYHUNTERSGLOBALCOOLDOWN"), bParam0, 0);
	return 1;
}

void func_439(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	__LIB_0__::func_47(&Global_1393447, 1);
	func_631();
	func_632();
	__LIB_2__::func_30((BUILTIN::TO_FLOAT(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135.f_54 = (__LIB_0__::func_485() / 1000);
		if (Global_1392135.f_1 & 4 != 0)
		{
			Global_1392135.f_1 = (Global_1392135.f_1 - Global_1392135.f_1 & 4);
		}
		__LIB_2__::func_177();
		if (iParam1 == -1)
		{
			if (__LIB_0__::func_27(iParam0, 1))
			{
				__LIB_2__::func_268(16777216, 2, 0, 1);
				iVar0 = BUILTIN::FLOOR(240f);
			}
			else if (__LIB_0__::func_27(iParam0, 2))
			{
				__LIB_2__::func_268(16777216, 0, 0, 1);
				iVar0 = BUILTIN::FLOOR(60f);
			}
			else if (__LIB_0__::func_27(iParam0, 4))
			{
				__LIB_2__::func_268(16777216, 5, 0, 1);
				iVar0 = BUILTIN::FLOOR(900f);
			}
			Global_1392135.f_4 = (Global_1392135.f_54 + iVar0);
		}
		else
		{
			__LIB_2__::func_209(iParam1, iParam2, iParam3, iParam4);
			Global_1392135.f_5[iParam1] = (((Global_1392135.f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		__LIB_1__::func_980(BUILTIN::TO_FLOAT(iVar0), 1, 0);
	}
	else
	{
		__LIB_1__::func_980((BUILTIN::TO_FLOAT(200) / 3f), 1, 0);
	}
}

int func_513(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_648(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

void func_521()
{
	if (__LIB_0__::func_27(iLocal_987, 8))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 1598438069))
		{
			__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("IGNORED", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else if (__LIB_2__::func_140(0))
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -1107027972))
		{
			__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("REJECTED_SICK", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else if (__LIB_0__::func_27(iLocal_987, 512))
	{
	}
	else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -326448732))
	{
		__LIB_2__::func_303(iLocal_501[0], Global_35, func_134("REJECTED", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	}
}

bool func_522()
{
	if (__LIB_0__::func_27(iLocal_987, 262144))
	{
		if (iLocal_15 == 1)
		{
			if (__LIB_0__::func_27(iLocal_987, 524288))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	else if (__LIB_0__::func_27(iLocal_987, 32768))
	{
		return true;
	}
	return false;
}

bool func_523()
{
	if (__LIB_0__::func_27(iLocal_987, 64))
	{
		if (__LIB_3__::func_383(PLAYER::PLAYER_ID(), &(iLocal_501[0])))
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
	return true;
}

void func_524()
{
	if (!__LIB_0__::func_27(iLocal_900, 65536))
	{
		if (!__LIB_0__::func_27(iLocal_987, 65536))
		{
			if (!__LIB_0__::func_27(iLocal_987, 131072))
			{
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 1, 0);
			}
			else if (__LIB_2__::func_466(&(Local_1083[0 /*17*/]), 1, 0))
			{
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
			}
		}
		if (!func_522())
		{
			__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 1, 0);
		}
		else if (__LIB_2__::func_466(&(Local_1083[1 /*17*/]), 1, 0))
		{
			__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
		}
	}
	else
	{
		if (!__LIB_0__::func_27(iLocal_987, 4096))
		{
			if (!__LIB_0__::func_27(iLocal_987, 8192))
			{
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 1, 0);
			}
			else if (__LIB_2__::func_466(&(Local_1083[0 /*17*/]), 1, 0))
			{
				__LIB_2__::func_411(&(Local_1083[0 /*17*/]), 0, 0);
			}
		}
		if (!__LIB_0__::func_27(iLocal_987, 16384))
		{
			__LIB_2__::func_602(&(Local_1083[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
			__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 1, 0);
		}
		else if (__LIB_2__::func_466(&(Local_1083[1 /*17*/]), 1, 0))
		{
			__LIB_2__::func_411(&(Local_1083[1 /*17*/]), 0, 0);
		}
	}
}

float func_527(float fParam0, var uParam1)
{
	float fVar0;
	if (Local_128.f_98[0] < fParam0)
	{
		if (!__LIB_0__::func_75(uParam1))
		{
			__LIB_1__::func_148(uParam1);
		}
	}
	else
	{
		__LIB_0__::func_37(uParam1);
	}
	fVar0 = __LIB_0__::func_264(uParam1);
	return fVar0;
}

void func_530()
{
	switch (iLocal_526)
	{
		case 0:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!__LIB_0__::func_27(iLocal_901, 2097152))
				{
					__LIB_2__::func_303(iLocal_501[0], iLocal_501[0], func_134("BECKON", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
					__LIB_1__::func_683(&iLocal_901, 2097152);
				}
				iLocal_526++;
			}
			break;
		case 1:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				}
				iLocal_526++;
			}
			break;
		case 2:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 616045050))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				iLocal_526++;
			}
			break;
		case 3:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!__LIB_0__::func_27(iLocal_901, 65536))
				{
					__LIB_2__::func_303(iLocal_501[0], iLocal_501[0], func_134("LOOK_WHERE", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
					__LIB_1__::func_683(&iLocal_901, 65536);
				}
				iLocal_526++;
			}
			break;
		case 4:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				}
				iLocal_526++;
			}
			break;
		case 5:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 616045050))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				iLocal_526++;
			}
			break;
		case 6:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 616045050))
			{
				AUDIO::_PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				iLocal_526++;
			}
			break;
		case 7:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!__LIB_0__::func_27(iLocal_901, 2097152))
				{
					__LIB_2__::func_303(iLocal_501[0], iLocal_501[0], func_134("BECKON", 1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
					__LIB_1__::func_683(&iLocal_901, 2097152);
				}
				iLocal_526++;
			}
			break;
		default:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], 616045050) || ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[0], -191616721))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_501[0]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_501[0]))
				{
					AUDIO::_PLAY_SOUND_FROM_ENTITY("kidwhistle", iLocal_501[0], "RELD_Sounds", false, 0, 0);
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), iLocal_501[0], 1);
				}
			}
			break;
	}
}

void func_531(var uParam0, char* sParam1, char* sParam2, int iParam3, bool bParam4)
{
	*uParam0 = 1;
	uParam0->f_1 = sParam1;
	uParam0->f_2 = sParam2;
	uParam0->f_3 = iParam3;
	uParam0->f_4 = 1f;
	uParam0->f_5 = 1f;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = -1;
	if (bParam4)
	{
		uParam0->f_20 = 1;
		uParam0->f_21 = 1;
	}
	else
	{
		uParam0->f_20 = 0;
		uParam0->f_21 = 1;
	}
	uParam0->f_23 = 1114112;
}

void func_534()
{
	if (iLocal_993[0] == 11 || iLocal_993[0] == 12)
	{
		return;
	}
	switch (iLocal_907)
	{
		case 0:
			if (__LIB_2__::func_227(0, 1, iLocal_501[0], 1) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				__LIB_2__::func_303(iLocal_501[0], iLocal_501[1], "RE_LD_EMR_V1_RUNAWAY_RUN_A", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_936);
				iLocal_907++;
			}
			break;
		case 1:
			if ((__LIB_0__::func_265(&uLocal_936) > 6f && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				__LIB_2__::func_303(iLocal_501[0], iLocal_501[1], "RE_LD_EMR_V1_RUNAWAY_RUN_C", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_936);
				iLocal_907++;
			}
			break;
		case 2:
			if ((__LIB_0__::func_265(&uLocal_936) > 7f && __LIB_2__::func_227(0, 1, iLocal_501[0], 1)) && __LIB_2__::func_227(0, 1, Global_35, 1))
			{
				__LIB_2__::func_303(iLocal_501[0], iLocal_501[1], "RE_LD_EMR_V1_RUNAWAY_RUN_B", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_936);
				iLocal_907++;
			}
			break;
		case 3:
			break;
	}
}

bool func_535()
{
	if (iLocal_906 == Local_533.f_2 && (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_533.f_2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533.f_2, false)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_2, "pblBreakoutStandL");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_2, "pblBreakoutStandR");
		if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_2, "pblBreakoutStandL") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_2, "pblBreakoutStandR"))
		{
			return true;
		}
	}
	else if (iLocal_906 == Local_533.f_1 && (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_533.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533.f_1, false)))
	{
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "pblBreakoutStandL");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "pblBreakoutStandR");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "pblBreakoutSitL");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "pblBreakoutSitR");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "pblBreakoutSitQuickFwd");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "pblBreakoutSitQuickR");
		ANIMSCENE::_0xDF7B5144E25CD3FE(Local_533.f_1, "pblBreakoutSitQuickL");
		if ((((((ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "pblBreakoutStandL") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "pblBreakoutStandR")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "pblBreakoutSitL")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "pblBreakoutSitR")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "pblBreakoutSitQuickFwd")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "pblBreakoutSitQuickR")) && ANIMSCENE::_0x23E33CB9F4A3F547(Local_533.f_1, "pblBreakoutSitQuickL"))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

void func_536()
{
	if (iLocal_906 == Local_533.f_1)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_533.f_2) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533.f_2, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_533.f_2, "pedKid", iLocal_501[0]);
		}
	}
	else if (iLocal_906 == Local_533.f_2)
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_533.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_533.f_1, false))
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_533.f_1, "pedKid", iLocal_501[0]);
		}
	}
}

void func_538(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8, bool bParam9, float fParam10, bool bParam11, int iParam12)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	bool bVar7;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) * FtoV((fParam3 + 5f)) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) * Vector(fParam3, fParam3, fParam3) };
	if (iParam0 != 0)
	{
		if (bParam9)
		{
			__LIB_3__::func_286(iParam0);
		}
		TASK::OPEN_SEQUENCE_TASK(&iVar6);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar0, bParam1, iParam2, fParam4, 1, 40000f);
	if (fParam10 > 0f)
	{
		if (!bParam8)
		{
			TASK::TASK_SMART_FLEE_COORD(0, vVar3, fParam10, iParam2, 16640, bParam1);
		}
		else
		{
			TASK::TASK_SMART_FLEE_COORD(0, vVar3, fParam10, iParam2, 16704, bParam1);
		}
	}
	bVar7 = (ENTITY::DOES_ENTITY_EXIST(iParam6) && !ENTITY::IS_ENTITY_DEAD(iParam6));
	if (bParam5)
	{
		if (!bVar7 && fParam7 > 0f)
		{
			TASK::TASK_WANDER_IN_AREA(0, vVar0, fParam7, 1077936128 /* Float: 3f */, 1086324736 /* Float: 6f */, bParam8);
		}
		else if (bParam11)
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, iParam6, iParam12, 0, -1f, -1, 0);
		}
		else
		{
			TASK::TASK_WANDER_AND_CONVERSE_WITH_PED(0, iParam6, 0, 0);
		}
	}
	else if (bVar7)
	{
		if (bParam11)
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, iParam6, iParam12, 0, -1f, -1, 0);
		}
		else
		{
			TASK::TASK_WANDER_AND_CONVERSE_WITH_PED(0, iParam6, 0, 0);
		}
	}
	if (iParam0 != 0)
	{
		TASK::CLOSE_SEQUENCE_TASK(iVar6);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar6);
		TASK::CLEAR_SEQUENCE_TASK(&iVar6);
	}
}

void func_539()
{
	if (__LIB_0__::func_27(iLocal_987, 128))
	{
		if (Local_128.f_98[1] < 5f)
		{
			if (!bLocal_896)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 315, false);
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 331, true);
				PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 330, true);
				__LIB_2__::func_351(&(Local_1118[0 /*17*/]), 0);
				bLocal_896 = true;
			}
		}
		else if (bLocal_896)
		{
			PED::SET_PED_CONFIG_FLAG(iLocal_501[1], 315, true);
			__LIB_2__::func_351(&(Local_1118[0 /*17*/]), 2);
			bLocal_896 = false;
		}
	}
}

void func_540()
{
	if (!__LIB_0__::func_27(iLocal_987, 67108864))
	{
		__LIB_2__::func_602(&(Local_1118[0 /*17*/]), __LIB_2__::func_460(33), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_411(&(Local_1118[0 /*17*/]), 1, 0);
	}
	else if (__LIB_2__::func_466(&(Local_1118[0 /*17*/]), 1, 0))
	{
		__LIB_2__::func_411(&(Local_1118[0 /*17*/]), 0, 0);
	}
	if (!__LIB_0__::func_27(iLocal_987, 16384) && !__LIB_0__::func_27(iLocal_987, 268435456))
	{
		__LIB_2__::func_602(&(Local_1118[1 /*17*/]), __LIB_2__::func_460(32), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		__LIB_2__::func_411(&(Local_1118[1 /*17*/]), 1, 0);
	}
	else if (__LIB_2__::func_466(&(Local_1118[1 /*17*/]), 1, 0))
	{
		__LIB_2__::func_411(&(Local_1118[1 /*17*/]), 0, 0);
	}
}

void func_543()
{
	float fVar0;
	float fVar1;
	char* sVar2;
	int iVar3;
	if (!__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		return;
	}
	switch (iLocal_629)
	{
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_501[1], vLocal_469, fLocal_472, true, false, true);
			TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_501[1], func_669(1), func_122(27), vLocal_469.x, vLocal_469.y, (vLocal_469.z + 0.25f), 0f, 0f, fLocal_472, 8f, -4f, -1, 49409, 0f, 2, 0, 0);
			iLocal_629 = 1;
			break;
		case 1:
			if (!__LIB_0__::func_27(iLocal_900, 67108864) && !__LIB_0__::func_27(iLocal_900, 134217728))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], 1435919172, true) != 1 || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], func_669(1), func_122(27), 1))
				{
					if (!__LIB_0__::func_75(&uLocal_945))
					{
						__LIB_1__::func_148(&uLocal_945);
						if (__LIB_2__::func_269(iLocal_501[1], 20f))
						{
							iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(3, 5);
						}
						else
						{
							iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(10, 18);
						}
					}
					else if (__LIB_2__::func_269(iLocal_501[1], 20f) && iLocal_904 >= 10)
					{
						iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(3, 5);
					}
					fVar1 = __LIB_0__::func_265(&uLocal_945);
					fVar0 = __LIB_0__::func_665(iLocal_501[0], iLocal_501[1], 0, 1);
					if (fVar1 > IntToFloat(iLocal_904) || __LIB_2__::func_269(iLocal_501[1], 20f))
					{
						if ((fVar0 > 45f && Local_128.f_98[1] < 45f) || __LIB_2__::func_269(iLocal_501[1], 12f))
						{
							__LIB_0__::func_37(&uLocal_945);
							iLocal_527 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 5);
							switch (iLocal_527)
							{
								case 0:
									sVar2 = func_122(22);
									break;
								case 1:
									sVar2 = func_122(23);
									break;
								case 2:
									sVar2 = func_122(24);
									break;
								case 3:
									sVar2 = func_122(25);
									break;
								case 4:
									sVar2 = func_122(26);
									break;
							}
							TASK::OPEN_SEQUENCE_TASK(&iVar3);
							TASK::TASK_PLAY_ANIM_ADVANCED(0, func_669(1), sVar2, vLocal_469.x, vLocal_469.y, (vLocal_469.z + 0.25f), 0f, 0f, fLocal_472, 8f, -4f, -1, 49408, 0f, 2, 0, 0);
							if (iLocal_15 == 0)
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(0, func_669(1), func_122(27), vLocal_469.x, vLocal_469.y, (vLocal_469.z + 0.25f), 0f, 0f, fLocal_472, 8f, -4f, -1, 49409, 0f, 2, 0, 0);
							}
							__LIB_1__::func_474(iLocal_501[1], &iVar3, 0, 0, 1, 1);
						}
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_501[1], joaat("BARK")))
				{
					__LIB_2__::func_315(1891783641, iLocal_501[1], 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_501[1], 1435919172, true) != 1 || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_501[1], func_669(1), func_122(27), 1))
			{
				if (!PED::IS_PED_RAGDOLL(iLocal_501[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_501[1], true, false);
					PED::_0x2208438012482A1A(iLocal_501[1], false, false);
					__LIB_1__::func_683(&iLocal_900, 134217728);
					iLocal_629 = 3;
				}
			}
			break;
		case 3:
			break;
	}
}

void func_544()
{
	if (!__LIB_2__::func_1(iLocal_501[1], 0, 1))
	{
		return;
	}
	switch (iLocal_629)
	{
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_501[1], vLocal_469, fLocal_472, true, false, true);
			TASK::TASK_PLAY_ANIM(iLocal_501[1], "amb_creature_mammal@world_dog_sleeping@idle", "idle_c", 1000f, -1000f, -1, 1, 0f, false, 17317919, false, 0, false);
			iLocal_629 = 2;
			break;
		case 2:
			if (__LIB_0__::func_27(iLocal_900, 67108864))
			{
				iLocal_629 = 3;
			}
			else
			{
				if (!__LIB_0__::func_75(&uLocal_945))
				{
					__LIB_1__::func_148(&uLocal_945);
					iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(5, 12);
				}
				if (__LIB_0__::func_265(&uLocal_945) > IntToFloat(iLocal_904))
				{
					if (__LIB_2__::func_269(iLocal_501[1], 10f) || Local_128.f_98[1] < 15f)
					{
						__LIB_1__::func_148(&uLocal_945);
						iLocal_904 = MISC::GET_RANDOM_INT_IN_RANGE(5, 12);
						__LIB_4__::func_62(iLocal_501[1], 10);
						__LIB_2__::func_315(249295937, iLocal_501[1], 1);
					}
				}
			}
			break;
		case 3:
			break;
	}
}

void func_556()
{
	int iVar0;
	PED::FORCE_PED_MOTION_STATE(iLocal_501[1], -1415276238, false, 0, false);
	PED::_0x58F7DB5BD8FA2288(iLocal_501[1]);
	TASK::_0x2E1D6D87346BB7D2(iLocal_501[1], iLocal_501[0], 0, 0);
	TASK::TASK_CLEAR_LOOK_AT(iLocal_501[1]);
	func_109(iLocal_501[0], 0);
	_NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_501[1], &Local_475);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_SMART_FLEE_PED(0, iLocal_501[0], 10f, 2500, 8448, 1.5f, 0);
	TASK::TASK_SMART_FLEE_PED(0, iLocal_501[0], 300f, -1, 8448, 2f, 0);
	TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	__LIB_1__::func_474(iLocal_501[1], &iVar0, 0, 0, 1, 1);
}

bool func_557()
{
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_923))
	{
		if (__LIB_1__::func_205(Global_35, iLocal_923, 1, 0))
		{
			return true;
		}
	}
	return false;
}

int func_563(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
{
	int iVar0;
	int iVar1;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (__LIB_0__::func_141(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1945938[iVar0 /*18*/].f_11 && iParam1 == Global_1945938[iVar0 /*18*/].f_4)
				{
					if (iParam3 <= Global_1945938[iVar0 /*18*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				__LIB_9__::func_778(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216 /* Float: 1f */, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_598(var uParam0)
{
	int iVar0;
	if (uParam0->f_75 != 0)
	{
		__LIB_1__::func_616(uParam0->f_75, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	}
	else if (uParam0->f_70 != 0)
	{
		__LIB_1__::func_797(uParam0->f_70, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
	}
	if (__LIB_0__::func_144(uParam0->f_74, 0))
	{
		func_708(uParam0->f_74, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (uParam0->f_72 != 0)
	{
		if (uParam0->f_71)
		{
			iVar0 = (__LIB_3__::func_256() + uParam0->f_72);
			__LIB_3__::func_216(iVar0);
		}
		else
		{
			__LIB_8__::func_227(uParam0->f_72, 1);
		}
	}
	if (uParam0->f_73 != 9)
	{
		__LIB_1__::func_715(uParam0->f_73, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
	}
}

bool func_599(var uParam0, char* sParam1, vector3 vParam2, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9, int iParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18, bool bParam19)
{
	int iVar0;
	if (!__LIB_0__::func_139(*uParam0))
	{
		iVar0 = 0;
		if (bParam17)
		{
			iVar0 = 5;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			*uParam0 = func_563(sParam1, iParam6, iParam5, iParam10, iParam9, 0, iParam15, iVar0, 1070386381 /* Float: 1.6f */, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, bParam18, 0, 0);
			__LIB_2__::func_450(*uParam0, fParam7, 1);
		}
		else if (iParam13 != 0)
		{
			*uParam0 = __LIB_18__::func_212(sParam1, iParam6, iParam13, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, bParam18, 0);
		}
		else
		{
			if (__LIB_0__::func_86(vParam2))
			{
				return false;
			}
			*uParam0 = __LIB_18__::func_213(sParam1, iParam6, vParam2, fParam7, iParam10, iParam9, iParam15, iVar0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, bParam18, 0);
		}
		if (fParam8 != 0f)
		{
			__LIB_1__::func_483(*uParam0, sParam1, BUILTIN::CEIL(MISC::ABSF(fParam8)), 1);
			if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
		{
		}
		if (bParam19)
		{
			__LIB_1__::func_382(*uParam0, 0, 1);
		}
		return false;
	}
	if (!bParam16)
	{
		if (__LIB_0__::func_572(*uParam0, 0))
		{
			if (PED::_IS_PED_CARRYING(Global_35))
			{
				__LIB_1__::func_221(*uParam0, 0, 1);
			}
		}
		else if (!PED::_IS_PED_CARRYING(Global_35))
		{
			__LIB_1__::func_221(*uParam0, 1, 1);
		}
	}
	if (fParam8 != 0f)
	{
		if (BUILTIN::CEIL(MISC::ABSF(fParam8)) > __LIB_0__::func_492(1))
		{
			__LIB_1__::func_221(*uParam0, 0, 1);
		}
	}
	if (bParam12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam5) && ENTITY::IS_ENTITY_DEAD(iParam5))
		{
			if (__LIB_0__::func_139(*uParam0))
			{
				__LIB_1__::func_748(uParam0, 1, 1);
				return false;
			}
		}
	}
	if ((!bParam17 && __LIB_1__::func_732(*uParam0, 1)) || (bParam17 && __LIB_0__::func_567(*uParam0, 1)))
	{
		if (!bParam14)
		{
			if (fParam8 < 0f)
			{
				__LIB_1__::func_432(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 0, 1, 1);
			}
			else if (fParam8 > 0f)
			{
				__LIB_1__::func_616(BUILTIN::CEIL(MISC::ABSF(fParam8)), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
			}
		}
		__LIB_1__::func_748(uParam0, 1, 1);
		return true;
	}
	return false;
}

bool func_628(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_745(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		return MISC::IS_BIT_SET(Global_40.f_283[iVar1], iVar2);
	}
	return MISC::IS_BIT_SET(Global_1058888.f_40567[iVar1], iVar2);
}

void func_631()
{
	int iVar0;
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_746(iVar0, 128))
		{
			__LIB_2__::func_54(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_632()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_746(iVar0, 128) && func_746(iVar0, 1))
		{
			__LIB_2__::func_54(iVar0, 4096);
		}
		iVar0++;
	}
}

int func_648(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (func_752(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_648(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					func_756(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (func_758(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					func_763(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_758(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_756(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

char* func_669(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case 0:
			sVar0 = "script_re@lost_dog";
			break;
		case 2:
			sVar0 = "amb_creature_mammal@world_squirrel_eating@idle0";
			break;
		case 1:
			sVar0 = "script_re@lost_dog@dog@squirrel";
			break;
	}
	return sVar0;
}

int func_708(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
	if (!__LIB_3__::func_917(iParam0, iParam1, bParam2, iParam5))
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
				func_708(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			if (!__LIB_3__::func_915(iParam0, iParam5, &bParam2, bParam3, bParam4))
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
			__LIB_3__::func_909(iParam0);
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
			func_835(iParam0);
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
						func_708(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_708(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_708(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_708(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_708(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_708(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_708(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_708(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_708(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_708(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
		__LIB_3__::func_868(iParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

int func_745(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 320;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 336;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 334;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 340;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 348;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
			return 159;
			return 115;
			return 252;
			return 326;
			return 179;
			return 77;
			return 128;
			return 294;
			return 189;
			return 312;
			return 296;
			return 327;
			return 134;
			return 207;
			return 178;
			return 264;
			return 354;
			return 48;
			return 109;
			return 330;
			return 18;
			return 240;
			return 285;
			return 379;
			return 351;
			return 335;
			return 224;
			return 298;
			return 247;
			return 19;
			return 310;
			return 7;
			return 122;
			return 284;
			return 110;
			return 319;
			return 144;
			return 27;
			return 256;
			return 329;
			return 135;
			return 158;
			return 347;
			return 307;
			return 38;
			return 230;
			return 184;
			return 274;
			return 85;
			return 169;
			return 160;
			return 269;
			return 374;
			return 313;
			return 259;
			return 315;
			return 202;
			return 324;
			return 20;
			return 75;
			return 271;
			return 263;
			return 82;
			return 223;
			return 210;
			return 217;
			return 166;
			return 211;
			return 380;
			return 125;
			return 120;
			return 367;
			return 50;
			return 102;
			return 295;
			return 212;
			return 5;
			return 72;
			return 35;
			return 168;
			return 206;
			return 280;
			return 342;
			return 163;
			return 359;
			return 304;
			return 365;
			return 9;
			return 107;
			return 118;
			return 127;
			return 181;
			return 150;
			return 93;
			return 383;
			return 68;
			return 318;
			return 332;
			return 43;
			return 346;
			return 137;
			return 226;
			return 349;
			return 94;
			return 363;
			return 382;
			return 200;
			return 99;
			return 196;
			return 70;
			return 51;
			return 96;
			return 328;
			return 161;
			return 229;
			return 203;
			return 371;
			return 91;
			return 180;
			return 6;
			return 190;
			return 193;
			return 369;
			return 308;
			return 63;
			return 299;
			return 306;
			return 282;
			return 39;
			return 192;
			return 341;
			return 255;
			return 87;
			if (iParam1 >= 1)
			{
			}
			return -1;
			if (iParam1 >= 1)
			{
			}
			return -1;
		}
bool func_746(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237.f_11)
	{
		return false;
	}
	return (Global_1393237.f_11[iParam0 /*30*/].f_10 && iParam1) != 0;
}

bool func_752(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
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
		__LIB_2__::func_523(iParam1, uParam2, 0);
		iVar5 = func_888(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			PED::SET_PED_CONFIG_FLAG(*uParam0, 178, false);
			return true;
		}
		__LIB_2__::func_480(uParam2, 0, 0, 1, 0);
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

void func_756(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
					iVar0++;
				}
			}
			func_893(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, __LIB_0__::func_27(iParam10, 32), 1, 0);
			MISC::SET_BIT(iParam2, 1);
		}
	}
	else if (MISC::IS_BIT_SET(*iParam2, 1))
	{
		MISC::CLEAR_BIT(iParam2, 1);
	}
}

bool func_758(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
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
		func_897(*uParam0, uParam4[iVar0 /*17*/], fParam3, iParam7, iParam8, iParam12, bParam5);
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
						__LIB_2__::func_480(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						__LIB_2__::func_526(uParam4, 0, 0);
					}
					if (MISC::IS_BIT_SET((*uParam4)[iVar0 /*17*/], 11))
					{
						__LIB_2__::func_523(iParam1, uParam4, MISC::IS_BIT_SET(*iParam1, 6));
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
							__LIB_2__::func_526(uParam4, 0, 0);
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

void func_763(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_897(iParam0, uParam2[iVar0 /*17*/], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_835(int iParam0)
{
	char* sVar0;
	switch (iParam0)
	{
		case joaat("DOCUMENT_TAXIDERMY_ORDER_1"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_01"), 1);
			__LIB_1__::func_240(437, 0);
			__LIB_1__::func_240(440, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_01"), joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_01"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_01"), 20), 1, 0);
			__LIB_0__::func_433(1);
			func_984(-748969569, 0, 0);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_2"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_02"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_02"), joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_02"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_02"), 20), 1, 0);
			__LIB_0__::func_433(8);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_3"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_03"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_03"), joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_03"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_03"), 20), 1, 0);
			__LIB_0__::func_433(64);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_4"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_04"), 1);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_04"), joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_04"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_04"), 20), 1, 0);
			__LIB_0__::func_433(512);
			break;
		case joaat("DOCUMENT_TAXIDERMY_ORDER_5"):
			COLLECTION::_0x3EA62E56F386C997(joaat("TAXIDERMY_ORDER_05"), 1);
			__LIB_1__::func_240(438, 0);
			__LIB_1__::func_804(joaat("TAXIDERMY_ORDER_05"), joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"), &sVar0, 1, 0, 0);
			__LIB_1__::func_832(51, 0, 0, joaat("TAXIDERMY_ORDER_05"), sVar0, 0, -1, 0);
			__LIB_1__::func_450(51, 0, 0, sVar0, __LIB_1__::func_34(joaat("TAXIDERMY_ORDER_05"), 20), 1, 0);
			__LIB_0__::func_433(32768);
			break;
		default:
			__LIB_1__::func_240(439, 0);
			break;
	}
}

int func_888(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	int iVar0;
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(uParam2[iVar0 /*17*/])->f_8 = 6;
		func_1053(iParam0, uParam2[iVar0 /*17*/], fParam3, 3, 0, 6, bParam4, 0);
		if (__LIB_0__::func_139((uParam2[iVar0 /*17*/])->f_6))
		{
			__LIB_1__::func_471(uParam2[iVar0 /*17*/], 11);
			return Global_1945938[(uParam2[iVar0 /*17*/])->f_6 /*18*/].f_3;
		}
	}
	return 0;
}

void func_893(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1053(iParam0, uParam1[iVar0 /*17*/], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			MISC::CLEAR_BIT(uParam1[iVar0 /*17*/], 14);
		}
		iVar0++;
	}
}

void func_897(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (MISC::IS_BIT_SET(*iParam1, 14))
	{
		if (__LIB_1__::func_502(iParam1))
		{
			MISC::CLEAR_BIT(iParam1, 14);
			func_1053(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

void func_984(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1123(1497516462);
			func_1124(2016141805);
			func_1124(1010885152);
			func_1124(-502324015);
			break;
		case 2016141805:
			func_1124(1497516462);
			func_1123(2016141805);
			func_1124(1010885152);
			func_1124(-502324015);
			break;
		case 1010885152:
			func_1124(1497516462);
			func_1124(2016141805);
			func_1123(1010885152);
			func_1124(-502324015);
			break;
		case -502324015:
			func_1124(1497516462);
			func_1124(2016141805);
			func_1124(1010885152);
			func_1123(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1124(-538889627);
			func_1124(-538880323);
			func_1124(-1056767524);
			func_1123(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1125();
			func_1123(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1126();
			func_1123(iParam0);
			break;
		case 2019386373:
			func_1124(-664252410);
			func_1124(2109952320);
			func_1123(2019386373);
			break;
		case -664252410:
			func_1124(2019386373);
			func_1124(2109952320);
			func_1123(-664252410);
			break;
		case 2109952320:
			func_1124(2019386373);
			func_1124(-664252410);
			func_1123(2109952320);
			break;
		case -1674179981:
			func_1124(-1835851517);
			func_1124(-1838352012);
			func_1123(-1674179981);
			break;
		case -1835851517:
			func_1124(-1674179981);
			func_1124(-1838352012);
			func_1123(-1835851517);
			break;
		case -1838352012:
			func_1124(-1674179981);
			func_1124(-1835851517);
			func_1123(-1838352012);
			break;
		case -1717960576:
			func_1124(210001842);
			func_1123(-1717960576);
			break;
		case 210001842:
			func_1124(-1717960576);
			func_1123(210001842);
			break;
		case -150493654:
			func_1124(-1271608261);
			func_1124(1846061697);
			func_1124(-1145519186);
			func_1123(-150493654);
			break;
		case -1271608261:
			func_1124(-150493654);
			func_1124(1846061697);
			func_1124(-1145519186);
			func_1123(-1271608261);
			break;
		case 1846061697:
			func_1124(-150493654);
			func_1124(-1271608261);
			func_1124(-1145519186);
			func_1123(1846061697);
			break;
		case -1145519186:
			func_1124(-150493654);
			func_1124(-1271608261);
			func_1124(1846061697);
			func_1123(-1145519186);
			break;
		case 1766284049:
			func_1124(280705402);
			func_1124(1926308480);
			func_1123(1766284049);
			break;
		case 280705402:
			func_1124(1766284049);
			func_1124(1926308480);
			func_1123(280705402);
			break;
		case 1926308480:
			func_1124(1766284049);
			func_1124(280705402);
			func_1123(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1124(439465264);
				func_1123(1609506757);
			}
			else
			{
				func_1124(1609506757);
				func_1124(439465264);
			}
			break;
		case 439465264:
			if (func_628(1609506757))
			{
				if (bParam1)
				{
					func_1123(439465264);
				}
				else
				{
					func_1124(439465264);
				}
			}
			break;
		case 1822001510:
			func_1124(-1612662716);
			func_1123(1822001510);
			break;
		case -1612662716:
			func_1124(1822001510);
			func_1123(-1612662716);
			break;
		case 1306158345:
			func_1124(1952610440);
			func_1124(-223469678);
			func_1124(-404698347);
			func_1124(1517904467);
			func_1123(1306158345);
			break;
		case 1952610440:
			func_1124(1306158345);
			func_1124(-223469678);
			func_1124(-404698347);
			func_1124(1517904467);
			func_1123(1952610440);
			break;
		case -223469678:
			func_1124(1306158345);
			func_1124(1952610440);
			func_1124(-404698347);
			func_1124(1517904467);
			func_1123(-223469678);
			break;
		case -404698347:
			func_1124(1306158345);
			func_1124(1952610440);
			func_1124(-223469678);
			func_1124(1517904467);
			func_1123(-404698347);
			break;
		case 1517904467:
			func_1124(1306158345);
			func_1124(1952610440);
			func_1124(-223469678);
			func_1124(-404698347);
			func_1123(1517904467);
			break;
		case 1376646519:
			func_1124(931649776);
			func_1124(-434590080);
			func_1124(1743048395);
			func_1124(449774763);
			func_1123(1376646519);
			break;
		case 931649776:
			func_1124(1376646519);
			func_1124(-434590080);
			func_1124(1743048395);
			func_1124(449774763);
			func_1123(931649776);
			break;
		case -434590080:
			func_1124(1376646519);
			func_1124(931649776);
			func_1124(1743048395);
			func_1124(449774763);
			func_1123(-434590080);
			break;
		case 1743048395:
			func_1124(1376646519);
			func_1124(931649776);
			func_1124(-434590080);
			func_1124(449774763);
			func_1123(1743048395);
			break;
		case 449774763:
			func_1124(1376646519);
			func_1124(931649776);
			func_1124(-434590080);
			func_1124(1743048395);
			func_1123(449774763);
			break;
		case -1414537028:
			func_1124(38162571);
			func_1124(1350391819);
			func_1124(54073871);
			func_1123(-1414537028);
			break;
		case 38162571:
			func_1124(-1414537028);
			func_1124(1350391819);
			func_1124(54073871);
			func_1123(38162571);
			break;
		case 1350391819:
			func_1124(-1414537028);
			func_1124(38162571);
			func_1124(54073871);
			func_1123(1350391819);
			break;
		case 54073871:
			func_1124(-1414537028);
			func_1124(38162571);
			func_1124(1350391819);
			func_1123(54073871);
			break;
		case 198200492:
			func_1123(198200492);
			func_1124(-1124061431);
			func_1124(52706132);
			func_1124(-259123672);
			break;
		case -1124061431:
			func_1124(198200492);
			func_1123(-1124061431);
			func_1124(52706132);
			func_1124(-259123672);
			break;
		case 52706132:
			func_1124(198200492);
			func_1124(-1124061431);
			func_1123(52706132);
			func_1124(-259123672);
			break;
		case -259123672:
			func_1124(198200492);
			func_1124(-1124061431);
			func_1124(52706132);
			func_1123(-259123672);
			break;
		case -919512195:
			func_1123(-919512195);
			func_1124(-1925798111);
			func_1124(420709909);
			func_1124(1703426636);
			break;
		case -1925798111:
			func_1123(-1925798111);
			func_1124(-919512195);
			func_1124(420709909);
			func_1124(1703426636);
			break;
		case 420709909:
			func_1123(420709909);
			func_1124(-919512195);
			func_1124(-1925798111);
			func_1124(1703426636);
			break;
		case 1703426636:
			func_1123(1703426636);
			func_1124(-919512195);
			func_1124(-1925798111);
			func_1124(420709909);
			break;
		case -1223121209:
			func_1123(-1223121209);
			func_1124(630808005);
			break;
		case 630808005:
			func_1123(630808005);
			func_1124(-1223121209);
			break;
		case 1453909576:
			func_1123(1453909576);
			func_1124(1643531967);
			break;
		case 1643531967:
			func_1123(1643531967);
			func_1124(1453909576);
			break;
		case 0:
			func_1123(0);
			func_1124(473295046);
			func_1124(-1738165526);
			break;
		case 473295046:
			func_1123(473295046);
			func_1124(0);
			func_1124(-1738165526);
			break;
		case -1738165526:
			func_1123(-1738165526);
			func_1124(0);
			func_1124(473295046);
			break;
		case 932909855:
			func_1123(932909855);
			func_1124(2051822093);
			break;
		case 2051822093:
			func_1123(2051822093);
			func_1124(932909855);
			break;
		case 405586984:
			func_1123(405586984);
			func_1124(1509509592);
			func_1124(-959357075);
			func_1124(-1311865656);
			break;
		case 1509509592:
			func_1123(1509509592);
			func_1124(405586984);
			func_1124(-959357075);
			func_1124(-1311865656);
			break;
		case -959357075:
			func_1123(-959357075);
			func_1124(1509509592);
			func_1124(405586984);
			func_1124(-1311865656);
			break;
		case -1311865656:
			func_1123(-1311865656);
			func_1124(1509509592);
			func_1124(-959357075);
			func_1124(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1123(-524145696);
			}
			else
			{
				func_1124(-524145696);
			}
			func_1124(1626481264);
			func_1124(282809459);
			break;
		case 282809459:
			func_1123(282809459);
			func_1124(1626481264);
			func_1124(-524145696);
			break;
		case 1626481264:
			func_1123(1626481264);
			func_1124(-524145696);
			func_1124(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1123(885203519);
			}
			else
			{
				func_1124(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1123(-1080627546);
			}
			else
			{
				func_1124(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_628(iParam0))
				{
					func_1123(iParam0);
				}
			}
			else if (func_628(iParam0))
			{
				func_1124(iParam0);
			}
			break;
	}
}

void func_1053(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	char* sVar0;
	int iVar1;
	if (__LIB_0__::func_139(iParam1->f_6))
	{
		if (bParam7 || MISC::IS_BIT_SET(*iParam1, 11))
		{
			return;
		}
		__LIB_1__::func_748(&(iParam1->f_6), 0, 1);
	}
	if (!__LIB_0__::func_139(iParam1->f_6) && !MISC::IS_BIT_SET(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (__LIB_1__::func_502(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_563(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824 /* Float: 2f */, 0, joaat("SHORT_TIMED_EVENT"), iParam1->f_10, 0);
			if (__LIB_0__::func_139(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					__LIB_2__::func_369(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					__LIB_1__::func_522(iParam1->f_6, 17, 1, 1);
				}
				if (MISC::IS_BIT_SET(*iParam1, 1))
				{
					if (MISC::IS_BIT_SET(*iParam1, 3))
					{
						__LIB_1__::func_523(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						__LIB_1__::func_483(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (MISC::IS_BIT_SET(*iParam1, 10))
				{
					__LIB_1__::func_522(iParam1->f_6, 16, 1, 1);
				}
				if (!MISC::IS_BIT_SET(*iParam1, 0) || MISC::IS_BIT_SET(*iParam1, 13))
				{
					__LIB_1__::func_221(iParam1->f_6, 0, 1);
				}
				else
				{
					__LIB_1__::func_221(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

void func_1123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_745(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::SET_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
		MISC::SET_BIT(&(Global_1058888.f_40567[iVar1]), iVar2);
	}
	Global_1934765 = 0;
}

void func_1124(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = func_745(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887.f_12 == -1)
	{
		MISC::CLEAR_BIT(&(Global_40.f_283[iVar1]), iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888.f_40567.f_46 = 1;
			MISC::CLEAR_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_1125()
{
	func_1124(-939420910);
	func_1124(-1187950766);
	func_1124(356365161);
	func_1124(753127042);
	func_1124(-2038424081);
	func_1124(1884271742);
	func_1124(459290420);
}

void func_1126()
{
	func_1124(704802028);
	func_1124(588987611);
	func_1124(2008888900);
	func_1124(1649996811);
	func_1124(227918160);
	func_1124(168171957);
	func_1124(1193080109);
	func_1124(-491981251);
	func_1124(-639037538);
	func_1124(-618620429);
}

