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
	struct<194> Local_15 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<32> Local_209[6];
	int iLocal_402 = 0;
	struct<5> Local_403 = { 0, 0, 0, 0, 0 } ;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	int iLocal_411 = 0;
	var uLocal_412[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_419[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	var uLocal_429 = -1;
	var uLocal_430 = 0;
	var uLocal_431 = -1;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = -1;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 1073741824;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 1;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	struct<17> Local_449[3];
	vector3 vLocal_501[7] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	char* sLocal_525[3] = { NULL, NULL, NULL };
	char* sLocal_529[22] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	var uLocal_552 = 23;
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
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	struct<2> Local_737[23];
	bool bLocal_784 = false;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	float fLocal_789 = 0f;
	float fLocal_790 = 0f;
	int iLocal_791 = 0;
	float fLocal_792 = 0f;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	vector3 vLocal_796 = { 0f, 0f, 0f };
	vector3 vLocal_799 = { 0f, 0f, 0f };
	vector3 vLocal_802[10] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	vector3 vLocal_833 = { 0f, 0f, 0f };
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = -1;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 2;
	var uLocal_845 = 1;
	var uLocal_846 = 1;
	var uLocal_847 = 1;
	var uLocal_848 = 0;
	var uLocal_849 = 1;
	var uLocal_850 = 2;
	var uLocal_851 = 2;
	var uLocal_852 = 3;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 3;
	var uLocal_856 = 1;
	var uLocal_857 = 3;
	var uLocal_858 = 3;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	int iLocal_869 = 0;
	int iLocal_870 = 0;
	int iLocal_871 = 0;
	int iLocal_872 = 0;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	int iLocal_878 = 0;
	float fLocal_879 = 0f;
	int iLocal_880 = 0;
	int iLocal_881 = 0;
	int iLocal_882 = 0;
	int iLocal_883 = 0;
	int iLocal_884 = 0;
	int iLocal_885 = 0;
	int iLocal_886 = 0;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
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
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	int iLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	int iLocal_991 = 0;
	int iLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	float fLocal_1002 = 0f;
	float fLocal_1003 = 0f;
	float fLocal_1004 = 0f;
	float fLocal_1005 = 0f;
	vector3 vLocal_1006 = { 0f, 0f, 0f };
	int iLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	int iLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	int iLocal_1019 = 0;
	int iLocal_1020 = 0;
	int iLocal_1021 = 0;
	int iLocal_1022 = 0;
	bool bLocal_1023 = false;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	int iLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	bool bLocal_1034 = false;
	int iLocal_1035 = 0;
	int iLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 1065353216;
	var uLocal_1044 = 1065353216;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 1065353216;
	var uLocal_1049 = 1065353216;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 1065353216;
	var uLocal_1054 = 1065353216;
	var uLocal_1055 = 0;
	var uLocal_1056 = 1040187392;
	var uLocal_1057 = 1040187392;
	var uLocal_1058 = -1;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = -1082130432;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	int iLocal_1077 = 0;
	int iLocal_1078 = 0;
	int iLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = -1082130432;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
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
	iLocal_788 = joaat("WORLD_ANIMAL_DEER_GRAZING");
	iLocal_867 = 5;
	fLocal_879 = 2.5f;
	iLocal_880 = 100;
	iLocal_889 = 1;
	iLocal_997 = 10;
	fLocal_1005 = 15f;
	iLocal_1012 = 1;
	iLocal_1027 = 1;
	iLocal_1079 = __LIB_2__::func_340(3, 0, 0);
	Local_15.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_3();
	}
	Local_15.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_368(&Local_15, 1);
	__LIB_0__::func_11();
	__LIB_3__::func_152(27);
	while (true)
	{
		switch (iLocal_1012)
		{
			case 1:
				if (__LIB_3__::func_669(&Local_15, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
				{
					func_9();
					func_10(&Local_15, &uLocal_1038, &uLocal_1037);
					iLocal_1012 = 0;
				}
				else if (Local_15.f_160)
				{
					func_3();
				}
				break;
			case 0:
				if (func_11())
				{
					iLocal_1012 = 3;
				}
				break;
			case 3:
				if (func_12())
				{
					iLocal_1012 = 4;
				}
				break;
			case 4:
				if (!__LIB_3__::func_466(&Local_15, &uLocal_412, iLocal_402, 0, 1, 0, 1, 0))
				{
					func_3();
				}
				func_14();
				if (func_15())
				{
					func_3();
				}
				if (__LIB_3__::func_431(&Local_15, &uLocal_412, 0, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
				{
					func_3();
				}
				break;
		}
		BUILTIN::WAIT(Local_15.f_158);
	}
}

void func_3()
{
	__LIB_0__::func_769();
	func_18();
	AUDIO::STOP_AUDIO_SCENE("Horse_Race_Beat_Train_scene");
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
	{
		if (__LIB_2__::func_118(iLocal_411, 1, 0) >= 100f)
		{
			VEHICLE::DELETE_MISSION_TRAIN(&iLocal_411);
		}
		else
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_411, false);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_529[iLocal_1016]))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_529[iLocal_1016]))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_529[iLocal_1016]);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_529[iLocal_1017]))
	{
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_529[iLocal_1017]))
		{
			TASK::REMOVE_WAYPOINT_RECORDING(sLocal_529[iLocal_1017]);
		}
	}
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_785);
	if (bLocal_784)
	{
		__LIB_1__::func_600(1);
	}
	if (PED::_0x91A5F9CBEBB9D936(iLocal_791))
	{
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_791, true);
	}
	__LIB_3__::func_493(&Local_15, &uLocal_412, &uLocal_419, iLocal_402, uLocal_1038, uLocal_1037, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_412[1]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_412[1]));
	}
	MAP::DISPLAY_RADAR(true);
	if (MAP::DOES_BLIP_EXIST(iLocal_426))
	{
		MAP::REMOVE_BLIP(&iLocal_426);
	}
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	MAP::CLEAR_GPS_MULTI_ROUTE();
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_412[0]))
	{
		__LIB_1__::func_727(uLocal_412[0], 1);
		AITRANSPORT::_0xBA8818212633500A(uLocal_412[1], 0, 0);
	}
	__LIB_0__::func_8(&Global_1935630, 4);
	__LIB_1__::func_682(27);
	AUDIO::TRIGGER_MUSIC_EVENT("REHR_END");
	AUDIO::STOP_AUDIO_SCENE("horse_race_scene");
	PED::_0x96C7B659854DE629(Global_35, uLocal_412[0]);
	PED::_0x96C7B659854DE629(Global_35, uLocal_412[1]);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9()
{
	switch (Local_15.f_51.f_4)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			iLocal_402 = 1;
			break;
		case 5:
		case 6:
		case 7:
			iLocal_402 = 0;
			break;
		case 0:
		case 8:
		case 9:
		case 10:
			iLocal_402 = 2;
			break;
	}
	iLocal_786 = __LIB_3__::func_564(Local_15.f_3, iLocal_402);
	if (!__LIB_0__::func_181())
	{
		if (__LIB_3__::func_564(Local_15.f_3, 4) == 3 || __LIB_3__::func_564(Local_15.f_3, 4) == 4)
		{
			iLocal_786 = 0;
		}
	}
	else if (__LIB_3__::func_564(Local_15.f_3, 4) == 1 || __LIB_3__::func_564(Local_15.f_3, 4) == 2)
	{
		iLocal_786 = 0;
	}
	if (iLocal_402 == 1)
	{
		Local_209[0 /*32*/].f_1 = joaat("RE_HORSERACE_MALES_01");
		StringCopy(&(Local_209[0 /*32*/].f_23), "0702_A_M_M_RhdUpperClass_01_WHITE_02", 64);
		Local_209[0 /*32*/] = 4;
		Local_209[0 /*32*/].f_3 = 2001844695;
		Local_209[0 /*32*/].f_6 = { Local_15.f_51 };
		Local_209[1 /*32*/].f_6 = { Local_15.f_51 };
		Local_209[1 /*32*/].f_1 = joaat("A_C_HORSE_NOKOTA_WHITEROAN");
		if (iLocal_786 == 0)
		{
			sLocal_525[1] = "PBL_WIN_01";
			sLocal_525[2] = "PBL_LOSS_01";
		}
		else if (iLocal_786 == 1 || iLocal_786 >= 2)
		{
			sLocal_525[1] = "PBL_WIN_02";
			sLocal_525[2] = "PBL_LOSS_02";
		}
	}
	else if (iLocal_402 == 2)
	{
		Local_209[0 /*32*/].f_1 = joaat("RE_HORSERACE_FEMALES_01");
		StringCopy(&(Local_209[0 /*32*/].f_23), "0847_A_F_M_Civ_Black_AVOID_02", 64);
		Local_209[0 /*32*/] = 5;
		Local_209[0 /*32*/].f_3 = -1918933390;
		Local_209[0 /*32*/].f_6 = { Local_15.f_51 };
		Local_209[1 /*32*/].f_6 = { Local_15.f_51 };
		Local_209[1 /*32*/].f_1 = joaat("A_C_HORSE_THOROUGHBRED_BRINDLE");
		if (Local_15.f_51.f_4 == 0)
		{
			Local_209[2 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[2 /*32*/].f_6 = { 1478.62f, -1922.76f, 47.21f };
			Local_209[2 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[3 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[3 /*32*/].f_6 = { 1478.81f, -1921.47f, 47.23f };
			Local_209[3 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[4 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[4 /*32*/].f_6 = { 1477.79f, -1922.52f, 47.18f };
			Local_209[4 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[5 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[5 /*32*/].f_6 = { 1477.83f, -1924.32f, 47.17f };
			Local_209[5 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			vLocal_833 = { 1423.4f, -1925.58f, 53.52f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 8)
		{
			Local_209[2 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[2 /*32*/].f_6 = { 1478.62f, -1922.76f, 47.21f };
			Local_209[2 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[3 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[3 /*32*/].f_6 = { 1478.81f, -1921.47f, 47.23f };
			Local_209[3 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[4 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[4 /*32*/].f_6 = { 1477.79f, -1922.52f, 47.18f };
			Local_209[4 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[5 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[5 /*32*/].f_6 = { 1477.83f, -1924.32f, 47.17f };
			Local_209[5 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			vLocal_833 = { 1423.4f, -1925.58f, 53.52f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 9)
		{
			Local_209[2 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[2 /*32*/].f_6 = { 1478.62f, -1922.76f, 47.21f };
			Local_209[2 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[3 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[3 /*32*/].f_6 = { 1478.81f, -1921.47f, 47.23f };
			Local_209[3 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[4 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[4 /*32*/].f_6 = { 1477.79f, -1922.52f, 47.18f };
			Local_209[4 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[5 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[5 /*32*/].f_6 = { 1477.83f, -1924.32f, 47.17f };
			Local_209[5 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			vLocal_833 = { 1423.4f, -1925.58f, 53.52f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 10)
		{
			Local_209[2 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[2 /*32*/].f_6 = { 1487.71f, -1073.46f, 52.89f };
			Local_209[2 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[3 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[3 /*32*/].f_6 = { 1488.52f, -1074.72f, 52.67f };
			Local_209[3 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[4 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[4 /*32*/].f_6 = { 1489.27f, -1071.28f, 52.32f };
			Local_209[4 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[5 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[5 /*32*/].f_6 = { 1490.31f, -1072.75f, 52.03f };
			Local_209[5 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			vLocal_833 = { 1525.97f, -1078.12f, 45.96f };
			iLocal_787 = 25;
		}
		if (iLocal_786 == 0)
		{
			sLocal_525[1] = "confident_win_01";
			sLocal_525[2] = "confident_loss_01";
		}
		else if (iLocal_786 == 1 || iLocal_786 >= 2)
		{
			sLocal_525[1] = "confident_win_02";
			sLocal_525[2] = "confident_loss_02";
		}
	}
	else if (iLocal_402 == 0)
	{
		Local_209[0 /*32*/].f_1 = joaat("RE_HORSERACE_MALES_01");
		StringCopy(&(Local_209[0 /*32*/].f_23), "1034_S_M_M_CoachTaxiDriver_01_WHITE_06", 64);
		Local_209[0 /*32*/] = 4;
		Local_209[0 /*32*/].f_3 = -2146022560;
		Local_209[0 /*32*/].f_6 = { Local_15.f_51 };
		Local_209[1 /*32*/].f_6 = { Local_15.f_51 };
		Local_209[1 /*32*/].f_1 = joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK");
		if (Local_15.f_51.f_4 == 5)
		{
			Local_209[2 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[2 /*32*/].f_6 = { 509.3f, 2035.51f, 223.31f };
			Local_209[2 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[3 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[3 /*32*/].f_6 = { 508.34f, 2033.83f, 223.05f };
			Local_209[3 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[4 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[4 /*32*/].f_6 = { 510.14f, 2034.91f, 222.82f };
			Local_209[4 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[5 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[5 /*32*/].f_6 = { 510.38f, 2036.51f, 223.28f };
			Local_209[5 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			vLocal_833 = { 468.75f, 2010.6f, 222.98f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 6)
		{
			Local_209[2 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[2 /*32*/].f_6 = { 1763.27f, 1285.63f, 184.86f };
			Local_209[2 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[3 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[3 /*32*/].f_6 = { 1761.29f, 1287.18f, 184.31f };
			Local_209[3 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[4 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[4 /*32*/].f_6 = { 1762.03f, 1283.59f, 184.95f };
			Local_209[4 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[5 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[5 /*32*/].f_6 = { 1763.98f, 1284.55f, 185.14f };
			Local_209[5 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			vLocal_833 = { 1772.33f, 1247.69f, 189.73f };
			iLocal_787 = 40;
		}
		else if (Local_15.f_51.f_4 == 7)
		{
			Local_209[2 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[2 /*32*/].f_6 = { 2682.34f, 628.54f, 78.63f };
			Local_209[2 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[3 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[3 /*32*/].f_6 = { 2680.21f, 628.79f, 78.64f };
			Local_209[3 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[4 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[4 /*32*/].f_6 = { 2680.78f, 630.64f, 78.63f };
			Local_209[4 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			Local_209[5 /*32*/].f_1 = joaat("A_C_DEER_01");
			Local_209[5 /*32*/].f_6 = { 2679.53f, 629.84f, 78.58f };
			Local_209[5 /*32*/].f_9 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 361));
			vLocal_833 = { 2653.11f, 622.68f, 81.43f };
			iLocal_787 = 30;
		}
		if (iLocal_786 == 0)
		{
			sLocal_525[1] = "weird_win_01";
			sLocal_525[2] = "weird_loss_01";
		}
		else if (iLocal_786 == 1 || iLocal_786 >= 2)
		{
			sLocal_525[1] = "weird_win_02";
			sLocal_525[2] = "weird_loss_02";
		}
	}
	__LIB_3__::func_445(&Local_209);
}

void func_10(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 1;
			*uParam2 = 0;
			break;
		case 2:
			*uParam1 = 1;
			*uParam2 = 1;
			break;
		case 3:
			*uParam1 = 1;
			*uParam2 = 2;
			break;
		case 4:
			*uParam1 = 1;
			*uParam2 = 3;
			break;
		case 5:
			*uParam1 = 3;
			*uParam2 = 0;
			break;
		case 6:
			*uParam1 = 6;
			*uParam2 = 0;
			break;
		case 7:
			*uParam1 = 10;
			*uParam2 = 0;
			break;
		case 8:
			*uParam1 = 11;
			*uParam2 = 0;
			break;
		case 9:
			*uParam1 = 11;
			*uParam2 = 1;
			break;
		case 10:
			*uParam1 = 11;
			*uParam2 = 2;
			break;
	}
}

bool func_11()
{
	switch (iLocal_1014)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_15))
			{
				func_37();
				func_38();
				func_39();
				func_40();
				func_41();
				iLocal_1014 = 1;
			}
			break;
		case 1:
			switch (iLocal_402)
			{
				case 1:
					if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_737[0 /*2*/]))
					{
						return false;
					}
					break;
				case 2:
					if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_737[14 /*2*/]))
					{
						return false;
					}
					break;
				case 0:
					if (!STREAMING::HAS_ANIM_DICT_LOADED(Local_737[7 /*2*/]))
					{
						return false;
					}
					break;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_529[func_42()]))
			{
				return false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_529[func_43()]))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_209))
			{
				return false;
			}
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_12()
{
	switch (iLocal_1013)
	{
		case 0:
			if (__LIB_3__::func_479(Local_15.f_51, Local_15.f_51.f_3, &Local_209, &uLocal_412, 1, 0, -1, 1))
			{
				iLocal_1013 = 1;
			}
			break;
		case 1:
			func_46();
			func_47();
			func_48();
			func_49();
			func_50();
			func_51(Local_15, &iLocal_1018, &iLocal_427);
			func_52();
			iLocal_1013 = 6;
			break;
		case 6:
			switch (Local_15.f_51.f_4)
			{
				case 2:
				case 5:
				case 7:
					break;
			}
			return true;
	}
	return false;
}

void func_14()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_1010 = PED::GET_MOUNT(Global_35);
		PED::SET_PED_RESET_FLAG(iLocal_1010, 154, true);
		PED::SET_PED_RESET_FLAG(iLocal_1010, 243, true);
	}
	if (iLocal_1033 == 1)
	{
		Local_15.f_45 = 1;
	}
	else
	{
		Local_15.f_45 = 0;
	}
	func_63();
	__LIB_0__::func_11();
	if (iLocal_1011 <= 7 && iLocal_1011 >= 2)
	{
		func_65();
	}
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_501[iLocal_1018 /*3*/], 15f, 15f, 10f, false, true, 0))
	{
		func_66();
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_403, false))
	{
		fLocal_1003 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_403);
	}
	if (PED::IS_PED_DEAD_OR_DYING(uLocal_412[0], true))
	{
		func_67(15);
	}
	func_68();
}

bool func_15()
{
	switch (iLocal_1011)
	{
		case 0:
			func_69();
			break;
		case 1:
			func_70();
			break;
		case 2:
			func_71();
			break;
		case 3:
			func_72();
			break;
		case 4:
			func_73();
			break;
		case 5:
			func_74();
			break;
		case 6:
			func_75();
			break;
		case 7:
			func_76();
			break;
		case 8:
			func_77();
			break;
		case 9:
			func_78();
			break;
		case 10:
			func_79();
			break;
		case 11:
			func_80();
			break;
		case 13:
			func_81();
			break;
		case 14:
			if (iLocal_887 == 0)
			{
				if (!PED::IS_PED_RAGDOLL(uLocal_412[0]))
				{
					if (__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
					{
						iLocal_887 = 1;
					}
				}
			}
			if (__LIB_2__::func_118(uLocal_412[0], 1, 0) >= 80f)
			{
				PED::SET_PED_KEEP_TASK(uLocal_412[0], true);
				return true;
			}
			break;
		case 12:
			__LIB_3__::func_673(Global_35, uLocal_412[0], &uLocal_836, -1, 15);
			__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, -1, 15);
			if (iLocal_890 == 0)
			{
				if (__LIB_2__::func_227(0f, 1, uLocal_412[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
				{
					__LIB_2__::func_411(&(Local_449[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_449[1 /*17*/]), 1, 0);
					iLocal_890 = 1;
				}
			}
			func_87();
			func_88();
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_412[1], false);
			if (MAP::DOES_BLIP_EXIST(uLocal_419[0]))
			{
				MAP::REMOVE_BLIP(&(uLocal_419[0]));
				__LIB_0__::func_8(&Global_1935630, 4);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_412[0]))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_412[0], 1.5f);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 1.5f, 1, -1f, 0);
			}
			if (__LIB_2__::func_118(uLocal_412[0], 1, 0) >= 100f)
			{
				PED::SET_PED_KEEP_TASK(uLocal_412[0], true);
				return true;
			}
			break;
		case 15:
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_412[0], true))
			{
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_1009);
				if (!PED::IS_PED_ON_MOUNT(uLocal_412[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_412[1]))
				{
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_412[1], -1, -1, 2f, 1, 0, 0);
				}
				TASK::_TASK_MOVE_IN_TRAFFIC(0, -1f, 1536, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_1009);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_412[0], iLocal_1009);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
			}
			PED::SET_PED_KEEP_TASK(uLocal_412[0], true);
			__LIB_0__::func_8(&Global_1935630, 4);
			if (MAP::DOES_BLIP_EXIST(uLocal_419[0]))
			{
				MAP::REMOVE_BLIP(&(uLocal_419[0]));
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_426))
			{
				MAP::REMOVE_BLIP(&iLocal_426);
			}
			MAP::CLEAR_GPS_CUSTOM_ROUTE();
			MAP::CLEAR_GPS_MULTI_ROUTE();
			Local_15.f_160 = 1;
			return true;
		case 16:
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1009);
			if (!PED::IS_PED_ON_MOUNT(uLocal_412[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_412[1]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_412[1], -1, -1, 2f, 1, 0, 0);
			}
			TASK::_TASK_MOVE_IN_TRAFFIC(0, -1f, 1536, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1009);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_412[0], iLocal_1009);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
			PED::SET_PED_KEEP_TASK(uLocal_412[0], true);
			__LIB_0__::func_8(&Global_1935630, 4);
			if (MAP::DOES_BLIP_EXIST(uLocal_419[0]))
			{
				MAP::REMOVE_BLIP(&(uLocal_419[0]));
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_426))
			{
				MAP::REMOVE_BLIP(&iLocal_426);
			}
			MAP::CLEAR_GPS_CUSTOM_ROUTE();
			MAP::CLEAR_GPS_MULTI_ROUTE();
			__LIB_0__::func_8(&Global_1935630, 4);
			PED::SET_PED_KEEP_TASK(uLocal_412[0], true);
			return true;
	}
	return false;
}

void func_18()
{
	if (iLocal_14 == 0)
	{
		if (iLocal_1033 == 1)
		{
			if (__LIB_3__::func_674(Local_15.f_3, iLocal_402) == 0)
			{
				__LIB_3__::func_537(Local_15.f_3, iLocal_402, 1);
				return;
			}
			if (__LIB_3__::func_674(Local_15.f_3, iLocal_402) == 1)
			{
				__LIB_3__::func_537(Local_15.f_3, iLocal_402, 2);
				return;
			}
			if (__LIB_3__::func_674(Local_15.f_3, iLocal_402) == 2)
			{
				__LIB_3__::func_537(Local_15.f_3, iLocal_402, 3);
				Local_15.f_44 = 1;
				return;
			}
		}
	}
}

void func_37()
{
	switch (iLocal_402)
	{
		case 0:
			Local_403.f_4 = "script@beat@wilderness@horseRace@weird";
			break;
		case 2:
			Local_403.f_4 = "script@beat@wilderness@horseRace@confident";
			break;
		case 1:
			Local_403.f_4 = "script@beat@wilderness@horseRace@novice";
			break;
	}
}

void func_38()
{
	if (iLocal_402 == 1)
	{
		Local_737[0 /*2*/] = "script_re@horse_racer@novice";
		Local_737[0 /*2*/].f_1 = "base";
		Local_737[1 /*2*/] = "script_re@horse_racer@novice";
		Local_737[1 /*2*/].f_1 = "streaming_01";
		Local_737[2 /*2*/] = "script_re@horse_racer@novice";
		Local_737[2 /*2*/].f_1 = "streaming_02";
		Local_737[3 /*2*/] = "script_re@horse_racer@novice";
		Local_737[3 /*2*/].f_1 = "streaming_03";
		Local_737[4 /*2*/] = "script_re@horse_racer@novice";
		Local_737[4 /*2*/].f_1 = "adjust_stirrup";
		Local_737[5 /*2*/] = "script_re@horse_racer@novice";
		Local_737[5 /*2*/].f_1 = "streaming_03";
		Local_737[6 /*2*/] = "script_re@horse_racer@novice";
		Local_737[6 /*2*/].f_1 = "struggle_lean_fwd";
		Local_737[18 /*2*/] = "script_re@horse_racer@novice";
		Local_737[18 /*2*/].f_1 = "struggle_lean_back";
		Local_737[19 /*2*/] = "script_re@horse_racer@novice";
		Local_737[19 /*2*/].f_1 = "struggle_lean_left";
		Local_737[20 /*2*/] = "script_re@horse_racer@novice";
		Local_737[20 /*2*/].f_1 = "struggle_lean_left_m";
		Local_737[21 /*2*/] = "script_re@horse_racer@novice";
		Local_737[21 /*2*/].f_1 = "struggle_lean_right";
		Local_737[22 /*2*/] = "script_re@horse_racer@novice";
		Local_737[22 /*2*/].f_1 = "struggle_lean_right_m";
		__LIB_3__::func_318(Local_737[0 /*2*/], &uLocal_552);
	}
	else if (iLocal_402 == 0)
	{
		Local_737[7 /*2*/] = "script_re@horse_racer@weird";
		Local_737[7 /*2*/].f_1 = "base";
		Local_737[8 /*2*/] = "script_re@horse_racer@weird";
		Local_737[8 /*2*/].f_1 = "streaming_01";
		Local_737[9 /*2*/] = "script_re@horse_racer@weird";
		Local_737[9 /*2*/].f_1 = "streaming_02";
		Local_737[10 /*2*/] = "script_re@horse_racer@weird";
		Local_737[10 /*2*/].f_1 = "streaming_03";
		Local_737[11 /*2*/] = "script_re@horse_racer@weird";
		Local_737[11 /*2*/].f_1 = "streaming_01_horse";
		Local_737[12 /*2*/] = "script_re@horse_racer@weird";
		Local_737[12 /*2*/].f_1 = "streaming_02_horse";
		Local_737[13 /*2*/] = "script_re@horse_racer@weird";
		Local_737[13 /*2*/].f_1 = "streaming_03_horse";
		__LIB_3__::func_318(Local_737[7 /*2*/], &uLocal_552);
	}
	else if (iLocal_402 == 2)
	{
		Local_737[14 /*2*/] = "script_re@horse_racer@confident";
		Local_737[14 /*2*/].f_1 = "base";
		Local_737[15 /*2*/] = "script_re@horse_racer@confident";
		Local_737[15 /*2*/].f_1 = "idle_a";
		Local_737[16 /*2*/] = "script_re@horse_racer@confident";
		Local_737[16 /*2*/].f_1 = "pats_horse_left";
		Local_737[17 /*2*/] = "script_re@horse_racer@confident";
		Local_737[17 /*2*/].f_1 = "pats_horse_right";
		__LIB_3__::func_318(Local_737[14 /*2*/], &uLocal_552);
	}
}

void func_39()
{
	STREAMING::REQUEST_PTFX_ASSET();
}

void func_40()
{
	switch (Local_15.f_51.f_4)
	{
		case 0:
			sLocal_529[12] = "rehor_scarlett_a_1";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[12]);
			sLocal_529[1] = "rehor_scarlett_shortcut_a_1";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[1]);
			break;
		case 1:
			sLocal_529[19] = "rehor_big_valley_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[19]);
			sLocal_529[8] = "rehor_big_valley_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[8]);
			break;
		case 2:
			sLocal_529[16] = "rehor_heartlands_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[16]);
			sLocal_529[5] = "rehor_heartlands_shortcut_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[5]);
			break;
		case 3:
			sLocal_529[20] = "rehor_big_valley_b";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[20]);
			sLocal_529[9] = "rehor_big_valley_shortcut_b";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[9]);
			break;
		case 4:
			sLocal_529[21] = "rehor_big_valley_c";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[21]);
			sLocal_529[10] = "rehor_big_valley_shortcut_c";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[10]);
			break;
		case 5:
			sLocal_529[18] = "rehor_cumberland_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[18]);
			sLocal_529[7] = "rehor_cumberland_shortcut_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[7]);
			break;
		case 6:
			sLocal_529[17] = "rehor_heartlands_b";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[17]);
			sLocal_529[6] = "rehor_heartlands_shortcut_b";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[6]);
			break;
		case 7:
			sLocal_529[15] = "rehor_roanoke_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[15]);
			sLocal_529[4] = "rehor_roanoke_shortcut_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[4]);
			break;
		case 8:
			sLocal_529[11] = "rehor_scarlett_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[11]);
			sLocal_529[0] = "rehor_scarlett_shortcut_a";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[0]);
			break;
		case 9:
			sLocal_529[13] = "rehor_scarlett_a_2";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[13]);
			sLocal_529[2] = "rehor_scarlett_shortcut_a_2";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[2]);
			break;
		case 10:
			sLocal_529[14] = "rehor_scarlett_b";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[14]);
			sLocal_529[3] = "rehor_scarlett_shortcut_b";
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_529[3]);
			break;
	}
}

void func_41()
{
	__LIB_2__::func_602(&(Local_449[0 /*17*/]), "RE_INTER_POS", func_82(18), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_449[1 /*17*/]), "RE_INTER_ANTAGONIZE", func_82(19), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
}

int func_42()
{
	switch (Local_15.f_51.f_4)
	{
		case 1:
			return 8;
		case 5:
			return 7;
		case 2:
			return 5;
		case 6:
			return 6;
		case 7:
			return 4;
		case 8:
			return 0;
		case 0:
			return 1;
		case 9:
			return 2;
		case 10:
			return 3;
		case 3:
			return 9;
		case 4:
			return 10;
	}
	return 3;
}

int func_43()
{
	switch (Local_15.f_51.f_4)
	{
		case 1:
			return 19;
		case 5:
			return 18;
		case 2:
			return 16;
		case 6:
			return 17;
		case 7:
			return 15;
		case 8:
			return 11;
		case 0:
			return 12;
		case 9:
			return 13;
		case 10:
			return 14;
		case 3:
			return 20;
		case 4:
			return 21;
	}
	return 14;
}

void func_46()
{
	__LIB_2__::func_51(&(Local_15.f_5), 1);
	__LIB_2__::func_180(&(Local_15.f_5), 1);
	__LIB_2__::func_111(&(Local_15.f_5), 1);
	__LIB_2__::func_110(&(Local_15.f_5), 1);
	__LIB_2__::func_50(&(Local_15.f_5), 1);
	__LIB_2__::func_182(&(Local_15.f_5), 1);
	__LIB_3__::func_977(&(Local_15.f_5), 1);
	__LIB_2__::func_967(&(Local_15.f_5), uLocal_412[0], uLocal_412[1], 0);
}

void func_47()
{
	fLocal_790 = 300f;
	switch (Local_15.f_51.f_4)
	{
		case 5:
			vLocal_802[0 /*3*/] = { 558.49f, 1724.74f, 186.8f };
			vLocal_802[1 /*3*/] = { 610.31f, 2152.29f, 223.45f };
			vLocal_802[2 /*3*/] = { 875.88f, 2207.67f, 249.1f };
			vLocal_802[3 /*3*/] = { 755.82f, 2425.93f, 268.88f };
			break;
		case 6:
			vLocal_802[0 /*3*/] = { 1679.39f, 1190.44f, 219.18f };
			break;
		case 7:
			vLocal_802[0 /*3*/] = { 2249.151f, 678.073f, 86.4426f };
			vLocal_802[1 /*3*/] = { 2394.62f, 721.75f, 66.5f };
			vLocal_802[2 /*3*/] = { 2614.56f, 724.03f, 86.93f };
			vLocal_802[3 /*3*/] = { 2659.66f, 651.76f, 76.25f };
			vLocal_802[4 /*3*/] = { 2809.33f, 448.56f, 63.15f };
			break;
		case 10:
			ENTITY::CREATE_MODEL_HIDE(1564.39f, -1198.77f, 49.34f, 1f, joaat("P_CAL_GATEL01X"), true);
			break;
	}
}

void func_48()
{
	Local_403 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_403.f_4, 64, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_403, "racer", uLocal_412[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_403, "HORSE", uLocal_412[1], 0);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_403, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_403);
	}
}

void func_49()
{
	vLocal_501[3 /*3*/] = { -1030.82f, -303.08f, 82.94f };
	vLocal_501[4 /*3*/] = { 1557.9f, 1543.5f, 145.05f };
	vLocal_501[0 /*3*/] = { 2975.25f, 409.11f, 49.44f };
	vLocal_501[2 /*3*/] = { 1408.11f, -2286.16f, 40.87f };
	vLocal_501[1 /*3*/] = { 1563.09f, -1433.79f, 60.32f };
	vLocal_501[5 /*3*/] = { 585.92f, 2339.94f, 231.22f };
	vLocal_501[6 /*3*/] = { -2315.48f, -455.95f, 143.09f };
}

void func_50()
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	PED::SET_PED_CONFIG_FLAG(uLocal_412[1], 316, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_412[1], 390, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_412[0], 316, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_412[0], 390, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_412[0], 347, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[0], Local_209[0 /*32*/].f_6, 0f, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[1], Local_209[1 /*32*/].f_6, 0f, true, false, true);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_412[0], "horse_race_group", 0f);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_412[0], "HORSE_RACE_GROUP", 0f);
	PED::_REQUEST_PED_EMOTIONAL_PRESET(uLocal_412[0], "Default_Scared");
	switch (iLocal_402)
	{
		case 2:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[2], Local_209[2 /*32*/].f_6, Local_209[2 /*32*/].f_9, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[3], Local_209[3 /*32*/].f_6, Local_209[3 /*32*/].f_9, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[4], Local_209[4 /*32*/].f_6, Local_209[4 /*32*/].f_9, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[5], Local_209[5 /*32*/].f_6, Local_209[5 /*32*/].f_9, true, false, true);
			PED::_0xF1C03A5352243A30(uLocal_412[2]);
			PED::_0xF1C03A5352243A30(uLocal_412[3]);
			PED::_0xF1C03A5352243A30(uLocal_412[4]);
			PED::_0xF1C03A5352243A30(uLocal_412[5]);
			__LIB_2__::func_190(uLocal_412[0], 100);
			__LIB_2__::func_463(uLocal_412[0], joaat("CONSUMABLE_CRACKERS"), 1, 0);
			__LIB_2__::func_463(uLocal_412[0], joaat("CONSUMABLE_CHOCOLATE_BAR"), 1, 0);
			break;
		case 0:
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[2], Local_209[2 /*32*/].f_6, Local_209[2 /*32*/].f_9, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[3], Local_209[3 /*32*/].f_6, Local_209[3 /*32*/].f_9, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[4], Local_209[4 /*32*/].f_6, Local_209[4 /*32*/].f_9, true, false, true);
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[5], Local_209[5 /*32*/].f_6, Local_209[5 /*32*/].f_9, true, false, true);
			PED::_0xF1C03A5352243A30(uLocal_412[2]);
			PED::_0xF1C03A5352243A30(uLocal_412[3]);
			PED::_0xF1C03A5352243A30(uLocal_412[4]);
			PED::_0xF1C03A5352243A30(uLocal_412[5]);
			__LIB_2__::func_190(uLocal_412[0], 50);
			__LIB_2__::func_463(uLocal_412[0], joaat("CONSUMABLE_CHEWING_TOBACCO_USED"), 1, 0);
			__LIB_2__::func_463(uLocal_412[0], joaat("CONSUMABLE_APPLE"), 1, 0);
			break;
		case 1:
			PED::_0x89F5E7ADECCCB49C(uLocal_412[0], "agitated");
			__LIB_4__::func_239(uLocal_412[0]);
			__LIB_2__::func_190(uLocal_412[0], 300);
			__LIB_2__::func_463(uLocal_412[0], joaat("CONSUMABLE_CIGARETTE_BOX"), 1, 0);
			__LIB_2__::func_463(uLocal_412[0], joaat("CONSUMABLE_BRANDY"), 1, 0);
			break;
	}
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_412[0], true, true);
	PED::_SET_PED_ON_MOUNT(uLocal_412[0], uLocal_412[1], -1, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_412[0], 498, true);
	ENTITY::_SET_ENTITY_SOMETHING(uLocal_412[1], false);
	ENTITY::_SET_ENTITY_SOMETHING(uLocal_412[0], false);
	__LIB_3__::func_285(uLocal_412[0], &Local_15, 0);
	PED::_0x53BA7D96B9A421D9(Global_35, uLocal_412[0]);
	PED::_0x53BA7D96B9A421D9(Global_35, uLocal_412[1]);
	fVar0 = __LIB_3__::func_978(uLocal_412[1], Global_35, 1);
	ENTITY::SET_ENTITY_HEADING(uLocal_412[1], fVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar1);
	TASK::OPEN_SEQUENCE_TASK(&iVar1);
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &vVar2, 0, 3f, 0f))
	{
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vVar2, 5f, 1.25f, 8704, 0);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 1.25f, 8704, 0);
	TASK::CLOSE_SEQUENCE_TASK(iVar1);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_412[0], iVar1);
	TASK::CLEAR_SEQUENCE_TASK(&iVar1);
}

void func_51(struct<52> Param0, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, int iParam194, int iParam195)
{
	switch (Param0.f_51.f_4)
	{
		case 1:
		case 3:
			*iParam194 = 6;
			break;
		case 5:
			*iParam194 = 5;
			break;
		case 2:
		case 4:
			*iParam194 = 3;
			break;
		case 6:
			*iParam194 = 4;
			break;
		case 7:
			*iParam194 = 0;
			break;
		case 0:
		case 8:
		case 9:
			*iParam194 = 2;
			break;
		case 10:
			*iParam194 = 1;
			break;
	}
	func_154(*iParam194, iParam195);
}

void func_52()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vVar0 = { (Local_15.f_51 - 5f), (Local_15.f_51.f_1 - 5f), (Local_15.f_51.f_2 - 5f) };
	vVar3 = { (Local_15.f_51 + 5f), (Local_15.f_51.f_1 + 5f), (Local_15.f_51.f_2 + 5f) };
	vVar6 = { Local_15.f_51, Local_15.f_51.f_1, Local_15.f_51.f_2 };
	fLocal_792 = 20f;
	iLocal_791 = __LIB_4__::func_29(vVar0, vVar3, vVar6, fLocal_792, 0, 0);
}

void func_63()
{
	int iVar0;
	iVar0 = -1;
	if (iLocal_889 == 1)
	{
		iVar0 = func_193(&(uLocal_412[0]), &iLocal_428, fLocal_1005, &Local_449, &(Local_15.f_192), 0f, 1, 0, 0, iLocal_1079, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_867)
	{
		case 0:
			switch (iVar0)
			{
				case 0:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_412[0], 1);
					fLocal_1005 = 30f;
					__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
					__LIB_2__::func_451(&iLocal_428, 0);
					iLocal_1079 = __LIB_2__::func_340(3, 0, 0);
					bLocal_1034 = true;
					func_67(6);
					break;
				case 1:
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_412[0], 1);
					fLocal_1005 = 30f;
					__LIB_2__::func_451(&iLocal_428, 0);
					iLocal_1079 = __LIB_2__::func_340(3, 0, 0);
					func_67(5);
					break;
			}
			break;
		case 1:
			__LIB_2__::func_411(&(Local_449[1 /*17*/]), 1, 0);
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (func_195(5))
				{
					if (func_196())
					{
						__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
					}
					else if (iVar0 == 1)
					{
						__LIB_2__::func_303(Global_35, uLocal_412[0], Local_449[1 /*17*/].f_13, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_984++;
						__LIB_1__::func_148(&uLocal_900);
						iLocal_867 = 5;
					}
				}
				else if (iVar0 == 1)
				{
					__LIB_2__::func_303(Global_35, uLocal_412[0], Local_449[1 /*17*/].f_13, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_985++;
					__LIB_1__::func_148(&uLocal_900);
					iLocal_867 = 5;
				}
			}
			else
			{
				__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
			}
			break;
		case 2:
			switch (iLocal_868)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_868 = 1;
							break;
						case 1:
							iLocal_868 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(-4f, 1, Global_35, 1))
					{
						switch (iLocal_402)
						{
							case 1:
							case 2:
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(67), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							default:
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						iLocal_868 = 3;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(-4f, 1, Global_35, 1))
					{
						switch (iLocal_402)
						{
							case 2:
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(68), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							default:
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(68), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						__LIB_2__::func_451(&iLocal_428, 0);
						iLocal_1079 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
						iLocal_868 = 5;
					}
					break;
				case 3:
					if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
					{
						__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_449[1 /*17*/]), 1, 0);
						iLocal_868 = iLocal_868;
						iLocal_867 = 3;
					}
					break;
				case 5:
					break;
			}
			break;
		case 3:
			switch (iLocal_868)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							iLocal_868 = 2;
							break;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(-4f, 1, Global_35, 1))
					{
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(68), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
						iLocal_868 = 5;
					}
					break;
				case 5:
					break;
			}
			break;
		case 4:
			switch (iLocal_868)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_868 = 1;
							break;
						case 1:
							iLocal_868 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, uLocal_412[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_198(uLocal_412[0], Global_35, func_82(63), 0f, 0))
						{
							__LIB_2__::func_451(&iLocal_428, 0);
							iLocal_1079 = __LIB_2__::func_340(3, 0, 0);
							__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
							iLocal_868 = 5;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, uLocal_412[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						switch (iLocal_402)
						{
							case 1:
							case 2:
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(64), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							default:
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
						__LIB_2__::func_451(&iLocal_428, 0);
						iLocal_1079 = __LIB_2__::func_340(3, 0, 0);
						__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
						iLocal_868 = 5;
					}
					break;
				case 5:
					break;
			}
			break;
		case 5:
			__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_449[2 /*17*/]), 0, 0);
			break;
	}
}

void func_65()
{
	int iVar0;
	if (iLocal_992 >= 3)
	{
		if (__LIB_2__::func_1(uLocal_412[0], 0, 1))
		{
			if (PED::IS_PED_ON_MOUNT(uLocal_412[0]))
			{
				if (!func_199(uLocal_412[0]))
				{
					iVar0 = func_200();
					if (iVar0 != 9)
					{
						TASK::TASK_PLAY_ANIM(uLocal_412[0], Local_737[iVar0 /*2*/], Local_737[iVar0 /*2*/].f_1, 1.5f, -1.5f, -1, 16, 0f, false, 0, false, 0, false);
						if (func_201(iVar0))
						{
							TASK::TASK_PLAY_ANIM(uLocal_412[1], Local_737[func_202(iVar0) /*2*/], Local_737[func_202(iVar0) /*2*/].f_1, 1.5f, -1.5f, -1, 0, 0f, false, 0, false, "HORSE_HEAD_AND_NECK", false);
						}
					}
				}
			}
		}
	}
}

void func_66()
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_1010))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1010, 1.5f);
	}
}

void func_67(int iParam0)
{
	iLocal_1011 = iParam0;
}

void func_68()
{
	if (iLocal_1011 >= 7)
	{
		switch (Local_15.f_51.f_4)
		{
			case 5:
				switch (iLocal_874)
				{
					case 0:
						if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_796, vLocal_799, false, true, 0))
						{
							if (iLocal_1032 == 0)
							{
								iLocal_1032 = 1;
								VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_411, fLocal_789);
								VEHICLE::_0xDD100CE1EBBF37E3(iLocal_411, 1);
								iLocal_874 = 2;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_796, vLocal_799, false, true, 0))
						{
							if (iLocal_1032 == 0)
							{
								iLocal_1032 = 1;
								VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_411, fLocal_789);
								VEHICLE::_0xDD100CE1EBBF37E3(iLocal_411, 1);
								iLocal_874 = 2;
							}
						}
						break;
					case 2:
						if (ENTITY::IS_ENTITY_AT_COORD(Global_35, 476.58f, 1777.57f, 186.62f, 5f, 5f, 5f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_411, 413.02f, 1787.81f, 186.59f, 5f, 5f, 5f, false, true, 0))
						{
							VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_411, 20f);
						}
						if (ENTITY::IS_ENTITY_AT_COORD(Global_35, 476.58f, 1777.57f, 186.62f, 5f, 5f, 5f, false, true, 0))
						{
							iLocal_886 = 1;
						}
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_411, 413.02f, 1787.81f, 186.59f, 5f, 5f, 5f, false, true, 0))
						{
							VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_411, 0f);
							iLocal_874 = 1;
						}
						break;
					case 1:
						if (iLocal_886 == 1)
						{
							if (__LIB_0__::func_665(uLocal_412[0], iLocal_411, 1, 0) >= 70f && __LIB_0__::func_665(Global_35, iLocal_411, 1, 0) >= 70f)
							{
								VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_411, 5f);
								iLocal_874 = 3;
							}
						}
						break;
				}
				break;
			case 2:
				if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_796, vLocal_799, false, true, 0))
				{
					if (iLocal_1032 == 0)
					{
						iLocal_1032 = 1;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
						{
							VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_411, fLocal_789);
						}
					}
				}
				break;
			case 7:
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_796, vLocal_799, false, true, 0))
				{
					if (iLocal_1032 == 0)
					{
						iLocal_1032 = 1;
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_411))
						{
							VEHICLE::SET_TRAIN_CRUISE_SPEED(iLocal_411, fLocal_789);
						}
					}
				}
				break;
		}
		if (__LIB_2__::func_118(iLocal_411, 1, 0) <= 70f && iLocal_1024 == 0)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_411))
			{
				iLocal_1024 = 1;
				VEHICLE::_0xCFE122EC635CC2B2(iLocal_411, "DANGER", 0, 0);
			}
		}
	}
}

void func_69()
{
	PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(-1772.75f, 362.62f, 113.6f, 40f, 15f, 10f, -9f, false, 7);
	iLocal_1016 = func_42();
	iLocal_1017 = func_43();
	switch (Local_15.f_51.f_4)
	{
		case 2:
		case 5:
		case 7:
			AUDIO::START_AUDIO_SCENE("Horse_Race_Beat_Train_scene");
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_411, "Horse_Race_Train_group", 0f);
			break;
	}
	func_67(1);
}

void func_70()
{
	func_203();
	func_204();
	func_87();
	func_205();
	if (__LIB_0__::func_396(Global_35) || TASK::GET_IS_TASK_ACTIVE(Global_35, 8))
	{
		if ((__LIB_2__::func_1(uLocal_412[1], 0, 1) && __LIB_2__::func_1(uLocal_412[0], 0, 1)) && __LIB_2__::func_1(Global_35, 0, 1))
		{
			if (__LIB_3__::func_452(&Local_15, 1f, 100f, 60f, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0))
			{
				if (func_208())
				{
					if (!MAP::DOES_BLIP_EXIST(uLocal_419[0]))
					{
						__LIB_2__::func_73(uLocal_412[0], &(uLocal_419[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
					}
					func_67(2);
				}
			}
		}
	}
}

void func_71()
{
	func_204();
	func_203();
	func_87();
	func_210();
	func_211();
	func_212();
	__LIB_4__::func_162(&uLocal_1088, &uLocal_1080, uLocal_412[0], 0f, 0f, 0f, 0, -1, 2000, 1250, 1, 0, 1, 1106247680 /* Float: 30f */);
	if (__LIB_2__::func_1(Global_35, 0, 1))
	{
		func_214();
	}
}

void func_72()
{
	func_87();
	func_203();
	func_210();
	func_211();
	func_212();
	__LIB_4__::func_162(&uLocal_1088, &uLocal_1080, uLocal_412[0], 0f, 0f, 0f, 0, -1, 2000, 1250, 1, 0, 1, 1106247680 /* Float: 30f */);
	if (__LIB_2__::func_227(-3f, 1, uLocal_412[0], 1))
	{
		if (__LIB_0__::func_665(uLocal_412[0], Global_35, 1, 0) <= 12f)
		{
			if (iLocal_402 != 2 && iLocal_402 != 1)
			{
				if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1) && func_215())
				{
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_683(&iLocal_523, 2);
					__LIB_1__::func_148(&uLocal_975);
					func_67(4);
				}
			}
			else
			{
				__LIB_1__::func_683(&iLocal_523, 2);
				func_67(4);
			}
		}
		else
		{
			if (func_217())
			{
				__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1515458263, uLocal_412[0], 1);
				__LIB_1__::func_683(&iLocal_523, 4);
			}
			func_67(4);
		}
	}
}

void func_73()
{
	func_87();
	func_210();
	func_203();
	func_211();
	func_88();
	func_212();
	__LIB_4__::func_162(&uLocal_1088, &uLocal_1080, uLocal_412[0], 0f, 0f, 0f, 0, -1, 2000, 1250, 1, 0, 1, 1106247680 /* Float: 30f */);
	if (!__LIB_0__::func_27(iLocal_523, 4))
	{
		if (__LIB_0__::func_665(uLocal_412[0], Global_35, 1, 0) > 12f && func_217())
		{
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1515458263, uLocal_412[0], 1);
				__LIB_1__::func_683(&iLocal_523, 4);
			}
		}
	}
	if (!__LIB_0__::func_27(iLocal_523, 32))
	{
		if (((__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1) && func_215()) && func_220()) && (__LIB_0__::func_264(&uLocal_975) > 4.5f || iLocal_402 != 0))
		{
			__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_683(&iLocal_523, 32);
		}
	}
	else
	{
		if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
		{
			if (!__LIB_0__::func_75(&uLocal_891))
			{
				__LIB_1__::func_148(&uLocal_891);
				__LIB_1__::func_148(&uLocal_894);
				__LIB_2__::func_451(&iLocal_428, 0);
				iLocal_1079 = __LIB_2__::func_340(2, 0, 0);
				__LIB_3__::func_158(&(Local_449[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_449[1 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_449[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_449[1 /*17*/]), 1, 0);
				__LIB_2__::func_360(&(Local_449[0 /*17*/]), "BEAT_GRT_POS");
				__LIB_2__::func_360(&(Local_449[1 /*17*/]), "BEAT_GRT_NEG");
				iLocal_867 = 0;
			}
		}
		if (__LIB_0__::func_264(&uLocal_891) >= 7f)
		{
			func_225();
		}
	}
}

void func_74()
{
	func_87();
	func_210();
	func_203();
	if (__LIB_2__::func_227(0f, 1, uLocal_412[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
	{
		if (func_198(uLocal_412[0], Global_35, func_82(11), 0.5f, 1))
		{
			func_226();
			__LIB_2__::func_451(&iLocal_428, 0);
			iLocal_1079 = __LIB_2__::func_340(3, 0, 0);
			__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
			__LIB_2__::func_360(&(Local_449[0 /*17*/]), "RE_INTER_POS");
			__LIB_2__::func_360(&(Local_449[1 /*17*/]), "RE_INTER_ANTAGONIZE");
			Local_449[0 /*17*/].f_13 = func_82(61);
			Local_449[1 /*17*/].f_13 = func_82(62);
			iLocal_867 = 4;
			func_67(12);
		}
	}
}

void func_75()
{
	func_87();
	func_210();
	func_203();
	__LIB_1__::func_600(0);
	bLocal_784 = true;
	__LIB_0__::func_7(&Global_1935630, 4);
	fLocal_1002 = (__LIB_0__::func_94(PLAYER::PLAYER_PED_ID(), vLocal_501[iLocal_1018 /*3*/], 1) / 2f);
	func_67(7);
}

void func_76()
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_87();
	func_210();
	func_203();
	iVar0 = 0;
	switch (iLocal_990)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1) && __LIB_2__::func_227(-4f, 1, Global_35, 1))
			{
				if (__LIB_2__::func_118(uLocal_412[0], 1, 0) >= 12f)
				{
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_990++;
				}
				else
				{
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_990++;
				}
			}
			break;
		case 1:
			TASK::CLEAR_PED_TASKS(uLocal_412[1], true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(uLocal_412[0]);
			__LIB_1__::func_324("HORSE_RACE_OBJ");
			if (!MAP::DOES_BLIP_EXIST(iLocal_426))
			{
				iLocal_426 = MAP::_BLIP_ADD_FOR_COORD(408396114, vLocal_501[iLocal_1018 /*3*/]);
			}
			MAP::START_GPS_MULTI_ROUTE(joaat("COLOR_YELLOW"), true, false);
			TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_529[iLocal_1017], &iVar1);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1017], Global_36, &iVar2);
			MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE(sLocal_529[iLocal_1017], iVar2, iVar1, joaat("COLOR_YELLOW"), false, true);
			MAP::SET_GPS_MULTI_ROUTE_RENDER(true);
			func_230();
			__LIB_1__::func_148(&uLocal_906);
			AUDIO::TRIGGER_MUSIC_EVENT("REHR_START");
			iLocal_785 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, -1f, 30f, 20f, 0f, -1f, 180f, false, false, -1, -1);
			PED::_0x89F5E7ADECCCB49C(uLocal_412[1], "agitated");
			PED::_0x06D26A96CA1BCA75(uLocal_412[1], 3, 1f, 0);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0);
			TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_529[iLocal_1016], iVar0, &vLocal_1006);
			fLocal_1004 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vLocal_1006, true);
			func_231();
			AUDIO::START_AUDIO_SCENE("horse_race_scene");
			__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
			__LIB_3__::func_158(&(Local_449[0 /*17*/]), 0);
			__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
			__LIB_2__::func_360(&(Local_449[1 /*17*/]), "RE_INTER_ANTAGONIZE");
			__LIB_2__::func_360(&(Local_449[0 /*17*/]), "RE_INTER_POS");
			PED::SET_PED_RESET_FLAG(uLocal_412[1], 91, true);
			func_67(8);
			break;
	}
}

void func_77()
{
	func_196();
	func_87();
	func_232();
	func_233();
	func_234();
	func_235();
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_412[0]))
	{
		__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, 1000, 15);
		__LIB_3__::func_673(Global_35, uLocal_412[0], &uLocal_836, 1000, 15);
	}
	if (iLocal_984 > 0 || iLocal_985 > 0)
	{
		if (iLocal_402 == 1)
		{
			func_236();
		}
	}
	if (iLocal_402 == 0)
	{
		func_237();
		func_238();
	}
	else if (iLocal_402 == 2)
	{
		func_237();
	}
	if (iLocal_1018 == 3)
	{
		func_239();
	}
	if (!EVENT::IS_SHOCKING_EVENT_IN_SPHERE(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5f))
	{
		iLocal_785 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_SURPRISING"), Global_35, -1f, 40f, 20f, 0f, -1f, 180f, false, false, -1, -1);
	}
	if (iLocal_1028 == 0)
	{
		switch (iLocal_1001)
		{
			case 0:
				if (!__LIB_0__::func_394(uLocal_412[0], uLocal_412[1], 0) && !PED::IS_PED_RAGDOLL(uLocal_412[0]))
				{
					ENTITY::SET_ENTITY_PROOFS(uLocal_412[0], 0, false);
					PED::_0xAAB050DA48B57978(uLocal_412[0], "Default_Scared", 0, 15000, 4);
					TASK::TASK_MOUNT_ANIMAL(uLocal_412[0], uLocal_412[1], -1, -1, 2f, 1, 0, 0);
					iLocal_1001++;
				}
				break;
			case 1:
				if (__LIB_0__::func_394(uLocal_412[0], uLocal_412[1], 0))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_412[0], sLocal_529[iLocal_1016], 0, 67139080, -1, 0, 0, -1);
					iLocal_1001 = 0;
				}
				break;
		}
	}
	if (__LIB_0__::func_264(&uLocal_906) >= 10f && !ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_501[iLocal_1018 /*3*/], 85f, 85f, 100f, false, true, 0))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uLocal_412[0], true))
		{
			func_241();
			func_242();
		}
		func_88();
		if (iLocal_1019 == 0)
		{
			iLocal_1019 = 1;
			__LIB_1__::func_148(&uLocal_903);
			__LIB_1__::func_148(&uLocal_900);
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_501[iLocal_1018 /*3*/], 60f, 60f, 100f, false, true, 0))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 1.75f, 1, 0.4f, 0);
		}
	}
	else
	{
		switch (iLocal_402)
		{
			case 2:
				func_243(15f, 25f, 45f, 30, 5, 3, 1, 1);
				break;
			case 0:
				if (iLocal_1026 == 0)
				{
					func_243(1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 1108082688 /* Float: 35f */, 18, 4, 4, 1, 1);
				}
				else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 3f, 1, 0.4f, 0);
				}
				break;
			case 1:
				if (iLocal_1028 == 0)
				{
					func_243(20f, 20f, 30f, 5, 4, 3, 1, 0);
					if (iLocal_1019 == 1)
					{
						func_244();
					}
				}
				if (func_245())
				{
					if (iLocal_1028 == 0)
					{
						func_246();
					}
				}
				func_247();
				break;
		}
	}
	if (__LIB_1__::func_205(Global_35, iLocal_427, 1, 0))
	{
		Local_15.f_44 = 1;
		func_248(1);
		__LIB_0__::func_769();
		AUDIO::TRIGGER_MUSIC_EVENT("STOP_MUSIC_8S");
		AUDIO::STOP_AUDIO_SCENE("horse_race_scene");
		__LIB_0__::func_8(&Global_1935630, 4);
		if (MAP::DOES_BLIP_EXIST(iLocal_426))
		{
			MAP::REMOVE_BLIP(&iLocal_426);
		}
		MAP::CLEAR_GPS_CUSTOM_ROUTE();
		MAP::CLEAR_GPS_MULTI_ROUTE();
		__LIB_2__::func_451(&iLocal_428, 0);
		__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
		__LIB_2__::func_360(&(Local_449[0 /*17*/]), "RE_INTER_POS");
		__LIB_2__::func_360(&(Local_449[1 /*17*/]), "RE_INTER_ANTAGONIZE");
		iLocal_867 = 5;
		PED::_0x96C7B659854DE629(Global_35, uLocal_412[0]);
		PED::_0x96C7B659854DE629(Global_35, uLocal_412[1]);
	}
	else if (__LIB_1__::func_205(uLocal_412[0], iLocal_427, 1, 0))
	{
		Local_15.f_44 = 1;
		AUDIO::TRIGGER_MUSIC_EVENT("STOP_MUSIC_8S");
		AUDIO::STOP_AUDIO_SCENE("horse_race_scene");
		__LIB_0__::func_769();
		__LIB_3__::func_662("HORSE_RACE_LOST", 7500, 0, 0, -1, -1, 0);
		__LIB_2__::func_451(&iLocal_428, 0);
		__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
		__LIB_2__::func_360(&(Local_449[0 /*17*/]), "RE_INTER_POS");
		__LIB_2__::func_360(&(Local_449[1 /*17*/]), "RE_INTER_ANTAGONIZE");
		iLocal_867 = 5;
		PED::_0x96C7B659854DE629(Global_35, uLocal_412[0]);
		PED::_0x96C7B659854DE629(Global_35, uLocal_412[1]);
		func_67(10);
	}
}

void func_78()
{
	int iVar0;
	vector3 vVar1;
	iLocal_14 = 2;
	func_87();
	func_250();
	if (MAP::DOES_BLIP_EXIST(iLocal_426))
	{
		MAP::REMOVE_BLIP(&iLocal_426);
	}
	MAP::CLEAR_GPS_MULTI_ROUTE();
	MAP::CLEAR_GPS_MULTI_ROUTE();
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
	{
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 2.5f, 1, 0.4f, 0);
	}
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_529[iLocal_1016], &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_529[iLocal_1016], (iVar0 - 1), &vVar1);
	if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vVar1, 20f, 20f, 10f, false, true, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_412[1]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_412[1], 1.5f);
		}
	}
	switch (iLocal_873)
	{
		case 0:
			__LIB_3__::func_673(Global_35, uLocal_412[0], &uLocal_836, -1, 25);
			__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, -1, 25);
			if (__LIB_0__::func_94(uLocal_412[0], vVar1, 1) <= 5f)
			{
				TASK::TASK_STAND_STILL(uLocal_412[1], -1);
				TASK::TASK_STAND_STILL(uLocal_412[0], -1);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_403, sLocal_525[2], true);
				AITRANSPORT::_0xBA8818212633500A(uLocal_412[1], 0, 1);
				PHYSICS::_0xBDDA142759307528(uLocal_412[1]);
				PHYSICS::_0xBDDA142759307528(uLocal_412[0]);
				__LIB_1__::func_683(&iLocal_523, 8);
				__LIB_1__::func_148(&uLocal_960);
				iLocal_873 = 1;
			}
			break;
		case 1:
			__LIB_3__::func_673(Global_35, uLocal_412[0], &uLocal_836, 2000, 25);
			__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, 2000, 25);
			if (__LIB_0__::func_264(&uLocal_960) >= 5f || (ENTITY::GET_ENTITY_SPEED(uLocal_412[1]) <= 0.1f && TASK::IS_PED_STILL(uLocal_412[1])))
			{
				if (func_251())
				{
				}
				func_252();
				TASK::_0xDF94844D474F31E5(uLocal_412[1]);
				ANIMSCENE::START_ANIM_SCENE(Local_403);
				__LIB_1__::func_148(&uLocal_897);
				iLocal_873 = 2;
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_897) >= func_253(1))
			{
			}
			if (ANIMSCENE::_0x9AAE3C1148A09BCA(Local_403) || __LIB_0__::func_264(&uLocal_897) >= func_253(1))
			{
				if (iLocal_402 == 0)
				{
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				}
				switch (iLocal_786)
				{
					case 0:
						if (!__LIB_5__::func_778())
						{
							func_256(1);
							__LIB_0__::func_45("HORSE_RACE_SPRINT_HELP", 10000, 0, 0, 0, 1);
						}
						break;
					case 1:
						if (!__LIB_11__::func_879())
						{
							func_259(1);
							__LIB_0__::func_45("HORSE_RACE_SPEED_HELP", 10000, 0, 0, 0, 1);
						}
						break;
					case 2:
						break;
				}
				func_67(11);
				iLocal_873 = 3;
			}
			break;
	}
}

void func_79()
{
	int iVar0;
	vector3 vVar1;
	iLocal_14 = 1;
	__LIB_3__::func_673(Global_35, uLocal_412[0], &uLocal_836, 1000, 50);
	func_87();
	func_250();
	if (MAP::DOES_BLIP_EXIST(iLocal_426))
	{
		MAP::REMOVE_BLIP(&iLocal_426);
	}
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	MAP::CLEAR_GPS_MULTI_ROUTE();
	TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sLocal_529[iLocal_1016], &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_529[iLocal_1016], (iVar0 - 1), &vVar1);
	if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vVar1, 20f, 20f, 10f, false, true, 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_412[1]))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_412[1], 1.5f);
		}
	}
	switch (iLocal_873)
	{
		case 0:
			__LIB_3__::func_673(Global_35, uLocal_412[0], &uLocal_836, -1, 25);
			__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, -1, 25);
			if (__LIB_0__::func_94(uLocal_412[0], vVar1, 1) <= 5f)
			{
				TASK::TASK_STAND_STILL(uLocal_412[1], -1);
				TASK::TASK_STAND_STILL(uLocal_412[0], -1);
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_403, sLocal_525[1], true);
				AITRANSPORT::_0xBA8818212633500A(uLocal_412[1], 0, 1);
				PHYSICS::_0xBDDA142759307528(uLocal_412[0]);
				PHYSICS::_0xBDDA142759307528(uLocal_412[1]);
				__LIB_1__::func_683(&iLocal_523, 16);
				__LIB_1__::func_148(&uLocal_960);
				__LIB_1__::func_148(&uLocal_978);
				iLocal_873 = 1;
			}
			break;
		case 1:
			__LIB_3__::func_673(Global_35, uLocal_412[0], &uLocal_836, 2000, 25);
			__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, 2000, 25);
			if (__LIB_0__::func_264(&uLocal_960) >= 8f || (ENTITY::GET_ENTITY_SPEED(uLocal_412[1]) <= 0.1f && TASK::IS_PED_STILL(uLocal_412[1])))
			{
				if (__LIB_0__::func_264(&uLocal_978) > 2f)
				{
					if (func_251())
					{
					}
					func_252();
					TASK::_0xDF94844D474F31E5(uLocal_412[1]);
					ANIMSCENE::START_ANIM_SCENE(Local_403);
					__LIB_1__::func_148(&uLocal_897);
					iLocal_873 = 2;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_978);
			}
			break;
		case 2:
			if (__LIB_0__::func_264(&uLocal_897) >= func_253(0))
			{
				__LIB_2__::func_461(0);
				__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
				PHYSICS::_0xBDDA142759307528(uLocal_412[1]);
				PHYSICS::_0xBDDA142759307528(uLocal_412[0]);
				func_67(11);
				iLocal_873 = 3;
			}
			break;
	}
}

void func_80()
{
	func_87();
	switch (iLocal_869)
	{
		case 0:
			iLocal_869 = 1;
			break;
		case 1:
			func_260();
			func_261();
			if (fLocal_1003 >= 0.91f)
			{
				WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_412[0], true, true);
			}
			if (fLocal_1003 >= 0.99f)
			{
				AITRANSPORT::_0xBA8818212633500A(uLocal_412[1], 0, 0);
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_403, false))
			{
				__LIB_2__::func_451(&iLocal_428, 0);
				if (iLocal_888 == 0)
				{
					iLocal_1079 = __LIB_2__::func_340(3, 0, 0);
					__LIB_3__::func_158(&(Local_449[0 /*17*/]), 0);
					__LIB_3__::func_158(&(Local_449[1 /*17*/]), 0);
					__LIB_2__::func_411(&(Local_449[0 /*17*/]), 1, 0);
					__LIB_2__::func_411(&(Local_449[1 /*17*/]), 1, 0);
					Local_449[0 /*17*/].f_13 = func_82(65);
					Local_449[1 /*17*/].f_13 = func_82(66);
				}
				else
				{
					__LIB_2__::func_411(&(Local_449[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_449[1 /*17*/]), 0, 0);
				}
				iLocal_867 = 2;
				iLocal_869 = 2;
				PED::SET_PED_KEEP_TASK(uLocal_412[0], true);
				func_262();
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_412[1], false);
				__LIB_0__::func_8(&Global_1935630, 4);
				if (MAP::DOES_BLIP_EXIST(uLocal_419[0]))
				{
					MAP::REMOVE_BLIP(&(uLocal_419[0]));
				}
			}
			break;
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_412[0]))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_412[0], 1.5f);
			}
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 1.5f, 1, -1f, 0);
			}
			if (__LIB_2__::func_118(uLocal_412[0], 1, 0) <= 25f)
			{
				if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1) && __LIB_2__::func_227(-4f, 1, Global_35, 1))
				{
					if (func_198(uLocal_412[0], Global_35, func_82(69), 3f, 0))
					{
						func_67(12);
					}
				}
			}
			else
			{
				func_67(12);
			}
			break;
	}
}

void func_81()
{
	iLocal_1033 = 1;
	__LIB_0__::func_769();
	__LIB_0__::func_8(&Global_1935630, 4);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	MAP::CLEAR_GPS_MULTI_ROUTE();
	EVENT::REMOVE_SHOCKING_EVENT(iLocal_785);
	MAP::DISPLAY_RADAR(true);
	__LIB_1__::func_682(27);
	AUDIO::TRIGGER_MUSIC_EVENT("REHR_END");
	PED::_0x96C7B659854DE629(Global_35, uLocal_412[0]);
	PED::_0x96C7B659854DE629(Global_35, uLocal_412[1]);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_412[1], false);
	if (MAP::DOES_BLIP_EXIST(uLocal_419[0]))
	{
		MAP::REMOVE_BLIP(&(uLocal_419[0]));
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_426))
	{
		MAP::REMOVE_BLIP(&iLocal_426);
	}
	__LIB_2__::func_603(&(uLocal_412[0]), &iLocal_428, &Local_449, 1, 1);
	__LIB_2__::func_451(&iLocal_428, 0);
	iLocal_1079 = __LIB_2__::func_340(3, 0, 0);
	iLocal_889 = 0;
	if (__LIB_2__::func_1(uLocal_412[1], 0, 1))
	{
		AITRANSPORT::_0xBA8818212633500A(uLocal_412[1], 0, 0);
	}
	if (!func_264())
	{
		if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_403))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_403, false))
			{
				if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_412[0], Local_403))
				{
					ANIMSCENE::SET_ANIM_SCENE_RATE(Local_403, 1.6f);
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_412[0], 0);
				}
			}
		}
	}
	if ((func_264() || fLocal_1003 >= 0.98f) || !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(uLocal_412[0], Local_403))
	{
		if (!PED::IS_PED_DEAD_OR_DYING(uLocal_412[0], true))
		{
			if (iLocal_887 == 0)
			{
				if (!PED::IS_PED_RAGDOLL(uLocal_412[0]))
				{
					iLocal_887 = 1;
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			TASK::CLEAR_PED_TASKS(uLocal_412[0], true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(uLocal_412[0]);
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_403, "HORSE", uLocal_412[1]);
			if (func_265() == 0 && fLocal_1003 >= 0.98f)
			{
				if (!PED::IS_PED_ON_MOUNT(uLocal_412[0]))
				{
					PED::_SET_PED_ON_MOUNT(uLocal_412[0], uLocal_412[1], -1, true);
				}
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_1009);
			if (!__LIB_0__::func_394(uLocal_412[0], uLocal_412[1], 0))
			{
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_412[1], -1, -1, 2f, 1, 0, 0);
			}
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 3, 0, -1082130432 /* Float: -1f */, -1, uLocal_412[1]);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_1009);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_412[0], iLocal_1009);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
		}
		if (bLocal_1034)
		{
			if (iLocal_1035 == 0)
			{
				if (PED::IS_PED_DEAD_OR_DYING(uLocal_412[0], true))
				{
					__LIB_3__::func_465(3, 0, 0, 0, uLocal_412[0], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_1035 = 1;
				}
			}
		}
		func_67(14);
	}
}

char* func_82(int iParam0)
{
	switch (iLocal_402)
	{
		case 1:
			if (iLocal_786 == 0)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_A";
					case 1:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_B";
					case 2:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_C";
					case 3:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_A_RESP";
					case 4:
						return "RE_HR_UNI_V1_NOVICE_CALLOVER";
					case 40:
						return "RE_HR_UNI_V1_NOVICE_WAITING_A";
					case 41:
						return "RE_HR_UNI_V1_NOVICE_WAITING_B";
					default:
						break;
				}
			}
			else if (iLocal_786 == 1)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_WON_A";
					case 1:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_WON_B";
					case 2:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_WON_B";
					case 3:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_WON_A_RESP";
					case 4:
						return "RE_HR_UNI_V1_NOVICE_CALLOVER_WON";
					case 40:
						return "RE_HR_UNI_V1_NOVICE_WAITING_WON_A";
					case 41:
						return "RE_HR_UNI_V1_NOVICE_WAITING_WON_B";
					case 7:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_WIN_2ND_B_RESP";
					default:
						break;
				}
			}
			else if (iLocal_786 >= 2)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_LOST_A";
					case 1:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_LOST_B";
					case 2:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_LOST_B";
					case 3:
						return "RE_HR_UNI_V1_NOVICE_APPROACH_LOST_A_RESP";
					case 4:
						return "RE_HR_UNI_V1_NOVICE_CALLOVER";
					case 40:
						return "RE_HR_UNI_V1_NOVICE_WAITING_LOST_A";
					case 41:
						return "RE_HR_UNI_V1_NOVICE_WAITING_LOST_B";
					default:
						break;
				}
			}
			if (iLocal_786 == 0)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_WIN";
					case 6:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_LOSE";
					case 18:
						return "RE_HR_UNI_V1_NOVICE_PLYR_ACCEPT";
					case 19:
						return "RE_HR_UNI_V1_NOVICE_PLYR_DECLINE";
					default:
						break;
				}
			}
			else if (iLocal_786 == 1 || iLocal_786 >= 2)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_WIN_2ND";
					case 6:
						return "RE_HR_UNI_V1_NOVICE_GOAL_PLYR_LOSE_2ND";
					case 18:
						return "RE_HR_UNI_V1_NOVICE_PLYR_ACCEPT_2ND";
					case 19:
						return "RE_HR_UNI_V1_NOVICE_PLYR_DECLINE_2ND";
					default:
						break;
				}
			}
			switch (Local_15.f_51.f_4)
			{
				case 1:
				case 3:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V1_NOVICE_GOAL_C";
						case 9:
							return "RE_HR_UNI_V1_NOVICE_GOAL_B";
						default:
							break;
					}
					break;
				case 2:
				case 4:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V1_NOVICE_GOAL_A";
						case 9:
							return "RE_HR_UNI_V1_NOVICE_GOAL_D";
						default:
							break;
					}
					break;
			}
			if (iLocal_14 == 2)
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V1_NOVICE_ILO_END_WON_A";
					case 66:
						return "RE_HR_UNI_V1_NOVICE_ILO_END_WON_B";
					case 67:
						return "VICTIMIZED_REACT";
					case 68:
						return "GENERIC_INSULT_MED_MALE";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V1_NOVICE_ILO_END_LOST_A";
					case 66:
						return "RE_HR_UNI_V1_NOVICE_ILO_END_LOST_B";
					case 67:
						return "RESPONSE_C";
					case 68:
						return "RESPONSE_IDLING";
					default:
						break;
				}
			}
			switch (iParam0)
			{
				case 10:
					return "RE_HR_UNI_V1_NOVICE_LETS_GO";
				case 11:
					return "RE_HR_UNI_V1_NOVICE_OUTRO";
				case 12:
					return "RE_HR_UNI_V1_NOVICE_OUTRO_TIMEOUT";
				case 13:
					return "RE_HR_UNI_V1_NOVICE_AGGRO_A";
				case 14:
					return "CUT_THAT_OUT";
				case 15:
					return "DEFUSE_RESPONSE";
				case 16:
					return "RE_HR_UNI_V1_NOVICE_AGGRO_B";
				case 17:
					return "RE_HR_UNI_V1_NOVICE_AGGRO_C";
				case 42:
					return "RE_HR_UNI_V1_NOVICE_AGGRO_D";
				case 28:
					return "RE_HR_UNI_V1_NOVICE_PASS_A";
				case 29:
					return "RE_HR_UNI_V1_NOVICE_PASS_B";
				case 30:
					return "RE_HR_UNI_V1_NOVICE_PASS_C";
				case 31:
					return "RE_HR_UNI_V1_NOVICE_PASS_D";
				case 32:
					return "RE_HR_UNI_V1_NOVICE_PASS_E";
				case 33:
					return "RE_HR_UNI_V1_NOVICE_PASS_F";
				case 34:
					return "RE_HR_UNI_V1_NOVICE_PASS_G";
				case 35:
					return "RE_HR_UNI_V1_NOVICE_PLAYER_PASS_A";
				case 36:
					return "RE_HR_UNI_V1_NOVICE_PLAYER_PASS_B";
				case 37:
					return "RE_HR_UNI_V1_NOVICE_PLAYER_PASS_C";
				case 38:
					return "RE_HR_UNI_V1_NOVICE_PLAYER_PASS_D";
				case 39:
					return "RE_HR_UNI_V1_NOVICE_REACT_START";
				case 57:
					return "SHAME_ON_YOU";
				case 58:
					return "GENERIC_SHOCKED_MED";
				case 59:
					return "PLAYER_LOITERING";
				case 60:
					return "PLAYER_LOITERING";
				case 53:
					return "BLOCKED_GENERIC";
				case 54:
					return "PLAYER_ACTING_WEIRD";
				case 55:
					return "GENERIC_CURSE_HIGH";
				case 56:
					return "STOP_THAT";
				case 70:
					return "GENERIC_CURSE_MED";
				case 71:
					return "GENERIC_CURSE_HIGH";
				case 61:
					return "RE_HR_UNI_V1_NOVICE_ILO_REFUSE_A";
				case 62:
					return "RE_HR_UNI_V1_NOVICE_ILO_REFUSE_B";
				case 63:
					return "GENERIC_THANKS_RESPONSE";
				case 64:
					return "RESPONSE_GENERIC";
				case 65:
					return "RE_HR_UNI_V1_NOVICE_ILO_END_WON_A";
				case 66:
					return "RE_HR_UNI_V1_NOVICE_ILO_END_WON_B";
				case 67:
					return "VICTIMIZED_REACT";
				case 68:
					return "GENERIC_INSULT_MED_MALE";
				case 69:
					return "MINIGAME_LEAVE_NEUTRAL_GAME";
				case 72:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_A";
				case 73:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_B";
				case 74:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_C";
				case 75:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_D";
				case 76:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_E";
				case 77:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_F";
				case 78:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_G";
				case 79:
					return "RE_HR_UNI_V1_NOVICE_PLYR_BEHIND_H";
				case 80:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_A";
				case 81:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_B";
				case 82:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_C";
				case 83:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_D";
				case 84:
					return "RE_HR_UNI_V1_NOVICE_PLYR_CLOSE_E";
				case 85:
					return "RE_HR_UNI_V1_NOVICE_PLYR_WIN";
				case 86:
					return "RE_HR_UNI_V1_NOVICE_PLYR_LOSE";
				case 87:
					return "RE_HR_UNI_V1_NOVICE_PLYR_WIN_2ND";
				case 88:
					return "RE_HR_UNI_V1_NOVICE_PLYR_LOSE_2ND";
				default:
					break;
			}
			break;
		case 2:
			if (iLocal_786 == 0)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_A";
					case 1:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_B";
					case 2:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_C";
					case 3:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_A_RESP";
					case 4:
						return "RE_HR_UNI_V2_CONFIDENT_CALLOVER";
					case 40:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_A";
					case 41:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_B";
					default:
						break;
				}
			}
			else if (iLocal_786 == 1)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_WON_A";
					case 1:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_WON_B";
					case 2:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_WON_B";
					case 3:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_WON_A_RESP";
					case 4:
						return "RE_HR_UNI_V2_CONFIDENT_CALLOVER_WON";
					case 40:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_WON_A";
					case 41:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_WON_B";
					default:
						break;
				}
			}
			else if (iLocal_786 >= 2)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_LOST_A";
					case 1:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_LOST_B";
					case 2:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_LOST_B";
					case 3:
						return "RE_HR_UNI_V2_CONFIDENT_APPROACH_LOST_A_RESP";
					case 4:
						return "RE_HR_UNI_V2_CONFIDENT_CALLOVER";
					case 40:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_LOST_A";
					case 41:
						return "RE_HR_UNI_V2_CONFIDENT_WAITING_LOST_B";
					default:
						break;
				}
			}
			if (iLocal_786 == 0)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V2_CONFIDENT_GOAL_PLYR_WIN";
					case 6:
						return "RE_HR_UNI_V2_CONFIDENT_GOAL_PLYR_LOSE";
					case 18:
						return "RE_HR_UNI_V2_CONFIDENT_PLYR_ACCEPT";
					case 19:
						return "RE_HR_UNI_V2_CONFIDENT_PLYR_DECLINE";
					default:
						break;
				}
			}
			else if (iLocal_786 == 1 || iLocal_786 >= 2)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V2_CONFIDENT_GOAL_PLYR_WIN_2ND";
					case 6:
						return "RE_HR_UNI_V2_CONFIDENT_GOAL_PLYR_LOSE_2ND";
					case 18:
						return "RE_HR_UNI_V2_CONFIDENT_PLYR_ACCEPT_2ND";
					case 19:
						return "RE_HR_UNI_V2_CONFIDENT_PLYR_DECLINE_2ND";
					default:
						break;
				}
			}
			switch (Local_15.f_51.f_4)
			{
				case 0:
				case 8:
				case 9:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V2_CONFIDENT_GOAL_A_ALT";
						case 9:
							return "RE_HR_UNI_V2_CONFIDENT_GOAL_C";
						default:
							break;
					}
					break;
				case 10:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V2_CONFIDENT_GOAL_B";
						case 9:
							return "RE_HR_UNI_V2_CONFIDENT_GOAL_D";
						default:
							break;
					}
					break;
			}
			if (iLocal_14 == 2)
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_A";
					case 66:
						return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_B";
					case 67:
						return "RESPONSE_A";
					case 68:
						return "GENERIC_CURSE_MED";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V2_CONFIDENT_ILO_END_LOST_A";
					case 66:
						return "RE_HR_UNI_V2_CONFIDENT_ILO_END_LOST_B";
					case 67:
						return "RESPONSE_C";
					case 68:
						return "RESPONSE_E";
					default:
						break;
				}
			}
			switch (iParam0)
			{
				case 10:
					return "RE_HR_UNI_V2_CONFIDENT_LETS_GO";
				case 11:
					return "RE_HR_UNI_V2_CONFIDENT_OUTRO";
				case 12:
					return "RE_HR_UNI_V2_CONFIDENT_OUTRO_TIMEOUT";
				case 13:
					return "RE_HR_UNI_V2_CONFIDENT_AGGRO_B";
				case 14:
					return "PLAYER_WEAPON_EQUIPPED";
				case 16:
					return "RE_HR_UNI_V2_CONFIDENT_AGGRO_A";
				case 17:
					return "RE_HR_UNI_V2_CONFIDENT_AGGRO_C";
				case 42:
					return "RE_HR_UNI_V2_CONFIDENT_AGGRO_D";
				case 28:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_A";
				case 29:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_B";
				case 30:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_C";
				case 31:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_D";
				case 32:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_E";
				case 33:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_F";
				case 34:
					return "RE_HR_UNI_V2_CONFIDENT_PASS_G";
				case 35:
					return "RE_HR_UNI_V2_CONFIDENT_PLAYER_PASS_A";
				case 36:
					return "RE_HR_UNI_V2_CONFIDENT_PLAYER_PASS_B";
				case 37:
					return "RE_HR_UNI_V2_CONFIDENT_PLAYER_PASS_C";
				case 38:
					return "RE_HR_UNI_V2_CONFIDENT_PLAYER_PASS_D";
				case 39:
					return "RE_HR_UNI_V2_CONFIDENT_REACT_START";
				case 57:
					return "STOP_THAT";
				case 58:
					return "CUT_THAT_OUT";
				case 59:
					return "SHAME_ON_YOU";
				case 60:
					return "PLAYER_LOITERING";
				case 53:
					return "BLOCKED_GENERIC";
				case 54:
					return "GENERIC_CURSE_MED";
				case 55:
					return "GENERIC_CURSE_HIGH";
				case 56:
					return "INSULT_RESPONSE";
				case 70:
					return "GENERIC_CURSE_MED";
				case 71:
					return "GENERIC_CURSE_HIGH";
				case 61:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_REFUSE_A";
				case 62:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_REFUSE_B";
				case 63:
					return "GENERIC_THANKS_RESPONSE";
				case 64:
					return "RESPONSE_GENERIC";
				case 65:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_A";
				case 66:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_B";
				case 67:
					return "RE_HR_UNI_V2_CONFIDENT_ILO_END_WON_C";
				case 68:
					return "GENERIC_CURSE_MED";
				case 69:
					return "GENERIC_GOODBYE";
				case 72:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_A";
				case 73:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_B";
				case 74:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_C";
				case 75:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_D";
				case 76:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_E";
				case 77:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_F";
				case 78:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_G";
				case 79:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_BEHIND_H";
				case 80:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_A";
				case 81:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_B";
				case 82:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_C";
				case 83:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_D";
				case 84:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_CLOSE_E";
				case 85:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_WIN";
				case 86:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_LOSE";
				case 87:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_WIN_2ND";
				case 88:
					return "RE_HR_UNI_V2_CONFIDENT_PLYR_LOSE_2ND";
				default:
					break;
			}
			break;
		case 0:
			if (iLocal_786 == 0)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_A";
					case 1:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_B";
					case 2:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_C";
					case 3:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_A_RESP";
					case 4:
						return "RE_HR_UNI_V3_WEIRD_CALLOVER";
					case 40:
						return "RE_HR_UNI_V3_WEIRD_WAITING_A";
					case 41:
						return "RE_HR_UNI_V3_WEIRD_WAITING_B";
					default:
						break;
				}
			}
			else if (iLocal_786 == 1)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_WON_A";
					case 1:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_WON_B";
					case 2:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_WON_C";
					case 3:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_WON_A_RESP";
					case 4:
						return "RE_HR_UNI_V3_WEIRD_CALLOVER_WON";
					case 40:
						return "RE_HR_UNI_V3_WEIRD_WAITING_WON_A";
					case 41:
						return "RE_HR_UNI_V3_WEIRD_WAITING_WON_B";
					default:
						break;
				}
			}
			else if (iLocal_786 >= 2)
			{
				switch (iParam0)
				{
					case 0:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_LOST_A";
					case 1:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_LOST_B";
					case 2:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_LOST_C";
					case 3:
						return "RE_HR_UNI_V3_WEIRD_APPROACH_LOST_A_RESP";
					case 4:
						return "RE_HR_UNI_V3_WEIRD_CALLOVER_LOST";
					case 40:
						return "RE_HR_UNI_V3_WEIRD_WAITING_LOST_A";
					case 41:
						return "RE_HR_UNI_V3_WEIRD_WAITING_LOST_B";
					default:
						break;
				}
			}
			if (iLocal_786 == 0)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V3_WEIRD_GOAL_PLYR_WIN";
					case 6:
						return "RE_HR_UNI_V3_WEIRD_GOAL_PLYR_LOSE";
					case 18:
						return "RE_HR_UNI_V3_WEIRD_PLYR_ACCEPT";
					case 19:
						return "RE_HR_UNI_V3_WEIRD_PLYR_DECLINE";
					default:
						break;
				}
			}
			else if (iLocal_786 == 1 || iLocal_786 >= 2)
			{
				switch (iParam0)
				{
					case 5:
						return "RE_HR_UNI_V3_WEIRD_GOAL_PLYR_WIN_2ND";
					case 6:
						return "RE_HR_UNI_V3_WEIRD_GOAL_PLYR_LOSE_2ND";
					case 18:
						return "RE_HR_UNI_V3_WEIRD_PLYR_ACCEPT_2ND";
					case 19:
						return "RE_HR_UNI_V3_WEIRD_PLYR_DECLINE_2ND";
					default:
						break;
				}
			}
			switch (Local_15.f_51.f_4)
			{
				case 5:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V3_WEIRD_GOAL_E";
						case 9:
							return "RE_HR_UNI_V3_WEIRD_GOAL_F";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V3_WEIRD_GOAL_A";
						case 9:
							return "RE_HR_UNI_V3_WEIRD_GOAL_B";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 8:
							return "RE_HR_UNI_V3_WEIRD_GOAL_C";
						case 9:
							return "RE_HR_UNI_V3_WEIRD_GOAL_D";
						default:
							break;
					}
					break;
			}
			switch (Local_15.f_51.f_4)
			{
				case 5:
					switch (iParam0)
					{
						case 43:
							return "";
						case 44:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_B";
						case 45:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_C";
						case 46:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_D";
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 47:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_E";
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 48:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_F";
						case 49:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_G";
						case 50:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_H";
						case 51:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_I";
						case 52:
							return "RE_HR_UNI_V3_WEIRD_CUSTOM_J";
						default:
							break;
					}
					break;
			}
			if (iLocal_14 == 2)
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_A";
					case 66:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_B";
					case 67:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_C";
					case 68:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_D";
					default:
						break;
				}
			}
			else
			{
				switch (iParam0)
				{
					case 65:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_LOST_A";
					case 66:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_LOST_B";
					case 67:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_LOST_C";
					case 68:
						return "RE_HR_UNI_V3_WEIRD_ILO_END_LOST_D";
					default:
						break;
				}
			}
			switch (iParam0)
			{
				case 10:
					return "RE_HR_UNI_V3_WEIRD_LETS_GO";
				case 11:
					return "RE_HR_UNI_V3_WEIRD_OUTRO";
				case 12:
					return "RE_HR_UNI_V3_WEIRD_OUTRO_TIMEOUT";
				case 13:
					return "RE_HR_UNI_V3_WEIRD_AGGRO_A";
				case 14:
					return "GUN_AVOID";
				case 16:
					return "RE_HR_UNI_V3_WEIRD_AGGRO_B";
				case 17:
					return "RE_HR_UNI_V3_WEIRD_AGGRO_C";
				case 42:
					return "RE_HR_UNI_V3_WEIRD_AGGRO_D";
				case 28:
					return "RE_HR_UNI_V3_WEIRD_PASS_A";
				case 29:
					return "RE_HR_UNI_V3_WEIRD_PASS_B";
				case 30:
					return "RE_HR_UNI_V3_WEIRD_PASS_C";
				case 31:
					return "RE_HR_UNI_V3_WEIRD_PASS_D";
				case 32:
					return "RE_HR_UNI_V3_WEIRD_PASS_E";
				case 33:
					return "RE_HR_UNI_V3_WEIRD_PASS_F";
				case 34:
					return "RE_HR_UNI_V3_WEIRD_PASS_G";
				case 35:
					return "RE_HR_UNI_V3_WEIRD_PLAYER_PASS_A";
				case 36:
					return "RE_HR_UNI_V3_WEIRD_PLAYER_PASS_B";
				case 37:
					return "RE_HR_UNI_V3_WEIRD_PLAYER_PASS_C";
				case 38:
					return "RE_HR_UNI_V3_WEIRD_PLAYER_PASS_D";
				case 39:
					return "RE_HR_UNI_V3_WEIRD_REACT_START";
				case 57:
					return "RE_HR_UNI_V3_WEIRD_BUMP_A";
				case 58:
					return "RE_HR_UNI_V3_WEIRD_BUMP_B";
				case 59:
					return "RE_HR_UNI_V3_WEIRD_BUMP_C";
				case 60:
					return "RE_HR_UNI_V3_WEIRD_BUMP_D";
				case 53:
					return "RE_HR_UNI_V3_WEIRD_BLOCK_A";
				case 54:
					return "RE_HR_UNI_V3_WEIRD_BLOCK_B";
				case 55:
					return "RE_HR_UNI_V3_WEIRD_BLOCK_C";
				case 56:
					return "RE_HR_UNI_V3_WEIRD_BLOCK_D";
				case 70:
					return "";
				case 71:
					return "";
				case 61:
					return "RE_HR_UNI_V3_WEIRD_ILO_REFUSE_A";
				case 62:
					return "RE_HR_UNI_V3_WEIRD_ILO_REFUSE_B";
				case 63:
					return "RE_HR_UNI_V3_WEIRD_ILO_REFUSE_C";
				case 64:
					return "RE_HR_UNI_V3_WEIRD_ILO_REFUSE_D";
				case 65:
					return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_A";
				case 66:
					return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_B";
				case 67:
					return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_C";
				case 68:
					return "RE_HR_UNI_V3_WEIRD_ILO_END_WON_D";
				case 69:
					return "GENERIC_GOODBYE";
				case 72:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_A";
				case 73:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_B";
				case 74:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_C";
				case 75:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_D";
				case 76:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_E";
				case 77:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_F";
				case 78:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_G";
				case 79:
					return "RE_HR_UNI_V3_WEIRD_PLYR_BEHIND_H";
				case 80:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_A";
				case 81:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_B";
				case 82:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_C";
				case 83:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_D";
				case 84:
					return "RE_HR_UNI_V3_WEIRD_PLYR_CLOSE_E";
				case 85:
					return "RE_HR_UNI_V3_WEIRD_PLYR_WIN";
				case 86:
					return "RE_HR_UNI_V3_WEIRD_PLYR_LOSE";
				case 87:
					return "RE_HR_UNI_V3_WEIRD_PLYR_WIN_2ND";
				case 88:
					return "RE_HR_UNI_V3_WEIRD_PLYR_LOSE_2ND";
				default:
					break;
			}
			break;
	}
	return "No dialogue line";
}

void func_87()
{
	int iVar0;
	if (iLocal_1011 < 7)
	{
		if (__LIB_3__::func_453(uLocal_412[0], 0, &(Local_15.f_5), &iLocal_1015, 0, 0))
		{
			if (iLocal_1015 == 8)
			{
				if (iLocal_1029 == 0)
				{
					iLocal_1029 = 1;
					if (__LIB_0__::func_27(iLocal_523, 32))
					{
						iVar0 = 13;
					}
					else
					{
						iVar0 = 14;
					}
					__LIB_2__::func_461(0);
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_412[0]);
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(iVar0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1020 = 1;
					__LIB_1__::func_148(&uLocal_909);
				}
			}
			else
			{
				func_67(13);
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_412[1], Global_35, 1, 1))
		{
			func_67(13);
		}
	}
	if (((PED::_IS_PED_LASSOED(uLocal_412[0]) || PED::_IS_PED_HOGTIED(uLocal_412[0])) || PED::_IS_PED_LASSOED(uLocal_412[1])) || PED::_IS_PED_HOGTIED(uLocal_412[1]))
	{
		func_67(13);
	}
	if (iLocal_1011 >= 7 || iLocal_1020 == 1)
	{
		if (!func_234())
		{
			if (!Local_15.f_46)
			{
				if (__LIB_0__::func_75(&uLocal_909))
				{
					if (__LIB_0__::func_264(&uLocal_909) >= 3f || iLocal_1015 != 8)
					{
						if (__LIB_3__::func_453(uLocal_412[0], 0, &(Local_15.f_5), &iLocal_1015, 0, 0))
						{
							Local_15.f_46 = 1;
							if (iLocal_1015 == 2048 || iLocal_1015 == 2)
							{
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							func_67(13);
						}
						if (iLocal_1036 == 0)
						{
							__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(15), 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_1036 = 1;
						}
					}
				}
				else if (__LIB_3__::func_453(uLocal_412[0], 0, &(Local_15.f_5), &iLocal_1015, 0, 0))
				{
					if (iLocal_1015 == 2048 || iLocal_1015 == 2)
					{
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					Local_15.f_46 = 1;
					func_67(13);
				}
			}
		}
	}
}

void func_88()
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_412[0]) || ENTITY::IS_ENTITY_DEAD(uLocal_412[1]))
	{
		return;
	}
	if (iLocal_1025 == 0 && iLocal_1011 == 8)
	{
		if ((PED::_0x947E43F544B6AB34(uLocal_412[0], PLAYER::PLAYER_ID(), 1, 800) || PED::_0x947E43F544B6AB34(uLocal_412[1], PLAYER::PLAYER_ID(), 1, 800)) && __LIB_2__::func_118(uLocal_412[0], 1, 0) <= 2f)
		{
			if (!__LIB_0__::func_75(&uLocal_939) && (__LIB_0__::func_264(&uLocal_942) >= 3f || !__LIB_0__::func_75(&uLocal_942)))
			{
				__LIB_0__::func_37(&uLocal_939);
				__LIB_1__::func_148(&uLocal_942);
				func_277();
			}
		}
	}
	if (PED::_0x947E43F544B6AB34(uLocal_412[0], PLAYER::PLAYER_ID(), 10, 800) || PED::_0x947E43F544B6AB34(uLocal_412[1], PLAYER::PLAYER_ID(), 10, 800))
	{
		if (!__LIB_0__::func_75(&uLocal_936) && (__LIB_0__::func_264(&uLocal_933) >= 3f || !__LIB_0__::func_75(&uLocal_933)))
		{
			__LIB_0__::func_37(&uLocal_936);
			__LIB_1__::func_148(&uLocal_933);
			func_278();
		}
	}
}

void func_154(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 3:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX(vLocal_501[3 /*3*/], 0f, 0f, 47f, 26f, 12f, 13f);
			break;
		case 4:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX(vLocal_501[4 /*3*/], 0f, 0f, 20f, 36f, 13f, 6f);
			break;
		case 0:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX(vLocal_501[0 /*3*/], 0f, 0f, -35f, 20.75f, 10.25f, 13.5f);
			break;
		case 2:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX(vLocal_501[2 /*3*/], 0f, 0f, 0f, 18f, 18f, 10f);
			break;
		case 1:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX(vLocal_501[1 /*3*/], 0f, 0f, 0f, 18f, 18f, 10f);
			break;
		case 5:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX(vLocal_501[5 /*3*/], 0f, 0f, 0f, 18f, 18f, 5f);
			break;
		case 6:
			*iParam1 = VOLUME::_CREATE_VOLUME_BOX(vLocal_501[6 /*3*/], 0f, 0f, 0f, 18f, 18f, 5f);
			break;
	}
}

int func_193(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_394(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

bool func_195(int iParam0)
{
	if (MISC::ABSI((iLocal_999 - iLocal_998)) > iParam0)
	{
		return true;
	}
	return false;
}

bool func_196()
{
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
	{
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iLocal_998);
		TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(uLocal_412[0], true, false), &iLocal_999);
		if (iLocal_998 >= iLocal_999)
		{
			return true;
		}
	}
	return false;
}

bool func_198(int iParam0, int iParam1, char* sParam2, float fParam3, bool bParam4)
{
	if (!__LIB_0__::func_75(&uLocal_924))
	{
		__LIB_1__::func_148(&uLocal_924);
	}
	else if (__LIB_0__::func_264(&uLocal_924) > fParam3)
	{
		__LIB_2__::func_461(0);
		if (bParam4)
		{
			__LIB_2__::func_303(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_303(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		__LIB_0__::func_37(&uLocal_924);
		return true;
	}
	return false;
}

bool func_199(int iParam0)
{
	if (iLocal_402 == 1)
	{
		if ((((((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[0 /*2*/], Local_737[0 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[1 /*2*/], Local_737[1 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[2 /*2*/], Local_737[2 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[3 /*2*/], Local_737[3 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[4 /*2*/], Local_737[4 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[5 /*2*/], Local_737[5 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[6 /*2*/], Local_737[6 /*2*/].f_1, 1))
		{
			return true;
		}
	}
	else if (iLocal_402 == 0)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[7 /*2*/], Local_737[7 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[8 /*2*/], Local_737[8 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[9 /*2*/], Local_737[9 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[10 /*2*/], Local_737[10 /*2*/].f_1, 1))
		{
			return true;
		}
	}
	else if (iLocal_402 == 2)
	{
		if (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[14 /*2*/], Local_737[14 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[15 /*2*/], Local_737[15 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[16 /*2*/], Local_737[16 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, Local_737[17 /*2*/], Local_737[17 /*2*/].f_1, 1))
		{
			return true;
		}
	}
	return false;
}

int func_200()
{
	int iVar0;
	if (iLocal_402 == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
	}
	else if (iLocal_402 == 0)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(7, 11);
	}
	else if (iLocal_402 == 2)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(14, 18);
	}
	return iVar0;
}

bool func_201(int iParam0)
{
	if ((iParam0 == 8 || iParam0 == 9) || iParam0 == 10)
	{
		return true;
	}
	return false;
}

int func_202(int iParam0)
{
	if (iParam0 == 8)
	{
		return 11;
	}
	else if (iParam0 == 9)
	{
		return 12;
	}
	else if (iParam0 == 10)
	{
		return 13;
	}
	return 8;
}

void func_203()
{
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_35) || AUDIO::IS_SCRIPTED_SPEECH_PLAYING(uLocal_412[0]))
	{
		__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, 1000, 15);
		__LIB_3__::func_673(Global_35, uLocal_412[0], &uLocal_836, 1000, 15);
	}
	else
	{
		__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, -1, 15);
	}
}

void func_204()
{
	if ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_412[0], Global_35, 17) || PED::IS_PED_FACING_PED(uLocal_412[0], Global_35, 100f)) || __LIB_2__::func_118(uLocal_412[0], 1, 1) <= 10f)
	{
		__LIB_2__::func_634(&(Local_15.f_5), 1);
		__LIB_2__::func_105(&(Local_15.f_5), 1);
	}
}

void func_205()
{
	int iVar0;
	vector3 vVar1;
	iVar0 = 0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(uLocal_412[0], true, false), &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_529[iLocal_1016], iVar0, &vVar1);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_412[0], true, false), vVar1, true) >= 145f)
	{
		func_67(15);
	}
}

bool func_208()
{
	switch (iLocal_863)
	{
		case 0:
			if (__LIB_2__::func_118(uLocal_412[0], 1, 0) <= __LIB_3__::func_976())
			{
				__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, -1, 50);
				iLocal_863 = 1;
			}
			break;
		case 1:
			__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, -1, 50);
			if (PED::IS_PED_FACING_PED(uLocal_412[0], Global_35, 100f))
			{
				iLocal_1021 = 1;
			}
			if (__LIB_2__::func_118(uLocal_412[0], 1, 0) <= 12f && PED::IS_PED_HEADTRACKING_PED(uLocal_412[0], Global_35))
			{
				iLocal_1021 = 1;
			}
			if (iLocal_1021 == 1)
			{
				if (!__LIB_0__::func_163(uLocal_412[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
				{
					__LIB_4__::func_76(uLocal_412[0], Global_35, &uLocal_1039, 3f, 0, 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1, 8, 0, 0, 3f, 4f, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
				}
				if (!__LIB_0__::func_75(&uLocal_915))
				{
					__LIB_1__::func_148(&uLocal_915);
				}
				else if (__LIB_0__::func_264(&uLocal_915) >= 1f)
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_210()
{
	if (__LIB_2__::func_1(uLocal_412[0], 0, 1))
	{
		if (__LIB_0__::func_665(uLocal_412[0], Global_35, 1, 0) < 6f || !func_404())
		{
			if (!__LIB_0__::func_163(uLocal_412[0], -875674219))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_412[0], Global_35, -1, -1f, -1f, -1f);
			}
		}
		else
		{
			if (!__LIB_0__::func_163(uLocal_412[0], joaat("SCRIPT_TASK_FOLLOW_AND_CONVERSE_WITH_PED")))
			{
				__LIB_4__::func_76(uLocal_412[0], Global_35, &uLocal_1039, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, 3f, 1, 512, 0, 0, 3f, 4f, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			}
			__LIB_2__::func_966(uLocal_412[0], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
		}
	}
}

int func_211()
{
	if (__LIB_0__::func_27(iLocal_523, 4))
	{
		if (!__LIB_0__::func_75(&uLocal_963))
		{
			__LIB_1__::func_148(&uLocal_963);
		}
	}
	if (__LIB_0__::func_264(&uLocal_963) < 8f)
	{
		return 0;
	}
	if ((__LIB_2__::func_118(uLocal_412[0], 1, 0) >= 30f && __LIB_0__::func_27(iLocal_523, 1)) && !PED::IS_PED_FACING_PED(Global_35, uLocal_412[0], 80f))
	{
		func_67(5);
		return 1;
	}
	return 0;
}

void func_212()
{
	if (!__LIB_0__::func_75(&uLocal_969) && __LIB_0__::func_27(iLocal_523, 1))
	{
		__LIB_1__::func_148(&uLocal_969);
	}
	if (__LIB_0__::func_264(&uLocal_969) >= 1f && __LIB_0__::func_264(&uLocal_969) <= 6f)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) && !ENTITY::IS_ENTITY_DEAD(iLocal_1010))
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_1010, 1.5f);
		}
	}
}

void func_214()
{
	switch (iLocal_992)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_412[0], 1);
				__LIB_1__::func_683(&iLocal_523, 1);
				__LIB_1__::func_148(&uLocal_975);
				iLocal_992 = 2;
			}
			break;
		case 1:
			break;
		case 2:
			if (((__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1) && __LIB_2__::func_227(-4f, 1, Global_35, 1)) && func_215()) && (__LIB_0__::func_264(&uLocal_975) > 3.5f || iLocal_402 != 0))
			{
				iLocal_1033 = 1;
				__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_412[0], 1);
				iLocal_992++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
			{
				func_67(3);
				iLocal_992++;
			}
			break;
	}
}

bool func_215()
{
	float fVar0;
	if (iLocal_402 == 0)
	{
		fVar0 = 5.5f;
	}
	else if (iLocal_402 == 2)
	{
		fVar0 = 4f;
	}
	else if (iLocal_402 == 1)
	{
		fVar0 = 4f;
	}
	if (!__LIB_0__::func_75(&uLocal_909))
	{
		return true;
	}
	if (__LIB_0__::func_75(&uLocal_909))
	{
		if (__LIB_0__::func_264(&uLocal_909) >= fVar0)
		{
			return true;
		}
	}
	return false;
}

bool func_217()
{
	var uVar0;
	float fVar1;
	if (!PED::IS_PED_ON_MOUNT(Global_35))
	{
		PED::_0xF60165E1D2C5370B(Global_35, &uVar0, &fVar1);
	}
	else
	{
		PED::_0xF60165E1D2C5370B(PED::GET_MOUNT(Global_35), &uVar0, &fVar1);
	}
	if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_412[0], 80f) && fVar1 >= 1f)
	{
		return true;
	}
	return false;
}

bool func_220()
{
	if (__LIB_2__::func_118(uLocal_412[0], 1, 1) <= 15f)
	{
		return true;
	}
	if (!__LIB_0__::func_75(&uLocal_972))
	{
		__LIB_1__::func_148(&uLocal_972);
	}
	else if (__LIB_0__::func_264(&uLocal_972) >= 5f)
	{
		return true;
	}
	return false;
}

void func_225()
{
	switch (iLocal_991)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
			{
				__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_991++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
			{
				if (!__LIB_0__::func_75(&uLocal_966))
				{
					__LIB_1__::func_148(&uLocal_966);
				}
			}
			if (__LIB_0__::func_264(&uLocal_966) >= 2f)
			{
				__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_0__::func_37(&uLocal_966);
				iLocal_991++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
			{
				if (!__LIB_0__::func_75(&uLocal_966))
				{
					__LIB_1__::func_148(&uLocal_966);
				}
			}
			if (__LIB_0__::func_264(&uLocal_966) >= 3f)
			{
				iLocal_991++;
				func_67(5);
			}
			break;
	}
}

void func_226()
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1009);
	if (!PED::IS_PED_ON_MOUNT(uLocal_412[0]))
	{
		TASK::TASK_MOUNT_ANIMAL(0, uLocal_412[1], -1, -1, 1f, 1, 0, 0);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 0.8f, 1552, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1009);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_412[0], iLocal_1009);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
}

void func_230()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(uLocal_412[0], true, false), &iVar6);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_529[iLocal_1016], iVar6, &vVar0);
	PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3f, 0f);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1009);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, ENTITY::GET_ENTITY_COORDS(uLocal_412[0], true, false), true) > 10f)
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar3, 2f, -1, 0.25f, 1048576, 40000f);
	}
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_529[iLocal_1016], 0, 67139080, -1, 0, 0, -1);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1009);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_412[0], iLocal_1009);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
}

void func_231()
{
	switch (iLocal_402)
	{
		case 0:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "weird_win_01");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "weird_loss_01");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "weird_win_02");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "weird_loss_02");
			break;
		case 2:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "confident_loss_01");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "confident_win_01");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "confident_loss_02");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "confident_win_02");
			break;
		case 1:
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "PBL_LOSS_01");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "PBL_LOSS_02");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "PBL_WIN_01");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_403, "PBL_WIN_02");
			break;
	}
}

void func_232()
{
	int iVar0;
	iVar0 = 0;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0);
	TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_529[iLocal_1016], iVar0, &vLocal_1006);
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), vLocal_1006, true) >= (fLocal_1004 + 100f) && !PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, vLocal_501[iLocal_1018 /*3*/], 80f))
	{
		__LIB_3__::func_662("HORSE_RACE_DISTANCE_FAIL", 7500, 0, 0, -1, -1, 0);
		func_67(15);
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1010))
	{
		__LIB_3__::func_662("HORSE_RACE_HORSE1_DEAD_FAIL", 7500, 0, 0, -1, -1, 0);
		func_67(15);
	}
	if (ENTITY::IS_ENTITY_DEAD(uLocal_412[1]))
	{
		__LIB_3__::func_662("HORSE_RACE_HORSE2_DEAD_FAIL", 7500, 0, 0, -1, -1, 0);
		func_67(15);
	}
	if (!__LIB_0__::func_75(&uLocal_918))
	{
		__LIB_1__::func_148(&uLocal_918);
	}
	else if (__LIB_0__::func_264(&uLocal_918) >= fLocal_790)
	{
		__LIB_3__::func_662("HORSE_RACE_TIMEOUT_FAIL", 7500, 0, 0, -1, -1, 0);
		func_67(15);
	}
}

void func_233()
{
	switch (Local_15.f_51.f_4)
	{
		case 5:
			if (iLocal_995 != 4)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[0 /*3*/], 3f, 3f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_1026 = 1;
					iLocal_995 = 0;
					iLocal_996 = 0;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[1 /*3*/], 6f, 6f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 1;
					iLocal_996 = 1;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[2 /*3*/], 6f, 6f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 2;
					iLocal_996 = 2;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[3 /*3*/], 6f, 6f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 3;
					iLocal_996 = 3;
				}
			}
			switch (iLocal_995)
			{
				case 0:
					if (iLocal_1022 == 1)
					{
						if (func_198(uLocal_412[0], Global_35, func_82(43), 4.5f, 0))
						{
							iLocal_1022 = 0;
							iLocal_1026 = 0;
							iLocal_995 = 4;
						}
					}
					break;
				case 1:
					if (iLocal_1022 == 1)
					{
						if (func_198(uLocal_412[0], Global_35, func_82(44), 0f, 0))
						{
							iLocal_1022 = 0;
							iLocal_995 = 4;
						}
					}
					break;
				case 2:
					if (iLocal_1022 == 1)
					{
						if (func_198(uLocal_412[0], Global_35, func_82(45), 0f, 0))
						{
							iLocal_1022 = 0;
							iLocal_995 = 4;
						}
					}
					break;
				case 3:
					if (iLocal_1022 == 1)
					{
						if (func_198(uLocal_412[0], Global_35, func_82(46), 0f, 0))
						{
							iLocal_1022 = 0;
							iLocal_995 = 4;
						}
					}
					break;
				case 4:
					if (iLocal_996 < 10)
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[iLocal_996 /*3*/], 6f, 6f, 5f, false, true, 0))
						{
							iLocal_995 = 0;
						}
					}
					break;
			}
			break;
		case 6:
			switch (iLocal_995)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[0 /*3*/], 5f, 5f, 5f, false, true, 0))
					{
						iLocal_1022 = 1;
					}
					if (iLocal_1022 == 1)
					{
						if (func_198(uLocal_412[0], Global_35, func_82(47), 0f, 0))
						{
							iLocal_1022 = 0;
							iLocal_995++;
						}
					}
					break;
			}
			break;
		case 7:
			if (iLocal_995 != 5)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[0 /*3*/], 5f, 5f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 0;
					iLocal_996 = 0;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[1 /*3*/], 5f, 5f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 1;
					iLocal_996 = 1;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[2 /*3*/], 5f, 5f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 2;
					iLocal_996 = 2;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[3 /*3*/], 5f, 5f, 5f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 3;
					iLocal_996 = 3;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[4 /*3*/], 5f, 5f, 5f, false, true, 0) && ENTITY::IS_ENTITY_AT_COORD(iLocal_411, vLocal_802[4 /*3*/], 15f, 15f, 10f, false, true, 0))
				{
					iLocal_1022 = 1;
					iLocal_995 = 4;
					iLocal_996 = 4;
				}
			}
			switch (iLocal_995)
			{
				case 0:
					if (iLocal_1022 == 1)
					{
						if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
						{
							if (__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(48), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 1:
					if (iLocal_1022 == 1)
					{
						if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
						{
							if (__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(49), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 2:
					if (iLocal_1022 == 1)
					{
						if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
						{
							if (__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(50), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 3:
					if (iLocal_1022 == 1)
					{
						if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
						{
							if (__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(51), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 4:
					if (iLocal_1022 == 1)
					{
						if (__LIB_2__::func_227(-4f, 1, uLocal_412[0], 1))
						{
							if (__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(52), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
							{
								iLocal_1022 = 0;
								iLocal_995 = 5;
							}
						}
					}
					break;
				case 5:
					if (iLocal_996 < 10)
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vLocal_802[iLocal_996 /*3*/], 5f, 5f, 5f, false, true, 0))
						{
							iLocal_995 = 0;
						}
					}
					break;
			}
			break;
	}
}

bool func_234()
{
	switch (iLocal_871)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				if (PED::GET_MELEE_TARGET_FOR_PED(Global_35) == uLocal_412[0])
				{
					if (PED::_0x6127F25ED21C533C(Global_35) >= 0.6f)
					{
						__LIB_2__::func_461(0);
						if (iLocal_402 == 1)
						{
							__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(56), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (iLocal_402 == 2)
						{
							__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						else if (iLocal_402 == 0)
						{
							__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(57), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						}
						PED::SET_PED_RESET_FLAG(uLocal_412[1], 91, false);
						__LIB_1__::func_148(&uLocal_954);
						TASK::CLEAR_PED_TASKS(uLocal_412[0], true, false);
						func_230();
						if (PED::IS_PED_DEAD_OR_DYING(uLocal_412[0], true))
						{
							if (iLocal_1035 == 0)
							{
								__LIB_3__::func_465(3, 0, 0, 0, uLocal_412[0], 0, 1065353216 /* Float: 1f */, 0);
								iLocal_1035 = 1;
							}
						}
						else
						{
							__LIB_3__::func_465(1, 0, 0, "RE_HONOR_CHEATED", uLocal_412[0], 0, 1065353216 /* Float: 1f */, 0);
						}
						iLocal_871 = 1;
					}
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_954) >= 4f)
			{
				if (PED::IS_PED_ON_MOUNT(Global_35))
				{
					if (PED::GET_MELEE_TARGET_FOR_PED(Global_35) == uLocal_412[0])
					{
						if (PED::_0x6127F25ED21C533C(Global_35) >= 0.6f)
						{
							__LIB_2__::func_461(0);
							__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(42), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							iLocal_871 = 2;
							func_67(13);
						}
					}
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

void func_235()
{
	PED::SET_PED_RESET_FLAG(uLocal_412[1], 317, true);
	if (!__LIB_0__::func_75(&uLocal_981))
	{
		if (PED::IS_PED_ON_MOUNT(uLocal_412[0]) && ENTITY::GET_ENTITY_SPEED(uLocal_412[0]) < 0.5f)
		{
			__LIB_1__::func_148(&uLocal_981);
		}
	}
	else if (ENTITY::GET_ENTITY_SPEED(uLocal_412[0]) < 0.5f)
	{
		if (__LIB_1__::func_285(&uLocal_981, 10f) && PED::IS_PED_ON_MOUNT(uLocal_412[0]))
		{
			TASK::CLEAR_PED_TASKS(uLocal_412[0], true, false);
			TASK::CLEAR_PED_TASKS(uLocal_412[1], true, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_412[0], sLocal_529[iLocal_1016], 0, 67139080, -1, 0, 0, -1);
			__LIB_0__::func_37(&uLocal_981);
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_981);
	}
}

void func_236()
{
	int iVar0;
	int iVar1;
	switch (iLocal_872)
	{
		case 0:
			__LIB_3__::func_673(uLocal_412[0], Global_35, &uLocal_836, 3000, 50);
			if (!__LIB_0__::func_75(&uLocal_957))
			{
				__LIB_1__::func_148(&uLocal_957);
			}
			else if (__LIB_0__::func_264(&uLocal_957) >= 2f)
			{
				if (!func_196())
				{
					iLocal_872 = 1;
				}
			}
			break;
		case 1:
			__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(18, 23);
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iVar1 <= 25)
			{
				iVar0 = 18;
			}
			if (iVar1 <= 50 && iVar1 > 25)
			{
				if (__LIB_2__::func_918() == 1)
				{
					iVar0 = 20;
				}
				else
				{
					iVar0 = 22;
				}
			}
			TASK::TASK_PLAY_ANIM(uLocal_412[0], Local_737[iVar0 /*2*/], Local_737[iVar0 /*2*/].f_1, 1.5f, -1.5f, -1, 16, 0f, false, 0, false, 0, false);
			__LIB_1__::func_148(&uLocal_957);
			iLocal_872 = 2;
			break;
		case 2:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 1.5f, 1, 0.4f, 0);
			}
			if (__LIB_0__::func_264(&uLocal_957) >= 3f)
			{
				iLocal_872 = 3;
			}
			break;
		case 3:
			break;
	}
}

void func_237()
{
	var uVar0[4];
	switch (iLocal_864)
	{
		case 0:
			TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_412[2], iLocal_788, ENTITY::GET_ENTITY_COORDS(uLocal_412[2], true, false), ENTITY::GET_ENTITY_HEADING(uLocal_412[2]), 0, false, true, 0, -1f, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_412[3], iLocal_788, ENTITY::GET_ENTITY_COORDS(uLocal_412[3], true, false), ENTITY::GET_ENTITY_HEADING(uLocal_412[3]), 0, false, true, 0, -1f, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_412[4], iLocal_788, ENTITY::GET_ENTITY_COORDS(uLocal_412[4], true, false), ENTITY::GET_ENTITY_HEADING(uLocal_412[4]), 0, false, true, 0, -1f, false);
			TASK::TASK_START_SCENARIO_AT_POSITION(uLocal_412[5], iLocal_788, ENTITY::GET_ENTITY_COORDS(uLocal_412[5], true, false), ENTITY::GET_ENTITY_HEADING(uLocal_412[5]), 0, false, true, 0, -1f, false);
			iLocal_864 = 1;
			break;
		case 1:
			if (__LIB_0__::func_665(uLocal_412[0], uLocal_412[2], 1, 0) <= IntToFloat(iLocal_787))
			{
				iLocal_864 = 2;
			}
			break;
		case 2:
			TASK::CLEAR_SEQUENCE_TASK(&(uVar0[0]));
			TASK::OPEN_SEQUENCE_TASK(&(uVar0[0]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_833, 2f, -1, 2f, 5, 40000f);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 512, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_412[2], uVar0[0]);
			TASK::CLEAR_SEQUENCE_TASK(&(uVar0[0]));
			TASK::CLEAR_SEQUENCE_TASK(&(uVar0[1]));
			TASK::OPEN_SEQUENCE_TASK(&(uVar0[1]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_833, 2f, -1, 2f, 5, 40000f);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 512, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0[1]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_412[3], uVar0[1]);
			TASK::CLEAR_SEQUENCE_TASK(&(uVar0[1]));
			TASK::CLEAR_SEQUENCE_TASK(&(uVar0[2]));
			TASK::OPEN_SEQUENCE_TASK(&(uVar0[2]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_833, 2f, -1, 2f, 5, 40000f);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 512, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0[2]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_412[4], uVar0[2]);
			TASK::CLEAR_SEQUENCE_TASK(&(uVar0[2]));
			TASK::CLEAR_SEQUENCE_TASK(&(uVar0[3]));
			TASK::OPEN_SEQUENCE_TASK(&(uVar0[3]));
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_833, 2f, -1, 2f, 5, 40000f);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 512, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0[3]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_412[5], uVar0[3]);
			TASK::CLEAR_SEQUENCE_TASK(&(uVar0[3]));
			iLocal_864 = 3;
			break;
		case 3:
			if (((__LIB_0__::func_665(uLocal_412[0], uLocal_412[2], 1, 0) <= 10f || __LIB_0__::func_665(uLocal_412[0], uLocal_412[3], 1, 0) <= 10f) || __LIB_0__::func_665(uLocal_412[0], uLocal_412[4], 1, 0) <= 10f) || __LIB_0__::func_665(uLocal_412[0], uLocal_412[5], 1, 0) <= 10f)
			{
				if (!func_196())
				{
					TASK::TASK_HORSE_ACTION(uLocal_412[1], 1, uLocal_412[2], 0);
					__LIB_2__::func_461(0);
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_951);
					iLocal_864 = 4;
				}
				else
				{
					iLocal_864 = 5;
				}
			}
			break;
		case 4:
			if (!func_196())
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 1.5f, 1, 0.4f, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_412[1]))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_412[1], 1.5f);
				}
			}
			if (__LIB_0__::func_264(&uLocal_951) >= 8f)
			{
				iLocal_864 = 5;
			}
			break;
		case 5:
			break;
	}
}

void func_238()
{
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_411, 2817.42f, 457.66f, 55.66f, 5f, 5f, 15f, false, true, 0) && iLocal_1030 == 0)
	{
		iLocal_1030 = 1;
		GRAPHICS::START_PARTICLE_FX_NON_LOOPED_AT_COORD("scr_beat_horse_race_bridge_smk", 2814.21f, 452.12f, 63.7f, 0f, 0f, 0f, 1f, false, false, false);
	}
}

void func_239()
{
	if (!func_416())
	{
		func_417();
	}
	else if (!func_418() && ENTITY::IS_ENTITY_AT_COORD(Global_35, -1383.91f, -134.25f, 93.26f, 30f, 30f, 10f, false, true, 0))
	{
		func_419();
	}
}

void func_241()
{
	if (func_196())
	{
		switch (iLocal_402)
		{
			case 1:
			case 2:
				switch (iLocal_987)
				{
					case 0:
						if (__LIB_0__::func_264(&uLocal_903) >= 5f)
						{
							if (__LIB_2__::func_227(-4f, 1, 0, 0))
							{
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(70), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_997 = MISC::GET_RANDOM_INT_IN_RANGE(10, 20);
								iLocal_987++;
							}
						}
						break;
					case 1:
						if (__LIB_0__::func_264(&uLocal_903) >= IntToFloat(iLocal_997) && __LIB_0__::func_94(Global_35, vLocal_501[iLocal_1018 /*3*/], 1) < (fLocal_1002 + 200f))
						{
							if (__LIB_2__::func_227(-4f, 1, 0, 0))
							{
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(71), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_997 = MISC::GET_RANDOM_INT_IN_RANGE(10, 20);
								iLocal_987++;
							}
						}
						break;
					case 2:
						if (__LIB_0__::func_264(&uLocal_903) >= IntToFloat(iLocal_997) && __LIB_0__::func_94(Global_35, vLocal_501[iLocal_1018 /*3*/], 1) < (fLocal_1002 + 200f))
						{
							if (__LIB_2__::func_227(-4f, 1, 0, 0))
							{
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(70), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_997 = MISC::GET_RANDOM_INT_IN_RANGE(10, 20);
								iLocal_987++;
							}
						}
						break;
					case 3:
						if (__LIB_0__::func_264(&uLocal_903) >= IntToFloat(iLocal_997) && __LIB_0__::func_94(Global_35, vLocal_501[iLocal_1018 /*3*/], 1) < (fLocal_1002 + 200f))
						{
							if (__LIB_2__::func_227(-4f, 1, 0, 0))
							{
								__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(71), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_997 = MISC::GET_RANDOM_INT_IN_RANGE(10, 20);
								iLocal_987++;
							}
						}
						break;
				}
				break;
		}
	}
	else if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
	{
		switch (iLocal_986)
		{
			case 0:
				if (__LIB_0__::func_264(&uLocal_903) >= IntToFloat(iLocal_997))
				{
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(28), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_997 = MISC::GET_RANDOM_INT_IN_RANGE(20, 40);
						iLocal_986++;
					}
				}
				break;
			case 1:
				if (__LIB_0__::func_264(&uLocal_903) >= IntToFloat(iLocal_997) && __LIB_0__::func_94(Global_35, vLocal_501[iLocal_1018 /*3*/], 1) < (fLocal_1002 + 200f))
				{
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(29), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_997 = MISC::GET_RANDOM_INT_IN_RANGE(20, 40);
						iLocal_986++;
					}
				}
				break;
			case 2:
				if (__LIB_0__::func_264(&uLocal_903) >= IntToFloat(iLocal_997) && __LIB_0__::func_94(Global_35, vLocal_501[iLocal_1018 /*3*/], 1) < (fLocal_1002 - 200f))
				{
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(30), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_997 = MISC::GET_RANDOM_INT_IN_RANGE(20, 40);
						iLocal_986++;
					}
				}
				break;
		}
		if (func_195(5))
		{
			switch (iLocal_984)
			{
				case 0:
					if (__LIB_0__::func_264(&uLocal_900) >= 5f)
					{
						Local_449[1 /*17*/].f_13 = func_82(72);
						iLocal_867 = 1;
					}
					break;
				case 1:
					if (__LIB_0__::func_264(&uLocal_900) >= 10f)
					{
						Local_449[1 /*17*/].f_13 = func_82(73);
						iLocal_867 = 1;
					}
					break;
				case 2:
					if (__LIB_0__::func_264(&uLocal_900) >= 10f)
					{
						Local_449[1 /*17*/].f_13 = func_82(74);
						iLocal_867 = 1;
					}
					break;
				case 3:
					if (__LIB_0__::func_264(&uLocal_900) >= 10f)
					{
						Local_449[1 /*17*/].f_13 = func_82(75);
						iLocal_867 = 1;
					}
					break;
				case 4:
					if (__LIB_0__::func_264(&uLocal_900) >= 10f)
					{
						Local_449[1 /*17*/].f_13 = func_82(76);
						iLocal_867 = 1;
					}
					break;
				case 5:
					if (__LIB_0__::func_264(&uLocal_900) >= 10f)
					{
						Local_449[1 /*17*/].f_13 = func_82(77);
						iLocal_867 = 1;
					}
					break;
				case 6:
					if (__LIB_0__::func_264(&uLocal_900) >= 10f)
					{
						Local_449[1 /*17*/].f_13 = func_82(78);
						iLocal_867 = 1;
					}
					break;
				case 7:
					if (__LIB_0__::func_264(&uLocal_900) >= 10f)
					{
						Local_449[1 /*17*/].f_13 = func_82(79);
						iLocal_867 = 1;
					}
					break;
				case 8:
					iLocal_984 = 0;
					break;
			}
		}
	}
	if (!func_195(5))
	{
		switch (iLocal_985)
		{
			case 0:
				if (__LIB_0__::func_264(&uLocal_900) >= 5f)
				{
					Local_449[1 /*17*/].f_13 = func_82(80);
					iLocal_867 = 1;
				}
				break;
			case 1:
				if (__LIB_0__::func_264(&uLocal_900) >= 10f)
				{
					Local_449[1 /*17*/].f_13 = func_82(81);
					iLocal_867 = 1;
				}
				break;
			case 2:
				if (__LIB_0__::func_264(&uLocal_900) >= 10f)
				{
					Local_449[1 /*17*/].f_13 = func_82(82);
					iLocal_867 = 1;
				}
				break;
			case 3:
				if (__LIB_0__::func_264(&uLocal_900) >= 10f)
				{
					Local_449[1 /*17*/].f_13 = func_82(83);
					iLocal_867 = 1;
				}
				break;
			case 4:
				if (__LIB_0__::func_264(&uLocal_900) >= 10f)
				{
					Local_449[1 /*17*/].f_13 = func_82(84);
					iLocal_867 = 1;
				}
				break;
			case 5:
				iLocal_985 = 0;
				break;
		}
	}
	switch (iLocal_862)
	{
		case 0:
			if (func_196())
			{
				iLocal_862 = 1;
			}
			else
			{
				__LIB_1__::func_148(&uLocal_903);
				iLocal_862 = 1;
			}
			break;
		case 1:
			if (func_196() && __LIB_0__::func_264(&uLocal_900) >= 10f)
			{
				__LIB_1__::func_148(&uLocal_903);
				iLocal_862 = 0;
			}
			if (!func_196() && __LIB_0__::func_264(&uLocal_903) >= 10f)
			{
				iLocal_862 = 0;
			}
			break;
	}
}

void func_242()
{
	if (func_196() && iLocal_882 == 0)
	{
		iLocal_882 = 1;
		iLocal_883 = 0;
		if (iLocal_885 == 1)
		{
			iLocal_881 = 1;
		}
		iLocal_885 = 1;
	}
	if (!func_196() && iLocal_883 == 0)
	{
		iLocal_882 = 0;
		iLocal_883 = 1;
		if (iLocal_885 == 1)
		{
			iLocal_881 = 1;
		}
		iLocal_885 = 1;
	}
	if (iLocal_881 == 1)
	{
		if (!__LIB_0__::func_75(&uLocal_927))
		{
			__LIB_1__::func_148(&uLocal_927);
			bLocal_1023 = func_196();
		}
		else if (__LIB_0__::func_264(&uLocal_927) >= 2f)
		{
			if (func_195(2))
			{
				if (bLocal_1023 == func_196())
				{
					iLocal_881 = 0;
					iLocal_884 = 1;
					__LIB_1__::func_148(&uLocal_912);
					__LIB_0__::func_37(&uLocal_927);
				}
				else
				{
					iLocal_881 = 0;
					iLocal_884 = 0;
				}
			}
		}
	}
	if (iLocal_1022 == 0 || func_420())
	{
		if (!__LIB_0__::func_75(&uLocal_930))
		{
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_930);
			}
		}
		else if (__LIB_0__::func_264(&uLocal_930) >= 1.5f)
		{
			iLocal_1027 = 1;
			__LIB_0__::func_37(&uLocal_930);
		}
	}
	else
	{
		__LIB_0__::func_37(&uLocal_930);
		iLocal_1027 = 0;
	}
	if (iLocal_884 == 1 && iLocal_1027 == 1)
	{
		if (iLocal_882 == 1)
		{
			switch (iLocal_989)
			{
				case 0:
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(35), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_989++;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(36), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_989++;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(37), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_989++;
					}
					break;
				case 3:
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_2__::func_461(0);
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(38), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_989 = 0;
					}
					break;
			}
		}
		else
		{
			switch (iLocal_988)
			{
				case 0:
					if (__LIB_2__::func_227(0f, 1, uLocal_412[0], 1))
					{
						__LIB_1__::func_148(&uLocal_903);
						__LIB_2__::func_461(0);
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(31), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_988++;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, uLocal_412[0], 1))
					{
						__LIB_1__::func_148(&uLocal_903);
						__LIB_2__::func_461(0);
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(32), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_988++;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, uLocal_412[0], 1))
					{
						__LIB_1__::func_148(&uLocal_903);
						__LIB_2__::func_461(0);
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(33), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_988++;
					}
					break;
				case 3:
					if (__LIB_2__::func_227(0f, 1, uLocal_412[0], 1))
					{
						__LIB_1__::func_148(&uLocal_903);
						__LIB_2__::func_461(0);
						__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(34), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_884 = 0;
						iLocal_988 = 0;
					}
					break;
			}
		}
	}
}

void func_243(float fParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	switch (iLocal_861)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_875);
			iLocal_880 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iLocal_880 <= iParam3)
			{
			}
			iLocal_861 = 1;
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_875) >= IntToFloat(iParam4))
			{
				iLocal_878 = 0;
				iLocal_861 = 0;
			}
			break;
	}
	if (bParam6 == 1)
	{
		if (iLocal_880 <= iParam3)
		{
			iLocal_878 = 1;
		}
		else
		{
			iLocal_878 = 0;
		}
	}
	if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
	{
		if (func_196())
		{
			if (iLocal_878 == 1)
			{
				fLocal_879 = 3f;
			}
			else
			{
				fLocal_879 = 2.5f;
				if (bParam6 && __LIB_2__::func_118(uLocal_412[0], 1, 0) >= fParam0)
				{
					fLocal_879 = 3f;
				}
			}
		}
		else
		{
			if (__LIB_2__::func_118(uLocal_412[0], 1, 0) <= IntToFloat(iParam5))
			{
				fLocal_879 = 2.001f;
			}
			if (__LIB_2__::func_118(uLocal_412[0], 1, 0) >= fParam1 && __LIB_2__::func_118(uLocal_412[0], 1, 0) < fParam2)
			{
				fLocal_879 = 2.001f;
			}
			if (__LIB_2__::func_118(uLocal_412[0], 1, 0) >= fParam2)
			{
				fLocal_879 = 1.501f;
			}
		}
		TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], fLocal_879, iParam7, 0.4f, 0);
	}
}

void func_244()
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_75(&uLocal_921))
	{
		__LIB_1__::func_148(&uLocal_921);
		iVar0 = __LIB_2__::func_918();
		if (iVar0 == 1)
		{
			iLocal_1077 = 3;
			iLocal_1078 = 4;
		}
		else
		{
			iLocal_1077 = 2;
			iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iVar1 <= 40)
			{
				iLocal_1078 = 7;
			}
			else
			{
				iLocal_1078 = 4;
			}
		}
	}
	else
	{
		if (__LIB_0__::func_264(&uLocal_921) >= 2f && __LIB_0__::func_264(&uLocal_921) < 4f)
		{
			PED::_0x23BDE06596A22CEC(uLocal_412[1], iLocal_1077, 1f, uLocal_412[0]);
		}
		if (__LIB_0__::func_264(&uLocal_921) >= 15f && !__LIB_0__::func_163(uLocal_412[1], 1041577989))
		{
			TASK::TASK_HORSE_ACTION(uLocal_412[1], iLocal_1078, uLocal_412[0], 0);
			__LIB_0__::func_37(&uLocal_921);
		}
	}
}

bool func_245()
{
	vector3 vVar0;
	vector3 vVar3;
	switch (Local_15.f_51.f_4)
	{
		case 1:
			switch (iLocal_1000)
			{
				case 0:
					vVar0 = { -1753.42f, 173.62f, 140.61f };
					vVar3 = { -1770.39f, 116.89f, 156.66f };
					break;
				case 1:
					vVar0 = { -1688.88f, -88.15f, 171.9f };
					vVar3 = { -1671.45f, -279.32f, 168.22f };
					break;
				case 2:
					vVar0 = { -1872.31f, -201.09f, 190.47f };
					vVar3 = { -2094.99f, -185.84f, 203.06f };
					break;
				case 3:
					vVar0 = { -2281.85f, -309.16f, 157.64f };
					vVar3 = { -2294.07f, -338.88f, 155.49f };
					break;
			}
			break;
		case 2:
			switch (iLocal_1000)
			{
				case 0:
					vVar0 = { -1040.01f, 426.66f, 54.01f };
					vVar3 = { -1041.45f, 402.55f, 52.7f };
					break;
				case 1:
					vVar0 = { -1112.46f, 71.13f, 52.79f };
					vVar3 = { -1138.48f, 24.17f, 42.98f };
					break;
				case 2:
					vVar0 = { -1305.49f, -2.13f, 59.16f };
					vVar3 = { -1330.12f, -18.37f, 64.86f };
					break;
				case 3:
					vVar0 = { -1387.13f, -225.66f, 99.33f };
					vVar3 = { -1375.54f, -268.18f, 98.14f };
					break;
			}
			break;
		case 3:
			switch (iLocal_1000)
			{
				case 0:
					vVar0 = { -1897.62f, -709.75f, 112.63f };
					vVar3 = { -1944.99f, -686.92f, 114.15f };
					break;
				case 1:
					vVar0 = { -2004.63f, -735.49f, 105.83f };
					vVar3 = { -2048.28f, -762.51f, 88.79f };
					break;
				case 2:
					vVar0 = { -2181.08f, -810.46f, 110.94f };
					vVar3 = { -2242.41f, -687.13f, 140.43f };
					break;
				case 3:
					vVar0 = { -2284.94f, -580.29f, 162.07f };
					vVar3 = { -2302.84f, -533.31f, 153.16f };
					break;
			}
			break;
		case 4:
			switch (iLocal_1000)
			{
				case 0:
					vVar0 = { -1353.76f, 148.13f, 75.84f };
					vVar3 = { -1312.21f, 122.79f, 72.1f };
					break;
				case 1:
					vVar0 = { -1146.66f, -84.25f, 42.23f };
					vVar3 = { -1099.12f, -192.73f, 84.36f };
					break;
				case 2:
					vVar0 = { -1080.5f, -246f, 83.21f };
					vVar3 = { -1060.06f, -276.41f, 81.46f };
					break;
				case 3:
					vVar0 = { -1045.42f, -288.77f, 81.64f };
					vVar3 = { -1045.42f, -288.77f, 81.64f };
					break;
			}
			break;
	}
	switch (iLocal_870)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vVar0, 3f, 3f, 3f, false, true, 0))
			{
				iLocal_1031 = 0;
				iLocal_870 = 1;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_412[0], vVar3, 3f, 3f, 3f, false, true, 0))
			{
				iLocal_1000++;
				__LIB_1__::func_148(&uLocal_945);
				iLocal_1031 = 1;
				iLocal_870 = 0;
			}
			return false;
	}
	return true;
}

void func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	switch (iLocal_866)
	{
		case 0:
			if (__LIB_0__::func_264(&uLocal_945) >= 1f && iLocal_1031 == 1)
			{
				iLocal_866 = 1;
			}
			break;
		case 1:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(uLocal_412[0], true, false), &iVar1);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 3f, 1, 0.4f, 0);
			}
			if (iVar0 <= iVar1 && __LIB_2__::func_118(uLocal_412[0], 1, 0) >= 10f)
			{
				iLocal_866 = 2;
			}
			break;
		case 2:
			TASK::CLEAR_PED_SECONDARY_TASK(uLocal_412[0]);
			__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(18, 23);
			iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
			if (iVar3 <= 25)
			{
				iVar2 = 18;
			}
			if (iVar3 <= 50 && iVar3 > 25)
			{
				if (__LIB_2__::func_918() == 1)
				{
					iVar2 = 20;
				}
				else
				{
					iVar2 = 22;
				}
			}
			TASK::TASK_PLAY_ANIM(uLocal_412[0], Local_737[iVar2 /*2*/], Local_737[iVar2 /*2*/].f_1, 1.5f, -1.5f, -1, 16, 0f, false, 0, false, 0, false);
			__LIB_1__::func_148(&uLocal_948);
			iLocal_866 = 3;
			break;
		case 3:
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 1.5f, 1, 0.4f, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_412[1]))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(uLocal_412[1], 1.5f);
			}
			if (__LIB_0__::func_264(&uLocal_948) >= 5f)
			{
				__LIB_0__::func_37(&uLocal_945);
				iLocal_866 = 0;
			}
			break;
	}
}

void func_247()
{
	int iVar0;
	int iVar1;
	switch (iLocal_865)
	{
		case 0:
			if (__LIB_0__::func_94(Global_35, vLocal_501[iLocal_1018 /*3*/], 1) < (fLocal_1002 + (fLocal_1002 / 4f)))
			{
				iLocal_1028 = 1;
				iLocal_865 = 1;
			}
			break;
		case 1:
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), &iVar0);
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(uLocal_412[0], true, false), &iVar1);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_412[0], 0))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_412[0], 3f, 1, 0.4f, 0);
			}
			if (!__LIB_0__::func_71(uLocal_412[0]))
			{
				iLocal_1028 = 0;
				iLocal_865 = 3;
			}
			if (iVar0 <= iVar1 && __LIB_2__::func_118(uLocal_412[0], 1, 0) >= 35f)
			{
				iLocal_865 = 2;
			}
			break;
		case 2:
			TASK::CLEAR_PED_SECONDARY_TASK(uLocal_412[0]);
			ENTITY::SET_ENTITY_PROOFS(uLocal_412[0], 8, false);
			TASK::TASK_HORSE_ACTION(uLocal_412[1], 2, uLocal_412[0], 0);
			TASK::TASK_HORSE_ACTION(iLocal_1010, 4, uLocal_412[0], 0);
			iLocal_1028 = 0;
			iLocal_865 = 3;
			break;
		case 3:
			break;
	}
}

void func_248(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	iVar5 = 0;
	switch (iLocal_1016)
	{
		case 0:
			iVar5 = 450;
			break;
		case 1:
			iVar5 = 577;
			break;
		case 2:
			iVar5 = 596;
			break;
		case 3:
			iVar5 = 551;
			break;
		case 4:
			iVar5 = 715;
			break;
		case 5:
			iVar5 = 731;
			break;
		case 6:
			iVar5 = 571;
			break;
		case 7:
			iVar5 = 507;
			break;
		case 8:
			iVar5 = 980;
			break;
		case 9:
			iVar5 = 545;
			break;
		case 10:
			iVar5 = 413;
			break;
	}
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_529[iLocal_1016], ENTITY::GET_ENTITY_COORDS(uLocal_412[0], true, false), &iVar0);
	if (iVar0 < iVar5)
	{
		TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_529[iLocal_1016], iVar5, &vVar1);
		fVar4 = __LIB_3__::func_731(vVar1, vLocal_501[iLocal_1018 /*3*/]);
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_412[1], vVar1, fVar4, false, true, true);
		TASK::TASK_FOLLOW_WAYPOINT_RECORDING(uLocal_412[0], sLocal_529[iLocal_1016], iVar5, 26120, -1, 0, 0, -1);
	}
	if (iParam0 == 1)
	{
		__LIB_3__::func_662("HORSE_RACE_WON", 7500, 0, 0, -1, -1, 0);
		if (iLocal_786 == 0)
		{
			__LIB_2__::func_303(Global_35, uLocal_412[0], func_82(85), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_303(Global_35, uLocal_412[0], func_82(87), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_67(9);
	}
	else
	{
		if (iLocal_786 == 0)
		{
			__LIB_2__::func_303(Global_35, uLocal_412[0], func_82(86), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else
		{
			__LIB_2__::func_303(Global_35, uLocal_412[0], func_82(88), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		func_67(10);
	}
}

void func_250()
{
	if (!__LIB_0__::func_27(iLocal_524, 4))
	{
		__LIB_1__::func_683(&iLocal_524, 4);
		if (iLocal_786 == 0)
		{
			if (iLocal_14 == 1)
			{
				__LIB_3__::func_461(Local_15.f_3, iLocal_402, 2);
			}
			else
			{
				__LIB_3__::func_461(Local_15.f_3, iLocal_402, 1);
			}
		}
		if (iLocal_786 == 1 || iLocal_786 == 2)
		{
			__LIB_3__::func_461(Local_15.f_3, iLocal_402, 3);
		}
		if (!__LIB_0__::func_181())
		{
			if (iLocal_786 == 0)
			{
				if (iLocal_14 == 1)
				{
					__LIB_3__::func_461(Local_15.f_3, 4, 1);
				}
				else
				{
					__LIB_3__::func_461(Local_15.f_3, 4, 2);
				}
			}
			if (iLocal_786 == 1 || iLocal_786 == 2)
			{
				__LIB_3__::func_461(Local_15.f_3, 4, 3);
			}
		}
		else
		{
			if (iLocal_786 == 0)
			{
				if (iLocal_14 == 1)
				{
					__LIB_3__::func_461(Local_15.f_3, 4, 3);
				}
				else
				{
					__LIB_3__::func_461(Local_15.f_3, 4, 4);
				}
			}
			if (iLocal_786 == 1 || iLocal_786 == 2)
			{
				__LIB_3__::func_461(Local_15.f_3, 4, 5);
			}
		}
	}
}

bool func_251()
{
	switch (iLocal_402)
	{
		case 2:
			if (iLocal_14 == 1)
			{
				if (iLocal_786 > 0)
				{
					return false;
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_786 > 0)
			{
				return true;
			}
			else
			{
				return true;
			}
			break;
		case 1:
			if (iLocal_14 == 1)
			{
				if (iLocal_786 > 0)
				{
					return true;
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_786 > 0)
			{
				return true;
			}
			else
			{
				return true;
			}
			break;
		case 0:
			if (iLocal_14 == 1)
			{
				if (iLocal_786 > 0)
				{
					return true;
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_786 > 0)
			{
				return true;
			}
			else
			{
				return true;
			}
			break;
	}
	return false;
}

void func_252()
{
	vector3 vVar0;
	vVar0 = { ENTITY::GET_ENTITY_COORDS(uLocal_412[1], true, false) };
	MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(uLocal_412[1], true, false), &(vVar0.f_2), false);
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_403))
	{
		if (__LIB_2__::func_1(uLocal_412[1], 0, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_403, vVar0, ENTITY::GET_ENTITY_ROTATION(uLocal_412[1], 2), 2);
		}
	}
}

float func_253(int iParam0)
{
	if (iLocal_402 == 1)
	{
		if (iParam0 == 1)
		{
			if (iLocal_786 == 0)
			{
				return 0f;
			}
			else if (iLocal_786 == 1 || iLocal_786 == 2)
			{
				return 2f;
			}
		}
		else if (iParam0 == 0)
		{
			if (iLocal_786 == 0)
			{
				return 2f;
			}
			else if (iLocal_786 == 1 || iLocal_786 == 2)
			{
				return 0f;
			}
		}
	}
	else if (iLocal_402 == 2)
	{
		if (iParam0 == 1)
		{
			if (iLocal_786 == 0)
			{
				return 2f;
			}
			else if (iLocal_786 == 1 || iLocal_786 == 2)
			{
				return 0f;
			}
		}
		else if (iParam0 == 0)
		{
			if (iLocal_786 == 0)
			{
				return 2f;
			}
			else if (iLocal_786 == 1 || iLocal_786 == 2)
			{
				return 0f;
			}
		}
	}
	else if (iLocal_402 == 0)
	{
		if (iParam0 == 1)
		{
			if (iLocal_786 == 0)
			{
				return 0f;
			}
			else if (iLocal_786 == 1 || iLocal_786 == 2)
			{
				return 0f;
			}
		}
		else if (iParam0 == 0)
		{
			if (iLocal_786 == 0)
			{
				return 0f;
			}
			else if (iLocal_786 == 1 || iLocal_786 == 2)
			{
				return 0f;
			}
		}
	}
	return 0f;
}

void func_256(int iParam0)
{
	Global_40.f_1095.f_3140 = iParam0;
}

void func_259(int iParam0)
{
	Global_40.f_1095.f_3140.f_1 = iParam0;
}

void func_260()
{
	if ((iLocal_402 == 1 && iLocal_14 == 2) && (iLocal_786 == 1 || iLocal_786 == 2))
	{
		if (fLocal_1003 >= 0.58f && fLocal_1003 <= 0.7f)
		{
			if (!WEAPON::_0xF29A186ED428B552(uLocal_412[0], joaat("WEAPON_REVOLVER_CATTLEMAN")))
			{
				WEAPON::_GIVE_WEAPON_TO_PED_2(uLocal_412[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 1, true, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
			}
		}
	}
}

void func_261()
{
	if (iLocal_888 == 0)
	{
		if ((iLocal_402 == 1 && iLocal_14 == 2) && (iLocal_786 == 1 || iLocal_786 == 2))
		{
			if (fLocal_1003 >= 0.73f)
			{
				__LIB_2__::func_303(Global_35, uLocal_412[0], func_82(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_888 = 1;
			}
		}
	}
}

void func_262()
{
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_1009);
	if (!PED::IS_PED_ON_MOUNT(uLocal_412[0]) || func_265() == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_412[1]))
		{
			TASK::TASK_MOUNT_ANIMAL(0, uLocal_412[1], -1, -1, 1f, 1, 0, 0);
		}
	}
	TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_529[iLocal_1016], 0, 161288, -1, 0, 0, -1);
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 0.8f, 1552, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_1009);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_412[0], iLocal_1009);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_1009);
}

bool func_264()
{
	switch (iLocal_402)
	{
		case 2:
			if (iLocal_14 == 1)
			{
				if (iLocal_786 > 0)
				{
					return true;
				}
				else
				{
					if (fLocal_1003 <= 0.7f)
					{
						return true;
					}
					if (fLocal_1003 >= 0.23f && fLocal_1003 <= 0.71f)
					{
						return true;
					}
				}
			}
			else if (iLocal_786 > 0)
			{
				if (fLocal_1003 <= 0.68f)
				{
					return true;
				}
				if (fLocal_1003 >= 0.23f && fLocal_1003 <= 0.68f)
				{
					return true;
				}
			}
			else
			{
				if (fLocal_1003 <= 0.73f)
				{
					return true;
				}
				if (fLocal_1003 >= 0.2f && fLocal_1003 <= 0.73f)
				{
					return true;
				}
			}
			break;
		case 1:
			if (iLocal_14 == 1)
			{
				if (iLocal_786 > 0)
				{
					if (fLocal_1003 <= 0.6f)
					{
						return true;
					}
					if (fLocal_1003 >= 0.21f && fLocal_1003 <= 0.6f)
					{
						return true;
					}
				}
				else
				{
					if (fLocal_1003 <= 0.51f)
					{
						return true;
					}
					if (fLocal_1003 >= 0.21f && fLocal_1003 <= 0.51f)
					{
						return true;
					}
				}
			}
			else if (iLocal_786 > 0)
			{
				if (fLocal_1003 >= 0.34f)
				{
					return true;
				}
			}
			else if (fLocal_1003 >= 0.35f)
			{
				return true;
			}
			break;
		case 0:
			if (iLocal_14 == 1)
			{
				if (iLocal_786 > 0)
				{
					if (fLocal_1003 >= 0.55f)
					{
						return true;
					}
				}
				else if (fLocal_1003 >= 0.44f)
				{
					return true;
				}
			}
			else if (iLocal_786 > 0)
			{
				if (fLocal_1003 >= 0.3f)
				{
					return true;
				}
			}
			else if (fLocal_1003 >= 0.46f)
			{
				return true;
			}
			break;
	}
	return false;
}

int func_265()
{
	switch (iLocal_402)
	{
		case 2:
			if (iLocal_14 == 1)
			{
				if (iLocal_786 > 0)
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (iLocal_14 == 2)
			{
				return 0;
			}
			break;
		case 1:
			if (iLocal_14 == 1)
			{
				return 0;
			}
			else if (iLocal_14 == 2)
			{
				return 1;
			}
			break;
		case 0:
			if (iLocal_14 == 1 || iLocal_14 == 2)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_277()
{
	switch (iLocal_994)
	{
		case 0:
			__LIB_2__::func_461(0);
			__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(53), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_994++;
			break;
		case 1:
			__LIB_2__::func_461(0);
			switch (iLocal_402)
			{
				case 2:
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(54), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					break;
				default:
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(54), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					break;
			}
			iLocal_994++;
			break;
		case 2:
			__LIB_2__::func_461(0);
			__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_994++;
			break;
		case 3:
			__LIB_2__::func_461(0);
			__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(56), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_994 = 0;
			break;
	}
}

void func_278()
{
	switch (iLocal_993)
	{
		case 0:
			__LIB_2__::func_461(0);
			__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(57), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_993++;
			break;
		case 1:
			__LIB_2__::func_461(0);
			switch (iLocal_402)
			{
				case 1:
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(58), 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					break;
				default:
					__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(58), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					break;
			}
			iLocal_993++;
			break;
		case 2:
			__LIB_2__::func_461(0);
			__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(59), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_993++;
			break;
		case 3:
			__LIB_2__::func_461(0);
			__LIB_2__::func_303(uLocal_412[0], Global_35, func_82(60), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
			iLocal_993 = 0;
			break;
	}
}

int func_394(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
					if (__LIB_4__::func_163(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_394(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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
					__LIB_4__::func_164(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					__LIB_1__::func_537(iParam8);
					if (__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
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
					__LIB_4__::func_166(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					__LIB_4__::func_165(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					__LIB_4__::func_164(uParam0, __LIB_2__::func_402(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
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

bool func_404()
{
	vector3 vVar0;
	if (__LIB_4__::func_4(Global_36, &vVar0, 1f, 1, 0))
	{
		if (__LIB_0__::func_266(Global_35, vVar0, 8f, 1, 1))
		{
			return true;
		}
	}
	return false;
}

bool func_416()
{
	return __LIB_7__::func_907(0, 536870912);
}

void func_417()
{
	__LIB_8__::func_85(0, 536870912);
}

bool func_418()
{
	return __LIB_7__::func_907(0, 1073741824 /* Float: 2f */);
}

void func_419()
{
	__LIB_8__::func_85(0, 1073741824 /* Float: 2f */);
}

bool func_420()
{
	if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_412[0], Local_737[6 /*2*/], Local_737[6 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_412[0], Local_737[18 /*2*/], Local_737[18 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_412[0], Local_737[19 /*2*/], Local_737[19 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_412[0], Local_737[20 /*2*/], Local_737[20 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_412[0], Local_737[21 /*2*/], Local_737[21 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_412[0], Local_737[22 /*2*/], Local_737[22 /*2*/].f_1, 1))
	{
		return true;
	}
	return false;
}

