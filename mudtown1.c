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
	struct<28> Local_14 = { 0, 0, 0, 1, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 6 } ;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	var uLocal_49[2] = { 0, 0 };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
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
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	struct<7> Local_89[3];
	int iLocal_111[3] = { 0, 0, 0 };
	struct<24> Local_115[5];
	struct<4> Local_236[21];
	struct<5> Local_321[10];
	char* sLocal_372 = NULL;
	char* sLocal_373 = NULL;
	char* sLocal_374 = NULL;
	char* sLocal_375 = NULL;
	char* sLocal_376 = NULL;
	char* sLocal_377 = NULL;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	float fLocal_389 = 0f;
	bool bLocal_390 = false;
	int iLocal_391 = 0;
	bool bLocal_392 = false;
	bool bLocal_393 = false;
	int iLocal_394 = 0;
	int iLocal_395[21] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423[5] = { 0, 0, 0, 0, 0 };
	var uLocal_429 = 2;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 2;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 2;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 2;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441[5] = { 0, 0, 0, 0, 0 };
	int iLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	int iLocal_450 = 0;
	var uLocal_451 = 0;
	float fLocal_452 = 0f;
	vector3 vLocal_453 = { 0f, 0f, 0f };
	bool bLocal_456 = false;
	int iLocal_457 = 0;
	struct<10> Local_458 = { 3, 0, 0, 0, 3, 0, 0, 0, 26, 0 } ;
	var uLocal_468 = 26;
	var uLocal_469 = 0;
	struct<4> Local_470[14];
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	char* sLocal_529 = NULL;
	float fLocal_530 = 0f;
	int iLocal_531[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	struct<9> Local_548 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	vector3 vLocal_583 = { 0f, 0f, 0f };
	vector3 vLocal_586 = { 0f, 0f, 0f };
	var uLocal_589[2] = { 0, 0 };
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	bool bLocal_600 = false;
	bool bLocal_601 = false;
	vector3 vLocal_602[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_609 = false;
	bool bLocal_610 = false;
	bool bLocal_611 = false;
	bool bLocal_612 = false;
	bool bLocal_613 = false;
	struct<38> Local_614 = { 0, 0, 0, 0, 1056964608, 0, 0, 0, 0, 1056964608, 0, 0, 0, 0, 0, 0, 0, 1056964608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1069547520, 1065353216, 1045220557, 1028443341, 1069547520, -173983219 } ;
	var uLocal_652 = -1300031296;
	vector3 vLocal_653 = { 0f, 0f, 0f };
	vector3 vLocal_656 = { 0f, 0f, 0f };
	bool bLocal_659 = false;
	vector3 vLocal_660 = { 0f, 0f, 0f };
	vector3 vLocal_663 = { 0f, 0f, 0f };
	vector3 vLocal_666 = { 0f, 0f, 0f };
	vector3 vLocal_669 = { 0f, 0f, 0f };
	int iLocal_672 = 0;
	vector3 vLocal_673 = { 0f, 0f, 0f };
	bool bLocal_676 = false;
	bool bLocal_677 = false;
	bool bLocal_678 = false;
	bool bLocal_679 = false;
	int iLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 27;
	var uLocal_683 = 8;
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
	var uLocal_704 = -1;
	var uLocal_705 = 8;
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
	var uLocal_726 = -1;
	var uLocal_727 = 8;
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
	var uLocal_748 = -1;
	var uLocal_749 = 8;
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
	var uLocal_770 = -1;
	var uLocal_771 = 8;
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
	var uLocal_792 = -1;
	var uLocal_793 = 8;
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
	var uLocal_814 = -1;
	var uLocal_815 = 8;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = -1;
	var uLocal_837 = 8;
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
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = -1;
	var uLocal_859 = 8;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = -1;
	var uLocal_881 = 8;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
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
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = -1;
	var uLocal_903 = 8;
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
	var uLocal_924 = -1;
	var uLocal_925 = 8;
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
	var uLocal_946 = -1;
	var uLocal_947 = 8;
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
	var uLocal_968 = -1;
	var uLocal_969 = 8;
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
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = -1;
	var uLocal_991 = 8;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
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
	var uLocal_1012 = -1;
	var uLocal_1013 = 8;
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
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = -1;
	var uLocal_1035 = 8;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = -1;
	var uLocal_1057 = 8;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
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
	var uLocal_1077 = 0;
	var uLocal_1078 = -1;
	var uLocal_1079 = 8;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = -1;
	var uLocal_1101 = 8;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = -1;
	var uLocal_1123 = 8;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = -1;
	var uLocal_1145 = 8;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = -1;
	var uLocal_1167 = 8;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = -1;
	var uLocal_1189 = 8;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = -1;
	var uLocal_1211 = 8;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = -1;
	var uLocal_1233 = 8;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = -1;
	var uLocal_1255 = 8;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = -1;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 2;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 60;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 40;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 20;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 14;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 60;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 20;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 20;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 20;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 20;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 20;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 20;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 20;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = 0;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 20;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 0;
	var uLocal_2309 = 0;
	var uLocal_2310 = 0;
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = 0;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
	var uLocal_2325 = 0;
	var uLocal_2326 = 0;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 0;
	var uLocal_2331 = 0;
	var uLocal_2332 = 0;
	var uLocal_2333 = 0;
	var uLocal_2334 = 0;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 20;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 20;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 20;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 20;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 0;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 20;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = 0;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 20;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = 0;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 0;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 20;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = 0;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 0;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 20;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = 0;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 20;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 0;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 20;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = 0;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 0;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 20;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = 0;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 0;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 20;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = 0;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 0;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 20;
	var uLocal_3153 = 0;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 0;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = 0;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 20;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 0;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = 0;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 20;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 0;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = 0;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 20;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = 0;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 0;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 20;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = 0;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 0;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 20;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = 0;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 0;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 0;
	var uLocal_3550 = 0;
	var uLocal_3551 = 0;
	var uLocal_3552 = 0;
	var uLocal_3553 = 0;
	var uLocal_3554 = 20;
	var uLocal_3555 = 0;
	var uLocal_3556 = 0;
	var uLocal_3557 = 0;
	var uLocal_3558 = 0;
	var uLocal_3559 = 0;
	var uLocal_3560 = 0;
	var uLocal_3561 = 0;
	var uLocal_3562 = 0;
	var uLocal_3563 = 0;
	var uLocal_3564 = 0;
	var uLocal_3565 = 0;
	var uLocal_3566 = 0;
	var uLocal_3567 = 0;
	var uLocal_3568 = 0;
	var uLocal_3569 = 0;
	var uLocal_3570 = 0;
	var uLocal_3571 = 0;
	var uLocal_3572 = 0;
	var uLocal_3573 = 0;
	var uLocal_3574 = 0;
	var uLocal_3575 = 0;
	var uLocal_3576 = 0;
	var uLocal_3577 = 0;
	var uLocal_3578 = 0;
	var uLocal_3579 = 0;
	var uLocal_3580 = 0;
	var uLocal_3581 = 0;
	var uLocal_3582 = 0;
	var uLocal_3583 = 0;
	var uLocal_3584 = 0;
	var uLocal_3585 = 0;
	var uLocal_3586 = 0;
	var uLocal_3587 = 0;
	var uLocal_3588 = 0;
	var uLocal_3589 = 0;
	var uLocal_3590 = 0;
	var uLocal_3591 = 0;
	var uLocal_3592 = 0;
	var uLocal_3593 = 0;
	var uLocal_3594 = 0;
	var uLocal_3595 = 0;
	var uLocal_3596 = 0;
	var uLocal_3597 = 0;
	var uLocal_3598 = 0;
	var uLocal_3599 = 0;
	var uLocal_3600 = 0;
	var uLocal_3601 = 0;
	var uLocal_3602 = 0;
	var uLocal_3603 = 0;
	var uLocal_3604 = 0;
	var uLocal_3605 = 0;
	var uLocal_3606 = 0;
	var uLocal_3607 = 0;
	var uLocal_3608 = 0;
	var uLocal_3609 = 0;
	var uLocal_3610 = 0;
	var uLocal_3611 = 0;
	var uLocal_3612 = 0;
	var uLocal_3613 = 0;
	var uLocal_3614 = 0;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 20;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = 0;
	var uLocal_3632 = 0;
	var uLocal_3633 = 0;
	var uLocal_3634 = 0;
	var uLocal_3635 = 0;
	var uLocal_3636 = 0;
	var uLocal_3637 = 0;
	var uLocal_3638 = 0;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 0;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 0;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 0;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = 0;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 0;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 20;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = 0;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 0;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 20;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = 0;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 0;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 20;
	var uLocal_3823 = 0;
	var uLocal_3824 = 0;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 0;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = 0;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 20;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 0;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = 0;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 20;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 0;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = 0;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 20;
	var uLocal_4024 = 0;
	var uLocal_4025 = 0;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = 0;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 0;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 20;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = 0;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 0;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 20;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = 0;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 0;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = 0;
	var uLocal_4224 = 20;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 0;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = 0;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 20;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 0;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = 0;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 20;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 0;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = 0;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 0;
	var uLocal_4425 = 20;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = 0;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 0;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 20;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = 0;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 0;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 20;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = 0;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 0;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = 0;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 20;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 0;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = 0;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 20;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 0;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = 0;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 20;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 0;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 0;
	var uLocal_4791 = 0;
	var uLocal_4792 = 0;
	var uLocal_4793 = 0;
	var uLocal_4794 = 0;
	var uLocal_4795 = 0;
	var uLocal_4796 = 0;
	var uLocal_4797 = 0;
	var uLocal_4798 = 0;
	var uLocal_4799 = 0;
	var uLocal_4800 = 0;
	var uLocal_4801 = 0;
	var uLocal_4802 = 0;
	var uLocal_4803 = 0;
	var uLocal_4804 = 0;
	var uLocal_4805 = 0;
	var uLocal_4806 = 0;
	var uLocal_4807 = 0;
	var uLocal_4808 = 0;
	var uLocal_4809 = 0;
	var uLocal_4810 = 0;
	var uLocal_4811 = 0;
	var uLocal_4812 = 0;
	var uLocal_4813 = 0;
	var uLocal_4814 = 0;
	var uLocal_4815 = 0;
	var uLocal_4816 = 0;
	var uLocal_4817 = 0;
	var uLocal_4818 = 0;
	var uLocal_4819 = 0;
	var uLocal_4820 = 0;
	var uLocal_4821 = 0;
	var uLocal_4822 = 0;
	var uLocal_4823 = 0;
	var uLocal_4824 = 0;
	var uLocal_4825 = 0;
	var uLocal_4826 = 0;
	var uLocal_4827 = 20;
	var uLocal_4828 = 0;
	var uLocal_4829 = 0;
	var uLocal_4830 = 0;
	var uLocal_4831 = 0;
	var uLocal_4832 = 0;
	var uLocal_4833 = 0;
	var uLocal_4834 = 0;
	var uLocal_4835 = 0;
	var uLocal_4836 = 0;
	var uLocal_4837 = 0;
	var uLocal_4838 = 0;
	var uLocal_4839 = 0;
	var uLocal_4840 = 0;
	var uLocal_4841 = 0;
	var uLocal_4842 = 0;
	var uLocal_4843 = 0;
	var uLocal_4844 = 0;
	var uLocal_4845 = 0;
	var uLocal_4846 = 0;
	var uLocal_4847 = 0;
	var uLocal_4848 = 0;
	var uLocal_4849 = 0;
	var uLocal_4850 = 0;
	var uLocal_4851 = 0;
	var uLocal_4852 = 0;
	var uLocal_4853 = 0;
	var uLocal_4854 = 0;
	var uLocal_4855 = 0;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = 0;
	var uLocal_4873 = 0;
	var uLocal_4874 = 0;
	var uLocal_4875 = 0;
	var uLocal_4876 = 0;
	var uLocal_4877 = 0;
	var uLocal_4878 = 0;
	var uLocal_4879 = 0;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 0;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 0;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 0;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = 20;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 0;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = 0;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 20;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 0;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = 0;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 20;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 0;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = 0;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 20;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = 0;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 0;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 20;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = 0;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 0;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 20;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = 0;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 0;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = 0;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 20;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 0;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = 0;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 20;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 0;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = 0;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 20;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 0;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = 0;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 0;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 20;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = 0;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 0;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 20;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = 0;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 0;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 20;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = 0;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 0;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = 0;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 20;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 0;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = 0;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 20;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 0;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = 0;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 10;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 0;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = 0;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 10;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 0;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = 3;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 5;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 5;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 0;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 5;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = 0;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 24;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 0;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 0;
	var uLocal_6032 = 0;
	var uLocal_6033 = 0;
	var uLocal_6034 = 0;
	var uLocal_6035 = 0;
	var uLocal_6036 = 0;
	var uLocal_6037 = 0;
	var uLocal_6038 = 0;
	var uLocal_6039 = 0;
	var uLocal_6040 = 0;
	var uLocal_6041 = 0;
	var uLocal_6042 = 0;
	var uLocal_6043 = 0;
	var uLocal_6044 = 0;
	var uLocal_6045 = 0;
	var uLocal_6046 = 0;
	var uLocal_6047 = 0;
	var uLocal_6048 = 0;
	var uLocal_6049 = 0;
	var uLocal_6050 = 0;
	var uLocal_6051 = 0;
	var uLocal_6052 = 0;
	var uLocal_6053 = 0;
	var uLocal_6054 = 0;
	var uLocal_6055 = 0;
	var uLocal_6056 = 0;
	var uLocal_6057 = 0;
	var uLocal_6058 = 0;
	var uLocal_6059 = 0;
	var uLocal_6060 = 0;
	var uLocal_6061 = 0;
	var uLocal_6062 = 0;
	var uLocal_6063 = 0;
	var uLocal_6064 = 0;
	var uLocal_6065 = 0;
	var uLocal_6066 = 0;
	var uLocal_6067 = 0;
	var uLocal_6068 = 0;
	var uLocal_6069 = 0;
	var uLocal_6070 = 0;
	var uLocal_6071 = 0;
	var uLocal_6072 = 0;
	var uLocal_6073 = 0;
	var uLocal_6074 = 0;
	var uLocal_6075 = 0;
	var uLocal_6076 = 0;
	var uLocal_6077 = 0;
	var uLocal_6078 = 0;
	var uLocal_6079 = 0;
	var uLocal_6080 = 0;
	var uLocal_6081 = 0;
	var uLocal_6082 = 0;
	var uLocal_6083 = 0;
	var uLocal_6084 = 0;
	var uLocal_6085 = 0;
	var uLocal_6086 = 0;
	var uLocal_6087 = 0;
	var uLocal_6088 = 0;
	var uLocal_6089 = 0;
	var uLocal_6090 = 0;
	var uLocal_6091 = 0;
	var uLocal_6092 = 0;
	var uLocal_6093 = 0;
	var uLocal_6094 = 0;
	var uLocal_6095 = 0;
	var uLocal_6096 = 0;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 30;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 3;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = 0;
	var uLocal_6114 = 0;
	var uLocal_6115 = -1;
	var uLocal_6116 = 0;
	var uLocal_6117 = 5;
	var uLocal_6118 = 0;
	var uLocal_6119 = 0;
	var uLocal_6120 = 0;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 0;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 10;
	var uLocal_6129 = 3;
	var uLocal_6130 = 500;
	var uLocal_6131 = 10000;
	var uLocal_6132 = 0;
	var uLocal_6133 = 3;
	var uLocal_6134 = 500;
	var uLocal_6135 = 10000;
	var uLocal_6136 = 0;
	var uLocal_6137 = 3;
	var uLocal_6138 = 500;
	var uLocal_6139 = 10000;
	var uLocal_6140 = 0;
	var uLocal_6141 = 3;
	var uLocal_6142 = 500;
	var uLocal_6143 = 10000;
	var uLocal_6144 = 0;
	var uLocal_6145 = 3;
	var uLocal_6146 = 500;
	var uLocal_6147 = 10000;
	var uLocal_6148 = 0;
	var uLocal_6149 = 3;
	var uLocal_6150 = 500;
	var uLocal_6151 = 10000;
	var uLocal_6152 = 0;
	var uLocal_6153 = 3;
	var uLocal_6154 = 500;
	var uLocal_6155 = 10000;
	var uLocal_6156 = 0;
	var uLocal_6157 = 3;
	var uLocal_6158 = 500;
	var uLocal_6159 = 10000;
	var uLocal_6160 = 0;
	var uLocal_6161 = 3;
	var uLocal_6162 = 500;
	var uLocal_6163 = 10000;
	var uLocal_6164 = 0;
	var uLocal_6165 = 3;
	var uLocal_6166 = 500;
	var uLocal_6167 = 10000;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 3;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = -1;
	var uLocal_6181 = 0;
	var uLocal_6182 = 5;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = 0;
	var uLocal_6193 = 10;
	var uLocal_6194 = 3;
	var uLocal_6195 = 500;
	var uLocal_6196 = 10000;
	var uLocal_6197 = 0;
	var uLocal_6198 = 3;
	var uLocal_6199 = 500;
	var uLocal_6200 = 10000;
	var uLocal_6201 = 0;
	var uLocal_6202 = 3;
	var uLocal_6203 = 500;
	var uLocal_6204 = 10000;
	var uLocal_6205 = 0;
	var uLocal_6206 = 3;
	var uLocal_6207 = 500;
	var uLocal_6208 = 10000;
	var uLocal_6209 = 0;
	var uLocal_6210 = 3;
	var uLocal_6211 = 500;
	var uLocal_6212 = 10000;
	var uLocal_6213 = 0;
	var uLocal_6214 = 3;
	var uLocal_6215 = 500;
	var uLocal_6216 = 10000;
	var uLocal_6217 = 0;
	var uLocal_6218 = 3;
	var uLocal_6219 = 500;
	var uLocal_6220 = 10000;
	var uLocal_6221 = 0;
	var uLocal_6222 = 3;
	var uLocal_6223 = 500;
	var uLocal_6224 = 10000;
	var uLocal_6225 = 0;
	var uLocal_6226 = 3;
	var uLocal_6227 = 500;
	var uLocal_6228 = 10000;
	var uLocal_6229 = 0;
	var uLocal_6230 = 3;
	var uLocal_6231 = 500;
	var uLocal_6232 = 10000;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 3;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = -1;
	var uLocal_6246 = 0;
	var uLocal_6247 = 5;
	var uLocal_6248 = 0;
	var uLocal_6249 = 0;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 10;
	var uLocal_6259 = 3;
	var uLocal_6260 = 500;
	var uLocal_6261 = 10000;
	var uLocal_6262 = 0;
	var uLocal_6263 = 3;
	var uLocal_6264 = 500;
	var uLocal_6265 = 10000;
	var uLocal_6266 = 0;
	var uLocal_6267 = 3;
	var uLocal_6268 = 500;
	var uLocal_6269 = 10000;
	var uLocal_6270 = 0;
	var uLocal_6271 = 3;
	var uLocal_6272 = 500;
	var uLocal_6273 = 10000;
	var uLocal_6274 = 0;
	var uLocal_6275 = 3;
	var uLocal_6276 = 500;
	var uLocal_6277 = 10000;
	var uLocal_6278 = 0;
	var uLocal_6279 = 3;
	var uLocal_6280 = 500;
	var uLocal_6281 = 10000;
	var uLocal_6282 = 0;
	var uLocal_6283 = 3;
	var uLocal_6284 = 500;
	var uLocal_6285 = 10000;
	var uLocal_6286 = 0;
	var uLocal_6287 = 3;
	var uLocal_6288 = 500;
	var uLocal_6289 = 10000;
	var uLocal_6290 = 0;
	var uLocal_6291 = 3;
	var uLocal_6292 = 500;
	var uLocal_6293 = 10000;
	var uLocal_6294 = 0;
	var uLocal_6295 = 3;
	var uLocal_6296 = 500;
	var uLocal_6297 = 10000;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 3;
	var uLocal_6306 = 0;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = -1;
	var uLocal_6311 = 0;
	var uLocal_6312 = 5;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 10;
	var uLocal_6324 = 3;
	var uLocal_6325 = 500;
	var uLocal_6326 = 10000;
	var uLocal_6327 = 0;
	var uLocal_6328 = 3;
	var uLocal_6329 = 500;
	var uLocal_6330 = 10000;
	var uLocal_6331 = 0;
	var uLocal_6332 = 3;
	var uLocal_6333 = 500;
	var uLocal_6334 = 10000;
	var uLocal_6335 = 0;
	var uLocal_6336 = 3;
	var uLocal_6337 = 500;
	var uLocal_6338 = 10000;
	var uLocal_6339 = 0;
	var uLocal_6340 = 3;
	var uLocal_6341 = 500;
	var uLocal_6342 = 10000;
	var uLocal_6343 = 0;
	var uLocal_6344 = 3;
	var uLocal_6345 = 500;
	var uLocal_6346 = 10000;
	var uLocal_6347 = 0;
	var uLocal_6348 = 3;
	var uLocal_6349 = 500;
	var uLocal_6350 = 10000;
	var uLocal_6351 = 0;
	var uLocal_6352 = 3;
	var uLocal_6353 = 500;
	var uLocal_6354 = 10000;
	var uLocal_6355 = 0;
	var uLocal_6356 = 3;
	var uLocal_6357 = 500;
	var uLocal_6358 = 10000;
	var uLocal_6359 = 0;
	var uLocal_6360 = 3;
	var uLocal_6361 = 500;
	var uLocal_6362 = 10000;
	var uLocal_6363 = 0;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 3;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = -1;
	var uLocal_6376 = 0;
	var uLocal_6377 = 5;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 10;
	var uLocal_6389 = 3;
	var uLocal_6390 = 500;
	var uLocal_6391 = 10000;
	var uLocal_6392 = 0;
	var uLocal_6393 = 3;
	var uLocal_6394 = 500;
	var uLocal_6395 = 10000;
	var uLocal_6396 = 0;
	var uLocal_6397 = 3;
	var uLocal_6398 = 500;
	var uLocal_6399 = 10000;
	var uLocal_6400 = 0;
	var uLocal_6401 = 3;
	var uLocal_6402 = 500;
	var uLocal_6403 = 10000;
	var uLocal_6404 = 0;
	var uLocal_6405 = 3;
	var uLocal_6406 = 500;
	var uLocal_6407 = 10000;
	var uLocal_6408 = 0;
	var uLocal_6409 = 3;
	var uLocal_6410 = 500;
	var uLocal_6411 = 10000;
	var uLocal_6412 = 0;
	var uLocal_6413 = 3;
	var uLocal_6414 = 500;
	var uLocal_6415 = 10000;
	var uLocal_6416 = 0;
	var uLocal_6417 = 3;
	var uLocal_6418 = 500;
	var uLocal_6419 = 10000;
	var uLocal_6420 = 0;
	var uLocal_6421 = 3;
	var uLocal_6422 = 500;
	var uLocal_6423 = 10000;
	var uLocal_6424 = 0;
	var uLocal_6425 = 3;
	var uLocal_6426 = 500;
	var uLocal_6427 = 10000;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 3;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = -1;
	var uLocal_6441 = 0;
	var uLocal_6442 = 5;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 0;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 10;
	var uLocal_6454 = 3;
	var uLocal_6455 = 500;
	var uLocal_6456 = 10000;
	var uLocal_6457 = 0;
	var uLocal_6458 = 3;
	var uLocal_6459 = 500;
	var uLocal_6460 = 10000;
	var uLocal_6461 = 0;
	var uLocal_6462 = 3;
	var uLocal_6463 = 500;
	var uLocal_6464 = 10000;
	var uLocal_6465 = 0;
	var uLocal_6466 = 3;
	var uLocal_6467 = 500;
	var uLocal_6468 = 10000;
	var uLocal_6469 = 0;
	var uLocal_6470 = 3;
	var uLocal_6471 = 500;
	var uLocal_6472 = 10000;
	var uLocal_6473 = 0;
	var uLocal_6474 = 3;
	var uLocal_6475 = 500;
	var uLocal_6476 = 10000;
	var uLocal_6477 = 0;
	var uLocal_6478 = 3;
	var uLocal_6479 = 500;
	var uLocal_6480 = 10000;
	var uLocal_6481 = 0;
	var uLocal_6482 = 3;
	var uLocal_6483 = 500;
	var uLocal_6484 = 10000;
	var uLocal_6485 = 0;
	var uLocal_6486 = 3;
	var uLocal_6487 = 500;
	var uLocal_6488 = 10000;
	var uLocal_6489 = 0;
	var uLocal_6490 = 3;
	var uLocal_6491 = 500;
	var uLocal_6492 = 10000;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 3;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = -1;
	var uLocal_6506 = 0;
	var uLocal_6507 = 5;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 10;
	var uLocal_6519 = 3;
	var uLocal_6520 = 500;
	var uLocal_6521 = 10000;
	var uLocal_6522 = 0;
	var uLocal_6523 = 3;
	var uLocal_6524 = 500;
	var uLocal_6525 = 10000;
	var uLocal_6526 = 0;
	var uLocal_6527 = 3;
	var uLocal_6528 = 500;
	var uLocal_6529 = 10000;
	var uLocal_6530 = 0;
	var uLocal_6531 = 3;
	var uLocal_6532 = 500;
	var uLocal_6533 = 10000;
	var uLocal_6534 = 0;
	var uLocal_6535 = 3;
	var uLocal_6536 = 500;
	var uLocal_6537 = 10000;
	var uLocal_6538 = 0;
	var uLocal_6539 = 3;
	var uLocal_6540 = 500;
	var uLocal_6541 = 10000;
	var uLocal_6542 = 0;
	var uLocal_6543 = 3;
	var uLocal_6544 = 500;
	var uLocal_6545 = 10000;
	var uLocal_6546 = 0;
	var uLocal_6547 = 3;
	var uLocal_6548 = 500;
	var uLocal_6549 = 10000;
	var uLocal_6550 = 0;
	var uLocal_6551 = 3;
	var uLocal_6552 = 500;
	var uLocal_6553 = 10000;
	var uLocal_6554 = 0;
	var uLocal_6555 = 3;
	var uLocal_6556 = 500;
	var uLocal_6557 = 10000;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 0;
	var uLocal_6565 = 3;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = -1;
	var uLocal_6571 = 0;
	var uLocal_6572 = 5;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 10;
	var uLocal_6584 = 3;
	var uLocal_6585 = 500;
	var uLocal_6586 = 10000;
	var uLocal_6587 = 0;
	var uLocal_6588 = 3;
	var uLocal_6589 = 500;
	var uLocal_6590 = 10000;
	var uLocal_6591 = 0;
	var uLocal_6592 = 3;
	var uLocal_6593 = 500;
	var uLocal_6594 = 10000;
	var uLocal_6595 = 0;
	var uLocal_6596 = 3;
	var uLocal_6597 = 500;
	var uLocal_6598 = 10000;
	var uLocal_6599 = 0;
	var uLocal_6600 = 3;
	var uLocal_6601 = 500;
	var uLocal_6602 = 10000;
	var uLocal_6603 = 0;
	var uLocal_6604 = 3;
	var uLocal_6605 = 500;
	var uLocal_6606 = 10000;
	var uLocal_6607 = 0;
	var uLocal_6608 = 3;
	var uLocal_6609 = 500;
	var uLocal_6610 = 10000;
	var uLocal_6611 = 0;
	var uLocal_6612 = 3;
	var uLocal_6613 = 500;
	var uLocal_6614 = 10000;
	var uLocal_6615 = 0;
	var uLocal_6616 = 3;
	var uLocal_6617 = 500;
	var uLocal_6618 = 10000;
	var uLocal_6619 = 0;
	var uLocal_6620 = 3;
	var uLocal_6621 = 500;
	var uLocal_6622 = 10000;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 3;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = -1;
	var uLocal_6636 = 0;
	var uLocal_6637 = 5;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = 10;
	var uLocal_6649 = 3;
	var uLocal_6650 = 500;
	var uLocal_6651 = 10000;
	var uLocal_6652 = 0;
	var uLocal_6653 = 3;
	var uLocal_6654 = 500;
	var uLocal_6655 = 10000;
	var uLocal_6656 = 0;
	var uLocal_6657 = 3;
	var uLocal_6658 = 500;
	var uLocal_6659 = 10000;
	var uLocal_6660 = 0;
	var uLocal_6661 = 3;
	var uLocal_6662 = 500;
	var uLocal_6663 = 10000;
	var uLocal_6664 = 0;
	var uLocal_6665 = 3;
	var uLocal_6666 = 500;
	var uLocal_6667 = 10000;
	var uLocal_6668 = 0;
	var uLocal_6669 = 3;
	var uLocal_6670 = 500;
	var uLocal_6671 = 10000;
	var uLocal_6672 = 0;
	var uLocal_6673 = 3;
	var uLocal_6674 = 500;
	var uLocal_6675 = 10000;
	var uLocal_6676 = 0;
	var uLocal_6677 = 3;
	var uLocal_6678 = 500;
	var uLocal_6679 = 10000;
	var uLocal_6680 = 0;
	var uLocal_6681 = 3;
	var uLocal_6682 = 500;
	var uLocal_6683 = 10000;
	var uLocal_6684 = 0;
	var uLocal_6685 = 3;
	var uLocal_6686 = 500;
	var uLocal_6687 = 10000;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 3;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = -1;
	var uLocal_6701 = 0;
	var uLocal_6702 = 5;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = 0;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 10;
	var uLocal_6714 = 3;
	var uLocal_6715 = 500;
	var uLocal_6716 = 10000;
	var uLocal_6717 = 0;
	var uLocal_6718 = 3;
	var uLocal_6719 = 500;
	var uLocal_6720 = 10000;
	var uLocal_6721 = 0;
	var uLocal_6722 = 3;
	var uLocal_6723 = 500;
	var uLocal_6724 = 10000;
	var uLocal_6725 = 0;
	var uLocal_6726 = 3;
	var uLocal_6727 = 500;
	var uLocal_6728 = 10000;
	var uLocal_6729 = 0;
	var uLocal_6730 = 3;
	var uLocal_6731 = 500;
	var uLocal_6732 = 10000;
	var uLocal_6733 = 0;
	var uLocal_6734 = 3;
	var uLocal_6735 = 500;
	var uLocal_6736 = 10000;
	var uLocal_6737 = 0;
	var uLocal_6738 = 3;
	var uLocal_6739 = 500;
	var uLocal_6740 = 10000;
	var uLocal_6741 = 0;
	var uLocal_6742 = 3;
	var uLocal_6743 = 500;
	var uLocal_6744 = 10000;
	var uLocal_6745 = 0;
	var uLocal_6746 = 3;
	var uLocal_6747 = 500;
	var uLocal_6748 = 10000;
	var uLocal_6749 = 0;
	var uLocal_6750 = 3;
	var uLocal_6751 = 500;
	var uLocal_6752 = 10000;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 3;
	var uLocal_6761 = 0;
	var uLocal_6762 = 0;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = -1;
	var uLocal_6766 = 0;
	var uLocal_6767 = 5;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 10;
	var uLocal_6779 = 3;
	var uLocal_6780 = 500;
	var uLocal_6781 = 10000;
	var uLocal_6782 = 0;
	var uLocal_6783 = 3;
	var uLocal_6784 = 500;
	var uLocal_6785 = 10000;
	var uLocal_6786 = 0;
	var uLocal_6787 = 3;
	var uLocal_6788 = 500;
	var uLocal_6789 = 10000;
	var uLocal_6790 = 0;
	var uLocal_6791 = 3;
	var uLocal_6792 = 500;
	var uLocal_6793 = 10000;
	var uLocal_6794 = 0;
	var uLocal_6795 = 3;
	var uLocal_6796 = 500;
	var uLocal_6797 = 10000;
	var uLocal_6798 = 0;
	var uLocal_6799 = 3;
	var uLocal_6800 = 500;
	var uLocal_6801 = 10000;
	var uLocal_6802 = 0;
	var uLocal_6803 = 3;
	var uLocal_6804 = 500;
	var uLocal_6805 = 10000;
	var uLocal_6806 = 0;
	var uLocal_6807 = 3;
	var uLocal_6808 = 500;
	var uLocal_6809 = 10000;
	var uLocal_6810 = 0;
	var uLocal_6811 = 3;
	var uLocal_6812 = 500;
	var uLocal_6813 = 10000;
	var uLocal_6814 = 0;
	var uLocal_6815 = 3;
	var uLocal_6816 = 500;
	var uLocal_6817 = 10000;
	var uLocal_6818 = 0;
	var uLocal_6819 = 0;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 3;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = -1;
	var uLocal_6831 = 0;
	var uLocal_6832 = 5;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 10;
	var uLocal_6844 = 3;
	var uLocal_6845 = 500;
	var uLocal_6846 = 10000;
	var uLocal_6847 = 0;
	var uLocal_6848 = 3;
	var uLocal_6849 = 500;
	var uLocal_6850 = 10000;
	var uLocal_6851 = 0;
	var uLocal_6852 = 3;
	var uLocal_6853 = 500;
	var uLocal_6854 = 10000;
	var uLocal_6855 = 0;
	var uLocal_6856 = 3;
	var uLocal_6857 = 500;
	var uLocal_6858 = 10000;
	var uLocal_6859 = 0;
	var uLocal_6860 = 3;
	var uLocal_6861 = 500;
	var uLocal_6862 = 10000;
	var uLocal_6863 = 0;
	var uLocal_6864 = 3;
	var uLocal_6865 = 500;
	var uLocal_6866 = 10000;
	var uLocal_6867 = 0;
	var uLocal_6868 = 3;
	var uLocal_6869 = 500;
	var uLocal_6870 = 10000;
	var uLocal_6871 = 0;
	var uLocal_6872 = 3;
	var uLocal_6873 = 500;
	var uLocal_6874 = 10000;
	var uLocal_6875 = 0;
	var uLocal_6876 = 3;
	var uLocal_6877 = 500;
	var uLocal_6878 = 10000;
	var uLocal_6879 = 0;
	var uLocal_6880 = 3;
	var uLocal_6881 = 500;
	var uLocal_6882 = 10000;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 3;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = -1;
	var uLocal_6896 = 0;
	var uLocal_6897 = 5;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 0;
	var uLocal_6907 = 0;
	var uLocal_6908 = 10;
	var uLocal_6909 = 3;
	var uLocal_6910 = 500;
	var uLocal_6911 = 10000;
	var uLocal_6912 = 0;
	var uLocal_6913 = 3;
	var uLocal_6914 = 500;
	var uLocal_6915 = 10000;
	var uLocal_6916 = 0;
	var uLocal_6917 = 3;
	var uLocal_6918 = 500;
	var uLocal_6919 = 10000;
	var uLocal_6920 = 0;
	var uLocal_6921 = 3;
	var uLocal_6922 = 500;
	var uLocal_6923 = 10000;
	var uLocal_6924 = 0;
	var uLocal_6925 = 3;
	var uLocal_6926 = 500;
	var uLocal_6927 = 10000;
	var uLocal_6928 = 0;
	var uLocal_6929 = 3;
	var uLocal_6930 = 500;
	var uLocal_6931 = 10000;
	var uLocal_6932 = 0;
	var uLocal_6933 = 3;
	var uLocal_6934 = 500;
	var uLocal_6935 = 10000;
	var uLocal_6936 = 0;
	var uLocal_6937 = 3;
	var uLocal_6938 = 500;
	var uLocal_6939 = 10000;
	var uLocal_6940 = 0;
	var uLocal_6941 = 3;
	var uLocal_6942 = 500;
	var uLocal_6943 = 10000;
	var uLocal_6944 = 0;
	var uLocal_6945 = 3;
	var uLocal_6946 = 500;
	var uLocal_6947 = 10000;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 3;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = -1;
	var uLocal_6961 = 0;
	var uLocal_6962 = 5;
	var uLocal_6963 = 0;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 10;
	var uLocal_6974 = 3;
	var uLocal_6975 = 500;
	var uLocal_6976 = 10000;
	var uLocal_6977 = 0;
	var uLocal_6978 = 3;
	var uLocal_6979 = 500;
	var uLocal_6980 = 10000;
	var uLocal_6981 = 0;
	var uLocal_6982 = 3;
	var uLocal_6983 = 500;
	var uLocal_6984 = 10000;
	var uLocal_6985 = 0;
	var uLocal_6986 = 3;
	var uLocal_6987 = 500;
	var uLocal_6988 = 10000;
	var uLocal_6989 = 0;
	var uLocal_6990 = 3;
	var uLocal_6991 = 500;
	var uLocal_6992 = 10000;
	var uLocal_6993 = 0;
	var uLocal_6994 = 3;
	var uLocal_6995 = 500;
	var uLocal_6996 = 10000;
	var uLocal_6997 = 0;
	var uLocal_6998 = 3;
	var uLocal_6999 = 500;
	var uLocal_7000 = 10000;
	var uLocal_7001 = 0;
	var uLocal_7002 = 3;
	var uLocal_7003 = 500;
	var uLocal_7004 = 10000;
	var uLocal_7005 = 0;
	var uLocal_7006 = 3;
	var uLocal_7007 = 500;
	var uLocal_7008 = 10000;
	var uLocal_7009 = 0;
	var uLocal_7010 = 3;
	var uLocal_7011 = 500;
	var uLocal_7012 = 10000;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 3;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = -1;
	var uLocal_7026 = 0;
	var uLocal_7027 = 5;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 10;
	var uLocal_7039 = 3;
	var uLocal_7040 = 500;
	var uLocal_7041 = 10000;
	var uLocal_7042 = 0;
	var uLocal_7043 = 3;
	var uLocal_7044 = 500;
	var uLocal_7045 = 10000;
	var uLocal_7046 = 0;
	var uLocal_7047 = 3;
	var uLocal_7048 = 500;
	var uLocal_7049 = 10000;
	var uLocal_7050 = 0;
	var uLocal_7051 = 3;
	var uLocal_7052 = 500;
	var uLocal_7053 = 10000;
	var uLocal_7054 = 0;
	var uLocal_7055 = 3;
	var uLocal_7056 = 500;
	var uLocal_7057 = 10000;
	var uLocal_7058 = 0;
	var uLocal_7059 = 3;
	var uLocal_7060 = 500;
	var uLocal_7061 = 10000;
	var uLocal_7062 = 0;
	var uLocal_7063 = 3;
	var uLocal_7064 = 500;
	var uLocal_7065 = 10000;
	var uLocal_7066 = 0;
	var uLocal_7067 = 3;
	var uLocal_7068 = 500;
	var uLocal_7069 = 10000;
	var uLocal_7070 = 0;
	var uLocal_7071 = 3;
	var uLocal_7072 = 500;
	var uLocal_7073 = 10000;
	var uLocal_7074 = 0;
	var uLocal_7075 = 3;
	var uLocal_7076 = 500;
	var uLocal_7077 = 10000;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 3;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = -1;
	var uLocal_7091 = 0;
	var uLocal_7092 = 5;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 10;
	var uLocal_7104 = 3;
	var uLocal_7105 = 500;
	var uLocal_7106 = 10000;
	var uLocal_7107 = 0;
	var uLocal_7108 = 3;
	var uLocal_7109 = 500;
	var uLocal_7110 = 10000;
	var uLocal_7111 = 0;
	var uLocal_7112 = 3;
	var uLocal_7113 = 500;
	var uLocal_7114 = 10000;
	var uLocal_7115 = 0;
	var uLocal_7116 = 3;
	var uLocal_7117 = 500;
	var uLocal_7118 = 10000;
	var uLocal_7119 = 0;
	var uLocal_7120 = 3;
	var uLocal_7121 = 500;
	var uLocal_7122 = 10000;
	var uLocal_7123 = 0;
	var uLocal_7124 = 3;
	var uLocal_7125 = 500;
	var uLocal_7126 = 10000;
	var uLocal_7127 = 0;
	var uLocal_7128 = 3;
	var uLocal_7129 = 500;
	var uLocal_7130 = 10000;
	var uLocal_7131 = 0;
	var uLocal_7132 = 3;
	var uLocal_7133 = 500;
	var uLocal_7134 = 10000;
	var uLocal_7135 = 0;
	var uLocal_7136 = 3;
	var uLocal_7137 = 500;
	var uLocal_7138 = 10000;
	var uLocal_7139 = 0;
	var uLocal_7140 = 3;
	var uLocal_7141 = 500;
	var uLocal_7142 = 10000;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 3;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = -1;
	var uLocal_7156 = 0;
	var uLocal_7157 = 5;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = 0;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 10;
	var uLocal_7169 = 3;
	var uLocal_7170 = 500;
	var uLocal_7171 = 10000;
	var uLocal_7172 = 0;
	var uLocal_7173 = 3;
	var uLocal_7174 = 500;
	var uLocal_7175 = 10000;
	var uLocal_7176 = 0;
	var uLocal_7177 = 3;
	var uLocal_7178 = 500;
	var uLocal_7179 = 10000;
	var uLocal_7180 = 0;
	var uLocal_7181 = 3;
	var uLocal_7182 = 500;
	var uLocal_7183 = 10000;
	var uLocal_7184 = 0;
	var uLocal_7185 = 3;
	var uLocal_7186 = 500;
	var uLocal_7187 = 10000;
	var uLocal_7188 = 0;
	var uLocal_7189 = 3;
	var uLocal_7190 = 500;
	var uLocal_7191 = 10000;
	var uLocal_7192 = 0;
	var uLocal_7193 = 3;
	var uLocal_7194 = 500;
	var uLocal_7195 = 10000;
	var uLocal_7196 = 0;
	var uLocal_7197 = 3;
	var uLocal_7198 = 500;
	var uLocal_7199 = 10000;
	var uLocal_7200 = 0;
	var uLocal_7201 = 3;
	var uLocal_7202 = 500;
	var uLocal_7203 = 10000;
	var uLocal_7204 = 0;
	var uLocal_7205 = 3;
	var uLocal_7206 = 500;
	var uLocal_7207 = 10000;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 3;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = 0;
	var uLocal_7219 = 0;
	var uLocal_7220 = -1;
	var uLocal_7221 = 0;
	var uLocal_7222 = 5;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 10;
	var uLocal_7234 = 3;
	var uLocal_7235 = 500;
	var uLocal_7236 = 10000;
	var uLocal_7237 = 0;
	var uLocal_7238 = 3;
	var uLocal_7239 = 500;
	var uLocal_7240 = 10000;
	var uLocal_7241 = 0;
	var uLocal_7242 = 3;
	var uLocal_7243 = 500;
	var uLocal_7244 = 10000;
	var uLocal_7245 = 0;
	var uLocal_7246 = 3;
	var uLocal_7247 = 500;
	var uLocal_7248 = 10000;
	var uLocal_7249 = 0;
	var uLocal_7250 = 3;
	var uLocal_7251 = 500;
	var uLocal_7252 = 10000;
	var uLocal_7253 = 0;
	var uLocal_7254 = 3;
	var uLocal_7255 = 500;
	var uLocal_7256 = 10000;
	var uLocal_7257 = 0;
	var uLocal_7258 = 3;
	var uLocal_7259 = 500;
	var uLocal_7260 = 10000;
	var uLocal_7261 = 0;
	var uLocal_7262 = 3;
	var uLocal_7263 = 500;
	var uLocal_7264 = 10000;
	var uLocal_7265 = 0;
	var uLocal_7266 = 3;
	var uLocal_7267 = 500;
	var uLocal_7268 = 10000;
	var uLocal_7269 = 0;
	var uLocal_7270 = 3;
	var uLocal_7271 = 500;
	var uLocal_7272 = 10000;
	var uLocal_7273 = 0;
	var uLocal_7274 = 0;
	var uLocal_7275 = 0;
	var uLocal_7276 = 0;
	var uLocal_7277 = 0;
	var uLocal_7278 = 0;
	var uLocal_7279 = 0;
	var uLocal_7280 = 3;
	var uLocal_7281 = 0;
	var uLocal_7282 = 0;
	var uLocal_7283 = 0;
	var uLocal_7284 = 0;
	var uLocal_7285 = -1;
	var uLocal_7286 = 0;
	var uLocal_7287 = 5;
	var uLocal_7288 = 0;
	var uLocal_7289 = 0;
	var uLocal_7290 = 0;
	var uLocal_7291 = 0;
	var uLocal_7292 = 0;
	var uLocal_7293 = 0;
	var uLocal_7294 = 0;
	var uLocal_7295 = 0;
	var uLocal_7296 = 0;
	var uLocal_7297 = 0;
	var uLocal_7298 = 10;
	var uLocal_7299 = 3;
	var uLocal_7300 = 500;
	var uLocal_7301 = 10000;
	var uLocal_7302 = 0;
	var uLocal_7303 = 3;
	var uLocal_7304 = 500;
	var uLocal_7305 = 10000;
	var uLocal_7306 = 0;
	var uLocal_7307 = 3;
	var uLocal_7308 = 500;
	var uLocal_7309 = 10000;
	var uLocal_7310 = 0;
	var uLocal_7311 = 3;
	var uLocal_7312 = 500;
	var uLocal_7313 = 10000;
	var uLocal_7314 = 0;
	var uLocal_7315 = 3;
	var uLocal_7316 = 500;
	var uLocal_7317 = 10000;
	var uLocal_7318 = 0;
	var uLocal_7319 = 3;
	var uLocal_7320 = 500;
	var uLocal_7321 = 10000;
	var uLocal_7322 = 0;
	var uLocal_7323 = 3;
	var uLocal_7324 = 500;
	var uLocal_7325 = 10000;
	var uLocal_7326 = 0;
	var uLocal_7327 = 3;
	var uLocal_7328 = 500;
	var uLocal_7329 = 10000;
	var uLocal_7330 = 0;
	var uLocal_7331 = 3;
	var uLocal_7332 = 500;
	var uLocal_7333 = 10000;
	var uLocal_7334 = 0;
	var uLocal_7335 = 3;
	var uLocal_7336 = 500;
	var uLocal_7337 = 10000;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 3;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = -1;
	var uLocal_7351 = 0;
	var uLocal_7352 = 5;
	var uLocal_7353 = 0;
	var uLocal_7354 = 0;
	var uLocal_7355 = 0;
	var uLocal_7356 = 0;
	var uLocal_7357 = 0;
	var uLocal_7358 = 0;
	var uLocal_7359 = 0;
	var uLocal_7360 = 0;
	var uLocal_7361 = 0;
	var uLocal_7362 = 0;
	var uLocal_7363 = 10;
	var uLocal_7364 = 3;
	var uLocal_7365 = 500;
	var uLocal_7366 = 10000;
	var uLocal_7367 = 0;
	var uLocal_7368 = 3;
	var uLocal_7369 = 500;
	var uLocal_7370 = 10000;
	var uLocal_7371 = 0;
	var uLocal_7372 = 3;
	var uLocal_7373 = 500;
	var uLocal_7374 = 10000;
	var uLocal_7375 = 0;
	var uLocal_7376 = 3;
	var uLocal_7377 = 500;
	var uLocal_7378 = 10000;
	var uLocal_7379 = 0;
	var uLocal_7380 = 3;
	var uLocal_7381 = 500;
	var uLocal_7382 = 10000;
	var uLocal_7383 = 0;
	var uLocal_7384 = 3;
	var uLocal_7385 = 500;
	var uLocal_7386 = 10000;
	var uLocal_7387 = 0;
	var uLocal_7388 = 3;
	var uLocal_7389 = 500;
	var uLocal_7390 = 10000;
	var uLocal_7391 = 0;
	var uLocal_7392 = 3;
	var uLocal_7393 = 500;
	var uLocal_7394 = 10000;
	var uLocal_7395 = 0;
	var uLocal_7396 = 3;
	var uLocal_7397 = 500;
	var uLocal_7398 = 10000;
	var uLocal_7399 = 0;
	var uLocal_7400 = 3;
	var uLocal_7401 = 500;
	var uLocal_7402 = 10000;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 0;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 3;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = -1;
	var uLocal_7416 = 0;
	var uLocal_7417 = 5;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 10;
	var uLocal_7429 = 3;
	var uLocal_7430 = 500;
	var uLocal_7431 = 10000;
	var uLocal_7432 = 0;
	var uLocal_7433 = 3;
	var uLocal_7434 = 500;
	var uLocal_7435 = 10000;
	var uLocal_7436 = 0;
	var uLocal_7437 = 3;
	var uLocal_7438 = 500;
	var uLocal_7439 = 10000;
	var uLocal_7440 = 0;
	var uLocal_7441 = 3;
	var uLocal_7442 = 500;
	var uLocal_7443 = 10000;
	var uLocal_7444 = 0;
	var uLocal_7445 = 3;
	var uLocal_7446 = 500;
	var uLocal_7447 = 10000;
	var uLocal_7448 = 0;
	var uLocal_7449 = 3;
	var uLocal_7450 = 500;
	var uLocal_7451 = 10000;
	var uLocal_7452 = 0;
	var uLocal_7453 = 3;
	var uLocal_7454 = 500;
	var uLocal_7455 = 10000;
	var uLocal_7456 = 0;
	var uLocal_7457 = 3;
	var uLocal_7458 = 500;
	var uLocal_7459 = 10000;
	var uLocal_7460 = 0;
	var uLocal_7461 = 3;
	var uLocal_7462 = 500;
	var uLocal_7463 = 10000;
	var uLocal_7464 = 0;
	var uLocal_7465 = 3;
	var uLocal_7466 = 500;
	var uLocal_7467 = 10000;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 3;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = -1;
	var uLocal_7481 = 0;
	var uLocal_7482 = 5;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 0;
	var uLocal_7489 = 0;
	var uLocal_7490 = 0;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 10;
	var uLocal_7494 = 3;
	var uLocal_7495 = 500;
	var uLocal_7496 = 10000;
	var uLocal_7497 = 0;
	var uLocal_7498 = 3;
	var uLocal_7499 = 500;
	var uLocal_7500 = 10000;
	var uLocal_7501 = 0;
	var uLocal_7502 = 3;
	var uLocal_7503 = 500;
	var uLocal_7504 = 10000;
	var uLocal_7505 = 0;
	var uLocal_7506 = 3;
	var uLocal_7507 = 500;
	var uLocal_7508 = 10000;
	var uLocal_7509 = 0;
	var uLocal_7510 = 3;
	var uLocal_7511 = 500;
	var uLocal_7512 = 10000;
	var uLocal_7513 = 0;
	var uLocal_7514 = 3;
	var uLocal_7515 = 500;
	var uLocal_7516 = 10000;
	var uLocal_7517 = 0;
	var uLocal_7518 = 3;
	var uLocal_7519 = 500;
	var uLocal_7520 = 10000;
	var uLocal_7521 = 0;
	var uLocal_7522 = 3;
	var uLocal_7523 = 500;
	var uLocal_7524 = 10000;
	var uLocal_7525 = 0;
	var uLocal_7526 = 3;
	var uLocal_7527 = 500;
	var uLocal_7528 = 10000;
	var uLocal_7529 = 0;
	var uLocal_7530 = 3;
	var uLocal_7531 = 500;
	var uLocal_7532 = 10000;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 3;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = -1;
	var uLocal_7546 = 0;
	var uLocal_7547 = 5;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = 0;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = 0;
	var uLocal_7557 = 0;
	var uLocal_7558 = 10;
	var uLocal_7559 = 3;
	var uLocal_7560 = 500;
	var uLocal_7561 = 10000;
	var uLocal_7562 = 0;
	var uLocal_7563 = 3;
	var uLocal_7564 = 500;
	var uLocal_7565 = 10000;
	var uLocal_7566 = 0;
	var uLocal_7567 = 3;
	var uLocal_7568 = 500;
	var uLocal_7569 = 10000;
	var uLocal_7570 = 0;
	var uLocal_7571 = 3;
	var uLocal_7572 = 500;
	var uLocal_7573 = 10000;
	var uLocal_7574 = 0;
	var uLocal_7575 = 3;
	var uLocal_7576 = 500;
	var uLocal_7577 = 10000;
	var uLocal_7578 = 0;
	var uLocal_7579 = 3;
	var uLocal_7580 = 500;
	var uLocal_7581 = 10000;
	var uLocal_7582 = 0;
	var uLocal_7583 = 3;
	var uLocal_7584 = 500;
	var uLocal_7585 = 10000;
	var uLocal_7586 = 0;
	var uLocal_7587 = 3;
	var uLocal_7588 = 500;
	var uLocal_7589 = 10000;
	var uLocal_7590 = 0;
	var uLocal_7591 = 3;
	var uLocal_7592 = 500;
	var uLocal_7593 = 10000;
	var uLocal_7594 = 0;
	var uLocal_7595 = 3;
	var uLocal_7596 = 500;
	var uLocal_7597 = 10000;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = 0;
	var uLocal_7605 = 3;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = -1;
	var uLocal_7611 = 0;
	var uLocal_7612 = 5;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 10;
	var uLocal_7624 = 3;
	var uLocal_7625 = 500;
	var uLocal_7626 = 10000;
	var uLocal_7627 = 0;
	var uLocal_7628 = 3;
	var uLocal_7629 = 500;
	var uLocal_7630 = 10000;
	var uLocal_7631 = 0;
	var uLocal_7632 = 3;
	var uLocal_7633 = 500;
	var uLocal_7634 = 10000;
	var uLocal_7635 = 0;
	var uLocal_7636 = 3;
	var uLocal_7637 = 500;
	var uLocal_7638 = 10000;
	var uLocal_7639 = 0;
	var uLocal_7640 = 3;
	var uLocal_7641 = 500;
	var uLocal_7642 = 10000;
	var uLocal_7643 = 0;
	var uLocal_7644 = 3;
	var uLocal_7645 = 500;
	var uLocal_7646 = 10000;
	var uLocal_7647 = 0;
	var uLocal_7648 = 3;
	var uLocal_7649 = 500;
	var uLocal_7650 = 10000;
	var uLocal_7651 = 0;
	var uLocal_7652 = 3;
	var uLocal_7653 = 500;
	var uLocal_7654 = 10000;
	var uLocal_7655 = 0;
	var uLocal_7656 = 3;
	var uLocal_7657 = 500;
	var uLocal_7658 = 10000;
	var uLocal_7659 = 0;
	var uLocal_7660 = 3;
	var uLocal_7661 = 500;
	var uLocal_7662 = 10000;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 3;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = -1;
	var uLocal_7676 = 0;
	var uLocal_7677 = 5;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 10;
	var uLocal_7689 = 3;
	var uLocal_7690 = 500;
	var uLocal_7691 = 10000;
	var uLocal_7692 = 0;
	var uLocal_7693 = 3;
	var uLocal_7694 = 500;
	var uLocal_7695 = 10000;
	var uLocal_7696 = 0;
	var uLocal_7697 = 3;
	var uLocal_7698 = 500;
	var uLocal_7699 = 10000;
	var uLocal_7700 = 0;
	var uLocal_7701 = 3;
	var uLocal_7702 = 500;
	var uLocal_7703 = 10000;
	var uLocal_7704 = 0;
	var uLocal_7705 = 3;
	var uLocal_7706 = 500;
	var uLocal_7707 = 10000;
	var uLocal_7708 = 0;
	var uLocal_7709 = 3;
	var uLocal_7710 = 500;
	var uLocal_7711 = 10000;
	var uLocal_7712 = 0;
	var uLocal_7713 = 3;
	var uLocal_7714 = 500;
	var uLocal_7715 = 10000;
	var uLocal_7716 = 0;
	var uLocal_7717 = 3;
	var uLocal_7718 = 500;
	var uLocal_7719 = 10000;
	var uLocal_7720 = 0;
	var uLocal_7721 = 3;
	var uLocal_7722 = 500;
	var uLocal_7723 = 10000;
	var uLocal_7724 = 0;
	var uLocal_7725 = 3;
	var uLocal_7726 = 500;
	var uLocal_7727 = 10000;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 3;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = -1;
	var uLocal_7741 = 0;
	var uLocal_7742 = 5;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 0;
	var uLocal_7749 = 0;
	var uLocal_7750 = 0;
	var uLocal_7751 = 0;
	var uLocal_7752 = 0;
	var uLocal_7753 = 10;
	var uLocal_7754 = 3;
	var uLocal_7755 = 500;
	var uLocal_7756 = 10000;
	var uLocal_7757 = 0;
	var uLocal_7758 = 3;
	var uLocal_7759 = 500;
	var uLocal_7760 = 10000;
	var uLocal_7761 = 0;
	var uLocal_7762 = 3;
	var uLocal_7763 = 500;
	var uLocal_7764 = 10000;
	var uLocal_7765 = 0;
	var uLocal_7766 = 3;
	var uLocal_7767 = 500;
	var uLocal_7768 = 10000;
	var uLocal_7769 = 0;
	var uLocal_7770 = 3;
	var uLocal_7771 = 500;
	var uLocal_7772 = 10000;
	var uLocal_7773 = 0;
	var uLocal_7774 = 3;
	var uLocal_7775 = 500;
	var uLocal_7776 = 10000;
	var uLocal_7777 = 0;
	var uLocal_7778 = 3;
	var uLocal_7779 = 500;
	var uLocal_7780 = 10000;
	var uLocal_7781 = 0;
	var uLocal_7782 = 3;
	var uLocal_7783 = 500;
	var uLocal_7784 = 10000;
	var uLocal_7785 = 0;
	var uLocal_7786 = 3;
	var uLocal_7787 = 500;
	var uLocal_7788 = 10000;
	var uLocal_7789 = 0;
	var uLocal_7790 = 3;
	var uLocal_7791 = 500;
	var uLocal_7792 = 10000;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 3;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = -1;
	var uLocal_7806 = 0;
	var uLocal_7807 = 5;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 0;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 0;
	var uLocal_7818 = 10;
	var uLocal_7819 = 3;
	var uLocal_7820 = 500;
	var uLocal_7821 = 10000;
	var uLocal_7822 = 0;
	var uLocal_7823 = 3;
	var uLocal_7824 = 500;
	var uLocal_7825 = 10000;
	var uLocal_7826 = 0;
	var uLocal_7827 = 3;
	var uLocal_7828 = 500;
	var uLocal_7829 = 10000;
	var uLocal_7830 = 0;
	var uLocal_7831 = 3;
	var uLocal_7832 = 500;
	var uLocal_7833 = 10000;
	var uLocal_7834 = 0;
	var uLocal_7835 = 3;
	var uLocal_7836 = 500;
	var uLocal_7837 = 10000;
	var uLocal_7838 = 0;
	var uLocal_7839 = 3;
	var uLocal_7840 = 500;
	var uLocal_7841 = 10000;
	var uLocal_7842 = 0;
	var uLocal_7843 = 3;
	var uLocal_7844 = 500;
	var uLocal_7845 = 10000;
	var uLocal_7846 = 0;
	var uLocal_7847 = 3;
	var uLocal_7848 = 500;
	var uLocal_7849 = 10000;
	var uLocal_7850 = 0;
	var uLocal_7851 = 3;
	var uLocal_7852 = 500;
	var uLocal_7853 = 10000;
	var uLocal_7854 = 0;
	var uLocal_7855 = 3;
	var uLocal_7856 = 500;
	var uLocal_7857 = 10000;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = 0;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 3;
	var uLocal_7866 = 0;
	var uLocal_7867 = 0;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = -1;
	var uLocal_7871 = 0;
	var uLocal_7872 = 5;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = 0;
	var uLocal_7878 = 0;
	var uLocal_7879 = 0;
	var uLocal_7880 = 0;
	var uLocal_7881 = 0;
	var uLocal_7882 = 0;
	var uLocal_7883 = 10;
	var uLocal_7884 = 3;
	var uLocal_7885 = 500;
	var uLocal_7886 = 10000;
	var uLocal_7887 = 0;
	var uLocal_7888 = 3;
	var uLocal_7889 = 500;
	var uLocal_7890 = 10000;
	var uLocal_7891 = 0;
	var uLocal_7892 = 3;
	var uLocal_7893 = 500;
	var uLocal_7894 = 10000;
	var uLocal_7895 = 0;
	var uLocal_7896 = 3;
	var uLocal_7897 = 500;
	var uLocal_7898 = 10000;
	var uLocal_7899 = 0;
	var uLocal_7900 = 3;
	var uLocal_7901 = 500;
	var uLocal_7902 = 10000;
	var uLocal_7903 = 0;
	var uLocal_7904 = 3;
	var uLocal_7905 = 500;
	var uLocal_7906 = 10000;
	var uLocal_7907 = 0;
	var uLocal_7908 = 3;
	var uLocal_7909 = 500;
	var uLocal_7910 = 10000;
	var uLocal_7911 = 0;
	var uLocal_7912 = 3;
	var uLocal_7913 = 500;
	var uLocal_7914 = 10000;
	var uLocal_7915 = 0;
	var uLocal_7916 = 3;
	var uLocal_7917 = 500;
	var uLocal_7918 = 10000;
	var uLocal_7919 = 0;
	var uLocal_7920 = 3;
	var uLocal_7921 = 500;
	var uLocal_7922 = 10000;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
	var uLocal_7930 = 3;
	var uLocal_7931 = 0;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = -1;
	var uLocal_7936 = 0;
	var uLocal_7937 = 5;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = 0;
	var uLocal_7947 = 0;
	var uLocal_7948 = 10;
	var uLocal_7949 = 3;
	var uLocal_7950 = 500;
	var uLocal_7951 = 10000;
	var uLocal_7952 = 0;
	var uLocal_7953 = 3;
	var uLocal_7954 = 500;
	var uLocal_7955 = 10000;
	var uLocal_7956 = 0;
	var uLocal_7957 = 3;
	var uLocal_7958 = 500;
	var uLocal_7959 = 10000;
	var uLocal_7960 = 0;
	var uLocal_7961 = 3;
	var uLocal_7962 = 500;
	var uLocal_7963 = 10000;
	var uLocal_7964 = 0;
	var uLocal_7965 = 3;
	var uLocal_7966 = 500;
	var uLocal_7967 = 10000;
	var uLocal_7968 = 0;
	var uLocal_7969 = 3;
	var uLocal_7970 = 500;
	var uLocal_7971 = 10000;
	var uLocal_7972 = 0;
	var uLocal_7973 = 3;
	var uLocal_7974 = 500;
	var uLocal_7975 = 10000;
	var uLocal_7976 = 0;
	var uLocal_7977 = 3;
	var uLocal_7978 = 500;
	var uLocal_7979 = 10000;
	var uLocal_7980 = 0;
	var uLocal_7981 = 3;
	var uLocal_7982 = 500;
	var uLocal_7983 = 10000;
	var uLocal_7984 = 0;
	var uLocal_7985 = 3;
	var uLocal_7986 = 500;
	var uLocal_7987 = 10000;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 3;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = -1;
	var uLocal_8001 = 0;
	var uLocal_8002 = 5;
	var uLocal_8003 = 0;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 10;
	var uLocal_8014 = 3;
	var uLocal_8015 = 500;
	var uLocal_8016 = 10000;
	var uLocal_8017 = 0;
	var uLocal_8018 = 3;
	var uLocal_8019 = 500;
	var uLocal_8020 = 10000;
	var uLocal_8021 = 0;
	var uLocal_8022 = 3;
	var uLocal_8023 = 500;
	var uLocal_8024 = 10000;
	var uLocal_8025 = 0;
	var uLocal_8026 = 3;
	var uLocal_8027 = 500;
	var uLocal_8028 = 10000;
	var uLocal_8029 = 0;
	var uLocal_8030 = 3;
	var uLocal_8031 = 500;
	var uLocal_8032 = 10000;
	var uLocal_8033 = 0;
	var uLocal_8034 = 3;
	var uLocal_8035 = 500;
	var uLocal_8036 = 10000;
	var uLocal_8037 = 0;
	var uLocal_8038 = 3;
	var uLocal_8039 = 500;
	var uLocal_8040 = 10000;
	var uLocal_8041 = 0;
	var uLocal_8042 = 3;
	var uLocal_8043 = 500;
	var uLocal_8044 = 10000;
	var uLocal_8045 = 0;
	var uLocal_8046 = 3;
	var uLocal_8047 = 500;
	var uLocal_8048 = 10000;
	var uLocal_8049 = 0;
	var uLocal_8050 = 3;
	var uLocal_8051 = 500;
	var uLocal_8052 = 10000;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 1;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = 0;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 65;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 0;
	var uLocal_8090 = 0;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = 0;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 0;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = 0;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 0;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 0;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = 0;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 0;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 0;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = 0;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 0;
	var uLocal_8318 = 0;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = 0;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 0;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 0;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 0;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 0;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = 0;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 0;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 0;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = 0;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 0;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 0;
	var uLocal_8514 = 0;
	var uLocal_8515 = 0;
	var uLocal_8516 = 0;
	var uLocal_8517 = 0;
	var uLocal_8518 = 0;
	var uLocal_8519 = 0;
	var uLocal_8520 = 0;
	var uLocal_8521 = 0;
	var uLocal_8522 = 0;
	var uLocal_8523 = 0;
	var uLocal_8524 = 0;
	var uLocal_8525 = 0;
	var uLocal_8526 = 0;
	var uLocal_8527 = 0;
	var uLocal_8528 = 0;
	var uLocal_8529 = 0;
	var uLocal_8530 = 0;
	var uLocal_8531 = 0;
	var uLocal_8532 = 0;
	var uLocal_8533 = 0;
	var uLocal_8534 = 0;
	var uLocal_8535 = 0;
	var uLocal_8536 = 0;
	var uLocal_8537 = 0;
	var uLocal_8538 = 0;
	var uLocal_8539 = 0;
	var uLocal_8540 = 0;
	var uLocal_8541 = 0;
	var uLocal_8542 = 0;
	var uLocal_8543 = 0;
	var uLocal_8544 = 0;
	var uLocal_8545 = 0;
	var uLocal_8546 = 0;
	var uLocal_8547 = 0;
	var uLocal_8548 = 0;
	var uLocal_8549 = 0;
	var uLocal_8550 = 0;
	var uLocal_8551 = 0;
	var uLocal_8552 = 0;
	var uLocal_8553 = 0;
	var uLocal_8554 = 0;
	var uLocal_8555 = 0;
	var uLocal_8556 = 0;
	var uLocal_8557 = 0;
	var uLocal_8558 = 0;
	var uLocal_8559 = 0;
	var uLocal_8560 = 0;
	var uLocal_8561 = 0;
	var uLocal_8562 = 0;
	var uLocal_8563 = 0;
	var uLocal_8564 = 0;
	var uLocal_8565 = 0;
	var uLocal_8566 = 0;
	var uLocal_8567 = 0;
	var uLocal_8568 = 0;
	var uLocal_8569 = 0;
	var uLocal_8570 = 0;
	var uLocal_8571 = 0;
	var uLocal_8572 = 0;
	var uLocal_8573 = 0;
	var uLocal_8574 = 0;
	var uLocal_8575 = 0;
	var uLocal_8576 = 0;
	var uLocal_8577 = 0;
	var uLocal_8578 = 0;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = 0;
	var uLocal_8596 = 0;
	var uLocal_8597 = 0;
	var uLocal_8598 = 0;
	var uLocal_8599 = 0;
	var uLocal_8600 = 0;
	var uLocal_8601 = 0;
	var uLocal_8602 = 0;
	var uLocal_8603 = 0;
	var uLocal_8604 = 0;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 0;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 0;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 0;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = 0;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 0;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 0;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = 0;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 0;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 0;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = 0;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = 0;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 0;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 0;
	var uLocal_8772 = 0;
	var uLocal_8773 = 0;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 0;
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = 0;
	var uLocal_8789 = 0;
	var uLocal_8790 = 0;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 0;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = 0;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 1097859072;
	var uLocal_8851 = 1101004800;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 0;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 4;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = 0;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 0;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 40;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = 0;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 0;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = 0;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 0;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = 0;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 0;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = 0;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 0;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = 0;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 0;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = 0;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 0;
	var uLocal_9274 = 0;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = 0;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 0;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = 0;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 0;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = 0;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 0;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = 0;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 0;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = 0;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 0;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = 0;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 40;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 0;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 0;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 0;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = 0;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 0;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = 0;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 0;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 0;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 0;
	var uLocal_9754 = 0;
	var uLocal_9755 = 0;
	var uLocal_9756 = 0;
	var uLocal_9757 = 0;
	var uLocal_9758 = 0;
	var uLocal_9759 = 0;
	var uLocal_9760 = 0;
	var uLocal_9761 = 0;
	var uLocal_9762 = 0;
	var uLocal_9763 = 0;
	var uLocal_9764 = 0;
	var uLocal_9765 = 0;
	var uLocal_9766 = 0;
	var uLocal_9767 = 0;
	var uLocal_9768 = 0;
	var uLocal_9769 = 0;
	var uLocal_9770 = 0;
	var uLocal_9771 = 0;
	var uLocal_9772 = 0;
	var uLocal_9773 = 0;
	var uLocal_9774 = 0;
	var uLocal_9775 = 0;
	var uLocal_9776 = 0;
	var uLocal_9777 = 0;
	var uLocal_9778 = 0;
	var uLocal_9779 = 0;
	var uLocal_9780 = 0;
	var uLocal_9781 = 0;
	var uLocal_9782 = 0;
	var uLocal_9783 = 0;
	var uLocal_9784 = 0;
	var uLocal_9785 = 0;
	var uLocal_9786 = 0;
	var uLocal_9787 = 0;
	var uLocal_9788 = 0;
	var uLocal_9789 = 0;
	var uLocal_9790 = 0;
	var uLocal_9791 = 0;
	var uLocal_9792 = 0;
	var uLocal_9793 = 0;
	var uLocal_9794 = 0;
	var uLocal_9795 = 0;
	var uLocal_9796 = 0;
	var uLocal_9797 = 0;
	var uLocal_9798 = 0;
	var uLocal_9799 = 0;
	var uLocal_9800 = 0;
	var uLocal_9801 = 0;
	var uLocal_9802 = 0;
	var uLocal_9803 = 0;
	var uLocal_9804 = 0;
	var uLocal_9805 = 0;
	var uLocal_9806 = 0;
	var uLocal_9807 = 0;
	var uLocal_9808 = 0;
	var uLocal_9809 = 0;
	var uLocal_9810 = 0;
	var uLocal_9811 = 0;
	var uLocal_9812 = 0;
	var uLocal_9813 = 0;
	var uLocal_9814 = 0;
	var uLocal_9815 = 0;
	var uLocal_9816 = 0;
	var uLocal_9817 = 0;
	var uLocal_9818 = 0;
	var uLocal_9819 = 0;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = 0;
	var uLocal_9837 = 0;
	var uLocal_9838 = 0;
	var uLocal_9839 = 0;
	var uLocal_9840 = 0;
	var uLocal_9841 = 0;
	var uLocal_9842 = 0;
	var uLocal_9843 = 0;
	var uLocal_9844 = 0;
	var uLocal_9845 = 0;
	var uLocal_9846 = 0;
	var uLocal_9847 = 0;
	var uLocal_9848 = 0;
	var uLocal_9849 = 0;
	var uLocal_9850 = 0;
	var uLocal_9851 = 0;
	var uLocal_9852 = 0;
	var uLocal_9853 = 0;
	var uLocal_9854 = 0;
	var uLocal_9855 = 0;
	var uLocal_9856 = 0;
	var uLocal_9857 = 0;
	var uLocal_9858 = 0;
	var uLocal_9859 = 0;
	var uLocal_9860 = 0;
	var uLocal_9861 = 0;
	var uLocal_9862 = 0;
	var uLocal_9863 = 0;
	var uLocal_9864 = 0;
	var uLocal_9865 = 0;
	var uLocal_9866 = 0;
	var uLocal_9867 = 0;
	var uLocal_9868 = 0;
	var uLocal_9869 = 0;
	var uLocal_9870 = 0;
	var uLocal_9871 = 0;
	var uLocal_9872 = 0;
	var uLocal_9873 = 0;
	var uLocal_9874 = 0;
	var uLocal_9875 = 0;
	var uLocal_9876 = 0;
	var uLocal_9877 = 0;
	var uLocal_9878 = 0;
	var uLocal_9879 = 0;
	var uLocal_9880 = 0;
	var uLocal_9881 = 0;
	var uLocal_9882 = 0;
	var uLocal_9883 = 0;
	var uLocal_9884 = 0;
	var uLocal_9885 = 0;
	var uLocal_9886 = 0;
	var uLocal_9887 = 0;
	var uLocal_9888 = 0;
	var uLocal_9889 = 0;
	var uLocal_9890 = 0;
	var uLocal_9891 = 0;
	var uLocal_9892 = 0;
	var uLocal_9893 = 0;
	var uLocal_9894 = 0;
	var uLocal_9895 = 0;
	var uLocal_9896 = 0;
	var uLocal_9897 = 0;
	var uLocal_9898 = 0;
	var uLocal_9899 = 0;
	var uLocal_9900 = 0;
	var uLocal_9901 = 0;
	var uLocal_9902 = 0;
	var uLocal_9903 = 0;
	var uLocal_9904 = 0;
	var uLocal_9905 = 0;
	var uLocal_9906 = 0;
	var uLocal_9907 = 0;
	var uLocal_9908 = 0;
	var uLocal_9909 = 0;
	var uLocal_9910 = 0;
	var uLocal_9911 = 0;
	var uLocal_9912 = 0;
	var uLocal_9913 = 0;
	var uLocal_9914 = 0;
	var uLocal_9915 = 0;
	var uLocal_9916 = 0;
	var uLocal_9917 = 0;
	var uLocal_9918 = 0;
	var uLocal_9919 = 0;
	var uLocal_9920 = 0;
	var uLocal_9921 = 0;
	var uLocal_9922 = 0;
	var uLocal_9923 = 0;
	var uLocal_9924 = 0;
	var uLocal_9925 = 0;
	var uLocal_9926 = 0;
	var uLocal_9927 = 0;
	var uLocal_9928 = 0;
	var uLocal_9929 = 0;
	var uLocal_9930 = 0;
	var uLocal_9931 = 0;
	var uLocal_9932 = 0;
	var uLocal_9933 = 0;
	var uLocal_9934 = 0;
	var uLocal_9935 = 0;
	var uLocal_9936 = 0;
	var uLocal_9937 = 0;
	var uLocal_9938 = 0;
	var uLocal_9939 = 0;
	var uLocal_9940 = 0;
	var uLocal_9941 = 0;
	var uLocal_9942 = 0;
	var uLocal_9943 = 0;
	var uLocal_9944 = 0;
	var uLocal_9945 = 0;
	var uLocal_9946 = 0;
	var uLocal_9947 = 0;
	var uLocal_9948 = 0;
	var uLocal_9949 = 0;
	var uLocal_9950 = 0;
	var uLocal_9951 = 0;
	var uLocal_9952 = 0;
	var uLocal_9953 = 0;
	var uLocal_9954 = 0;
	var uLocal_9955 = 0;
	var uLocal_9956 = 0;
	var uLocal_9957 = 0;
	var uLocal_9958 = 0;
	var uLocal_9959 = 0;
	var uLocal_9960 = 0;
	var uLocal_9961 = 0;
	var uLocal_9962 = 0;
	var uLocal_9963 = 0;
	var uLocal_9964 = 0;
	var uLocal_9965 = 0;
	var uLocal_9966 = 0;
	var uLocal_9967 = 0;
	var uLocal_9968 = 0;
	var uLocal_9969 = 0;
	var uLocal_9970 = 0;
	var uLocal_9971 = 0;
	var uLocal_9972 = 0;
	var uLocal_9973 = 0;
	var uLocal_9974 = 0;
	var uLocal_9975 = 0;
	var uLocal_9976 = 0;
	var uLocal_9977 = 0;
	var uLocal_9978 = 0;
	var uLocal_9979 = 0;
	var uLocal_9980 = 0;
	var uLocal_9981 = 0;
	var uLocal_9982 = 0;
	var uLocal_9983 = 0;
	var uLocal_9984 = 0;
	var uLocal_9985 = 0;
	var uLocal_9986 = 0;
	var uLocal_9987 = 0;
	var uLocal_9988 = 0;
	var uLocal_9989 = 0;
	var uLocal_9990 = 0;
	var uLocal_9991 = 0;
	var uLocal_9992 = 0;
	var uLocal_9993 = 0;
	var uLocal_9994 = 0;
	var uLocal_9995 = 0;
	var uLocal_9996 = 0;
	var uLocal_9997 = 0;
	var uLocal_9998 = 0;
	var uLocal_9999 = 0;
	var uLocal_10000 = 0;
	var uLocal_10001 = 0;
	var uLocal_10002 = 0;
	var uLocal_10003 = 0;
	var uLocal_10004 = 0;
	var uLocal_10005 = 0;
	var uLocal_10006 = 0;
	var uLocal_10007 = 0;
	var uLocal_10008 = 0;
	var uLocal_10009 = 0;
	var uLocal_10010 = 0;
	var uLocal_10011 = 0;
	var uLocal_10012 = 0;
	var uLocal_10013 = 0;
	var uLocal_10014 = 0;
	var uLocal_10015 = 0;
	var uLocal_10016 = 0;
	var uLocal_10017 = 0;
	var uLocal_10018 = 0;
	var uLocal_10019 = 0;
	var uLocal_10020 = 0;
	var uLocal_10021 = 0;
	var uLocal_10022 = 0;
	var uLocal_10023 = 0;
	var uLocal_10024 = 0;
	var uLocal_10025 = 0;
	var uLocal_10026 = 0;
	var uLocal_10027 = 0;
	var uLocal_10028 = 0;
	var uLocal_10029 = 0;
	var uLocal_10030 = 0;
	var uLocal_10031 = 0;
	var uLocal_10032 = 0;
	var uLocal_10033 = 0;
	var uLocal_10034 = 0;
	var uLocal_10035 = 0;
	var uLocal_10036 = 0;
	var uLocal_10037 = 0;
	var uLocal_10038 = 0;
	var uLocal_10039 = 0;
	var uLocal_10040 = 0;
	var uLocal_10041 = 0;
	var uLocal_10042 = 0;
	var uLocal_10043 = 0;
	var uLocal_10044 = 0;
	var uLocal_10045 = 0;
	var uLocal_10046 = 0;
	var uLocal_10047 = 0;
	var uLocal_10048 = 0;
	var uLocal_10049 = 0;
	var uLocal_10050 = 0;
	var uLocal_10051 = 0;
	var uLocal_10052 = 0;
	var uLocal_10053 = 0;
	var uLocal_10054 = 0;
	var uLocal_10055 = 0;
	var uLocal_10056 = 0;
	var uLocal_10057 = 0;
	var uLocal_10058 = 0;
	var uLocal_10059 = 0;
	var uLocal_10060 = 0;
	var uLocal_10061 = 0;
	var uLocal_10062 = 0;
	var uLocal_10063 = 0;
	var uLocal_10064 = 0;
	var uLocal_10065 = 0;
	var uLocal_10066 = 0;
	var uLocal_10067 = 0;
	var uLocal_10068 = 0;
	var uLocal_10069 = 0;
	var uLocal_10070 = 0;
	var uLocal_10071 = 0;
	var uLocal_10072 = 0;
	var uLocal_10073 = 0;
	var uLocal_10074 = 0;
	var uLocal_10075 = 0;
	var uLocal_10076 = 0;
	var uLocal_10077 = 0;
	var uLocal_10078 = 0;
	var uLocal_10079 = 0;
	var uLocal_10080 = 0;
	var uLocal_10081 = 0;
	var uLocal_10082 = 0;
	var uLocal_10083 = 0;
	var uLocal_10084 = 0;
	var uLocal_10085 = 0;
	var uLocal_10086 = 0;
	var uLocal_10087 = 0;
	var uLocal_10088 = 0;
	var uLocal_10089 = 0;
	var uLocal_10090 = 0;
	var uLocal_10091 = 0;
	var uLocal_10092 = 0;
	var uLocal_10093 = 0;
	var uLocal_10094 = 0;
	var uLocal_10095 = 0;
	var uLocal_10096 = 0;
	var uLocal_10097 = 0;
	var uLocal_10098 = 0;
	var uLocal_10099 = 0;
	var uLocal_10100 = 0;
	var uLocal_10101 = 0;
	var uLocal_10102 = 0;
	var uLocal_10103 = 0;
	var uLocal_10104 = 0;
	var uLocal_10105 = 0;
	var uLocal_10106 = 0;
	var uLocal_10107 = 0;
	var uLocal_10108 = 0;
	var uLocal_10109 = 0;
	var uLocal_10110 = 0;
	var uLocal_10111 = 0;
	var uLocal_10112 = 0;
	var uLocal_10113 = 0;
	var uLocal_10114 = 0;
	var uLocal_10115 = 0;
	var uLocal_10116 = 0;
	var uLocal_10117 = 0;
	var uLocal_10118 = 0;
	var uLocal_10119 = 0;
	var uLocal_10120 = 0;
	var uLocal_10121 = 0;
	var uLocal_10122 = 0;
	var uLocal_10123 = 0;
	var uLocal_10124 = 0;
	var uLocal_10125 = 0;
	var uLocal_10126 = 0;
	var uLocal_10127 = 0;
	var uLocal_10128 = 0;
	var uLocal_10129 = 0;
	var uLocal_10130 = 0;
	var uLocal_10131 = 0;
	var uLocal_10132 = 0;
	var uLocal_10133 = 0;
	var uLocal_10134 = 0;
	var uLocal_10135 = 0;
	var uLocal_10136 = 0;
	var uLocal_10137 = 0;
	var uLocal_10138 = 0;
	var uLocal_10139 = 0;
	var uLocal_10140 = 0;
	var uLocal_10141 = 0;
	var uLocal_10142 = 0;
	var uLocal_10143 = 0;
	var uLocal_10144 = 0;
	var uLocal_10145 = 0;
	var uLocal_10146 = 0;
	var uLocal_10147 = 0;
	var uLocal_10148 = 0;
	var uLocal_10149 = 0;
	var uLocal_10150 = 0;
	var uLocal_10151 = 0;
	var uLocal_10152 = 0;
	var uLocal_10153 = 0;
	var uLocal_10154 = 0;
	var uLocal_10155 = 0;
	var uLocal_10156 = 0;
	var uLocal_10157 = 0;
	var uLocal_10158 = 0;
	var uLocal_10159 = 0;
	var uLocal_10160 = 0;
	var uLocal_10161 = 0;
	var uLocal_10162 = 0;
	var uLocal_10163 = 0;
	var uLocal_10164 = 0;
	var uLocal_10165 = 0;
	var uLocal_10166 = 0;
	var uLocal_10167 = 0;
	var uLocal_10168 = 0;
	var uLocal_10169 = 0;
	var uLocal_10170 = 0;
	var uLocal_10171 = 0;
	var uLocal_10172 = 0;
	var uLocal_10173 = 0;
	var uLocal_10174 = 0;
	var uLocal_10175 = 0;
	var uLocal_10176 = 0;
	var uLocal_10177 = 0;
	var uLocal_10178 = 0;
	var uLocal_10179 = 0;
	var uLocal_10180 = 0;
	var uLocal_10181 = 0;
	var uLocal_10182 = 0;
	var uLocal_10183 = 0;
	var uLocal_10184 = 0;
	var uLocal_10185 = 0;
	var uLocal_10186 = 0;
	var uLocal_10187 = 0;
	var uLocal_10188 = 0;
	var uLocal_10189 = 0;
	var uLocal_10190 = 0;
	var uLocal_10191 = 0;
	var uLocal_10192 = 0;
	var uLocal_10193 = 0;
	var uLocal_10194 = 0;
	var uLocal_10195 = 0;
	var uLocal_10196 = 0;
	var uLocal_10197 = 0;
	var uLocal_10198 = 0;
	var uLocal_10199 = 0;
	var uLocal_10200 = 0;
	var uLocal_10201 = 0;
	var uLocal_10202 = 0;
	var uLocal_10203 = 0;
	var uLocal_10204 = 0;
	var uLocal_10205 = 0;
	var uLocal_10206 = 0;
	var uLocal_10207 = 0;
	var uLocal_10208 = 0;
	var uLocal_10209 = 0;
	var uLocal_10210 = 0;
	var uLocal_10211 = 0;
	var uLocal_10212 = 0;
	var uLocal_10213 = 0;
	var uLocal_10214 = 0;
	var uLocal_10215 = 0;
	var uLocal_10216 = 0;
	var uLocal_10217 = 0;
	var uLocal_10218 = 0;
	var uLocal_10219 = 0;
	var uLocal_10220 = 0;
	var uLocal_10221 = 0;
	var uLocal_10222 = 0;
	var uLocal_10223 = 0;
	var uLocal_10224 = 0;
	var uLocal_10225 = 0;
	var uLocal_10226 = 0;
	var uLocal_10227 = 0;
	var uLocal_10228 = 0;
	var uLocal_10229 = 0;
	var uLocal_10230 = 0;
	var uLocal_10231 = 0;
	var uLocal_10232 = 60;
	var uLocal_10233 = 0;
	var uLocal_10234 = 0;
	var uLocal_10235 = 0;
	var uLocal_10236 = 0;
	var uLocal_10237 = 0;
	var uLocal_10238 = 0;
	var uLocal_10239 = 0;
	var uLocal_10240 = 0;
	var uLocal_10241 = 0;
	var uLocal_10242 = 0;
	var uLocal_10243 = 0;
	var uLocal_10244 = 0;
	var uLocal_10245 = 0;
	var uLocal_10246 = 0;
	var uLocal_10247 = 0;
	var uLocal_10248 = 0;
	var uLocal_10249 = 0;
	var uLocal_10250 = 0;
	var uLocal_10251 = 0;
	var uLocal_10252 = 0;
	var uLocal_10253 = 0;
	var uLocal_10254 = 0;
	var uLocal_10255 = 0;
	var uLocal_10256 = 0;
	var uLocal_10257 = 0;
	var uLocal_10258 = 0;
	var uLocal_10259 = 0;
	var uLocal_10260 = 0;
	var uLocal_10261 = 0;
	var uLocal_10262 = 0;
	var uLocal_10263 = 0;
	var uLocal_10264 = 0;
	var uLocal_10265 = 0;
	var uLocal_10266 = 0;
	var uLocal_10267 = 0;
	var uLocal_10268 = 0;
	var uLocal_10269 = 0;
	var uLocal_10270 = 0;
	var uLocal_10271 = 0;
	var uLocal_10272 = 0;
	var uLocal_10273 = 0;
	var uLocal_10274 = 0;
	var uLocal_10275 = 0;
	var uLocal_10276 = 0;
	var uLocal_10277 = 0;
	var uLocal_10278 = 0;
	var uLocal_10279 = 0;
	var uLocal_10280 = 0;
	var uLocal_10281 = 0;
	var uLocal_10282 = 0;
	var uLocal_10283 = 0;
	var uLocal_10284 = 0;
	var uLocal_10285 = 0;
	var uLocal_10286 = 0;
	var uLocal_10287 = 0;
	var uLocal_10288 = 0;
	var uLocal_10289 = 0;
	var uLocal_10290 = 0;
	var uLocal_10291 = 0;
	var uLocal_10292 = 0;
	var uLocal_10293 = 0;
	var uLocal_10294 = 0;
	var uLocal_10295 = 0;
	var uLocal_10296 = 0;
	var uLocal_10297 = 0;
	var uLocal_10298 = 0;
	var uLocal_10299 = 0;
	var uLocal_10300 = 0;
	var uLocal_10301 = 0;
	var uLocal_10302 = 0;
	var uLocal_10303 = 0;
	var uLocal_10304 = 0;
	var uLocal_10305 = 0;
	var uLocal_10306 = 0;
	var uLocal_10307 = 0;
	var uLocal_10308 = 0;
	var uLocal_10309 = 0;
	var uLocal_10310 = 0;
	var uLocal_10311 = 0;
	var uLocal_10312 = 0;
	var uLocal_10313 = 0;
	var uLocal_10314 = 0;
	var uLocal_10315 = 0;
	var uLocal_10316 = 0;
	var uLocal_10317 = 0;
	var uLocal_10318 = 0;
	var uLocal_10319 = 0;
	var uLocal_10320 = 0;
	var uLocal_10321 = 0;
	var uLocal_10322 = 0;
	var uLocal_10323 = 0;
	var uLocal_10324 = 0;
	var uLocal_10325 = 0;
	var uLocal_10326 = 0;
	var uLocal_10327 = 0;
	var uLocal_10328 = 0;
	var uLocal_10329 = 0;
	var uLocal_10330 = 0;
	var uLocal_10331 = 0;
	var uLocal_10332 = 0;
	var uLocal_10333 = 0;
	var uLocal_10334 = 0;
	var uLocal_10335 = 0;
	var uLocal_10336 = 0;
	var uLocal_10337 = 0;
	var uLocal_10338 = 0;
	var uLocal_10339 = 0;
	var uLocal_10340 = 0;
	var uLocal_10341 = 0;
	var uLocal_10342 = 0;
	var uLocal_10343 = 0;
	var uLocal_10344 = 0;
	var uLocal_10345 = 0;
	var uLocal_10346 = 0;
	var uLocal_10347 = 0;
	var uLocal_10348 = 0;
	var uLocal_10349 = 0;
	var uLocal_10350 = 0;
	var uLocal_10351 = 0;
	var uLocal_10352 = 0;
	var uLocal_10353 = 0;
	var uLocal_10354 = 0;
	var uLocal_10355 = 0;
	var uLocal_10356 = 0;
	var uLocal_10357 = 0;
	var uLocal_10358 = 0;
	var uLocal_10359 = 0;
	var uLocal_10360 = 0;
	var uLocal_10361 = 0;
	var uLocal_10362 = 0;
	var uLocal_10363 = 0;
	var uLocal_10364 = 0;
	var uLocal_10365 = 0;
	var uLocal_10366 = 0;
	var uLocal_10367 = 0;
	var uLocal_10368 = 0;
	var uLocal_10369 = 0;
	var uLocal_10370 = 0;
	var uLocal_10371 = 0;
	var uLocal_10372 = 0;
	var uLocal_10373 = 0;
	var uLocal_10374 = 0;
	var uLocal_10375 = 0;
	var uLocal_10376 = 0;
	var uLocal_10377 = 0;
	var uLocal_10378 = 0;
	var uLocal_10379 = 0;
	var uLocal_10380 = 0;
	var uLocal_10381 = 0;
	var uLocal_10382 = 0;
	var uLocal_10383 = 0;
	var uLocal_10384 = 0;
	var uLocal_10385 = 0;
	var uLocal_10386 = 0;
	var uLocal_10387 = 0;
	var uLocal_10388 = 0;
	var uLocal_10389 = 0;
	var uLocal_10390 = 0;
	var uLocal_10391 = 0;
	var uLocal_10392 = 0;
	var uLocal_10393 = 0;
	var uLocal_10394 = 0;
	var uLocal_10395 = 0;
	var uLocal_10396 = 0;
	var uLocal_10397 = 0;
	var uLocal_10398 = 0;
	var uLocal_10399 = 0;
	var uLocal_10400 = 0;
	var uLocal_10401 = 0;
	var uLocal_10402 = 0;
	var uLocal_10403 = 0;
	var uLocal_10404 = 0;
	var uLocal_10405 = 0;
	var uLocal_10406 = 0;
	var uLocal_10407 = 0;
	var uLocal_10408 = 0;
	var uLocal_10409 = 0;
	var uLocal_10410 = 0;
	var uLocal_10411 = 0;
	var uLocal_10412 = 0;
	var uLocal_10413 = 0;
	var uLocal_10414 = 0;
	var uLocal_10415 = 0;
	var uLocal_10416 = 0;
	var uLocal_10417 = 0;
	var uLocal_10418 = 0;
	var uLocal_10419 = 0;
	var uLocal_10420 = 0;
	var uLocal_10421 = 0;
	var uLocal_10422 = 0;
	var uLocal_10423 = 0;
	var uLocal_10424 = 0;
	var uLocal_10425 = 0;
	var uLocal_10426 = 0;
	var uLocal_10427 = 0;
	var uLocal_10428 = 0;
	var uLocal_10429 = 0;
	var uLocal_10430 = 0;
	var uLocal_10431 = 0;
	var uLocal_10432 = 0;
	var uLocal_10433 = 0;
	var uLocal_10434 = 0;
	var uLocal_10435 = 0;
	var uLocal_10436 = 0;
	var uLocal_10437 = 0;
	var uLocal_10438 = 0;
	var uLocal_10439 = 0;
	var uLocal_10440 = 0;
	var uLocal_10441 = 0;
	var uLocal_10442 = 0;
	var uLocal_10443 = 0;
	var uLocal_10444 = 0;
	var uLocal_10445 = 0;
	var uLocal_10446 = 0;
	var uLocal_10447 = 0;
	var uLocal_10448 = 0;
	var uLocal_10449 = 0;
	var uLocal_10450 = 0;
	var uLocal_10451 = 0;
	var uLocal_10452 = 0;
	var uLocal_10453 = 0;
	var uLocal_10454 = 0;
	var uLocal_10455 = 0;
	var uLocal_10456 = 0;
	var uLocal_10457 = 0;
	var uLocal_10458 = 0;
	var uLocal_10459 = 0;
	var uLocal_10460 = 0;
	var uLocal_10461 = 0;
	var uLocal_10462 = 0;
	var uLocal_10463 = 0;
	var uLocal_10464 = 0;
	var uLocal_10465 = 0;
	var uLocal_10466 = 0;
	var uLocal_10467 = 0;
	var uLocal_10468 = 0;
	var uLocal_10469 = 0;
	var uLocal_10470 = 0;
	var uLocal_10471 = 0;
	var uLocal_10472 = 0;
	var uLocal_10473 = 0;
	var uLocal_10474 = 0;
	var uLocal_10475 = 0;
	var uLocal_10476 = 0;
	var uLocal_10477 = 0;
	var uLocal_10478 = 0;
	var uLocal_10479 = 0;
	var uLocal_10480 = 0;
	var uLocal_10481 = 0;
	var uLocal_10482 = 0;
	var uLocal_10483 = 0;
	var uLocal_10484 = 0;
	var uLocal_10485 = 0;
	var uLocal_10486 = 0;
	var uLocal_10487 = 0;
	var uLocal_10488 = 0;
	var uLocal_10489 = 0;
	var uLocal_10490 = 0;
	var uLocal_10491 = 0;
	var uLocal_10492 = 0;
	var uLocal_10493 = 0;
	var uLocal_10494 = 0;
	var uLocal_10495 = 0;
	var uLocal_10496 = 0;
	var uLocal_10497 = 0;
	var uLocal_10498 = 0;
	var uLocal_10499 = 0;
	var uLocal_10500 = 0;
	var uLocal_10501 = 0;
	var uLocal_10502 = 0;
	var uLocal_10503 = 0;
	var uLocal_10504 = 0;
	var uLocal_10505 = 0;
	var uLocal_10506 = 0;
	var uLocal_10507 = 0;
	var uLocal_10508 = 0;
	var uLocal_10509 = 0;
	var uLocal_10510 = 0;
	var uLocal_10511 = 0;
	var uLocal_10512 = 0;
	var uLocal_10513 = 0;
	var uLocal_10514 = 0;
	var uLocal_10515 = 0;
	var uLocal_10516 = 0;
	var uLocal_10517 = 0;
	var uLocal_10518 = 0;
	var uLocal_10519 = 0;
	var uLocal_10520 = 0;
	var uLocal_10521 = 0;
	var uLocal_10522 = 0;
	var uLocal_10523 = 0;
	var uLocal_10524 = 0;
	var uLocal_10525 = 0;
	var uLocal_10526 = 0;
	var uLocal_10527 = 0;
	var uLocal_10528 = 0;
	var uLocal_10529 = 0;
	var uLocal_10530 = 0;
	var uLocal_10531 = 0;
	var uLocal_10532 = 0;
	var uLocal_10533 = 0;
	var uLocal_10534 = 0;
	var uLocal_10535 = 0;
	var uLocal_10536 = 0;
	var uLocal_10537 = 0;
	var uLocal_10538 = 0;
	var uLocal_10539 = 0;
	var uLocal_10540 = 0;
	var uLocal_10541 = 0;
	var uLocal_10542 = 0;
	var uLocal_10543 = 0;
	var uLocal_10544 = 0;
	var uLocal_10545 = 0;
	var uLocal_10546 = 0;
	var uLocal_10547 = 0;
	var uLocal_10548 = 0;
	var uLocal_10549 = 0;
	var uLocal_10550 = 0;
	var uLocal_10551 = 0;
	var uLocal_10552 = 0;
	var uLocal_10553 = 0;
	var uLocal_10554 = 0;
	var uLocal_10555 = 0;
	var uLocal_10556 = 0;
	var uLocal_10557 = 0;
	var uLocal_10558 = 0;
	var uLocal_10559 = 0;
	var uLocal_10560 = 0;
	var uLocal_10561 = 0;
	var uLocal_10562 = 0;
	var uLocal_10563 = 0;
	var uLocal_10564 = 0;
	var uLocal_10565 = 0;
	var uLocal_10566 = 0;
	var uLocal_10567 = 0;
	var uLocal_10568 = 0;
	var uLocal_10569 = 0;
	var uLocal_10570 = 0;
	var uLocal_10571 = 0;
	var uLocal_10572 = 0;
	var uLocal_10573 = 0;
	var uLocal_10574 = 0;
	var uLocal_10575 = 0;
	var uLocal_10576 = 0;
	var uLocal_10577 = 0;
	var uLocal_10578 = 0;
	var uLocal_10579 = 0;
	var uLocal_10580 = 0;
	var uLocal_10581 = 0;
	var uLocal_10582 = 0;
	var uLocal_10583 = 0;
	var uLocal_10584 = 0;
	var uLocal_10585 = 0;
	var uLocal_10586 = 0;
	var uLocal_10587 = 0;
	var uLocal_10588 = 0;
	var uLocal_10589 = 0;
	var uLocal_10590 = 0;
	var uLocal_10591 = 0;
	var uLocal_10592 = 0;
	var uLocal_10593 = 0;
	var uLocal_10594 = 0;
	var uLocal_10595 = 0;
	var uLocal_10596 = 0;
	var uLocal_10597 = 0;
	var uLocal_10598 = 0;
	var uLocal_10599 = 0;
	var uLocal_10600 = 0;
	var uLocal_10601 = 0;
	var uLocal_10602 = 0;
	var uLocal_10603 = 0;
	var uLocal_10604 = 0;
	var uLocal_10605 = 0;
	var uLocal_10606 = 0;
	var uLocal_10607 = 0;
	var uLocal_10608 = 0;
	var uLocal_10609 = 0;
	var uLocal_10610 = 0;
	var uLocal_10611 = 0;
	var uLocal_10612 = 0;
	var uLocal_10613 = 0;
	var uLocal_10614 = 0;
	var uLocal_10615 = 0;
	var uLocal_10616 = 0;
	var uLocal_10617 = 0;
	var uLocal_10618 = 0;
	var uLocal_10619 = 0;
	var uLocal_10620 = 0;
	var uLocal_10621 = 0;
	var uLocal_10622 = 0;
	var uLocal_10623 = 0;
	var uLocal_10624 = 0;
	var uLocal_10625 = 0;
	var uLocal_10626 = 0;
	var uLocal_10627 = 0;
	var uLocal_10628 = 0;
	var uLocal_10629 = 0;
	var uLocal_10630 = 0;
	var uLocal_10631 = 0;
	var uLocal_10632 = 0;
	var uLocal_10633 = 0;
	var uLocal_10634 = 0;
	var uLocal_10635 = 0;
	var uLocal_10636 = 0;
	var uLocal_10637 = 0;
	var uLocal_10638 = 0;
	var uLocal_10639 = 0;
	var uLocal_10640 = 0;
	var uLocal_10641 = 0;
	var uLocal_10642 = 0;
	var uLocal_10643 = 0;
	var uLocal_10644 = 0;
	var uLocal_10645 = 0;
	var uLocal_10646 = 0;
	var uLocal_10647 = 0;
	var uLocal_10648 = 0;
	var uLocal_10649 = 0;
	var uLocal_10650 = 0;
	var uLocal_10651 = 0;
	var uLocal_10652 = 0;
	var uLocal_10653 = 0;
	var uLocal_10654 = 0;
	var uLocal_10655 = 0;
	var uLocal_10656 = 0;
	var uLocal_10657 = 0;
	var uLocal_10658 = 0;
	var uLocal_10659 = 0;
	var uLocal_10660 = 0;
	var uLocal_10661 = 0;
	var uLocal_10662 = 0;
	var uLocal_10663 = 0;
	var uLocal_10664 = 0;
	var uLocal_10665 = 0;
	var uLocal_10666 = 0;
	var uLocal_10667 = 0;
	var uLocal_10668 = 0;
	var uLocal_10669 = 0;
	var uLocal_10670 = 0;
	var uLocal_10671 = 0;
	var uLocal_10672 = 0;
	var uLocal_10673 = 0;
	var uLocal_10674 = 0;
	var uLocal_10675 = 0;
	var uLocal_10676 = 0;
	var uLocal_10677 = 0;
	var uLocal_10678 = 0;
	var uLocal_10679 = 0;
	var uLocal_10680 = 0;
	var uLocal_10681 = 0;
	var uLocal_10682 = 0;
	var uLocal_10683 = 0;
	var uLocal_10684 = 0;
	var uLocal_10685 = 0;
	var uLocal_10686 = 0;
	var uLocal_10687 = 0;
	var uLocal_10688 = 0;
	var uLocal_10689 = 0;
	var uLocal_10690 = 0;
	var uLocal_10691 = 0;
	var uLocal_10692 = 0;
	var uLocal_10693 = 0;
	var uLocal_10694 = 0;
	var uLocal_10695 = 0;
	var uLocal_10696 = 0;
	var uLocal_10697 = 0;
	var uLocal_10698 = 0;
	var uLocal_10699 = 0;
	var uLocal_10700 = 0;
	var uLocal_10701 = 0;
	var uLocal_10702 = 0;
	var uLocal_10703 = 0;
	var uLocal_10704 = 0;
	var uLocal_10705 = 0;
	var uLocal_10706 = 0;
	var uLocal_10707 = 0;
	var uLocal_10708 = 0;
	var uLocal_10709 = 0;
	var uLocal_10710 = 0;
	var uLocal_10711 = 0;
	var uLocal_10712 = 0;
	var uLocal_10713 = 0;
	var uLocal_10714 = 0;
	var uLocal_10715 = 0;
	var uLocal_10716 = 0;
	var uLocal_10717 = 0;
	var uLocal_10718 = 0;
	var uLocal_10719 = 0;
	var uLocal_10720 = 0;
	var uLocal_10721 = 0;
	var uLocal_10722 = 0;
	var uLocal_10723 = 0;
	var uLocal_10724 = 0;
	var uLocal_10725 = 0;
	var uLocal_10726 = 0;
	var uLocal_10727 = 0;
	var uLocal_10728 = 0;
	var uLocal_10729 = 0;
	var uLocal_10730 = 0;
	var uLocal_10731 = 0;
	var uLocal_10732 = 0;
	var uLocal_10733 = 0;
	var uLocal_10734 = 0;
	var uLocal_10735 = 0;
	var uLocal_10736 = 0;
	var uLocal_10737 = 0;
	var uLocal_10738 = 0;
	var uLocal_10739 = 0;
	var uLocal_10740 = 0;
	var uLocal_10741 = 0;
	var uLocal_10742 = 0;
	var uLocal_10743 = 0;
	var uLocal_10744 = 0;
	var uLocal_10745 = 0;
	var uLocal_10746 = 0;
	var uLocal_10747 = 0;
	var uLocal_10748 = 0;
	var uLocal_10749 = 0;
	var uLocal_10750 = 0;
	var uLocal_10751 = 0;
	var uLocal_10752 = 0;
	var uLocal_10753 = 0;
	var uLocal_10754 = 0;
	var uLocal_10755 = 0;
	var uLocal_10756 = 0;
	var uLocal_10757 = 0;
	var uLocal_10758 = 0;
	var uLocal_10759 = 0;
	var uLocal_10760 = 0;
	var uLocal_10761 = 0;
	var uLocal_10762 = 0;
	var uLocal_10763 = 0;
	var uLocal_10764 = 0;
	var uLocal_10765 = 0;
	var uLocal_10766 = 0;
	var uLocal_10767 = 0;
	var uLocal_10768 = 0;
	var uLocal_10769 = 0;
	var uLocal_10770 = 0;
	var uLocal_10771 = 0;
	var uLocal_10772 = 0;
	var uLocal_10773 = 0;
	var uLocal_10774 = 0;
	var uLocal_10775 = 0;
	var uLocal_10776 = 0;
	var uLocal_10777 = 0;
	var uLocal_10778 = 0;
	var uLocal_10779 = 0;
	var uLocal_10780 = 0;
	var uLocal_10781 = 0;
	var uLocal_10782 = 0;
	var uLocal_10783 = 0;
	var uLocal_10784 = 0;
	var uLocal_10785 = 0;
	var uLocal_10786 = 0;
	var uLocal_10787 = 0;
	var uLocal_10788 = 0;
	var uLocal_10789 = 0;
	var uLocal_10790 = 0;
	var uLocal_10791 = 0;
	var uLocal_10792 = 0;
	var uLocal_10793 = 0;
	var uLocal_10794 = 0;
	var uLocal_10795 = 0;
	var uLocal_10796 = 0;
	var uLocal_10797 = 0;
	var uLocal_10798 = 0;
	var uLocal_10799 = 0;
	var uLocal_10800 = 0;
	var uLocal_10801 = 0;
	var uLocal_10802 = 0;
	var uLocal_10803 = 0;
	var uLocal_10804 = 0;
	var uLocal_10805 = 0;
	var uLocal_10806 = 0;
	var uLocal_10807 = 0;
	var uLocal_10808 = 0;
	var uLocal_10809 = 0;
	var uLocal_10810 = 0;
	var uLocal_10811 = 0;
	var uLocal_10812 = 0;
	var uLocal_10813 = 0;
	var uLocal_10814 = 0;
	var uLocal_10815 = 0;
	var uLocal_10816 = 0;
	var uLocal_10817 = 0;
	var uLocal_10818 = 0;
	var uLocal_10819 = 0;
	var uLocal_10820 = 0;
	var uLocal_10821 = 0;
	var uLocal_10822 = 0;
	var uLocal_10823 = 0;
	var uLocal_10824 = 0;
	var uLocal_10825 = 0;
	var uLocal_10826 = 0;
	var uLocal_10827 = 0;
	var uLocal_10828 = 0;
	var uLocal_10829 = 0;
	var uLocal_10830 = 0;
	var uLocal_10831 = 0;
	var uLocal_10832 = 0;
	var uLocal_10833 = 0;
	var uLocal_10834 = 0;
	var uLocal_10835 = 0;
	var uLocal_10836 = 0;
	var uLocal_10837 = 0;
	var uLocal_10838 = 0;
	var uLocal_10839 = 0;
	var uLocal_10840 = 0;
	var uLocal_10841 = 0;
	var uLocal_10842 = 0;
	var uLocal_10843 = 0;
	var uLocal_10844 = 0;
	var uLocal_10845 = 0;
	var uLocal_10846 = 0;
	var uLocal_10847 = 0;
	var uLocal_10848 = 0;
	var uLocal_10849 = 0;
	var uLocal_10850 = 0;
	var uLocal_10851 = 0;
	var uLocal_10852 = 0;
	var uLocal_10853 = 0;
	var uLocal_10854 = 0;
	var uLocal_10855 = 0;
	var uLocal_10856 = 0;
	var uLocal_10857 = 0;
	var uLocal_10858 = 0;
	var uLocal_10859 = 0;
	var uLocal_10860 = 0;
	var uLocal_10861 = 0;
	var uLocal_10862 = 0;
	var uLocal_10863 = 0;
	var uLocal_10864 = 0;
	var uLocal_10865 = 0;
	var uLocal_10866 = 0;
	var uLocal_10867 = 0;
	var uLocal_10868 = 0;
	var uLocal_10869 = 0;
	var uLocal_10870 = 0;
	var uLocal_10871 = 0;
	var uLocal_10872 = 0;
	var uLocal_10873 = 0;
	var uLocal_10874 = 0;
	var uLocal_10875 = 0;
	var uLocal_10876 = 0;
	var uLocal_10877 = 0;
	var uLocal_10878 = 0;
	var uLocal_10879 = 0;
	var uLocal_10880 = 0;
	var uLocal_10881 = 0;
	var uLocal_10882 = 0;
	var uLocal_10883 = 0;
	var uLocal_10884 = 0;
	var uLocal_10885 = 0;
	var uLocal_10886 = 0;
	var uLocal_10887 = 0;
	var uLocal_10888 = 0;
	var uLocal_10889 = 0;
	var uLocal_10890 = 0;
	var uLocal_10891 = 0;
	var uLocal_10892 = 0;
	var uLocal_10893 = 0;
	var uLocal_10894 = 0;
	var uLocal_10895 = 0;
	var uLocal_10896 = 0;
	var uLocal_10897 = 0;
	var uLocal_10898 = 0;
	var uLocal_10899 = 0;
	var uLocal_10900 = 0;
	var uLocal_10901 = 0;
	var uLocal_10902 = 0;
	var uLocal_10903 = 0;
	var uLocal_10904 = 0;
	var uLocal_10905 = 0;
	var uLocal_10906 = 0;
	var uLocal_10907 = 0;
	var uLocal_10908 = 0;
	var uLocal_10909 = 0;
	var uLocal_10910 = 0;
	var uLocal_10911 = 0;
	var uLocal_10912 = 0;
	var uLocal_10913 = 0;
	var uLocal_10914 = 0;
	var uLocal_10915 = 0;
	var uLocal_10916 = 0;
	var uLocal_10917 = 0;
	var uLocal_10918 = 0;
	var uLocal_10919 = 0;
	var uLocal_10920 = 0;
	var uLocal_10921 = 0;
	var uLocal_10922 = 0;
	var uLocal_10923 = 0;
	var uLocal_10924 = 0;
	var uLocal_10925 = 0;
	var uLocal_10926 = 0;
	var uLocal_10927 = 0;
	var uLocal_10928 = 0;
	var uLocal_10929 = 0;
	var uLocal_10930 = 0;
	var uLocal_10931 = 0;
	var uLocal_10932 = 0;
	var uLocal_10933 = 0;
	var uLocal_10934 = 0;
	var uLocal_10935 = 0;
	var uLocal_10936 = 0;
	var uLocal_10937 = 0;
	var uLocal_10938 = 0;
	var uLocal_10939 = 0;
	var uLocal_10940 = 0;
	var uLocal_10941 = 0;
	var uLocal_10942 = 0;
	var uLocal_10943 = 0;
	var uLocal_10944 = 0;
	var uLocal_10945 = 0;
	var uLocal_10946 = 0;
	var uLocal_10947 = 0;
	var uLocal_10948 = 0;
	var uLocal_10949 = 0;
	var uLocal_10950 = 0;
	var uLocal_10951 = 0;
	var uLocal_10952 = 0;
	var uLocal_10953 = 0;
	var uLocal_10954 = 0;
	var uLocal_10955 = 0;
	var uLocal_10956 = 0;
	var uLocal_10957 = 0;
	var uLocal_10958 = 0;
	var uLocal_10959 = 0;
	var uLocal_10960 = 0;
	var uLocal_10961 = 0;
	var uLocal_10962 = 0;
	var uLocal_10963 = 0;
	var uLocal_10964 = 0;
	var uLocal_10965 = 0;
	var uLocal_10966 = 0;
	var uLocal_10967 = 0;
	var uLocal_10968 = 0;
	var uLocal_10969 = 0;
	var uLocal_10970 = 0;
	var uLocal_10971 = 0;
	var uLocal_10972 = 0;
	var uLocal_10973 = 0;
	var uLocal_10974 = 0;
	var uLocal_10975 = 0;
	var uLocal_10976 = 0;
	var uLocal_10977 = 0;
	var uLocal_10978 = 0;
	var uLocal_10979 = 0;
	var uLocal_10980 = 0;
	var uLocal_10981 = 0;
	var uLocal_10982 = 0;
	var uLocal_10983 = 0;
	var uLocal_10984 = 0;
	var uLocal_10985 = 0;
	var uLocal_10986 = 0;
	var uLocal_10987 = 0;
	var uLocal_10988 = 0;
	var uLocal_10989 = 0;
	var uLocal_10990 = 0;
	var uLocal_10991 = 0;
	var uLocal_10992 = 0;
	var uLocal_10993 = 0;
	var uLocal_10994 = 0;
	var uLocal_10995 = 0;
	var uLocal_10996 = 0;
	var uLocal_10997 = 0;
	var uLocal_10998 = 0;
	var uLocal_10999 = 0;
	var uLocal_11000 = 0;
	var uLocal_11001 = 0;
	var uLocal_11002 = 0;
	var uLocal_11003 = 0;
	var uLocal_11004 = 0;
	var uLocal_11005 = 0;
	var uLocal_11006 = 0;
	var uLocal_11007 = 0;
	var uLocal_11008 = 0;
	var uLocal_11009 = 0;
	var uLocal_11010 = 0;
	var uLocal_11011 = 0;
	var uLocal_11012 = 0;
	var uLocal_11013 = 0;
	var uLocal_11014 = 0;
	var uLocal_11015 = 0;
	var uLocal_11016 = 0;
	var uLocal_11017 = 0;
	var uLocal_11018 = 0;
	var uLocal_11019 = 0;
	var uLocal_11020 = 0;
	var uLocal_11021 = 0;
	var uLocal_11022 = 0;
	var uLocal_11023 = 0;
	var uLocal_11024 = 0;
	var uLocal_11025 = 0;
	var uLocal_11026 = 0;
	var uLocal_11027 = 0;
	var uLocal_11028 = 0;
	var uLocal_11029 = 0;
	var uLocal_11030 = 0;
	var uLocal_11031 = 0;
	var uLocal_11032 = 0;
	var uLocal_11033 = 0;
	var uLocal_11034 = 0;
	var uLocal_11035 = 0;
	var uLocal_11036 = 0;
	var uLocal_11037 = 0;
	var uLocal_11038 = 0;
	var uLocal_11039 = 0;
	var uLocal_11040 = 0;
	var uLocal_11041 = 0;
	var uLocal_11042 = 0;
	var uLocal_11043 = 0;
	var uLocal_11044 = 0;
	var uLocal_11045 = 0;
	var uLocal_11046 = 0;
	var uLocal_11047 = 0;
	var uLocal_11048 = 0;
	var uLocal_11049 = 0;
	var uLocal_11050 = 0;
	var uLocal_11051 = 0;
	var uLocal_11052 = 0;
	var uLocal_11053 = 0;
	var uLocal_11054 = 0;
	var uLocal_11055 = 0;
	var uLocal_11056 = 0;
	var uLocal_11057 = 0;
	var uLocal_11058 = 0;
	var uLocal_11059 = 0;
	var uLocal_11060 = 0;
	var uLocal_11061 = 0;
	var uLocal_11062 = 0;
	var uLocal_11063 = 0;
	var uLocal_11064 = 0;
	var uLocal_11065 = 0;
	var uLocal_11066 = 0;
	var uLocal_11067 = 0;
	var uLocal_11068 = 0;
	var uLocal_11069 = 0;
	var uLocal_11070 = 0;
	var uLocal_11071 = 0;
	var uLocal_11072 = 0;
	var uLocal_11073 = 0;
	var uLocal_11074 = 0;
	var uLocal_11075 = 0;
	var uLocal_11076 = 0;
	var uLocal_11077 = 0;
	var uLocal_11078 = 0;
	var uLocal_11079 = 0;
	var uLocal_11080 = 0;
	var uLocal_11081 = 0;
	var uLocal_11082 = 0;
	var uLocal_11083 = 0;
	var uLocal_11084 = 0;
	var uLocal_11085 = 0;
	var uLocal_11086 = 0;
	var uLocal_11087 = 0;
	var uLocal_11088 = 0;
	var uLocal_11089 = 0;
	var uLocal_11090 = 0;
	var uLocal_11091 = 0;
	var uLocal_11092 = 0;
	var uLocal_11093 = 0;
	var uLocal_11094 = 0;
	var uLocal_11095 = 0;
	var uLocal_11096 = 0;
	var uLocal_11097 = 0;
	var uLocal_11098 = 0;
	var uLocal_11099 = 0;
	var uLocal_11100 = 0;
	var uLocal_11101 = 0;
	var uLocal_11102 = 0;
	var uLocal_11103 = 0;
	var uLocal_11104 = 0;
	var uLocal_11105 = 0;
	var uLocal_11106 = 0;
	var uLocal_11107 = 0;
	var uLocal_11108 = 0;
	var uLocal_11109 = 0;
	var uLocal_11110 = 0;
	var uLocal_11111 = 0;
	var uLocal_11112 = 0;
	var uLocal_11113 = 0;
	var uLocal_11114 = 0;
	var uLocal_11115 = 0;
	var uLocal_11116 = 0;
	var uLocal_11117 = 0;
	var uLocal_11118 = 0;
	var uLocal_11119 = 0;
	var uLocal_11120 = 0;
	var uLocal_11121 = 0;
	var uLocal_11122 = 0;
	var uLocal_11123 = 0;
	var uLocal_11124 = 0;
	var uLocal_11125 = 0;
	var uLocal_11126 = 0;
	var uLocal_11127 = 0;
	var uLocal_11128 = 0;
	var uLocal_11129 = 0;
	var uLocal_11130 = 0;
	var uLocal_11131 = 0;
	var uLocal_11132 = 0;
	var uLocal_11133 = 0;
	var uLocal_11134 = 0;
	var uLocal_11135 = 0;
	var uLocal_11136 = 0;
	var uLocal_11137 = 0;
	var uLocal_11138 = 0;
	var uLocal_11139 = 0;
	var uLocal_11140 = 0;
	var uLocal_11141 = 0;
	var uLocal_11142 = 0;
	var uLocal_11143 = 0;
	var uLocal_11144 = 0;
	var uLocal_11145 = 0;
	var uLocal_11146 = 0;
	var uLocal_11147 = 0;
	var uLocal_11148 = 0;
	var uLocal_11149 = 0;
	var uLocal_11150 = 0;
	var uLocal_11151 = 0;
	var uLocal_11152 = 0;
	var uLocal_11153 = 0;
	var uLocal_11154 = 0;
	var uLocal_11155 = 0;
	var uLocal_11156 = 0;
	var uLocal_11157 = 0;
	var uLocal_11158 = 0;
	var uLocal_11159 = 0;
	var uLocal_11160 = 0;
	var uLocal_11161 = 0;
	var uLocal_11162 = 0;
	var uLocal_11163 = 0;
	var uLocal_11164 = 0;
	var uLocal_11165 = 0;
	var uLocal_11166 = 0;
	var uLocal_11167 = 0;
	var uLocal_11168 = 0;
	var uLocal_11169 = 0;
	var uLocal_11170 = 0;
	var uLocal_11171 = 0;
	var uLocal_11172 = 0;
	var uLocal_11173 = 0;
	var uLocal_11174 = 0;
	var uLocal_11175 = 0;
	var uLocal_11176 = 0;
	var uLocal_11177 = 0;
	var uLocal_11178 = 0;
	var uLocal_11179 = 0;
	var uLocal_11180 = 0;
	var uLocal_11181 = 0;
	var uLocal_11182 = 0;
	var uLocal_11183 = 0;
	var uLocal_11184 = 0;
	var uLocal_11185 = 0;
	var uLocal_11186 = 0;
	var uLocal_11187 = 0;
	var uLocal_11188 = 0;
	var uLocal_11189 = 0;
	var uLocal_11190 = 0;
	var uLocal_11191 = 0;
	var uLocal_11192 = 0;
	var uLocal_11193 = 15;
	var uLocal_11194 = 0;
	var uLocal_11195 = 0;
	var uLocal_11196 = 0;
	var uLocal_11197 = 0;
	var uLocal_11198 = 0;
	var uLocal_11199 = 0;
	var uLocal_11200 = 0;
	var uLocal_11201 = 0;
	var uLocal_11202 = 0;
	var uLocal_11203 = 0;
	var uLocal_11204 = 0;
	var uLocal_11205 = 0;
	var uLocal_11206 = 0;
	var uLocal_11207 = 0;
	var uLocal_11208 = 0;
	var uLocal_11209 = 0;
	var uLocal_11210 = 0;
	var uLocal_11211 = 0;
	var uLocal_11212 = 0;
	var uLocal_11213 = 0;
	var uLocal_11214 = 0;
	var uLocal_11215 = 0;
	var uLocal_11216 = 0;
	var uLocal_11217 = 0;
	var uLocal_11218 = 0;
	var uLocal_11219 = 0;
	var uLocal_11220 = 0;
	var uLocal_11221 = 0;
	var uLocal_11222 = 0;
	var uLocal_11223 = 0;
	var uLocal_11224 = 0;
	var uLocal_11225 = 0;
	var uLocal_11226 = 0;
	var uLocal_11227 = 0;
	var uLocal_11228 = 0;
	var uLocal_11229 = 0;
	var uLocal_11230 = 0;
	var uLocal_11231 = 0;
	var uLocal_11232 = 0;
	var uLocal_11233 = 0;
	var uLocal_11234 = 0;
	var uLocal_11235 = 0;
	var uLocal_11236 = 0;
	var uLocal_11237 = 0;
	var uLocal_11238 = 0;
	var uLocal_11239 = 0;
	var uLocal_11240 = 0;
	var uLocal_11241 = 0;
	var uLocal_11242 = 0;
	var uLocal_11243 = 0;
	var uLocal_11244 = 0;
	var uLocal_11245 = 0;
	var uLocal_11246 = 0;
	var uLocal_11247 = 0;
	var uLocal_11248 = 0;
	var uLocal_11249 = 0;
	var uLocal_11250 = 0;
	var uLocal_11251 = 0;
	var uLocal_11252 = 0;
	var uLocal_11253 = 0;
	var uLocal_11254 = 0;
	var uLocal_11255 = 0;
	var uLocal_11256 = 0;
	var uLocal_11257 = 0;
	var uLocal_11258 = 0;
	var uLocal_11259 = 0;
	var uLocal_11260 = 0;
	var uLocal_11261 = 0;
	var uLocal_11262 = 0;
	var uLocal_11263 = 0;
	var uLocal_11264 = 0;
	var uLocal_11265 = 0;
	var uLocal_11266 = 0;
	var uLocal_11267 = 0;
	var uLocal_11268 = 0;
	var uLocal_11269 = 0;
	var uLocal_11270 = 0;
	var uLocal_11271 = 0;
	var uLocal_11272 = 0;
	var uLocal_11273 = 0;
	var uLocal_11274 = 0;
	var uLocal_11275 = 0;
	var uLocal_11276 = 0;
	var uLocal_11277 = 0;
	var uLocal_11278 = 0;
	var uLocal_11279 = 0;
	var uLocal_11280 = 0;
	var uLocal_11281 = 0;
	var uLocal_11282 = 0;
	var uLocal_11283 = 0;
	var uLocal_11284 = 0;
	var uLocal_11285 = 0;
	var uLocal_11286 = 0;
	var uLocal_11287 = 0;
	var uLocal_11288 = 0;
	var uLocal_11289 = 0;
	var uLocal_11290 = 0;
	var uLocal_11291 = 0;
	var uLocal_11292 = 0;
	var uLocal_11293 = 0;
	var uLocal_11294 = 0;
	var uLocal_11295 = 0;
	var uLocal_11296 = 0;
	var uLocal_11297 = 0;
	var uLocal_11298 = 0;
	var uLocal_11299 = 0;
	var uLocal_11300 = 0;
	var uLocal_11301 = 0;
	var uLocal_11302 = 0;
	var uLocal_11303 = 0;
	var uLocal_11304 = 0;
	var uLocal_11305 = 0;
	var uLocal_11306 = 0;
	var uLocal_11307 = 0;
	var uLocal_11308 = 0;
	var uLocal_11309 = 0;
	var uLocal_11310 = 0;
	var uLocal_11311 = 0;
	var uLocal_11312 = 0;
	var uLocal_11313 = 0;
	var uLocal_11314 = 0;
	var uLocal_11315 = 0;
	var uLocal_11316 = 0;
	var uLocal_11317 = 0;
	var uLocal_11318 = 0;
	var uLocal_11319 = 0;
	var uLocal_11320 = 0;
	var uLocal_11321 = 0;
	var uLocal_11322 = 0;
	var uLocal_11323 = 0;
	var uLocal_11324 = 0;
	var uLocal_11325 = 0;
	var uLocal_11326 = 0;
	var uLocal_11327 = 0;
	var uLocal_11328 = 0;
	var uLocal_11329 = 0;
	var uLocal_11330 = 0;
	var uLocal_11331 = 0;
	var uLocal_11332 = 0;
	var uLocal_11333 = 0;
	var uLocal_11334 = 0;
	var uLocal_11335 = 0;
	var uLocal_11336 = 0;
	var uLocal_11337 = 0;
	var uLocal_11338 = 0;
	var uLocal_11339 = 0;
	var uLocal_11340 = 0;
	var uLocal_11341 = 0;
	var uLocal_11342 = 0;
	var uLocal_11343 = 0;
	var uLocal_11344 = 0;
	var uLocal_11345 = 0;
	var uLocal_11346 = 0;
	var uLocal_11347 = 0;
	var uLocal_11348 = 0;
	var uLocal_11349 = 0;
	var uLocal_11350 = 0;
	var uLocal_11351 = 0;
	var uLocal_11352 = 0;
	var uLocal_11353 = 0;
	var uLocal_11354 = 0;
	var uLocal_11355 = 0;
	var uLocal_11356 = 0;
	var uLocal_11357 = 0;
	var uLocal_11358 = 0;
	var uLocal_11359 = 0;
	var uLocal_11360 = 0;
	var uLocal_11361 = 0;
	var uLocal_11362 = 0;
	var uLocal_11363 = 0;
	var uLocal_11364 = 0;
	var uLocal_11365 = 0;
	var uLocal_11366 = 0;
	var uLocal_11367 = 0;
	var uLocal_11368 = 0;
	var uLocal_11369 = 0;
	var uLocal_11370 = 0;
	var uLocal_11371 = 0;
	var uLocal_11372 = 0;
	var uLocal_11373 = 0;
	var uLocal_11374 = 0;
	var uLocal_11375 = 0;
	var uLocal_11376 = 0;
	var uLocal_11377 = 0;
	var uLocal_11378 = 0;
	var uLocal_11379 = 0;
	var uLocal_11380 = 0;
	var uLocal_11381 = 0;
	var uLocal_11382 = 0;
	var uLocal_11383 = 0;
	var uLocal_11384 = 0;
	var uLocal_11385 = 0;
	var uLocal_11386 = 0;
	var uLocal_11387 = 0;
	var uLocal_11388 = 0;
	var uLocal_11389 = 0;
	var uLocal_11390 = 0;
	var uLocal_11391 = 0;
	var uLocal_11392 = 0;
	var uLocal_11393 = 0;
	var uLocal_11394 = 0;
	var uLocal_11395 = 0;
	var uLocal_11396 = 0;
	var uLocal_11397 = 0;
	var uLocal_11398 = 0;
	var uLocal_11399 = 0;
	var uLocal_11400 = 0;
	var uLocal_11401 = 0;
	var uLocal_11402 = 0;
	var uLocal_11403 = 0;
	var uLocal_11404 = 0;
	var uLocal_11405 = 0;
	var uLocal_11406 = 0;
	var uLocal_11407 = 0;
	var uLocal_11408 = 0;
	var uLocal_11409 = 0;
	var uLocal_11410 = 0;
	var uLocal_11411 = 0;
	var uLocal_11412 = 0;
	var uLocal_11413 = 0;
	var uLocal_11414 = 0;
	var uLocal_11415 = 0;
	var uLocal_11416 = 0;
	var uLocal_11417 = 0;
	var uLocal_11418 = 0;
	var uLocal_11419 = 0;
	var uLocal_11420 = 0;
	var uLocal_11421 = 0;
	var uLocal_11422 = 0;
	var uLocal_11423 = 0;
	var uLocal_11424 = 0;
	var uLocal_11425 = 0;
	var uLocal_11426 = 0;
	var uLocal_11427 = 0;
	var uLocal_11428 = 0;
	var uLocal_11429 = 0;
	var uLocal_11430 = 0;
	var uLocal_11431 = 0;
	var uLocal_11432 = 0;
	var uLocal_11433 = 0;
	var uLocal_11434 = 10;
	var uLocal_11435 = 0;
	var uLocal_11436 = 0;
	var uLocal_11437 = 0;
	var uLocal_11438 = 0;
	var uLocal_11439 = 0;
	var uLocal_11440 = 0;
	var uLocal_11441 = 0;
	var uLocal_11442 = 0;
	var uLocal_11443 = 0;
	var uLocal_11444 = 0;
	var uLocal_11445 = 0;
	var uLocal_11446 = 0;
	var uLocal_11447 = 0;
	var uLocal_11448 = 0;
	var uLocal_11449 = 0;
	var uLocal_11450 = 0;
	var uLocal_11451 = 0;
	var uLocal_11452 = 0;
	var uLocal_11453 = 0;
	var uLocal_11454 = 0;
	var uLocal_11455 = 0;
	var uLocal_11456 = 0;
	var uLocal_11457 = 0;
	var uLocal_11458 = 0;
	var uLocal_11459 = 0;
	var uLocal_11460 = 0;
	var uLocal_11461 = 0;
	var uLocal_11462 = 0;
	var uLocal_11463 = 0;
	var uLocal_11464 = -1;
	var uLocal_11465 = 0;
	var uLocal_11466 = 0;
	var uLocal_11467 = 0;
	var uLocal_11468 = 0;
	var uLocal_11469 = 0;
	var uLocal_11470 = 0;
	var uLocal_11471 = 0;
	var uLocal_11472 = 0;
	var uLocal_11473 = 0;
	var uLocal_11474 = 0;
	var uLocal_11475 = 0;
	var uLocal_11476 = 65;
	var uLocal_11477 = 0;
	var uLocal_11478 = 0;
	var uLocal_11479 = 0;
	var uLocal_11480 = 0;
	var uLocal_11481 = 0;
	var uLocal_11482 = 0;
	var uLocal_11483 = 0;
	var uLocal_11484 = 0;
	var uLocal_11485 = 0;
	var uLocal_11486 = 0;
	var uLocal_11487 = -1569615261;
	var uLocal_11488 = 0;
	var uLocal_11489 = 0;
	var uLocal_11490 = 0;
	var uLocal_11491 = 0;
	var uLocal_11492 = 0;
	var uLocal_11493 = 0;
	var uLocal_11494 = 0;
	var uLocal_11495 = 0;
	var uLocal_11496 = 0;
	var uLocal_11497 = 0;
	var uLocal_11498 = 0;
	var uLocal_11499 = 0;
	var uLocal_11500 = -1569615261;
	var uLocal_11501 = 0;
	var uLocal_11502 = 0;
	var uLocal_11503 = 0;
	var uLocal_11504 = 0;
	var uLocal_11505 = 0;
	var uLocal_11506 = 0;
	var uLocal_11507 = 0;
	var uLocal_11508 = 0;
	var uLocal_11509 = 0;
	var uLocal_11510 = 0;
	var uLocal_11511 = 0;
	var uLocal_11512 = 0;
	var uLocal_11513 = -1569615261;
	var uLocal_11514 = 0;
	var uLocal_11515 = 0;
	var uLocal_11516 = 0;
	var uLocal_11517 = 0;
	var uLocal_11518 = 0;
	var uLocal_11519 = 0;
	var uLocal_11520 = 0;
	var uLocal_11521 = 0;
	var uLocal_11522 = 0;
	var uLocal_11523 = 0;
	var uLocal_11524 = 0;
	var uLocal_11525 = 0;
	var uLocal_11526 = -1569615261;
	var uLocal_11527 = 0;
	var uLocal_11528 = 0;
	var uLocal_11529 = 0;
	var uLocal_11530 = 0;
	var uLocal_11531 = 0;
	var uLocal_11532 = 0;
	var uLocal_11533 = 0;
	var uLocal_11534 = 0;
	var uLocal_11535 = 0;
	var uLocal_11536 = 0;
	var uLocal_11537 = 0;
	var uLocal_11538 = 0;
	var uLocal_11539 = -1569615261;
	var uLocal_11540 = 0;
	var uLocal_11541 = 0;
	var uLocal_11542 = 0;
	var uLocal_11543 = 0;
	var uLocal_11544 = 0;
	var uLocal_11545 = 0;
	var uLocal_11546 = 0;
	var uLocal_11547 = 0;
	var uLocal_11548 = 0;
	var uLocal_11549 = 0;
	var uLocal_11550 = 0;
	var uLocal_11551 = 0;
	var uLocal_11552 = -1569615261;
	var uLocal_11553 = 0;
	var uLocal_11554 = 0;
	var uLocal_11555 = 0;
	var uLocal_11556 = 0;
	var uLocal_11557 = 0;
	var uLocal_11558 = 0;
	var uLocal_11559 = 0;
	var uLocal_11560 = 0;
	var uLocal_11561 = 0;
	var uLocal_11562 = 0;
	var uLocal_11563 = 0;
	var uLocal_11564 = 0;
	var uLocal_11565 = -1569615261;
	var uLocal_11566 = 0;
	var uLocal_11567 = 0;
	var uLocal_11568 = 0;
	var uLocal_11569 = 0;
	var uLocal_11570 = 0;
	var uLocal_11571 = 0;
	var uLocal_11572 = 0;
	var uLocal_11573 = 0;
	var uLocal_11574 = 0;
	var uLocal_11575 = 0;
	var uLocal_11576 = 0;
	var uLocal_11577 = 0;
	var uLocal_11578 = -1569615261;
	var uLocal_11579 = 0;
	var uLocal_11580 = 0;
	var uLocal_11581 = 0;
	var uLocal_11582 = 0;
	var uLocal_11583 = 0;
	var uLocal_11584 = 0;
	var uLocal_11585 = 0;
	var uLocal_11586 = 0;
	var uLocal_11587 = 0;
	var uLocal_11588 = 0;
	var uLocal_11589 = 0;
	var uLocal_11590 = 0;
	var uLocal_11591 = -1569615261;
	var uLocal_11592 = 0;
	var uLocal_11593 = 0;
	var uLocal_11594 = 0;
	var uLocal_11595 = 0;
	var uLocal_11596 = 0;
	var uLocal_11597 = 0;
	var uLocal_11598 = 0;
	var uLocal_11599 = 0;
	var uLocal_11600 = 0;
	var uLocal_11601 = 0;
	var uLocal_11602 = 0;
	var uLocal_11603 = 0;
	var uLocal_11604 = -1569615261;
	var uLocal_11605 = 0;
	var uLocal_11606 = 0;
	var uLocal_11607 = 0;
	var uLocal_11608 = 0;
	var uLocal_11609 = 0;
	var uLocal_11610 = 0;
	var uLocal_11611 = 0;
	var uLocal_11612 = 0;
	var uLocal_11613 = 0;
	var uLocal_11614 = 0;
	var uLocal_11615 = 0;
	var uLocal_11616 = 0;
	var uLocal_11617 = -1569615261;
	var uLocal_11618 = 0;
	var uLocal_11619 = 0;
	var uLocal_11620 = 0;
	var uLocal_11621 = 0;
	var uLocal_11622 = 0;
	var uLocal_11623 = 0;
	var uLocal_11624 = 0;
	var uLocal_11625 = 0;
	var uLocal_11626 = 0;
	var uLocal_11627 = 0;
	var uLocal_11628 = 0;
	var uLocal_11629 = 0;
	var uLocal_11630 = -1569615261;
	var uLocal_11631 = 0;
	var uLocal_11632 = 0;
	var uLocal_11633 = 0;
	var uLocal_11634 = 0;
	var uLocal_11635 = 0;
	var uLocal_11636 = 0;
	var uLocal_11637 = 0;
	var uLocal_11638 = 0;
	var uLocal_11639 = 0;
	var uLocal_11640 = 0;
	var uLocal_11641 = 0;
	var uLocal_11642 = 0;
	var uLocal_11643 = -1569615261;
	var uLocal_11644 = 0;
	var uLocal_11645 = 0;
	var uLocal_11646 = 0;
	var uLocal_11647 = 0;
	var uLocal_11648 = 0;
	var uLocal_11649 = 0;
	var uLocal_11650 = 0;
	var uLocal_11651 = 0;
	var uLocal_11652 = 0;
	var uLocal_11653 = 0;
	var uLocal_11654 = 0;
	var uLocal_11655 = 0;
	var uLocal_11656 = -1569615261;
	var uLocal_11657 = 0;
	var uLocal_11658 = 0;
	var uLocal_11659 = 0;
	var uLocal_11660 = 0;
	var uLocal_11661 = 0;
	var uLocal_11662 = 0;
	var uLocal_11663 = 0;
	var uLocal_11664 = 0;
	var uLocal_11665 = 0;
	var uLocal_11666 = 0;
	var uLocal_11667 = 0;
	var uLocal_11668 = 0;
	var uLocal_11669 = -1569615261;
	var uLocal_11670 = 0;
	var uLocal_11671 = 0;
	var uLocal_11672 = 0;
	var uLocal_11673 = 0;
	var uLocal_11674 = 0;
	var uLocal_11675 = 0;
	var uLocal_11676 = 0;
	var uLocal_11677 = 0;
	var uLocal_11678 = 0;
	var uLocal_11679 = 0;
	var uLocal_11680 = 0;
	var uLocal_11681 = 0;
	var uLocal_11682 = -1569615261;
	var uLocal_11683 = 0;
	var uLocal_11684 = 0;
	var uLocal_11685 = 0;
	var uLocal_11686 = 0;
	var uLocal_11687 = 0;
	var uLocal_11688 = 0;
	var uLocal_11689 = 0;
	var uLocal_11690 = 0;
	var uLocal_11691 = 0;
	var uLocal_11692 = 0;
	var uLocal_11693 = 0;
	var uLocal_11694 = 0;
	var uLocal_11695 = -1569615261;
	var uLocal_11696 = 0;
	var uLocal_11697 = 0;
	var uLocal_11698 = 0;
	var uLocal_11699 = 0;
	var uLocal_11700 = 0;
	var uLocal_11701 = 0;
	var uLocal_11702 = 0;
	var uLocal_11703 = 0;
	var uLocal_11704 = 0;
	var uLocal_11705 = 0;
	var uLocal_11706 = 0;
	var uLocal_11707 = 0;
	var uLocal_11708 = -1569615261;
	var uLocal_11709 = 0;
	var uLocal_11710 = 0;
	var uLocal_11711 = 0;
	var uLocal_11712 = 0;
	var uLocal_11713 = 0;
	var uLocal_11714 = 0;
	var uLocal_11715 = 0;
	var uLocal_11716 = 0;
	var uLocal_11717 = 0;
	var uLocal_11718 = 0;
	var uLocal_11719 = 0;
	var uLocal_11720 = 0;
	var uLocal_11721 = -1569615261;
	var uLocal_11722 = 0;
	var uLocal_11723 = 0;
	var uLocal_11724 = 0;
	var uLocal_11725 = 0;
	var uLocal_11726 = 0;
	var uLocal_11727 = 0;
	var uLocal_11728 = 0;
	var uLocal_11729 = 0;
	var uLocal_11730 = 0;
	var uLocal_11731 = 0;
	var uLocal_11732 = 0;
	var uLocal_11733 = 0;
	var uLocal_11734 = -1569615261;
	var uLocal_11735 = 0;
	var uLocal_11736 = 0;
	var uLocal_11737 = 0;
	var uLocal_11738 = 0;
	var uLocal_11739 = 0;
	var uLocal_11740 = 0;
	var uLocal_11741 = 0;
	var uLocal_11742 = 0;
	var uLocal_11743 = 0;
	var uLocal_11744 = 0;
	var uLocal_11745 = 0;
	var uLocal_11746 = 0;
	var uLocal_11747 = -1569615261;
	var uLocal_11748 = 0;
	var uLocal_11749 = 0;
	var uLocal_11750 = 0;
	var uLocal_11751 = 0;
	var uLocal_11752 = 0;
	var uLocal_11753 = 0;
	var uLocal_11754 = 0;
	var uLocal_11755 = 0;
	var uLocal_11756 = 0;
	var uLocal_11757 = 0;
	var uLocal_11758 = 0;
	var uLocal_11759 = 0;
	var uLocal_11760 = -1569615261;
	var uLocal_11761 = 0;
	var uLocal_11762 = 0;
	var uLocal_11763 = 0;
	var uLocal_11764 = 0;
	var uLocal_11765 = 0;
	var uLocal_11766 = 0;
	var uLocal_11767 = 0;
	var uLocal_11768 = 0;
	var uLocal_11769 = 0;
	var uLocal_11770 = 0;
	var uLocal_11771 = 0;
	var uLocal_11772 = 0;
	var uLocal_11773 = -1569615261;
	var uLocal_11774 = 0;
	var uLocal_11775 = 0;
	var uLocal_11776 = 0;
	var uLocal_11777 = 0;
	var uLocal_11778 = 0;
	var uLocal_11779 = 0;
	var uLocal_11780 = 0;
	var uLocal_11781 = 0;
	var uLocal_11782 = 0;
	var uLocal_11783 = 0;
	var uLocal_11784 = 0;
	var uLocal_11785 = 0;
	var uLocal_11786 = -1569615261;
	var uLocal_11787 = 0;
	var uLocal_11788 = 0;
	var uLocal_11789 = 0;
	var uLocal_11790 = 0;
	var uLocal_11791 = 0;
	var uLocal_11792 = 0;
	var uLocal_11793 = 0;
	var uLocal_11794 = 0;
	var uLocal_11795 = 0;
	var uLocal_11796 = 0;
	var uLocal_11797 = 0;
	var uLocal_11798 = 0;
	var uLocal_11799 = -1569615261;
	var uLocal_11800 = 0;
	var uLocal_11801 = 0;
	var uLocal_11802 = 0;
	var uLocal_11803 = 0;
	var uLocal_11804 = 0;
	var uLocal_11805 = 0;
	var uLocal_11806 = 0;
	var uLocal_11807 = 0;
	var uLocal_11808 = 0;
	var uLocal_11809 = 0;
	var uLocal_11810 = 0;
	var uLocal_11811 = 0;
	var uLocal_11812 = -1569615261;
	var uLocal_11813 = 0;
	var uLocal_11814 = 0;
	var uLocal_11815 = 0;
	var uLocal_11816 = 0;
	var uLocal_11817 = 0;
	var uLocal_11818 = 0;
	var uLocal_11819 = 0;
	var uLocal_11820 = 0;
	var uLocal_11821 = 0;
	var uLocal_11822 = 0;
	var uLocal_11823 = 0;
	var uLocal_11824 = 0;
	var uLocal_11825 = -1569615261;
	var uLocal_11826 = 0;
	var uLocal_11827 = 0;
	var uLocal_11828 = 0;
	var uLocal_11829 = 0;
	var uLocal_11830 = 0;
	var uLocal_11831 = 0;
	var uLocal_11832 = 0;
	var uLocal_11833 = 0;
	var uLocal_11834 = 0;
	var uLocal_11835 = 0;
	var uLocal_11836 = 0;
	var uLocal_11837 = 0;
	var uLocal_11838 = -1569615261;
	var uLocal_11839 = 0;
	var uLocal_11840 = 0;
	var uLocal_11841 = 0;
	var uLocal_11842 = 0;
	var uLocal_11843 = 0;
	var uLocal_11844 = 0;
	var uLocal_11845 = 0;
	var uLocal_11846 = 0;
	var uLocal_11847 = 0;
	var uLocal_11848 = 0;
	var uLocal_11849 = 0;
	var uLocal_11850 = 0;
	var uLocal_11851 = -1569615261;
	var uLocal_11852 = 0;
	var uLocal_11853 = 0;
	var uLocal_11854 = 0;
	var uLocal_11855 = 0;
	var uLocal_11856 = 0;
	var uLocal_11857 = 0;
	var uLocal_11858 = 0;
	var uLocal_11859 = 0;
	var uLocal_11860 = 0;
	var uLocal_11861 = 0;
	var uLocal_11862 = 0;
	var uLocal_11863 = 0;
	var uLocal_11864 = -1569615261;
	var uLocal_11865 = 0;
	var uLocal_11866 = 0;
	var uLocal_11867 = 0;
	var uLocal_11868 = 0;
	var uLocal_11869 = 0;
	var uLocal_11870 = 0;
	var uLocal_11871 = 0;
	var uLocal_11872 = 0;
	var uLocal_11873 = 0;
	var uLocal_11874 = 0;
	var uLocal_11875 = 0;
	var uLocal_11876 = 0;
	var uLocal_11877 = -1569615261;
	var uLocal_11878 = 0;
	var uLocal_11879 = 0;
	var uLocal_11880 = 0;
	var uLocal_11881 = 0;
	var uLocal_11882 = 0;
	var uLocal_11883 = 0;
	var uLocal_11884 = 0;
	var uLocal_11885 = 0;
	var uLocal_11886 = 0;
	var uLocal_11887 = 0;
	var uLocal_11888 = 0;
	var uLocal_11889 = 0;
	var uLocal_11890 = -1569615261;
	var uLocal_11891 = 0;
	var uLocal_11892 = 0;
	var uLocal_11893 = 0;
	var uLocal_11894 = 0;
	var uLocal_11895 = 0;
	var uLocal_11896 = 0;
	var uLocal_11897 = 0;
	var uLocal_11898 = 0;
	var uLocal_11899 = 0;
	var uLocal_11900 = 0;
	var uLocal_11901 = 0;
	var uLocal_11902 = 0;
	var uLocal_11903 = -1569615261;
	var uLocal_11904 = 0;
	var uLocal_11905 = 0;
	var uLocal_11906 = 0;
	var uLocal_11907 = 0;
	var uLocal_11908 = 0;
	var uLocal_11909 = 0;
	var uLocal_11910 = 0;
	var uLocal_11911 = 0;
	var uLocal_11912 = 0;
	var uLocal_11913 = 0;
	var uLocal_11914 = 0;
	var uLocal_11915 = 0;
	var uLocal_11916 = -1569615261;
	var uLocal_11917 = 0;
	var uLocal_11918 = 0;
	var uLocal_11919 = 0;
	var uLocal_11920 = 0;
	var uLocal_11921 = 0;
	var uLocal_11922 = 0;
	var uLocal_11923 = 0;
	var uLocal_11924 = 0;
	var uLocal_11925 = 0;
	var uLocal_11926 = 0;
	var uLocal_11927 = 0;
	var uLocal_11928 = 0;
	var uLocal_11929 = -1569615261;
	var uLocal_11930 = 0;
	var uLocal_11931 = 0;
	var uLocal_11932 = 0;
	var uLocal_11933 = 0;
	var uLocal_11934 = 0;
	var uLocal_11935 = 0;
	var uLocal_11936 = 0;
	var uLocal_11937 = 0;
	var uLocal_11938 = 0;
	var uLocal_11939 = 0;
	var uLocal_11940 = 0;
	var uLocal_11941 = 0;
	var uLocal_11942 = -1569615261;
	var uLocal_11943 = 0;
	var uLocal_11944 = 0;
	var uLocal_11945 = 0;
	var uLocal_11946 = 0;
	var uLocal_11947 = 0;
	var uLocal_11948 = 0;
	var uLocal_11949 = 0;
	var uLocal_11950 = 0;
	var uLocal_11951 = 0;
	var uLocal_11952 = 0;
	var uLocal_11953 = 0;
	var uLocal_11954 = 0;
	var uLocal_11955 = -1569615261;
	var uLocal_11956 = 0;
	var uLocal_11957 = 0;
	var uLocal_11958 = 0;
	var uLocal_11959 = 0;
	var uLocal_11960 = 0;
	var uLocal_11961 = 0;
	var uLocal_11962 = 0;
	var uLocal_11963 = 0;
	var uLocal_11964 = 0;
	var uLocal_11965 = 0;
	var uLocal_11966 = 0;
	var uLocal_11967 = 0;
	var uLocal_11968 = -1569615261;
	var uLocal_11969 = 0;
	var uLocal_11970 = 0;
	var uLocal_11971 = 0;
	var uLocal_11972 = 0;
	var uLocal_11973 = 0;
	var uLocal_11974 = 0;
	var uLocal_11975 = 0;
	var uLocal_11976 = 0;
	var uLocal_11977 = 0;
	var uLocal_11978 = 0;
	var uLocal_11979 = 0;
	var uLocal_11980 = 0;
	var uLocal_11981 = -1569615261;
	var uLocal_11982 = 0;
	var uLocal_11983 = 0;
	var uLocal_11984 = 0;
	var uLocal_11985 = 0;
	var uLocal_11986 = 0;
	var uLocal_11987 = 0;
	var uLocal_11988 = 0;
	var uLocal_11989 = 0;
	var uLocal_11990 = 0;
	var uLocal_11991 = 0;
	var uLocal_11992 = 0;
	var uLocal_11993 = 0;
	var uLocal_11994 = -1569615261;
	var uLocal_11995 = 0;
	var uLocal_11996 = 0;
	var uLocal_11997 = 0;
	var uLocal_11998 = 0;
	var uLocal_11999 = 0;
	var uLocal_12000 = 0;
	var uLocal_12001 = 0;
	var uLocal_12002 = 0;
	var uLocal_12003 = 0;
	var uLocal_12004 = 0;
	var uLocal_12005 = 0;
	var uLocal_12006 = 0;
	var uLocal_12007 = -1569615261;
	var uLocal_12008 = 0;
	var uLocal_12009 = 0;
	var uLocal_12010 = 0;
	var uLocal_12011 = 0;
	var uLocal_12012 = 0;
	var uLocal_12013 = 0;
	var uLocal_12014 = 0;
	var uLocal_12015 = 0;
	var uLocal_12016 = 0;
	var uLocal_12017 = 0;
	var uLocal_12018 = 0;
	var uLocal_12019 = 0;
	var uLocal_12020 = -1569615261;
	var uLocal_12021 = 0;
	var uLocal_12022 = 0;
	var uLocal_12023 = 0;
	var uLocal_12024 = 0;
	var uLocal_12025 = 0;
	var uLocal_12026 = 0;
	var uLocal_12027 = 0;
	var uLocal_12028 = 0;
	var uLocal_12029 = 0;
	var uLocal_12030 = 0;
	var uLocal_12031 = 0;
	var uLocal_12032 = 0;
	var uLocal_12033 = -1569615261;
	var uLocal_12034 = 0;
	var uLocal_12035 = 0;
	var uLocal_12036 = 0;
	var uLocal_12037 = 0;
	var uLocal_12038 = 0;
	var uLocal_12039 = 0;
	var uLocal_12040 = 0;
	var uLocal_12041 = 0;
	var uLocal_12042 = 0;
	var uLocal_12043 = 0;
	var uLocal_12044 = 0;
	var uLocal_12045 = 0;
	var uLocal_12046 = -1569615261;
	var uLocal_12047 = 0;
	var uLocal_12048 = 0;
	var uLocal_12049 = 0;
	var uLocal_12050 = 0;
	var uLocal_12051 = 0;
	var uLocal_12052 = 0;
	var uLocal_12053 = 0;
	var uLocal_12054 = 0;
	var uLocal_12055 = 0;
	var uLocal_12056 = 0;
	var uLocal_12057 = 0;
	var uLocal_12058 = 0;
	var uLocal_12059 = -1569615261;
	var uLocal_12060 = 0;
	var uLocal_12061 = 0;
	var uLocal_12062 = 0;
	var uLocal_12063 = 0;
	var uLocal_12064 = 0;
	var uLocal_12065 = 0;
	var uLocal_12066 = 0;
	var uLocal_12067 = 0;
	var uLocal_12068 = 0;
	var uLocal_12069 = 0;
	var uLocal_12070 = 0;
	var uLocal_12071 = 0;
	var uLocal_12072 = -1569615261;
	var uLocal_12073 = 0;
	var uLocal_12074 = 0;
	var uLocal_12075 = 0;
	var uLocal_12076 = 0;
	var uLocal_12077 = 0;
	var uLocal_12078 = 0;
	var uLocal_12079 = 0;
	var uLocal_12080 = 0;
	var uLocal_12081 = 0;
	var uLocal_12082 = 0;
	var uLocal_12083 = 0;
	var uLocal_12084 = 0;
	var uLocal_12085 = -1569615261;
	var uLocal_12086 = 0;
	var uLocal_12087 = 0;
	var uLocal_12088 = 0;
	var uLocal_12089 = 0;
	var uLocal_12090 = 0;
	var uLocal_12091 = 0;
	var uLocal_12092 = 0;
	var uLocal_12093 = 0;
	var uLocal_12094 = 0;
	var uLocal_12095 = 0;
	var uLocal_12096 = 0;
	var uLocal_12097 = 0;
	var uLocal_12098 = -1569615261;
	var uLocal_12099 = 0;
	var uLocal_12100 = 0;
	var uLocal_12101 = 0;
	var uLocal_12102 = 0;
	var uLocal_12103 = 0;
	var uLocal_12104 = 0;
	var uLocal_12105 = 0;
	var uLocal_12106 = 0;
	var uLocal_12107 = 0;
	var uLocal_12108 = 0;
	var uLocal_12109 = 0;
	var uLocal_12110 = 0;
	var uLocal_12111 = -1569615261;
	var uLocal_12112 = 0;
	var uLocal_12113 = 0;
	var uLocal_12114 = 0;
	var uLocal_12115 = 0;
	var uLocal_12116 = 0;
	var uLocal_12117 = 0;
	var uLocal_12118 = 0;
	var uLocal_12119 = 0;
	var uLocal_12120 = 0;
	var uLocal_12121 = 0;
	var uLocal_12122 = 0;
	var uLocal_12123 = 0;
	var uLocal_12124 = -1569615261;
	var uLocal_12125 = 0;
	var uLocal_12126 = 0;
	var uLocal_12127 = 0;
	var uLocal_12128 = 0;
	var uLocal_12129 = 0;
	var uLocal_12130 = 0;
	var uLocal_12131 = 0;
	var uLocal_12132 = 0;
	var uLocal_12133 = 0;
	var uLocal_12134 = 0;
	var uLocal_12135 = 0;
	var uLocal_12136 = 0;
	var uLocal_12137 = -1569615261;
	var uLocal_12138 = 0;
	var uLocal_12139 = 0;
	var uLocal_12140 = 0;
	var uLocal_12141 = 0;
	var uLocal_12142 = 0;
	var uLocal_12143 = 0;
	var uLocal_12144 = 0;
	var uLocal_12145 = 0;
	var uLocal_12146 = 0;
	var uLocal_12147 = 0;
	var uLocal_12148 = 0;
	var uLocal_12149 = 0;
	var uLocal_12150 = -1569615261;
	var uLocal_12151 = 0;
	var uLocal_12152 = 0;
	var uLocal_12153 = 0;
	var uLocal_12154 = 0;
	var uLocal_12155 = 0;
	var uLocal_12156 = 0;
	var uLocal_12157 = 0;
	var uLocal_12158 = 0;
	var uLocal_12159 = 0;
	var uLocal_12160 = 0;
	var uLocal_12161 = 0;
	var uLocal_12162 = 0;
	var uLocal_12163 = -1569615261;
	var uLocal_12164 = 0;
	var uLocal_12165 = 0;
	var uLocal_12166 = 0;
	var uLocal_12167 = 0;
	var uLocal_12168 = 0;
	var uLocal_12169 = 0;
	var uLocal_12170 = 0;
	var uLocal_12171 = 0;
	var uLocal_12172 = 0;
	var uLocal_12173 = 0;
	var uLocal_12174 = 0;
	var uLocal_12175 = 0;
	var uLocal_12176 = -1569615261;
	var uLocal_12177 = 0;
	var uLocal_12178 = 0;
	var uLocal_12179 = 0;
	var uLocal_12180 = 0;
	var uLocal_12181 = 0;
	var uLocal_12182 = 0;
	var uLocal_12183 = 0;
	var uLocal_12184 = 0;
	var uLocal_12185 = 0;
	var uLocal_12186 = 0;
	var uLocal_12187 = 0;
	var uLocal_12188 = 0;
	var uLocal_12189 = -1569615261;
	var uLocal_12190 = 0;
	var uLocal_12191 = 0;
	var uLocal_12192 = 0;
	var uLocal_12193 = 0;
	var uLocal_12194 = 0;
	var uLocal_12195 = 0;
	var uLocal_12196 = 0;
	var uLocal_12197 = 0;
	var uLocal_12198 = 0;
	var uLocal_12199 = 0;
	var uLocal_12200 = 0;
	var uLocal_12201 = 0;
	var uLocal_12202 = -1569615261;
	var uLocal_12203 = 0;
	var uLocal_12204 = 0;
	var uLocal_12205 = 0;
	var uLocal_12206 = 0;
	var uLocal_12207 = 0;
	var uLocal_12208 = 0;
	var uLocal_12209 = 0;
	var uLocal_12210 = 0;
	var uLocal_12211 = 0;
	var uLocal_12212 = 0;
	var uLocal_12213 = 0;
	var uLocal_12214 = 0;
	var uLocal_12215 = -1569615261;
	var uLocal_12216 = 0;
	var uLocal_12217 = 0;
	var uLocal_12218 = 0;
	var uLocal_12219 = 0;
	var uLocal_12220 = 0;
	var uLocal_12221 = 0;
	var uLocal_12222 = 0;
	var uLocal_12223 = 0;
	var uLocal_12224 = 0;
	var uLocal_12225 = 0;
	var uLocal_12226 = 0;
	var uLocal_12227 = 0;
	var uLocal_12228 = -1569615261;
	var uLocal_12229 = 0;
	var uLocal_12230 = 0;
	var uLocal_12231 = 0;
	var uLocal_12232 = 0;
	var uLocal_12233 = 0;
	var uLocal_12234 = 0;
	var uLocal_12235 = 0;
	var uLocal_12236 = 0;
	var uLocal_12237 = 0;
	var uLocal_12238 = 0;
	var uLocal_12239 = 0;
	var uLocal_12240 = 0;
	var uLocal_12241 = -1569615261;
	var uLocal_12242 = 0;
	var uLocal_12243 = 0;
	var uLocal_12244 = 0;
	var uLocal_12245 = 0;
	var uLocal_12246 = 0;
	var uLocal_12247 = 0;
	var uLocal_12248 = 0;
	var uLocal_12249 = 0;
	var uLocal_12250 = 0;
	var uLocal_12251 = 0;
	var uLocal_12252 = 0;
	var uLocal_12253 = 0;
	var uLocal_12254 = -1569615261;
	var uLocal_12255 = 0;
	var uLocal_12256 = 0;
	var uLocal_12257 = 0;
	var uLocal_12258 = 0;
	var uLocal_12259 = 0;
	var uLocal_12260 = 0;
	var uLocal_12261 = 0;
	var uLocal_12262 = 0;
	var uLocal_12263 = 0;
	var uLocal_12264 = 0;
	var uLocal_12265 = 0;
	var uLocal_12266 = 0;
	var uLocal_12267 = -1569615261;
	var uLocal_12268 = 0;
	var uLocal_12269 = 0;
	var uLocal_12270 = 0;
	var uLocal_12271 = 0;
	var uLocal_12272 = 0;
	var uLocal_12273 = 0;
	var uLocal_12274 = 0;
	var uLocal_12275 = 0;
	var uLocal_12276 = 0;
	var uLocal_12277 = 0;
	var uLocal_12278 = 0;
	var uLocal_12279 = 0;
	var uLocal_12280 = -1569615261;
	var uLocal_12281 = 0;
	var uLocal_12282 = 0;
	var uLocal_12283 = 0;
	var uLocal_12284 = 0;
	var uLocal_12285 = 0;
	var uLocal_12286 = 0;
	var uLocal_12287 = 0;
	var uLocal_12288 = 0;
	var uLocal_12289 = 0;
	var uLocal_12290 = 0;
	var uLocal_12291 = 0;
	var uLocal_12292 = 0;
	var uLocal_12293 = -1569615261;
	var uLocal_12294 = 0;
	var uLocal_12295 = 0;
	var uLocal_12296 = 0;
	var uLocal_12297 = 0;
	var uLocal_12298 = 0;
	var uLocal_12299 = 0;
	var uLocal_12300 = 0;
	var uLocal_12301 = 0;
	var uLocal_12302 = 0;
	var uLocal_12303 = 0;
	var uLocal_12304 = 0;
	var uLocal_12305 = 0;
	var uLocal_12306 = -1569615261;
	var uLocal_12307 = 0;
	var uLocal_12308 = 0;
	var uLocal_12309 = 0;
	var uLocal_12310 = 0;
	var uLocal_12311 = 0;
	var uLocal_12312 = 0;
	var uLocal_12313 = 0;
	var uLocal_12314 = 0;
	var uLocal_12315 = 0;
	var uLocal_12316 = 0;
	var uLocal_12317 = 0;
	var uLocal_12318 = 0;
	var uLocal_12319 = -1569615261;
	var uLocal_12320 = 0;
	var uLocal_12321 = 0;
	var uLocal_12322 = 0;
	var uLocal_12323 = 0;
	var uLocal_12324 = 0;
	var uLocal_12325 = 0;
	var uLocal_12326 = 0;
	var uLocal_12327 = 0;
	var uLocal_12328 = 0;
	var uLocal_12329 = 0;
	var uLocal_12330 = 0;
	var uLocal_12331 = 0;
	var uLocal_12332 = 0;
	var uLocal_12333 = 0;
	var uLocal_12334 = 0;
	var uLocal_12335 = 0;
	var uLocal_12336 = 0;
	var uLocal_12337 = 1;
	var uLocal_12338 = 30;
	var uLocal_12339 = -1;
	var uLocal_12340 = 0;
	var uLocal_12341 = 1;
	var uLocal_12342 = 0;
	var uLocal_12343 = 0;
	var uLocal_12344 = 0;
	var uLocal_12345 = 0;
	var uLocal_12346 = 0;
	var uLocal_12347 = 0;
	var uLocal_12348 = 0;
	var uLocal_12349 = 0;
	var uLocal_12350 = 0;
	var uLocal_12351 = 1065353216;
	var uLocal_12352 = 0;
	var uLocal_12353 = 0;
	var uLocal_12354 = 1065353216;
	var uLocal_12355 = 1;
	var uLocal_12356 = 0;
	var uLocal_12357 = -1;
	var uLocal_12358 = 0;
	var uLocal_12359 = 1;
	var uLocal_12360 = 0;
	var uLocal_12361 = 0;
	var uLocal_12362 = 0;
	var uLocal_12363 = 0;
	var uLocal_12364 = 0;
	var uLocal_12365 = 0;
	var uLocal_12366 = 0;
	var uLocal_12367 = 0;
	var uLocal_12368 = 0;
	var uLocal_12369 = 1065353216;
	var uLocal_12370 = 0;
	var uLocal_12371 = 0;
	var uLocal_12372 = 1065353216;
	var uLocal_12373 = 1;
	var uLocal_12374 = 0;
	var uLocal_12375 = -1;
	var uLocal_12376 = 0;
	var uLocal_12377 = 1;
	var uLocal_12378 = 0;
	var uLocal_12379 = 0;
	var uLocal_12380 = 0;
	var uLocal_12381 = 0;
	var uLocal_12382 = 0;
	var uLocal_12383 = 0;
	var uLocal_12384 = 0;
	var uLocal_12385 = 0;
	var uLocal_12386 = 0;
	var uLocal_12387 = 1065353216;
	var uLocal_12388 = 0;
	var uLocal_12389 = 0;
	var uLocal_12390 = 1065353216;
	var uLocal_12391 = 1;
	var uLocal_12392 = 0;
	var uLocal_12393 = -1;
	var uLocal_12394 = 0;
	var uLocal_12395 = 1;
	var uLocal_12396 = 0;
	var uLocal_12397 = 0;
	var uLocal_12398 = 0;
	var uLocal_12399 = 0;
	var uLocal_12400 = 0;
	var uLocal_12401 = 0;
	var uLocal_12402 = 0;
	var uLocal_12403 = 0;
	var uLocal_12404 = 0;
	var uLocal_12405 = 1065353216;
	var uLocal_12406 = 0;
	var uLocal_12407 = 0;
	var uLocal_12408 = 1065353216;
	var uLocal_12409 = 1;
	var uLocal_12410 = 0;
	var uLocal_12411 = -1;
	var uLocal_12412 = 0;
	var uLocal_12413 = 1;
	var uLocal_12414 = 0;
	var uLocal_12415 = 0;
	var uLocal_12416 = 0;
	var uLocal_12417 = 0;
	var uLocal_12418 = 0;
	var uLocal_12419 = 0;
	var uLocal_12420 = 0;
	var uLocal_12421 = 0;
	var uLocal_12422 = 0;
	var uLocal_12423 = 1065353216;
	var uLocal_12424 = 0;
	var uLocal_12425 = 0;
	var uLocal_12426 = 1065353216;
	var uLocal_12427 = 1;
	var uLocal_12428 = 0;
	var uLocal_12429 = -1;
	var uLocal_12430 = 0;
	var uLocal_12431 = 1;
	var uLocal_12432 = 0;
	var uLocal_12433 = 0;
	var uLocal_12434 = 0;
	var uLocal_12435 = 0;
	var uLocal_12436 = 0;
	var uLocal_12437 = 0;
	var uLocal_12438 = 0;
	var uLocal_12439 = 0;
	var uLocal_12440 = 0;
	var uLocal_12441 = 1065353216;
	var uLocal_12442 = 0;
	var uLocal_12443 = 0;
	var uLocal_12444 = 1065353216;
	var uLocal_12445 = 1;
	var uLocal_12446 = 0;
	var uLocal_12447 = -1;
	var uLocal_12448 = 0;
	var uLocal_12449 = 1;
	var uLocal_12450 = 0;
	var uLocal_12451 = 0;
	var uLocal_12452 = 0;
	var uLocal_12453 = 0;
	var uLocal_12454 = 0;
	var uLocal_12455 = 0;
	var uLocal_12456 = 0;
	var uLocal_12457 = 0;
	var uLocal_12458 = 0;
	var uLocal_12459 = 1065353216;
	var uLocal_12460 = 0;
	var uLocal_12461 = 0;
	var uLocal_12462 = 1065353216;
	var uLocal_12463 = 1;
	var uLocal_12464 = 0;
	var uLocal_12465 = -1;
	var uLocal_12466 = 0;
	var uLocal_12467 = 1;
	var uLocal_12468 = 0;
	var uLocal_12469 = 0;
	var uLocal_12470 = 0;
	var uLocal_12471 = 0;
	var uLocal_12472 = 0;
	var uLocal_12473 = 0;
	var uLocal_12474 = 0;
	var uLocal_12475 = 0;
	var uLocal_12476 = 0;
	var uLocal_12477 = 1065353216;
	var uLocal_12478 = 0;
	var uLocal_12479 = 0;
	var uLocal_12480 = 1065353216;
	var uLocal_12481 = 1;
	var uLocal_12482 = 0;
	var uLocal_12483 = -1;
	var uLocal_12484 = 0;
	var uLocal_12485 = 1;
	var uLocal_12486 = 0;
	var uLocal_12487 = 0;
	var uLocal_12488 = 0;
	var uLocal_12489 = 0;
	var uLocal_12490 = 0;
	var uLocal_12491 = 0;
	var uLocal_12492 = 0;
	var uLocal_12493 = 0;
	var uLocal_12494 = 0;
	var uLocal_12495 = 1065353216;
	var uLocal_12496 = 0;
	var uLocal_12497 = 0;
	var uLocal_12498 = 1065353216;
	var uLocal_12499 = 1;
	var uLocal_12500 = 0;
	var uLocal_12501 = -1;
	var uLocal_12502 = 0;
	var uLocal_12503 = 1;
	var uLocal_12504 = 0;
	var uLocal_12505 = 0;
	var uLocal_12506 = 0;
	var uLocal_12507 = 0;
	var uLocal_12508 = 0;
	var uLocal_12509 = 0;
	var uLocal_12510 = 0;
	var uLocal_12511 = 0;
	var uLocal_12512 = 0;
	var uLocal_12513 = 1065353216;
	var uLocal_12514 = 0;
	var uLocal_12515 = 0;
	var uLocal_12516 = 1065353216;
	var uLocal_12517 = 1;
	var uLocal_12518 = 0;
	var uLocal_12519 = -1;
	var uLocal_12520 = 0;
	var uLocal_12521 = 1;
	var uLocal_12522 = 0;
	var uLocal_12523 = 0;
	var uLocal_12524 = 0;
	var uLocal_12525 = 0;
	var uLocal_12526 = 0;
	var uLocal_12527 = 0;
	var uLocal_12528 = 0;
	var uLocal_12529 = 0;
	var uLocal_12530 = 0;
	var uLocal_12531 = 1065353216;
	var uLocal_12532 = 0;
	var uLocal_12533 = 0;
	var uLocal_12534 = 1065353216;
	var uLocal_12535 = 1;
	var uLocal_12536 = 0;
	var uLocal_12537 = -1;
	var uLocal_12538 = 0;
	var uLocal_12539 = 1;
	var uLocal_12540 = 0;
	var uLocal_12541 = 0;
	var uLocal_12542 = 0;
	var uLocal_12543 = 0;
	var uLocal_12544 = 0;
	var uLocal_12545 = 0;
	var uLocal_12546 = 0;
	var uLocal_12547 = 0;
	var uLocal_12548 = 0;
	var uLocal_12549 = 1065353216;
	var uLocal_12550 = 0;
	var uLocal_12551 = 0;
	var uLocal_12552 = 1065353216;
	var uLocal_12553 = 1;
	var uLocal_12554 = 0;
	var uLocal_12555 = -1;
	var uLocal_12556 = 0;
	var uLocal_12557 = 1;
	var uLocal_12558 = 0;
	var uLocal_12559 = 0;
	var uLocal_12560 = 0;
	var uLocal_12561 = 0;
	var uLocal_12562 = 0;
	var uLocal_12563 = 0;
	var uLocal_12564 = 0;
	var uLocal_12565 = 0;
	var uLocal_12566 = 0;
	var uLocal_12567 = 1065353216;
	var uLocal_12568 = 0;
	var uLocal_12569 = 0;
	var uLocal_12570 = 1065353216;
	var uLocal_12571 = 1;
	var uLocal_12572 = 0;
	var uLocal_12573 = -1;
	var uLocal_12574 = 0;
	var uLocal_12575 = 1;
	var uLocal_12576 = 0;
	var uLocal_12577 = 0;
	var uLocal_12578 = 0;
	var uLocal_12579 = 0;
	var uLocal_12580 = 0;
	var uLocal_12581 = 0;
	var uLocal_12582 = 0;
	var uLocal_12583 = 0;
	var uLocal_12584 = 0;
	var uLocal_12585 = 1065353216;
	var uLocal_12586 = 0;
	var uLocal_12587 = 0;
	var uLocal_12588 = 1065353216;
	var uLocal_12589 = 1;
	var uLocal_12590 = 0;
	var uLocal_12591 = -1;
	var uLocal_12592 = 0;
	var uLocal_12593 = 1;
	var uLocal_12594 = 0;
	var uLocal_12595 = 0;
	var uLocal_12596 = 0;
	var uLocal_12597 = 0;
	var uLocal_12598 = 0;
	var uLocal_12599 = 0;
	var uLocal_12600 = 0;
	var uLocal_12601 = 0;
	var uLocal_12602 = 0;
	var uLocal_12603 = 1065353216;
	var uLocal_12604 = 0;
	var uLocal_12605 = 0;
	var uLocal_12606 = 1065353216;
	var uLocal_12607 = 1;
	var uLocal_12608 = 0;
	var uLocal_12609 = -1;
	var uLocal_12610 = 0;
	var uLocal_12611 = 1;
	var uLocal_12612 = 0;
	var uLocal_12613 = 0;
	var uLocal_12614 = 0;
	var uLocal_12615 = 0;
	var uLocal_12616 = 0;
	var uLocal_12617 = 0;
	var uLocal_12618 = 0;
	var uLocal_12619 = 0;
	var uLocal_12620 = 0;
	var uLocal_12621 = 1065353216;
	var uLocal_12622 = 0;
	var uLocal_12623 = 0;
	var uLocal_12624 = 1065353216;
	var uLocal_12625 = 1;
	var uLocal_12626 = 0;
	var uLocal_12627 = -1;
	var uLocal_12628 = 0;
	var uLocal_12629 = 1;
	var uLocal_12630 = 0;
	var uLocal_12631 = 0;
	var uLocal_12632 = 0;
	var uLocal_12633 = 0;
	var uLocal_12634 = 0;
	var uLocal_12635 = 0;
	var uLocal_12636 = 0;
	var uLocal_12637 = 0;
	var uLocal_12638 = 0;
	var uLocal_12639 = 1065353216;
	var uLocal_12640 = 0;
	var uLocal_12641 = 0;
	var uLocal_12642 = 1065353216;
	var uLocal_12643 = 1;
	var uLocal_12644 = 0;
	var uLocal_12645 = -1;
	var uLocal_12646 = 0;
	var uLocal_12647 = 1;
	var uLocal_12648 = 0;
	var uLocal_12649 = 0;
	var uLocal_12650 = 0;
	var uLocal_12651 = 0;
	var uLocal_12652 = 0;
	var uLocal_12653 = 0;
	var uLocal_12654 = 0;
	var uLocal_12655 = 0;
	var uLocal_12656 = 0;
	var uLocal_12657 = 1065353216;
	var uLocal_12658 = 0;
	var uLocal_12659 = 0;
	var uLocal_12660 = 1065353216;
	var uLocal_12661 = 1;
	var uLocal_12662 = 0;
	var uLocal_12663 = -1;
	var uLocal_12664 = 0;
	var uLocal_12665 = 1;
	var uLocal_12666 = 0;
	var uLocal_12667 = 0;
	var uLocal_12668 = 0;
	var uLocal_12669 = 0;
	var uLocal_12670 = 0;
	var uLocal_12671 = 0;
	var uLocal_12672 = 0;
	var uLocal_12673 = 0;
	var uLocal_12674 = 0;
	var uLocal_12675 = 1065353216;
	var uLocal_12676 = 0;
	var uLocal_12677 = 0;
	var uLocal_12678 = 1065353216;
	var uLocal_12679 = 1;
	var uLocal_12680 = 0;
	var uLocal_12681 = -1;
	var uLocal_12682 = 0;
	var uLocal_12683 = 1;
	var uLocal_12684 = 0;
	var uLocal_12685 = 0;
	var uLocal_12686 = 0;
	var uLocal_12687 = 0;
	var uLocal_12688 = 0;
	var uLocal_12689 = 0;
	var uLocal_12690 = 0;
	var uLocal_12691 = 0;
	var uLocal_12692 = 0;
	var uLocal_12693 = 1065353216;
	var uLocal_12694 = 0;
	var uLocal_12695 = 0;
	var uLocal_12696 = 1065353216;
	var uLocal_12697 = 1;
	var uLocal_12698 = 0;
	var uLocal_12699 = -1;
	var uLocal_12700 = 0;
	var uLocal_12701 = 1;
	var uLocal_12702 = 0;
	var uLocal_12703 = 0;
	var uLocal_12704 = 0;
	var uLocal_12705 = 0;
	var uLocal_12706 = 0;
	var uLocal_12707 = 0;
	var uLocal_12708 = 0;
	var uLocal_12709 = 0;
	var uLocal_12710 = 0;
	var uLocal_12711 = 1065353216;
	var uLocal_12712 = 0;
	var uLocal_12713 = 0;
	var uLocal_12714 = 1065353216;
	var uLocal_12715 = 1;
	var uLocal_12716 = 0;
	var uLocal_12717 = -1;
	var uLocal_12718 = 0;
	var uLocal_12719 = 1;
	var uLocal_12720 = 0;
	var uLocal_12721 = 0;
	var uLocal_12722 = 0;
	var uLocal_12723 = 0;
	var uLocal_12724 = 0;
	var uLocal_12725 = 0;
	var uLocal_12726 = 0;
	var uLocal_12727 = 0;
	var uLocal_12728 = 0;
	var uLocal_12729 = 1065353216;
	var uLocal_12730 = 0;
	var uLocal_12731 = 0;
	var uLocal_12732 = 1065353216;
	var uLocal_12733 = 1;
	var uLocal_12734 = 0;
	var uLocal_12735 = -1;
	var uLocal_12736 = 0;
	var uLocal_12737 = 1;
	var uLocal_12738 = 0;
	var uLocal_12739 = 0;
	var uLocal_12740 = 0;
	var uLocal_12741 = 0;
	var uLocal_12742 = 0;
	var uLocal_12743 = 0;
	var uLocal_12744 = 0;
	var uLocal_12745 = 0;
	var uLocal_12746 = 0;
	var uLocal_12747 = 1065353216;
	var uLocal_12748 = 0;
	var uLocal_12749 = 0;
	var uLocal_12750 = 1065353216;
	var uLocal_12751 = 1;
	var uLocal_12752 = 0;
	var uLocal_12753 = -1;
	var uLocal_12754 = 0;
	var uLocal_12755 = 1;
	var uLocal_12756 = 0;
	var uLocal_12757 = 0;
	var uLocal_12758 = 0;
	var uLocal_12759 = 0;
	var uLocal_12760 = 0;
	var uLocal_12761 = 0;
	var uLocal_12762 = 0;
	var uLocal_12763 = 0;
	var uLocal_12764 = 0;
	var uLocal_12765 = 1065353216;
	var uLocal_12766 = 0;
	var uLocal_12767 = 0;
	var uLocal_12768 = 1065353216;
	var uLocal_12769 = 1;
	var uLocal_12770 = 0;
	var uLocal_12771 = -1;
	var uLocal_12772 = 0;
	var uLocal_12773 = 1;
	var uLocal_12774 = 0;
	var uLocal_12775 = 0;
	var uLocal_12776 = 0;
	var uLocal_12777 = 0;
	var uLocal_12778 = 0;
	var uLocal_12779 = 0;
	var uLocal_12780 = 0;
	var uLocal_12781 = 0;
	var uLocal_12782 = 0;
	var uLocal_12783 = 1065353216;
	var uLocal_12784 = 0;
	var uLocal_12785 = 0;
	var uLocal_12786 = 1065353216;
	var uLocal_12787 = 1;
	var uLocal_12788 = 0;
	var uLocal_12789 = -1;
	var uLocal_12790 = 0;
	var uLocal_12791 = 1;
	var uLocal_12792 = 0;
	var uLocal_12793 = 0;
	var uLocal_12794 = 0;
	var uLocal_12795 = 0;
	var uLocal_12796 = 0;
	var uLocal_12797 = 0;
	var uLocal_12798 = 0;
	var uLocal_12799 = 0;
	var uLocal_12800 = 0;
	var uLocal_12801 = 1065353216;
	var uLocal_12802 = 0;
	var uLocal_12803 = 0;
	var uLocal_12804 = 1065353216;
	var uLocal_12805 = 1;
	var uLocal_12806 = 0;
	var uLocal_12807 = -1;
	var uLocal_12808 = 0;
	var uLocal_12809 = 1;
	var uLocal_12810 = 0;
	var uLocal_12811 = 0;
	var uLocal_12812 = 0;
	var uLocal_12813 = 0;
	var uLocal_12814 = 0;
	var uLocal_12815 = 0;
	var uLocal_12816 = 0;
	var uLocal_12817 = 0;
	var uLocal_12818 = 0;
	var uLocal_12819 = 1065353216;
	var uLocal_12820 = 0;
	var uLocal_12821 = 0;
	var uLocal_12822 = 1065353216;
	var uLocal_12823 = 1;
	var uLocal_12824 = 0;
	var uLocal_12825 = -1;
	var uLocal_12826 = 0;
	var uLocal_12827 = 1;
	var uLocal_12828 = 0;
	var uLocal_12829 = 0;
	var uLocal_12830 = 0;
	var uLocal_12831 = 0;
	var uLocal_12832 = 0;
	var uLocal_12833 = 0;
	var uLocal_12834 = 0;
	var uLocal_12835 = 0;
	var uLocal_12836 = 0;
	var uLocal_12837 = 1065353216;
	var uLocal_12838 = 0;
	var uLocal_12839 = 0;
	var uLocal_12840 = 1065353216;
	var uLocal_12841 = 1;
	var uLocal_12842 = 0;
	var uLocal_12843 = -1;
	var uLocal_12844 = 0;
	var uLocal_12845 = 1;
	var uLocal_12846 = 0;
	var uLocal_12847 = 0;
	var uLocal_12848 = 0;
	var uLocal_12849 = 0;
	var uLocal_12850 = 0;
	var uLocal_12851 = 0;
	var uLocal_12852 = 0;
	var uLocal_12853 = 0;
	var uLocal_12854 = 0;
	var uLocal_12855 = 1065353216;
	var uLocal_12856 = 0;
	var uLocal_12857 = 0;
	var uLocal_12858 = 1065353216;
	var uLocal_12859 = 1;
	var uLocal_12860 = 0;
	var uLocal_12861 = -1;
	var uLocal_12862 = 0;
	var uLocal_12863 = 1;
	var uLocal_12864 = 0;
	var uLocal_12865 = 0;
	var uLocal_12866 = 0;
	var uLocal_12867 = 0;
	var uLocal_12868 = 0;
	var uLocal_12869 = 0;
	var uLocal_12870 = 0;
	var uLocal_12871 = 0;
	var uLocal_12872 = 0;
	var uLocal_12873 = 1065353216;
	var uLocal_12874 = 0;
	var uLocal_12875 = 0;
	var uLocal_12876 = 1065353216;
	var uLocal_12877 = 1;
	var uLocal_12878 = 0;
	var uLocal_12879 = 8;
	var uLocal_12880 = 0;
	var uLocal_12881 = 0;
	var uLocal_12882 = 0;
	var uLocal_12883 = 0;
	var uLocal_12884 = 0;
	var uLocal_12885 = 0;
	var uLocal_12886 = 0;
	var uLocal_12887 = 0;
	var uLocal_12888 = 0;
	var uLocal_12889 = 0;
	var uLocal_12890 = 0;
	var uLocal_12891 = 0;
	var uLocal_12892 = 0;
	var uLocal_12893 = 0;
	var uLocal_12894 = 0;
	var uLocal_12895 = 0;
	var uLocal_12896 = 0;
	var uLocal_12897 = 0;
	var uLocal_12898 = 0;
	var uLocal_12899 = 0;
	var uLocal_12900 = 0;
	var uLocal_12901 = 0;
	var uLocal_12902 = 0;
	var uLocal_12903 = 0;
	var uLocal_12904 = 0;
	var uLocal_12905 = 0;
	var uLocal_12906 = 0;
	var uLocal_12907 = 0;
	var uLocal_12908 = 0;
	var uLocal_12909 = 0;
	var uLocal_12910 = 0;
	var uLocal_12911 = 0;
	var uLocal_12912 = 0;
	var uLocal_12913 = 0;
	var uLocal_12914 = 0;
	var uLocal_12915 = 0;
	var uLocal_12916 = 0;
	var uLocal_12917 = 0;
	var uLocal_12918 = 0;
	var uLocal_12919 = 0;
	var uLocal_12920 = 0;
	var uLocal_12921 = 0;
	var uLocal_12922 = 0;
	var uLocal_12923 = 0;
	var uLocal_12924 = 0;
	var uLocal_12925 = 0;
	var uLocal_12926 = 0;
	var uLocal_12927 = 0;
	var uLocal_12928 = 0;
	var uLocal_12929 = 0;
	var uLocal_12930 = 0;
	var uLocal_12931 = 0;
	var uLocal_12932 = 0;
	var uLocal_12933 = 0;
	var uLocal_12934 = 0;
	var uLocal_12935 = 0;
	var uLocal_12936 = 0;
	var uLocal_12937 = 0;
	var uLocal_12938 = 0;
	var uLocal_12939 = 0;
	var uLocal_12940 = 0;
	var uLocal_12941 = 0;
	var uLocal_12942 = 0;
	var uLocal_12943 = 0;
	var uLocal_12944 = 0;
	var uLocal_12945 = 0;
	var uLocal_12946 = 0;
	var uLocal_12947 = 0;
	var uLocal_12948 = 0;
	var uLocal_12949 = 0;
	var uLocal_12950 = 0;
	var uLocal_12951 = 0;
	var uLocal_12952 = 0;
	var uLocal_12953 = 0;
	var uLocal_12954 = 0;
	var uLocal_12955 = 0;
	var uLocal_12956 = 0;
	var uLocal_12957 = 0;
	var uLocal_12958 = 0;
	var uLocal_12959 = 0;
	var uLocal_12960 = 0;
	var uLocal_12961 = 0;
	var uLocal_12962 = 0;
	var uLocal_12963 = 0;
	var uLocal_12964 = 0;
	var uLocal_12965 = 0;
	var uLocal_12966 = 0;
	var uLocal_12967 = 0;
	var uLocal_12968 = 0;
	var uLocal_12969 = 0;
	var uLocal_12970 = 0;
	var uLocal_12971 = 0;
	var uLocal_12972 = 0;
	var uLocal_12973 = 0;
	var uLocal_12974 = 0;
	var uLocal_12975 = 0;
	var uLocal_12976 = 0;
	var uLocal_12977 = 0;
	var uLocal_12978 = 0;
	var uLocal_12979 = 0;
	var uLocal_12980 = 0;
	var uLocal_12981 = 0;
	var uLocal_12982 = 0;
	var uLocal_12983 = 0;
	var uLocal_12984 = 0;
	var uLocal_12985 = 0;
	var uLocal_12986 = 0;
	var uLocal_12987 = 0;
	var uLocal_12988 = 0;
	var uLocal_12989 = 0;
	var uLocal_12990 = 0;
	var uLocal_12991 = 0;
	var uLocal_12992 = 0;
	var uLocal_12993 = 0;
	var uLocal_12994 = 0;
	var uLocal_12995 = 0;
	var uLocal_12996 = 0;
	var uLocal_12997 = 0;
	var uLocal_12998 = 0;
	var uLocal_12999 = 0;
	var uLocal_13000 = 0;
	var uLocal_13001 = 0;
	var uLocal_13002 = 0;
	var uLocal_13003 = 0;
	var uLocal_13004 = 0;
	var uLocal_13005 = 0;
	var uLocal_13006 = 0;
	var uLocal_13007 = 0;
	var uLocal_13008 = 0;
	var uLocal_13009 = 0;
	var uLocal_13010 = 0;
	var uLocal_13011 = 0;
	var uLocal_13012 = 0;
	var uLocal_13013 = 0;
	var uLocal_13014 = 0;
	var uLocal_13015 = 0;
	var uLocal_13016 = 0;
	var uLocal_13017 = 0;
	var uLocal_13018 = 0;
	var uLocal_13019 = 0;
	var uLocal_13020 = 0;
	var uLocal_13021 = 0;
	var uLocal_13022 = 0;
	var uLocal_13023 = 0;
	var uLocal_13024 = 0;
	var uLocal_13025 = 0;
	var uLocal_13026 = 0;
	var uLocal_13027 = 0;
	var uLocal_13028 = 0;
	var uLocal_13029 = 0;
	var uLocal_13030 = 0;
	var uLocal_13031 = 0;
	var uLocal_13032 = 0;
	var uLocal_13033 = 0;
	var uLocal_13034 = 0;
	var uLocal_13035 = 0;
	var uLocal_13036 = 0;
	var uLocal_13037 = 0;
	var uLocal_13038 = 0;
	var uLocal_13039 = 0;
	var uLocal_13040 = 0;
	var uLocal_13041 = 0;
	var uLocal_13042 = 0;
	var uLocal_13043 = 0;
	var uLocal_13044 = 0;
	var uLocal_13045 = 0;
	var uLocal_13046 = 0;
	var uLocal_13047 = 0;
	var uLocal_13048 = 0;
	var uLocal_13049 = 0;
	var uLocal_13050 = 0;
	var uLocal_13051 = 0;
	var uLocal_13052 = 0;
	var uLocal_13053 = 0;
	var uLocal_13054 = 0;
	var uLocal_13055 = 0;
	var uLocal_13056 = 0;
	var uLocal_13057 = 0;
	var uLocal_13058 = 0;
	var uLocal_13059 = 0;
	var uLocal_13060 = 0;
	var uLocal_13061 = 0;
	var uLocal_13062 = 0;
	var uLocal_13063 = 0;
	var uLocal_13064 = 0;
	var uLocal_13065 = 0;
	var uLocal_13066 = 0;
	var uLocal_13067 = 0;
	var uLocal_13068 = 0;
	var uLocal_13069 = 0;
	var uLocal_13070 = 0;
	var uLocal_13071 = 0;
	var uLocal_13072 = 0;
	var uLocal_13073 = 0;
	var uLocal_13074 = 0;
	var uLocal_13075 = 0;
	var uLocal_13076 = 0;
	var uLocal_13077 = 0;
	var uLocal_13078 = 0;
	var uLocal_13079 = 0;
	var uLocal_13080 = 0;
	var uLocal_13081 = 0;
	var uLocal_13082 = 0;
	var uLocal_13083 = 0;
	var uLocal_13084 = 0;
	var uLocal_13085 = 0;
	var uLocal_13086 = 0;
	var uLocal_13087 = 0;
	var uLocal_13088 = 0;
	var uLocal_13089 = 0;
	var uLocal_13090 = 0;
	var uLocal_13091 = 0;
	var uLocal_13092 = 0;
	var uLocal_13093 = 0;
	var uLocal_13094 = 0;
	var uLocal_13095 = 0;
	var uLocal_13096 = 0;
	var uLocal_13097 = 0;
	var uLocal_13098 = 0;
	var uLocal_13099 = 0;
	var uLocal_13100 = 0;
	var uLocal_13101 = 0;
	var uLocal_13102 = 0;
	var uLocal_13103 = 0;
	var uLocal_13104 = 0;
	var uLocal_13105 = 0;
	var uLocal_13106 = 0;
	var uLocal_13107 = 0;
	var uLocal_13108 = 0;
	var uLocal_13109 = 0;
	var uLocal_13110 = 0;
	var uLocal_13111 = 0;
	var uLocal_13112 = 0;
	var uLocal_13113 = 0;
	var uLocal_13114 = 0;
	var uLocal_13115 = 0;
	var uLocal_13116 = 0;
	var uLocal_13117 = 0;
	var uLocal_13118 = 0;
	var uLocal_13119 = 0;
	var uLocal_13120 = 0;
	var uLocal_13121 = 0;
	var uLocal_13122 = 0;
	var uLocal_13123 = 0;
	var uLocal_13124 = 0;
	var uLocal_13125 = 0;
	var uLocal_13126 = 0;
	var uLocal_13127 = 0;
	var uLocal_13128 = 0;
	var uLocal_13129 = 0;
	var uLocal_13130 = 0;
	var uLocal_13131 = 0;
	var uLocal_13132 = 0;
	var uLocal_13133 = 0;
	var uLocal_13134 = 0;
	var uLocal_13135 = 0;
	var uLocal_13136 = 0;
	var uLocal_13137 = 0;
	var uLocal_13138 = 0;
	var uLocal_13139 = 0;
	var uLocal_13140 = 0;
	var uLocal_13141 = 0;
	var uLocal_13142 = 0;
	var uLocal_13143 = 0;
	var uLocal_13144 = 0;
	var uLocal_13145 = 0;
	var uLocal_13146 = 0;
	var uLocal_13147 = 0;
	var uLocal_13148 = 0;
	var uLocal_13149 = 0;
	var uLocal_13150 = 0;
	var uLocal_13151 = 0;
	var uLocal_13152 = 0;
	var uLocal_13153 = 0;
	var uLocal_13154 = 0;
	var uLocal_13155 = 0;
	var uLocal_13156 = 0;
	var uLocal_13157 = 0;
	var uLocal_13158 = 0;
	var uLocal_13159 = 0;
	var uLocal_13160 = 0;
	var uLocal_13161 = 0;
	var uLocal_13162 = 0;
	var uLocal_13163 = 0;
	var uLocal_13164 = 0;
	var uLocal_13165 = 0;
	var uLocal_13166 = 0;
	var uLocal_13167 = 0;
	var uLocal_13168 = 0;
	var uLocal_13169 = 0;
	var uLocal_13170 = 0;
	var uLocal_13171 = 0;
	var uLocal_13172 = 0;
	var uLocal_13173 = 0;
	var uLocal_13174 = 0;
	var uLocal_13175 = 0;
	var uLocal_13176 = 0;
	var uLocal_13177 = 0;
	var uLocal_13178 = 0;
	var uLocal_13179 = 0;
	var uLocal_13180 = 0;
	var uLocal_13181 = 0;
	var uLocal_13182 = 0;
	var uLocal_13183 = 0;
	var uLocal_13184 = 0;
	var uLocal_13185 = 0;
	var uLocal_13186 = 0;
	var uLocal_13187 = 0;
	var uLocal_13188 = 0;
	var uLocal_13189 = 0;
	var uLocal_13190 = 0;
	var uLocal_13191 = 0;
	var uLocal_13192 = 0;
	var uLocal_13193 = 0;
	var uLocal_13194 = 0;
	var uLocal_13195 = 0;
	var uLocal_13196 = 0;
	var uLocal_13197 = 0;
	var uLocal_13198 = 0;
	var uLocal_13199 = 0;
	var uLocal_13200 = 0;
	var uLocal_13201 = 0;
	var uLocal_13202 = 0;
	var uLocal_13203 = 0;
	var uLocal_13204 = 0;
	var uLocal_13205 = 0;
	var uLocal_13206 = 0;
	var uLocal_13207 = 0;
	var uLocal_13208 = 8;
	var uLocal_13209 = 0;
	var uLocal_13210 = 0;
	var uLocal_13211 = 0;
	var uLocal_13212 = 0;
	var uLocal_13213 = 0;
	var uLocal_13214 = 0;
	var uLocal_13215 = 0;
	var uLocal_13216 = 0;
	var uLocal_13217 = 0;
	var uLocal_13218 = 0;
	var uLocal_13219 = 0;
	var uLocal_13220 = 0;
	var uLocal_13221 = 0;
	var uLocal_13222 = 0;
	var uLocal_13223 = 0;
	var uLocal_13224 = 0;
	var uLocal_13225 = 0;
	var uLocal_13226 = 0;
	var uLocal_13227 = 0;
	var uLocal_13228 = 0;
	var uLocal_13229 = -1;
	var uLocal_13230 = 0;
	var uLocal_13231 = 0;
	var uLocal_13232 = 0;
	var uLocal_13233 = 0;
	var uLocal_13234 = 0;
	var uLocal_13235 = 0;
	var uLocal_13236 = 0;
	var uLocal_13237 = 0;
	var uLocal_13238 = 0;
	var uLocal_13239 = 0;
	var uLocal_13240 = 0;
	var uLocal_13241 = 0;
	var uLocal_13242 = 0;
	var uLocal_13243 = 0;
	var uLocal_13244 = 0;
	var uLocal_13245 = 0;
	var uLocal_13246 = 0;
	var uLocal_13247 = 0;
	var uLocal_13248 = 0;
	var uLocal_13249 = 0;
	var uLocal_13250 = 0;
	var uLocal_13251 = -1;
	var uLocal_13252 = 0;
	var uLocal_13253 = 0;
	var uLocal_13254 = 0;
	var uLocal_13255 = 0;
	var uLocal_13256 = 0;
	var uLocal_13257 = 0;
	var uLocal_13258 = 0;
	var uLocal_13259 = 0;
	var uLocal_13260 = 0;
	var uLocal_13261 = 0;
	var uLocal_13262 = 0;
	var uLocal_13263 = 0;
	var uLocal_13264 = 0;
	var uLocal_13265 = 0;
	var uLocal_13266 = 0;
	var uLocal_13267 = 0;
	var uLocal_13268 = 0;
	var uLocal_13269 = 0;
	var uLocal_13270 = 0;
	var uLocal_13271 = 0;
	var uLocal_13272 = 0;
	var uLocal_13273 = -1;
	var uLocal_13274 = 0;
	var uLocal_13275 = 0;
	var uLocal_13276 = 0;
	var uLocal_13277 = 0;
	var uLocal_13278 = 0;
	var uLocal_13279 = 0;
	var uLocal_13280 = 0;
	var uLocal_13281 = 0;
	var uLocal_13282 = 0;
	var uLocal_13283 = 0;
	var uLocal_13284 = 0;
	var uLocal_13285 = 0;
	var uLocal_13286 = 0;
	var uLocal_13287 = 0;
	var uLocal_13288 = 0;
	var uLocal_13289 = 0;
	var uLocal_13290 = 0;
	var uLocal_13291 = 0;
	var uLocal_13292 = 0;
	var uLocal_13293 = 0;
	var uLocal_13294 = 0;
	var uLocal_13295 = -1;
	var uLocal_13296 = 0;
	var uLocal_13297 = 0;
	var uLocal_13298 = 0;
	var uLocal_13299 = 0;
	var uLocal_13300 = 0;
	var uLocal_13301 = 0;
	var uLocal_13302 = 0;
	var uLocal_13303 = 0;
	var uLocal_13304 = 0;
	var uLocal_13305 = 0;
	var uLocal_13306 = 0;
	var uLocal_13307 = 0;
	var uLocal_13308 = 0;
	var uLocal_13309 = 0;
	var uLocal_13310 = 0;
	var uLocal_13311 = 0;
	var uLocal_13312 = 0;
	var uLocal_13313 = 0;
	var uLocal_13314 = 0;
	var uLocal_13315 = 0;
	var uLocal_13316 = 0;
	var uLocal_13317 = -1;
	var uLocal_13318 = 0;
	var uLocal_13319 = 0;
	var uLocal_13320 = 0;
	var uLocal_13321 = 0;
	var uLocal_13322 = 0;
	var uLocal_13323 = 0;
	var uLocal_13324 = 0;
	var uLocal_13325 = 0;
	var uLocal_13326 = 0;
	var uLocal_13327 = 0;
	var uLocal_13328 = 0;
	var uLocal_13329 = 0;
	var uLocal_13330 = 0;
	var uLocal_13331 = 0;
	var uLocal_13332 = 0;
	var uLocal_13333 = 0;
	var uLocal_13334 = 0;
	var uLocal_13335 = 0;
	var uLocal_13336 = 0;
	var uLocal_13337 = 0;
	var uLocal_13338 = 0;
	var uLocal_13339 = -1;
	var uLocal_13340 = 0;
	var uLocal_13341 = 0;
	var uLocal_13342 = 0;
	var uLocal_13343 = 0;
	var uLocal_13344 = 0;
	var uLocal_13345 = 0;
	var uLocal_13346 = 0;
	var uLocal_13347 = 0;
	var uLocal_13348 = 0;
	var uLocal_13349 = 0;
	var uLocal_13350 = 0;
	var uLocal_13351 = 0;
	var uLocal_13352 = 0;
	var uLocal_13353 = 0;
	var uLocal_13354 = 0;
	var uLocal_13355 = 0;
	var uLocal_13356 = 0;
	var uLocal_13357 = 0;
	var uLocal_13358 = 0;
	var uLocal_13359 = 0;
	var uLocal_13360 = 0;
	var uLocal_13361 = -1;
	var uLocal_13362 = 0;
	var uLocal_13363 = 0;
	var uLocal_13364 = 0;
	var uLocal_13365 = 0;
	var uLocal_13366 = 0;
	var uLocal_13367 = 0;
	var uLocal_13368 = 0;
	var uLocal_13369 = 0;
	var uLocal_13370 = 0;
	var uLocal_13371 = 0;
	var uLocal_13372 = 0;
	var uLocal_13373 = 0;
	var uLocal_13374 = 0;
	var uLocal_13375 = 0;
	var uLocal_13376 = 0;
	var uLocal_13377 = 0;
	var uLocal_13378 = 0;
	var uLocal_13379 = 0;
	var uLocal_13380 = 0;
	var uLocal_13381 = 0;
	var uLocal_13382 = 0;
	var uLocal_13383 = -1;
	var uLocal_13384 = 0;
	var uLocal_13385 = 11;
	var uLocal_13386 = 0;
	var uLocal_13387 = 0;
	var uLocal_13388 = 0;
	var uLocal_13389 = 0;
	var uLocal_13390 = 0;
	var uLocal_13391 = 0;
	var uLocal_13392 = 0;
	var uLocal_13393 = 0;
	var uLocal_13394 = 0;
	var uLocal_13395 = 0;
	var uLocal_13396 = 0;
	var uLocal_13397 = 0;
	var uLocal_13398 = 0;
	var uLocal_13399 = 0;
	var uLocal_13400 = 0;
	var uLocal_13401 = 0;
	var uLocal_13402 = 0;
	var uLocal_13403 = 0;
	var uLocal_13404 = 0;
	var uLocal_13405 = 0;
	var uLocal_13406 = 0;
	var uLocal_13407 = 0;
	var uLocal_13408 = 0;
	var uLocal_13409 = 0;
	var uLocal_13410 = 0;
	var uLocal_13411 = 0;
	var uLocal_13412 = 0;
	var uLocal_13413 = 0;
	var uLocal_13414 = 0;
	var uLocal_13415 = 0;
	var uLocal_13416 = 0;
	var uLocal_13417 = 0;
	var uLocal_13418 = 0;
	var uLocal_13419 = 0;
	var uLocal_13420 = 0;
	var uLocal_13421 = 0;
	var uLocal_13422 = 0;
	var uLocal_13423 = 0;
	var uLocal_13424 = 0;
	var uLocal_13425 = 0;
	var uLocal_13426 = 0;
	var uLocal_13427 = 0;
	var uLocal_13428 = 0;
	var uLocal_13429 = 0;
	var uLocal_13430 = 0;
	var uLocal_13431 = 0;
	var uLocal_13432 = 0;
	var uLocal_13433 = 0;
	var uLocal_13434 = 0;
	var uLocal_13435 = 0;
	var uLocal_13436 = 0;
	var uLocal_13437 = 0;
	var uLocal_13438 = 0;
	var uLocal_13439 = 0;
	var uLocal_13440 = 0;
	var uLocal_13441 = 0;
	var uLocal_13442 = 0;
	var uLocal_13443 = 0;
	var uLocal_13444 = 0;
	var uLocal_13445 = 0;
	var uLocal_13446 = 0;
	var uLocal_13447 = 0;
	var uLocal_13448 = 0;
	var uLocal_13449 = 0;
	var uLocal_13450 = 0;
	var uLocal_13451 = 0;
	var uLocal_13452 = 0;
	var uLocal_13453 = 0;
	var uLocal_13454 = 0;
	var uLocal_13455 = 0;
	var uLocal_13456 = 0;
	var uLocal_13457 = 0;
	var uLocal_13458 = 0;
	var uLocal_13459 = 0;
	var uLocal_13460 = 0;
	var uLocal_13461 = 0;
	var uLocal_13462 = 0;
	var uLocal_13463 = 0;
	var uLocal_13464 = 0;
	var uLocal_13465 = 0;
	var uLocal_13466 = 0;
	var uLocal_13467 = 0;
	var uLocal_13468 = 0;
	var uLocal_13469 = 0;
	var uLocal_13470 = 0;
	var uLocal_13471 = 0;
	var uLocal_13472 = 0;
	var uLocal_13473 = 0;
	var uLocal_13474 = 0;
	var uLocal_13475 = 0;
	var uLocal_13476 = 0;
	var uLocal_13477 = 0;
	var uLocal_13478 = 0;
	var uLocal_13479 = 0;
	var uLocal_13480 = 0;
	var uLocal_13481 = 0;
	var uLocal_13482 = 0;
	var uLocal_13483 = 0;
	var uLocal_13484 = 0;
	var uLocal_13485 = 0;
	var uLocal_13486 = 0;
	var uLocal_13487 = 0;
	var uLocal_13488 = 0;
	var uLocal_13489 = 0;
	var uLocal_13490 = 0;
	var uLocal_13491 = 0;
	var uLocal_13492 = 0;
	var uLocal_13493 = 0;
	var uLocal_13494 = 0;
	var uLocal_13495 = 0;
	var uLocal_13496 = 2;
	var uLocal_13497 = 0;
	var uLocal_13498 = 0;
	var uLocal_13499 = 0;
	var uLocal_13500 = 0;
	var uLocal_13501 = 0;
	var uLocal_13502 = 0;
	var uLocal_13503 = 0;
	var uLocal_13504 = 0;
	var uLocal_13505 = 0;
	var uLocal_13506 = 0;
	var uLocal_13507 = 0;
	var uLocal_13508 = 0;
	var uLocal_13509 = 0;
	var uLocal_13510 = 0;
	var uLocal_13511 = 0;
	var uLocal_13512 = 0;
	var uLocal_13513 = 0;
	var uLocal_13514 = 0;
	var uLocal_13515 = 0;
	var uLocal_13516 = 0;
	var uLocal_13517 = 0;
	var uLocal_13518 = 0;
	var uLocal_13519 = 0;
	var uLocal_13520 = 0;
	var uLocal_13521 = 0;
	var uLocal_13522 = 0;
	var uLocal_13523 = 0;
	var uLocal_13524 = 0;
	var uLocal_13525 = 0;
	var uLocal_13526 = 0;
	var uLocal_13527 = 0;
	var uLocal_13528 = 0;
	var uLocal_13529 = 0;
	var uLocal_13530 = 0;
	var uLocal_13531 = 2;
	var uLocal_13532 = 0;
	var uLocal_13533 = 0;
	var uLocal_13534 = 0;
	var uLocal_13535 = 0;
	var uLocal_13536 = 0;
	var uLocal_13537 = 0;
	var uLocal_13538 = 0;
	var uLocal_13539 = 0;
	var uLocal_13540 = 0;
	var uLocal_13541 = 0;
	var uLocal_13542 = 0;
	var uLocal_13543 = 0;
	var uLocal_13544 = 0;
	var uLocal_13545 = 0;
	var uLocal_13546 = 0;
	var uLocal_13547 = 0;
	var uLocal_13548 = -1;
	var uLocal_13549 = 0;
	var uLocal_13550 = 0;
	var uLocal_13551 = -1;
	var uLocal_13552 = -1082130432;
	var uLocal_13553 = 0;
	var uLocal_13554 = 0;
	var uLocal_13555 = 0;
	var uLocal_13556 = 0;
	var uLocal_13557 = 0;
	var uLocal_13558 = 0;
	var uLocal_13559 = 0;
	var uLocal_13560 = 0;
	var uLocal_13561 = 0;
	var uLocal_13562 = 0;
	var uLocal_13563 = 0;
	var uLocal_13564 = 0;
	var uLocal_13565 = 0;
	var uLocal_13566 = 0;
	var uLocal_13567 = 0;
	var uLocal_13568 = 0;
	var uLocal_13569 = 0;
	var uLocal_13570 = 0;
	var uLocal_13571 = 0;
	var uLocal_13572 = 0;
	var uLocal_13573 = 0;
	var uLocal_13574 = 0;
	var uLocal_13575 = 0;
	var uLocal_13576 = 0;
	var uLocal_13577 = 0;
	var uLocal_13578 = 0;
	var uLocal_13579 = 0;
	var uLocal_13580 = 0;
	var uLocal_13581 = 0;
	var uLocal_13582 = 0;
	var uLocal_13583 = 0;
	var uLocal_13584 = 0;
	var uLocal_13585 = 0;
	var uLocal_13586 = 0;
	var uLocal_13587 = 0;
	var uLocal_13588 = 0;
	var uLocal_13589 = 0;
	var uLocal_13590 = 0;
	var uLocal_13591 = 0;
	var uLocal_13592 = 0;
	var uLocal_13593 = 0;
	var uLocal_13594 = 0;
	var uLocal_13595 = 0;
	var uLocal_13596 = 0;
	var uLocal_13597 = 0;
	var uLocal_13598 = 0;
	var uLocal_13599 = 0;
	var uLocal_13600 = 0;
	var uLocal_13601 = 0;
	var uLocal_13602 = 0;
	var uLocal_13603 = 0;
	var uLocal_13604 = 0;
	var uLocal_13605 = 0;
	var uLocal_13606 = 0;
	var uLocal_13607 = 0;
	var uLocal_13608 = 0;
	var uLocal_13609 = 0;
	var uLocal_13610 = 0;
	var uLocal_13611 = 0;
	var uLocal_13612 = 0;
	var uLocal_13613 = 0;
	var uLocal_13614 = 0;
	var uLocal_13615 = 0;
	var uLocal_13616 = 0;
	var uLocal_13617 = 0;
	var uLocal_13618 = 0;
	var uLocal_13619 = 0;
	var uLocal_13620 = 0;
	var uLocal_13621 = 0;
	var uLocal_13622 = 0;
	var uLocal_13623 = 0;
	var uLocal_13624 = 0;
	var uLocal_13625 = 0;
	var uLocal_13626 = 0;
	var uLocal_13627 = 0;
	var uLocal_13628 = 0;
	var uLocal_13629 = 0;
	var uLocal_13630 = 0;
	var uLocal_13631 = 0;
	var uLocal_13632 = 0;
	var uLocal_13633 = 0;
	var uLocal_13634 = 24;
	var uLocal_13635 = 0;
	var uLocal_13636 = 0;
	var uLocal_13637 = 0;
	var uLocal_13638 = 0;
	var uLocal_13639 = 0;
	var uLocal_13640 = 0;
	var uLocal_13641 = 0;
	var uLocal_13642 = 0;
	var uLocal_13643 = 0;
	var uLocal_13644 = 0;
	var uLocal_13645 = 0;
	var uLocal_13646 = 0;
	var uLocal_13647 = 0;
	var uLocal_13648 = 0;
	var uLocal_13649 = 0;
	var uLocal_13650 = 0;
	var uLocal_13651 = 0;
	var uLocal_13652 = 0;
	var uLocal_13653 = 0;
	var uLocal_13654 = 0;
	var uLocal_13655 = 0;
	var uLocal_13656 = 0;
	var uLocal_13657 = 0;
	var uLocal_13658 = 0;
	var uLocal_13659 = 0;
	var uLocal_13660 = 0;
	var uLocal_13661 = 0;
	var uLocal_13662 = 0;
	var uLocal_13663 = 0;
	var uLocal_13664 = 0;
	var uLocal_13665 = 0;
	var uLocal_13666 = 0;
	var uLocal_13667 = 0;
	var uLocal_13668 = 0;
	var uLocal_13669 = 0;
	var uLocal_13670 = 0;
	var uLocal_13671 = 0;
	var uLocal_13672 = 0;
	var uLocal_13673 = 0;
	var uLocal_13674 = 0;
	var uLocal_13675 = 0;
	var uLocal_13676 = 0;
	var uLocal_13677 = 0;
	var uLocal_13678 = 0;
	var uLocal_13679 = 0;
	var uLocal_13680 = 0;
	var uLocal_13681 = 0;
	var uLocal_13682 = 0;
	var uLocal_13683 = 0;
	var uLocal_13684 = 0;
	var uLocal_13685 = 0;
	var uLocal_13686 = 0;
	var uLocal_13687 = 0;
	var uLocal_13688 = 0;
	var uLocal_13689 = 0;
	var uLocal_13690 = 0;
	var uLocal_13691 = 0;
	var uLocal_13692 = 0;
	var uLocal_13693 = 0;
	var uLocal_13694 = 0;
	var uLocal_13695 = 0;
	var uLocal_13696 = 0;
	var uLocal_13697 = 0;
	var uLocal_13698 = 0;
	var uLocal_13699 = 0;
	var uLocal_13700 = 0;
	var uLocal_13701 = 0;
	var uLocal_13702 = 0;
	var uLocal_13703 = 0;
	var uLocal_13704 = 0;
	var uLocal_13705 = 0;
	var uLocal_13706 = 0;
	var uLocal_13707 = 0;
	var uLocal_13708 = 0;
	var uLocal_13709 = 0;
	var uLocal_13710 = 0;
	var uLocal_13711 = 0;
	var uLocal_13712 = 0;
	var uLocal_13713 = 0;
	var uLocal_13714 = 0;
	var uLocal_13715 = 0;
	var uLocal_13716 = 0;
	var uLocal_13717 = 0;
	var uLocal_13718 = 0;
	var uLocal_13719 = 0;
	var uLocal_13720 = 0;
	var uLocal_13721 = 0;
	var uLocal_13722 = 0;
	var uLocal_13723 = 0;
	var uLocal_13724 = 0;
	var uLocal_13725 = 0;
	var uLocal_13726 = 0;
	var uLocal_13727 = 0;
	var uLocal_13728 = 0;
	var uLocal_13729 = 0;
	var uLocal_13730 = 0;
	var uLocal_13731 = 0;
	var uLocal_13732 = 0;
	var uLocal_13733 = 0;
	var uLocal_13734 = 0;
	var uLocal_13735 = 0;
	var uLocal_13736 = 0;
	var uLocal_13737 = 0;
	var uLocal_13738 = 0;
	var uLocal_13739 = 0;
	var uLocal_13740 = 0;
	var uLocal_13741 = 0;
	var uLocal_13742 = 0;
	var uLocal_13743 = 0;
	var uLocal_13744 = 0;
	var uLocal_13745 = 0;
	var uLocal_13746 = 0;
	var uLocal_13747 = 0;
	var uLocal_13748 = 0;
	var uLocal_13749 = 0;
	var uLocal_13750 = 0;
	var uLocal_13751 = 0;
	var uLocal_13752 = 0;
	var uLocal_13753 = 0;
	var uLocal_13754 = 0;
	var uLocal_13755 = 0;
	var uLocal_13756 = 0;
	var uLocal_13757 = 0;
	var uLocal_13758 = -1;
	var uLocal_13759 = 0;
	var uLocal_13760 = 0;
	var uLocal_13761 = 0;
	var uLocal_13762 = 0;
	var uLocal_13763 = 0;
	var uLocal_13764 = 0;
	var uLocal_13765 = 0;
	var uLocal_13766 = 0;
	var uLocal_13767 = 0;
	var uLocal_13768 = 0;
	var uLocal_13769 = 0;
	var uLocal_13770 = 0;
	var uLocal_13771 = 0;
	var uLocal_13772 = 0;
	var uLocal_13773 = 0;
	var uLocal_13774 = 0;
	var uLocal_13775 = 0;
	var uLocal_13776 = 0;
	var uLocal_13777 = 0;
	var uLocal_13778 = 0;
	var uLocal_13779 = 0;
	var uLocal_13780 = 0;
	var uLocal_13781 = 0;
	var uLocal_13782 = 0;
	var uLocal_13783 = 0;
	var uLocal_13784 = 0;
	var uLocal_13785 = -1;
	var uLocal_13786 = 20;
	var uLocal_13787 = 0;
	var uLocal_13788 = 0;
	var uLocal_13789 = 0;
	var uLocal_13790 = 0;
	var uLocal_13791 = 0;
	var uLocal_13792 = 0;
	var uLocal_13793 = 0;
	var uLocal_13794 = 0;
	var uLocal_13795 = 0;
	var uLocal_13796 = 0;
	var uLocal_13797 = 0;
	var uLocal_13798 = 0;
	var uLocal_13799 = 0;
	var uLocal_13800 = 0;
	var uLocal_13801 = 0;
	var uLocal_13802 = 0;
	var uLocal_13803 = 0;
	var uLocal_13804 = 0;
	var uLocal_13805 = 0;
	var uLocal_13806 = 0;
	var uLocal_13807 = 0;
	var uLocal_13808 = 0;
	var uLocal_13809 = 0;
	var uLocal_13810 = 0;
	var uLocal_13811 = 0;
	var uLocal_13812 = 0;
	var uLocal_13813 = 0;
	var uLocal_13814 = 1028443341;
	var uLocal_13815 = 1038174126;
	var uLocal_13816 = 1065353216;
	var uLocal_13817 = 1065353216;
	var uLocal_13818 = 1086324736;
	var uLocal_13819 = 1082130432;
	var uLocal_13820 = 1073741824;
	var uLocal_13821 = 1065353216;
	var uLocal_13822 = 1108082688;
	var uLocal_13823 = 1108082688;
	var uLocal_13824 = 3000;
	var uLocal_13825 = 1092616192;
	var uLocal_13826 = 0;
	var uLocal_13827 = 0;
	var uLocal_13828 = 0;
	var uLocal_13829 = 0;
	var uLocal_13830 = 0;
	var uLocal_13831 = 0;
	var uLocal_13832 = 0;
	var uLocal_13833 = 0;
	var uLocal_13834 = 0;
	var uLocal_13835 = 0;
	var uLocal_13836 = 0;
	var uLocal_13837 = 0;
	var uLocal_13838 = 0;
	var uLocal_13839 = 0;
	var uLocal_13840 = 0;
	var uLocal_13841 = 0;
	var uLocal_13842 = 0;
	var uLocal_13843 = 0;
	var uLocal_13844 = 0;
	var uLocal_13845 = 0;
	var uLocal_13846 = 0;
	var uLocal_13847 = 0;
	var uLocal_13848 = 0;
	var uLocal_13849 = 0;
	var uLocal_13850 = 0;
	var uLocal_13851 = 0;
	var uLocal_13852 = 0;
	var uLocal_13853 = 0;
	var uLocal_13854 = 0;
	var uLocal_13855 = 0;
	var uLocal_13856 = 0;
	var uLocal_13857 = 0;
	var uLocal_13858 = 0;
	var uLocal_13859 = 0;
	var uLocal_13860 = -1;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
#endregion
void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_53 = 1;
	iLocal_54 = 3;
	iLocal_56 = 1;
	iLocal_57 = 2;
	iLocal_58 = 3;
	iLocal_59 = 4;
	iLocal_85 = 3;
	iLocal_87 = 6;
	iLocal_88 = 26;
	sLocal_372 = "mudtown1_HorseShoeGPSRoute";
	sLocal_373 = "script@story@mud1@ig@ig15_wagon_craft@ig15_wagon_craft";
	sLocal_374 = "script@story@mud1@ig@ig_10@wheel_fixing";
	sLocal_375 = "script@story@mud1@ig@ig15_wagon_craft@ig15_wagon_craft_cam";
	sLocal_376 = "script@story@mud1@ig@ig_1@base";
	sLocal_377 = "script@story@mud1@ig@ig11_javier_greeting_arthur_hosea@ig11_javier_greeting_arthur_hosea";
	iLocal_378 = joaat("PG_MISSION_MUD1_WAGON02X");
	iLocal_379 = joaat("PG_MISSION_MUD1_WAGON01X");
	iLocal_380 = joaat("PG_MISSION_MUD1_WAGON03X");
	iLocal_381 = joaat("PG_MIS_MUD1_WAGON02X");
	iLocal_382 = joaat("PG_MISSION_MUD1_JACKWAGON01X");
	fLocal_389 = 10000f;
	bLocal_390 = true;
	bLocal_393 = true;
	vLocal_583 = { -1028.596f, 428.5861f, 56.0368f };
	vLocal_586 = { 12.2047f, -6.1873f, 164.3237f };
	vLocal_653 = { -1025.074f, 432.6937f, 55.49485f };
	vLocal_656 = { -1026.86f, 429.48f, 55.89f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4642))
	{
		__LIB_6__::func_860(&uLocal_681, 1073741824 /* Float: 2f */);
		func_2(&uLocal_681, 1);
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	while (!__LIB_0__::func_382(64))
	{
		BUILTIN::WAIT(0);
	}
	func_4(&uScriptParam_0, &uLocal_681);
	func_5(&uLocal_681);
	while (!__LIB_6__::func_861(&uLocal_681, -2147483648))
	{
		func_7(&uLocal_681);
		BUILTIN::WAIT(0);
	}
	while (!func_2(&uLocal_681, 0))
	{
		BUILTIN::WAIT(0);
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<2> Var4;
	struct<8> Var6;
	if (__LIB_6__::func_862(cParam0, 4096))
	{
		return true;
	}
	if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 4096)
	{
		func_9(cParam0);
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(1331687942);
		if (__LIB_0__::func_139(Global_43801))
		{
			__LIB_1__::func_748(&Global_43801, 1, 1);
		}
		UILOG::_UILOG_CLEAR_CACHED_OBJECTIVE();
		MISC::_0x1096603B519C905F("");
		__LIB_1__::func_559(__LIB_3__::func_918(cParam0->f_607), 0, 2);
		__LIB_1__::func_140();
		__LIB_4__::func_797(1);
		__LIB_0__::func_722(1, 0);
		__LIB_8__::func_703(cParam0, 1);
		__LIB_1__::func_723(0);
		UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
		Global_36605 = 0;
		__LIB_5__::func_384(3);
		if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
		{
			TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	if (!bParam1)
	{
		if (!__LIB_6__::func_861(cParam0, 1048576))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_1__::func_965(0);
			}
			else if (__LIB_6__::func_863(cParam0) != 0)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					if (CAM::_0x1204EB53A5FBC63D())
					{
						return false;
					}
					if (__LIB_6__::func_863(cParam0) == 1 || __LIB_6__::func_863(cParam0) == 2)
					{
						if (__LIB_4__::func_505(&(cParam0->f_8269)) && __LIB_4__::func_506(&(cParam0->f_8269)))
						{
							__LIB_1__::func_582(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!__LIB_0__::func_75(&(cParam0->f_13118)))
					{
						__LIB_1__::func_283(&(cParam0->f_13118), 0);
					}
					bVar0 = CAM::_0x139EFB0A71DD9011();
					if (bVar0)
					{
						__LIB_6__::func_860(cParam0, 256);
					}
					bVar1 = CAM::_0x7CE9DC58E3E4755F();
					if (bVar1 && __LIB_6__::func_861(cParam0, 256))
					{
						CAM::_0x16E9ABDD34DDD931();
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					else
					{
						if (((!bVar0 && !__LIB_9__::func_39(cParam0, bVar1)) && !__LIB_0__::func_91()) && !__LIB_6__::func_861(cParam0, 80))
						{
							if (!bVar1)
							{
								__LIB_8__::func_722(cParam0);
							}
							return false;
						}
						if (__LIB_6__::func_861(cParam0, 64))
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						else if (__LIB_6__::func_863(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (__LIB_0__::func_0(cParam0))
								{
									cParam0->f_13104 = MISC::GET_GAME_TIMER();
								}
							}
							if ((cParam0->f_13104 != -1 && MISC::GET_GAME_TIMER() > cParam0->f_13104 + 4000) || bVar1)
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else if (__LIB_6__::func_863(cParam0) == 1)
						{
							if (__LIB_9__::func_39(cParam0, bVar1))
							{
								CAM::_0x16E9ABDD34DDD931();
								CAM::DO_SCREEN_FADE_OUT(0);
							}
						}
						else
						{
							CAM::_0x16E9ABDD34DDD931();
							CAM::DO_SCREEN_FADE_OUT(0);
						}
						CAM::IS_SCREEN_FADING_IN();
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							return false;
						}
					}
				}
			}
			else if (__LIB_6__::func_861(cParam0, 2))
			{
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
					return false;
				}
				if (MISC::_0x1B065A2BF7953815(1) == 1)
				{
					return false;
				}
			}
			if (!__LIB_4__::func_678() && __LIB_6__::func_863(cParam0) != 0)
			{
				__LIB_8__::func_725(cParam0, func_34(__LIB_6__::func_864(cParam0)), func_34(__LIB_9__::func_40(cParam0)), __LIB_6__::func_864(cParam0), __LIB_9__::func_40(cParam0));
			}
		}
	}
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		if (ANIMSCENE::CHECK_OWNERSHIP_OF_ANIM_SCENE(cParam0->f_7375.f_804))
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(cParam0->f_7375.f_804);
		}
	}
	__LIB_6__::func_860(cParam0, 1048576);
	if (!__LIB_6__::func_861(cParam0, 2097152))
	{
		if (!func_9(cParam0))
		{
			return false;
		}
		__LIB_6__::func_860(cParam0, 2097152);
	}
	MISC::_0x1096603B519C905F("");
	STREAMING::CLEAR_FOCUS();
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	MISC::SET_TIME_SCALE(1f);
	__LIB_5__::func_325(&(cParam0->f_8269));
	if (__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		__LIB_4__::func_507(&(cParam0->f_8269));
	}
	AUDIO::SET_GPS_ACTIVE(false);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(1);
	__LIB_0__::func_267(1);
	LAW::_0xC5EB2755FA25F1E9(1);
	__LIB_0__::func_395(0);
	__LIB_4__::func_679();
	__LIB_5__::func_384(3);
	if (!__LIB_6__::func_861(cParam0, 8))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
		HUD::_DISPLAY_HUD_COMPONENT(724769646);
	}
	__LIB_4__::func_797(1);
	__LIB_4__::func_782();
	__LIB_4__::func_680();
	HUD::SET_MISSION_NAME(false, 0);
	__LIB_0__::func_769();
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	CLOCK::PAUSE_CLOCK(false, 0);
	PLAYER::_0x914071FF93AF2692(PLAYER::PLAYER_ID(), 1f);
	PLAYER::_0x19B2C7A6C34FAD54(PLAYER::PLAYER_ID(), 1f);
	__LIB_6__::func_865(cParam0);
	__LIB_5__::func_20(1, 0);
	__LIB_0__::func_698(2);
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, false);
		PED::_0xAAC0EE3B4999ABB5(Global_35, 0);
		WEAPON::_0xB832F1A686B9B810(Global_35, __LIB_5__::func_21(), 0);
		PED::SET_PED_CONFIG_FLAG(Global_35, 308, false);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 446, false);
		PED::_0xEAE3B5B019C8D23F(Global_35, 262143);
		__LIB_1__::func_733(Global_35);
		PED::SET_PED_CONFIG_FLAG(Global_35, 170, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 43, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
	}
	if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::_0x12E09E278C6C29B7(PLAYER::GET_PLAYER_INDEX());
	}
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	if (CAM::DOES_CAM_EXIST(cParam0->f_609.f_2))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(cParam0->f_609.f_2, false);
	}
	__LIB_5__::func_326(&(cParam0->f_10792));
	__LIB_4__::func_508();
	CAM::STOP_GAMEPLAY_HINT(true);
	__LIB_1__::func_600(1);
	__LIB_5__::func_327();
	if (__LIB_1__::func_652())
	{
		STREAMING::_0x2F9AC754FE179D58(0.3f);
	}
	__LIB_4__::func_845(0, 14);
	bVar2 = false;
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		__LIB_8__::func_704(cParam0);
	}
	__LIB_9__::func_357(cParam0, 0, !bVar2, bVar2);
	__LIB_9__::func_70(cParam0, !bVar2);
	__LIB_1__::func_721(0);
	__LIB_1__::func_721(1);
	PLAYER::_0xDF93973251FB2CA5(PLAYER::PLAYER_ID(), 1);
	__LIB_4__::func_509(0);
	__LIB_5__::func_329(__LIB_6__::func_866(cParam0));
	__LIB_5__::func_330(__LIB_6__::func_866(cParam0));
	__LIB_0__::func_868(0);
	__LIB_0__::func_869(0);
	__LIB_0__::func_11(__LIB_6__::func_863(cParam0));
	__LIB_8__::func_658(cParam0);
	if (!bVar2)
	{
		__LIB_0__::func_722(1, 0);
	}
	if (__LIB_6__::func_863(cParam0) != 1)
	{
		__LIB_5__::func_101(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	__LIB_1__::func_978(1);
	__LIB_1__::func_564(0);
	__LIB_0__::func_8(&Global_1935630, 2097152);
	__LIB_1__::func_723(0);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_5__::func_370(Global_1835011[cParam0->f_607 /*74*/].f_1);
	}
	__LIB_5__::func_102();
	if (!TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), true);
	}
	if (!bParam1)
	{
		switch (__LIB_6__::func_863(cParam0))
		{
			case 0:
				if (!CAM::IS_SCREEN_FADED_IN())
				{
					if ((!CAM::IS_SCREEN_FADING_IN() && !__LIB_6__::func_861(cParam0, 4)) && !__LIB_6__::func_861(cParam0, 2))
					{
						CAM::DO_SCREEN_FADE_IN(1000);
					}
				}
				func_74(cParam0);
				__LIB_8__::func_723(cParam0);
				__LIB_0__::func_297();
				__LIB_5__::func_496(__LIB_0__::func_12(), 0);
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_5__::func_126(cParam0->f_607);
				bVar3 = __LIB_0__::func_513();
				if (!__LIB_0__::func_13(32768))
				{
					func_83(__LIB_3__::func_918(cParam0->f_607), !__LIB_6__::func_861(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					__LIB_1__::func_809(__LIB_3__::func_918(cParam0->f_607), bVar3);
				}
				__LIB_8__::func_703(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					UILOG::_UILOG_MARK_MISSION_COMPLETED(__LIB_9__::func_41(cParam0));
				}
				__LIB_1__::func_140();
				if (__LIB_0__::func_13(32768))
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					func_86();
					__LIB_1__::func_141(0);
				}
				else if (__LIB_6__::func_861(cParam0, 2))
				{
					if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
					__LIB_1__::func_954(1);
					__LIB_5__::func_116();
					__LIB_0__::func_320(6);
					__LIB_0__::func_319(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				__LIB_1__::func_645(__LIB_3__::func_918(cParam0->f_607));
				__LIB_8__::func_760();
				if (__LIB_6__::func_863(cParam0) == 2)
				{
					__LIB_0__::func_15(__LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")), 1);
				}
				LAW::_0x55F37F5F3F2475E1();
				LAW::_0x062B4A4A3396351D(PLAYER::GET_PLAYER_INDEX());
				LAW::_0x07E8B8B20570271C(PLAYER::GET_PLAYER_INDEX());
				break;
			case 5:
				if (__LIB_0__::func_2() == 0)
				{
					__LIB_5__::func_103(0);
				}
				__LIB_8__::func_760();
				Var4 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
				STATS::_0x0FEE2561120F3333(&Var4);
				__LIB_1__::func_559(__LIB_3__::func_918(cParam0->f_607), 0, 2);
				break;
			default:
				func_83(__LIB_3__::func_918(cParam0->f_607), 1, 1, 0, 1);
				__LIB_1__::func_140();
				break;
		}
		if (__LIB_6__::func_863(cParam0) != 0)
		{
			Var6 = { __LIB_6__::func_867(cParam0) };
			__LIB_5__::func_117(__LIB_3__::func_918(cParam0->f_607), __LIB_6__::func_863(cParam0), &Var6, 0, 0, __LIB_6__::func_861(cParam0, 64));
		}
	}
	__LIB_4__::func_510(1);
	__LIB_5__::func_384(3);
	__LIB_6__::func_868(cParam0, 4096);
	return true;
}

void func_4(var uParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	PED::_0xED9582B3DA8F02B4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (!__LIB_0__::func_2() == 0)
	{
		if (ITEMSET::IS_ITEMSET_VALID(Global_43616) && ITEMSET::GET_ITEMSET_SIZE(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < ITEMSET::GET_ITEMSET_SIZE(Global_43616))
			{
				iVar2 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, Global_43616);
				iVar3 = MISC::_GET_ENTITY_FROM_ITEM(iVar2);
				if (((!ENTITY::IS_ENTITY_DEAD(iVar3) && ENTITY::IS_ENTITY_A_PED(iVar3)) && !ITEMSET::IS_IN_ITEMSET(iVar2, iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	__LIB_9__::func_201(cParam1);
	if (!__LIB_0__::func_2() == 0)
	{
		if (__LIB_5__::func_23(cParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < cParam1->f_7375.f_13)
			{
				if (((!ENTITY::IS_ENTITY_DEAD(cParam1->f_7375.f_13[iVar4 /*12*/]) && ENTITY::IS_ENTITY_A_PED(cParam1->f_7375.f_13[iVar4 /*12*/])) && !ITEMSET::IS_IN_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(cParam1->f_7375.f_13[iVar4 /*12*/]) != Global_35)
				{
					ITEMSET::ADD_TO_ITEMSET(cParam1->f_7375.f_13[iVar4 /*12*/], iVar0);
				}
				iVar4++;
			}
		}
	}
	if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
	{
		PED::_0xF008E0BA1FE1D644(ITEMSET::GET_ITEMSET_SIZE(iVar0));
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	if (__LIB_4__::func_511())
	{
		__LIB_6__::func_869(cParam1, 4194304);
	}
	if (__LIB_4__::func_512())
	{
		__LIB_6__::func_869(cParam1, 8388608);
	}
	if (__LIB_5__::func_371())
	{
		if (!__LIB_4__::func_512() && !__LIB_4__::func_511())
		{
			__LIB_6__::func_869(cParam1, 4);
		}
		else
		{
			if (__LIB_4__::func_512())
			{
			}
			if (__LIB_4__::func_511())
			{
			}
		}
		__LIB_6__::func_870(cParam1, __LIB_4__::func_513());
	}
	func_108(cParam1, uParam0);
	func_109(cParam1);
	if (cParam1->f_13105 > PED::_0x62DE46F061CAA468())
	{
		PED::_0xF008E0BA1FE1D644((cParam1->f_13105 - PED::_0x62DE46F061CAA468()));
	}
}

void func_5(char[4] cParam0)
{
	char[] cVar0[8];
	int iVar1;
	struct<4> Var2;
	char[] cVar6[8];
	cVar0 = __LIB_0__::func_631(cParam0->f_607);
	HUD::SET_MISSION_NAME(true, &cVar0);
	if (!MISC::GET_MISSION_FLAG())
	{
		MISC::SET_MISSION_FLAG(true);
	}
	MISC::_0x1096603B519C905F(&cVar0);
	if (cParam0->f_607 != 77)
	{
		__LIB_0__::func_496();
		__LIB_1__::func_323(&cVar0, 0);
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	__LIB_0__::func_105(1);
	__LIB_2__::func_459();
	MISC::_0xA565FAC215CBC77D();
	SCRIPTS::SHUTDOWN_LOADING_SCREEN();
	__LIB_0__::func_769();
	__LIB_0__::func_267(__LIB_6__::func_871(cParam0));
	LAW::_0x55F37F5F3F2475E1();
	LAW::_0x292AD61A33A7A485();
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0x2161278C6322F740(16384, 0, 0, -1, -1, 0);
	}
	__LIB_0__::func_112(1, 0, 1);
	POPULATION::_0x2161278C6322F740(4096, 0, 0, -1, -1, 0);
	VEHICLE::DELETE_ALL_TRAINS();
	VEHICLE::SET_RANDOM_TRAINS(false);
	__LIB_1__::func_600(0);
	__LIB_9__::func_9(cParam0);
	AUDIO::_0x33D51F801CB16E4F();
	if (!Global_1935630.f_12)
	{
		__LIB_0__::func_145(0, 0);
		PED::_SET_PED_CROUCH_MOVEMENT(Global_35, false, 0, false);
		if (!__LIB_6__::func_872(cParam0, 16384) && (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2) || __LIB_5__::func_371()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
		}
		PED::CLEAR_PED_WETNESS(Global_35);
		PED::CLEAR_PED_BLOOD_DAMAGE(Global_35);
		GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Global_35);
		if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
		{
			if ((((WEAPON::_0x2C83212A7AA51D3D(iVar1) || iVar1 == joaat("OBJECT_1")) || iVar1 == joaat("OBJECT_2")) || iVar1 == joaat("OBJECT_3")) || iVar1 == joaat("OBJECT_4"))
			{
				if (!__LIB_5__::func_371() && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
				{
				}
			}
			else if (!__LIB_0__::func_214(iVar1) && !__LIB_0__::func_13(32768))
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(Global_35, iVar1, true, -142743235);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
			}
		}
		WEAPON::_0xB832F1A686B9B810(Global_35, false, 0);
		PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
		func_123(cParam0);
	}
	__LIB_1__::func_564(1);
	__LIB_1__::func_600(0);
	__LIB_6__::func_873(cParam0, joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"));
	iLocal_48 = __LIB_6__::func_874(cParam0);
	iLocal_48 = iLocal_48;
	if (!Global_1935630.f_12)
	{
		if (!__LIB_5__::func_371())
		{
			Var2 = { func_34(__LIB_6__::func_864(cParam0)) };
			if (__LIB_6__::func_864(cParam0) != 0)
			{
				Var2 = { __LIB_1__::func_469(cParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				__LIB_6__::func_869(cParam0, 1048576);
			}
			__LIB_6__::func_870(cParam0, 0);
			if (__LIB_6__::func_875(cParam0, 3) || __LIB_1__::func_195())
			{
				__LIB_9__::func_59(cParam0, __LIB_1__::func_469(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true);
				__LIB_3__::func_618(ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			__LIB_6__::func_870(cParam0, __LIB_4__::func_513());
		}
		TELEMETRY::_TELEMETRY_MISSION_STARTED(&(Global_1835011[cParam0->f_607 /*74*/].f_8), 0, __LIB_5__::func_24(__LIB_6__::func_864(cParam0)), __LIB_5__::func_371());
	}
	__LIB_9__::func_187(cParam0);
	__LIB_6__::func_876(cParam0, 0);
	__LIB_9__::func_60(cParam0, 0);
	if (!__LIB_8__::func_659(cParam0, __LIB_6__::func_864(cParam0)))
	{
		__LIB_6__::func_870(cParam0, 0);
	}
	__LIB_8__::func_706(cParam0);
	func_138(cParam0);
	func_139(cParam0);
	__LIB_6__::func_869(cParam0, 2097152);
	__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 134217728);
	if (__LIB_0__::func_13(32768))
	{
		__LIB_6__::func_860(cParam0, 4);
	}
	func_141(cParam0);
	__LIB_8__::func_718(cParam0, __LIB_6__::func_864(cParam0));
	__LIB_5__::func_105(__LIB_6__::func_866(cParam0));
	if (!__LIB_6__::func_872(cParam0, 65536))
	{
		__LIB_5__::func_178(__LIB_6__::func_866(cParam0));
	}
	__LIB_9__::func_42(cParam0, PLAYER::PLAYER_PED_ID(), "ARTHUR", 0);
	__LIB_8__::func_660(cParam0);
	__LIB_9__::func_61(cParam0);
	__LIB_0__::func_11(cParam0);
	__LIB_8__::func_661(cParam0, 30f);
	__LIB_8__::func_662(cParam0, 40f);
	__LIB_9__::func_154(cParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_4__::func_510(0);
	AUDIO::_0xA6A3A3F96B8B030E();
	__LIB_1__::func_723(1);
	UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = __LIB_0__::func_631(cParam0->f_607);
		UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(1, MISC::GET_HASH_KEY(&cVar6), 0, "");
	}
	if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_PLAYER_SEAT_LEDGE"))
	{
		TASK::_SET_SCENARIO_TYPE_ENABLED_HASH(joaat("WORLD_PLAYER_SEAT_LEDGE"), false);
	}
}

void func_7(char[4] cParam0)
{
	var uVar0;
	if ((LAW::_0xF46108C50A22B029() && !Global_43891) && !__LIB_0__::func_730(__LIB_0__::func_12()))
	{
		POPULATION::_0xF45E46DEECF7DF6E(16384, 0, 0, -1, -1);
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 16384))
	{
		__LIB_4__::func_515();
	}
	if (!__LIB_6__::func_862(cParam0, 32768))
	{
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	}
	if (!__LIB_6__::func_862(cParam0, 2048))
	{
		__LIB_4__::func_516(1, 0);
	}
	switch (__LIB_6__::func_877(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {__LIB_4__::func_681(__LIB_6__::func_866(cParam0))}, 4);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
			{
				__LIB_6__::func_869(cParam0, 64);
			}
			func_156(cParam0, 0);
			func_157(cParam0);
			if (func_158(cParam0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(__LIB_6__::func_878(cParam0)) && __LIB_6__::func_875(cParam0, 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(__LIB_6__::func_878(cParam0), false);
				}
				__LIB_6__::func_879(cParam0, 1);
			}
			if (__LIB_6__::func_861(cParam0, -2147483648))
			{
				__LIB_6__::func_879(cParam0, 2);
			}
			break;
		case 1:
			if (func_161(cParam0))
			{
				__LIB_6__::func_860(cParam0, -2147483648);
				__LIB_6__::func_879(cParam0, 2);
			}
			func_156(cParam0, __LIB_8__::func_663(cParam0, __LIB_6__::func_864(cParam0)) > 4);
			break;
		case 2:
			if (func_2(cParam0, 0))
			{
				__LIB_6__::func_860(cParam0, -2147483648);
				__LIB_6__::func_879(cParam0, 3);
			}
			break;
		case 3:
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
	if (__LIB_6__::func_877(cParam0) < 2)
	{
	}
}

bool func_9(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (ENTITY::_0x1FF441D7954F8709(uLocal_527))
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_527);
		return false;
	}
	if (ENTITY::_0x1FF441D7954F8709(uLocal_528))
	{
		ENTITY::_0xD2B9C78537ED5759(uLocal_528);
		return false;
	}
	if (!ENTITY::_0x1FF441D7954F8709(uLocal_527) && STREAMING::_IS_IMAP_ACTIVE(1948051928))
	{
		STREAMING::_REMOVE_IMAP(1948051928);
		return false;
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1948051928))
	{
		return false;
	}
	if (STREAMING::_IS_IMAP_ACTIVE(825179479))
	{
		STREAMING::_REMOVE_IMAP(825179479);
	}
	HUD::_DISPLAY_HUD_COMPONENT(372886907);
	func_163(1);
	__LIB_4__::func_517(0);
	__LIB_0__::func_484(&uLocal_448, iLocal_395[2], 0);
	__LIB_0__::func_484(&uLocal_449, iLocal_395[1], 0);
	PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_395[1], 6, 0);
	func_166();
	TASK::CLEAR_PED_TASKS(Global_35, true, false);
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
	PLAYER::_0x585CE159DB46FADB(PLAYER::PLAYER_ID(), -1082130432 /* Float: -1f */);
	__LIB_11__::func_376(3);
	__LIB_0__::func_290(7, 28, 1);
	__LIB_0__::func_698(262144);
	__LIB_17__::func_742(Local_14.f_25);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_84);
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[7 /*4*/].f_1))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_236[7 /*4*/].f_1, 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[4 /*4*/].f_1))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_236[4 /*4*/].f_1, 0f);
	}
	if (__LIB_0__::func_272(Local_236[6 /*4*/].f_1, 0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_236[6 /*4*/].f_1, 0);
	}
	__LIB_8__::func_820(7);
	__LIB_9__::func_469(50f);
	__LIB_5__::func_20(0, 0);
	__LIB_0__::func_325(&iLocal_394);
	PED::SET_PED_CONFIG_FLAG(Global_35, 249, false);
	func_174();
	if (func_175(3))
	{
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	MISC::_0x0E71C80FA4EC8147("groundblizzard", false);
	if (CAM::_0xAA235E2F2C09E952("script@Story@MUD1@ride_to_horseshoe"))
	{
		CAM::_0x2412216FCC7B4E3E("script@Story@MUD1@ride_to_horseshoe");
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (PED::DOES_GROUP_EXIST(uLocal_441[iVar1]))
		{
			PED::REMOVE_GROUP(uLocal_441[iVar1]);
		}
		iVar1++;
	}
	if (PED::DOES_GROUP_EXIST(iLocal_447))
	{
		PED::REMOVE_GROUP(iLocal_447);
	}
	if (__LIB_6__::func_863(cParam0) != 0)
	{
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar0 /*4*/].f_1))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_236[iVar0 /*4*/].f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_236[iVar0 /*4*/].f_1, true);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(Local_236[iVar0 /*4*/].f_1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_236[iVar0 /*4*/].f_1, false))
				{
					PED::_0xE0B61ED8BB37712F(Local_236[iVar0 /*4*/].f_1);
				}
				else
				{
					__LIB_0__::func_71(Local_236[iVar0 /*4*/].f_1);
					PED::_REMOVE_PED_FROM_MOUNT(Local_236[iVar0 /*4*/].f_1, true, false);
				}
			}
			iVar0++;
		}
	}
	else if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_11__::func_838(12);
		__LIB_0__::func_77(0, 0, 1);
		iVar0 = 0;
		while (iVar0 < 21)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar0 /*4*/].f_1))
			{
				if (!ENTITY::IS_ENTITY_VISIBLE(Local_236[iVar0 /*4*/].f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_236[iVar0 /*4*/].f_1, true);
				}
			}
			iVar0++;
		}
	}
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, false, false, 0f, false);
		__LIB_13__::func_626(Global_1835011[cParam0->f_607 /*74*/].f_1, 1);
	}
	else
	{
		__LIB_13__::func_626(Global_1835011[cParam0->f_607 /*74*/].f_1, 0);
	}
	if (__LIB_6__::func_863(cParam0) == 0)
	{
		__LIB_6__::func_860(cParam0, 4);
	}
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[iVar2]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_423[iVar2]));
		}
		iVar2++;
	}
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[iVar3 /*5*/]))
		{
			OBJECT::DELETE_OBJECT(&(Local_321[iVar3 /*5*/]));
		}
		iVar3++;
	}
	EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_INTERESTING_MELEE_FIGHT"), true);
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 175, false);
	}
	if (__LIB_0__::func_272(Local_236[1 /*4*/].f_1, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Local_236[1 /*4*/].f_1, 175, false);
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	CLOCK::PAUSE_CLOCK(false, 0);
	__LIB_8__::func_807(0, 1103626240 /* Float: 25f */);
	if (CAM::DOES_CAM_EXIST(iLocal_672))
	{
		CAM::SET_CAM_ACTIVE(iLocal_672, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_672, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_418))
	{
		CAM::SET_CAM_ACTIVE(iLocal_418, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_418, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_417))
	{
		CAM::SET_CAM_ACTIVE(iLocal_417, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(iLocal_417, false);
	}
	func_181();
	func_182(0);
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_422) && ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_422)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_422, true))
	{
		OBJECT::DELETE_OBJECT(&iLocal_422);
	}
	func_183(cParam0);
	func_184(0);
	func_185();
	if (!PAD::IS_CONTROL_ENABLED(0, joaat("INPUT_SKIP_CUTSCENE")))
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
	}
	if (!bLocal_390)
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Global_35, 0);
		bLocal_390 = true;
	}
	if (CAM::_0x927B810E43E99932(&Local_548))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_548);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&Local_548))
	{
		CAM::_0x798BE43C9393632B(&Local_548);
	}
	if (CAM::_0x927B810E43E99932(&uLocal_564))
	{
		CAM::_0x0A5A4F1979ABB40E(&uLocal_564);
	}
	if (CAM::_0xDD0B7C5AE58F721D(&uLocal_564))
	{
		CAM::_0x798BE43C9393632B(&uLocal_564);
	}
	__LIB_11__::func_564(0);
	func_187(1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_ANIMAL_DEER_DRINKING", true);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_ANIMAL_DEER_RESTING", true);
	__LIB_11__::func_818(2, 0);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	AUDIO::SET_GPS_ACTIVE(false);
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[7 /*4*/].f_1) && ENTITY::_IS_ENTITY_FROZEN(Local_236[7 /*4*/].f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_236[7 /*4*/].f_1, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[1 /*4*/].f_1) && ENTITY::_IS_ENTITY_FROZEN(Local_236[1 /*4*/].f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_236[1 /*4*/].f_1, false);
	}
	func_189(0);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 30, 0, 0);
	__LIB_11__::func_838(16);
	CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
	func_190();
	PED::SET_PED_CONFIG_FLAG(Global_35, 334, false);
	__LIB_4__::func_896(1);
	__LIB_11__::func_218();
	if (MISC::IS_BIT_SET(Global_1956580.f_1, 5))
	{
		MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
	}
	__LIB_11__::func_368();
	__LIB_11__::func_369();
	MISC::SET_TIME_SCALE(1f);
	GRAPHICS::_0x37D7BDBA89F13959("ChapterTitle_IntroCh02");
	STATS::_0x025E98E317652CDD(0);
	func_196(func_195(2), 0);
	__LIB_5__::func_374(0);
	__LIB_5__::func_374(1);
	cParam0->f_607 = cParam0->f_607;
	return true;
}

struct<4> func_34(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	iVar4 = func_234(iParam0);
	switch (iVar4)
	{
		case 0:
			__LIB_4__::func_954(&Var0, func_235(0, 0));
			break;
		case 1:
			__LIB_4__::func_954(&Var0, func_235(2, 0));
			break;
		case 2:
		case 3:
			__LIB_4__::func_954(&Var0, func_235(5, 0));
			break;
		case 25:
			__LIB_4__::func_954(&Var0, func_235(6, 0));
			break;
		default:
			break;
	}
	return Var0;
}

void func_74(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	if (__LIB_0__::func_2() == 0)
	{
		return;
	}
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_8__::func_663(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (__LIB_8__::func_587(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (__LIB_6__::func_863(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		__LIB_5__::func_109(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_292(cParam0);
	}
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	struct<2> Var2;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	if (!__LIB_0__::func_6(iParam0))
	{
		return;
	}
	if (__LIB_0__::func_746(iParam0) == 4)
	{
		__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
		if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
		{
			if (bParam3)
			{
				__LIB_1__::func_242(iParam0, 6);
			}
			else
			{
				__LIB_1__::func_242(iParam0, 5);
			}
			__LIB_1__::func_470(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		__LIB_0__::func_267(1);
	}
	iVar0 = __LIB_0__::func_700(iParam0);
	bVar1 = __LIB_0__::func_2() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		__LIB_1__::func_421(0, 2);
		if (!bVar1 && bParam1)
		{
			__LIB_1__::func_755();
		}
	}
	else
	{
		__LIB_1__::func_142(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		__LIB_0__::func_870(iParam0);
	}
	else
	{
		Var2 = { __LIB_0__::func_14(joaat("DEATHS_ON_CURRENT_DEED")) };
		STATS::_0x0FEE2561120F3333(&Var2);
		if (!__LIB_0__::func_13(32768))
		{
			Var4 = { __LIB_0__::func_14(joaat("LAST_MISSION_NAME")) };
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (bParam1 && __LIB_0__::func_291(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (__LIB_0__::func_76(iParam0) == 77)
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[76 /*74*/].f_8), true);
						}
						else
						{
							STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						}
					}
					else if ((__LIB_0__::func_76(iParam0) != 95 && __LIB_0__::func_76(iParam0) != 82) && !__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 512))
					{
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_3), true);
					}
				}
			}
			else
			{
				switch (NETWORK::_0x225640E09EFFDC3F())
				{
					case 0:
						STATS::STAT_ID_SET_GXT_LABEL(&Var4, &(Global_1835011[__LIB_0__::func_76(iParam0) /*74*/].f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		__LIB_1__::func_641(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871());
	}
	else if (iVar0 == 8)
	{
		__LIB_1__::func_642(__LIB_0__::func_76(iParam0), iVar6, __LIB_0__::func_871(), __LIB_0__::func_113());
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		iVar9 = __LIB_11__::func_377(iParam0, &iVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			__LIB_4__::func_253(iVar9, iVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!Global_1879534 && !Global_1879534.f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = __LIB_0__::func_308(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_300(1);
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528.f_217 = 1;
				break;
			case 4:
				__LIB_0__::func_747(45, 0, 1);
				break;
			case 8:
				iVar10 = __LIB_0__::func_310(__LIB_0__::func_76(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = __LIB_0__::func_309((iVar10 - 20), 0, iVar10);
					iVar11 = __LIB_0__::func_309((iVar11 - 10), 0, iVar11);
				}
				__LIB_0__::func_747(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (__LIB_0__::func_311(__LIB_0__::func_76(iParam0)))
				{
					__LIB_9__::func_212(14, 0, 0, 0, 0, 0, 1065353216 /* Float: 1f */, 0);
				}
				Global_1899528.f_217 = 1;
				break;
			case 9:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 2:
				__LIB_0__::func_747(120, 0, 1);
				break;
			case 6:
				__LIB_0__::func_747(__LIB_0__::func_312(__LIB_0__::func_872(iParam0)), 0, 1);
				break;
			case 5:
				__LIB_0__::func_747(120, 0, 1);
				break;
		}
	}
	__LIB_1__::func_144(iParam0, 1);
	__LIB_0__::func_307(iParam0, __LIB_0__::func_23());
	__LIB_1__::func_470(iParam0);
	if ((!__LIB_0__::func_291(iParam0) == 0 && bParam1) && __LIB_0__::func_2() == -1)
	{
		iVar12 = __LIB_1__::func_24(iParam0);
		if (iVar12 != -1)
		{
			__LIB_0__::func_867(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = __LIB_1__::func_194();
			if (iVar12 != -1)
			{
				__LIB_0__::func_867(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
						break;
					case 1:
						Global_1898438 = MISC::GET_GAME_TIMER();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = MISC::GET_GAME_TIMER();
				break;
			case 8:
				if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 4))
				{
					Global_1898438 = MISC::GET_GAME_TIMER();
				}
				else
				{
					Global_1898438 = (MISC::GET_GAME_TIMER() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (__LIB_0__::func_76(iParam0) != 77)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
			case 8:
				if (__LIB_0__::func_76(iParam0) != 58)
				{
					Global_1879514.f_1 = iParam0;
					Global_1879514.f_11 = bParam3;
					Global_1879514.f_13 = __LIB_1__::func_195();
				}
				break;
		}
	}
	if (!__LIB_0__::func_291(iParam0) == 5 && !__LIB_0__::func_291(iParam0) == 6)
	{
		if (bParam3)
		{
			__LIB_1__::func_242(iParam0, 6);
		}
		else
		{
			__LIB_1__::func_242(iParam0, 5);
		}
		__LIB_1__::func_470(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						MAP::_0xD8C7162AB2E2AF45(-1753910767);
						break;
					case 1:
						__LIB_0__::func_873();
						NETWORK::_0xBB697756309D77EE(1);
						break;
					case 4:
						func_329(joaat("CONSUMABLE_HERB_SAGE"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("CONSUMABLE_HERB_GINSENG"), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("CONSUMABLE_HERB_YARROW"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("PROVISION_GRITTY_FISH_MEAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("PROVISION_STRINGY_MEAT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("PROVISION_ANIMAL_FAT"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("PROVISION_BIRD_FEATHER_FLIGHT"), 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("CONSUMABLE_COFFEE_GNDS_REG"), 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_HORSE_OINTMENT"));
						func_329(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_FIRE_ARROW"));
						func_329(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_IMPROVED_ARROW"));
						func_329(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_SML_GM_ARROW"));
						func_329(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_IMPROVED_TOMAHAWK"));
						func_329(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_IMPROVED_THROW_KNIFE"));
						func_329(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_SPLIT_POINT_AMMO"));
						func_329(joaat("DOCUMENT_PAMPHLET_MOLOTOV"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_MOLOTOV"));
						func_329(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_EXPRESS_EXPLOSIVE_AMMO"));
						func_329(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_POTENT_HERBIVORE_BAIT"));
						func_329(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_POTENT_PREDATOR_BAIT"));
						func_329(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_330(joaat("DOCUMENT_PAMPHLET_COVER_SCENT"));
						func_329(joaat("WEAPON_KIT_CAMERA"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("KIT_CAMP"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(-1448210800 /* GXTEntry: "Crafting Tools" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(joaat("CLOTHING_ITEM_PZ_LOADOUT_BANDOLIER_01"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_331();
						func_332(joaat("CLOTHING_SP_COAT_WINTER01_VARIATION_01"));
						__LIB_1__::func_101();
						__LIB_0__::func_874();
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY(__LIB_1__::func_464(10, 0)));
						break;
					case 8:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 621714131 /* GXTEntry: "Jamie Gillis" */);
						break;
					case 15:
						func_329(joaat("DOCUMENT_MAP_LEGENDARY_ANIMALS"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_HUNT_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_HUNT_ROOT"), true);
							__LIB_1__::func_240(449, 0);
						}
						break;
					case 10:
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_GAMB_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_GAMB_ROOT"), true);
							__LIB_1__::func_240(446, 0);
						}
						break;
					case 16:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_LEIGHGRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_ARCHIBALD"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						__LIB_1__::func_630(304805134, 1, 1);
						if (!__LIB_1__::func_25(Global_1347702[21 /*49*/].f_15, 1))
						{
							func_83(Global_1347702[21 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[21 /*49*/].f_3)), iVar14);
						}
						break;
					case 20:
						__LIB_0__::func_875();
						break;
					case 26:
						__LIB_0__::func_876();
						break;
					case 17:
						__LIB_1__::func_810(Global_35, joaat("CLOTHING_ITEM_BADGE_PZERO_000"), 0, -358215195, 1, 1);
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REPEATER_EVANS"));
						}
						break;
					case 19:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TAVISH_GRAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLAY"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!__LIB_0__::func_878(joaat("TP_RMAY_LETTER_1"), -1))
						{
							iVar15 = __LIB_0__::func_23();
							__LIB_1__::func_446(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							__LIB_1__::func_612(joaat("TP_RMAY_LETTER_1"), iVar15, 0);
						}
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_LEMAT"));
						}
						break;
					case 34:
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_REVOLVER_DOUBLEACTION_GAMBLER"));
						}
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						__LIB_0__::func_879();
						break;
					case 37:
						__LIB_0__::func_880();
						if (__LIB_0__::func_26())
						{
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), iVar14);
						}
						break;
					case 38:
						__LIB_0__::func_881();
						break;
					case 43:
						__LIB_0__::func_882();
						break;
					case 44:
						if (!__LIB_1__::func_25(Global_1347702[82 /*49*/].f_15, 1))
						{
							func_83(Global_1347702[82 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[82 /*49*/].f_3)), iVar14);
						}
						if (!__LIB_1__::func_25(Global_1347702[83 /*49*/].f_15, 1))
						{
							func_83(Global_1347702[83 /*49*/].f_15, 0, 0, 0, 0);
							if (Global_1425247.f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[83 /*49*/].f_3)), iVar14);
						}
						break;
					case 45:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("ALLY_MONROE"));
						break;
					case 49:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_CLEET_GOON"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						__LIB_0__::func_883();
						break;
					case 59:
						__LIB_0__::func_884();
						break;
					case 60:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						__LIB_0__::func_885();
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DAVID_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						__LIB_0__::func_886();
						if (!UNLOCK::_UNLOCK_IS_VISIBLE(joaat("SP_CHAL_SURV_ROOT")))
						{
							UNLOCK::_UNLOCK_SET_VISIBLE(joaat("SP_CHAL_SURV_ROOT"), true);
							__LIB_1__::func_240(451, 0);
						}
						if (!__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_05")))
						{
							if (__LIB_0__::func_314(joaat("TAXIDERMY_ORDER_04")))
							{
								iVar16 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_TAXIDERMY_REWARD_04_ES"), iVar16, 1);
							}
						}
						if (__LIB_0__::func_315(4))
						{
							if (!__LIB_1__::func_707(joaat("DOCUMENT_NOTE_RARE_FISH"), 1, 0))
							{
								iVar17 = __LIB_0__::func_23();
								__LIB_1__::func_446(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								__LIB_1__::func_612(joaat("TP_RF_INVITATION_01"), iVar17, 1);
							}
						}
						func_329(1224687176 /* GXTEntry: "John\'s Pistol Belt" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_329(-4440804 /* GXTEntry: "John\'s Holster" */, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ALBERT_CAKE"));
						__LIB_5__::func_337(89200);
						__LIB_5__::func_337(2300);
						__LIB_5__::func_337(2300);
						break;
					case 68:
						__LIB_0__::func_887();
						break;
					case 76:
						if (Global_1425247.f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[108 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[69 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[70 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[7 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[22 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[23 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1347702[65 /*49*/].f_3)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[7 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[8 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[36 /*74*/].f_8)), iVar14);
						MISSIONDATA::_0xE824CE7D13FCB300(MISC::GET_HASH_KEY(&(Global_1835011[48 /*74*/].f_8)), iVar14);
						__LIB_0__::func_888();
						__LIB_5__::func_337(-139100);
						break;
					case 69:
						if (__LIB_1__::func_25(Global_1347702[9 /*49*/].f_15, 1))
						{
							__LIB_5__::func_337(-6000);
						}
						break;
					case 70:
						__LIB_5__::func_337(23400);
						__LIB_5__::func_337(1900);
						__LIB_5__::func_337(-15000);
						break;
					case 71:
						__LIB_5__::func_337(-5500);
						break;
				}
				break;
			case 8:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MILTON"));
						}
						if (!PLAYER::_0x0772F87D7B07719A(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR")))
						{
							PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDGAR"));
						}
						break;
					case 4:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_BEAUG"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -751847444 /* GXTEntry: "Penelope Braithwaite" */);
						break;
					case 5:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1843499806 /* GXTEntry: "Scott" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -259499455 /* GXTEntry: "Iain" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1193930411 /* GXTEntry: "Mrs Calhoon" */);
						break;
					case 22:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DORKINS"));
						break;
					case 24:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, -1230369426 /* GXTEntry: "Sister Calder??n" */);
						break;
					case 26:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2049954876 /* GXTEntry: "Calloway" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_LEVIN"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -511263105 /* GXTEntry: "Emmet Granger" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -837057898 /* GXTEntry: "Flaco Hern??ndez" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -258195548 /* GXTEntry: "Billy Midnight" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1110794082 /* GXTEntry: "Black Belle" */);
						break;
					case 28:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1324848767 /* GXTEntry: "Slim Grant" */);
						break;
					case 30:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -461700465 /* GXTEntry: "Mr. Black" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -489179187 /* GXTEntry: "Mr. White" */);
						break;
					case 37:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALDEN_CARRUTHERS"));
						break;
					case 56:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 883682516 /* GXTEntry: "Old Cajun" */);
						break;
					case 57:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_DOCTOR"));
						break;
					case 58:
						__LIB_0__::func_889();
						break;
					case 59:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -121001171 /* GXTEntry: "Lilly Millet" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WROBEL"));
						break;
					case 61:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_THOMAS_DOWNES"));
						break;
					case 62:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_EDITH_DOWNES"));
						__LIB_0__::func_890();
						break;
					case 66:
						__LIB_0__::func_891();
						__LIB_1__::func_599();
						break;
					case 67:
						if (!__LIB_0__::func_892(6))
						{
							__LIB_0__::func_893(6);
						}
						if (!__LIB_0__::func_892(3))
						{
							__LIB_0__::func_893(3);
						}
						if (__LIB_0__::func_313())
						{
							__LIB_0__::func_877(joaat("WEAPON_PISTOL_M1899"));
						}
						break;
					case 68:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_MEREDITH"));
						break;
					case 89:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_RINGMASTER"));
						break;
					case 91:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_TIGERHANDLER"));
						break;
					case 98:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1853266833 /* GXTEntry: "Mary Linton" */);
						break;
					case 101:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MASON"));
						break;
					case 115:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("ALLY_RAINSFALL"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::PLAYER_ID(), 0, MISC::GET_HASH_KEY("COMP_EAGLE_FLIES"));
						break;
					case 120:
						MAP::_0xD8C7162AB2E2AF45(1720279629);
						break;
					case 138:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						break;
					case 139:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -831543589 /* GXTEntry: "Winton Holmes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, -1687814239 /* GXTEntry: "Gwyn Hughes" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_ALGIE_DAVISON"));
						break;
					case 140:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 2131140554);
						break;
					case 143:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 240200131 /* GXTEntry: "Bertram" */);
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_MISS_MARJORIE"));
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1901360117 /* GXTEntry: "Magnifico" */);
						break;
					case 147:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, joaat("DISCOVERABLE_NAME_WARVET"));
						break;
					case 9:
						if (__LIB_1__::func_25(Global_1835011[69 /*74*/].f_1, 1))
						{
							__LIB_0__::func_316(0);
							__LIB_5__::func_337(40500);
						}
						else
						{
							__LIB_0__::func_316(0);
							__LIB_5__::func_337(46500);
						}
						break;
				}
				break;
			case 6:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 0:
						switch (__LIB_0__::func_872(iParam0))
						{
							case 5:
								PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, 1014740297 /* GXTEntry: "Mrs. Londonderry" */);
								break;
						}
						break;
				}
				break;
		}
		__LIB_0__::func_894(iParam0);
		func_370();
		switch (iVar0)
		{
			case 1:
				switch (__LIB_0__::func_76(iParam0))
				{
					case 4:
						__LIB_5__::func_387(iParam0, 1000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						__LIB_5__::func_387(iParam0, 300, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 25:
						__LIB_5__::func_387(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						__LIB_5__::func_387(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						__LIB_5__::func_387(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						__LIB_5__::func_387(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						__LIB_5__::func_387(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = __LIB_0__::func_895(iParam0);
						__LIB_5__::func_387(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						__LIB_5__::func_387(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						__LIB_5__::func_387(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!__LIB_1__::func_707(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0))
						{
							func_329(joaat("PROVISION_POCKET_WATCH_REUTLINGE"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						__LIB_5__::func_387(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						__LIB_5__::func_387(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						__LIB_5__::func_387(iParam0, 2042100, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 72:
						if (__LIB_0__::func_895(iParam0) == 0)
						{
							__LIB_5__::func_387(iParam0, 20000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						else
						{
							__LIB_5__::func_387(iParam0, 15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (__LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 536870912))
				{
					__LIB_0__::func_896(11, 1);
				}
				switch (__LIB_0__::func_76(iParam0))
				{
					case 109:
						__LIB_5__::func_387(iParam0, 1500, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1);
						break;
					case 55:
						__LIB_0__::func_896(8, 1);
						break;
					case 138:
						MISC::SET_BIT(&(Global_40.f_9052), 1);
						MISC::SET_BIT(&(Global_40.f_9052), 3);
						break;
					case 94:
						__LIB_5__::func_387(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						__LIB_5__::func_387(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						__LIB_5__::func_387(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						__LIB_5__::func_387(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						PLAYER::_0x946D46CD6DFB9742(PLAYER::GET_PLAYER_INDEX(), 0, MISC::GET_HASH_KEY("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == __LIB_1__::func_293(0, 10, 11, joaat("CABR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_0__::func_895(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 7, 11, joaat("CACR02")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 8, 11, joaat("CACR03")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 11, 11, joaat("CACR01")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == __LIB_1__::func_293(0, 12, 11, joaat("CACR04")))
				{
					__LIB_5__::func_387(iParam0, __LIB_1__::func_794(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!__LIB_0__::func_291(iParam0) == 0)
			{
				if (__LIB_0__::func_299(iParam0) == 0)
				{
				}
				else if (STATS::_0x01F4D242765C6B24(__LIB_0__::func_299(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					__LIB_0__::func_701(__LIB_0__::func_700(iParam0), __LIB_0__::func_299(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = iParam0;
						}
						__LIB_1__::func_790(__LIB_1__::func_613(Global_1879514.f_1));
						if (iVar0 == 8 && __LIB_0__::func_76(iParam0) == 58)
						{
							Global_1879514.f_1 = -1;
						}
					}
				}
			}
			if (bParam2)
			{
				switch (iVar0)
				{
					case 1:
						iVar20 = 3;
						break;
					case 4:
						iVar20 = 2;
						break;
					case 6:
						iVar20 = 1;
						break;
					case 2:
						iVar20 = 9;
						break;
					case 8:
						if (__LIB_0__::func_5(__LIB_0__::func_76(iParam0)) && __LIB_0__::func_1(Global_1347702[__LIB_0__::func_76(iParam0) /*49*/].f_12, 1))
						{
							iVar20 = 3;
						}
						else
						{
							iVar20 = 8;
						}
						break;
					case 7:
						iVar20 = 0;
						break;
					case 5:
						iVar20 = 12;
						break;
					case 9:
					case 11:
						iVar20 = 0;
						break;
				}
			}
			__LIB_0__::func_703(bParam2, iVar20);
		}
	}
	__LIB_0__::func_301(1);
	if ((bVar13 || __LIB_1__::func_195()) && (__LIB_0__::func_700(iParam0) == 1 || __LIB_0__::func_700(iParam0) == 8))
	{
		Global_1879534.f_6 = 1;
		Global_1879534.f_7 = 1;
	}
}

void func_86()
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	__LIB_0__::func_319(4112);
	__LIB_0__::func_320(6);
	vVar2 = { func_380(Global_2621440[0 /*12066*/].f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	__LIB_0__::func_321(vVar2, uVar1, uVar0, 0);
	__LIB_0__::func_322(vVar2);
	Global_40.f_9.f_15 = __LIB_1__::func_447(vVar2, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_RANDOM_WEATHER_TYPE(false, true);
}

void func_108(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_394(cParam0);
	cParam0->f_634[0] = 59590;
	cParam0->f_634[1] = 59590;
	cParam0->f_637 = 0;
	__LIB_6__::func_883(cParam0, *uParam1);
	func_397(cParam0);
}

void func_109(char[4] cParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_18__::func_330(cParam0, "wagon02x")))
	{
		func_399(cParam0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(__LIB_18__::func_330(cParam0, "Horse_01")))
	{
		func_400(cParam0);
	}
}

void func_123(char[4] cParam0)
{
	if (__LIB_0__::func_91())
	{
		func_403(&(cParam0->f_7375));
	}
}

bool func_127(struct<4> Param0)
{
	if (__LIB_0__::func_13(32768))
	{
		return true;
	}
	return func_405(Param0, Param0.f_3);
}

void func_138(char[4] cParam0)
{
	if (!ITEMSET::IS_ITEMSET_VALID(Local_14))
	{
		Local_14 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_9__::func_43(cParam0, joaat("WAGON02X"), 67108863);
	__LIB_9__::func_43(cParam0, joaat("WAGON04X"), 67108863);
	__LIB_9__::func_43(cParam0, joaat("A_M_M_WAPWARRIORS_01"), 240);
	__LIB_9__::func_43(cParam0, joaat("A_M_M_LOWERSDTOWNFOLK_01"), 240);
}

void func_139(char[4] cParam0)
{
	int iVar0;
	func_423();
	__LIB_11__::func_345(cParam0, func_424(1), 6);
	__LIB_8__::func_708(cParam0, func_424(0), 6);
	__LIB_8__::func_709(cParam0, "mudtown1_GoToRiver", 3, 2, -1);
	__LIB_8__::func_709(cParam0, "mudtown1_CrossRiverAssist", 3, 2, -1);
	__LIB_8__::func_709(cParam0, sLocal_372, 8, 2, -1);
	__LIB_9__::func_43(cParam0, joaat("A_M_M_WAPWARRIORS_01"), 14);
	__LIB_9__::func_43(cParam0, joaat("A_C_HORSE_MORGAN_BAY"), 14);
	__LIB_9__::func_43(cParam0, joaat("P_CS_WAGONWHEEL01X"), 14);
	__LIB_9__::func_43(cParam0, joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"), 14);
	__LIB_9__::func_43(cParam0, joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"), 14);
	__LIB_9__::func_43(cParam0, joaat("A_C_HORSE_NOKOTA_BLUEROAN"), 14);
	__LIB_9__::func_43(cParam0, joaat("P_CS_ROPE03BX"), 24);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		__LIB_9__::func_43(cParam0, Local_321[iVar0 /*5*/].f_4, 12);
		iVar0++;
	}
	__LIB_9__::func_43(cParam0, joaat("P_CAN01X"), 524296);
	__LIB_9__::func_43(cParam0, joaat("P_CAN03X"), 524296);
	__LIB_9__::func_43(cParam0, joaat("P_CAN10X"), 524296);
	__LIB_9__::func_483(cParam0, sLocal_373, &iLocal_384, 8, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, sLocal_374, &iLocal_385, 12, 0, "pbl_Lifting_wagon", 0, 1);
	__LIB_9__::func_483(cParam0, sLocal_376, &(Local_470[0 /*4*/]), 3, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, func_429(8), &(Local_470[8 /*4*/]), 8, 0, func_430(3), 0, 1);
	__LIB_9__::func_483(cParam0, sLocal_377, &iLocal_387, 8, 0, 0, 0, 1);
	__LIB_9__::func_483(cParam0, func_429(12), &(Local_470[12 /*4*/]), 8, 2, func_430(11), 0, 1);
	__LIB_9__::func_483(cParam0, sLocal_375, &iLocal_386, 8, 0, 0, 0, 1);
}

void func_141(char[4] cParam0)
{
	__LIB_6__::func_869(cParam0, 1);
	__LIB_8__::func_707(cParam0, 25, 16);
	cParam0->f_607 = cParam0->f_607;
}

void func_156(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 134217728))
	{
		func_139(cParam0);
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 134217728);
	}
	if (bParam1 && !__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 536870912))
	{
		if (__LIB_9__::func_65(cParam0, __LIB_9__::func_40(cParam0), 0))
		{
			__LIB_8__::func_707(cParam0, __LIB_9__::func_40(cParam0), 536870912);
		}
	}
	if (__LIB_6__::func_862(cParam0, 8192))
	{
		if (!__LIB_6__::func_862(cParam0, 536870912))
		{
			if (__LIB_5__::func_569(&(cParam0->f_1126), __LIB_6__::func_864(cParam0)))
			{
				__LIB_6__::func_868(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (__LIB_9__::func_65(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		__LIB_6__::func_868(cParam0, 8192);
	}
}

void func_157(char[4] cParam0)
{
	func_440(cParam0);
}

bool func_158(char[4] cParam0)
{
	if (__LIB_6__::func_884(cParam0) < 1)
	{
		func_442(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0);
		func_443(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!__LIB_6__::func_872(cParam0, 4) && !__LIB_5__::func_371()) && !__LIB_6__::func_875(cParam0, 3))
	{
		if (!__LIB_6__::func_872(cParam0, 32))
		{
			if (__LIB_0__::func_2() == 0)
			{
				__LIB_6__::func_869(cParam0, 32);
			}
			else
			{
				func_444(cParam0);
			}
		}
		if (__LIB_6__::func_872(cParam0, 32))
		{
			func_445(cParam0);
		}
	}
	switch (__LIB_6__::func_884(cParam0))
	{
		case -1:
		case 0:
			__LIB_6__::func_885(cParam0, 1);
			break;
		case 1:
			if (func_447(cParam0))
			{
				if (__LIB_6__::func_872(cParam0, 4096))
				{
					__LIB_6__::func_885(cParam0, 2);
				}
				else
				{
					__LIB_6__::func_885(cParam0, 3);
				}
			}
			break;
		case 2:
			if (__LIB_9__::func_66(cParam0))
			{
				__LIB_6__::func_885(cParam0, 3);
			}
			break;
		case 3:
			if (func_449(cParam0))
			{
				__LIB_6__::func_885(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_161(char[4] cParam0)
{
	int iVar0;
	if (__LIB_6__::func_864(cParam0) == 26)
	{
		__LIB_6__::func_886(cParam0, 0);
		return true;
	}
	if (func_451(cParam0))
	{
		iVar0 = __LIB_6__::func_864(cParam0);
		__LIB_6__::func_870(cParam0, __LIB_9__::func_40(cParam0));
		if (__LIB_6__::func_864(cParam0) == 26)
		{
			__LIB_6__::func_886(cParam0, 0);
			return true;
		}
		else if (__LIB_8__::func_705(cParam0, iVar0, 128))
		{
			func_451(cParam0);
		}
	}
	return false;
}

void func_163(bool bParam0)
{
	bool bVar0;
	if (bParam0)
	{
		if (bLocal_456)
		{
			HUD::_DISPLAY_HUD_COMPONENT(372886907);
			bLocal_456 = false;
		}
		return;
	}
	bVar0 = false;
	if (MISC::ABSI((MISC::GET_FRAME_COUNT() - iLocal_457)) <= 1)
	{
		bVar0 = true;
	}
	if (bLocal_456)
	{
		if (!bVar0)
		{
			HUD::_DISPLAY_HUD_COMPONENT(372886907);
			bLocal_456 = false;
		}
	}
	else if (bVar0)
	{
		HUD::_HIDE_HUD_COMPONENT(372886907);
		bLocal_456 = true;
	}
}

void func_166()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_452(iVar0);
		iVar0++;
	}
}

void func_174()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395[iVar0]))
		{
			VOLUME::_DELETE_VOLUME(iLocal_395[iVar0]);
		}
		iVar0++;
	}
}

bool func_175(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 2)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	return __LIB_0__::func_1(uLocal_49[iVar1], iVar2);
}

void func_181()
{
	if (CAM::DOES_CAM_EXIST(iLocal_419))
	{
		CAM::SET_CAM_ACTIVE(iLocal_419, false);
		CAM::DESTROY_CAM(iLocal_419, false);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_420))
	{
		CAM::SET_CAM_ACTIVE(iLocal_420, false);
		CAM::DESTROY_CAM(iLocal_420, false);
	}
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
}

void func_182(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar0 /*4*/].f_1))
		{
			if (!__LIB_0__::func_27(Local_236[iVar0 /*4*/].f_3, 1))
			{
			}
			else if (!__LIB_0__::func_272(Local_236[iVar0 /*4*/].f_1, 0))
			{
			}
			else if (bParam0)
			{
				if (!AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_236[iVar0 /*4*/].f_1))
				{
					AUDIO::STOP_PED_SPEAKING(Local_236[iVar0 /*4*/].f_1, true);
				}
			}
			else if (AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_236[iVar0 /*4*/].f_1))
			{
				AUDIO::STOP_PED_SPEAKING(Local_236[iVar0 /*4*/].f_1, false);
			}
		}
		iVar0++;
	}
}

void func_183(char[4] cParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bVar0 = true;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 21)
	{
		if (__LIB_6__::func_863(cParam0) == 0)
		{
			if ((((Local_236[iVar2 /*4*/] == 6 || Local_236[iVar2 /*4*/] == 3) || Local_236[iVar2 /*4*/] == 7) || Local_236[iVar2 /*4*/] == 21) || Local_236[iVar2 /*4*/] == 2)
			{
				bVar0 = false;
				bVar1 = true;
			}
			else
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		func_479(cParam0, iVar2, bVar1, bVar0);
		iVar2++;
	}
}

void func_184(bool bParam0)
{
	if (bParam0)
	{
		if (!func_175(9))
		{
			__LIB_5__::func_509(Global_35, 0, 1);
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, false, false, true, false);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, false);
			func_481(9);
		}
	}
	else if (func_175(9))
	{
		__LIB_5__::func_509(Global_35, 1, 1);
		WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(Global_35, true, false, true, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_35, 9, true);
		func_482(9);
	}
}

void func_185()
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		__LIB_0__::func_172(Local_89[iVar0 /*7*/].f_6);
		iVar0++;
	}
}

void func_187(bool bParam0)
{
	if (bParam0)
	{
		__LIB_0__::func_8(&(Global_1415419.f_3), 8);
	}
	else
	{
		__LIB_0__::func_7(&(Global_1415419.f_3), 8);
	}
}

void func_189(bool bParam0)
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (!__LIB_0__::func_27(Local_236[iVar0 /*4*/].f_3, 1))
		{
		}
		else if (!__LIB_0__::func_272(Local_236[iVar0 /*4*/].f_1, 0))
		{
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(Local_236[iVar0 /*4*/].f_1, bParam0);
			if (bParam0)
			{
				__LIB_1__::func_683(&(Local_236[iVar0 /*4*/].f_3), 8);
			}
			else
			{
				__LIB_1__::func_681(&(Local_236[iVar0 /*4*/].f_3), 8);
			}
		}
		iVar0++;
	}
}

void func_190()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < iLocal_531)
	{
		func_487(iVar0);
		iVar0++;
	}
}

char* func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mudtown1_LeaveMountain_WarpReference";
		case 1:
			return "mudtown1_GoToRiver";
		case 2:
			return "mudtown1_HorseShoeGPSRoute";
	}
	return "";
}

void func_196(char* sParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	fVar0 = 0.5f;
	fVar1 = 0.75f;
	if (iParam1 == 1)
	{
		if (((!bLocal_601 && !func_175(16)) && !__LIB_2__::func_453()) && (UIFEED::_0xC17F69E1418CD11F(1) == 0 || UIFEED::_0x59FA676177DBE4C9(UIFEED::_0xC17F69E1418CD11F(1)) != 5))
		{
			__LIB_0__::func_45("MUD1_AUTOSTEER_HLP", 10000, 0, 0, 0, 1);
			bLocal_601 = true;
		}
		if (!func_175(5))
		{
			TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sParam0, 1, fVar0, fVar1, 1);
			PED::SET_PED_CONFIG_FLAG(Global_35, 352, true);
			PED::SET_PED_CONFIG_FLAG(Global_35, 404, true);
			func_481(5);
		}
	}
	else if (func_175(5))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(sParam0, 0, fVar0, fVar1, 1);
		PED::SET_PED_CONFIG_FLAG(Global_35, 352, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 404, false);
		func_482(5);
	}
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 3;
		case 25:
			return 25;
		default:
			break;
	}
	return 26;
}

struct<4> func_235(int iParam0, int iParam1)
{
	return func_523(iParam0, iParam1);
}

void func_292(char[4] cParam0)
{
	if (__LIB_6__::func_872(cParam0, 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
	{
		if (__LIB_6__::func_872(cParam0, 16))
		{
			__LIB_9__::func_70(cParam0, 0);
		}
		if (func_443(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_329(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
		return false;
	}
	if (!__LIB_5__::func_388(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!__LIB_1__::func_795(iParam0, &iVar0, iParam1))
	{
		return false;
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
			__LIB_4__::func_465(iVar5);
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
				func_329(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
		__LIB_11__::func_838(28);
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
			if (!__LIB_5__::func_385(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (__LIB_0__::func_356(iParam0) == joaat("AMMO") && __LIB_0__::func_258(iParam0))
		{
			if (!__LIB_1__::func_842(iParam0, &iVar0, iParam5))
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
				__LIB_4__::func_127(joaat("REWARD_SMALL"), 0, 1065353216 /* Float: 1f */, 1, 0, 0, 0, -1);
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
			__LIB_4__::func_469(iParam0, iParam1);
			__LIB_4__::func_466(iParam0);
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
				return false;
			}
			__LIB_4__::func_468(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (__LIB_0__::func_192(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!__LIB_1__::func_707(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0))
					{
						func_329(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_329(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_329(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_329(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_329(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_329(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_329(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				__LIB_11__::func_838(24);
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
				Jump @4449; //curOff = 3528
				__LIB_0__::func_364(666607663, joaat("TREASURE_HUNT_LOOT_07"), 0);
				__LIB_0__::func_919(666607663, 0);
				__LIB_0__::func_366(4);
				Jump @4449; //curOff = 3561
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_09"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(1);
				Jump @4449; //curOff = 3594
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_10"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(2);
				Jump @4449; //curOff = 3627
				__LIB_0__::func_364(-220219788, joaat("TREASURE_HUNT_LOOT_11"), 0);
				__LIB_0__::func_919(-220219788, 0);
				__LIB_0__::func_367(4);
				Jump @4449; //curOff = 3660
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_13"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(1);
				Jump @4449; //curOff = 3693
				__LIB_0__::func_364(218622660, joaat("TREASURE_HUNT_LOOT_14"), 0);
				__LIB_0__::func_919(218622660, 0);
				__LIB_0__::func_368(2);
				Jump @4449; //curOff = 3726
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_16"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(1);
				Jump @4449; //curOff = 3759
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_17"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(2);
				Jump @4449; //curOff = 3792
				__LIB_0__::func_364(390004462, joaat("TREASURE_HUNT_LOOT_18"), 0);
				__LIB_0__::func_919(390004462, 0);
				__LIB_0__::func_369(4);
				Jump @4449; //curOff = 3825
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_20"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(1);
				Jump @4449; //curOff = 3856
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_21"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(2);
				Jump @4449; //curOff = 3887
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_22"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(4);
				Jump @4449; //curOff = 3918
				__LIB_0__::func_364(6410548, joaat("TREASURE_HUNT_LOOT_23"), 0);
				__LIB_0__::func_919(6410548, 0);
				__LIB_0__::func_370(8);
				Jump @4449; //curOff = 3950
				__LIB_1__::func_424(242, __LIB_0__::func_776(joaat("CONSUMABLE_AGED_PIRATE_RUM")), 0);
				Jump @4449; //curOff = 3969
				__LIB_1__::func_424(240, __LIB_0__::func_776(joaat("CONSUMABLE_GINSENG_ELIXIER")), 0);
				Jump @4449; //curOff = 3988
				__LIB_1__::func_424(241, __LIB_0__::func_776(joaat("CONSUMABLE_VALERIAN_ROOT")), 0);
				Jump @4449; //curOff = 4007
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1934060482 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4054
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1110018439 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Stamina Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4101
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, 1408511260 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Dead Eye Bar." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4148
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(594, -1228016946 /* GXTEntry: "Consume yellow Tonics to Fortify your Bars. A Fortified Bar can be used for a sho" +
    "rt period without draining. This Tonic will Fortify your Health, Stamina and Dea" +
    "d Eye Bars." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4195
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -103579 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health Core." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4242
				if (MISC::GET_GAME_TIMER() >= (Global_1935689.f_10197 + 60000))
				{
					__LIB_1__::func_425(595, -1531530025 /* GXTEntry: "Consume yellow Provisions to Fortify your Cores. A Fortified Core will not drain " +
    "for a short period of time. This Provision will Fortify your Health and Dead Eye" +
    " Cores." */, 1, 1);
					Global_1935689.f_10197 = MISC::GET_GAME_TIMER();
				}
				Jump @4449; //curOff = 4289
				__LIB_1__::func_240(488, 0);
				Jump @4449; //curOff = 4300
				__LIB_1__::func_240(491, 0);
				Jump @4449; //curOff = 4311
				__LIB_1__::func_240(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_329(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_329(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				Jump @4449; //curOff = 4384
				if (__LIB_0__::func_293(1))
				{
					__LIB_1__::func_240(487, 0);
				}
				Jump @4449; //curOff = 4403
				__LIB_1__::func_240(486, 0);
				Jump @4449; //curOff = 4414
				if (__LIB_0__::func_2() == -1)
				{
					iParam0 = -1448210800; /* GXTEntry: "Crafting Tools" */
				}
				Jump @4449; //curOff = 4432
				__LIB_1__::func_240(496, 0);
			}
			if (!bVar4)
			{
				if (iVar0 <= 0)
				{
					return false;
				}
				iVar10 = iParam0;
				__LIB_0__::func_371(&iVar10);
				if (!__LIB_1__::func_825(iVar10, iVar0, iParam5))
				{
					return false;
				}
				else if (!__LIB_0__::func_708(0))
				{
					return true;
				}
				if (__LIB_0__::func_356(iParam0) == joaat("CLOTHING"))
				{
					__LIB_17__::func_907(iParam0);
				}
				if (__LIB_0__::func_192(iParam0, -1979000645))
				{
					__LIB_18__::func_161(iParam0);
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
						func_329(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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
					__LIB_4__::func_120(iParam0, fParam6);
				}
			}
			else if (!bParam2)
			{
				bVar37 = iParam5 == 1248274121;
				__LIB_2__::func_471(iParam0, iVar0, 0, bVar37, 0);
			}
			return true;
		}
void func_330(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar13;
	int iVar14;
	int iVar15;
	if (__LIB_0__::func_192(iParam0, 1989861793))
	{
		iVar0 = __LIB_0__::func_372(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { __LIB_0__::func_373(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (__LIB_0__::func_778(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = __LIB_0__::func_374(iVar14, iVar1);
					if (iVar15 != iParam0 && __LIB_0__::func_144(iVar15, 0))
					{
						if (__LIB_1__::func_603(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				__LIB_0__::func_375(iVar1);
				if (bVar13)
				{
					__LIB_1__::func_604(iParam0);
				}
				else
				{
					__LIB_1__::func_240(306, 0);
				}
			}
		}
	}
}

void func_331()
{
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	func_680();
	func_681();
	func_682();
	func_683();
	func_684();
	__LIB_1__::func_848();
	__LIB_0__::func_376();
}

void func_332(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	bool bVar7;
	int iVar8;
	var uVar9;
	func_687(iParam0, 1, 1, -142743235, 1);
	if (__LIB_0__::func_779(iParam0))
	{
		__LIB_1__::func_798(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = __LIB_0__::func_161(__LIB_1__::func_710(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	__LIB_0__::func_921(joaat("MPC_SP_DEFAULT_INTER_OUTFIT_TYPES"));
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = Global_1946804.f_57[iVar1 /*11*/];
		Global_1946804.f_1616.f_1[iVar1 /*3*/] = { vVar4 };
		Global_1946804.f_1616.f_1[iVar1 /*3*/].f_2 = (Global_1946804.f_1497.f_1[iVar1 /*3*/].f_2 || Global_1946804.f_1378.f_1[iVar1 /*3*/].f_2);
		iVar1++;
	}
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
				{
					__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == __LIB_0__::func_780(iVar8, iVar0))
		{
			__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar8 /*3*/]), iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
			{
				Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
			{
				Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == Global_1946804.f_1497.f_1[iVar8 /*3*/])
		{
			Global_1946804.f_1497.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
		if (iParam0 == Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/])
		{
			Global_26796.f_627.f_1.f_1.f_1[iVar8 /*3*/] = { Global_1946804.f_1616.f_1[iVar8 /*3*/] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		Global_1946804.f_1378.f_1[iVar1 /*3*/] = { Global_1946804.f_1616.f_1[iVar1 /*3*/] };
		iVar1++;
	}
}

void func_370()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	if (__LIB_0__::func_2() != -1)
	{
		return;
	}
	if (Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575.f_4)
	{
		return;
	}
	if (!__LIB_0__::func_382(64))
	{
		return;
	}
	else if (__LIB_0__::func_1(Global_1935630, 131072))
	{
		return;
	}
	else if ((__LIB_0__::func_296(0, 0, 1) || __LIB_0__::func_383()) || __LIB_1__::func_195())
	{
		return;
	}
	iVar0 = __LIB_1__::func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (SPACTIONPROXY::_SPACTIONPROXY_GET_NEXT_PENDING_BUY_ACTION(&uVar4))
	{
		if (!SPACTIONPROXY::_SPACTIONPROXY_PROCESS_ACTION(uVar4, func_728(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		__LIB_0__::func_384(MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_DELIVERY"), MISC::_CREATE_VAR_STRING(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), joaat("HUD_TOASTS"), -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		__LIB_2__::func_472(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		__LIB_0__::func_703(0, -1);
	}
	if (iVar2 > 0)
	{
		__LIB_0__::func_45("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	__LIB_0__::func_385(1, 0);
	Global_1956575.f_4 = 1;
}

Vector3 func_380(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vector3 vVar0;
	vVar0 = { func_743(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240 /* Float: 25f */) };
	if (__LIB_0__::func_86(vVar0))
	{
		vVar0 = { func_743(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240 /* Float: 25f */) };
	}
	return vVar0;
}

void func_394(char[4] cParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < __LIB_4__::func_525())
	{
		func_766(cParam0, iVar0);
		iVar0++;
	}
}

void func_397(char[4] cParam0)
{
	__LIB_9__::func_45(cParam0, 0, 1, 111963, 112132, 112298, 112462, 112532, "MUD1_INT", 2, -1);
	__LIB_9__::func_45(cParam0, 1, 2, 112714, 113020, 113305, 114099, 115688, 0, 0, -1);
	__LIB_9__::func_45(cParam0, 2, 3, 115804, 115837, 115934, 116791, 116854, "MUD1_MCS_2A", 2, -1);
	__LIB_9__::func_45(cParam0, 3, 25, 117001, 117126, 117548, 119011, 121843, "MUD1_MCS_2B", 2, -1);
	__LIB_9__::func_45(cParam0, 25, 26, 122065, 122152, 122558, 122642, 122785, "MUD1_MCS5", 2, -1);
}

void func_399(char[4] cParam0)
{
	Local_14.f_7[1] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(__LIB_18__::func_330(cParam0, "wagon02x"));
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14.f_7[1], true, true);
	Local_14.f_7[2] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(__LIB_18__::func_330(cParam0, "wagon04x^4"));
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14.f_7[2], true, true);
	Local_14.f_7[3] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(__LIB_18__::func_330(cParam0, "WAGON04x^1"));
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14.f_7[3], true, true);
	Local_14.f_7[4] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(__LIB_18__::func_330(cParam0, "WAGON04x^2"));
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14.f_7[4], true, true);
	Local_14.f_7[0] = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(__LIB_18__::func_330(cParam0, "WAGON04x^3"));
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_14.f_7[0], true, true);
	func_794(2048);
}

void func_400(char[4] cParam0)
{
	Local_236[6 /*4*/].f_2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_18__::func_330(cParam0, "HORSE_01"));
	Local_236[20 /*4*/].f_2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_18__::func_330(cParam0, "Horse_01^1"));
	Local_236[14 /*4*/].f_2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(__LIB_18__::func_330(cParam0, "Horse_01^2"));
	__LIB_1__::func_683(&(Local_236[6 /*4*/].f_3), 2);
	__LIB_1__::func_683(&(Local_236[20 /*4*/].f_3), 2);
	__LIB_1__::func_683(&(Local_236[14 /*4*/].f_3), 2);
}

void func_403(var uParam0)
{
	vector3 vVar0;
	if (!__LIB_0__::func_84(uParam0, 4))
	{
		if (__LIB_0__::func_1(uParam0->f_860, 16384))
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
		}
		vVar0 = { __LIB_4__::func_534(uParam0) };
		if (!__LIB_0__::func_1(uParam0->f_860, 524288))
		{
			__LIB_4__::func_717(&(uParam0->f_872));
		}
		func_799(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		__LIB_4__::func_535(uParam0, 0f, 0f, 0f);
		func_801(uParam0);
		func_802(uParam0);
		__LIB_5__::func_47(uParam0, 0f, 0f, 0f, 0, 0);
		__LIB_5__::func_48(uParam0);
		__LIB_0__::func_88(uParam0, 4);
		__LIB_0__::func_106(uParam0, 0);
		__LIB_1__::func_550(&(Global_1946804.f_1497), Global_35, 1, 64, 1, 1, 1);
		if (CAM::_0x927B810E43E99932(&(uParam0->f_873)))
		{
			CAM::_0x0A5A4F1979ABB40E(&(uParam0->f_873));
		}
	}
}

int func_405(vector3 vParam0, var uParam3)
{
	int iVar0;
	if (MISC::_0x1B065A2BF7953815(0) != 1)
	{
		__LIB_1__::func_837(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_399(Global_35, 0, 2, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		iVar0 = func_810(0, 0);
		if (__LIB_0__::func_154(iVar0))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 2, false, false);
			__LIB_0__::func_713(1, 0);
		}
	}
	else
	{
		__LIB_0__::func_713(1, 0);
	}
	__LIB_0__::func_305(0);
	__LIB_5__::func_119(0, vParam0, uParam3);
	return 1;
}

void func_423()
{
	vector3 vVar0;
	vVar0 = { -128.8169f, -19.7176f, 90f };
	Local_321[0 /*5*/].f_4 = joaat("P_CLIPBOARD01X");
	Local_321[0 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
	Local_321[1 /*5*/].f_4 = joaat("P_BOTTLEJD01X");
	Local_321[1 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
	Local_321[6 /*5*/].f_4 = joaat("P_WOODPLANK03X");
	Local_321[6 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
	Local_321[7 /*5*/].f_4 = joaat("P_NAILSINGLE01X");
	Local_321[7 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
	Local_321[8 /*5*/].f_4 = joaat("P_RAG02X");
	Local_321[8 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
	Local_321[2 /*5*/].f_4 = joaat("P_PENCIL01X");
	Local_321[2 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
	Local_321[3 /*5*/].f_4 = joaat("P_CIGARLIT01X");
	Local_321[3 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
	Local_321[4 /*5*/].f_4 = joaat("P_HAMMER01X");
	Local_321[4 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
	Local_321[9 /*5*/].f_4 = joaat("P_CIGARETTE_CS01X");
	Local_321[9 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
	Local_321[5 /*5*/].f_4 = joaat("P_CRATE15X");
	Local_321[5 /*5*/].f_1 = { vVar0 };
	vVar0 = { vVar0 - Vector(2f, 0f, 0f) };
}

char* func_424(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mini_games@story@mud1@fix_wheel";
		case 1:
			return "Script_MUD1_FixWagonWheel_NoSpin";
		case 2:
			return "Intro_Idle";
		case 3:
			return "Pickup";
		case 4:
			return "progress";
		case 5:
			return "MUD1_UC_FIX_2";
		case 6:
			return "Roll";
		case 9:
			return "MUD1_UC_FIX_3";
		case 7:
			return "rolldirection";
		case 8:
			return "RollingFinished";
		case 10:
			return "Lift";
		case 11:
			return "progress";
		case 12:
			return "MUD1_UC_FIX_4";
		case 13:
			return "spin";
		case 15:
			return "rotation";
		case 16:
			return "progress";
		case 14:
			return "MUD1_UC_FIX_5";
		case 17:
			return "Push";
		case 18:
			return "pushamount";
		case 19:
			return "progress";
		case 20:
			return "MUD1_UC_FIX_6A";
		case 21:
			return "MUD1_UC_FIX_6B";
		case 22:
			return "Outro";
	}
	return "";
}

char* func_429(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script@story@mud1@ig@ig_1@base";
		case 2:
			return "script@story@mud1@ig@ig_8@dont_push";
		case 3:
			return "script@story@mud1@ig@ig_8@enter";
		case 4:
			return "script@story@mud1@ig@ig_8@get_us_out";
		case 5:
			return "script@story@mud1@ig@ig_8@keep_us_moving";
		case 6:
			return "script@story@mud1@ig@ig_8@not_too_rough";
		case 7:
			return "script@story@mud1@ig@ig_8@push_us_forward";
		case 8:
			return "script@story@mud1@ig@ig11_javier_greeting@ig11_javier_greeting";
		case 9:
			return "script@story@mud1@ig@ig12@ig12_hang_on_wagon";
		case 13:
			return "script@story@mud1@ig@ig15_wagon_talk_cme@ig15_wagon_talk_cme";
		case 10:
			return "script@story@mud1@leadin@mcs2@leadin";
		case 11:
			return "script@story@mud1@leadout@mcs2@leadout";
		case 12:
			return "script@story@mud1@leadin@mcs5@base_leadin";
	}
	return "";
}

char* func_430(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return "pl_ThereYouAreLeft";
		case 4:
			return "pl_ThereYouAreBackLeft";
		case 5:
			return "pl_ThereYouAreRight";
		case 6:
			return "pl_ThereYouAreBackRight";
		case 7:
			return "pl_WalkOKLetsGo";
		case 8:
			return "pl_HereWeAre";
		case 12:
			return "pbl_WAGONCHAT";
		case 10:
			return "pl_IG13_Hosea_ClimbOnWagon";
		case 11:
			return "pl_leadin";
	}
	return "";
}

void func_440(char[4] cParam0)
{
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::_0xBA0980B5C0A11924(0f);
	if (__LIB_6__::func_864(cParam0) == iLocal_54)
	{
		__LIB_5__::func_521(0.75f);
		PED::_0xC0258742B034DFAF(1f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		PED::_0xAB0D553FE20A6E25(1f);
		POPULATION::_0xF45E46DEECF7DF6E(8192, 0, 0, -1, -1);
	}
	else
	{
		PED::_0xC0258742B034DFAF(0f);
		PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		PED::_0xAB0D553FE20A6E25(0f);
		POPULATION::_0xF45E46DEECF7DF6E(9184, 0, 0, -1, -1);
		__LIB_5__::func_521(0f);
	}
}

bool func_442(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	if (__LIB_6__::func_872(cParam0, 2))
	{
		return true;
	}
	if (__LIB_0__::func_2() == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = __LIB_4__::func_543(__LIB_6__::func_866(cParam0));
	if (!__LIB_0__::func_91())
	{
		vVar2 = { __LIB_1__::func_469(cParam0->f_607) };
	}
	if (func_871(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_443(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	struct<11> Var0;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar17;
	struct<11> Var18;
	int iVar29;
	if (ENTITY::DOES_ENTITY_EXIST(cParam0->f_5411))
	{
		if (!__LIB_6__::func_872(cParam0, 16777216))
		{
			if (!__LIB_8__::func_667(cParam0))
			{
				__LIB_6__::func_869(cParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = __LIB_4__::func_720(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					__LIB_6__::func_869(cParam0, 16777216);
					if (iVar11 == 2 && !ENTITY::IS_ENTITY_DEAD(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							__LIB_6__::func_869(cParam0, 16777216);
						}
						else if (__LIB_0__::func_48(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (__LIB_0__::func_126(iVar12))
							{
								PHYSICS::_0x0348469DAA17576C(iVar12);
							}
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar12, false, true);
							ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!ENTITY::IS_ENTITY_DEAD(cParam0->f_5411))
		{
			return true;
		}
	}
	if (__LIB_6__::func_872(cParam0, 1))
	{
		return true;
	}
	vVar14 = { __LIB_1__::func_469(cParam0->f_607) };
	if (__LIB_0__::func_2() == 0)
	{
		STREAMING::REQUEST_MODEL(__LIB_6__::func_874(cParam0), false);
		if (!STREAMING::HAS_MODEL_LOADED(__LIB_6__::func_874(cParam0)))
		{
			return false;
		}
		if (__LIB_5__::func_50(&iVar17, __LIB_6__::func_874(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(iVar17, true);
			iVar13 = NETWORK::NET_TO_PED(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			__LIB_6__::func_869(cParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (__LIB_6__::func_872(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (__LIB_6__::func_872(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = __LIB_4__::func_720(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!__LIB_6__::func_872(cParam0, 16))
			{
				__LIB_6__::func_869(cParam0, 16);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		__LIB_8__::func_598(cParam0, bParam1);
		if (!__LIB_6__::func_872(cParam0, 256))
		{
			if (!__LIB_6__::func_872(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!__LIB_0__::func_126(iVar13) || __LIB_0__::func_665(Global_35, iVar13, 1, 1) > 200f) && !__LIB_0__::func_86(vVar14))
				{
					if (!__LIB_0__::func_91())
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar13, false);
						func_879(iVar13, vVar14, fParam5, 2, 1073741824 /* Float: 2f */);
					}
				}
			}
		}
		else
		{
			Stack.Push(cParam0);
			Call_Loc(cParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_444(char[4] cParam0)
{
	int iVar0;
	var uVar1;
	if (!__LIB_6__::func_872(cParam0, 32) && __LIB_6__::func_875(cParam0, 3))
	{
		if (__LIB_4__::func_544(cParam0->f_607, &iVar0, &uVar1))
		{
			CLOCK::SET_CLOCK_TIME(iVar0, 0, 0);
			__LIB_6__::func_869(cParam0, 32);
		}
	}
	if (!__LIB_6__::func_872(cParam0, 32))
	{
		if (func_881(&(cParam0->f_609), cParam0->f_607))
		{
			__LIB_6__::func_869(cParam0, 32);
		}
	}
}

void func_445(char[4] cParam0)
{
	struct<4> Var0;
	if (!__LIB_6__::func_872(cParam0, 128))
	{
		if (__LIB_6__::func_872(cParam0, 16384))
		{
			__LIB_8__::func_668(cParam0);
			if (__LIB_19__::func_576(cParam0))
			{
				__LIB_5__::func_326(&(cParam0->f_10792));
				__LIB_6__::func_887(cParam0, 2097152);
				__LIB_6__::func_881(cParam0, 16384);
				__LIB_6__::func_869(cParam0, 128);
			}
			return;
		}
		if (__LIB_6__::func_875(cParam0, 1))
		{
			return;
		}
		if (__LIB_6__::func_872(cParam0, 64))
		{
			__LIB_8__::func_668(cParam0);
			MemCopy(&Var0, {__LIB_4__::func_681(__LIB_6__::func_866(cParam0))}, 4);
			if (func_885(cParam0, Var0))
			{
				if (__LIB_6__::func_884(cParam0) != 4)
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_6__::func_869(cParam0, 128);
			}
		}
		else
		{
			if (__LIB_6__::func_884(cParam0) != 4)
			{
				CAM::DO_SCREEN_FADE_OUT(1);
			}
			__LIB_6__::func_869(cParam0, 128);
		}
	}
}

bool func_447(char[4] cParam0)
{
	int iVar0;
	char[] cVar1[8];
	iVar0 = 1;
	if (!__LIB_9__::func_155(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_442(cParam0, __LIB_6__::func_875(cParam0, 3), !__LIB_6__::func_862(cParam0, 2097152), cParam0->f_5410, !__LIB_6__::func_862(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_443(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!PED::_0x5E420FF293EE5472())
	{
		iVar0 = 0;
	}
	if (__LIB_6__::func_872(cParam0, 4) && !PED::_0x0EE3F0D7FECCC54F())
	{
		iVar0 = 0;
	}
	if (!__LIB_4__::func_505(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {__LIB_4__::func_542(cParam0->f_607)}, 3);
		if (__LIB_5__::func_341(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (__LIB_6__::func_875(cParam0, 1))
	{
		if (!__LIB_0__::func_75(&(cParam0->f_13115)))
		{
			__LIB_1__::func_283(&(cParam0->f_13115), 0);
		}
		if (__LIB_0__::func_265(&(cParam0->f_13115)) < 30f)
		{
			if (Global_1879534.f_1 || Global_1879534)
			{
				iVar0 = 0;
			}
			if (Global_1935630.f_2 != Global_40.f_39 || (!Global_1935630.f_12 && ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630.f_12 && !PED::_0xA0BC8FAED8CFEB3C(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_449(char[4] cParam0)
{
	func_891();
	func_892();
	vLocal_453 = { 0f, 0f, 0f };
	fLocal_452 = 0f;
	func_440(cParam0);
	if (!func_893(cParam0))
	{
		return false;
	}
	if (!func_894(cParam0, 1))
	{
		return false;
	}
	if (!func_895())
	{
		return false;
	}
	if (!func_896(cParam0, 26))
	{
		return false;
	}
	if (!func_897(cParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(__LIB_18__::func_330(cParam0, "Horse_01^7")))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_421))
		{
			iLocal_421 = __LIB_11__::func_107(-1314.579f, 2420.648f, 306.8981f, 66.7114f, 1, 1, 0, 1, 1);
			return false;
		}
	}
	if (__LIB_6__::func_864(cParam0) == iLocal_52 && !__LIB_6__::func_872(cParam0, 4))
	{
		if (!func_899(7))
		{
			return false;
		}
	}
	else if (!func_899(8))
	{
		return false;
	}
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_448))
	{
		uLocal_448 = __LIB_1__::func_391(iLocal_395[2], 0, 0, 0);
	}
	func_901(cParam0);
	if (__LIB_0__::func_272(Local_236[6 /*4*/].f_1, 0))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_236[6 /*4*/].f_1, 1);
	}
	if (__LIB_0__::func_272(Local_236[7 /*4*/].f_1, 0))
	{
		__LIB_0__::func_288(7, 28, 1);
	}
	MISC::_0x3373779BAF7CAF48("snowclearing", "snowclearing_mud1");
	MISC::_SET_WEATHER_TYPE(joaat("SNOWCLEARING"), true, true, false, 0f, false);
	func_903(cParam0);
	__LIB_8__::func_810(7);
	__LIB_9__::func_14(cParam0, 140143);
	__LIB_9__::func_15(cParam0, 141614);
	__LIB_9__::func_16(cParam0, 143880);
	func_911();
	func_912(&Local_458);
	__LIB_9__::func_42(cParam0, Global_35, "ARTHUR", 0);
	__LIB_0__::func_326(2);
	__LIB_0__::func_326(16777216);
	__LIB_0__::func_326(262144);
	CAM::_0x1B3C2D961F5FC0E1("script@Story@MUD1@ride_to_horseshoe");
	__LIB_1__::func_408(-1170496998, 0, 0);
	func_189(1);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 30, 0, 1);
	__LIB_4__::func_517(1);
	func_915(cParam0, 0);
	__LIB_10__::func_248();
	__LIB_8__::func_781();
	__LIB_11__::func_564(0);
	__LIB_0__::func_391();
	__LIB_0__::func_390();
	PATHFIND::_0xB03944057FD735BA(iLocal_395[1], 5, 0);
	MISC::CLEAR_AREA(-1004.357f, 10.6045f, 50.8802f, 400f, 1081344);
	if (__LIB_6__::func_864(cParam0) > iLocal_52 && __LIB_6__::func_864(cParam0) <= iLocal_54)
	{
		GRAPHICS::SET_TIMECYCLE_MODIFIER("mud1_wagonRideCascades");
	}
	return true;
}

bool func_451(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	func_918(cParam0);
	__LIB_9__::func_251(cParam0);
	iVar0 = __LIB_6__::func_864(cParam0);
	iVar1 = __LIB_9__::func_40(cParam0);
	iVar2 = __LIB_8__::func_663(cParam0, iVar0);
	if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			__LIB_19__::func_576(cParam0);
		}
	}
	__LIB_9__::func_140(cParam0);
	__LIB_9__::func_197(cParam0);
	__LIB_9__::func_47(cParam0);
	__LIB_9__::func_48(cParam0);
	__LIB_9__::func_49(cParam0);
	__LIB_9__::func_17(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		__LIB_9__::func_63(cParam0);
	}
	if ((__LIB_6__::func_864(cParam0) == 0 && iVar2 < 3) && __LIB_8__::func_587(cParam0) == 0)
	{
		func_445(cParam0);
	}
	if (__LIB_8__::func_705(cParam0, iVar0, 512))
	{
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	func_74(cParam0);
	switch (iVar2)
	{
		case 0:
			if (__LIB_9__::func_50(cParam0, iVar0, 0))
			{
				if (__LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)))
				{
					PED::_0xF008E0BA1FE1D644((__LIB_8__::func_669(cParam0, __LIB_6__::func_864(cParam0)) - PED::_0x62DE46F061CAA468()));
				}
				if ((__LIB_6__::func_864(cParam0) == 25 || __LIB_6__::func_864(cParam0) == 26) && __LIB_0__::func_13(32768))
				{
					__LIB_8__::func_665(cParam0, 524288);
				}
				if (__LIB_6__::func_872(cParam0, 4))
				{
					if (!__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_0__::func_16(cParam0, iVar0);
						__LIB_6__::func_868(cParam0, 4);
					}
					__LIB_9__::func_51(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 1);
				}
				else
				{
					__LIB_8__::func_670(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (__LIB_9__::func_155(cParam0))
			{
				if (__LIB_9__::func_64(cParam0))
				{
					if (__LIB_6__::func_862(cParam0, 4))
					{
						__LIB_6__::func_887(cParam0, 4);
					}
					__LIB_8__::func_670(cParam0, iVar0, 2);
				}
			}
			else if (__LIB_9__::func_31(cParam0) >= cParam0->f_13144)
			{
				if (__LIB_6__::func_862(cParam0, 4))
				{
					__LIB_6__::func_887(cParam0, 4);
				}
				__LIB_8__::func_670(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (__LIB_9__::func_50(cParam0, iVar0, 2))
			{
				if (!__LIB_9__::func_18(cParam0))
				{
					__LIB_8__::func_670(cParam0, iVar0, 4);
					if (func_935(cParam0, iVar0, iVar1))
					{
						__LIB_8__::func_670(cParam0, iVar0, 5);
					}
				}
				else
				{
					__LIB_11__::func_378(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 3);
					if (func_937(cParam0, iVar0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 4);
						if (func_935(cParam0, iVar0, iVar1))
						{
							__LIB_8__::func_670(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (__LIB_8__::func_671(cParam0))
			{
				func_937(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_937(cParam0, iVar0))
			{
				__LIB_8__::func_670(cParam0, iVar0, 4);
				if (func_935(cParam0, iVar0, iVar1))
				{
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_935(cParam0, iVar0, iVar1))
			{
				__LIB_8__::func_670(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_9__::func_909(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_9__::func_477(cParam0);
				if (__LIB_8__::func_705(cParam0, iVar1, 2))
				{
					if (__LIB_9__::func_52(cParam0, iVar1))
					{
						__LIB_9__::func_353(cParam0, iVar1);
					}
				}
			}
			if (__LIB_9__::func_50(cParam0, iVar0, 5))
			{
				if (__LIB_9__::func_50(cParam0, iVar0, 7))
				{
					if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
					{
						__LIB_9__::func_198(cParam0, __LIB_6__::func_864(cParam0));
					}
					__LIB_9__::func_150(cParam0, iVar1);
					__LIB_9__::func_251(cParam0);
					return true;
				}
				else
				{
					__LIB_8__::func_670(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4194304))
				{
					if ((!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN()) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 16))
					{
						CAM::DO_SCREEN_FADE_IN(0);
						__LIB_8__::func_710(0);
					}
					__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 4194304);
				}
				if ((__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) && !__LIB_6__::func_872(cParam0, 8192)) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
				{
					__LIB_5__::func_20(1, 0);
					__LIB_1__::func_422("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (__LIB_0__::func_0(cParam0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 6);
					}
				}
				if (__LIB_6__::func_862(cParam0, 268435456))
				{
					if (MISC::_0x1B065A2BF7953815(1) != 1)
					{
						__LIB_8__::func_725(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						__LIB_6__::func_887(cParam0, 268435456);
					}
				}
				if (__LIB_6__::func_872(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						__LIB_6__::func_881(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!__LIB_0__::func_2() == 0)
			{
				__LIB_8__::func_672(cParam0);
				__LIB_9__::func_909(cParam0, iVar0);
				__LIB_8__::func_673(cParam0);
				__LIB_9__::func_477(cParam0);
				if (__LIB_8__::func_705(cParam0, __LIB_9__::func_40(cParam0), 2))
				{
					if (__LIB_9__::func_52(cParam0, __LIB_9__::func_40(cParam0)))
					{
						__LIB_9__::func_353(cParam0, __LIB_9__::func_40(cParam0));
					}
				}
			}
			if ((!__LIB_1__::func_394(PLAYER::GET_PLAYER_INDEX(), 0, 0, 1) || __LIB_6__::func_872(cParam0, 8192)) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8))
			{
				if (__LIB_9__::func_50(cParam0, iVar0, 5))
				{
					if (__LIB_0__::func_0(cParam0))
					{
						__LIB_8__::func_670(cParam0, iVar0, 7);
					}
				}
				else
				{
					__LIB_0__::func_0(cParam0);
					__LIB_8__::func_670(cParam0, iVar0, 5);
				}
			}
			else
			{
				__LIB_9__::func_50(cParam0, iVar0, 5);
				__LIB_0__::func_16(cParam0);
			}
			break;
		case 7:
			if (__LIB_9__::func_50(cParam0, iVar0, 7))
			{
				if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 67108864))
				{
					__LIB_9__::func_198(cParam0, __LIB_6__::func_864(cParam0));
				}
				__LIB_9__::func_150(cParam0, iVar1);
				__LIB_9__::func_251(cParam0);
				return true;
			}
			break;
		default:
			__LIB_8__::func_670(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_452(int iParam0)
{
	__LIB_3__::func_319(Local_470[iParam0 /*4*/]);
}

void func_479(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (iParam1 >= 21)
	{
		return;
	}
	if (__LIB_0__::func_27(Local_236[iParam1 /*4*/].f_3, 2))
	{
		__LIB_1__::func_463(Local_236[iParam1 /*4*/].f_2, Local_236[iParam1 /*4*/], 1, 0, 0);
		__LIB_1__::func_681(&(Local_236[iParam1 /*4*/].f_3), 2);
	}
	if (!bParam3)
	{
		__LIB_6__::func_888(Local_236[iParam1 /*4*/]);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_236[iParam1 /*4*/].f_1))
	{
		__LIB_1__::func_681(&(Local_236[iParam1 /*4*/].f_3), 1);
		return;
	}
	if (__LIB_0__::func_27(Local_236[iParam1 /*4*/].f_3, 8))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(Local_236[iParam1 /*4*/].f_1, false);
		__LIB_1__::func_681(&(Local_236[iParam1 /*4*/].f_3), 8);
	}
	if (__LIB_0__::func_27(Local_236[iParam1 /*4*/].f_3, 1))
	{
		__LIB_9__::func_252(cParam0, Local_236[iParam1 /*4*/], Local_236[iParam1 /*4*/].f_1, 0, bParam2, 1, 0);
		__LIB_1__::func_681(&(Local_236[iParam1 /*4*/].f_3), 1);
		__LIB_1__::func_681(&(Local_236[iParam1 /*4*/].f_3), 4);
		__LIB_1__::func_681(&(Local_236[iParam1 /*4*/].f_3), 8);
	}
}

void func_481(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 2)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_1__::func_336(&(uLocal_49[iVar1]), iVar2);
}

void func_482(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 2)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_0__::func_516(&(uLocal_49[iVar1]), iVar2);
}

void func_487(int iParam0)
{
	if (CAM::DOES_CAM_EXIST(iLocal_531[iParam0]))
	{
		if (CAM::IS_CAM_ACTIVE(iLocal_531[iParam0]))
		{
			CAM::SET_CAM_ACTIVE(iLocal_531[iParam0], false);
		}
		CAM::DESTROY_CAM(iLocal_531[iParam0], false);
	}
}

struct<4> func_523(int iParam0, int iParam1)
{
	struct<4> Var0;
	Var0 = { func_1019(iParam0, iParam1) };
	Var0.f_3 = func_1020(iParam0, iParam1);
	return Var0;
}

void func_680()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_SPECIALEDITION"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 0);
			func_1170(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), false);
			__LIB_1__::func_851();
		}
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	__LIB_1__::func_116();
	if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("NBD1")) >= 2)
	{
		if (MISSIONDATA::MISSIONDATA_GET_RATING(joaat("CABR01")) < 2)
		{
			MISSIONDATA::_0xE824CE7D13FCB300(joaat("CABR01"), 2);
		}
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED")))
	{
		return;
	}
	func_1170(1);
}

void func_681()
{
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE")))
	{
		return;
	}
	func_329(1351927599 /* GXTEntry: "The Grizzlies Outlaw" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE"), true);
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED")))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_ORBIS_DAY_ONE_REDEEMED"), true);
}

void func_682()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PHYSPREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
		{
			func_1173(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER"), true);
	func_1173(1);
}

void func_683()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(joaat("DLC_PREORDERCONTENT"));
	if (!bVar0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
		{
			__LIB_2__::func_522(15000, 0, 0, 0, 1);
			func_1173(0);
			UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), false);
		}
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL")))
	{
		return;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL_REDEEMED")))
	{
		return;
	}
	if (!__LIB_1__::func_25(Global_1835011[4 /*74*/].f_1, 1))
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_DIGITAL"), true);
	__LIB_2__::func_590(15000, 0, 1065353216 /* Float: 1f */, 1, 0, 0, 1, 752097756);
	func_1173(1);
}

void func_684()
{
	bool bVar0;
	bVar0 = DLC::IS_DLC_PRESENT(-679138445);
	if (bVar0)
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_329(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(1))
			{
				__LIB_0__::func_368(1);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if ((!__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0) && !__LIB_1__::func_44(Global_1835011[23 /*74*/].f_1)) && !Global_43891)
			{
				func_329(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!__LIB_0__::func_458(2))
			{
				__LIB_0__::func_368(2);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_15")) > 0 && !__LIB_0__::func_458(4))
		{
			__LIB_0__::func_368(4);
		}
		if (__LIB_0__::func_458(0))
		{
			__LIB_0__::func_459(0);
		}
	}
	else
	{
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_13")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 0))
			{
				func_687(joaat("DOCUMENT_TREASURE_MAP_10"), 1, 1, -142743235, 0);
			}
		}
		if (COLLECTION::_0xF83D3DDA4D3C8169(joaat("TREASURE_HUNT_LOOT_14")) > 0)
		{
			if (__LIB_1__::func_707(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 0))
			{
				func_687(joaat("DOCUMENT_TREASURE_MAP_11"), 1, 1, -142743235, 0);
			}
		}
		if (__LIB_0__::func_458(1))
		{
			__LIB_0__::func_459(1);
		}
		if (__LIB_0__::func_458(2))
		{
			__LIB_0__::func_459(2);
		}
		if (__LIB_0__::func_458(4))
		{
			__LIB_0__::func_459(4);
		}
		if (!__LIB_0__::func_458(0))
		{
			__LIB_0__::func_368(0);
		}
	}
}

int func_687(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
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
			__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
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
			func_687(iParam0, __LIB_1__::func_614(iParam0, 0, 0), bParam2, iParam3, bParam4);
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
		__LIB_2__::func_471(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	__LIB_1__::func_879(iParam0, iParam1);
	return 1;
}

int func_728(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<5> Var5;
	int iVar10;
	int iVar11;
	if (__LIB_0__::func_2() != -1)
	{
		return 0;
	}
	if (Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!__LIB_0__::func_144(iVar0, 0))
	{
		return 0;
	}
	if (!__LIB_1__::func_63(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	__LIB_0__::func_794(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (__LIB_0__::func_192(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { __LIB_1__::func_615(iVar0, 0, 1) };
	iVar10 = __LIB_1__::func_119(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar10) / BUILTIN::TO_FLOAT(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1218(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!__LIB_0__::func_952(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_329(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	__LIB_2__::func_522(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

Vector3 func_743(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	var uVar13;
	bool bVar14;
	struct<5> Var15;
	struct<5> Var20;
	var uVar25;
	var uVar26;
	bVar2 = 9999999f;
	__LIB_1__::func_456(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (__LIB_0__::func_479() == 0 && !__LIB_0__::func_795(0))
		{
			bVar14 = true;
		}
	}
	if (!__LIB_0__::func_720(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	VOLUME::_0x748C5F51A18CB8F0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1232();
		if (VOLUME::_DOES_VOLUME_EXIST(bVar10))
		{
		}
	}
	if (!func_1233(Global_1310720.f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar25, &Var15);
	while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		DATAFILE::_DATAFILE_GET_DATA_NODE_INDEX(&uVar26, &Var20);
		while (DATAFILE::_DATAFILE_GET_NUM_CHILDREN(Var20, uVar26) > iVar1)
		{
			vVar7 = { __LIB_0__::func_953(iVar0, iVar1) };
			bVar11 = __LIB_0__::func_954(iVar0, iVar1);
			bVar3 = BUILTIN::VDIST(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !__LIB_0__::func_86(vVar7)) && __LIB_1__::func_172(iVar0, bParam8, iParam12)) && !__LIB_0__::func_955(iVar0)) || bVar11)
			{
				if (__LIB_9__::func_68(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					bVar2 = BUILTIN::VDIST(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					VOLUME::_0x748C5F51A18CB8F0(1);
					return vVar4;
				}
			}
		}
	}
}

void func_766(char[4] cParam0, int iParam1)
{
	func_1244(cParam0, iParam1);
	__LIB_8__::func_679(cParam0, iParam1, 26);
}

int func_767(char[4] cParam0)
{
	__LIB_6__::func_881(cParam0, 1);
	__LIB_9__::func_60(cParam0, 0);
	func_1246(0);
	if (!__LIB_0__::func_139(iLocal_592))
	{
		iLocal_592 = __LIB_1__::func_877("MUD1_UC_RALONG", joaat("INPUT_VEH_DRAFT_ACCELERATE"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_1__::func_382(iLocal_592, 0, 1);
	}
	__LIB_1__::func_522(iLocal_592, 1, 1, 1);
	__LIB_1__::func_522(iLocal_592, 10, 1, 1);
	__LIB_1__::func_522(iLocal_592, 14, 1, 1);
	__LIB_1__::func_522(iLocal_592, 11, 1, 1);
	__LIB_1__::func_522(iLocal_592, 13, 1, 1);
	__LIB_1__::func_522(iLocal_592, 14, 1, 1);
	__LIB_17__::func_711(&iLocal_592, "INPUT_MUD1_ACCEL");
	return 1;
}

bool func_768(char[4] cParam0)
{
	var uVar0;
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	__LIB_1__::func_148(&uLocal_66);
	__LIB_6__::func_891(Local_236[14 /*4*/].f_1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_423[4]))
	{
		VEHICLE::_0x63DC1F22C903B709(iLocal_423[4], false);
	}
	func_1252(0);
	__LIB_3__::func_353("MUD1_START_CS", 0);
	PED::_SET_PED_BODY_COMPONENT(Local_236[5 /*4*/].f_1, 1016389820);
	PED::_UPDATE_PED_VARIATION(Local_236[5 /*4*/].f_1, false, true, true, true, false);
	if (__LIB_1__::func_750(&uVar0))
	{
		__LIB_11__::func_867();
	}
	if (!__LIB_6__::func_872(cParam0, 4))
	{
		bLocal_600 = false;
		__LIB_10__::func_21(Global_35, 8);
	}
	AUDIO::STOP_PED_SPEAKING(Global_35, true);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_769(char[4] cParam0)
{
	__LIB_1__::func_148(&uLocal_542);
	func_794(128);
	func_1257();
	if (!func_896(cParam0, 26))
	{
		return false;
	}
	if (__LIB_8__::func_587(cParam0) == 1)
	{
		func_1258();
		GRAPHICS::SET_TIMECYCLE_MODIFIER("mud1_wagonRideCascades");
	}
	if (PHYSICS::DOES_ROPE_EXIST(iLocal_450) && ENTITY::DOES_ENTITY_EXIST(iLocal_421))
	{
		PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_450, iLocal_421);
		PHYSICS::DETACH_ROPE_FROM_ENTITY(iLocal_450, Local_236[3 /*4*/].f_1);
		PHYSICS::DELETE_ROPE(&iLocal_450);
	}
	__LIB_5__::func_374(0);
	__LIB_5__::func_374(1);
	__LIB_6__::func_869(cParam0, 1);
	__LIB_9__::func_142(cParam0, "MUD1_LMT_OBJ2", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_770(var uParam0)
{
	func_1257();
	__LIB_1__::func_148(&uLocal_542);
	func_794(128);
	AITRANSPORT::_0xBA8818212633500A(iLocal_423[4], 7, 1);
	__LIB_2__::func_353(&(uLocal_589[0]), 1);
	__LIB_2__::func_353(&(uLocal_589[1]), 1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_771(char[4] cParam0)
{
	if (CAM::_0x927B810E43E99932(&Local_548))
	{
		CAM::_0x0A5A4F1979ABB40E(&Local_548);
	}
	AUDIO::STOP_PED_SPEAKING(Global_35, false);
	__LIB_1__::func_148(&uLocal_542);
	func_794(128);
	__LIB_9__::func_60(cParam0, 0);
	return 1;
}

int func_773(char[4] cParam0)
{
	cParam0->f_607 = cParam0->f_607;
	if (!ENTITY::IS_ENTITY_DEAD(Local_236[7 /*4*/].f_1))
	{
		if (!PED::IS_PED_IN_VEHICLE(Local_236[7 /*4*/].f_1, iLocal_423[3], false))
		{
			PED::SET_PED_INTO_VEHICLE(Local_236[7 /*4*/].f_1, iLocal_423[3], -1);
			return 0;
		}
	}
	if (!__LIB_2__::func_343(Global_35, iLocal_423[4], 0))
	{
		PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_423[4], -1);
	}
	func_1246(6);
	__LIB_9__::func_142(cParam0, "MUD1_LMT_OBJ2", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	if (!__LIB_0__::func_139(iLocal_592))
	{
		iLocal_592 = __LIB_1__::func_877("MUD1_UC_RALONG", joaat("INPUT_VEH_DRAFT_ACCELERATE"), 3, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
		__LIB_1__::func_382(iLocal_592, 0, 1);
	}
	__LIB_1__::func_522(iLocal_592, 10, 1, 1);
	__LIB_1__::func_522(iLocal_592, 14, 1, 1);
	__LIB_1__::func_522(iLocal_592, 11, 1, 1);
	__LIB_17__::func_711(&iLocal_592, "INPUT_MUD1_ACCEL");
	func_879(Local_236[6 /*4*/].f_2, -1047.169f, 404.5631f, 52.4851f, -89.41f, 2, 1073741824 /* Float: 2f */);
	MISC::CLEAR_AREA(func_1266(2, 26), 300f, 1081344);
	func_182(1);
	return 1;
}

int func_774(char[4] cParam0)
{
	func_1257();
	cParam0->f_607 = cParam0->f_607;
	__LIB_1__::func_148(&uLocal_66);
	__LIB_1__::func_148(&uLocal_542);
	func_794(128);
	__LIB_9__::func_60(cParam0, 0);
	func_1252(0);
	func_903(cParam0);
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 3.9f);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[3], 4.5f);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[2], 5f);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[1], 5.2f);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[0], 4.6f);
		PED::_SET_PED_BODY_COMPONENT(Local_236[5 /*4*/].f_1, 1016389820);
		PED::_UPDATE_PED_VARIATION(Local_236[5 /*4*/].f_1, false, true, true, true, false);
	}
	VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[3], 0f);
	VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[4], 0f);
	VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[2], 0f);
	VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[0], 0f);
	VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[1], 0f);
	VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[3], 0f);
	VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[4], 0f);
	VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[2], 0f);
	VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[0], 0f);
	VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[1], 0f);
	return 1;
}

int func_775(char[4] cParam0)
{
	if (!__LIB_0__::func_71(Local_236[6 /*4*/].f_1))
	{
		PED::_SET_PED_ON_MOUNT(Local_236[6 /*4*/].f_1, func_1267(6), -1, true);
	}
	if (!__LIB_0__::func_71(Local_236[20 /*4*/].f_1))
	{
		PED::_SET_PED_ON_MOUNT(Local_236[20 /*4*/].f_1, func_1267(20), -1, true);
	}
	if (!__LIB_0__::func_71(Local_236[14 /*4*/].f_1))
	{
		PED::_SET_PED_ON_MOUNT(Local_236[14 /*4*/].f_1, func_1267(14), -1, true);
	}
	ENTITY::SET_ENTITY_INVINCIBLE(func_1267(6), false);
	ENTITY::SET_ENTITY_INVINCIBLE(func_1267(14), false);
	ENTITY::SET_ENTITY_INVINCIBLE(func_1267(20), false);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(func_1267(6), true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(func_1267(14), true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(func_1267(20), true);
	func_1268(cParam0, 1, 0);
	if (!__LIB_0__::func_266(Local_236[20 /*4*/].f_2, func_1266(2, 21), 20f, 1, 1))
	{
		func_1270(Local_236[20 /*4*/].f_2, func_235(2, 21), 2, 1073741824 /* Float: 2f */);
	}
	if (!__LIB_0__::func_266(Local_236[14 /*4*/].f_2, func_1266(2, 15), 20f, 1, 1))
	{
		func_1270(Local_236[14 /*4*/].f_2, func_235(2, 15), 2, 1073741824 /* Float: 2f */);
	}
	if (!func_896(cParam0, 26))
	{
		return 0;
	}
	func_482(15);
	func_1271();
	func_1257();
	if (func_175(3))
	{
		func_482(3);
	}
	if (!MAP::DOES_BLIP_EXIST(iLocal_394))
	{
		iLocal_394 = __LIB_8__::func_778(joaat("BLIP_STYLE_PLAYER_COACH"), PED::GET_VEHICLE_PED_IS_USING(Local_236[4 /*4*/].f_1), 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_394, "MUD1_BLIP_CARAVAN");
		MAP::_BLIP_SET_MODIFIER(iLocal_394, -401963276);
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[15]))
	{
		iLocal_395[15] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1052.283f, 439.5428f, 59.0389f, 0f, 0f, -16f, 170f, 45f, 200f, "Cross River Container");
	}
	__LIB_1__::func_148(&uLocal_594);
	AUDIO::_0x2B9C37C01BF25EDB("Approach_River");
	if (!__LIB_0__::func_266(Local_236[6 /*4*/].f_2, -1047.169f, 404.5631f, 52.4851f, 2.5f, 1, 1))
	{
		TASK::CLEAR_PED_TASKS(Local_236[6 /*4*/].f_1, true, false);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_236[6 /*4*/].f_2, -1047.169f, 404.5631f, 52.4851f, 1f, -1, 0.25f, 0, -89.41f);
	}
	iLocal_580 = func_1273(iLocal_423[4], joaat("S_CVAN_CHEST02"));
	iLocal_582 = func_1273(iLocal_423[4], joaat("P_MILKCAN01X"));
	iLocal_581 = func_1273(iLocal_423[4], joaat("P_BASKETINDIAN03X"));
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_423[4], false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_423[3], false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_423[2], false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_423[1], false);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_423[0], false);
	AITRANSPORT::_0xBA8818212633500A(iLocal_423[4], 7, 1);
	if (AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_236[1 /*4*/].f_1))
	{
		AUDIO::STOP_PED_SPEAKING(Local_236[1 /*4*/].f_1, false);
	}
	if (AUDIO::IS_AMBIENT_SPEECH_DISABLED(Local_236[7 /*4*/].f_1))
	{
		AUDIO::STOP_PED_SPEAKING(Local_236[7 /*4*/].f_1, false);
	}
	func_1252(1);
	StringCopy(&Local_548, "camera_treatments", 64);
	StringCopy(&(Local_548.f_8), "MUD1_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	__LIB_9__::func_208(cParam0, "MUD1_LMT_OBJ2", 0, 7500, 1, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	return 1;
}

int func_776(char[4] cParam0)
{
	func_1275(cParam0);
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_236[18 /*4*/].f_1, iLocal_423[1]))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_236[18 /*4*/].f_1, iLocal_423[1], 0, -0.15f, -1.35f, 1.145f, 0f, 0f, 172.5f, false, false, false, false, 2, true, false, false);
	}
	func_1257();
	func_1276();
	if (!func_175(15))
	{
		func_1277(cParam0);
	}
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	if (!Local_115[3 /*24*/].f_1)
	{
		if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_423[3], iLocal_395[4], true, 0))
		{
			Local_115[3 /*24*/].f_1 = 1;
			Local_115[3 /*24*/] = 0;
			Local_115[4 /*24*/] = 0;
			__LIB_8__::func_711(cParam0, "MUD1_S2_CHARLES", 0);
		}
	}
	else
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_423[3], 6.5f, -1, false);
	}
	func_1268(cParam0, 1, 0);
	if (!Local_115[4 /*24*/])
	{
		VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[iLocal_59], 6f);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395[15]) && !__LIB_1__::func_205(Global_35, iLocal_395[15], 1, 0))
			{
				__LIB_9__::func_156(cParam0, "MUD1_FAIL_CARA", "", 1, 0);
			}
			__LIB_9__::func_910(cParam0, Local_236[1 /*4*/].f_1, "MUD1_WARN_WAGON", "MUD1_FAIL_WAGON", 40f, 75f, 0, 1, 1, joaat("BLIP_STYLE_COMPANION"), 1);
			if (!bLocal_613 && __LIB_0__::func_266(Global_35, -1039.32f, 437.2386f, 53.6567f, 22f, 1, 1))
			{
				AUDIO::_0x0D7FD6A55FD63AEF(11, 3, false);
				func_1252(0);
				bLocal_613 = true;
			}
			if (ENTITY::IS_ENTITY_IN_VOLUME(iLocal_423[4], iLocal_395[0], true, 0) && AUDIO::_0x4AD019591E94C064("AXLE_CRACK", iLocal_423[4], 0, -2))
			{
				PAD::SET_PAD_SHAKE(0, 250, 64);
				VEHICLE::_0x850CE59DEC2028F3(iLocal_423[4], 1);
				VEHICLE::_0x0355FE37240E2C77(iLocal_423[4], 0f);
				VEHICLE::_0xC372B6A88F6E4AD8(iLocal_423[4], 4, 99f);
				AUDIO::_PLAY_SOUND_FROM_ENTITY("AXLE_CRACK", iLocal_423[4], "MUD1_Sounds", false, 0, 0);
				AUDIO::_0x2B9C37C01BF25EDB("Wagon_Breaks_Down");
				AUDIO::_0x0D7FD6A55FD63AEF(11, 3, false);
				func_1252(0);
				TASK::TASK_LOOK_AT_COORD(Global_35, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[4], -2f, -1f, 0f), -1, 1024, 51, 1);
				TASK::TASK_LOOK_AT_COORD(Local_236[7 /*4*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[4], -2f, -1f, 0f), -1, 1024, 51, 1);
				if (CAM::_0xDD0B7C5AE58F721D(&Local_548) && !CAM::_0x927B810E43E99932(&Local_548))
				{
					CAM::_0xB8B207C34285E978(&Local_548);
				}
				__LIB_6__::func_876(cParam0, 1);
			}
			break;
		case 1:
			CAM::_0x8370D34BD2E60B73();
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395[15]) && !__LIB_1__::func_205(Global_35, iLocal_395[15], 1, 0))
			{
				__LIB_9__::func_156(cParam0, "MUD1_FAIL_CARA", "", 1, 0);
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_423[4], -1024.887f, 443.3495f, 55.1163f, -1042.163f, 416.0032f, 58.3384f, 8f, false, true, 0))
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[4], 2f);
			}
			if ((ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_395[12], true, 0) && !__LIB_0__::func_266(Global_35, -1019.938f, 429.3936f, 56.07657f, 9f, 1, 1)) && AUDIO::_0x4AD019591E94C064("AXLE_BREAK", iLocal_423[4], 0, -2))
			{
				__LIB_0__::func_325(&iLocal_394);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_423[4], 3f, 4, false);
				PAD::SET_PAD_SHAKE(0, 1000, 64);
				AUDIO::_STOP_SOUND_WITH_NAME("AXLE_CRACK", 0);
				AUDIO::_PLAY_SOUND_FROM_ENTITY("AXLE_BREAK", iLocal_423[4], "MUD1_Sounds", false, 0, 0);
				AUDIO::_0x2B9C37C01BF25EDB("Wheel_Falls_Off");
				__LIB_1__::func_148(&uLocal_60);
				iLocal_422 = VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iLocal_423[4], 4);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_422, true);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_422, 5, 100f, 140f, 25f, false, false, true, false);
				__LIB_2__::func_919(iLocal_422, 1, 1);
				__LIB_2__::func_919(iLocal_581, 1, 1);
				__LIB_2__::func_919(iLocal_580, 1, 1);
				__LIB_2__::func_919(iLocal_582, 1, 1);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_581, 0, 60f, 65f, 50f, false, false, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_580, 0, 50f, 95f, 50f, false, false, true, false);
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_582, 5, 80f, 15f, 50f, false, false, true, false);
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				STATS::_0x025E98E317652CDD(2);
				__LIB_9__::func_60(cParam0, 2);
				__LIB_6__::func_876(cParam0, 2);
			}
			break;
		case 2:
			CAM::_0x8370D34BD2E60B73();
			CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
			if (__LIB_0__::func_48(iLocal_581, iLocal_423[4], 3.75f, 1))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_581, 0, 0.5f, 0.75f, 0f, false, false, true, false);
			}
			if (!__LIB_0__::func_48(iLocal_581, iLocal_423[4], 4f, 1))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_581, true);
			}
			if (__LIB_0__::func_48(iLocal_422, iLocal_423[4], 4.5f, 1))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(iLocal_422, 0, 8.6f, 12.8f, 0f, false, false, true, false);
			}
			if (func_1284(12, 1) == 3)
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_423[4], 0.5f, -1, false);
				TASK::TASK_CLEAR_LOOK_AT(Global_35);
				func_1285();
				TASK::TASK_LOOK_AT_COORD(Local_236[4 /*4*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[4], -2f, -1f, 0f), -1, 1024, 51, 1);
				__LIB_6__::func_876(cParam0, 3);
			}
			else
			{
				Jump @1525; //curOff = 1347
				func_481(15);
				CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
				UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
				if (((!__LIB_0__::func_163(Local_236[6 /*4*/].f_1, 242628503) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_470[10 /*4*/], false)) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_470[10 /*4*/]) > 0.5f) && !func_175(14))
				{
					func_481(14);
					PHYSICS::_0xBDDA142759307528(Global_35);
				}
				if (!__LIB_0__::func_163(Local_236[6 /*4*/].f_1, 242628503) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_470[10 /*4*/]) > 0.615f)
				{
					func_1287(6);
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(Local_470[10 /*4*/]))
				{
					func_1288(cParam0);
					return 1;
				}
			}
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[3], 4.5f);
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[2], 4.5f);
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[0], 4.5f);
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[1], 4.5f);
			return 0;
			default:
				break;
	}
}

int func_777(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_423[iLocal_55]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_423[iLocal_55], false);
	}
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395[15]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_395[15]);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_581, false);
	CAM::_0x8370D34BD2E60B73();
	AUDIO::_STOP_SOUND_WITH_NAME("WHEEL_BREAK", 0);
	CAM::_0x0A5A4F1979ABB40E(&Local_548);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	Local_115[4 /*24*/] = 1;
	return 1;
}

int func_778(var uParam0)
{
	func_1289();
	func_1246(6);
	VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[4], 0.75f);
	return 1;
}

int func_779(char[4] cParam0)
{
	if (!func_1290(cParam0))
	{
		return 0;
	}
	CAM::_0x1CFB749AD4317BDE();
	VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[4], 0f);
	STREAMING::_REQUEST_MOVE_NETWORK_DEF(func_424(1));
	STREAMING::REQUEST_ANIM_DICT(func_424(0));
	WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	func_1252(0);
	if (__LIB_6__::func_872(cParam0, 8388608))
	{
		func_1291();
	}
	STATS::_0x025E98E317652CDD(0);
	MAP::DISPLAY_RADAR(false);
	return 1;
}

int func_780(char[4] cParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	struct<31> Var6;
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_236[1 /*4*/].f_1, false))
	{
		PED::_0xE0B61ED8BB37712F(Local_236[1 /*4*/].f_1);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_236[7 /*4*/].f_1, false))
	{
		PED::_0xE0B61ED8BB37712F(Local_236[7 /*4*/].f_1);
	}
	if (!ENTITY::_IS_ENTITY_FROZEN(iLocal_423[4]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_423[4], true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_423[4], false, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_581))
	{
		iLocal_581 = func_1273(iLocal_423[4], joaat("P_BASKETINDIAN03X"));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_580))
	{
		iLocal_580 = func_1273(iLocal_423[4], joaat("S_CVAN_CHEST02"));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_582))
	{
		iLocal_582 = func_1273(iLocal_423[4], joaat("P_MILKCAN01X"));
	}
	ENTITY::SET_ENTITY_COORDS(iLocal_580, -1026.904f, 431.7408f, 54.68363f, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_580, -1.584932f, -4.4032f, -53.33095f, 2, true);
	ENTITY::SET_ENTITY_COORDS(iLocal_581, -1027.546f, 432.7314f, 54.85194f, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_581, 105.2488f, -44.61454f, -131.4138f, 2, true);
	ENTITY::SET_ENTITY_COORDS(iLocal_582, -1026.644f, 432.9208f, 54.88229f, true, false, true, true);
	ENTITY::SET_ENTITY_ROTATION(iLocal_582, 160.2384f, 81.51066f, -43.23115f, 2, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_581, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_580, true);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_582, true);
	func_1292(cParam0);
	__LIB_9__::func_53(cParam0);
	func_482(15);
	__LIB_8__::func_711(cParam0, "MUD1_IG10", 0);
	vVar0 = { -1027.05f, 429.5f, 55.85f };
	vLocal_666 = { -0.924938f, 0.380117f, 0f };
	vLocal_663 = { -0.380117f, -0.924938f, 0f };
	vLocal_669 = { 0f, 0f, 157.659f };
	vVar3 = { vLocal_669 };
	vVar3.x = vVar3.x;
	vVar3.f_1 = 0f;
	vVar3.f_2 = (vVar3.z + 180f);
	ENTITY::SET_ENTITY_ROTATION(iLocal_422, vVar3, 2, false);
	vLocal_660 = { vVar0 - vLocal_666 * Vector(0.325f, 0.325f, 0.325f) - vLocal_663 * Vector(0.5f, 0.5f, 0.5f) };
	ENTITY::SET_ENTITY_COORDS(iLocal_422, vLocal_660, false, false, true, true);
	Var6.f_6 = -1082130432;
	Var6.f_9 = -1082130432;
	Var6.f_30 = func_424(2);
	ENTITY::SET_ENTITY_COLLISION(Global_35, false, false);
	TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, func_424(1), &Var6, vLocal_583, vLocal_586, 2, 0, 0, 0, 128, 0);
	PED::SET_PED_LEG_IK_MODE(Global_35, 0);
	ENTITY::SET_ENTITY_COLLISION(iLocal_422, false, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_422, Global_35, PED::GET_PED_BONE_INDEX(Global_35, 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
	func_1294(1, 1028443341 /* Float: 0.05f */, 0);
	PED::_0x2208438012482A1A(Global_35, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_423[4], 1.401298E-45f);
	ENTITY::_0x9587913B9E772D29(Local_236[1 /*4*/].f_1, 0);
	ENTITY::_0x9587913B9E772D29(Local_236[7 /*4*/].f_1, 0);
	AUDIO::_0x2B9C37C01BF25EDB("Fix_Wheel");
	MISC::SET_BIT(&(Global_1956580.f_1), 4);
	__LIB_6__::func_888(6);
	__LIB_1__::func_197(6, 1, 1, 1, 0);
	__LIB_6__::func_888(1);
	__LIB_1__::func_197(1, 1, 1, 1, 0);
	__LIB_6__::func_888(11);
	__LIB_1__::func_197(11, 1, 1, 1, 0);
	__LIB_6__::func_888(9);
	__LIB_1__::func_197(9, 1, 1, 1, 0);
	__LIB_6__::func_888(14);
	__LIB_1__::func_197(14, 1, 1, 1, 0);
	CAM::_0xE296208C273BD7F0(0, 1000, 0, 17, 1, 0);
	__LIB_4__::func_896(0);
	__LIB_0__::func_573();
	PAD::_SET_CONTROL_CONTEXT(5, joaat("MUDTOWN1WHEELFIXING"));
	return 1;
}

int func_781(char[4] cParam0)
{
	CAM::_0x8459B3E64257B21D(0f);
	func_1296(cParam0);
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			uLocal_451 = uLocal_451;
			if (func_1297())
			{
				__LIB_0__::func_105(1);
				return 1;
			}
			break;
	}
	return 0;
}

int func_782(var uParam0)
{
	MISC::CLEAR_BIT(&(Global_1956580.f_1), 4);
	__LIB_0__::func_105(1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_423[4], false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_423[4], true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_236[7 /*4*/].f_1, false);
	ENTITY::SET_ENTITY_COLLISION(Local_236[7 /*4*/].f_1, true, false);
	ENTITY::FREEZE_ENTITY_POSITION(Local_236[1 /*4*/].f_1, false);
	ENTITY::SET_ENTITY_COLLISION(Local_236[1 /*4*/].f_1, true, false);
	HUD::_DISPLAY_HUD_COMPONENT(372886907);
	if (CAM::DOES_CAM_EXIST(iLocal_672))
	{
		CAM::SET_CAM_ACTIVE(iLocal_672, false);
		CAM::DESTROY_CAM(iLocal_672, false);
	}
	__LIB_4__::func_896(1);
	__LIB_11__::func_218();
	MAP::DISPLAY_RADAR(true);
	return 1;
}

int func_783(char[4] cParam0)
{
	if (!func_1298())
	{
		return 0;
	}
	VEHICLE::REQUEST_VEHICLE_ASSET(joaat("WAGON02X"), 2);
	if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("WAGON02X")))
	{
		return 0;
	}
	func_1246(6);
	func_879(Local_236[7 /*4*/].f_1, -1027.724f, 431.9522f, 54.6845f, 144.6371f, 2, 1073741824 /* Float: 2f */);
	VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[4], 0.5f);
	if (__LIB_6__::func_872(cParam0, 8388608))
	{
		func_1299(1, cParam0);
	}
	return 1;
}

bool func_784(char[4] cParam0)
{
	VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[4], 0f);
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[4 /*4*/].f_1))
	{
		__LIB_11__::func_379(cParam0, Local_236[4 /*4*/].f_1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[6 /*4*/].f_1))
	{
		__LIB_11__::func_379(cParam0, Local_236[6 /*4*/].f_1);
	}
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		func_879(Global_35, -1026.713f, 429.1583f, 55.0965f, 174.9928f, 2, 1073741824 /* Float: 2f */);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_423[4], false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_422, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_422, true, false);
		OBJECT::_0xF9C1681347C8BD15(iLocal_422);
	}
	__LIB_9__::func_60(cParam0, 0);
	__LIB_9__::func_139(cParam0, Local_236[11 /*4*/].f_1);
	if (!ENTITY::IS_ENTITY_DEAD(Local_236[11 /*4*/].f_1))
	{
		func_479(cParam0, 11, 1, 1);
	}
	func_1252(0);
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[7 /*4*/].f_1) && ENTITY::_IS_ENTITY_FROZEN(Local_236[7 /*4*/].f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_236[7 /*4*/].f_1, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[1 /*4*/].f_1) && ENTITY::_IS_ENTITY_FROZEN(Local_236[1 /*4*/].f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_236[1 /*4*/].f_1, false);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_581))
	{
		iLocal_581 = func_1273(iLocal_423[4], joaat("P_BASKETINDIAN03X"));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_580))
	{
		iLocal_580 = func_1273(iLocal_423[4], joaat("S_CVAN_CHEST02"));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_582))
	{
		iLocal_582 = func_1273(iLocal_423[4], joaat("P_MILKCAN01X"));
	}
	ENTITY::SET_ENTITY_COLLISION(iLocal_581, false, false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_580, false, false);
	ENTITY::SET_ENTITY_COLLISION(iLocal_582, false, false);
	STATS::_0x025E98E317652CDD(0);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_785(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	func_896(cParam0, 26);
	if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Global_35))
	{
		ENTITY::SET_ENTITY_COLLISION(Global_35, true, false);
	}
	if (!func_893(cParam0))
	{
		return false;
	}
	if (!PED::_0x91A5F9CBEBB9D936(uLocal_449))
	{
		uLocal_449 = func_1301(iLocal_395[1], 24576, 1081352);
	}
	func_1302(cParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_423[4], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_423[4], false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_423[4], true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_422))
		{
			ENTITY::SET_ENTITY_VISIBLE(iLocal_422, true);
		}
		ENTITY::SET_ENTITY_COLLISION(Local_236[7 /*4*/].f_1, true, false);
		__LIB_9__::func_62(cParam0, iLocal_423[4], "wagon02x", 0, 0, 0, 0);
		VEHICLE::_0x7C06330BFDDA182E(iLocal_423[4]);
	}
	func_482(15);
	func_1299(1, cParam0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-20.5f, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
	iVar0 = PED::GET_PED_GROUP_INDEX(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	PED::SET_GROUP_FORMATION(iVar0, 5);
	PED::ADD_FORMATION_LOCATION(iVar0, -3f, -15f, 0f);
	PED::ADD_FORMATION_LOCATION(iVar0, 3f, -15f, 0f);
	iVar1 = 0;
	while (iVar1 < Local_14.f_27)
	{
		__LIB_2__::func_426(&(Local_14.f_27[iVar1]));
		iVar1++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Global_35, false);
	}
	if (!PAD::IS_CONTROL_ENABLED(0, joaat("INPUT_SKIP_CUTSCENE")))
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), true);
	}
	__LIB_9__::func_53(cParam0);
	__LIB_6__::func_868(cParam0, 33554432);
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[16]))
	{
		iLocal_395[16] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1082.364f, 245.6042f, 57.024f, 0f, 0f, -11f, 65f, 385f, 90f, "Cross River Container - First turn");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[17]))
	{
		iLocal_395[17] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1112.924f, 137.2461f, 63.34439f, 0f, 0f, 98.00003f, 394f, 97f, 250f, "Cross River Container - Straight Road");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[18]))
	{
		iLocal_395[18] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-694.466f, 169.5028f, 63.34439f, 0f, 0f, 31.75f, 773f, 115f, 253f, "Cross River Container - River Road");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[19]))
	{
		iLocal_395[19] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-341.1602f, 191.9663f, 63.34439f, 0f, 0f, 69.00002f, 597f, 475f, 350f, "Cross River Container - Overlook Hill");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[20]))
	{
		iLocal_395[20] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-158.1235f, 100.307f, 22.43598f, 0f, 0f, 7.999999f, 252f, 429f, 123f, "Cross River Container - Overlook Camp");
	}
	MISC::_0x2FCD528A397E5C88(iLocal_395[16], 1114168);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_395[16], 24576, 2016, 0, -1, -1, 0);
	__LIB_9__::func_364(iLocal_395[17], 0, 548864, 2016);
	MISC::_0x2FCD528A397E5C88(iLocal_395[17], 1114168);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_395[17], 24576, 2016, 0, -1, -1, 0);
	MISC::_0x2FCD528A397E5C88(iLocal_395[18], 1114168);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_395[18], 24576, 2016, 0, -1, -1, 0);
	MISC::_0x2FCD528A397E5C88(iLocal_395[19], 1114168);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_395[19], 24576, 2016, 0, -1, -1, 0);
	__LIB_2__::func_596(Local_236[7 /*4*/].f_1, iLocal_423[4], 5, 1065353216 /* Float: 1f */, -1, 1);
	__LIB_1__::func_148(&uLocal_63);
	StringCopy(&Local_548, "camera_treatments", 64);
	StringCopy(&(Local_548.f_8), "MUD1_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	CAM::_0x6A4D224FC7643941(&Local_548);
	CLOCK::PAUSE_CLOCK(true, 0);
	AUDIO::_0x2B9C37C01BF25EDB("Go_Horseshoe_Overlook");
	__LIB_0__::func_37(&uLocal_594);
	POPULATION::_0xC6DCC2A3A8825C85(1);
	VEHICLE::_0x27E3F2B57209FA54(iLocal_423[4], 1);
	if (__LIB_6__::func_872(cParam0, 4) || __LIB_6__::func_872(cParam0, 8388608))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_581))
		{
			iLocal_581 = func_1273(iLocal_423[4], joaat("P_BASKETINDIAN03X"));
		}
	}
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_581, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_582, false);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_580, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_580, iLocal_423[4], 14, -0.05f, -1.46f, 0.675f, 1f, 0.5f, 90.5f, true, true, false, false, 2, true, false, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_581, iLocal_423[4], 14, -0.05f, -0.97f, 1.275f, 0f, -90.5f, 90.5f, true, true, false, false, 2, true, false, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_582, iLocal_423[4], 14, -0.95f, -1.85f, 0.79f, 0f, 0f, 0.5f, true, true, false, false, 2, true, false, false);
	__LIB_17__::func_742(Local_14.f_25);
	__LIB_6__::func_888(6);
	__LIB_1__::func_197(6, 1, 1, 1, 0);
	__LIB_6__::func_888(1);
	__LIB_1__::func_197(1, 1, 1, 1, 0);
	__LIB_6__::func_888(11);
	__LIB_1__::func_197(11, 1, 1, 1, 0);
	__LIB_6__::func_888(9);
	__LIB_1__::func_197(9, 1, 1, 1, 0);
	__LIB_6__::func_888(14);
	__LIB_1__::func_197(14, 1, 1, 1, 0);
	AITRANSPORT::_0xBA8818212633500A(iLocal_423[4], 7, 1);
	__LIB_4__::func_517(0);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_236[7 /*4*/].f_1, 1);
	__LIB_0__::func_37(&uLocal_597);
	__LIB_11__::func_564(1);
	func_187(0);
	func_1306(1);
	STREAMING::_REQUEST_IMAP(1948051928);
	if (STREAMING::_IS_IMAP_ACTIVE(-855912354) == 0)
	{
		STREAMING::_REQUEST_IMAP(-855912354);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(-402976431) == 0)
	{
		STREAMING::_REQUEST_IMAP(-402976431);
	}
	VEHICLE::_0x13EB275BF81636D1(iLocal_423[4], 0);
	__LIB_9__::func_142(cParam0, "MUD1_GTO_OBJ1", -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	__LIB_9__::func_208(cParam0, "MUD1_GTO_OBJ1", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
	func_1252(1);
	func_182(0);
	return cParam0->f_607 == cParam0->f_607;
}

int func_786(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_1307(cParam0);
	func_1308(__LIB_6__::func_889(cParam0));
	if ((bLocal_677 && !bLocal_678) && !__LIB_2__::func_453())
	{
		if (!__LIB_0__::func_75(&uLocal_597))
		{
			__LIB_1__::func_283(&uLocal_597, 0);
			ATTRIBUTE::_SET_CORE_ICON(2);
		}
		if (__LIB_1__::func_871(&uLocal_597) > 1250)
		{
			__LIB_1__::func_148(&uLocal_597);
			__LIB_0__::func_45("MUD1_HOT_HLP", 5000, 0, 0, 0, 1);
			func_481(16);
			bLocal_678 = true;
		}
	}
	if ((bLocal_678 && !bLocal_679) && __LIB_1__::func_871(&uLocal_597) > 6000)
	{
		__LIB_0__::func_45("MUD1_HOT_HLP_2", 5000, 0, 0, 0, 1);
		__LIB_0__::func_37(&uLocal_597);
		func_482(16);
		bLocal_679 = true;
	}
	if ((((!bLocal_392 && bLocal_676) && ENTITY::DOES_ENTITY_EXIST(iLocal_423[4])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_423[4], false, false)) && !PED::IS_PED_IN_VEHICLE(Local_236[7 /*4*/].f_1, iLocal_423[4], true))
	{
		if (!__LIB_0__::func_163(Local_236[7 /*4*/].f_1, -1794415470))
		{
			TASK::TASK_ENTER_VEHICLE(Local_236[7 /*4*/].f_1, iLocal_423[4], -1, 5, 2f, 1, 0);
		}
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		func_196(func_195(2), 1);
	}
	else
	{
		func_196(func_195(2), 0);
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[4], false) && !__LIB_0__::func_266(Global_35, func_1266(5, 27), 40f, 1, 1))
	{
		func_1309();
	}
	if (!func_175(15))
	{
		func_1277(cParam0);
		if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[4], false))
		{
			if (((((!__LIB_1__::func_205(Global_35, iLocal_395[16], 1, 0) && !__LIB_1__::func_205(Global_35, iLocal_395[18], 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_395[17], 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_395[19], 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_395[18], 1, 0)) && !__LIB_1__::func_205(Global_35, iLocal_395[20], 1, 0))
			{
				__LIB_9__::func_156(cParam0, "MUD1_FAIL_ROUTE", "", 1, 0);
			}
		}
	}
	func_1310(cParam0);
	PED::SET_PED_RESET_FLAG(Global_35, 154, true);
	func_1311();
	func_1312(cParam0);
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[4], true))
	{
		func_1313();
	}
	if (!__LIB_0__::func_266(Global_35, func_1266(5, 27), 75f, 1, 1) && !__LIB_0__::func_266(Global_35, -1029.391f, 426.6253f, 55.436f, 18f, 1, 1))
	{
		func_1314(cParam0);
	}
	if ((!func_1315(12) && __LIB_0__::func_266(Global_35, func_1266(5, 27), 500f, 1, 1)) && func_1316())
	{
		if (func_894(cParam0, 1) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_593))
		{
			POPULATION::_0xB56D41A694E42E86(iLocal_395[13], 2048, 0, joaat("SPECIES_HORSE"), joaat("ANIMAL_HORSE"), -1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_236[18 /*4*/].f_1, true);
			TASK::_TASK_USE_SCENARIO_POINT(Local_236[18 /*4*/].f_1, iLocal_593, 0, -1, false, true, 0, false, -1f, false);
			func_1317();
		}
	}
	if (__LIB_0__::func_266(Global_35, func_1266(5, 27), 425f, 1, 1))
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < 21)
		{
			if (!__LIB_0__::func_272(Local_236[iVar1 /*4*/].f_1, 1))
			{
			}
			else
			{
				iVar0 = func_1318(iVar1);
				if (iVar0 == 27)
				{
				}
				else if (!ENTITY::IS_ENTITY_VISIBLE(Local_236[iVar1 /*4*/].f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_236[iVar1 /*4*/].f_1, true);
				}
			}
			iVar1++;
		}
	}
	if (__LIB_6__::func_889(cParam0) < 4 && __LIB_0__::func_266(Global_35, func_1266(5, 27), 100f, 1, 1))
	{
		func_1252(0);
		__LIB_6__::func_876(cParam0, 4);
	}
	switch (__LIB_6__::func_889(cParam0))
	{
		case 0:
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[4], 6.25f);
			func_1319(Local_236[1 /*4*/].f_1, 0);
			if (bLocal_676)
			{
				if (__LIB_0__::func_266(Global_35, func_1266(5, 27), 872f, 1, 1))
				{
					__LIB_11__::func_838(16);
					__LIB_1__::func_557(12, 99f);
					bLocal_677 = true;
					func_482(15);
					__LIB_6__::func_876(cParam0, 3);
				}
			}
			break;
		case 3:
			if (!func_175(15))
			{
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[4], 6.25f);
			}
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("mudtown1_HorseShoeGPSRoute", __LIB_1__::func_974(PLAYER::PLAYER_ID()), &iVar2);
			if (iVar2 > 182)
			{
				iVar2 = 182;
			}
			TASK::WAYPOINT_RECORDING_GET_COORD("mudtown1_HorseShoeGPSRoute", iVar2, &vVar3);
			if (((__LIB_8__::func_618(cParam0) == 13 && !AUDIO::_0xA2CAC9DEF0195E6F(0)) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_384, false)) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(iLocal_384, false))
			{
				func_1323();
				if (__LIB_0__::func_266(iLocal_423[4], vVar3, 25f, 1, 0) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_386, false))
				{
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_386, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_386, iLocal_423[4], ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_423[4], "seat_dside_f"));
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_386, "player", Global_35, 0);
					ANIMSCENE::START_ANIM_SCENE(iLocal_386);
					func_481(15);
				}
				STATS::_0x025E98E317652CDD(2);
			}
			if (func_175(15))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_384, false) && ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(iLocal_384) >= 0.045f)
				{
					CAM::_0xE296208C273BD7F0(2500, -1, 0, 17, 1, 0);
					CAM::_0x718C6ECF5E8CBDD4();
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					}
					if (ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) > 0.25f && !func_1324())
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_35, iLocal_423[4], func_195(2), 0, iVar2 + 1, 16400, -1, 5.5f, 0, 1073741824 /* Float: 2f */, 0);
					}
				}
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_386, false) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 1186194267))
				{
					func_1246(8);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					__LIB_1__::func_148(&uLocal_594);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_423[4], true);
					func_1325("mudtown1_HorseShoeGPSRoute", iVar2);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
					__LIB_7__::func_518(1);
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_470[13 /*4*/]) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_470[13 /*4*/], false))
					{
						__LIB_3__::func_319(Local_470[13 /*4*/]);
					}
					func_481(11);
					__LIB_1__::func_148(&uLocal_594);
				}
			}
			if (func_175(11) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_384, false))
			{
				VEHICLE::_0xFF2B1F59FB892F14(iLocal_423[4]);
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_423[4], func_195(2)))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 5.5f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Global_35, iLocal_423[4], func_195(2), 0, iVar2 + 1, 32, -1, 5.5f, 0, 1073741824 /* Float: 2f */, 0);
				}
			}
			if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_386, false))
			{
				if (!MISC::IS_BIT_SET(Global_1956580.f_1, 5))
				{
					MISC::SET_BIT(&(Global_1956580.f_1), 5);
				}
			}
			if (!func_175(15) && ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_384))
			{
				func_329(joaat("CONSUMABLE_HERB_GINSENG"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_329(joaat("CONSUMABLE_HERB_YARROW"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
				__LIB_0__::func_37(&uLocal_594);
				__LIB_1__::func_148(&uLocal_597);
				__LIB_9__::func_60(cParam0, 4);
				func_482(15);
				__LIB_0__::func_45("MUD1_HERB_HLP", 7500, 0, 0, 0, 1);
				func_481(16);
				func_1252(0);
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				}
				CLOCK::PAUSE_CLOCK(false, 0);
				STATS::_0x025E98E317652CDD(0);
				__LIB_6__::func_876(cParam0, 4);
			}
			if (func_175(15) && (ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_384) || ANIMSCENE::_IS_ANIM_SCENE_ACTIVE(iLocal_386)))
			{
				func_1246(8);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 6f);
				func_329(joaat("CONSUMABLE_HERB_GINSENG"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
				func_329(joaat("CONSUMABLE_HERB_YARROW"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
				__LIB_1__::func_148(&uLocal_594);
				__LIB_1__::func_148(&uLocal_597);
				__LIB_9__::func_60(cParam0, 4);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_423[4], false);
				func_482(15);
				__LIB_0__::func_45("MUD1_HERB_HLP", 7500, 0, 0, 0, 1);
				func_481(16);
				func_1252(0);
				STATS::_0x025E98E317652CDD(0);
				__LIB_6__::func_876(cParam0, 4);
			}
			break;
		case 4:
			__LIB_3__::func_319(iLocal_386);
			if (MISC::IS_BIT_SET(Global_1956580.f_1, 5))
			{
				MISC::CLEAR_BIT(&(Global_1956580.f_1), 5);
			}
			if (!__LIB_4__::func_257(iLocal_423[4]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Global_35, 0) || TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_423[4], 0))
				{
					TASK::CLEAR_PED_TASKS(Global_35, false, false);
				}
				if (__LIB_0__::func_75(&uLocal_594) && __LIB_1__::func_871(&uLocal_594) <= 2000)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 7f);
				}
				if (__LIB_0__::func_266(Global_35, func_1266(5, 27), 8f, 1, 1))
				{
					func_1328(1);
					if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_423[4], 6.5f, -1, true);
						STATS::_0x025E98E317652CDD(2);
					}
					if (VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]) && ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) < 0.6f)
					{
						ENTITY::SET_ENTITY_VELOCITY(iLocal_423[4], 0f, 0f, 0f);
						STATS::_0x025E98E317652CDD(2);
					}
				}
				if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_395[14], true, 0) && !__LIB_0__::func_266(Global_35, func_1266(5, 27), 9f, 1, 1))
				{
					func_1328(1);
					if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_423[4], 6.5f, -1, true);
						STATS::_0x025E98E317652CDD(2);
					}
					if (VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]) && ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) < 0.6f)
					{
						ENTITY::SET_ENTITY_VELOCITY(iLocal_423[4], 0f, 0f, 0f);
						STATS::_0x025E98E317652CDD(2);
					}
				}
				if (((__LIB_0__::func_266(Global_35, func_1266(5, 27), 14f, 1, 1) || __LIB_0__::func_266(Global_35, -118.045f, -35.62372f, 88.08789f, 85f, 1, 1)) || ENTITY::IS_ENTITY_IN_VOLUME(Global_35, iLocal_395[14], true, 0)) && VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]))
				{
					if (!bLocal_392)
					{
						if (((func_1315(12) && !func_1329(12)) && VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4])) && ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) <= 0.8f)
						{
							AUDIO::_0x2B9C37C01BF25EDB("Arrive_At_Camp");
							STATS::_0x025E98E317652CDD(2);
							func_1330(12, 1, "Loop");
							bLocal_392 = true;
						}
					}
					else
					{
						CAM::_0xE296208C273BD7F0(3500, -1, 0, 17, 1, 0);
						if ((func_1331(12, 0.775f) && __LIB_2__::func_343(Local_236[7 /*4*/].f_1, iLocal_423[4], 0)) && !__LIB_0__::func_163(Local_236[7 /*4*/].f_1, joaat("SCRIPT_TASK_LEAVE_VEHICLE")))
						{
							TASK::TASK_LEAVE_VEHICLE(Local_236[7 /*4*/].f_1, iLocal_423[4], 0, 0);
						}
						if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_470[12 /*4*/], false) || func_1331(12, 0.99f))
						{
							ENTITY::SET_ENTITY_VELOCITY(iLocal_423[4], 0f, 0f, 0f);
							func_1288(cParam0);
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_787(char[4] cParam0)
{
	int iVar0;
	cParam0->f_607 = cParam0->f_607;
	func_1313();
	__LIB_0__::func_325(&iLocal_394);
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	MAP::CLEAR_GPS_CUSTOM_ROUTE();
	AUDIO::SET_GPS_ACTIVE(false);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395[16]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_395[16]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395[19]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_395[19]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395[20]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_395[20]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395[18]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_395[18]);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_395[17]))
	{
		VOLUME::_DELETE_VOLUME(iLocal_395[17]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[iLocal_87 /*4*/].f_1))
	{
		iVar0 = func_1318(iLocal_87);
		__LIB_4__::func_705(iVar0, 0);
		func_479(cParam0, iLocal_87, 0, 1);
	}
	if (STREAMING::_0xCF45DF50C7775F2A())
	{
		STREAMING::_0x5A8B01199C3E79C3();
	}
	return 1;
}

int func_788(var uParam0)
{
	if (!func_1316())
	{
		return 0;
	}
	if (STREAMING::_IS_IMAP_ACTIVE(1948051928) == 0)
	{
		STREAMING::_REQUEST_IMAP(1948051928);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(-855912354) == 0)
	{
		STREAMING::_REQUEST_IMAP(-855912354);
	}
	if (STREAMING::_IS_IMAP_ACTIVE(-402976431) == 0)
	{
		STREAMING::_REQUEST_IMAP(-402976431);
	}
	return 1;
}

int func_789(char[4] cParam0)
{
	int iVar0;
	if (ENTITY::GET_ENTITY_COLLISION_DISABLED(Local_236[7 /*4*/].f_1))
	{
		ENTITY::SET_ENTITY_COLLISION(Local_236[7 /*4*/].f_1, true, false);
	}
	iVar0 = 0;
	func_799(&iVar0, 0, 2, 0, 0, 0, 0);
	if (!func_896(cParam0, 26))
	{
		return 0;
	}
	if (!func_894(cParam0, 1))
	{
		return 0;
	}
	__LIB_6__::func_881(cParam0, 1);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_680))
	{
		iLocal_680 = __LIB_11__::func_107(-110.9474f, -29.9771f, 94.8101f, 192.6092f, 1, 1, 0, 1, 1);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_680, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_680, -110.9474f, -29.9771f, 94.8101f, 192.6092f, true, false, true);
	__LIB_5__::func_541(iLocal_680, -110.9474f, -29.9771f, 94.8101f, 8f, 1);
	func_1334(cParam0);
	func_893(cParam0);
	func_903(cParam0);
	__LIB_6__::func_888(2);
	__LIB_1__::func_197(2, 1, 1, 1, 0);
	__LIB_6__::func_888(6);
	__LIB_1__::func_197(6, 1, 1, 1, 0);
	__LIB_6__::func_888(1);
	__LIB_1__::func_197(1, 1, 1, 1, 0);
	__LIB_6__::func_888(11);
	__LIB_1__::func_197(11, 1, 1, 1, 0);
	__LIB_6__::func_888(9);
	__LIB_1__::func_197(9, 1, 1, 1, 0);
	__LIB_6__::func_888(14);
	__LIB_1__::func_197(14, 1, 1, 1, 0);
	__LIB_8__::func_665(cParam0, 1024);
	__LIB_6__::func_860(cParam0, 4);
	func_1246(9);
	GRAPHICS::_0x5199405EABFBD7F0("ChapterTitle_IntroCh02");
	if (!__LIB_6__::func_862(cParam0, 8))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_236[18 /*4*/].f_1, true);
		TASK::_TASK_USE_SCENARIO_POINT(Local_236[18 /*4*/].f_1, iLocal_593, 0, -1, false, true, 0, false, -1f, false);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	return 1;
}

int func_790(char[4] cParam0)
{
	__LIB_8__::func_719(cParam0, -1, 0);
	__LIB_0__::func_893(1);
	__LIB_0__::func_893(11);
	__LIB_0__::func_893(14);
	__LIB_0__::func_893(10);
	GRAPHICS::_0xB958D97A0DFAA0C2("ChapterTitle_IntroCh02");
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	HUD::_HIDE_HUD_COMPONENT(-1679307491);
	STATS::_0x025E98E317652CDD(2);
	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	return 1;
}

int func_791(var uParam0)
{
	var uVar0;
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE"), false);
	PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh02"))
	{
		if (GRAPHICS::_0xFBF161FCFEC8589E("ChapterTitle_IntroCh02", 2, false, &uVar0) || GRAPHICS::_0xFBF161FCFEC8589E("ChapterTitle_IntroCh02", 1, false, &uVar0))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
		}
		return 0;
	}
	else
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
	}
	GRAPHICS::_0xA201A3D0AC087C37("ChapterTitle_IntroCh02");
	return 1;
}

int func_792(var uParam0)
{
	int iVar0;
	func_1246(12);
	func_1270(Global_35, func_235(6, 0), 2, 1073741824 /* Float: 2f */);
	PHYSICS::_0x0348469DAA17576C(iLocal_680);
	PED::SET_PED_RESET_FLAG(Global_35, 129, true);
	PLAYER::_0x908D4B72854C8F62(PLAYER::GET_PLAYER_INDEX());
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	__LIB_11__::func_838(12);
	if (!__LIB_1__::func_122(6))
	{
		__LIB_1__::func_697(6, 1, 1);
	}
	__LIB_9__::func_2(Global_35, 6, 1, 1, 0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	AUDIO::_0x9428447DED71FC7E("Chapter_Screen_Scenes");
	CAM::_0xE296208C273BD7F0(0, -1, 0, 17, 1, 0);
	func_1252(0);
	__LIB_10__::func_27(0);
	iVar0 = 0;
	__LIB_5__::func_129(&iVar0, 0);
	GRAPHICS::_0x37D7BDBA89F13959("ChapterTitle_IntroCh02");
	ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
	HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	return 1;
}

void func_794(int iParam0)
{
	__LIB_1__::func_683(&iLocal_540, iParam0);
}

void func_799(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	if (Global_1935630.f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		__LIB_0__::func_145(0, 0);
		__LIB_0__::func_146(-1);
	}
	__LIB_0__::func_87(1);
	ENTITY::SET_ENTITY_INVINCIBLE(Global_35, true);
	if (!__LIB_0__::func_1(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!__LIB_0__::func_1(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!__LIB_0__::func_1(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (__LIB_0__::func_1(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!__LIB_0__::func_1(*iParam0, 32768))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam1, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 1))
	{
		PAD::_0xF239400E16C23E08(0, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 65536))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
	}
	if (!__LIB_0__::func_1(*iParam0, 4) && !__LIB_0__::func_1(*iParam0, 2))
	{
		HUD::_HIDE_HUD_COMPONENT(-1679307491);
	}
	else
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_0__::func_1(*iParam0, 2048))
	{
		__LIB_0__::func_713(0, 0);
	}
	if (__LIB_0__::func_1(*iParam0, 8))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
	}
	if (__LIB_0__::func_1(*iParam0, 256))
	{
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
	}
	if (__LIB_0__::func_1(*iParam0, 8192))
	{
		func_1342();
	}
	if (!__LIB_0__::func_1(*iParam0, 262144))
	{
		PED::SET_PED_RESET_FLAG(Global_35, 264, true);
	}
	if (!__LIB_0__::func_1(*iParam0, 512))
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 1024))
	{
		CAM::SET_CINEMATIC_MODE_ACTIVE(false);
	}
	if (iParam2 != 2)
	{
		PED::SET_PED_STEALTH_MOVEMENT(Global_35, iParam2 == 1, 0, 0);
	}
	if (PED::IS_PED_ON_FOOT(Global_35))
	{
		if (bParam6)
		{
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35, 0f);
			PED::SET_PED_DESIRED_HEADING(Global_35, ENTITY::GET_ENTITY_HEADING(Global_35));
			ENTITY::SET_ENTITY_VELOCITY(Global_35, 0f, 0f, 0f);
		}
		if (!__LIB_0__::func_1(*iParam0, 16))
		{
			iVar0 = ITEMSET::CREATE_ITEMSET(true);
			bVar1 = false;
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < ITEMSET::GET_ITEMSET_SIZE(iVar0))
			{
				iVar6 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0);
				iVar7 = MISC::_GET_ENTITY_FROM_ITEM(iVar6);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (ENTITY::IS_ENTITY_AN_OBJECT(iVar7))
					{
						if (__LIB_0__::func_147() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (__LIB_0__::func_86(vVar3))
					{
						vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						__LIB_0__::func_634(&vVar3, 50, 10, 0);
					}
					PED::_0xED00D72F81CF7278(iVar7, 0, 1);
					ENTITY::SET_ENTITY_COORDS(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						__LIB_0__::func_148(2);
						__LIB_0__::func_149(-1);
						__LIB_0__::func_150(vVar3);
						__LIB_0__::func_151(__LIB_0__::func_23());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_35, false, true);
					PED::_0x2208438012482A1A(Global_35, false, false);
				}
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
		}
	}
	if (bParam6 && PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar9 = PED::GET_MOUNT(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar9))
		{
			TASK::CLEAR_PED_TASKS(iVar9, true, false);
			TASK::TASK_STAND_STILL(iVar9, -1);
		}
	}
	if (!__LIB_0__::func_1(*iParam0, 4096))
	{
		__LIB_0__::func_142(Global_35);
	}
	if (!__LIB_0__::func_1(*iParam0, 1048576))
	{
		UIFEED::_0xDD1232B332CBB9E7(7, 1, 0);
	}
	if (!__LIB_0__::func_1(*iParam0, 2097152))
	{
		if (__LIB_0__::func_704() || PED::_0x50F124E6EF188B22(Global_35))
		{
			__LIB_1__::func_716(1);
		}
	}
	if (Global_1359489.f_16 & 4194304 == 0)
	{
		Global_1359489.f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_801(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (__LIB_0__::func_84(uParam0, 2048) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0)))
	{
		bVar0 = VOLUME::_DOES_VOLUME_EXIST(uParam0->f_4);
		iVar1 = PED::_GET_LAST_MOUNT(Global_35);
		if ((!ENTITY::IS_ENTITY_DEAD(iVar1) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar1, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && PED::GET_MOUNT(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (TASK::IS_PED_IN_WRITHE(iVar1))
			{
				iVar2 |= 32;
			}
			func_879(iVar1, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), iVar2, 1073741824 /* Float: 2f */);
		}
		iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if ((!ENTITY::IS_ENTITY_DEAD(iVar3) && ((bVar0 && ENTITY::IS_ENTITY_IN_VOLUME(iVar3, uParam0->f_4, true, 0)) || __LIB_0__::func_84(uParam0, -2147483648))) && !PED::IS_PED_IN_VEHICLE(Global_35, iVar3, true))
		{
			func_879(iVar3, __LIB_4__::func_548(uParam0), __LIB_4__::func_549(uParam0), 2, 1073741824 /* Float: 2f */);
		}
	}
}

void func_802(var uParam0)
{
	int iVar0;
	vector3 vVar1;
	if ((__LIB_0__::func_84(uParam0, 268435456) && !__LIB_0__::func_86(__LIB_4__::func_548(uParam0))) && PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			vVar1 = { __LIB_4__::func_548(uParam0) };
			func_879(iVar0, vVar1, __LIB_0__::func_152(vVar1, Global_36, 1), 2, 1073741824 /* Float: 2f */);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 0f);
			ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
		}
	}
}

int func_810(int iParam0, int iParam1)
{
	var uVar0;
	return func_1366(&uVar0, iParam0, iParam1);
}

bool func_871(char[4] cParam0, int iParam1, var uParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!__LIB_0__::func_31(iParam1))
	{
		return false;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(*uParam2) && __LIB_1__::func_22(iParam1)) && __LIB_0__::func_167(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1397(iParam1, 1, 0, fParam4, fParam5, fParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		func_1398(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		__LIB_4__::func_703(iParam1);
		return true;
	}
	return false;
}

void func_879(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	var uVar5;
	int iVar6;
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar4 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar4)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		bVar3 = PED::_GET_PED_CROUCH_MOVEMENT(iVar1);
		if (PED::IS_PED_RAGDOLL(iVar1))
		{
			PED::_0x221F4D9912B7FE86(iVar1, 1);
		}
	}
	if (iParam0 == __LIB_0__::func_57(Global_35) && PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
	{
	}
	if (__LIB_0__::func_125(iParam0))
	{
		if (__LIB_0__::func_126(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
		{
			PHYSICS::_0x0348469DAA17576C(iParam0);
		}
	}
	if (__LIB_0__::func_27(iParam5, 4) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iVar1, true);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_879(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (PED::IS_PED_ON_MOUNT(iVar1))
		{
			iVar2 = PED::GET_MOUNT(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && !ENTITY::IS_ENTITY_DEAD(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_879(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!__LIB_0__::func_27(iParam5, 32))
	{
		if (bVar4 && ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), false, true);
		}
	}
	if (__LIB_0__::func_27(iParam5, 2))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
		}
		else
		{
			ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
			ENTITY::_0x9587913B9E772D29(iParam0, 0);
		}
	}
	else if (__LIB_0__::func_27(iParam5, 129))
	{
		if (__LIB_0__::func_27(iParam5, 128))
		{
			if (WATER::GET_WATER_HEIGHT_NO_WAVES(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iParam0, vParam1, __LIB_0__::func_27(iParam5, 32), true, true);
		ENTITY::SET_ENTITY_HEADING(iParam0, fParam4);
	}
	else
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iParam0, vParam1, fParam4, true, __LIB_0__::func_27(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!__LIB_0__::func_27(iParam5, 16))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), bVar3, 0, false);
		}
		if (__LIB_0__::func_125(iParam0))
		{
			iVar6 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			PHYSICS::_0x0348469DAA17576C(iVar6);
			if (!__LIB_0__::func_27(iParam5, 32))
			{
				TASK::CLEAR_PED_TASKS(iVar6, true, false);
				TASK::TASK_STAND_STILL(iVar6, -1);
			}
		}
		PED::SET_PED_CLOTH_PACKAGE_INDEX(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), 1);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0) == Global_35 && !__LIB_0__::func_27(iParam5, 64))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
		}
	}
}

bool func_881(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	switch (__LIB_0__::func_81(uParam0))
	{
		case 0:
			if (!__LIB_5__::func_343(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			__LIB_0__::func_19(uParam0, 1);
			break;
		case 1:
			__LIB_4__::func_560(uParam0);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_799(&iVar0, 0, 2, 0, 0, 0, 0);
			__LIB_0__::func_19(uParam0, 2);
			break;
		case 2:
			if (__LIB_6__::func_918(uParam0))
			{
				__LIB_0__::func_568(uParam0->f_8, 5000f, 0);
				PED::_0x4759CC730F947C81();
				__LIB_1__::func_283(&(uParam0->f_3), 1);
				__LIB_0__::func_19(uParam0, 3);
			}
			break;
		case 3:
			if (__LIB_0__::func_265(&(uParam0->f_3)) >= 1f)
			{
				__LIB_0__::func_19(uParam0, 4);
			}
			break;
		case 4:
			if (!__LIB_0__::func_91())
			{
				CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				if (CAM::DOES_CAM_EXIST(uParam0->f_2))
				{
					CAM::DESTROY_CAM(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			__LIB_5__::func_129(&iVar1, 0);
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			__LIB_0__::func_19(uParam0, 0);
			return true;
	}
	return false;
}

bool func_885(char[4] cParam0, struct<4> Param1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Param1))
	{
		return true;
	}
	if (__LIB_6__::func_862(cParam0, 16777216))
	{
		__LIB_8__::func_712(cParam0);
		__LIB_8__::func_689(cParam0);
		return true;
	}
	if (func_1438(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (__LIB_6__::func_877(cParam0) == 0)
	{
		__LIB_9__::func_251(cParam0);
	}
	if (__LIB_0__::func_91())
	{
		if (!__LIB_6__::func_862(cParam0, 262144))
		{
			CAM::STOP_GAMEPLAY_HINT(true);
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
			if (CAM::DOES_CAM_EXIST(cParam0->f_609.f_2))
			{
				CAM::DESTROY_CAM(cParam0->f_609.f_2, false);
			}
			__LIB_5__::func_326(&(cParam0->f_10792));
			__LIB_4__::func_974(cParam0);
			__LIB_6__::func_887(cParam0, 524288);
			__LIB_8__::func_713(cParam0);
			__LIB_8__::func_661(cParam0, 30f);
			__LIB_8__::func_662(cParam0, 40f);
			__LIB_6__::func_868(cParam0, 262144);
		}
		if (!__LIB_6__::func_862(cParam0, 524288) && ANIMSCENE::_0xEF324E9550A394D5(cParam0->f_7375.f_804))
		{
			__LIB_6__::func_868(cParam0, 524288);
		}
	}
	return false;
}

void func_891()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		Local_236[iVar0 /*4*/] = func_1318(iVar0);
		iVar0++;
	}
}

void func_892()
{
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[0]))
	{
		iLocal_395[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-968.5175f, 510.943f, 58.28173f, 0f, 0f, 48.27669f, 281.3857f, 14.70386f, 9.898331f, "River break");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[12]))
	{
		iLocal_395[12] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1032.107f, 419.7317f, 56.76778f, 0f, 0f, 11f, 34f, 8f, 13f, "Final Break");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[2]))
	{
		iLocal_395[2] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1336.83f, 2442.84f, 310.243f, -91.125f, 2.671f, -22.616f, 9.246f, 46.209f, 134.639f, "Colter");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[1]))
	{
		iLocal_395[1] = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-905.608f, 203.5328f, 105.0285f, 0f, 0f, 33f, 425f, 299f, 100f, "Overlook Journey");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[4]))
	{
		iLocal_395[4] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1043.245f, 404.2099f, 55.97156f, 0f, 0f, -39.47111f, 12.11675f, 19.40038f, 7.148752f, "Post Crossing - Bill Stop");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[5]))
	{
		iLocal_395[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1527.839f, 2256.848f, 290.6767f, 0f, 0f, 0f, 30.0549f, 22.25873f, 12.9864f, "Route River Crossing 01");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[6]))
	{
		iLocal_395[6] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1656.659f, 2180.012f, 289.8228f, 0f, 0f, 42.64669f, 32.11144f, 20.90524f, 21.60095f, "Route Up Hill");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[7]))
	{
		iLocal_395[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1747.088f, 2058.178f, 271.4359f, 0f, 0f, 24.1627f, 30.77382f, 36.74975f, 13.13713f, "Route River Crossing 02");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[8]))
	{
		iLocal_395[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1819.665f, 1935.321f, 247.172f, 0f, 0f, 24.11107f, 24.33085f, 23.37026f, 21.50568f, "Route Pre Fork");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[9]))
	{
		iLocal_395[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1865.716f, 1851.507f, 244.0812f, 0f, 0f, 0f, 22.73371f, 27.00917f, 14.4185f, "Route Sharp Corner");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[10]))
	{
		iLocal_395[10] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-1696.581f, 1763.677f, 240.016f, 0f, 0f, -8.413803f, 69.06441f, 37.34649f, 21.95037f, "Route Lake Road");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[13]))
	{
		iLocal_395[13] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(func_1266(5, 27), 0f, 0f, -8.413803f, 18.06441f, 16.34649f, 21.95037f, "Camp horse route blocker");
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_395[14]))
	{
		iLocal_395[14] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-116.9964f, -35.16148f, 88.08789f, 0f, 0f, 45.58621f, 38f, 73f, 30f, "Overlook leadin trigger");
	}
}

bool func_893(char[4] cParam0)
{
	if (func_175(6))
	{
		return true;
	}
	if (__LIB_6__::func_864(cParam0) < iLocal_54)
	{
		return true;
	}
	__LIB_12__::func_86(1);
	if (__LIB_6__::func_864(cParam0) >= iLocal_54)
	{
		__LIB_11__::func_381(0);
	}
	else
	{
		__LIB_11__::func_381(1);
		__LIB_10__::func_795(1, 16);
		__LIB_6__::func_261();
	}
	__LIB_4__::func_845(1, 0);
	if (func_1449(1, 1))
	{
		func_481(6);
		return true;
	}
	return false;
}

bool func_894(char[4] cParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = func_1450(cParam0);
	func_1451(cParam0, 1, &bVar0, 178615350);
	PED::SET_PED_CONFIG_FLAG(Local_236[1 /*4*/].f_1, 65, true);
	__LIB_5__::func_602(Local_236[1 /*4*/].f_1, joaat("WEAPON_SHOTGUN_SEMIAUTO"));
	__LIB_5__::func_602(Local_236[1 /*4*/].f_1, joaat("WEAPON_SHOTGUN_SEMIAUTO_HOSEA"));
	__LIB_5__::func_602(Local_236[1 /*4*/].f_1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
	if (__LIB_0__::func_272(Global_35, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 175, false);
	}
	if (__LIB_0__::func_272(Local_236[1 /*4*/].f_1, 0))
	{
		PED::SET_PED_CONFIG_FLAG(Local_236[1 /*4*/].f_1, 175, false);
	}
	func_1451(cParam0, 7, &bVar0, 178615350);
	__LIB_5__::func_602(Local_236[7 /*4*/].f_1, joaat("WEAPON_BOW_CHARLES"));
	switch (iVar1)
	{
		case 0:
		case 1:
			func_1451(cParam0, 5, &bVar0, 178615350);
			func_1451(cParam0, 0, &bVar0, -695701225);
			func_1451(cParam0, 2, &bVar0, 178615350);
			func_1451(cParam0, 4, &bVar0, 178615350);
			func_1451(cParam0, 6, &bVar0, 178615350);
			func_1451(cParam0, 11, &bVar0, 178615350);
			func_1451(cParam0, 13, &bVar0, 178615350);
			func_1451(cParam0, 14, &bVar0, 178615350);
			func_1451(cParam0, 20, &bVar0, 178615350);
			func_1451(cParam0, 3, &bVar0, 178615350);
			func_1451(cParam0, 8, &bVar0, 178615350);
			func_1451(cParam0, 9, &bVar0, 178615350);
			func_1451(cParam0, 10, &bVar0, 178615350);
			func_1451(cParam0, 12, &bVar0, 178615350);
			func_1451(cParam0, 15, &bVar0, 178615350);
			func_1451(cParam0, 16, &bVar0, 178615350);
			func_1451(cParam0, 17, &bVar0, 178615350);
			func_1451(cParam0, 18, &bVar0, 178615350);
			func_1451(cParam0, 19, &bVar0, 178615350);
			break;
		case 2:
			break;
		case 3:
		case 25:
			if (bParam1 || __LIB_0__::func_266(Global_35, func_1266(5, 27), 100f, 1, 1))
			{
				func_1451(cParam0, 8, &bVar0, -268604689);
				func_1451(cParam0, 4, &bVar0, -268604689);
				func_1451(cParam0, 5, &bVar0, -268604689);
				func_1451(cParam0, 2, &bVar0, -268604689);
				func_1451(cParam0, 12, &bVar0, -268604689);
				func_1451(cParam0, 17, &bVar0, -268604689);
				func_1451(cParam0, 3, &bVar0, -268604689);
				func_1451(cParam0, 16, &bVar0, -268604689);
				func_1451(cParam0, 10, &bVar0, -268604689);
				func_1451(cParam0, 11, &bVar0, -268604689);
				func_1451(cParam0, 13, &bVar0, -268604689);
				func_1451(cParam0, 15, &bVar0, -268604689);
				func_1451(cParam0, 18, &bVar0, -268604689);
			}
			else
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0 && __LIB_6__::func_872(cParam0, 4))
	{
		func_1453(cParam0);
	}
	func_1454();
	return bVar0;
}

bool func_895()
{
	if (!func_175(4))
	{
		if (!PROPSET::_REQUEST_PROPSET(iLocal_382))
		{
			return false;
		}
		if (!PROPSET::_REQUEST_PROPSET(iLocal_380))
		{
			return false;
		}
		if (!PROPSET::_REQUEST_PROPSET(iLocal_378))
		{
			return false;
		}
		if (!PROPSET::_REQUEST_PROPSET(iLocal_379))
		{
			return false;
		}
		if (!PROPSET::_REQUEST_PROPSET(iLocal_381))
		{
			return false;
		}
		func_481(4);
	}
	if ((((PROPSET::_HAS_PROPSET_LOADED(iLocal_380) && PROPSET::_HAS_PROPSET_LOADED(iLocal_378)) && PROPSET::_HAS_PROPSET_LOADED(iLocal_379)) && PROPSET::_HAS_PROPSET_LOADED(iLocal_381)) && PROPSET::_HAS_PROPSET_LOADED(iLocal_382))
	{
		return true;
	}
	return false;
}

bool func_896(char[4] cParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	iVar1 = func_1450(cParam0);
	if (iParam1 != 26)
	{
		iVar1 = iParam1;
	}
	if (iLocal_88 == iVar1)
	{
		return true;
	}
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
			if (!func_1455(10, 16))
			{
				bVar0 = false;
			}
			break;
		case 2:
			break;
		case 3:
			if (!func_1456())
			{
				bVar0 = false;
			}
			break;
		case 25:
			break;
	}
	if (bVar0)
	{
		iLocal_88 = iVar1;
	}
	return bVar0;
}

bool func_897(char[4] cParam0)
{
	bool bVar0;
	bVar0 = true;
	if (!func_1457(cParam0))
	{
		bVar0 = false;
	}
	if (__LIB_6__::func_864(cParam0) <= iLocal_53)
	{
		if (!func_1458(cParam0, &(Local_236[6 /*4*/]), 6))
		{
			bVar0 = false;
		}
		if (!func_1458(cParam0, &(Local_236[20 /*4*/]), 20))
		{
			bVar0 = false;
		}
		if (!func_1458(cParam0, &(Local_236[14 /*4*/]), 14))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_899(int iParam0)
{
	if (!bLocal_600)
	{
		__LIB_10__::func_21(Global_35, iParam0);
		if (!__LIB_8__::func_924(Global_35))
		{
			return false;
		}
		__LIB_9__::func_164(Global_35, 1, 0);
		if (!__LIB_8__::func_837(iParam0))
		{
			return false;
		}
		bLocal_600 = true;
	}
	return true;
}

void func_901(char[4] cParam0)
{
	bool bVar0;
	if (__LIB_6__::func_864(cParam0) == iLocal_53)
	{
		func_1299(1, cParam0);
	}
	if (__LIB_6__::func_864(cParam0) <= iLocal_53)
	{
		if (__LIB_6__::func_864(cParam0) != iLocal_52)
		{
			func_1299(5, cParam0);
			func_1299(3, cParam0);
			func_1299(13, cParam0);
			func_1299(2, cParam0);
			func_1299(8, cParam0);
			func_1299(9, cParam0);
			func_1299(10, cParam0);
			func_1299(12, cParam0);
			func_1299(0, cParam0);
			func_1299(15, cParam0);
			func_1299(16, cParam0);
			func_1299(17, cParam0);
			func_1299(18, cParam0);
			func_1299(19, cParam0);
			func_1299(4, cParam0);
			func_1299(11, cParam0);
			bVar0 = __LIB_6__::func_864(cParam0) == iLocal_52;
			func_1463(6, func_235(0, 7), !bVar0, bVar0);
			func_1463(14, func_235(0, 15), !bVar0, bVar0);
			func_1463(20, func_235(0, 21), !bVar0, bVar0);
		}
	}
	func_1464(5);
	func_1464(7);
	func_1464(2);
	func_1464(13);
	if (!AUDIO::_0x44A5EEF54F62E823(Global_35))
	{
		AUDIO::_0xEA546C31FD45F8CD(Global_35);
	}
}

void func_903(char[4] cParam0)
{
	int iVar0;
	iVar0 = func_1450(cParam0);
	switch (iVar0)
	{
		case 0:
			__LIB_9__::func_154(cParam0, Local_236[5 /*4*/].f_1, 0, 0, 0, 0, 0);
			__LIB_9__::func_154(cParam0, Local_236[1 /*4*/].f_1, 0, 0, 0, 0, 0);
			__LIB_9__::func_154(cParam0, Local_236[14 /*4*/].f_1, "lenny", 0, 0, 0, 0);
			__LIB_9__::func_154(cParam0, Global_35, 0, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_421))
			{
				__LIB_9__::func_62(cParam0, iLocal_421, "HORSE_01^7", 0, 0, 0, 0);
			}
			__LIB_9__::func_62(cParam0, Local_236[6 /*4*/].f_2, "Horse_01", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[20 /*4*/].f_2, "Horse_01^1", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[14 /*4*/].f_2, "Horse_01^2", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[10 /*4*/].f_1, "MollyOshea", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[11 /*4*/].f_1, "MrPearson", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[19 /*4*/].f_1, "MrsAdler", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[13 /*4*/].f_1, "RevSwanson", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[12 /*4*/].f_1, "SusanGrimshaw", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[17 /*4*/].f_1, "Tilly", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[16 /*4*/].f_1, "karen", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[3 /*4*/].f_1, "uncle", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[4 /*4*/].f_1, "BillWilliamson", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[8 /*4*/].f_1, "AbigailRoberts", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[7 /*4*/].f_1, "CharlesSmith", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[9 /*4*/].f_1, "JackMarston", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[18 /*4*/].f_1, "Kieran", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[2 /*4*/].f_1, "LeoStrauss", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[15 /*4*/].f_1, "MaryBeth", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[0 /*4*/].f_1, "JohnMarston", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[20 /*4*/].f_1, "MicahBell", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, Local_236[6 /*4*/].f_1, "JavierEscuella", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_423[3], "wagon04x^4", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_423[2], "WAGON04x^3", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_423[1], "WAGON04x^2", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_423[0], "WAGON04x^1", 0, 0, 0, 0);
			break;
		case 1:
			__LIB_5__::func_262(&(cParam0->f_7375));
			__LIB_5__::func_111(&(cParam0->f_7375), Global_35, "ARTHUR", 0, 0, 0);
			__LIB_5__::func_111(&(cParam0->f_7375), Local_236[1 /*4*/].f_1, "HoseaMatthews", 0, 0, 0);
			__LIB_5__::func_111(&(cParam0->f_7375), Local_236[6 /*4*/].f_1, "JavierEscuella", 0, 0, 0);
			__LIB_5__::func_111(&(cParam0->f_7375), Local_236[20 /*4*/].f_1, "MicahBell", 0, 0, 0);
			__LIB_5__::func_111(&(cParam0->f_7375), iLocal_423[3], "wagon04x^4", 0, 0, 0);
			__LIB_5__::func_111(&(cParam0->f_7375), Local_236[14 /*4*/].f_1, "lenny", 0, 0, 0);
			__LIB_5__::func_111(&(cParam0->f_7375), iLocal_423[4], "WAGON02x", 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_423[3], "wagon04x^4", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_423[2], "WAGON04x^3", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_423[1], "WAGON04x^2", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_423[0], "WAGON04x^1", 0, 0, 0, 0);
			break;
		case 2:
			break;
		case 3:
			break;
		case 25:
			__LIB_9__::func_154(cParam0, Local_236[1 /*4*/].f_1, 0, 0, 0, 0, 0);
			__LIB_9__::func_154(cParam0, Global_35, 0, 0, 0, 0, 0);
			break;
		case 26:
			break;
	}
}

int func_905(char[4] cParam0)
{
	var uVar0;
	MemCopy(&uVar0, {__LIB_4__::func_606(&(cParam0->f_7375))}, 3);
	if (MISC::ARE_STRINGS_EQUAL(&uVar0, "cutscene@MUD1_INT"))
	{
		__LIB_9__::func_62(cParam0, iLocal_423[4], "WAGON02x", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, iLocal_423[3], "WAGON04X^4", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, iLocal_423[2], "WAGON04X^3", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, iLocal_423[1], "WAGON04X^2", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, iLocal_423[0], "WAGON04X^1", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[5 /*4*/].f_1, "dutch", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[10 /*4*/].f_1, "MollyOshea", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[11 /*4*/].f_1, "MrPearson", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[19 /*4*/].f_1, "MrsAdler", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[13 /*4*/].f_1, "RevSwanson", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[12 /*4*/].f_1, "SusanGrimshaw", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[17 /*4*/].f_1, "Tilly", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[16 /*4*/].f_1, "karen", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[3 /*4*/].f_1, "uncle", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[4 /*4*/].f_1, "BillWilliamson", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[8 /*4*/].f_1, "AbigailRoberts", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[7 /*4*/].f_1, "CharlesSmith", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[9 /*4*/].f_1, "JackMarston", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[18 /*4*/].f_1, "Kieran", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[2 /*4*/].f_1, "LeoStrauss", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[15 /*4*/].f_1, "MaryBeth", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[0 /*4*/].f_1, "JohnMarston", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[6 /*4*/].f_2, "Horse_01", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[20 /*4*/].f_2, "Horse_01^1", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[14 /*4*/].f_2, "Horse_01^2", 0, 0, 0, 0);
	}
	if (MISC::ARE_STRINGS_EQUAL(&uVar0, "cutscene@MUD1_MCS_2A"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
		{
			__LIB_9__::func_62(cParam0, Local_236[7 /*4*/].f_1, "CharlesSmith", 0, 0, 0, 0);
			func_1468(cParam0, &(iLocal_423[4]), "wagon02x", 0, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_581))
			{
				iLocal_581 = func_1273(iLocal_423[4], joaat("P_BASKETINDIAN03X"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_580))
			{
				iLocal_580 = func_1273(iLocal_423[4], joaat("S_CVAN_CHEST02"));
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_582))
			{
				iLocal_582 = func_1273(iLocal_423[4], joaat("P_MILKCAN01X"));
			}
			__LIB_2__::func_919(iLocal_422, 1, 1);
			__LIB_2__::func_919(iLocal_581, 1, 1);
			__LIB_2__::func_919(iLocal_580, 1, 1);
			__LIB_2__::func_919(iLocal_582, 1, 1);
			__LIB_9__::func_62(cParam0, iLocal_422, "s_wagonWheel01x", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_581, "p_basketindian03x", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_580, "s_cvan_chest02X", 0, 0, 0, 0);
			__LIB_9__::func_62(cParam0, iLocal_582, "P_MILKCAN01X", 0, 0, 0, 0);
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(&uVar0, "cutscene@MUD1_MCS_2B"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
		{
			func_1468(cParam0, &(iLocal_423[4]), "wagon02x", 0, 0, 0);
		}
		else
		{
			return 0;
		}
		__LIB_9__::func_154(cParam0, Local_236[7 /*4*/].f_1, 0, 0, 0, 0, 0);
		__LIB_9__::func_154(cParam0, Local_236[1 /*4*/].f_1, 0, 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_14.f_27[3], "Horse_01", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_14.f_27[4], "Horse_01^1", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_14.f_27[5], "Horse_01^2", 0, 0, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_581))
		{
			iLocal_581 = func_1273(iLocal_423[4], joaat("P_BASKETINDIAN03X"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_580))
		{
			iLocal_580 = func_1273(iLocal_423[4], joaat("S_CVAN_CHEST02"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_582))
		{
			iLocal_582 = func_1273(iLocal_423[4], joaat("P_MILKCAN01X"));
		}
		__LIB_9__::func_62(cParam0, iLocal_422, "s_wagonwheel01x", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, iLocal_581, "p_basketindian03x", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, iLocal_580, "s_cvan_chest02X", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, iLocal_582, "P_MILKCAN01X", 0, 0, 0, 0);
	}
	if (MISC::ARE_STRINGS_EQUAL(&uVar0, "cutscene@MUD1_MCS5"))
	{
		__LIB_9__::func_62(cParam0, Local_236[7 /*4*/].f_1, "CharlesSmith", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[1 /*4*/].f_1, "HoseaMatthews", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[10 /*4*/].f_1, "MollyOshea", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[11 /*4*/].f_1, "MrPearson", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[13 /*4*/].f_1, "RevSwanson", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[12 /*4*/].f_1, "SusanGrimshaw", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[17 /*4*/].f_1, "Tilly", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[16 /*4*/].f_1, "karen", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[3 /*4*/].f_1, "uncle", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[4 /*4*/].f_1, "BillWilliamson", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[8 /*4*/].f_1, "AbigailRoberts", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[2 /*4*/].f_1, "LeoStrauss", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[15 /*4*/].f_1, "MaryBeth", 0, 0, 0, 0);
		__LIB_9__::func_62(cParam0, Local_236[5 /*4*/].f_1, "Dutch", 0, 0, 0, 0);
	}
	return 1;
}

int func_907(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = func_1450(cParam0);
	func_896(cParam0, 26);
	switch (iVar0)
	{
		case 0:
			if (func_1469(cParam0, Local_236[0 /*4*/].f_1, "JOHNMARSTON", 0, 1, 1))
			{
				func_1271();
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
				if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[iLocal_59], false))
				{
					PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_423[iLocal_59], -1);
				}
				GRAPHICS::SET_TIMECYCLE_MODIFIER("mud1_wagonRideCascades");
			}
			if (func_1469(cParam0, Local_236[20 /*4*/].f_1, "MicahBell", 0, 1, 1))
			{
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[3], 0f);
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[4], 0f);
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[2], 0f);
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[0], 0f);
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[1], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[3], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[4], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[2], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[0], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[1], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[3], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[4], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[2], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[0], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[1], 0f);
				func_182(1);
			}
			if (ANIMSCENE::_0xB89FCFF19DAFFF28(cParam0->f_7375.f_804, "KIERAN"))
			{
				if (!__LIB_0__::func_266(Local_236[18 /*4*/].f_1, -1035.116f, 469.2188f, 61.47f, 10f, 1, 1))
				{
					ENTITY::SET_ENTITY_COORDS(Local_236[18 /*4*/].f_1, -1035.116f, 469.2188f, 61.47f, true, false, true, true);
				}
			}
			if (func_1469(cParam0, iLocal_423[4], "WAGON02X", 0, 1, 1))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 2.5f);
			}
			if (func_1469(cParam0, iLocal_423[3], "WAGON04X^4", 0, 1, 1))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[3], 2.8f);
			}
			if (func_1469(cParam0, iLocal_423[1], "WAGON04X^2", 0, 1, 1))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[1], 3.1f);
			}
			if (func_1469(cParam0, iLocal_423[0], "WAGON04X^1", 0, 1, 1))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[0], 3f);
			}
			if ((__LIB_4__::func_988(&(cParam0->f_7375), iLocal_423[4], 4) || ANIMSCENE::_0x005E6F28DD7ED58D(cParam0->f_7375.f_804, "WAGON02X")) || ANIMSCENE::_0xB89FCFF19DAFFF28(cParam0->f_7375.f_804, "WAGON02X"))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 2.5f);
			}
			if ((__LIB_4__::func_988(&(cParam0->f_7375), iLocal_423[3], 4) || ANIMSCENE::_0x005E6F28DD7ED58D(cParam0->f_7375.f_804, "WAGON04X^4")) || ANIMSCENE::_0xB89FCFF19DAFFF28(cParam0->f_7375.f_804, "WAGON04X^4"))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[3], 2.6f);
			}
			if ((__LIB_4__::func_988(&(cParam0->f_7375), iLocal_423[1], 4) || ANIMSCENE::_0x005E6F28DD7ED58D(cParam0->f_7375.f_804, "WAGON04X^2")) || ANIMSCENE::_0xB89FCFF19DAFFF28(cParam0->f_7375.f_804, "WAGON04X^2"))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[1], 3.1f);
			}
			if ((__LIB_4__::func_988(&(cParam0->f_7375), iLocal_423[0], 4) || ANIMSCENE::_0x005E6F28DD7ED58D(cParam0->f_7375.f_804, "WAGON04X^1")) || ANIMSCENE::_0xB89FCFF19DAFFF28(cParam0->f_7375.f_804, "WAGON04X^1"))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[0], 3f);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1842600600))
			{
				AUDIO::_0x2B9C37C01BF25EDB("Board_Wagon");
				bLocal_611 = true;
			}
			if (bLocal_611)
			{
				func_899(8);
			}
			if (func_1469(cParam0, Local_236[6 /*4*/].f_1, "JAVIERESCUELLA", 0, 1, 1))
			{
				func_879(Local_236[6 /*4*/].f_2, -1047.169f, 404.5631f, 52.4851f, -89.41f, 2, 1073741824 /* Float: 2f */);
			}
			if (func_1469(cParam0, Local_236[13 /*4*/].f_1, "RevSwanson", 0, 1, 1))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_236[13 /*4*/].f_1, iLocal_423[1], false))
				{
					PED::SET_PED_INTO_VEHICLE(Local_236[13 /*4*/].f_1, iLocal_423[1], -1);
				}
			}
			break;
		case 2:
			if (__LIB_9__::func_338(cParam0) > 1000 || __LIB_5__::func_448(&(cParam0->f_7375), 1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_236[7 /*4*/].f_1, false))
				{
					PED::_0xE0B61ED8BB37712F(Local_236[7 /*4*/].f_1);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
				{
					PED::_0xE0B61ED8BB37712F(Global_35);
				}
				if (!func_1473(256))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_236[4 /*4*/].f_1))
					{
						__LIB_11__::func_379(cParam0, Local_236[4 /*4*/].f_1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_236[6 /*4*/].f_1))
					{
						__LIB_11__::func_379(cParam0, Local_236[6 /*4*/].f_1);
					}
					func_1292(cParam0);
					func_794(256);
				}
			}
			if (func_1469(cParam0, Local_236[1 /*4*/].f_1, 0, 0, 1, 1))
			{
				func_1291();
			}
			break;
		case 3:
			func_893(cParam0);
			if (__LIB_9__::func_338(cParam0) > 7000 || __LIB_5__::func_448(&(cParam0->f_7375), 1))
			{
				if (!func_1473(512))
				{
					func_1302(cParam0);
					func_794(512);
				}
			}
			if (__LIB_9__::func_338(cParam0) > 18600 && ENTITY::_IS_ENTITY_FROZEN(iLocal_423[4]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_423[4], false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_423[4], true, false);
			}
			if (func_1469(cParam0, iLocal_423[4], "wagon02x", 0, 1, 1))
			{
				__LIB_0__::func_489(0f, 0f);
			}
			if (__LIB_9__::func_338(cParam0) > 21600 && !bLocal_609)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_422, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_422, true, false);
				OBJECT::_0xF9C1681347C8BD15(iLocal_422);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_423[4]);
				bLocal_609 = true;
			}
			if (func_1469(cParam0, Local_236[1 /*4*/].f_1, "HoseaMatthews", 0, 1, 1))
			{
				PED::_0xE0B61ED8BB37712F(Local_236[1 /*4*/].f_1);
				PED::SET_PED_INTO_VEHICLE(Local_236[1 /*4*/].f_1, iLocal_423[4], 0);
				PED::_0x2208438012482A1A(Local_236[1 /*4*/].f_1, true, false);
			}
			if (func_1469(cParam0, Global_35, "ARTHUR", 0, 1, 1))
			{
				if (!__LIB_6__::func_862(cParam0, 8))
				{
					CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
					func_190();
				}
				if (__LIB_8__::func_587(cParam0) == 1)
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 153.8632f, false, true);
					PED::_0x2208438012482A1A(Global_35, true, false);
				}
				else
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 153.8632f, false, true);
					PED::_0x2208438012482A1A(Global_35, true, false);
				}
			}
			break;
		case 25:
			func_181();
			if (ENTITY::DOES_ENTITY_EXIST(Local_236[18 /*4*/].f_1))
			{
			}
			if (__LIB_9__::func_338(cParam0) > 1000 && !bLocal_610)
			{
				ENTITY::SET_ENTITY_COORDS(Local_236[11 /*4*/].f_1, -116.9624f, -94.5179f, 77.6598f, true, true, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_236[10 /*4*/].f_1, -116.9624f, -94.5179f, 77.6598f, true, true, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_236[16 /*4*/].f_1, -116.9624f, -94.5179f, 77.6598f, true, true, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_236[15 /*4*/].f_1, -116.9624f, -94.5179f, 77.6598f, true, true, true, true);
				func_1474();
				bLocal_610 = true;
			}
			if ((__LIB_9__::func_338(cParam0) >= 139930 && !func_175(24)) && !__LIB_6__::func_862(cParam0, 524288))
			{
				__LIB_0__::func_45("MUD1_HELP_DONATION", 10000, 0, 0, 0, 1);
				func_481(24);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("VISIBLETOSCRIPT")) || ((__LIB_9__::func_338(cParam0) >= 8340 && __LIB_9__::func_338(cParam0) <= 37970) && (CLOCK::GET_CLOCK_HOURS() != 18 || CLOCK::GET_CLOCK_HOURS() != 19)))
			{
				func_1246(10);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("VISIBLETOSCRIPT")) || (__LIB_9__::func_338(cParam0) >= 57970 && CLOCK::GET_CLOCK_HOURS() != 19))
			{
				func_1246(11);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, joaat("VISIBLETOSCRIPT")) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 508284207))
			{
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING("ChapterTitle_IntroCh02"))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("ChapterTitle_IntroCh02");
				}
				AUDIO::_0x6339C1EA3979B5F7("Chapter_02", "Chapter_Screen_Scenes");
			}
			if ((__LIB_9__::func_338(cParam0) >= 167320 && !func_175(25)) && !__LIB_6__::func_862(cParam0, 524288))
			{
				__LIB_0__::func_45("MUD1_HELP_TENT", 10000, 0, 0, 0, 1);
				func_481(25);
			}
			if (!func_175(13))
			{
				if (__LIB_9__::func_338(cParam0) > 15000)
				{
					func_1475(Local_236[7 /*4*/], Local_236[7 /*4*/].f_1, -268604689);
					func_481(13);
				}
			}
			iVar1 = 0;
			while (iVar1 < 21)
			{
				if ((ENTITY::DOES_ENTITY_EXIST(Local_236[iVar1 /*4*/].f_1) && iVar1 != 18) && func_1476(cParam0, Local_236[iVar1 /*4*/].f_1, __LIB_0__::func_731(Local_236[iVar1 /*4*/].f_1), 0, 1, 1))
				{
					TASK::TASK_STAND_STILL(Local_236[iVar1 /*4*/].f_1, -1);
				}
				iVar1++;
			}
			break;
	}
	return 1;
}

bool func_909(char[4] cParam0)
{
	int iVar0;
	bool bVar1;
	iVar0 = func_1450(cParam0);
	bVar1 = true;
	if (!func_896(cParam0, 26))
	{
		bVar1 = false;
	}
	if (!bVar1)
	{
		return false;
	}
	switch (iVar0)
	{
		case 0:
			if (!STREAMING::_0xCF45DF50C7775F2A())
			{
				STREAMING::_0x513F8AA5BF2F17CF(func_1266(2, 0), 55f, 1);
				bVar1 = false;
			}
			if (!STREAMING::_0x0909F71B5C070797())
			{
				bVar1 = false;
			}
			else
			{
				STREAMING::_0x5A8B01199C3E79C3();
			}
			if (!func_899(8))
			{
				bVar1 = false;
			}
			if (bVar1)
			{
				func_1246(6);
				ENTITY::SET_ENTITY_COORDS(Local_236[18 /*4*/].f_1, -1133.747f, 488.7568f, 57.6313f, true, false, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_236[0 /*4*/].f_1, -1133.747f, 488.7568f, 57.6313f, true, false, true, true);
				ENTITY::SET_ENTITY_COORDS(Local_236[8 /*4*/].f_1, -1133.747f, 488.7568f, 57.6313f, true, false, true, true);
				__LIB_1__::func_148(&uLocal_542);
				GRAPHICS::SET_TIMECYCLE_MODIFIER("mud1_wagonRideCascades");
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[3], 0f);
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[4], 0f);
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[2], 0f);
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[0], 0f);
				VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[1], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[3], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[4], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[2], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[0], 0f);
				VEHICLE::_SET_VEHICLE_MUD_LEVEL(iLocal_423[1], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[3], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[4], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[2], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[0], 0f);
				VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[1], 0f);
				func_182(1);
			}
			break;
		case 2:
			if (!func_1298())
			{
				bVar1 = false;
			}
			break;
		case 3:
			if (!func_893(cParam0))
			{
				bVar1 = false;
			}
			if (!bLocal_609)
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_422, false);
				ENTITY::SET_ENTITY_COLLISION(iLocal_422, true, false);
				OBJECT::_0xF9C1681347C8BD15(iLocal_422);
				VEHICLE::SET_VEHICLE_FIXED(iLocal_423[4]);
				bLocal_609 = true;
				bVar1 = false;
			}
			break;
		case 25:
			if (GRAPHICS::_0xBF2DD155B2ADCD0A("ChapterTitle_IntroCh02"))
			{
				return false;
			}
			__LIB_8__::func_719(cParam0, -1, 0);
			break;
	}
	return bVar1;
}

void func_911()
{
	Local_89[0 /*7*/] = { -95.1927f, 115.5049f, 89.8845f };
	Local_89[0 /*7*/].f_3 = { -86.5887f, 117.3133f, 89.5981f };
	Local_89[0 /*7*/].f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-27.2086f, 101.0362f, 98.07634f, 0f, 0f, 82.61945f, 128.2783f, 54.06714f, 16.71503f, "Main Road Long");
	Local_89[1 /*7*/] = { -94.9856f, 115.7035f, 89.8353f };
	Local_89[1 /*7*/].f_3 = { -96.6305f, 114.42f, 89.9396f };
	Local_89[1 /*7*/].f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-155.8704f, 236.4997f, 77.98907f, 0f, 0f, 56.49879f, 83.23309f, 90.06801f, 39.25363f, "Main Road Short");
	Local_89[2 /*7*/] = { -235.2138f, 28.6365f, 53.9834f };
	Local_89[2 /*7*/].f_3 = { -246.6073f, 28.4063f, 51.9238f };
	Local_89[2 /*7*/].f_6 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(-366.1376f, 104.4379f, 68.56793f, 0f, 0f, -61.50011f, 86.90412f, 55.07547f, 36.75386f, "Narrow Road");
}

void func_912(var uParam0)
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_915(char[4] cParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = iVar0;
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar1 /*4*/].f_1) && !PED::IS_PED_DEAD_OR_DYING(Local_236[iVar1 /*4*/].f_1, true))
		{
			if (bParam1)
			{
				__LIB_9__::func_141(cParam0, Local_236[iVar1 /*4*/].f_1, 128);
			}
			else
			{
				__LIB_9__::func_147(cParam0, Local_236[iVar1 /*4*/].f_1, 128);
			}
		}
		iVar0++;
	}
}

void func_918(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = func_1450(cParam0);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_TRAVERSAL"), false);
	PED::SET_PED_RESET_FLAG(Global_35, 189, true);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_423[4]))
	{
		VEHICLE::_0x165BE2001E5E4B75(iLocal_423[4]);
	}
	if (func_175(15))
	{
		CAM::_0xE296208C273BD7F0(2500, 2500, 0, 17, 1, 0);
	}
	if (__LIB_0__::func_75(&uLocal_542) && __LIB_0__::func_265(&uLocal_542) >= 0.85f)
	{
		__LIB_0__::func_37(&uLocal_542);
		func_1486(128);
	}
	if (func_1473(128))
	{
		__LIB_1__::func_283(&uLocal_542, 0);
		iVar1 = 0;
		while (iVar1 < iLocal_423)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[iVar1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_423[iVar1]))
			{
				if (__LIB_0__::func_75(&uLocal_542))
				{
					if (iVar1 == 0 && __LIB_0__::func_265(&uLocal_542) < 0.6f)
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[0], 3f);
					}
				}
				if (iVar1 == 1)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[1], 3.1f);
				}
				if (iVar1 == 2)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[2], 2.8f);
				}
				if (iVar1 == 3)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[3], 2.6f);
				}
				if (iVar1 == 4)
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 2.5f);
				}
			}
			iVar1++;
		}
	}
	if (func_1473(1024))
	{
		__LIB_1__::func_283(&uLocal_545, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_423[4]))
		{
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 3f);
		}
		if (__LIB_0__::func_75(&uLocal_545) && __LIB_0__::func_265(&uLocal_545) >= 3f)
		{
			__LIB_0__::func_37(&uLocal_545);
			func_1486(1024);
		}
	}
	func_163(0);
	__LIB_1__::func_538(0);
	func_1488();
	if (func_175(0))
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			iVar2 = 0;
			while (iVar2 < 21)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_236[iVar2 /*4*/].f_1) && !ENTITY::IS_ENTITY_DEAD(Local_236[iVar2 /*4*/].f_1))
				{
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_236[iVar2 /*4*/].f_1, true);
				}
				iVar2++;
			}
			func_482(0);
		}
	}
	if (!__LIB_6__::func_864(cParam0) == 3)
	{
		func_1489(cParam0);
	}
	func_894(cParam0, 0);
	func_896(cParam0, 26);
	if (iVar0 == 0 || iVar0 == 1)
	{
		func_1313();
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[14 /*4*/].f_2) && PED::IS_PED_DEAD_OR_DYING(Local_236[14 /*4*/].f_2, true))
		{
			__LIB_9__::func_156(cParam0, "MUD1_FAIL_HORSE", "", 1, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[6 /*4*/].f_2) && PED::IS_PED_DEAD_OR_DYING(Local_236[6 /*4*/].f_2, true))
		{
			__LIB_9__::func_156(cParam0, "MUD1_FAIL_HORSE", "", 1, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[20 /*4*/].f_2) && PED::IS_PED_DEAD_OR_DYING(Local_236[20 /*4*/].f_2, true))
		{
			__LIB_9__::func_156(cParam0, "MUD1_FAIL_HORSE", "", 1, 0);
		}
	}
	if (iVar0 == 2)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		func_1298();
	}
	func_440(cParam0);
	if (MAP::DOES_BLIP_EXIST(iLocal_394))
	{
		MAP::_BLIP_SET_MODIFIER(iLocal_394, 231194138);
	}
}

bool func_935(char[4] cParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	if (__LIB_6__::func_862(cParam0, -2147483648))
	{
		return true;
	}
	if (__LIB_9__::func_50(cParam0, iParam1, 4))
	{
		if (__LIB_6__::func_864(cParam0) != 25 && __LIB_6__::func_864(cParam0) != 26)
		{
			if (!__LIB_6__::func_862(cParam0, 512) && !__LIB_6__::func_872(cParam0, 4))
			{
				__LIB_8__::func_725(cParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				Global_1347394 = { Var0 };
				Global_1347394.f_3 = Var0.f_3;
				Global_1572864.f_10 = __LIB_5__::func_24(iParam2);
			}
		}
		func_1499(cParam0);
		if (__LIB_8__::func_616(cParam0))
		{
			__LIB_9__::func_33(cParam0);
		}
		if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 33554432) && __LIB_6__::func_862(cParam0, 524288))
		{
			UILOG::_UILOG_PRINT_CACHED_OBJECTIVE();
		}
		__LIB_6__::func_887(cParam0, 524288);
		__LIB_4__::func_977(&(cParam0->f_7375), 4);
		if (__LIB_9__::func_145(cParam0))
		{
			__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 8388608);
			HUD::_HIDE_HUD_COMPONENT(-1679307491);
			HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
			__LIB_5__::func_112();
		}
		return true;
	}
	return false;
}

bool func_937(char[4] cParam0, int iParam1)
{
	struct<4> Var0;
	if (__LIB_6__::func_872(cParam0, 16384))
	{
		if (__LIB_19__::func_576(cParam0))
		{
			__LIB_5__::func_326(&(cParam0->f_10792));
			__LIB_6__::func_887(cParam0, 2097152);
			__LIB_6__::func_881(cParam0, 16384);
			__LIB_6__::func_869(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!__LIB_6__::func_862(cParam0, 4))
	{
		__LIB_0__::func_16(cParam0, iParam1);
		__LIB_6__::func_868(cParam0, 4);
	}
	Var0 = { __LIB_8__::func_688(cParam0, iParam1) };
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		if (__LIB_6__::func_862(cParam0, 2097152))
		{
			if (__LIB_19__::func_576(cParam0))
			{
				__LIB_6__::func_887(cParam0, 2097152);
				func_885(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_885(cParam0, Var0);
		}
	}
	else if (__LIB_6__::func_862(cParam0, 2097152))
	{
		if (__LIB_19__::func_576(cParam0))
		{
			__LIB_6__::func_887(cParam0, 2097152);
			__LIB_8__::func_689(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
	{
		return func_885(cParam0, Var0);
	}
	return true;
}

Vector3 func_1019(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -1338.286f, 2434.487f, 307.4134f;
				case 1:
					return -1343.241f, 2439.311f, 307.65f;
				case 2:
					return -1352.925f, 2426.371f, 307.0288f;
				case 3:
					return -1352.925f, 2426.371f, 307.0288f;
				case 4:
					return -1352.925f, 2426.371f, 307.0288f;
				case 5:
					return -1352.925f, 2426.371f, 307.0288f;
				case 6:
					return -1352.925f, 2426.371f, 307.0288f;
				case 7:
					return -1358.637f, 2398.116f, 306.3708f;
				case 8:
					return -1352.925f, 2426.371f, 307.0288f;
				case 9:
					return -1352.925f, 2426.371f, 307.0288f;
				case 10:
					return -1352.925f, 2426.371f, 307.0288f;
				case 11:
					return -1352.925f, 2426.371f, 307.0288f;
				case 12:
					return -1353.597f, 2422.724f, 307.1913f;
				case 13:
					return -1352.925f, 2426.371f, 307.0288f;
				case 14:
					return -1352.925f, 2426.371f, 307.0288f;
				case 15:
					return -1356.414f, 2400.031f, 306.1913f;
				case 16:
					return -1352.925f, 2426.371f, 307.0288f;
				case 17:
					return -1352.925f, 2426.371f, 307.0288f;
				case 18:
					return -1352.925f, 2426.371f, 307.0288f;
				case 19:
					return -1352.925f, 2426.371f, 307.0288f;
				case 20:
					return -1352.925f, 2426.371f, 307.0288f;
				case 21:
					return -1358.374f, 2400.551f, 306.1208f;
				case 22:
					return -1350.879f, 2411.385f, 306.4718f;
				case 23:
					return -1333.983f, 2449.37f, 308.0574f;
				case 24:
					return -1339.481f, 2441.568f, 307.6569f;
				case 25:
					return -1346.366f, 2421.712f, 306.4889f;
				case 26:
					return -1342.559f, 2431.42f, 307.5268f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -1781.711f, 1970.27f, 254.0918f;
				case 1:
					return -1034.576f, 427.3918f, 54.8659f;
				case 2:
					return -1352.925f, 2426.371f, 307.0288f;
				case 3:
					return -1352.925f, 2426.371f, 307.0288f;
				case 4:
					return -1352.925f, 2426.371f, 307.0288f;
				case 5:
					return -1352.925f, 2426.371f, 307.0288f;
				case 6:
					return -1352.925f, 2426.371f, 307.0288f;
				case 7:
					return -1836.076f, 1931.134f, 245.4808f;
				case 8:
					return -1352.925f, 2426.371f, 307.0288f;
				case 9:
					return -1352.925f, 2426.371f, 307.0288f;
				case 10:
					return -1352.925f, 2426.371f, 307.0288f;
				case 11:
					return -1352.925f, 2426.371f, 307.0288f;
				case 12:
					return -1353.597f, 2422.724f, 307.1913f;
				case 13:
					return -1352.925f, 2426.371f, 307.0288f;
				case 14:
					return -1352.925f, 2426.371f, 307.0288f;
				case 15:
					return -1832.342f, 1931.078f, 245.9442f;
				case 16:
					return -1352.925f, 2426.371f, 307.0288f;
				case 17:
					return -1352.925f, 2426.371f, 307.0288f;
				case 18:
					return -1352.925f, 2426.371f, 307.0288f;
				case 19:
					return -1352.925f, 2426.371f, 307.0288f;
				case 20:
					return -1352.925f, 2426.371f, 307.0288f;
				case 21:
					return -1833.288f, 1933.688f, 245.7146f;
				case 22:
					return -1815.099f, 1943.29f, 250.1237f;
				case 23:
					return -1788.76f, 1963.858f, 253.8934f;
				case 24:
					return -1781.981f, 1972.65f, 254.3342f;
				case 25:
					return -1806.079f, 1948.703f, 250.9363f;
				case 26:
					return -1796.558f, 1954.346f, 252.8736f;
				case 27:
					return -1823.013f, 1806.86f, 236.5814f;
				case 28:
					return -1596.046f, 1667.732f, 232.3577f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -1073.391f, 450.1841f, 57.7669f;
				case 1:
					return -1034.576f, 427.3918f, 54.8659f;
				case 2:
					return -1352.925f, 2426.371f, 307.0288f;
				case 3:
					return -1352.925f, 2426.371f, 307.0288f;
				case 4:
					return -1352.925f, 2426.371f, 307.0288f;
				case 5:
					return -1352.925f, 2426.371f, 307.0288f;
				case 6:
					return -1352.925f, 2426.371f, 307.0288f;
				case 7:
					return -1044.792f, 417.1035f, 55.4391f;
				case 8:
					return -1352.925f, 2426.371f, 307.0288f;
				case 9:
					return -1352.925f, 2426.371f, 307.0288f;
				case 10:
					return -1092.528f, 447.8072f, 59.95f;
				case 11:
					return -1094.116f, 448.3171f, 59.75f;
				case 12:
					return -1098.069f, 449.8393f, 60f;
				case 13:
					return -1093.457f, 446.1668f, 59.5f;
				case 14:
					return -1102.399f, 451.2261f, 60f;
				case 15:
					return -1051.011f, 389.2618f, 51.665f;
				case 16:
					return -1352.925f, 2426.371f, 307.0288f;
				case 17:
					return -1084.109f, 445.9011f, 58.75f;
				case 18:
					return -1099.946f, 454.982f, 59.75f;
				case 19:
					return -1352.925f, 2426.371f, 307.0288f;
				case 20:
					return -1352.925f, 2426.371f, 307.0288f;
				case 21:
					return -1050.176f, 387.3485f, 51.3522f;
				case 22:
					return -1076.778f, 451.4353f, 58.1334f;
				case 23:
					return -1063.751f, 446.2468f, 57.6429f;
				case 24:
					return -1050.031f, 441.5213f, 55.8681f;
				case 25:
					return -1092.712f, 455.9595f, 59.6547f;
				case 26:
					return -1108.879f, 463.683f, 59.7517f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -1565.507f, 1693.356f, 234.7994f;
				case 1:
					return -1565.444f, 1690.976f, 234.7994f;
				case 2:
					return -1561.308f, 1689.655f, 234.4381f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return -126.0875f, -36.9975f, 94.932f;
				case 1:
					return -1034.576f, 427.3918f, 54.8659f;
				case 2:
					return -1352.925f, 2426.371f, 307.0288f;
				case 3:
					return -1352.925f, 2426.371f, 307.0288f;
				case 4:
					return -1352.925f, 2426.371f, 307.0288f;
				case 5:
					return -1569.683f, 1694.355f, 234.7f;
				case 6:
					return -131.9821f, -31.9745f, 95.118f;
				case 7:
					return -1836.076f, 1931.134f, 245.4808f;
				case 8:
					return -1563.363f, 1688.797f, 234.4789f;
				case 9:
					return -1352.925f, 2426.371f, 307.0288f;
				case 10:
					return -1352.925f, 2426.371f, 307.0288f;
				case 11:
					return -130.8753f, -33.541f, 95.118f;
				case 12:
					return -1353.597f, 2422.724f, 307.1913f;
				case 13:
					return -1352.925f, 2426.371f, 307.0288f;
				case 14:
					return -1352.925f, 2426.371f, 307.0288f;
				case 15:
					return -1832.342f, 1931.078f, 245.9442f;
				case 16:
					return -1352.925f, 2426.371f, 307.0288f;
				case 17:
					return -1352.925f, 2426.371f, 307.0288f;
				case 18:
					return -1352.925f, 2426.371f, 307.0288f;
				case 19:
					return -1352.925f, 2426.371f, 307.0288f;
				case 20:
					return -1352.925f, 2426.371f, 307.0288f;
				case 21:
					return -1833.288f, 1933.688f, 245.7146f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -1030.862f, 423.6617f, 55.8869f;
				case 1:
					return -1034.576f, 427.3918f, 54.8659f;
				case 2:
					return -1352.925f, 2426.371f, 307.0288f;
				case 3:
					return -1352.925f, 2426.371f, 307.0288f;
				case 4:
					return -1352.925f, 2426.371f, 307.0288f;
				case 5:
					return -1569.683f, 1694.355f, 234.7f;
				case 6:
					return -131.9821f, -31.9745f, 95.118f;
				case 7:
					return -1836.076f, 1931.134f, 245.4808f;
				case 8:
					return -1032.768f, 433.9005f, 54.9607f;
				case 9:
					return -1352.925f, 2426.371f, 307.0288f;
				case 10:
					return -1352.925f, 2426.371f, 307.0288f;
				case 11:
					return -130.8753f, -33.541f, 95.118f;
				case 12:
					return -1033.92f, 423.2356f, 55.343f;
				case 13:
					return -1352.925f, 2426.371f, 307.0288f;
				case 14:
					return -1352.925f, 2426.371f, 307.0288f;
				case 15:
					return -1832.342f, 1931.078f, 245.9442f;
				case 16:
					return -1352.925f, 2426.371f, 307.0288f;
				case 17:
					return -1352.925f, 2426.371f, 307.0288f;
				case 18:
					return -1352.925f, 2426.371f, 307.0288f;
				case 19:
					return -1352.925f, 2426.371f, 307.0288f;
				case 20:
					return -1352.925f, 2426.371f, 307.0288f;
				case 21:
					return -1833.288f, 1933.688f, 245.7146f;
				case 22:
					return -1057.575f, 444.3072f, 56.3494f;
				case 23:
					return -1074.841f, 450.2924f, 57.6407f;
				case 24:
					return -1082.207f, 451.3915f, 58.2418f;
				case 25:
					return -1096.808f, 458.9413f, 59.8697f;
				case 26:
					return -1115.703f, 462.4426f, 57.6361f;
				case 27:
					return -110.9677f, -19.6176f, 95.8346f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -108.3663f, -18.742f, 95.0435f;
				case 1:
					return -1034.576f, 427.3918f, 54.8659f;
				case 2:
					return -1352.925f, 2426.371f, 307.0288f;
				case 3:
					return -1352.925f, 2426.371f, 307.0288f;
				case 4:
					return -1352.925f, 2426.371f, 307.0288f;
				case 5:
					return -1569.683f, 1694.355f, 234.7f;
				case 6:
					return -124.0821f, -30.3213f, 94.8438f;
				case 7:
					return -129.2707f, -20.7174f, 95.4756f;
				case 8:
					return -112.4459f, 5.8333f, 93.4913f;
				case 9:
					return -1352.925f, 2426.371f, 307.0288f;
				case 10:
					return -1352.925f, 2426.371f, 307.0288f;
				case 11:
					return -130.8753f, -33.541f, 95.118f;
				case 12:
					return -107.7976f, -3.6053f, 94.4707f;
				case 13:
					return -1352.925f, 2426.371f, 307.0288f;
				case 14:
					return -1352.925f, 2426.371f, 307.0288f;
				case 15:
					return -103.2276f, -42.9607f, 95.0088f;
				case 16:
					return -1352.925f, 2426.371f, 307.0288f;
				case 17:
					return -1352.925f, 2426.371f, 307.0288f;
				case 18:
					return -1352.925f, 2426.371f, 307.0288f;
				case 19:
					return -1352.925f, 2426.371f, 307.0288f;
				case 20:
					return -1352.925f, 2426.371f, 307.0288f;
				case 21:
					return -101.2879f, -39.8651f, 95.0088f;
				case 22:
					return -1057.575f, 444.3072f, 56.3494f;
				case 23:
					return -1074.841f, 450.2924f, 57.6407f;
				case 24:
					return -1082.207f, 451.3915f, 58.2418f;
				case 25:
					return -1096.808f, 458.9413f, 59.8697f;
				case 26:
					return -105.823f, -16.1846f, 95.2676f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -1032.946f, 422.6699f, 55.8659f;
				case 1:
					return -1034.576f, 427.3918f, 54.8659f;
				case 2:
					return -1352.925f, 2426.371f, 307.0288f;
				case 3:
					return -1352.925f, 2426.371f, 307.0288f;
				case 4:
					return -1352.925f, 2426.371f, 307.0288f;
				case 5:
					return -1036.015f, 410.9207f, 55.1159f;
				case 6:
					return -124.0821f, -30.3213f, 94.8438f;
				case 7:
					return -1031.134f, 419.5017f, 55.8659f;
				case 8:
					return -1034.707f, 414.3073f, 55.8659f;
				case 9:
					return -1352.925f, 2426.371f, 307.0288f;
				case 10:
					return -1352.925f, 2426.371f, 307.0288f;
				case 11:
					return -130.8753f, -33.541f, 95.118f;
				case 12:
					return -107.7976f, -3.6053f, 94.4707f;
				case 13:
					return -1352.925f, 2426.371f, 307.0288f;
				case 14:
					return -1352.925f, 2426.371f, 307.0288f;
				case 15:
					return -1514.77f, 1668.053f, 239.126f;
				case 16:
					return -1352.925f, 2426.371f, 307.0288f;
				case 17:
					return -1352.925f, 2426.371f, 307.0288f;
				case 18:
					return -1352.925f, 2426.371f, 307.0288f;
				case 19:
					return -1352.925f, 2426.371f, 307.0288f;
				case 20:
					return -1352.925f, 2426.371f, 307.0288f;
				case 21:
					return -1515.687f, 1671.45f, 239.126f;
				case 22:
					return -1524.087f, 1676.757f, 237.9605f;
				case 23:
					return -1534.98f, 1682.585f, 236.4116f;
				case 24:
					return -1548.342f, 1687.806f, 234.3467f;
				case 25:
					return -1566.478f, 1685.628f, 233.9006f;
				case 26:
					return -1576.728f, 1678.562f, 233.3046f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1020(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -27.74f;
				case 1:
					return 338.7978f;
				case 2:
					return 162.2666f;
				case 3:
					return 162.2666f;
				case 4:
					return 162.2666f;
				case 5:
					return 162.2666f;
				case 6:
					return 162.2666f;
				case 7:
					return 148.7f;
				case 8:
					return 162.2666f;
				case 9:
					return 162.2666f;
				case 10:
					return 162.2666f;
				case 11:
					return 162.2666f;
				case 12:
					return 4.2666f;
				case 13:
					return 162.2666f;
				case 14:
					return 162.2666f;
				case 15:
					return 150.1093f;
				case 16:
					return 162.2666f;
				case 17:
					return 162.2666f;
				case 18:
					return 162.2666f;
				case 19:
					return 162.2666f;
				case 20:
					return 162.2666f;
				case 21:
					return 150.7f;
				case 22:
					return 155.95f;
				case 23:
					return 157.9891f;
				case 24:
					return 163.3973f;
				case 25:
					return 160.0088f;
				case 26:
					return 159.9589f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 128.1333f;
				case 1:
					return 198.7978f;
				case 2:
					return 162.2666f;
				case 3:
					return 162.2666f;
				case 4:
					return 162.2666f;
				case 5:
					return 162.2666f;
				case 6:
					return 162.2666f;
				case 7:
					return 117.22f;
				case 8:
					return 162.2666f;
				case 9:
					return 162.2666f;
				case 10:
					return 162.2666f;
				case 11:
					return 162.2666f;
				case 12:
					return 4.2666f;
				case 13:
					return 162.2666f;
				case 14:
					return 162.2666f;
				case 15:
					return 111.22f;
				case 16:
					return 162.2666f;
				case 17:
					return 162.2666f;
				case 18:
					return 162.2666f;
				case 19:
					return 162.2666f;
				case 20:
					return 162.2666f;
				case 21:
					return 117.22f;
				case 22:
					return 118.4377f;
				case 23:
					return 142.5216f;
				case 24:
					return 137.7538f;
				case 25:
					return 110.9198f;
				case 26:
					return 126.0857f;
				case 27:
					return 244.5713f;
				case 28:
					return 313.5584f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 253.6295f;
				case 1:
					return 198.7978f;
				case 2:
					return 162.2666f;
				case 3:
					return 162.2666f;
				case 4:
					return 162.2666f;
				case 5:
					return 162.2666f;
				case 6:
					return 162.2666f;
				case 7:
					return -84.78f;
				case 8:
					return 162.2666f;
				case 9:
					return 162.2666f;
				case 10:
					return 344.2666f;
				case 11:
					return 94.2666f;
				case 12:
					return -17.7334f;
				case 13:
					return 84.2666f;
				case 14:
					return 96.2666f;
				case 15:
					return 141.22f;
				case 16:
					return 162.2666f;
				case 17:
					return 162.2666f;
				case 18:
					return 162.2666f;
				case 19:
					return 162.2666f;
				case 20:
					return 162.2666f;
				case 21:
					return 141.22f;
				case 22:
					return -111.9716f;
				case 23:
					return -108.1001f;
				case 24:
					return -115.4951f;
				case 25:
					return -101.2002f;
				case 26:
					return -117.2002f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 182.0041f;
				case 1:
					return 362.0041f;
				case 2:
					return 61.6495f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 349.5646f;
				case 1:
					return 198.7978f;
				case 2:
					return 162.2666f;
				case 3:
					return 162.2666f;
				case 4:
					return 162.2666f;
				case 5:
					return 207.92f;
				case 6:
					return -128.4354f;
				case 7:
					return 117.22f;
				case 8:
					return -48.2335f;
				case 9:
					return 162.2666f;
				case 10:
					return 162.2666f;
				case 11:
					return 27.5646f;
				case 12:
					return 4.2666f;
				case 13:
					return 162.2666f;
				case 14:
					return 162.2666f;
				case 15:
					return 111.22f;
				case 16:
					return 162.2666f;
				case 17:
					return 162.2666f;
				case 18:
					return 162.2666f;
				case 19:
					return 162.2666f;
				case 20:
					return 162.2666f;
				case 21:
					return 117.22f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return -6.1518f;
				case 1:
					return 198.7978f;
				case 2:
					return 162.2666f;
				case 3:
					return 162.2666f;
				case 4:
					return 162.2666f;
				case 5:
					return 207.92f;
				case 6:
					return -128.4354f;
				case 7:
					return 117.22f;
				case 8:
					return 160.5648f;
				case 9:
					return 162.2666f;
				case 10:
					return 162.2666f;
				case 11:
					return 27.5646f;
				case 12:
					return -76.152f;
				case 13:
					return 162.2666f;
				case 14:
					return 162.2666f;
				case 15:
					return 111.22f;
				case 16:
					return 162.2666f;
				case 17:
					return 162.2666f;
				case 18:
					return 162.2666f;
				case 19:
					return 162.2666f;
				case 20:
					return 162.2666f;
				case 21:
					return 117.22f;
				case 22:
					return 250.8694f;
				case 23:
					return 251.5718f;
				case 24:
					return 263.6948f;
				case 25:
					return 242.3072f;
				case 26:
					return 271.8767f;
				case 27:
					return 130.3782f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 101.9264f;
				case 1:
					return 198.7978f;
				case 2:
					return 162.2666f;
				case 3:
					return 162.2666f;
				case 4:
					return 162.2666f;
				case 5:
					return 207.92f;
				case 6:
					return 285.9815f;
				case 7:
					return 52.5858f;
				case 8:
					return 160.5858f;
				case 9:
					return 162.2666f;
				case 10:
					return 162.2666f;
				case 11:
					return 27.5646f;
				case 12:
					return 162.5858f;
				case 13:
					return 162.2666f;
				case 14:
					return 162.2666f;
				case 15:
					return -283.9108f;
				case 16:
					return 162.2666f;
				case 17:
					return 162.2666f;
				case 18:
					return 162.2666f;
				case 19:
					return 162.2666f;
				case 20:
					return 162.2666f;
				case 21:
					return -247.9108f;
				case 22:
					return 250.8694f;
				case 23:
					return 251.5718f;
				case 24:
					return 263.6948f;
				case 25:
					return 242.3072f;
				case 26:
					return -249.9108f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 160.7978f;
				case 1:
					return 198.7978f;
				case 2:
					return 162.2666f;
				case 3:
					return 162.2666f;
				case 4:
					return 162.2666f;
				case 5:
					return 154.7978f;
				case 6:
					return 285.9815f;
				case 7:
					return 156.7978f;
				case 8:
					return 344.7978f;
				case 9:
					return 162.2666f;
				case 10:
					return 162.2666f;
				case 11:
					return 27.5646f;
				case 12:
					return 162.5858f;
				case 13:
					return 162.2666f;
				case 14:
					return 162.2666f;
				case 15:
					return 242f;
				case 16:
					return 162.2666f;
				case 17:
					return 162.2666f;
				case 18:
					return 162.2666f;
				case 19:
					return 162.2666f;
				case 20:
					return 162.2666f;
				case 21:
					return 242f;
				case 22:
					return 240.217f;
				case 23:
					return 232.8784f;
				case 24:
					return 256.8684f;
				case 25:
					return -72.69f;
				case 26:
					return 298.3477f;
			}
			break;
	}
	return 0f;
}

void func_1170(bool bParam0)
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (bParam0)
	{
		func_329(2032023096 /* GXTEntry: "The Nuevo Paraiso" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("PROVISION_TALISMAN_EAGLE_TALON"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), true);
	}
	else
	{
		func_1672(2032023096 /* GXTEntry: "The Nuevo Paraiso" */);
		func_332(joaat("PROVISION_TALISMAN_EAGLE_TALON"));
		func_687(joaat("PROVISION_TRINKET_IGUANA_SCALE"), 1, 1, -142743235, 1);
		__LIB_1__::func_125(146323340, __LIB_1__::func_124());
		Var0 = { __LIB_1__::func_623() };
		if (__LIB_0__::func_78(&Var0) == -1387633835)
		{
			__LIB_1__::func_126(&Var0);
			func_1677(Var0);
		}
		iVar7 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar8 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar9 = 1;
		__LIB_1__::func_178(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (__LIB_0__::func_809(iVar6) == joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"))
			{
				__LIB_0__::func_810(iVar6, iVar7);
				__LIB_0__::func_811(iVar6, iVar8);
				__LIB_0__::func_812(iVar6, iVar9);
				__LIB_0__::func_813(iVar6, 0);
				if (__LIB_1__::func_127(iVar6))
				{
					__LIB_1__::func_608(iVar6);
				}
				iVar10 = __LIB_0__::func_553(iVar8);
				__LIB_1__::func_820(iVar6, iVar10);
			}
			iVar6++;
		}
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_EDITION_SPECIAL_REDEEMED"), false);
	}
}

void func_1173(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (bParam0)
	{
		if (UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_329(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("PROVISION_ANIMAL_FAT"), 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_329(joaat("CONSUMABLE_OAT_CAKES"), 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), true);
	}
	else
	{
		if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED")))
		{
			return;
		}
		func_687(joaat("CONSUMABLE_SPECIAL_MEDICINE_CRAFTED"), 3, 1, -142743235, 1);
		func_687(joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"), 3, 1, -142743235, 1);
		func_687(joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"), 3, 1, -142743235, 1);
		func_687(joaat("CONSUMABLE_TENDER_PORK_WILD_MINT_COOKED"), 5, 1, -142743235, 1);
		func_687(joaat("CONSUMABLE_PRIME_BEEF_OREGANO_COOKED"), 5, 1, -142743235, 1);
		func_687(joaat("CONSUMABLE_GAME_MEAT_THYME_COOKED"), 5, 1, -142743235, 1);
		func_687(joaat("CONSUMABLE_HERB_OLEANDER_SAGE"), 5, 1, -142743235, 1);
		func_687(joaat("PROVISION_ANIMAL_FAT"), 5, 1, -142743235, 1);
		func_687(joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"), 3, 1, -142743235, 1);
		func_687(joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"), 3, 1, -142743235, 1);
		func_687(joaat("CONSUMABLE_OAT_CAKES"), 10, 1, -142743235, 1);
		iVar1 = joaat("BREED_TENNESSEEWALKER_CHESTNUT");
		iVar2 = joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT");
		iVar3 = 1;
		__LIB_1__::func_178(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (__LIB_0__::func_809(iVar0) == joaat("BREED_ARDENNES_IRONGREYROAN"))
			{
				__LIB_0__::func_810(iVar0, iVar1);
				__LIB_0__::func_811(iVar0, iVar2);
				__LIB_0__::func_812(iVar0, iVar3);
				__LIB_0__::func_813(iVar0, 0);
				if (__LIB_1__::func_127(iVar0))
				{
					__LIB_1__::func_608(iVar0);
				}
				iVar4 = __LIB_0__::func_553(iVar2);
				__LIB_1__::func_820(iVar0, iVar4);
			}
			iVar0++;
		}
		__LIB_1__::func_851();
		UNLOCK::_UNLOCK_SET_UNLOCKED(joaat("SP_GAME_CONTENT_PRE_ORDER_ITEMS_REDEEMED"), false);
	}
}

int func_1218(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	struct<14> Var35;
	int iVar49;
	struct<9> Var50;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	if (__LIB_0__::func_192(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			INVENTORY::_0x42A2F33A1942E865(iVar33);
		}
		iVar49 = 0;
		if (__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
				{
					iVar49 = (iVar49 + Var0[iVar32 /*2*/].f_1);
					Jump @229; //curOff = 201
				}
				else if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = __LIB_0__::func_372(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = ITEMDATABASE::_ITEM_DATABASE_CREATE_ITEM_COLLECTION(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = __LIB_0__::func_374(iVar62, iVar61);
					if (__LIB_0__::func_144(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1218(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = INVENTORY::_0x640F890C3E5A3FFD(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1218(iVar63, -915411861, 1, 0, 0));
								}
								INVENTORY::_0x42A2F33A1942E865(iVar33);
							}
						}
					}
					iVar62++;
				}
				ITEMDATABASE::_0xCBB7B6EDFA933ADE(iVar61);
			}
		}
		return iVar49;
	}
	if (!__LIB_0__::func_976(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == joaat("CURRENCY_CASH") || Var0[iVar32 /*2*/] == joaat("CURRENCY_GOLD_BAR"))
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

int func_1232()
{
	if (__LIB_0__::func_28())
	{
		if (!__LIB_1__::func_185(3))
		{
			return __LIB_0__::func_559(43);
		}
		if (__LIB_1__::func_185(38) && !__LIB_1__::func_185(43))
		{
			return func_1708(8);
		}
	}
	return 0;
}

bool func_1233(int iParam0)
{
	if (!__LIB_0__::func_20(iParam0))
	{
		return false;
	}
	return ((Global_1888801[iParam0 /*35*/].f_20 == 1 || Global_1888801[iParam0 /*35*/].f_20 == 2) && !func_1709(iParam0));
}

void func_1244(char[4] cParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = __LIB_5__::func_24(iParam1);
	if (!__LIB_4__::func_976(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		cParam0->f_1[iVar0 /*22*/][iVar1] = 59590;
		MISC::CLEAR_BIT(&(cParam0->f_1[iVar0 /*22*/].f_17), iVar1);
		iVar1++;
	}
}

void func_1246(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			CLOCK::SET_CLOCK_TIME(7, 0, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			break;
		case 1:
			CLOCK::ADVANCE_CLOCK_TIME_TO(8, 23, 0);
			break;
		case 2:
			CLOCK::ADVANCE_CLOCK_TIME_TO(9, 0, 0);
			break;
		case 3:
			CLOCK::ADVANCE_CLOCK_TIME_TO(12, 0, 0);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("mud1_sunpos1");
			break;
		case 4:
			CLOCK::ADVANCE_CLOCK_TIME_TO(16, 0, 0);
			VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[3], 0f);
			VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[4], 0f);
			VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[2], 0f);
			VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[0], 0f);
			VEHICLE::_SET_VEHICLE_SNOW_LEVEL(iLocal_423[1], 0f);
			VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[3], 0f);
			VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[4], 0f);
			VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[2], 0f);
			VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[0], 0f);
			VEHICLE::_SET_VEHICLE_WET_LEVEL(iLocal_423[1], 0f);
			break;
		case 5:
			GRAPHICS::SET_TIMECYCLE_MODIFIER("mud1_sunpos2");
			break;
		case 6:
			CLOCK::ADVANCE_CLOCK_TIME_TO(16, 0, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			break;
		case 7:
			CLOCK::ADVANCE_CLOCK_TIME_TO(16, 28, 0);
			break;
		case 8:
			CLOCK::ADVANCE_CLOCK_TIME_TO(17, 0, 0);
			CLOCK::PAUSE_CLOCK(true, 0);
			break;
		case 9:
			CLOCK::ADVANCE_CLOCK_TIME_TO(17, 39, 0);
			break;
		case 10:
			CLOCK::ADVANCE_CLOCK_TIME_TO(18, 0, 0);
			break;
		case 11:
			CLOCK::ADVANCE_CLOCK_TIME_TO(19, 0, 0);
			break;
		case 12:
			CLOCK::SET_CLOCK_TIME(9, 0, 0);
			MISC::_SET_WEATHER_TYPE(joaat("HIGHPRESSURE"), true, false, false, 0f, false);
			break;
	}
}

void func_1252(bool bParam0)
{
	AUDIO::_0x0D7FD6A55FD63AEF(8, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(26, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(20, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(14, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(19, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(16, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(17, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(15, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(10, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(13, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(12, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(21, 1, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(3, 3, bParam0);
	AUDIO::_0x0D7FD6A55FD63AEF(5, 3, bParam0);
	if (bParam0)
	{
		PED::_0x1E017404784AA6A3(Local_236[1 /*4*/].f_1, joaat("MUD1_RIDE2"));
		PED::_0x1E017404784AA6A3(Local_236[7 /*4*/].f_1, joaat("MUD1_RIDE2"));
	}
	else
	{
		PED::_0x2B4CE170DE09F346(Local_236[1 /*4*/].f_1, joaat("MUD1_RIDE2"));
		PED::_0x2B4CE170DE09F346(Local_236[7 /*4*/].f_1, joaat("MUD1_RIDE2"));
	}
}

void func_1257()
{
	if (__LIB_0__::func_272(Local_236[18 /*4*/].f_1, 0) && !__LIB_4__::func_257(iLocal_423[1]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_236[18 /*4*/].f_1, true);
		if (PED::_IS_PED_HOGTIED(Local_236[18 /*4*/].f_1) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_236[18 /*4*/].f_1, iLocal_423[1]))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_236[18 /*4*/].f_1, iLocal_423[1], 0, -0.15f, -1.35f, 1.145f, 0f, 0f, 172.5f, false, false, false, false, 2, true, false, false);
		}
		if (!PED::_IS_PED_HOGTIED(Local_236[18 /*4*/].f_1))
		{
			TASK::TASK_CARRIABLE(Local_236[18 /*4*/].f_1, joaat("HOGTIED_PED"), 0, 0, 0);
			ENTITY::_0x18FF3110CF47115D(Local_236[18 /*4*/].f_1, 1, 0);
			ENTITY::_0x18FF3110CF47115D(Local_236[18 /*4*/].f_1, 12, 0);
			PED::_0x6569F31A01B4C097(Local_236[18 /*4*/].f_1, 4, 0);
		}
	}
}

void func_1258()
{
	ENTITY::SET_ENTITY_COORDS(iLocal_423[0], func_1266(2, 24), true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_423[0], func_1734(2, 24));
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_423[0], 1.401298E-45f);
	ENTITY::SET_ENTITY_COORDS(iLocal_423[1], func_1266(2, 23), true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_423[1], func_1734(2, 23));
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_423[1], 1.401298E-45f);
	ENTITY::SET_ENTITY_COORDS(iLocal_423[2], func_1266(2, 22), true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_423[2], func_1734(2, 22));
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_423[2], 1.401298E-45f);
	ENTITY::SET_ENTITY_COORDS(iLocal_423[3], func_1266(2, 25), true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_423[3], func_1734(2, 25));
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_423[3], 1.401298E-45f);
	ENTITY::SET_ENTITY_COORDS(iLocal_423[4], func_1266(2, 26), true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(iLocal_423[4], func_1734(2, 26));
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_423[4], 1.401298E-45f);
	__LIB_2__::func_597(&(Local_236[1 /*4*/].f_1), &(iLocal_423[4]), 0, 1);
	__LIB_2__::func_597(&Global_35, &(iLocal_423[4]), -1, 1);
	__LIB_2__::func_597(&(Local_236[4 /*4*/].f_1), &(iLocal_423[3]), 0, 1);
	__LIB_2__::func_597(&(Local_236[2 /*4*/].f_1), &(iLocal_423[0]), -1, 1);
	__LIB_2__::func_597(&(Local_236[15 /*4*/].f_1), &(iLocal_423[0]), 0, 1);
	__LIB_2__::func_597(&(Local_236[5 /*4*/].f_1), &(iLocal_423[2]), -1, 1);
	__LIB_2__::func_597(&(Local_236[11 /*4*/].f_1), &(iLocal_423[2]), 0, 1);
	__LIB_2__::func_597(&(Local_236[13 /*4*/].f_1), &(iLocal_423[1]), -1, 1);
	__LIB_2__::func_597(&(Local_236[12 /*4*/].f_1), &(iLocal_423[1]), 0, 1);
	__LIB_2__::func_597(&(Local_236[10 /*4*/].f_1), &(iLocal_423[3]), 3, 1);
	__LIB_2__::func_597(&(Local_236[9 /*4*/].f_1), &(iLocal_423[3]), 2, 1);
	__LIB_2__::func_597(&(Local_236[3 /*4*/].f_1), &(iLocal_423[3]), 1, 1);
	__LIB_2__::func_597(&(Local_236[16 /*4*/].f_1), &(iLocal_423[0]), 3, 1);
	__LIB_2__::func_597(&(Local_236[17 /*4*/].f_1), &(iLocal_423[0]), 2, 1);
	__LIB_2__::func_597(&(Local_236[19 /*4*/].f_1), &(iLocal_423[0]), 1, 1);
	ENTITY::SET_ENTITY_COORDS(Local_236[6 /*4*/].f_2, func_1266(2, 7), true, false, true, true);
	ENTITY::SET_ENTITY_HEADING(Local_236[6 /*4*/].f_2, func_1734(2, 7));
	ENTITY::SET_ENTITY_COORDS(Local_236[0 /*4*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[2], 0f, -1.5f, 1.5f), true, false, true, true);
	ENTITY::SET_ENTITY_COORDS(Local_236[8 /*4*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[2], 0f, -1f, 1.5f), true, false, true, true);
}

Vector3 func_1266(int iParam0, int iParam1)
{
	return func_1019(iParam0, iParam1);
}

int func_1267(int iParam0)
{
	return Local_236[iParam0 /*4*/].f_2;
}

void func_1268(char[4] cParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;
	char* sVar2;
	bVar0 = false;
	iVar1 = 0;
	if (__LIB_6__::func_864(cParam0) == iLocal_53)
	{
		bVar0 = true;
	}
	sVar2 = func_195(iParam1);
	if (__LIB_6__::func_864(cParam0) != iLocal_53)
	{
		func_1737(cParam0, &(Local_236[6 /*4*/].f_1), &(Local_236[6 /*4*/].f_2), 0, sVar2);
		func_1738(cParam0, &(Local_236[20 /*4*/].f_1), &(Local_236[20 /*4*/].f_2), 2, bVar0, sVar2, -0.75f);
	}
	else
	{
		func_1737(cParam0, &(Local_236[20 /*4*/].f_1), &(Local_236[20 /*4*/].f_2), 2, sVar2);
	}
	func_1738(cParam0, &(Local_236[14 /*4*/].f_1), &(Local_236[14 /*4*/].f_2), 1, bVar0, sVar2, 0.75f);
	Local_115[iLocal_55 /*24*/].f_8 = 5f;
	Local_115[iLocal_56 /*24*/].f_8 = 5f;
	Local_115[iLocal_57 /*24*/].f_8 = 5f;
	Local_115[iLocal_58 /*24*/].f_8 = 5f;
	Local_115[iLocal_59 /*24*/].f_8 = 5f;
	func_1739(&(iLocal_423[iLocal_55]), 0f);
	func_1739(&(iLocal_423[iLocal_56]), 0f);
	func_1739(&(iLocal_423[iLocal_57]), 0f);
	func_1739(&(iLocal_423[iLocal_58]), 0f);
	func_1739(&(iLocal_423[iLocal_59]), 0f);
	Local_115[iLocal_55 /*24*/].f_10 = 4f;
	Local_115[iLocal_56 /*24*/].f_10 = 5f;
	Local_115[iLocal_57 /*24*/].f_10 = 3f;
	Local_115[iLocal_58 /*24*/].f_10 = 2.5f;
	Local_115[iLocal_59 /*24*/].f_10 = 1f;
	Local_115[iLocal_58 /*24*/].f_6 = 35f;
	Local_115[iLocal_58 /*24*/].f_7 = 14f;
	func_1740();
	if (Local_115[iLocal_55 /*24*/])
	{
		func_1741(cParam0, iLocal_55, iLocal_55, iLocal_56, iParam1);
	}
	if (Local_115[iLocal_56 /*24*/])
	{
		func_1741(cParam0, iLocal_55, iLocal_56, iLocal_57, iParam1);
	}
	if (Local_115[iLocal_57 /*24*/])
	{
		func_1741(cParam0, iLocal_56, iLocal_57, iLocal_58, iParam1);
	}
	if (Local_115[iLocal_58 /*24*/])
	{
		func_1741(cParam0, iLocal_57, iLocal_58, iLocal_59, iParam1);
	}
	func_1742(cParam0, iParam1, bParam2);
}

void func_1270(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_879(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1271()
{
	int iVar0;
	iVar0 = 0;
	if (!Local_470[iVar0 /*4*/].f_2)
	{
		if (!func_1743(iVar0))
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[2]))
		{
			return;
		}
		if (!__LIB_0__::func_272(Local_236[0 /*4*/].f_1, 1))
		{
			return;
		}
		if (!__LIB_0__::func_272(Local_236[8 /*4*/].f_1, 1))
		{
			return;
		}
		func_1744(iVar0);
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_470[iVar0 /*4*/], false))
		{
			ANIMSCENE::START_ANIM_SCENE(Local_470[iVar0 /*4*/]);
			Local_470[iVar0 /*4*/].f_2 = 1;
		}
	}
}

int func_1273(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	iVar2 = ITEMSET::CREATE_ITEMSET(true);
	iParam1 = iParam1;
	iVar5 = PROPSET::_GET_VEHICLE_PROPSET(iParam0);
	iVar0 = PROPSET::_GET_ENTITIES_FROM_PROPSET(iVar5, iVar2, iParam1, false, false);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar1, iVar2);
		iVar4 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar3);
		return iVar4;
		iVar1++;
	}
	return 0;
}

void func_1275(char[4] cParam0)
{
	func_1314(cParam0);
	func_1746(cParam0, 4);
	switch (__LIB_8__::func_618(cParam0))
	{
		case 0:
			__LIB_0__::func_45("MUD1_LMT_HLP2", 10000, 0, 0, 0, 1);
			__LIB_9__::func_60(cParam0, 1);
			break;
		case 1:
			if (__LIB_1__::func_205(Global_35, iLocal_395[0], 1, 0))
			{
				__LIB_9__::func_60(cParam0, -1);
				__LIB_1__::func_283(&uLocal_63, 0);
			}
			break;
		case 2:
			__LIB_9__::func_60(cParam0, -1);
			break;
	}
}

void func_1276()
{
	if (!__LIB_1__::func_205(Global_35, iLocal_395[0], 1, 0))
	{
		return;
	}
	if (func_1747(8) == 0)
	{
		func_1284(8, 0);
		return;
	}
	if (func_1747(9) == 0)
	{
		func_1284(9, 0);
		return;
	}
	if (func_1747(10) == 0)
	{
		func_1284(10, 0);
		return;
	}
	if (func_1747(11) == 0)
	{
		func_1284(11, 0);
		return;
	}
}

void func_1277(char[4] cParam0)
{
	int iVar0;
	func_1748();
	func_1749(cParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
	{
		func_1750(cParam0, 4);
	}
	iVar0 = func_1450(cParam0);
	if (iVar0 > 1)
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[7 /*4*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]))
	{
		__LIB_11__::func_380(cParam0, iLocal_423[3], Local_236[7 /*4*/].f_1);
		func_1750(cParam0, 3);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[2 /*4*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_423[0]))
	{
		__LIB_11__::func_380(cParam0, iLocal_423[0], Local_236[2 /*4*/].f_1);
		func_1750(cParam0, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[13 /*4*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_423[1]))
	{
		__LIB_11__::func_380(cParam0, iLocal_423[1], Local_236[13 /*4*/].f_1);
		func_1750(cParam0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[5 /*4*/].f_1) && ENTITY::DOES_ENTITY_EXIST(iLocal_423[2]))
	{
		__LIB_11__::func_380(cParam0, iLocal_423[2], Local_236[5 /*4*/].f_1);
		func_1750(cParam0, 2);
	}
}

int func_1284(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 3)
	{
		return 0;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	if (__LIB_0__::func_1(Local_458[iVar1], iVar2))
	{
		if (Local_458.f_8 == iParam0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (__LIB_0__::func_1(Local_458.f_4[iVar1], iVar2))
	{
		return 9;
	}
	if (bParam1)
	{
		Local_458.f_9 = 1;
	}
	if (iParam0 == 12)
	{
		func_1755(8);
		func_1755(9);
		func_1755(10);
		func_1755(11);
	}
	__LIB_1__::func_336(&(Local_458.f_4[iVar1]), iVar2);
	return 9;
}

void func_1285()
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	iVar0 = 10;
	if (!func_1743(iVar0))
	{
		return;
	}
	if (!Local_470[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "ARTHUR", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_236[1 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "HoseaMatthews", Local_236[1 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[4 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "BillWilliamson", Local_236[4 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[6 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "JavierEscuella", Local_236[6 /*4*/].f_1, 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_470[iVar0 /*4*/], false))
	{
		vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[4], 0f, 0f, 0f) };
		vVar4 = { ENTITY::GET_ENTITY_ROTATION(iLocal_423[4], 2) };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_470[iVar0 /*4*/], vVar1, vVar4, 2);
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Local_470[iVar0 /*4*/], iLocal_423[4], 0);
		ANIMSCENE::START_ANIM_SCENE(Local_470[iVar0 /*4*/]);
		Local_470[iVar0 /*4*/].f_2 = 1;
	}
}

void func_1287(int iParam0)
{
	int iVar0;
	if (!__LIB_0__::func_272(Local_236[iParam0 /*4*/].f_1, 0))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_236[iParam0 /*4*/].f_1, false, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1042.371f, 420.8946f, 54.3515f, 0.101f, -1, 0.25f, 0, 40000f);
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, 0, -1f, -1f, -1f);
	TASK::CLOSE_SEQUENCE_TASK(iVar0);
	TASK::TASK_PERFORM_SEQUENCE(Local_236[iParam0 /*4*/].f_1, iVar0);
	TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}

void func_1288(char[4] cParam0)
{
	struct<4> Var0;
	Var0 = { __LIB_8__::func_688(cParam0, __LIB_9__::func_40(cParam0)) };
	func_1756(cParam0, &Var0);
}

void func_1289()
{
	if (__LIB_0__::func_272(Local_236[7 /*4*/].f_1, 0))
	{
		func_1270(Local_236[7 /*4*/].f_1, func_235(7, 8), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(Local_236[1 /*4*/].f_1, 0))
	{
		func_1270(Local_236[1 /*4*/].f_1, func_235(7, 1), 2, 1073741824 /* Float: 2f */);
	}
	if (__LIB_0__::func_272(Global_35, 0))
	{
		func_1270(Global_35, func_235(7, 0), 2, 1073741824 /* Float: 2f */);
	}
}

bool func_1290(char[4] cParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
	{
		VEHICLE::_0x201B8ED4FF7FE9F5(iLocal_423[4]);
	}
	__LIB_9__::func_53(cParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
	{
		func_1468(cParam0, &(iLocal_423[4]), "wagon02x", 0, 0, 0);
	}
	else
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_422))
	{
		iLocal_422 = VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iLocal_423[4], 4);
	}
	__LIB_9__::func_154(cParam0, Local_236[7 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[1 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_422, "s_wagonwheel01x", 0, 0, 0, 0);
	return true;
}

void func_1291()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_385))
	{
		if (__LIB_0__::func_272(Local_236[7 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_385, "CS_CharlesSmith", Local_236[7 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[1 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_385, "CS_HoseaMatthews", Local_236[1 /*4*/].f_1, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_385, "wagon02", iLocal_423[4], 0);
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_385, false))
		{
			ANIMSCENE::START_ANIM_SCENE(iLocal_385);
		}
	}
}

void func_1292(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[5 /*4*/].f_1))
		{
			__LIB_11__::func_379(cParam0, Local_236[5 /*4*/].f_1);
		}
		func_1757(iLocal_423[2], &uLocal_432);
		VEHICLE::DELETE_VEHICLE(&(iLocal_423[2]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[2 /*4*/].f_1))
		{
			__LIB_11__::func_379(cParam0, Local_236[2 /*4*/].f_1);
		}
		func_1757(iLocal_423[0], &uLocal_435);
		VEHICLE::DELETE_VEHICLE(&(iLocal_423[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[13 /*4*/].f_1))
		{
			__LIB_11__::func_379(cParam0, Local_236[13 /*4*/].f_1);
		}
		func_1757(iLocal_423[1], &uLocal_438);
		VEHICLE::DELETE_VEHICLE(&(iLocal_423[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[11 /*4*/].f_1))
	{
		__LIB_11__::func_379(cParam0, Local_236[11 /*4*/].f_1);
	}
	iVar0 = func_1267(14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		__LIB_6__::func_908(&(cParam0->f_7375), iVar0, "Horse_01^2");
		PED::DELETE_PED(&iVar0);
	}
	iVar1 = func_1267(20);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		__LIB_6__::func_908(&(cParam0->f_7375), iVar1, "Horse_01^1");
		PED::DELETE_PED(&iVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[4 /*4*/].f_1))
	{
		func_479(cParam0, 4, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]))
	{
		func_1757(iLocal_423[3], &uLocal_429);
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[4 /*4*/].f_1))
		{
			__LIB_11__::func_379(cParam0, Local_236[4 /*4*/].f_1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[7 /*4*/].f_1))
		{
			__LIB_11__::func_379(cParam0, Local_236[7 /*4*/].f_1);
		}
		VEHICLE::DELETE_VEHICLE(&(iLocal_423[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[6 /*4*/].f_1))
	{
		__LIB_11__::func_379(cParam0, Local_236[6 /*4*/].f_1);
		func_479(cParam0, 6, 1, 1);
	}
	func_479(cParam0, 5, 1, 1);
	func_479(cParam0, 2, 1, 1);
	func_479(cParam0, 3, 1, 1);
	func_479(cParam0, 8, 1, 1);
	func_479(cParam0, 9, 1, 1);
	func_479(cParam0, 10, 1, 1);
	func_479(cParam0, 12, 1, 1);
	func_479(cParam0, 0, 1, 1);
	func_479(cParam0, 13, 1, 1);
	func_479(cParam0, 14, 1, 1);
	func_479(cParam0, 15, 1, 1);
	func_479(cParam0, 16, 1, 1);
	func_479(cParam0, 17, 1, 1);
	func_479(cParam0, 18, 1, 1);
	func_479(cParam0, 19, 1, 1);
	func_479(cParam0, 20, 1, 1);
	func_479(cParam0, 11, 1, 1);
	__LIB_9__::func_70(cParam0, 0);
}

void func_1294(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	struct<7> Var1;
	if (CAM::DOES_CAM_EXIST(iLocal_531[iParam0]))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_531)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_531[iVar0]))
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_531[iVar0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_531[iVar0], false);
			}
			CAM::DESTROY_CAM(iLocal_531[iVar0], false);
		}
		iVar0++;
	}
	Var1 = { func_1760(iParam0) };
	iLocal_531[iParam0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var1, Var1.f_3, Var1.f_6, false, 2);
	CAM::SHAKE_CAM(iLocal_531[iParam0], "HAND_SHAKE", fParam1);
	CAM::SET_CAM_ACTIVE(iLocal_531[iParam0], true);
	CAM::SET_CAM_MOTION_BLUR_STRENGTH(iLocal_531[iParam0], 0f);
	CAM::RENDER_SCRIPT_CAMS(true, bParam2, 3000, true, false, 0);
}

void func_1296(char[4] cParam0)
{
	if (Local_614.f_27 != 0)
	{
	}
	switch (Local_614.f_27)
	{
		case 1:
			if (__LIB_9__::func_350(cParam0, "MUD1_PICKUP", 0, 0, 0))
			{
				Local_614.f_27 = 0;
			}
			break;
		case 2:
			if (__LIB_9__::func_350(cParam0, "MUD1_THERE", 0, 0, 0))
			{
				Local_614.f_27 = 0;
			}
			break;
		case 3:
			if (__LIB_9__::func_350(cParam0, "MUD1_NEARLY", 0, 0, 0))
			{
				Local_614.f_27 = 5;
			}
			break;
	}
}

bool func_1297()
{
	float fVar0;
	float fVar1;
	float fVar2;
	PAD::_SET_CONTROL_CONTEXT(5, joaat("MUDTOWN1WHEELFIXING"));
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_NEXT_WHEEL"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_USE_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_QUICK_EQUIP_ITEM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_CRAFTING_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	if (bLocal_659)
	{
		if ((((!Local_614.f_26 == 0 && !Local_614.f_26 == 1) && !Local_614.f_26 == 2) && !Local_614.f_26 == 17) && !Local_614.f_26 == 19)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || ENTITY::IS_ENTITY_DEAD(Global_35))
			{
				return false;
			}
			if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
			{
				return false;
			}
			if (!TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Global_35))
			{
				return false;
			}
		}
	}
	switch (Local_614.f_26)
	{
		case 0:
			func_1294(1, 1028443341 /* Float: 0.05f */, 0);
			bLocal_659 = true;
			CAM::_0x8459B3E64257B21D(0f);
			Local_614.f_26 = 3;
			break;
		case 3:
			Local_614.f_2 = __LIB_1__::func_877(func_424(5), Local_614.f_37, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			__LIB_1__::func_148(&(Local_614.f_28));
			Local_614.f_26 = 4;
			break;
		case 4:
			if ((__LIB_1__::func_514(Local_614.f_2, 1) || PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_ACTION_UP")) >= 0.6f) || PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_ACTION_UP")) >= 0.6f)
			{
				Local_614 = 1f;
				__LIB_1__::func_748(&(Local_614.f_2), 1, 1);
				Local_614.f_26 = 5;
			}
			break;
		case 5:
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_531[1]))
			{
				func_1763(2, 4000, 1028443341 /* Float: 0.05f */);
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, func_424(6));
				Local_614.f_26 = 6;
			}
			break;
		case 6:
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_653, vLocal_656, true);
			fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vLocal_653, ENTITY::GET_ENTITY_COORDS(iLocal_422, true, false), true);
			fVar0 = (fVar2 / fVar1);
			if (!CAM::IS_CAM_INTERPOLATING(iLocal_531[2]))
			{
				func_1764(2, fVar0, 0);
			}
			else
			{
				vLocal_653 = { ENTITY::GET_ENTITY_COORDS(iLocal_422, true, false) };
			}
			if (!__LIB_0__::func_139(Local_614.f_4.f_1) && fVar2 < 3.8f)
			{
				Local_614.f_4.f_1 = __LIB_4__::func_864(func_424(9), joaat("INPUT_MINIGAME_ACTION_LEFT"), 3, 1, 1, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			else if (fVar2 >= 3.8f && __LIB_0__::func_139(Local_614.f_4.f_1))
			{
				__LIB_1__::func_748(&(Local_614.f_4.f_1), 1, 1);
			}
			if (PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_ACTION_LEFT")) >= 0.6f || PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_ACTION_LEFT")) >= 0.6f)
			{
				Local_614.f_4 = 0.25f;
				if (fVar2 < 3.9f)
				{
					PAD::SET_PAD_SHAKE(0, BUILTIN::FLOOR((MISC::GET_FRAME_TIME() * 1000f)), 32);
				}
			}
			else
			{
				Local_614.f_4 = 0.5f;
			}
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "RollDirection", Local_614.f_4);
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, func_424(8)))
			{
				if (__LIB_0__::func_139(Local_614.f_4.f_1))
				{
					__LIB_1__::func_748(&(Local_614.f_4.f_1), 1, 1);
				}
				func_1763(4, 2000, 1028443341 /* Float: 0.05f */);
				Local_614.f_26 = 7;
			}
			break;
		case 7:
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, func_424(10));
			Local_614.f_26 = 8;
			break;
		case 8:
			if (!__LIB_0__::func_139(Local_614.f_6.f_2))
			{
				Local_614.f_27 = 1;
				Local_614.f_6.f_2 = __LIB_4__::func_864(func_424(12), joaat("INPUT_MINIGAME_ACTION_UP"), 3, 1, 1, 0, 570, 4000, 10, 1073741824 /* Float: 2f */, joaat("SHORT_TIMED_EVENT"), 0);
			}
			func_1764(4, Local_614.f_6, 0);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(11), Local_614.f_6);
			if ((__LIB_1__::func_514(Local_614.f_6.f_2, 1) || PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_ACTION_UP")) >= 0.3f) || PAD::GET_DISABLED_CONTROL_NORMAL(0, joaat("INPUT_MINIGAME_ACTION_UP")) >= 0.3f)
			{
				func_1763(6, 2000, 1028443341 /* Float: 0.05f */);
				Local_614.f_6 = 1f;
				__LIB_1__::func_748(&(Local_614.f_6.f_2), 1, 1);
				Local_614.f_26 = 5;
			}
			if (Local_614.f_6 == 1f)
			{
				__LIB_1__::func_748(&(Local_614.f_6.f_2), 1, 1);
				Local_614.f_26 = 12;
			}
			break;
		case 12:
			if (Local_614.f_17.f_1 == 0f)
			{
				TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, func_424(17));
			}
			Local_614.f_17 = 0.5f;
			Local_614.f_26 = 13;
			break;
		case 13:
			Local_614.f_17 = (Local_614.f_17 - 0.01f);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(18), Local_614.f_17);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(19), Local_614.f_17.f_1);
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, "ReadyToBash") || Local_614.f_17 < 0.38f)
			{
				Local_614.f_17 = 0f;
				Local_614.f_26 = 14;
			}
			break;
		case 14:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(18), Local_614.f_17);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(19), Local_614.f_17.f_1);
			Local_614.f_17.f_4 = __LIB_1__::func_877(func_424(21), joaat("INPUT_CONTEXT_ACTION"), 0, 570, 4000, 10, 1073741824 /* Float: 2f */, 0, 1065353216 /* Float: 1f */, 0, 3, joaat("SHORT_TIMED_EVENT"), 0);
			Local_614.f_26 = 15;
			break;
		case 15:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(18), Local_614.f_17);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(19), Local_614.f_17.f_1);
			if (__LIB_1__::func_514(Local_614.f_17.f_4, 1))
			{
				Local_614.f_17 = 1f;
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(18), Local_614.f_17);
				__LIB_1__::func_748(&(Local_614.f_17.f_4), 1, 1);
				__LIB_1__::func_283(&(Local_614.f_17.f_5), 1);
				Local_614.f_17.f_8 = 0;
				Local_614.f_26 = 16;
			}
			break;
		case 16:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(18), Local_614.f_17);
			if (__LIB_0__::func_265(&(Local_614.f_17.f_5)) >= 0.2f && !Local_614.f_17.f_8)
			{
				PAD::SET_PAD_SHAKE(0, 250, 255);
				CAM::SHAKE_CAM(iLocal_531[6], "JOLT_SHAKE", 0.4f);
				Local_614.f_17.f_1 = __LIB_0__::func_251((Local_614.f_17.f_1 + 0.34f), 0f, 1f);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, func_424(19), Local_614.f_17.f_1);
				Local_614.f_17.f_8 = 1;
			}
			if (__LIB_0__::func_265(&(Local_614.f_17.f_5)) >= 1f)
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
				__LIB_0__::func_37(&(Local_614.f_17.f_5));
				if (Local_614.f_17.f_1 >= 1f)
				{
					func_1763(7, 2000, 1028443341 /* Float: 0.05f */);
					Local_614.f_26 = 17;
				}
				else
				{
					if (Local_614.f_17.f_1 >= 0.5f)
					{
						Local_614.f_27 = 3;
					}
					Local_614.f_17 = 0.5f;
					Local_614.f_26 = 12;
				}
			}
			break;
		case 17:
			TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Global_35, func_424(22));
			Local_614.f_26 = 18;
			break;
		case 18:
			__LIB_1__::func_148(&uLocal_594);
			Local_614.f_27 = 2;
			ENTITY::DETACH_ENTITY(iLocal_422, true, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_422, true);
			STATS::_0x025E98E317652CDD(2);
			Local_614.f_26 = 19;
			break;
		case 19:
			func_481(15);
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, "MinigameFinished"))
			{
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, MISC::GET_HASH_KEY("MinigameFinished")))
			{
			}
			if ((__LIB_1__::func_871(&uLocal_594) >= 9500 || TASK::GET_TASK_MOVE_NETWORK_EVENT(Global_35, "MinigameFinished")) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, MISC::GET_HASH_KEY("MinigameFinished")))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1298()
{
	bool bVar0;
	if (func_175(12))
	{
		return true;
	}
	bVar0 = func_1766(-1, 1);
	if (!bVar0)
	{
		return false;
	}
	__LIB_17__::func_736(Local_14.f_25, -1);
	func_481(12);
	return false;
}

void func_1299(int iParam0, char[4] cParam1)
{
	int iVar0;
	int iVar1;
	if (iParam0 == 0 || iParam0 == 8)
	{
		return;
	}
	switch (iParam0)
	{
		case 3:
			iVar0 = 3;
			iVar1 = 1;
			break;
		case 7:
			iVar0 = 3;
			iVar1 = -1;
			break;
		case 4:
			iVar0 = 3;
			iVar1 = 0;
			break;
		case 10:
			iVar0 = 3;
			iVar1 = 5;
			break;
		case 9:
			iVar0 = 3;
			iVar1 = 4;
			break;
		case 2:
			iVar0 = 0;
			iVar1 = -1;
			break;
		case 15:
			iVar0 = 0;
			iVar1 = 0;
			break;
		case 16:
			iVar0 = 0;
			iVar1 = 4;
			break;
		case 17:
			iVar0 = 0;
			iVar1 = 5;
			break;
		case 19:
			iVar0 = 0;
			iVar1 = 1;
			break;
		case 13:
			iVar0 = 1;
			iVar1 = -1;
			break;
		case 12:
			iVar0 = 1;
			iVar1 = 0;
			break;
		case 5:
			iVar0 = 2;
			iVar1 = -1;
			break;
		case 11:
			iVar0 = 2;
			iVar1 = 0;
			break;
		case 1:
			iVar0 = 4;
			iVar1 = 0;
			break;
		default:
			return;
	}
	if (!__LIB_0__::func_272(Local_236[iParam0 /*4*/].f_1, 0))
	{
		return;
	}
	if (__LIB_4__::func_257(iLocal_423[iVar0]))
	{
		return;
	}
	if (PED::IS_PED_IN_VEHICLE(Local_236[iParam0 /*4*/].f_1, iLocal_423[iVar0], false))
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Local_236[iParam0 /*4*/].f_1, false))
	{
		PED::_0xE0B61ED8BB37712F(Local_236[iParam0 /*4*/].f_1);
	}
	if (ENTITY::_IS_ENTITY_FROZEN(Local_236[iParam0 /*4*/].f_1))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_236[iParam0 /*4*/].f_1, false);
	}
	PED::SET_PED_INTO_VEHICLE(Local_236[iParam0 /*4*/].f_1, iLocal_423[iVar0], iVar1);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_236[iParam0 /*4*/].f_1, 1);
	PED::SET_PED_CONFIG_FLAG(Local_236[iParam0 /*4*/].f_1, 65, true);
}

var func_1301(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
	{
		return uVar0;
	}
	POPULATION::_0x18262CAFEBB5FBE1(iParam0, 0, 0, 0, joaat("HRT_HORSE_RIDERS"), -1, 0);
	POPULATION::_0xB56D41A694E42E86(iParam0, 0, 0, 0, joaat("HRT_HORSE_RIDERS"), -1, 2);
	uVar0 = PED::_0x4C39C95AE5DB1329(iParam0, false, 8);
	return uVar0;
}

void func_1302(char[4] cParam0)
{
	int iVar0;
	func_1292(cParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[7 /*4*/].f_1))
		{
			__LIB_11__::func_379(cParam0, Local_236[7 /*4*/].f_1);
		}
		func_1757(iLocal_423[3], &uLocal_429);
		VEHICLE::DELETE_VEHICLE(&(iLocal_423[3]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[4 /*4*/].f_1))
	{
		func_479(cParam0, 4, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[9 /*4*/].f_1))
	{
		func_479(cParam0, 9, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[10 /*4*/].f_1))
	{
		func_479(cParam0, 10, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[3 /*4*/].f_1))
	{
		func_479(cParam0, 3, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[6 /*4*/].f_1))
	{
		func_479(cParam0, 6, 1, 1);
	}
	iVar0 = func_1267(6);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		PED::DELETE_PED(&iVar0);
	}
}

void func_1306(bool bParam0)
{
	if (bParam0)
	{
		__LIB_0__::func_8(&(Global_1415419.f_3), 16);
	}
	else
	{
		__LIB_0__::func_7(&(Global_1415419.f_3), 16);
	}
}

void func_1307(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_8__::func_618(cParam0);
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		func_1746(cParam0, 16);
	}
	switch (iVar0)
	{
		case 0:
			if (!PED::IS_PED_IN_VEHICLE(Local_236[7 /*4*/].f_1, iLocal_423[4], false))
			{
				if (!__LIB_0__::func_491(Local_236[7 /*4*/].f_1, -1794415470))
				{
					__LIB_2__::func_596(Local_236[7 /*4*/].f_1, iLocal_423[4], 5, 1065353216 /* Float: 1f */, -1, 1);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[4], false) && PED::IS_PED_IN_VEHICLE(Local_236[7 /*4*/].f_1, iLocal_423[4], false))
			{
				CLOCK::PAUSE_CLOCK(false, 0);
				func_481(16);
				__LIB_9__::func_60(cParam0, 1);
			}
			else if ((__LIB_0__::func_265(&uLocal_63) >= 9.5f && __LIB_0__::func_665(Global_35, iLocal_423[4], 1, 1) < 10f) && __LIB_5__::func_469(Local_236[1 /*4*/].f_1, "PLAYER_STILL_OFF_WAGON_MUD1_RIDE2", -1824788778, Global_35, 1, 0, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_63);
			}
			if ((__LIB_0__::func_665(Global_35, iLocal_423[4], 1, 1) >= 10f && __LIB_0__::func_265(&uLocal_63) >= 13f) && __LIB_9__::func_350(cParam0, "MUD1_OFFWAGON5", 0, 0, 0))
			{
				__LIB_1__::func_148(&uLocal_63);
			}
			break;
		case 1:
			if (!AUDIO::_0xA2CAC9DEF0195E6F(0))
			{
				if (!__LIB_8__::func_684("MUD1_KNOWWAY"))
				{
					__LIB_8__::func_711(cParam0, "MUD1_KNOWWAY", 0);
					__LIB_9__::func_51(cParam0);
					__LIB_1__::func_148(&uLocal_63);
				}
			}
			if (__LIB_0__::func_265(&uLocal_63) >= 2f && __LIB_8__::func_684("MUD1_KNOWWAY"))
			{
				__LIB_9__::func_208(cParam0, "MUD1_GTO_OBJ2", 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				__LIB_9__::func_60(cParam0, 2);
			}
			break;
		case 2:
			MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE("mudtown1_HorseShoeGPSRoute", 0, 5, joaat("COLOR_OBJECTIVE"), false, true);
			__LIB_9__::func_327("mudtown1_HorseShoeGPSRoute", 0, joaat("COLOR_OBJECTIVE"));
			AUDIO::SET_GPS_ACTIVE(true);
			__LIB_9__::func_60(cParam0, 3);
			break;
		case 3:
			if (__LIB_0__::func_264(&uLocal_63) > 5f && !__LIB_0__::func_104())
			{
				__LIB_0__::func_45("MUD1_HELP_RADAR", 10000, 0, 0, 0, 1);
				func_482(16);
			}
			if ((!__LIB_5__::func_463() && (ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) > 0.1f && __LIB_0__::func_264(&uLocal_63) > 9f)) || __LIB_0__::func_264(&uLocal_63) > 20f)
			{
				if (__LIB_8__::func_711(cParam0, "MUD1_IG15_RIGHT", 0))
				{
					bLocal_676 = true;
					__LIB_9__::func_60(cParam0, 10);
				}
			}
			break;
		case 10:
			if (__LIB_9__::func_350(cParam0, "MUD1_IG15_RAW", 0, 3.5f, 0))
			{
				__LIB_9__::func_60(cParam0, 11);
			}
			break;
		case 11:
			if (__LIB_9__::func_350(cParam0, "MUD1_IG15_TRIBE", 0, 3.25f, 0))
			{
				__LIB_9__::func_60(cParam0, 12);
			}
			break;
		case 12:
			__LIB_9__::func_60(cParam0, 13);
			break;
		case 4:
			if ((__LIB_1__::func_871(&uLocal_597) >= 7500 && !__LIB_2__::func_453()) && (UIFEED::_0xC17F69E1418CD11F(1) == 0 || UIFEED::_0x59FA676177DBE4C9(UIFEED::_0xC17F69E1418CD11F(1)) != 5))
			{
				__LIB_0__::func_45("MUD1_HERB_HLP_2", 7500, 0, 0, 0, 1);
				__LIB_1__::func_148(&uLocal_597);
				__LIB_9__::func_60(cParam0, 5);
			}
			break;
		case 5:
			if ((__LIB_1__::func_871(&uLocal_597) >= 7500 && !__LIB_2__::func_453()) && (UIFEED::_0xC17F69E1418CD11F(1) == 0 || UIFEED::_0x59FA676177DBE4C9(UIFEED::_0xC17F69E1418CD11F(1)) != 5))
			{
				__LIB_0__::func_45("MUD1_CMP_HLP", 7500, 0, 0, 0, 1);
				COMPENDIUM::COMPENDIUM_HERB_PICKED(joaat("HERB_AMERICAN_GINSENG"), __LIB_1__::func_974(PLAYER::PLAYER_ID()));
				COMPENDIUM::COMPENDIUM_HERB_PICKED(joaat("HERB_YARROW"), __LIB_1__::func_974(PLAYER::PLAYER_ID()));
				__LIB_1__::func_148(&uLocal_597);
				func_482(16);
				__LIB_9__::func_60(cParam0, 6);
			}
			break;
		case 6:
			if (iLocal_86 == 6)
			{
				if (func_1315(9))
				{
					if (__LIB_9__::func_350(cParam0, "MUD1_GOODSPOT", 0, 1.5f, 0))
					{
						__LIB_9__::func_60(cParam0, 7);
					}
				}
				else
				{
					__LIB_9__::func_60(cParam0, 7);
				}
			}
			if ((__LIB_0__::func_266(Global_35, func_1266(5, 27), 40f, 1, 1) || __LIB_0__::func_266(Global_35, -118.045f, -35.62372f, 88.08789f, 62.5f, 1, 1)) || (VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]) && __LIB_0__::func_266(Global_35, -118.045f, -35.62372f, 88.08789f, 85f, 1, 1)))
			{
				__LIB_9__::func_60(cParam0, 7);
			}
			break;
		case 7:
			if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]))
			{
				if (!__LIB_0__::func_266(Global_35, func_1266(5, 27), 30f, 1, 1) || __LIB_5__::func_463())
				{
					return;
				}
			}
			__LIB_5__::func_20(1, 0);
			if (func_1775(cParam0, "MUD1_ARRIVE", 0))
			{
				__LIB_9__::func_60(cParam0, -1);
			}
			break;
	}
}

void func_1308(int iParam0)
{
	int iVar0;
	iVar0 = (CLOCK::GET_CLOCK_HOURS() * 100 + CLOCK::GET_CLOCK_MINUTES());
	if (iParam0 <= 3)
	{
		if (iVar0 < 1600)
		{
			MISC::SET_TIME_SCALE(2f);
		}
		else
		{
			MISC::SET_TIME_SCALE(1f);
			CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
		}
	}
	else if (iVar0 < 1700)
	{
		MISC::SET_TIME_SCALE(1.5f);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
		CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
	}
}

void func_1309()
{
	vector3 vVar0;
	int iVar3;
	TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("mudtown1_HorseShoeGPSRoute", __LIB_1__::func_974(PLAYER::PLAYER_ID()), &iVar3);
	TASK::WAYPOINT_RECORDING_GET_COORD("mudtown1_HorseShoeGPSRoute", iVar3, &vVar0);
	if (!bLocal_612 && !__LIB_0__::func_266(iLocal_423[4], vVar0, 25f, 1, 0))
	{
		MAP::CLEAR_GPS_CUSTOM_ROUTE();
		AUDIO::SET_GPS_ACTIVE(true);
		MAP::_BLIP_SET_MODIFIER(iLocal_394, -1878373110);
		bLocal_612 = true;
	}
	if (bLocal_612 && __LIB_0__::func_266(iLocal_423[4], vVar0, 20f, 1, 0))
	{
		MAP::_START_GPS_CUSTOM_ROUTE_FROM_WAYPOINT_RECORDING_ROUTE("mudtown1_HorseShoeGPSRoute", 0, 5, joaat("COLOR_OBJECTIVE"), false, true);
		__LIB_9__::func_327("mudtown1_HorseShoeGPSRoute", 0, joaat("COLOR_OBJECTIVE"));
		bLocal_612 = false;
	}
}

void func_1310(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!__LIB_0__::func_266(Global_35, func_1266(5, 27), 300f, 1, 1))
	{
		return;
	}
	iVar0 = func_1318(iLocal_87);
	iVar1 = 0;
	iVar2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(Local_236[iLocal_87 /*4*/].f_1))
	{
		iVar3 = -268604689;
		if (iVar0 == 3 || iVar0 == 18)
		{
		}
		func_1451(cParam0, iLocal_87, &iVar1, iVar3);
		if (ENTITY::DOES_ENTITY_EXIST(Local_236[iLocal_87 /*4*/].f_1))
		{
			ENTITY::SET_ENTITY_COORDS(Local_236[iLocal_87 /*4*/].f_1, Local_89[2 /*7*/].f_3, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Local_236[iLocal_87 /*4*/].f_1, 8.7773f);
		}
		return;
	}
	if (iLocal_86 != 2 && iLocal_86 != 5)
	{
		__LIB_4__::func_705(iVar0, 1);
	}
	else
	{
		__LIB_4__::func_705(iVar0, 0);
	}
	switch (iLocal_86)
	{
		case 0:
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!VOLUME::_DOES_VOLUME_EXIST(Local_89[iVar2 /*7*/].f_6))
				{
				}
				else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_35, Local_89[iVar2 /*7*/].f_6, true, 0))
				{
					iLocal_85 = iVar2;
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_236[iLocal_87 /*4*/].f_1, Local_89[iLocal_85 /*7*/], false, true, true);
					func_1776(iVar2);
					TASK::TASK_START_SCENARIO_AT_POSITION(Local_236[iLocal_87 /*4*/].f_1, joaat("WORLD_HUMAN_SMOKE"), Local_89[iLocal_85 /*7*/].f_3, fLocal_530, -1, false, true, 0, -1f, false);
					__LIB_11__::func_371(1);
				}
				else
				{
					iVar2++;
				}
			}
			break;
		case 1:
			if (__LIB_0__::func_48(iLocal_423[4], Local_236[iLocal_87 /*4*/].f_1, 45f, 1))
			{
				func_1778();
				__LIB_11__::func_371(2);
			}
			break;
		case 2:
			if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_470[8 /*4*/]) >= 0.685f && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_384, false))
			{
				func_1779();
			}
			if (!__LIB_0__::func_48(Global_35, Local_236[iLocal_87 /*4*/].f_1, 35f, 1) && func_1329(8))
			{
				__LIB_11__::func_371(6);
			}
			else
			{
				if (func_1329(8))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_321[9 /*5*/]))
					{
						OBJECT::DELETE_OBJECT(&(Local_321[9 /*5*/]));
					}
				}
				if (func_1329(8) && __LIB_0__::func_48(iLocal_423[4], Local_236[iLocal_87 /*4*/].f_1, 20f, 1))
				{
					__LIB_8__::func_711(cParam0, "MUD1_SLOW", 0);
					__LIB_11__::func_371(3);
				}
				else if (!__LIB_4__::func_257(iLocal_423[4]))
				{
					VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[4], 4f);
				}
				Jump @1356; //curOff = 622
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[4], 4.5f);
				PED::_SET_PED_BLACKBOARD_FLOAT(Local_236[iLocal_87 /*4*/].f_1, "searching_high_energy_indirect", 1f, -1);
				if (__LIB_0__::func_48(Global_35, Local_236[iLocal_87 /*4*/].f_1, 30f, 1))
				{
					__LIB_0__::func_45("MUD1_HELP_STOP", 5000, 0, 0, 0, 1);
				}
				if (!__LIB_0__::func_48(Global_35, Local_236[iLocal_87 /*4*/].f_1, 30f, 1))
				{
					__LIB_11__::func_371(6);
					Jump @1356; //curOff = 728
				}
				else if (ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) < 0.2f)
				{
					if (!__LIB_4__::func_257(iLocal_423[4]))
					{
						if (func_1780())
						{
							vLocal_673 = { func_1781(9, "JavierEscuella", func_430(7)) };
							vLocal_673 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_423[4], vLocal_673) };
							TASK::TASK_GOTO_ENTITY_OFFSET_XY(Local_236[iLocal_87 /*4*/].f_1, iLocal_423[4], 20000, (0.5f * 2f), vLocal_673.x, vLocal_673.y, 1.35f, true);
							__LIB_1__::func_283(&uLocal_75, 0);
							__LIB_11__::func_371(4);
						}
					}
				}
				Jump @1356; //curOff = 868
				if (!VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_423[4], 4f, -1, true);
				}
				if (ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) < 0.3f && VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]))
				{
					ENTITY::SET_ENTITY_VELOCITY(iLocal_423[4], 0f, 0f, 0f);
				}
				CAM::_0x1CFB749AD4317BDE();
				if (__LIB_0__::func_266(Local_236[iLocal_87 /*4*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[4], vLocal_673), 2.75f, 1, 0) || __LIB_1__::func_871(&uLocal_75) > 16000)
				{
					if (__LIB_1__::func_871(&uLocal_75) > 16000)
					{
						func_879(Local_236[iLocal_87 /*4*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[4], vLocal_673), 0f, 2, 1073741824 /* Float: 2f */);
					}
					if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 4352, false);
					}
					PED::SET_PED_CONFIG_FLAG(Local_236[iLocal_87 /*4*/].f_1, 296, false);
					func_1782(cParam0);
					CAM::_0x1CFB749AD4317BDE();
					__LIB_11__::func_371(5);
				}
				Jump @1356; //curOff = 1107
				VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[4], 6f);
				CAM::_0x1CFB749AD4317BDE();
				if ((VEHICLE::_0x404527BC03DA0E6C(iLocal_423[4]) && ANIMSCENE::_0x8D81E7824B7753F7(Local_470[9 /*4*/], "s_walkOkLetsGo", 1)) && ANIMSCENE::_GET_ANIM_SCENE_TIME(Local_470[9 /*4*/]) >= 2.24f)
				{
					VEHICLE::_0x7C06330BFDDA182E(iLocal_423[4]);
				}
				if (ANIMSCENE::_0x8D81E7824B7753F7(Local_470[9 /*4*/], "s_idle", 1))
				{
					__LIB_11__::func_371(6);
				}
				else if (!__LIB_0__::func_48(Global_35, Local_236[iLocal_87 /*4*/].f_1, 20f, 1))
				{
					__LIB_11__::func_371(6);
				}
				else
				{
					Jump @1356; //curOff = 1251
					if (!func_1315(9))
					{
						func_479(cParam0, iLocal_87, 0, 1);
						Jump @1356; //curOff = 1274
					}
					else if ((!ANIMSCENE::_0x1F0E401031E20146(Local_470[9 /*4*/], func_430(8)) && __LIB_0__::func_266(Global_35, func_1266(5, 27), 13f, 1, 1)) && ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) <= 1f)
					{
						func_1783(9, 8, 1);
					}
				}
			}
			default:
				break;
	}
}

void func_1311()
{
	if (__LIB_0__::func_266(Global_35, func_1266(5, 27), 620f, 1, 1))
	{
		if (__LIB_10__::func_656())
		{
			__LIB_11__::func_564(0);
		}
	}
}

void func_1312(char[4] cParam0)
{
	if (__LIB_0__::func_266(Global_35, func_1266(5, 27), 10f, 1, 1))
	{
		__LIB_0__::func_325(&iLocal_394);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]) && !PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[4], false))
	{
		__LIB_9__::func_910(cParam0, iLocal_423[4], "MUD1_GTO_OBJ1", "MUD1_FAIL_WAGON", 16f, 25f, 0, 0, 0, joaat("BLIP_STYLE_PLAYER_COACH"), 0);
		if (!MAP::_DOES_ENTITY_HAVE_BLIP(iLocal_423[4]))
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_394))
			{
				MAP::_BLIP_REMOVE_MODIFIER(iLocal_394, -401963276);
				MAP::REMOVE_BLIP(&iLocal_394);
			}
			iLocal_394 = __LIB_8__::func_778(joaat("BLIP_STYLE_PLAYER_COACH"), iLocal_423[4], 1);
			MAP::_BLIP_SET_MODIFIER(iLocal_394, -401963276);
		}
		return;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[4], false) && MAP::_DOES_ENTITY_HAVE_BLIP(iLocal_423[4]))
	{
		MAP::_BLIP_REMOVE_MODIFIER(iLocal_394, -401963276);
		MAP::REMOVE_BLIP(&iLocal_394);
		iLocal_394 = __LIB_8__::func_777(1560611276, func_1266(5, 27), 6f, 1);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_394, "MUD1_BLIP_CAMP");
		MAP::_BLIP_SET_MODIFIER(iLocal_394, -401963276);
	}
}

void func_1313()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_EXIT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_DRAFT_SWITCH_DRIVERS"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_SHUFFLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_VEH_TRAVERSAL"), false);
}

void func_1314(char[4] cParam0)
{
	if (__LIB_4__::func_257(iLocal_423[4]))
	{
		return;
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]) && __LIB_0__::func_665(iLocal_423[3], iLocal_423[4], 0, 1) <= 15f)
	{
		return;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[4], true) && VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_423[4]) != Global_35)
	{
		return;
	}
	if (__LIB_6__::func_864(cParam0) != iLocal_53)
	{
		if (!func_175(15) && func_1324())
		{
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[4], false))
			{
				if (__LIB_0__::func_104() == 0)
				{
					__LIB_0__::func_45("MUD1_HELP_REV", 10000, 0, 0, 0, 1);
				}
			}
		}
	}
	if (__LIB_0__::func_75(&uLocal_72) && __LIB_0__::func_265(&uLocal_72) < 10f)
	{
		return;
	}
}

bool func_1315(int iParam0)
{
	if (!func_1743(iParam0))
	{
		return false;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_470[iParam0 /*4*/], false))
	{
		return true;
	}
	return false;
}

bool func_1316()
{
	if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_593))
	{
		iLocal_593 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_CAMP_KIERAN_TREE_TIED"), -138.0341f, -12.51344f, 95.30363f, -164.9999f, 3f, -1f, 1);
		STREAMING::_REQUEST_SCENARIO_TYPE(joaat("WORLD_CAMP_KIERAN_TREE_TIED"), 15, 0, 0);
		return false;
	}
	if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_593))
	{
		if (STREAMING::_HAS_SCENARIO_TYPE_LOADED(joaat("WORLD_CAMP_KIERAN_TREE_TIED"), false))
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

void func_1317()
{
	int iVar0;
	iVar0 = 12;
	if (!func_1743(iVar0))
	{
		return;
	}
	if (!Local_470[iVar0 /*4*/].f_2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[0 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "P_CLIPBOARD01X", Local_321[0 /*5*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[1 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "p_bottleJD01x", Local_321[1 /*5*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[2 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "p_pencil01x", Local_321[2 /*5*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[3 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "p_cigarlit01x", Local_321[3 /*5*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[4 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "p_hammer01x", Local_321[4 /*5*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[5 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "p_crate15x", Local_321[5 /*5*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[6 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "P_WOODPLANK03X", Local_321[6 /*5*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[7 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "P_NAILSINGLE01X", Local_321[7 /*5*/], 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[8 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "P_RAG02X", Local_321[8 /*5*/], 0);
		}
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "ARTHUR", Global_35, 0);
		}
		if (__LIB_0__::func_272(Local_236[1 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "HoseaMatthews", Local_236[1 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[8 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "AbigailRoberts", Local_236[8 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[4 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "BillWilliamson", Local_236[4 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[5 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "Dutch", Local_236[5 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[2 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "LeoStrauss", Local_236[2 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[12 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "SusanGrimshaw", Local_236[12 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[17 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "TILLY", Local_236[17 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[3 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "uncle", Local_236[3 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[10 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "MollyOshea", Local_236[10 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[11 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "MrPearson", Local_236[11 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[13 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "RevSwanson", Local_236[13 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[16 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "karen", Local_236[16 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Local_236[15 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "MARYBETH", Local_236[15 /*4*/].f_1, 0);
		}
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_470[iVar0 /*4*/], false) && !ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_470[iVar0 /*4*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_470[iVar0 /*4*/]);
		Local_470[iVar0 /*4*/].f_2 = 1;
	}
}

int func_1318(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 5;
		case 2:
			return 18;
		case 3:
			return 4;
		case 4:
			return 3;
		case 5:
			return 0;
		case 6:
			return 2;
		case 7:
			return 7;
		case 8:
			return 13;
		case 9:
			return 14;
		case 10:
			return 16;
		case 11:
			return 17;
		case 12:
			return 19;
		case 13:
			return 21;
		case 14:
			return 9;
		case 15:
			return 15;
		case 16:
			return 20;
		case 17:
			return 22;
		case 18:
			return 10;
		case 19:
			return 11;
		case 20:
			return 6;
		default:
			break;
	}
	return 27;
}

void func_1319(int iParam0, int iParam1)
{
	if (__LIB_0__::func_272(iParam0, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(iParam0, iLocal_423[4], false) == 0)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470, true) != 1)
			{
				TASK::TASK_ENTER_VEHICLE(iParam0, iLocal_423[4], 20000, iParam1, 2f, 1, 0);
			}
		}
	}
}

void func_1323()
{
	if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(iLocal_384) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_384, false))
	{
		if (__LIB_0__::func_272(Local_236[1 /*4*/].f_1, 1))
		{
			TASK::CLEAR_PED_TASKS(Local_236[1 /*4*/].f_1, true, false);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_384, "CS_HoseaMatthews", Local_236[1 /*4*/].f_1, 0);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_384, "player_zero", Global_35, 0);
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_384, iLocal_423[4], 14);
		ANIMSCENE::START_ANIM_SCENE(iLocal_384);
	}
}

bool func_1324()
{
	int iVar0;
	bool bVar1;
	iVar0 = 4;
	bVar1 = false;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_423[4], false, false))
	{
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_423[4], 3, iVar0) && ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) < 0.15f)
		{
			VEHICLE::RESET_VEHICLE_STUCK_TIMER(iLocal_423[4], 3);
			bVar1 = true;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_423[4], 0, iVar0))
		{
			VEHICLE::RESET_VEHICLE_STUCK_TIMER(iLocal_423[4], 0);
			bVar1 = true;
		}
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_423[4], 1, iVar0))
		{
			VEHICLE::RESET_VEHICLE_STUCK_TIMER(iLocal_423[4], 1);
			bVar1 = true;
		}
	}
	if (ENTITY::GET_ENTITY_SPEED(iLocal_423[4]) < 0.15f)
	{
		if (bVar1)
		{
			return true;
		}
	}
	return false;
}

void func_1325(char* sParam0, int iParam1)
{
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iParam1, &(vLocal_602[0 /*3*/]));
	TASK::WAYPOINT_RECORDING_GET_COORD(sParam0, iParam1 + 2, &(vLocal_602[1 /*3*/]));
	func_1788(4, vLocal_602[0 /*3*/], vLocal_602[1 /*3*/]);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_423[4], false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_423[4], 1.401298E-45f);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_423[4], 5.5f);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_423[4], true);
	ENTITY::_0xC76E94A78127412B(iLocal_423[4], 1f, 2f);
	ENTITY::_0x29BA9F78321E5A6C(iLocal_423[4], sParam0, 0, 0.35f, 0.15f, 1, 0, 0, 0, 0, 0, 1);
}

void func_1328(bool bParam0)
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	if (bParam0)
	{
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
	}
	else
	{
		PAD::DISABLE_ALL_CONTROL_ACTIONS(1);
	}
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
	PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
	iLocal_457 = MISC::GET_FRAME_COUNT();
}

bool func_1329(int iParam0)
{
	if (!func_1789(iParam0))
	{
		return false;
	}
	if (!func_1743(iParam0))
	{
		return true;
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_FINISHED(Local_470[iParam0 /*4*/], false))
	{
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_470[iParam0 /*4*/], false))
	{
		return true;
	}
	return false;
}

void func_1330(int iParam0, bool bParam1, char* sParam2)
{
	if (!func_1743(iParam0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_470[iParam0 /*4*/], sParam2, bParam1, false);
}

bool func_1331(int iParam0, float fParam1)
{
	if (func_1329(iParam0))
	{
		return true;
	}
	if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_470[iParam0 /*4*/]) >= fParam1)
	{
		return true;
	}
	return false;
}

int func_1334(char[4] cParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]))
	{
		VEHICLE::_0x201B8ED4FF7FE9F5(iLocal_423[3]);
	}
	__LIB_9__::func_53(cParam0);
	__LIB_9__::func_154(cParam0, Global_35, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[7 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[1 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[2 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[3 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[4 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[5 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[16 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[8 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[10 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[11 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[12 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[13 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[17 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_154(cParam0, Local_236[15 /*4*/].f_1, 0, 0, 0, 0, 0);
	__LIB_9__::func_62(cParam0, iLocal_423[4], "WAGON02X", 0, 0, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
	{
		VEHICLE::_0x201B8ED4FF7FE9F5(iLocal_423[4]);
	}
	return 1;
}

void func_1342()
{
	int iVar0;
	iVar0 = __LIB_0__::func_153(Global_35, 9, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 7, 1, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = __LIB_0__::func_153(Global_35, 0, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 1, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_153(Global_35, 18, 1, 0);
	if (__LIB_0__::func_154(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = __LIB_0__::func_664();
	if (__LIB_0__::func_154(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1806(6291456, 0);
	if (__LIB_0__::func_154(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, true))
		{
			__LIB_1__::func_766(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
		}
		else
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1366(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if (((WEAPON::_IS_WEAPON_ONE_HANDED(Var4.f_4) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 32))) && (!WEAPON::_IS_WEAPON_PISTOL(Var4.f_4) || !__LIB_0__::func_27(iParam1, 16777216))) && (!WEAPON::_IS_WEAPON_REVOLVER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 33554432)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (__LIB_0__::func_154(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1366(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

int func_1397(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	vector3 vVar0;
	bool bVar3;
	int iVar4;
	int iVar5;
	if (!__LIB_0__::func_31(iParam0))
	{
		return 0;
	}
	vVar0.x = fParam3;
	vVar0.f_1 = fParam4;
	vVar0.f_2 = fParam5;
	if (((Global_1572864.f_13 || Global_1572864.f_14) || Global_1572864.f_8 != 0) || Global_1391438.f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch (Global_1360165[iParam0 /*1157*/].f_11)
	{
		case 0:
			if (__LIB_0__::func_287(iParam0, 2, 1))
			{
				__LIB_0__::func_290(iParam0, 2, 1);
			}
			if (__LIB_0__::func_273(iParam0, 16, 1))
			{
				if (Global_1360165[iParam0 /*1157*/].f_129 != SCRIPTS::GET_ID_OF_THIS_THREAD())
				{
					if (bParam14)
					{
						__LIB_0__::func_288(iParam0, 29, 1);
						return 0;
					}
					if (SCRIPTS::IS_THREAD_ACTIVE(Global_1360165[iParam0 /*1157*/].f_129, false))
					{
					}
					else
					{
						__LIB_1__::func_774(iParam0, 0, 0, 1, -1082130432 /* Float: -1f */, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
				{
					return Global_1360165[iParam0 /*1157*/];
				}
			}
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_1360165[iParam0 /*1157*/]))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(Global_1360165[iParam0 /*1157*/]))
				{
					if (bParam1)
					{
						__LIB_0__::func_712(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				__LIB_0__::func_288(iParam0, 44, 1);
				Global_1360165[iParam0 /*1157*/].f_1156 = SCRIPTS::GET_ID_OF_THIS_THREAD();
				__LIB_0__::func_201(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
				}
			}
			if (!__LIB_0__::func_287(iParam0, 44, 0))
			{
				__LIB_0__::func_288(iParam0, 44, 0);
			}
			if (__LIB_1__::func_466(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				__LIB_0__::func_201(iParam0, 2);
			}
			break;
		case 2:
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 171, true);
			if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/]))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
			}
			__LIB_0__::func_290(iParam0, 18, 1);
			ENTITY::SET_ENTITY_VISIBLE(Global_1360165[iParam0 /*1157*/], true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Global_1360165[iParam0 /*1157*/], joaat("REL_GANG_DUTCHS"));
			POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/], 0);
			PERSCHAR::_0x6759BEE6762E140B(Global_1360165[iParam0 /*1157*/].f_1);
			PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 130, false);
			__LIB_0__::func_707(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				__LIB_1__::func_296(iParam0, 0, 0, 1);
			}
			__LIB_0__::func_290(iParam0, 33, 1);
			__LIB_0__::func_290(iParam0, 34, 1);
			__LIB_0__::func_290(iParam0, 29, 1);
			if (!__LIB_0__::func_86(vVar0) && bParam7)
			{
				__LIB_0__::func_201(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Global_1360165[iParam0 /*1157*/]) && !ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/]))
				{
					if (PED::IS_PED_ON_MOUNT(Global_1360165[iParam0 /*1157*/]) && bParam10)
					{
					}
					else if (PED::IS_PED_USING_ANY_SCENARIO(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_0__::func_712(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_879(Global_1360165[iParam0 /*1157*/], vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			else if (bParam16)
			{
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_1360165[iParam0 /*1157*/], 0) && !TASK::_0x0C3CB2E600C8977D(Global_1360165[iParam0 /*1157*/], 1))
				{
					TASK::CLEAR_PED_TASKS(Global_1360165[iParam0 /*1157*/], true, false);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				__LIB_0__::func_201(iParam0, 4);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0 /*60*/].f_4;
					}
				}
				if (__LIB_1__::func_201(iParam0, iParam13))
				{
					if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
					{
						__LIB_1__::func_288(iParam0, iParam13, 0);
						__LIB_1__::func_558(iParam0, Global_1360165[iParam0 /*1157*/], iParam13, 1);
						if (__LIB_0__::func_287(iParam0, 25, 0))
						{
							__LIB_0__::func_290(iParam0, 25, 0);
						}
						__LIB_0__::func_288(iParam0, 66, 0);
						__LIB_0__::func_201(iParam0, 5);
						Global_1360165[iParam0 /*1157*/].f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					__LIB_0__::func_201(iParam0, 5);
				}
				__LIB_0__::func_288(iParam0, 28, 1);
			}
			else
			{
				__LIB_0__::func_201(iParam0, 5);
			}
			break;
		case 5:
			if (PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/]))
			{
				__LIB_0__::func_201(iParam0, 6);
			}
			break;
		case 6:
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/], 0))
			{
				if (bParam24)
				{
					PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_1360165[iParam0 /*1157*/], true);
				}
				if (bParam18)
				{
					if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_1360165[iParam0 /*1157*/], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5);
							PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Global_1360165[iParam0 /*1157*/], iVar5, "ALL");
							iVar5++;
						}
						PED::_0xE3144B932DFDFF65(Global_1360165[iParam0 /*1157*/], 0f, -1, true, true);
						PED::_0xD049920CD29F6CC8(Global_1360165[iParam0 /*1157*/], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					__LIB_1__::func_30(iParam0);
				}
				if (bParam21)
				{
					TASK::CLEAR_PED_SECONDARY_TASK(Global_1360165[iParam0 /*1157*/]);
					__LIB_0__::func_202(Global_1360165[iParam0 /*1157*/], 1);
				}
			}
			__LIB_0__::func_201(iParam0, 7);
		case 7:
			__LIB_0__::func_707(iParam0, bParam9, bParam15, 0);
			__LIB_0__::func_289(iParam0, 4, bParam11);
			__LIB_0__::func_706(iParam0);
			if (bParam20)
			{
				if (__LIB_0__::func_203(Global_1360165[iParam0 /*1157*/]))
				{
				}
			}
			__LIB_1__::func_799(iParam0, Global_1360165[iParam0 /*1157*/]);
			if (!bParam23 && !PED::GET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true))
			{
				PED::SET_PED_CONFIG_FLAG(Global_1360165[iParam0 /*1157*/], 503, true);
			}
			Global_40.f_4942[iParam0 /*60*/].f_4 = Global_40.f_4942[iParam0 /*60*/].f_3;
			__LIB_0__::func_201(iParam0, 0);
			__LIB_0__::func_204(iParam0, 16, 1);
			__LIB_0__::func_290(iParam0, 44, 1);
			Global_1360165[iParam0 /*1157*/].f_1156 = 0;
			Global_1360165[iParam0 /*1157*/].f_129 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			return Global_1360165[iParam0 /*1157*/];
	}
	return 0;
}

void func_1398(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	vector3 vVar0;
	__LIB_4__::func_787(iParam1, bParam3, bParam4, bParam6);
	if (!__LIB_6__::func_872(cParam0, 512))
	{
		if (__LIB_6__::func_872(cParam0, 4) && bParam4)
		{
			vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 5f, 0f, 0f) };
			__LIB_1__::func_338(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1832(cParam0, iParam1, iParam2, __LIB_1__::func_464(iParam2, 0));
	__LIB_9__::func_141(cParam0, iParam1, 512);
	if (bParam5)
	{
		__LIB_9__::func_141(cParam0, iParam1, 128);
	}
	else
	{
		__LIB_9__::func_147(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

bool func_1438(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	int iVar0;
	__LIB_5__::func_68(uParam4, &cParam0);
	if (__LIB_0__::func_84(uParam4, 2) && !__LIB_0__::func_84(uParam4, 67108864))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SKIP_CUTSCENE"), false);
	}
	if (__LIB_0__::func_81(uParam4) != 1)
	{
		__LIB_9__::func_250(uParam4);
	}
	POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
	PED::SET_PED_RESET_FLAG(Global_35, 134, true);
	HUD::_UIPROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(6);
	PLAYER::_0x9F9A829C6751F3C7(PLAYER::GET_PLAYER_INDEX(), 31, 1);
	switch (__LIB_0__::func_81(uParam4))
	{
		case 1:
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false))
				{
					__LIB_9__::func_199(uParam4, &cParam0, cParam5);
				}
				else if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
				{
					__LIB_1__::func_747(uParam4, 4);
					return false;
				}
				else
				{
					if (__LIB_4__::func_584(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					__LIB_8__::func_632(cParam5);
				}
				__LIB_1__::func_747(uParam4, 3);
			}
			else if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				if (__LIB_8__::func_705(cParam5, __LIB_6__::func_864(cParam5), 262144))
				{
					if (!__LIB_0__::func_84(uParam4, 2097152))
					{
						__LIB_5__::func_69(uParam4);
					}
				}
				else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam4->f_806)) && (!__LIB_6__::func_862(cParam5, 8) || __LIB_0__::func_84(uParam4, 134217728)))
				{
				}
				else
				{
					__LIB_5__::func_309(uParam4);
				}
				__LIB_1__::func_148(&(uParam4->f_1));
				__LIB_1__::func_747(uParam4, 2);
			}
			else
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
				}
				__LIB_5__::func_350(uParam4);
				if (!__LIB_0__::func_75(&(uParam4->f_1)))
				{
					__LIB_1__::func_283(&(uParam4->f_1), 0);
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) || !ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
			{
				if (__LIB_5__::func_577(uParam4, &cParam0, 1, 1))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(uParam4->f_804, true, false))
					{
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!__LIB_0__::func_86(__LIB_0__::func_85(uParam4)) && !__LIB_0__::func_266(Global_35, __LIB_0__::func_85(uParam4), 100f, 1, 1))
					{
						__LIB_0__::func_87(1);
						PLAYER::START_PLAYER_TELEPORT(PLAYER::GET_PLAYER_INDEX(), __LIB_0__::func_85(uParam4), 0f, true, true, true, false);
					}
				}
				else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
				{
					if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
					{
						ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
					}
					__LIB_1__::func_747(uParam4, 4);
				}
			}
			else if (!PLAYER::IS_PLAYER_TELEPORT_ACTIVE() || PLAYER::_HAS_PLAYER_TELEPORT_FINISHED(PLAYER::GET_PLAYER_INDEX()))
			{
				if (__LIB_8__::func_587(cParam5) != 0 || (__LIB_6__::func_877(cParam5) == 1 && __LIB_8__::func_663(cParam5, __LIB_6__::func_864(cParam5)) >= 3))
				{
					if (!DLC::GET_IS_LOADING_SCREEN_ACTIVE())
					{
						MISC::_0xA565FAC215CBC77D();
						__LIB_0__::func_722(1, 0);
						__LIB_9__::func_199(uParam4, &cParam0, cParam5);
						__LIB_1__::func_747(uParam4, 3);
					}
					else
					{
						SCRIPTS::SHUTDOWN_LOADING_SCREEN();
					}
				}
			}
			else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 60f)
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(uParam4->f_804);
				}
				__LIB_1__::func_747(uParam4, 4);
			}
			break;
		case 3:
			func_403(uParam4);
			if (__LIB_4__::func_584(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			__LIB_8__::func_632(cParam5);
			if ((ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(uParam4->f_804, false)) && (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804) || __LIB_0__::func_84(uParam4, 512)))
			{
				if (!__LIB_0__::func_84(uParam4, 1024) && __LIB_5__::func_448(uParam4, 1))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
				}
				if (!__LIB_0__::func_84(uParam4, 512))
				{
					__LIB_1__::func_148(&(uParam4->f_1));
					__LIB_0__::func_88(uParam4, 512);
					__LIB_1__::func_747(uParam4, 4);
				}
				else if (__LIB_0__::func_84(uParam4, 524288))
				{
					if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
					{
					}
					CAM::DO_SCREEN_FADE_OUT(0);
				}
			}
			else
			{
				__LIB_9__::func_250(uParam4);
			}
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				if (IntToFloat(MISC::ABSI((__LIB_4__::func_585(uParam4) - __LIB_4__::func_586(uParam4)))) <= 2f)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
					{
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
					}
				}
				if (__LIB_4__::func_988(uParam4, Global_35, 4))
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
				if ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT()) && __LIB_4__::func_586(uParam4) > 5000)
				{
					ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
				}
			}
			if (__LIB_4__::func_989(uParam4))
			{
				if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
				}
				__LIB_8__::func_942(uParam4);
				return true;
			}
			else
			{
				if (__LIB_0__::func_84(uParam4, 67108864))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804))
						{
							ANIMSCENE::_DELETE_ANIM_SCENE_2(uParam4->f_804);
						}
						__LIB_1__::func_148(&(uParam4->f_1));
						ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
						__LIB_0__::func_88(uParam4, 512);
						__LIB_4__::func_550(uParam4, 67108864, 1);
						__LIB_1__::func_747(uParam4, 4);
					}
					else if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_OUT(1000);
					}
				}
				else if ((((!__LIB_0__::func_84(uParam4, 16384) && !ANIMSCENE::_0xEF324E9550A394D5(uParam4->f_804)) && CAM::IS_SCREEN_FADED_OUT()) && __LIB_4__::func_586(uParam4) <= 5000) && __LIB_4__::func_586(uParam4) >= 0)
				{
					CAM::DO_SCREEN_FADE_IN(1000);
				}
				if (!__LIB_0__::func_84(uParam4, 536870912) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1495039362))
				{
					__LIB_5__::func_129(&(uParam4->f_861), 0);
					__LIB_0__::func_88(uParam4, 536870912);
				}
				if (__LIB_4__::func_586(uParam4) >= 5000 && __LIB_4__::func_586(uParam4) <= (__LIB_4__::func_585(uParam4) - 5000))
				{
					__LIB_0__::func_89();
				}
			}
			break;
		case 6:
			if (__LIB_4__::func_989(uParam4))
			{
				__LIB_8__::func_942(uParam4);
				return true;
			}
			break;
		case 4:
			if (__LIB_0__::func_84(uParam4, 524288))
			{
				ANIMSCENE::_0x1B70811D3BF75DB9(1, 1);
			}
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1000);
					if (ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						__LIB_0__::func_88(uParam4, 1073741824 /* Float: 2f */);
					}
				}
			}
			else
			{
				if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
					{
						ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, true);
						if (UIFEED::_0xC17F69E1418CD11F(9) != 0)
						{
							UIFEED::_0xDD1232B332CBB9E7(9, 1, 0);
						}
						return false;
					}
					else if (ANIMSCENE::_0x4CDFFE3189EBDBD0(uParam4->f_804))
					{
						return false;
					}
				}
				iVar0 = 1;
				if (__LIB_6__::func_877(cParam5) == 1 && __LIB_8__::func_663(cParam5, __LIB_6__::func_864(cParam5)) >= 3)
				{
					if (__LIB_8__::func_634(cParam5))
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!__LIB_4__::func_584(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
					else if (__LIB_0__::func_265(&(uParam4->f_1)) >= 30f)
					{
						if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(uParam4->f_804) && ANIMSCENE::_IS_ANIM_SCENE_PAUSED(uParam4->f_804))
						{
							ANIMSCENE::SET_ANIM_SCENE_PAUSED(uParam4->f_804, false);
						}
						__LIB_1__::func_747(uParam4, 3);
					}
				}
				if (__LIB_0__::func_81(uParam4) == 3)
				{
					if (__LIB_0__::func_84(uParam4, 524288))
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
			}
			break;
		case 5:
			__LIB_1__::func_747(uParam4, 4);
			break;
	}
	return false;
}

bool func_1449(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (iParam0 != __LIB_0__::func_317())
	{
		return false;
	}
	if (iParam1 == func_1943())
	{
	}
	if (iParam1 != 0)
	{
		Global_40.f_4283.f_5 = iParam1;
	}
	__LIB_1__::func_579(268435456);
	return true;
}

int func_1450(char[4] cParam0)
{
	int iVar0;
	iVar0 = __LIB_6__::func_864(cParam0);
	return func_234(iVar0);
}

void func_1451(char[4] cParam0, int iParam1, bool bParam2, int iParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	char* sVar3;
	if (__LIB_0__::func_27(Local_236[iParam1 /*4*/].f_3, 1))
	{
		if (!__LIB_0__::func_272(Local_236[iParam1 /*4*/].f_1, 0))
		{
			__LIB_1__::func_681(&(Local_236[iParam1 /*4*/].f_3), 1);
		}
		else
		{
			return;
		}
	}
	if (__LIB_5__::func_24(__LIB_6__::func_864(cParam0)) < 3)
	{
		fVar0 = -1341.391f;
		fVar1 = 2476.742f;
		fVar2 = 308.1772f;
	}
	else
	{
		fVar0 = -116.9624f;
		fVar1 = -94.5179f;
		fVar2 = 77.6598f;
	}
	if (!func_871(cParam0, Local_236[iParam1 /*4*/], &(Local_236[iParam1 /*4*/].f_1), 0, fVar0, fVar1, fVar2, 0, 1, iParam3, 0, 0, 1, 0))
	{
		*bParam2 = 0;
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_236[iParam1 /*4*/].f_1, true);
	ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Local_236[iParam1 /*4*/].f_1, false);
	if (((__LIB_6__::func_864(cParam0) == 3 && iParam1 != 1) && iParam1 != 7) && ENTITY::IS_ENTITY_VISIBLE(Local_236[iParam1 /*4*/].f_1))
	{
		ENTITY::SET_ENTITY_VISIBLE(Local_236[iParam1 /*4*/].f_1, false);
	}
	sVar3 = __LIB_11__::func_372(Local_236[iParam1 /*4*/]);
	if (iParam1 == 12)
	{
		sVar3 = "SUSAN";
	}
	__LIB_9__::func_42(cParam0, Local_236[iParam1 /*4*/].f_1, sVar3, 0);
	PED::SET_PED_CONFIG_FLAG(Local_236[iParam1 /*4*/].f_1, 130, true);
	PED::SET_PED_CONFIG_FLAG(Local_236[iParam1 /*4*/].f_1, 315, true);
	PED::SET_PED_CONFIG_FLAG(Local_236[iParam1 /*4*/].f_1, 301, true);
	TASK::_0xE8C296B75EACC357(Local_236[iParam1 /*4*/].f_1, 0f);
	__LIB_1__::func_683(&(Local_236[iParam1 /*4*/].f_3), 1);
	__LIB_1__::func_681(&(Local_236[iParam1 /*4*/].f_3), 4);
	if (iParam1 == 18 && PED::_0xA0BC8FAED8CFEB3C(Local_236[18 /*4*/].f_1))
	{
		__LIB_4__::func_239(Local_236[18 /*4*/].f_1);
	}
}

int func_1453(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = 1;
	iVar1 = func_1450(cParam0);
	iVar2 = 178615350;
	iVar4 = 0;
	iVar4 = 0;
	while (iVar4 < 21)
	{
		if (!__LIB_0__::func_272(Local_236[iVar4 /*4*/].f_1, 1))
		{
		}
		else
		{
			iVar3 = func_1318(iVar4);
			if (iVar3 == 27)
			{
			}
			else if (__LIB_0__::func_27(Local_236[iVar4 /*4*/].f_3, 4))
			{
			}
			else
			{
				iVar2 = 178615350;
				if (iVar1 >= 3)
				{
					if (iVar3 != 7 && iVar3 != 5)
					{
						iVar2 = -268604689;
					}
				}
				if (iVar2 == -268604689)
				{
					if (iVar3 == 3 || iVar3 == 18)
					{
					}
				}
				func_1475(iVar3, Local_236[iVar4 /*4*/].f_1, iVar2);
				if (iVar3 == 0)
				{
					if (iVar2 == 178615350)
					{
						if (!__LIB_5__::func_260(0, 262144))
						{
							__LIB_5__::func_268(0, 262144);
						}
					}
					else if (__LIB_5__::func_260(0, 262144))
					{
						__LIB_0__::func_254(0, 262144);
					}
				}
				__LIB_1__::func_683(&(Local_236[iVar4 /*4*/].f_3), 4);
			}
		}
		iVar4++;
	}
	return iVar0;
}

void func_1454()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[14 /*4*/].f_1))
	{
		__LIB_5__::func_602(Local_236[14 /*4*/].f_1, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK"));
		__LIB_5__::func_602(Local_236[14 /*4*/].f_1, joaat("WEAPON_SNIPERRIFLE_ROLLINGBLOCK_LENNY"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[4 /*4*/].f_1))
	{
		__LIB_5__::func_602(Local_236[4 /*4*/].f_1, joaat("WEAPON_RIFLE_BOLTACTION"));
		__LIB_5__::func_602(Local_236[4 /*4*/].f_1, joaat("WEAPON_RIFLE_BOLTACTION_BILL"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[0 /*4*/].f_1))
	{
		__LIB_5__::func_602(Local_236[0 /*4*/].f_1, joaat("WEAPON_REPEATER_WINCHESTER_JOHN"));
		__LIB_5__::func_602(Local_236[0 /*4*/].f_1, joaat("WEAPON_REPEATER_WINCHESTER"));
		__LIB_5__::func_602(Local_236[0 /*4*/].f_1, joaat("WEAPON_REVOLVER_CATTLEMAN"));
		__LIB_5__::func_602(Local_236[0 /*4*/].f_1, joaat("WEAPON_MELEE_KNIFE"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[18 /*4*/].f_1))
	{
		__LIB_5__::func_602(Local_236[18 /*4*/].f_1, joaat("WEAPON_REVOLVER_CATTLEMAN"));
		__LIB_5__::func_602(Local_236[18 /*4*/].f_1, joaat("WEAPON_REVOLVER_CATTLEMAN_KIERAN"));
		__LIB_5__::func_602(Local_236[18 /*4*/].f_1, joaat("WEAPON_MELEE_KNIFE_KIERAN"));
		__LIB_5__::func_602(Local_236[18 /*4*/].f_1, joaat("WEAPON_MELEE_KNIFE"));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_236[3 /*4*/].f_1))
	{
		__LIB_5__::func_602(Local_236[3 /*4*/].f_1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL"));
		__LIB_5__::func_602(Local_236[3 /*4*/].f_1, joaat("WEAPON_SHOTGUN_DOUBLEBARREL_UNCLE"));
	}
}

bool func_1455(int iParam0, int iParam1)
{
	char* sVar0;
	char[] cVar1[8];
	sVar0 = func_430(iParam1);
	cVar1 = func_429(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(cVar1))
	{
		return false;
	}
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_470[iParam0 /*4*/]))
	{
		Local_470[iParam0 /*4*/] = ANIMSCENE::_CREATE_ANIM_SCENE(cVar1, 0, sVar0, false, true);
		return false;
	}
	if (!Local_470[iParam0 /*4*/].f_1)
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_470[iParam0 /*4*/]);
		Local_470[iParam0 /*4*/].f_1 = 1;
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_470[iParam0 /*4*/], true, false))
	{
		return false;
	}
	Local_470[iParam0 /*4*/].f_3 = iParam1;
	return true;
}

bool func_1456()
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_321[iVar1 /*5*/]))
		{
			Local_321[iVar1 /*5*/] = OBJECT::CREATE_OBJECT_NO_OFFSET(Local_321[iVar1 /*5*/].f_4, Local_321[iVar1 /*5*/].f_1, true, true, false, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_321[iVar1 /*5*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_321[iVar1 /*5*/], true);
			}
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_1457(char[4] cParam0)
{
	int iVar0;
	iVar0 = func_1450(cParam0);
	switch (iVar0)
	{
		case 0:
			if (!func_1473(2048))
			{
				if (!__LIB_11__::func_385(-1, 0))
				{
					return false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
			{
				iLocal_423[4] = Local_14.f_7[1];
				func_1951(4);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[4], 4, false);
				func_1952(&(iLocal_423[4]));
				VEHICLE::_0x8C6D9A399126C194(iLocal_423[4], 1);
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]))
			{
				iLocal_423[3] = Local_14.f_7[2];
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_423[3], false);
				func_1951(3);
				func_1952(&(iLocal_423[3]));
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[3], 4, false);
				VEHICLE::_0x8C6D9A399126C194(iLocal_423[3], 2);
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[0]))
			{
				iLocal_423[0] = Local_14.f_7[3];
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_423[0], false);
				func_1951(0);
				func_1952(&(iLocal_423[0]));
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[0], 3, false);
				VEHICLE::_0x8C6D9A399126C194(iLocal_423[0], 13);
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[1]))
			{
				iLocal_423[1] = Local_14.f_7[4];
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_423[1], false);
				func_1951(1);
				func_1952(&(iLocal_423[1]));
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[1], 3, false);
				VEHICLE::_0x8C6D9A399126C194(iLocal_423[1], 5);
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[2]))
			{
				iLocal_423[2] = Local_14.f_7[0];
				func_1951(2);
				func_1952(&(iLocal_423[2]));
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[2], 2, false);
				VEHICLE::_0x8C6D9A399126C194(iLocal_423[2], 20);
				return false;
			}
			break;
		case 1:
			if (!func_1953(-1, 0))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
			{
				iLocal_423[4] = Local_14.f_15[4];
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]))
			{
				iLocal_423[3] = Local_14.f_15[3];
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[0]))
			{
				iLocal_423[0] = Local_14.f_15[2];
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[1]))
			{
				iLocal_423[1] = Local_14.f_15[1];
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[2]))
			{
				iLocal_423[2] = Local_14.f_15[0];
			}
			VEHICLE::_0x8C6D9A399126C194(iLocal_423[4], 1);
			VEHICLE::_0x8C6D9A399126C194(iLocal_423[3], 2);
			VEHICLE::_0x8C6D9A399126C194(iLocal_423[0], 13);
			VEHICLE::_0x8C6D9A399126C194(iLocal_423[1], 5);
			VEHICLE::_0x8C6D9A399126C194(iLocal_423[2], 20);
			break;
		case 2:
		case 3:
			if (!func_1954(-1, 0))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
			{
				iLocal_423[4] = Local_14.f_3[0];
			}
			VEHICLE::_0x8C6D9A399126C194(iLocal_423[4], 1);
			break;
		case 25:
			if (!func_1955(-1, 0))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
			{
				iLocal_423[4] = Local_14.f_23[0];
			}
			func_1270(iLocal_423[4], func_235(6, 26), 2, 1073741824 /* Float: 2f */);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_423[4], false);
			VEHICLE::_0x8C6D9A399126C194(iLocal_423[4], 1);
			break;
	}
	if (!func_1473(4096))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]))
		{
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[3], 0, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[3], 1, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[3], 4, 0);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[3], 5, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_423[3], false, false))
			{
				AUDIO::_FORCE_VEHICLE_ENGINE_AUDIO(iLocal_423[3], "WAGON04X_MUD1_HEAVY_CARGO");
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_423[4], false, false))
			{
				if (__LIB_6__::func_864(cParam0) == iLocal_54)
				{
					AUDIO::_FORCE_VEHICLE_ENGINE_AUDIO(iLocal_423[4], "WAGON04X_MUD1_LIGHT_CARGO_PLYR");
				}
				else
				{
					AUDIO::_FORCE_VEHICLE_ENGINE_AUDIO(iLocal_423[4], "WAGON04X_MUD1_HEAVY_CARGO_PLYR");
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[0]))
		{
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[0], 0, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[0], 1, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[0], 4, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[0], 5, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[1]))
		{
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[1], 0, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[1], 1, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[1], 4, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[1], 5, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[2]))
		{
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[2], 0, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[2], 1, 1);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[2], 4, 0);
			VEHICLE::_0x73118A3EE9C9B6DB(iLocal_423[2], 5, 0);
		}
		func_1956();
		func_1957();
		func_1958();
		if (!__LIB_4__::func_257(iLocal_423[4]))
		{
		}
		func_794(4096);
	}
	return true;
}

bool func_1458(char[4] cParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	var uVar3;
	bool bVar4;
	if (__LIB_0__::func_27(uParam1->f_3, 2))
	{
		return true;
	}
	func_1959(cParam0, iParam2, &vVar0, &uVar3);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_2))
	{
		uParam1->f_2 = func_1960(func_1318(iParam2), 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (__LIB_5__::func_24(__LIB_6__::func_864(cParam0)) == 0)
	{
		bVar4 = false;
	}
	else
	{
		bVar4 = true;
	}
	if (func_1961(&(uParam1->f_2), vVar0, uVar3, 0, 1, bVar4))
	{
		__LIB_1__::func_683(&(uParam1->f_3), 2);
	}
	return false;
}

void func_1463(int iParam0, struct<4> Param1, bool bParam5, bool bParam6)
{
	int iVar0;
	vector3 vVar1;
	iVar0 = func_1267(iParam0);
	if (__LIB_0__::func_272(Local_236[iParam0 /*4*/].f_1, 0) && __LIB_0__::func_272(iVar0, 0))
	{
		if (__LIB_0__::func_71(Local_236[iParam0 /*4*/].f_1))
		{
			PED::_REMOVE_PED_FROM_MOUNT(Local_236[iParam0 /*4*/].f_1, true, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_RIDER_OF_MOUNT(Local_236[iParam0 /*4*/].f_1, false)))
		{
			PED::SET_PED_CAN_RAGDOLL(iVar0, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, joaat("REL_GANG_DUTCHS"));
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar0, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iVar0, false, joaat("REL_GANG_DUTCHS"));
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iVar0, false, 1f);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(Local_236[iParam0 /*4*/].f_1, false, 1f);
			TASK::_0xE8C296B75EACC357(iVar0, 0f);
			if (bParam6)
			{
				func_1270(iVar0, Param1, 2, 1073741824 /* Float: 2f */);
				func_1270(Local_236[iParam0 /*4*/].f_1, Param1, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam5)
			{
				vVar1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 1f, 0f, 0f) };
				func_879(Local_236[iParam0 /*4*/].f_1, vVar1, ENTITY::GET_ENTITY_HEADING(iVar0), 2, 1073741824 /* Float: 2f */);
				PED::_SET_PED_ON_MOUNT(Local_236[iParam0 /*4*/].f_1, iVar0, -1, true);
			}
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_236[iParam0 /*4*/].f_1, true);
	}
}

void func_1464(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_236[iParam0 /*4*/].f_1))
	{
		return;
	}
	if (!AUDIO::_0x44A5EEF54F62E823(Local_236[iParam0 /*4*/].f_1))
	{
		AUDIO::_0xEA546C31FD45F8CD(Local_236[iParam0 /*4*/].f_1);
	}
}

void func_1468(char[4] cParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return;
	}
	iVar0 = 0;
	if (bParam3)
	{
		iVar1 = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*uParam1, iVar2);
			if (__LIB_0__::func_272(iVar3, 0))
			{
				iVar1++;
				if (iVar1 == 0)
				{
					iVar0 = iParam4;
				}
				else if (iVar1 == 1)
				{
					iVar0 = iParam5;
				}
				if (MISC::IS_STRING_NULL_OR_EMPTY(iVar0))
				{
				}
				else
				{
					__LIB_9__::func_62(cParam0, iVar3, iVar0, 0, 0, 0, 0);
				}
			}
			iVar2++;
		}
	}
	__LIB_9__::func_232(cParam0, *uParam1);
	__LIB_9__::func_62(cParam0, *uParam1, sParam2, 0, 0, 0, 0);
}

bool func_1469(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (__LIB_8__::func_616(cParam0))
	{
		if (!__LIB_4__::func_988(&(cParam0->f_7375), iParam1, 4))
		{
			__LIB_5__::func_17(&(cParam0->f_7375), iParam1, 4);
			return true;
		}
	}
	return __LIB_6__::func_911(&(cParam0->f_7375), iParam1, sParam2, iParam3, bParam4, iParam5);
}

bool func_1473(int iParam0)
{
	return __LIB_0__::func_27(iLocal_540, iParam0);
}

void func_1474()
{
	int iVar0;
	int iVar1;
	uLocal_527 = ENTITY::_0x6F3068258A499E52(joaat("P_CHAIRFOLDING02X"), -119.26f, -27.0329f, 95.4037f, 11);
	if (ENTITY::_0x1FF441D7954F8709(uLocal_527))
	{
		iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_527));
		ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
	}
	uLocal_528 = ENTITY::_0x6F3068258A499E52(joaat("P_CRATE15X"), -140.1025f, -28.47f, 95.6039f, 11);
	if (ENTITY::_0x1FF441D7954F8709(uLocal_528))
	{
		iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_0x4735E2A4BB83D9DA(uLocal_528));
		ENTITY::SET_ENTITY_VISIBLE(iVar1, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_321[4 /*5*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_321[4 /*5*/]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_321[0 /*5*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_321[0 /*5*/]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_321[3 /*5*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_321[3 /*5*/]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_321[5 /*5*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_321[5 /*5*/]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_321[8 /*5*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_321[8 /*5*/]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_321[1 /*5*/]))
	{
		OBJECT::DELETE_OBJECT(&(Local_321[1 /*5*/]));
	}
}

void func_1475(int iParam0, int iParam1, int iParam2)
{
	if (!__LIB_0__::func_272(iParam1, 1))
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	if (!__LIB_1__::func_201(iParam0, iParam2))
	{
		return;
	}
	__LIB_0__::func_723(iParam0);
	__LIB_1__::func_288(iParam0, iParam2, 1);
	__LIB_1__::func_558(iParam0, iParam1, iParam2, 1);
}

bool func_1476(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return func_1469(cParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_1486(int iParam0)
{
	__LIB_1__::func_681(&iLocal_540, iParam0);
}

void func_1488()
{
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
	PED::SET_PED_CONFIG_FLAG(Global_35, 334, true);
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 8, 0, 1);
	MISC::SET_BIT(&(Global_1956580.f_1), 1);
}

void func_1489(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	bool bVar5;
	float fVar6;
	iVar0 = 0;
	bVar5 = false;
	fVar6 = 45f;
	if (Local_458.f_8 != 26)
	{
		sVar3 = func_1973(Local_458.f_8);
		if (Local_458.f_9)
		{
			__LIB_5__::func_20(1, 0);
			Local_458.f_9 = 0;
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar3) || !__LIB_6__::func_903(sVar3))
		{
			Local_458.f_8 = 26;
		}
		return;
	}
	if (Local_458.f_9)
	{
		Local_458.f_9 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 26)
	{
		iVar1 = iVar0;
		if (func_1975(iVar1))
		{
			iVar4 = func_1976(iVar1);
			iVar2 = func_1977(cParam0, &Local_458, iVar0, &iVar4, 0, fVar6, bVar5);
			if (iVar2 == 1)
			{
				Local_458.f_8 = iVar1;
			}
			func_1978(iVar2, iVar1);
		}
		else
		{
			iVar0++;
		}
	}
}

void func_1499(char[4] cParam0)
{
	struct<8> Var0;
	func_1987(cParam0);
	if (__LIB_8__::func_587(cParam0) == 1 && CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::_0x297B72E2AF094742(6);
	}
	else if (__LIB_8__::func_587(cParam0) == 0 && !__LIB_6__::func_862(cParam0, 8))
	{
		__LIB_8__::func_668(cParam0);
	}
	__LIB_5__::func_326(&(cParam0->f_10792));
	__LIB_8__::func_696(cParam0);
	__LIB_8__::func_638(cParam0, 67108864);
	__LIB_8__::func_638(cParam0, 8192);
	__LIB_6__::func_887(cParam0, 4);
	__LIB_6__::func_887(cParam0, 512);
	__LIB_6__::func_887(cParam0, 65536);
	__LIB_6__::func_887(cParam0, 1024);
	__LIB_6__::func_887(cParam0, 262144);
	__LIB_6__::func_887(cParam0, 16777216);
	__LIB_6__::func_887(cParam0, 64);
	__LIB_6__::func_881(cParam0, 128);
	__LIB_6__::func_868(cParam0, -2147483648);
	__LIB_6__::func_896(cParam0, 1);
	if (__LIB_6__::func_872(cParam0, 4194304))
	{
		__LIB_8__::func_707(cParam0, __LIB_6__::func_864(cParam0), 1073741824 /* Float: 2f */);
	}
	__LIB_6__::func_881(cParam0, 4194304);
	__LIB_6__::func_881(cParam0, 8388608);
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
	}
	if (__LIB_0__::func_2() == 0)
	{
		__LIB_1__::func_965(8);
		__LIB_5__::func_103(1);
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 64) || !__LIB_6__::func_871(cParam0))
	{
		__LIB_0__::func_267(0);
	}
	else
	{
		__LIB_0__::func_267(1);
	}
	CLOCK::_SET_MILLISECONDS_PER_GAME_MINUTE(2000);
	if (!__LIB_6__::func_862(cParam0, 131072))
	{
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::GET_PLAYER_INDEX(), false);
	}
	__LIB_0__::func_37(&(cParam0->f_13106));
	__LIB_1__::func_148(&(cParam0->f_13112));
	__LIB_9__::func_213(cParam0, __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1));
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1024))
	{
		HUD::_DISPLAY_HUD_COMPONENT(-1679307491);
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 32768))
	{
		__LIB_0__::func_733(1);
	}
	if (__LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)) != -1 && PED::_0x62DE46F061CAA468() < __LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)))
	{
		PED::_0xF008E0BA1FE1D644((__LIB_8__::func_669(cParam0, __LIB_9__::func_40(cParam0)) - PED::_0x62DE46F061CAA468()));
	}
	if (MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_EXISTS())
	{
		MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_DELETE();
	}
	Var0 = { __LIB_8__::func_697(cParam0) };
	MISSIONDATA::_MISSIONDATA_TIMECYCLE_BOX_SET_MODIFIER(&Var0);
	Global_43805 = -1;
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
	{
		__LIB_0__::func_7(&Global_1935630, 2097152);
	}
	else
	{
		__LIB_0__::func_8(&Global_1935630, 2097152);
	}
	__LIB_9__::func_37(cParam0);
	if (__LIB_6__::func_864(cParam0) == 25 && __LIB_0__::func_13(32768))
	{
		__LIB_9__::func_56(cParam0, 16);
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 512))
	{
		__LIB_4__::func_587(1f, 0f, 0f, 0f);
	}
	else
	{
		__LIB_4__::func_680();
	}
}

void func_1672(int iParam0)
{
	int iVar0[15];
	bool bVar16;
	bool bVar17;
	var uVar18[15];
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	var uVar39;
	bool bVar40;
	func_687(iParam0, 1, 1, -142743235, 1);
	iVar34 = __LIB_1__::func_415(iParam0, &uVar18);
	__LIB_1__::func_82(iParam0, &uVar18, &iVar34, 1);
	if (__LIB_0__::func_241() == -2125499975)
	{
		iVar38 = 2020890174;
	}
	else
	{
		iVar38 = 1105329772;
	}
	__LIB_0__::func_827(iParam0, &(Global_26796.f_627.f_121.f_20));
	__LIB_1__::func_798(iParam0, 1, 1);
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		func_687(uVar18[iVar36], 1, 1, -142743235, 1);
		switch (__LIB_0__::func_357(uVar18[iVar36]))
		{
			case -2061583405:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_21));
				break;
			case 81053684:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_23));
				break;
			case -525676072:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_22));
				break;
			case -1719060085:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_24));
				break;
			case -413129408:
				__LIB_0__::func_827(uVar18[iVar36], &(Global_26796.f_627.f_121.f_25));
				break;
		}
		__LIB_1__::func_798(uVar18[iVar36], 1, 1);
		iVar0[iVar36] = __LIB_0__::func_161(__LIB_1__::func_710(uVar18[iVar36]), 1);
		iVar36++;
	}
	__LIB_0__::func_608(&(Global_1946804.f_1616));
	__LIB_1__::func_633(&(Global_1946804.f_1616), iVar38, &uVar39, 1, 0, 0, 0);
	Global_1946804.f_1616.f_1[8 /*3*/] = { __LIB_0__::func_377(8, 0) };
	Global_1946804.f_1616.f_1[9 /*3*/] = { __LIB_0__::func_377(9, 0) };
	Global_1946804.f_1616.f_1[0 /*3*/] = { __LIB_0__::func_377(0, 0) };
	Global_1946804.f_1616.f_1[2 /*3*/] = { __LIB_0__::func_377(2, 0) };
	Global_1946804.f_1616.f_1[3 /*3*/] = { __LIB_0__::func_377(3, 0) };
	Global_1946804.f_1616.f_1[1 /*3*/] = { __LIB_0__::func_377(1, 0) };
	Global_1946804.f_1616.f_1[5 /*3*/] = { __LIB_0__::func_377(5, 0) };
	Global_1946804.f_1616.f_1[6 /*3*/] = { __LIB_0__::func_377(6, 0) };
	Global_1946804.f_1616.f_1[7 /*3*/] = { __LIB_0__::func_377(7, 0) };
	iVar35 = 0;
	while (iVar35 < 5)
	{
		iVar36 = 0;
		while (iVar36 < iVar34)
		{
			if (uVar18[iVar36] == __LIB_0__::func_780(iVar0[iVar36], iVar35))
			{
				__LIB_1__::func_798(__LIB_0__::func_998(iVar35), 1, 1);
				__LIB_0__::func_999(iVar35);
				if (iVar35 == 0)
				{
					bVar17 = true;
					iVar37 = 0;
					while (iVar37 < 39)
					{
						if (!__LIB_0__::func_65(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), 2))
						{
						}
						else
						{
							__LIB_0__::func_242(&(Global_1946804.f_1616.f_1[iVar37 /*3*/]), iVar37, 0);
							Global_1946804.f_1497.f_1[iVar37 /*3*/] = { Global_1946804.f_1616.f_1[iVar37 /*3*/] };
						}
						iVar37++;
					}
				}
			}
			else
			{
				iVar36++;
			}
		}
		iVar35++;
	}
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_1946804.f_1497.f_1[iVar0[iVar36] /*3*/])
		{
			bVar16 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if ((bVar16 || bVar17) || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
	{
		if (!__LIB_0__::func_609(8))
		{
			if (__LIB_0__::func_241() == -2125499975)
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 6;
				}
			}
			else
			{
				if (bVar17)
				{
					__LIB_1__::func_633(&(Global_1946804.f_1616), -361635024 /* GXTEntry: "The Cowboy" */, &uVar39, 0, 1, 0, 1160113249);
					Global_1946804.f_1616 = joaat("CLOTHING_CUSTOM_ONE_OUTFIT");
					__LIB_0__::func_742(&(Global_1946804.f_1616), 0);
					if (Global_40.f_7729 == 0)
					{
						__LIB_0__::func_244(2, 0, 6);
					}
				}
				if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
				{
					Global_1905941 = 62;
				}
			}
			if (bVar16 || Global_40.f_7729 == __LIB_0__::func_449(iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
				{
					__LIB_0__::func_828(Global_40.f_7729, 4096);
					__LIB_0__::func_806(Global_1905941, 4096);
					Global_40.f_7729 = Global_1905941;
				}
				else
				{
					__LIB_9__::func_2(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Global_1905941, 1, 0, 0);
				}
			}
		}
	}
	bVar40 = false;
	iVar36 = 0;
	while (iVar36 < iVar34)
	{
		if (uVar18[iVar36] == Global_26796.f_627.f_1.f_1.f_1[iVar0[iVar36] /*3*/])
		{
			bVar40 = true;
		}
		else
		{
			iVar36++;
		}
	}
	if (!bVar40)
	{
		return;
	}
	__LIB_1__::func_633(&(Global_1946804.f_1616), joaat("CLOTHING_GUNSLINGER_OUTFIT"), &uVar39, 0, 1, 0, -2125499975);
	__LIB_1__::func_633(&(Global_1946804.f_1616), 2020890174, &uVar39, 1, 0, 0, -2125499975);
	Global_1946804.f_1616.f_1[8 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[8 /*3*/] };
	Global_1946804.f_1616.f_1[9 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[9 /*3*/] };
	Global_1946804.f_1616.f_1[0 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[0 /*3*/] };
	Global_1946804.f_1616.f_1[2 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[2 /*3*/] };
	Global_1946804.f_1616.f_1[3 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[3 /*3*/] };
	Global_1946804.f_1616.f_1[1 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[1 /*3*/] };
	Global_1946804.f_1616.f_1[5 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[5 /*3*/] };
	Global_1946804.f_1616.f_1[6 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[6 /*3*/] };
	Global_1946804.f_1616.f_1[7 /*3*/] = { Global_26796.f_627.f_1.f_1.f_1[7 /*3*/] };
	Global_26796.f_627 = Global_1946804.f_1616;
	Global_26796.f_627.f_1.f_1 = Global_1946804.f_1616;
	iVar36 = 0;
	while (iVar36 < 39)
	{
		Global_26796.f_627.f_1.f_1.f_1[iVar36 /*3*/] = { Global_1946804.f_1616.f_1[iVar36 /*3*/] };
		iVar36++;
	}
}

void func_1677(struct<6> Param0)
{
	if (!func_2141(Param0.f_4, 1))
	{
	}
	if (!func_2141(Param0, 1))
	{
	}
	if (!func_2141(Param0.f_2, 1))
	{
	}
	if (!func_2141(Param0.f_5, 1))
	{
	}
	if (!func_2141(Param0.f_3, 1))
	{
	}
	if (!func_2141(Param0.f_1, 1))
	{
	}
}

int func_1708(int iParam0)
{
	int iVar0;
	if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[iParam0 /*2*/].f_1))
	{
		return Global_1897952[iParam0 /*2*/].f_1;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BAYOU_NWA");
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, -2050f, 150f, 0f, 0f, 18f, 575f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2485f, -1497.5f, 150f, 0f, 0f, 20f, 725f, 1050f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2060f, -1812.5f, 150f, 0f, 0f, 20f, 315f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1975f, -1452.5f, 150f, 0f, 0f, -43f, 200f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -1277.5f, 150f, 0f, 0f, -7f, 100f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2022.5f, -925f, 150f, 0f, 0f, 20f, 865f, 365f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2200f, -2440f, 150f, 0f, 0f, 0f, 500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1762.5f, -737.5f, 150f, 0f, 0f, 20f, 500f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2020.944f, -580.694f, 150f, 0f, 0f, -111f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2116.078f, -612.5f, 150f, 0f, 0f, -1f, 240f, 540f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2197.5f, -693.982f, 150f, 0f, 0f, -111f, 200f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2527.5f, -785f, 150f, 0f, 0f, -80f, 400f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3550f, -1455f, 150f, 0f, 0f, 0f, 1800f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2687.5f, -757.5f, 150f, 0f, 0f, -80f, 400f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2826.796f, -755f, 150f, 0f, 0f, 0f, 282.646f, 400f, 700f);
			break;
		case 1:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BIG_VALLEY");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1605f, -382.5f, 150f, 0f, 0f, 25f, 1100f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2035f, -810f, 150f, 0f, 0f, -65f, 400f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1887.5f, -1050f, 150f, 0f, 0f, -45f, 210f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -625f, 150f, 0f, 0f, -65f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2827.5f, -82.5f, 150f, 0f, 0f, 167f, 1500f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -930f, -730f, 150f, 0f, 0f, 0f, 600f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -825f, -780f, 150f, 0f, 0f, -45f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -632.5f, -902.5f, 150f, 0f, 0f, -20f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -820f, -170f, 150f, 0f, 0f, 37.5f, 500f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -835f, -525f, 150f, 0f, 0f, 41f, 200f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -532.5f, -32.5f, 150f, 0f, 0f, -27f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -605f, 50f, 150f, 0f, 0f, -75f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -540f, 50f, 150f, 0f, 0f, -140f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1127.5f, -90f, 150f, 0f, 0f, -32.5f, 200f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1500f, 392.5f, 150f, 0f, 0f, 160f, 700f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1477.5f, 552.5f, 150f, 0f, 0f, 143f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1656.969f, 378.098f, 150f, 0f, 0f, 122f, 795f, 1083f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2617.969f, 452.097f, 150f, 0f, 0f, 167f, 1763f, 1500f, 700f);
			break;
		case 2:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_BLUEGILL_MARSH");
			VOLUME::_0x39816F6F94F385AD(iVar0, 3585f, -280f, 150f, 0f, 0f, 0f, 1800f, 550f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3085f, -337.5f, 150f, 0f, 0f, -80.5f, 300f, 1500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2440f, -465f, 150f, 0f, 0f, -1f, 400f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2322.5f, -537.5f, 150f, 0f, 0f, -111f, 100f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3100f, 125f, 150f, 0f, 0f, 41f, 1700f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3670f, 80f, 150f, 0f, 0f, 41f, 1400f, 475f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2332.651f, -365.338f, 150f, 0f, 0f, 86f, 150f, 140f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2124.824f, -347.118f, 150f, 0f, 0f, 86f, 140f, 291f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3726.431f, -755f, 150f, 0f, 0f, 0f, 1518.809f, 400f, 700f);
			break;
		case 3:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CUMBERLAND_FOREST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190.4736f, 1214.829f, 200f, 0f, 0f, 59f, 488.2586f, 443.9291f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 695f, 1075f, 200f, 0f, 0f, 35f, 250f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -11.22244f, 1259.539f, 200f, 0f, 0f, 0f, 135f, 340.8336f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 667.5f, 1675f, 200f, 0f, 0f, 15f, 150f, 325f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 627.5f, 1255f, 200f, 0f, 0f, 9.999999f, 400f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 507.5f, 1532.5f, 200f, 0f, 0f, -45f, 300f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 72.5f, 1297.5f, 200f, 0f, 0f, 50f, 400f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 615f, 1750f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 510f, 1025f, 200f, 0f, 0f, 1f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 330.2712f, 1028.66f, 200f, 0f, 0f, 82f, 300f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 224.7084f, 1010.634f, 200f, 0f, 0f, 58.85596f, 175f, 267.2676f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 153.0846f, 1314.722f, 200f, 0f, 0f, -23f, 400f, 409.2231f, 800f);
			break;
		case 4:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GREAT_PLAINS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1285f, -1725f, 150f, 0f, 0f, 20f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1360f, -1540f, 150f, 0f, 0f, 30f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1492.5f, -1262.5f, 150f, 0f, 0f, 15f, 500f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1410f, -1147.5f, 150f, 0f, 0f, 25f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1125f, 150f, 0f, 0f, -20f, 700f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -865f, -1725f, 150f, 0f, 0f, 0f, 800f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1300f, -1917.5f, 150f, 0f, 0f, -42f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1180f, -2122.5f, 150f, 0f, 0f, 20f, 300f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -955f, -1065f, 150f, 0f, 0f, -45f, 250f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1052.5f, -990f, 150f, 0f, 0f, 1.25f, 200f, 200f, 700f);
			break;
		case 7:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_WEST");
			VOLUME::_0x39816F6F94F385AD(iVar0, -100f, 1557.5f, 200f, 0f, 0f, 50f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1660f, 200f, 0f, 0f, 0f, 135f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -162.5f, 1952.5f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -752.5f, 2135f, 200f, 0f, 0f, 0f, 1050f, 1975f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2139.972f, 1966.829f, 200f, 0f, 0f, 165f, 1814.271f, 1288f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1295f, 1090f, 200f, 0f, 0f, 122f, 1200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1080f, 1132.5f, 200f, 0f, 0f, 105f, 1200f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -895f, 1150f, 200f, 0f, 0f, 45f, 800f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -845f, 720f, 200f, 0f, 0f, 0f, 200f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1015f, 560f, 200f, 0f, 0f, 143f, 75f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1940f, 3145f, 200f, 0f, 0f, 0f, 1400f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -757.5f, 3625f, 200f, 0f, 0f, 0f, 975f, 1050f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -187.5f, 3210f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2315.88f, 1498.498f, 150f, 0f, 0f, 167f, 1655f, 587f, 700f);
			break;
		case 6:
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES_EAST");
			VOLUME::_0x39816F6F94F385AD(iVar0, 190f, 1630f, 200f, 0f, 0f, -23f, 225f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 715f, 3145f, 200f, 0f, 0f, 0f, 1200f, 2000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1210f, 1212.5f, 200f, 0f, 0f, -14f, 585f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1510f, 1445f, 200f, 0f, 0f, 16f, 450f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1935f, 1040f, 200f, 0f, 0f, 12f, 200f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 1030f, 200f, 0f, 0f, -14f, 100f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1495f, 1425f, 200f, 0f, 0f, -9f, 1200f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1050f, 1430f, 200f, 0f, 0f, 10f, 500f, 700f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2037.5f, 1630f, 200f, 0f, 0f, 118f, 200f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1400f, 2500f, 200f, 0f, 0f, -47f, 2000f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1810f, 2707.5f, 200f, 0f, 0f, -19f, 1500f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2175f, 3557.5f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1040f, 2120f, 200f, 0f, 0f, 15f, 800f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 410f, 2112.5f, 200f, 0f, 0f, -93f, 500f, 600f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 307.5f, 1722.5f, 200f, 0f, 0f, -45f, 250f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 472.5f, 1880f, 200f, 0f, 0f, -93f, 200f, 150f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 135f, 2000f, 200f, 0f, 0f, 9f, 300f, 800f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 217.5f, 3245f, 200f, 0f, 0f, -6f, 400f, 1800f, 800f);
			Jump @9446; //curOff = 4298
			if (VOLUME::_DOES_VOLUME_EXIST(Global_1897952[6 /*2*/].f_1) && VOLUME::_DOES_VOLUME_EXIST(Global_1897952[7 /*2*/].f_1))
			{
				iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GRIZZLIES");
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[6 /*2*/].f_1);
				VOLUME::_0x6E0D3C3F828DA773(iVar0, Global_1897952[7 /*2*/].f_1);
			}
			else
			{
				return 0;
			}
			Jump @9446; //curOff = 4382
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GUARMA");
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2410.933f, -7578.265f, 50f, 0f, 0f, 0f, 2000f, 2000f, 890f);
			VOLUME::_0xBCE668AAF83608BE(iVar0, 2388.016f, -4563.885f, 50f, 0f, 0f, 0f, 815f, 500f, 800f);
			Jump @9446; //curOff = 4473
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HEARTLAND");
			VOLUME::_0x39816F6F94F385AD(iVar0, -357.5f, -120f, 200f, 0f, 0f, -27f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -385f, 180f, 200f, 0f, 0f, -140f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -600f, 280f, 200f, 0f, 0f, -75f, 150f, 350f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 165f, 165f, 200f, 0f, 0f, 0f, 1100f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -465f, -340f, 200f, 0f, 0f, 37.5f, 500f, 275f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -37.5f, -525f, 200f, 0f, 0f, 0f, 1125f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 670f, -315f, 200f, 0f, 0f, -42f, 365f, 817f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 860f, 487.5f, 200f, 0f, 0f, 35f, 650f, 900f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 512.5f, 800f, 200f, 0f, 0f, 1f, 300f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1230f, 695f, 200f, 0f, 0f, -14f, 875f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1560f, 835f, 200f, 0f, 0f, 16f, 450f, 200f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1727.5f, 702.5f, 200f, 0f, 0f, -14f, 100f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 964.14f, 59.521f, 200f, 0f, 0f, -71.00001f, 415f, 725f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1485f, 322.5f, 200f, 0f, 0f, -84f, 650f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1630f, 100f, 200f, 0f, 0f, -111f, 435f, 375f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1752.5f, 302.5f, 200f, 0f, 0f, -47f, 275f, 100f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 103.6867f, 807.6879f, 200f, 0f, 0f, 58.7951f, 295.0871f, 709.0376f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 302.139f, 780.344f, 200f, 0f, 0f, 82f, 200f, 157.492f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -847.5f, 240f, 200f, 0f, 0f, 33f, 797f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -975f, 280f, 200f, 0f, 0f, 142f, 329f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -245.4394f, 1000f, 200f, 0f, 0f, 0f, 333.3127f, 300f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -760f, 440f, 200f, 0f, 0f, 105f, 300f, 250f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -520f, 507.5f, 200f, 0f, 0f, 0f, 450f, 450f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -495f, 822.5f, 200f, 0f, 0f, 45f, 500f, 225f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -140f, 705f, 200f, 0f, 0f, 59f, 250f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -327.5f, 1080f, 200f, 0f, 0f, 45f, 100f, 100f, 800f);
			Jump @9446; //curOff = 5584
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_ROANOKE_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1838.526f, 72.693f, 200f, 0f, 0f, -111f, 525f, 311f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2827.5f, 1215f, 200f, 0f, 0f, -9f, 1500f, 650f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1920f, 655f, 200f, 0f, 0f, -14f, 300f, 575f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2181.992f, -132.078f, 200f, 0f, 0f, 86f, 315f, 322f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2130f, 825f, 200f, 0f, 0f, 12f, 500f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2345f, 1795f, 200f, 0f, 0f, 118f, 200f, 500f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2775f, 725f, 200f, 0f, 0f, 41f, 2000f, 985f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 2565f, 1537.5f, 200f, 0f, 0f, -47f, 1000f, 400f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3025f, 1632.5f, 200f, 0f, 0f, -19f, 1500f, 1000f, 800f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 3730f, 2300f, 200f, 0f, 0f, -39f, 2000f, 1500f, 800f);
			Jump @9446; //curOff = 6027
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_SCARLETT_MEADOWS");
			VOLUME::_0x39816F6F94F385AD(iVar0, 1025f, -642.5f, 150f, 0f, 0f, -42f, 600f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1335f, -407.5f, 150f, 0f, 0f, -71f, 717f, 325f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1585f, -330f, 150f, 0f, 0f, -111f, 400f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1250f, -1702.5f, 150f, 0f, 0f, 0f, 594f, 2000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 612.5f, -1337.5f, 150f, 0f, 0f, 0f, 850f, 1200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 677.5f, -2270f, 150f, 0f, 0f, 45f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1408.3f, -1687.9f, 150f, 0f, 0f, 5f, 450f, 1300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1600f, -545f, 100f, 0f, 0f, 20f, 325f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1807.467f, -1544.09f, 150f, 0f, 0f, -72f, 309f, 562f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1705.656f, -1257.077f, 150f, 0f, 0f, 20f, 400f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1946.824f, -1264.023f, 150f, 0f, 0f, 21f, 100f, 176f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1735.228f, -1334.945f, 150f, 0f, 0f, 20f, 295f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1902.5f, -432.5f, 150f, 0f, 0f, -111f, 365f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1827.5f, -580f, 150f, 0f, 0f, 20f, 75f, 75f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1571.834f, -1097.489f, 150f, 0f, 0f, 20f, 85f, 371f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, 1661.989f, -1972.796f, 150f, 0f, 0f, 18f, 85f, 371f, 700f);
			Jump @9446; //curOff = 6716
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_TALL_TREES");
			VOLUME::_0x39816F6F94F385AD(iVar0, -1762.5f, -2030f, 150f, 0f, 0f, 16f, 275f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1445f, -1987.5f, 150f, 0f, 0f, -42f, 125f, 50f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1600f, -1882.5f, 150f, 0f, 0f, 20f, 200f, 335f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1927.5f, -1750f, 150f, 0f, 0f, 30f, 690f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2052.5f, -1517.5f, 150f, 0f, 0f, 15f, 715f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2162.5f, -1237.5f, 150f, 0f, 0f, -45f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2272.5f, -1057.5f, 150f, 0f, 0f, -65f, 519f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2865f, -1112.5f, 150f, 0f, 0f, 167f, 1250f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1972.5f, -2022.5f, 150f, 0f, 0f, 44f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1875f, -2087.5f, 150f, 0f, 0f, 70f, 300f, 180f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2140f, -1950f, 150f, 0f, 0f, 70f, 200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2210f, -1890f, 150f, 0f, 0f, 24f, 200f, 175f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1397.5f, -2027.5f, 150f, 0f, 0f, 20f, 45f, 25f, 700f);
			Jump @9446; //curOff = 7288
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_CHOLLA_SPRINGS");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3305f, -3380f, 150f, 0f, 0f, 123f, 300f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3335f, -3582.5f, 150f, 0f, 0f, 170f, 225f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3200f, -3515f, 150f, 0f, 0f, -154f, 235f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3515f, -3190f, 150f, 0f, 0f, 139f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3930f, -2912.5f, 150f, 0f, 0f, 154f, 700f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4537.5f, -2665f, 150f, 0f, 0f, -178f, 1000f, 800f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4967.5f, -2390f, 150f, 0f, 0f, -148f, 300f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4617.5f, -2080f, 150f, 0f, 0f, 175f, 1000f, 700f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3747.5f, -2030f, 150f, 0f, 0f, 99f, 700f, 1000f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3282.5f, -3050f, 150f, 0f, 0f, 107f, 750f, 400f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3370f, -2690f, 150f, 0f, 0f, 124f, 100f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3355f, -2345f, 150f, 0f, 0f, 69f, 200f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3657.5f, -2610f, 150f, 0f, 0f, 98f, 500f, 850f, 700f);
			Jump @9446; //curOff = 7860
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_GAPTOOTH_RIDGE");
			VOLUME::_0x39816F6F94F385AD(iVar0, -5420f, -3447.5f, 150f, 0f, 0f, 175f, 300f, 250f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5837.5f, -3530f, 150f, 0f, 0f, -32f, 1000f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -6142.5f, -3665f, 150f, 0f, 0f, -8f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5747.5f, -2905f, 150f, 0f, 0f, 136.5f, 1300f, 750f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5407.5f, -2487.5f, 150f, 0f, 0f, -148f, 550f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5232.5f, -2825f, 150f, 0f, 0f, -178f, 400f, 530f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5667.5f, -2040f, 150f, 0f, 0f, 175f, 1100f, 800f, 700f);
			Jump @9446; //curOff = 8174
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_HENNIGAS_STEAD");
			VOLUME::_0x39816F6F94F385AD(iVar0, -2510f, -2542.5f, 150f, 0f, 0f, 44f, 1200f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1632.5f, -2480f, 150f, 0f, 0f, 16f, 275f, 535f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1990f, -2525f, 150f, 0f, 0f, 70f, 600f, 850f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1452.5f, -2342.5f, 150f, 0f, 0f, 16f, 150f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1480f, -2177.5f, 150f, 0f, 0f, 20f, 165f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1487.5f, -2087.5f, 150f, 0f, 0f, -42f, 60f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1350f, -2330f, 150f, 0f, 0f, 20f, 165f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -1562.5f, -2652.5f, 150f, 0f, 0f, 28f, 500f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2445f, -2795f, 150f, 0f, 0f, 107f, 750f, 1350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2675f, -2177.5f, 150f, 0f, 0f, 70f, 600f, 900f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2947.5f, -2465f, 150f, 0f, 0f, 98f, 150f, 600f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3097.5f, -1977.5f, 150f, 0f, 0f, 99f, 800f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2467.5f, -3145f, 150f, 0f, 0f, 123f, 150f, 200f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2577.5f, -3182.5f, 150f, 0f, 0f, 85f, 150f, 150f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2985f, -2502.5f, 150f, 0f, 0f, 124f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -2942.5f, -2457.5f, 150f, 0f, 0f, 69f, 175f, 600f, 700f);
			Jump @9446; //curOff = 8875
			iVar0 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("DISTRICT_RIO_BRAVO");
			VOLUME::_0x39816F6F94F385AD(iVar0, -3540f, -3635f, 150f, 0f, 0f, 123f, 125f, 100f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3880f, -3687.5f, 150f, 0f, 0f, 105f, 225f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4495f, -3610f, 150f, 0f, 0f, 96f, 600f, 625f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4922.5f, -3742.5f, 150f, 0f, 0f, 131f, 500f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5135f, -3900f, 150f, 0f, 0f, 22f, 200f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5205f, -3887.5f, 150f, 0f, 0f, -16f, 300f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5350f, -3835f, 150f, 0f, 0f, -32f, 150f, 500f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -5125f, -3500f, 150f, 0f, 0f, 175f, 300f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4975f, -3360f, 150f, 0f, 0f, 137f, 450f, 350f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4645f, -3220f, 150f, 0f, 0f, -178f, 735f, 300f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -4205f, -3420f, 150f, 0f, 0f, 154f, 450f, 575f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3795f, -3510f, 150f, 0f, 0f, 139f, 450f, 275f, 700f);
			VOLUME::_0x39816F6F94F385AD(iVar0, -3992.5f, -3567.5f, 150f, 0f, 0f, 0f, 200f, 200f, 700f);
			Global_1897952[iParam0 /*2*/].f_1 = iVar0;
			return iVar0;
		}
bool func_1709(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 37) && !__LIB_0__::func_181())
	{
		return true;
	}
	if (iParam0 == 61)
	{
		return true;
	}
	return false;
}

float func_1734(int iParam0, int iParam1)
{
	return func_1020(iParam0, iParam1);
}

void func_1737(char[4] cParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam2, 1))
	{
		return;
	}
	func_2191(uParam1);
	if (!PED::IS_PED_ON_MOUNT(*uParam1))
	{
		if (!__LIB_0__::func_163(*uParam1, 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(*uParam1, *uParam2, 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
		}
		return;
	}
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*uParam1, 0) || iLocal_111[iParam3])
	{
		vVar0 = { __LIB_14__::func_81(sParam4, 0) };
		if (__LIB_0__::func_266(*uParam1, vVar0, 10f, 1, 1))
		{
			if (!TASK::_0x9FF5F9B24E870748(*uParam1))
			{
				TASK::TASK_STAND_STILL(*uParam1, -1);
			}
		}
		else
		{
			iVar3 = 24584;
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING(*uParam1, sParam4, 0, iVar3, -1, 0, 0, -1);
		}
		iLocal_111[iParam3] = 0;
		return;
	}
	fVar4 = __LIB_0__::func_665(*uParam1, iLocal_423[iLocal_55], 1, 1);
	fVar5 = 45f;
	fVar6 = 30f;
	fVar7 = 1.25f;
	fVar8 = 1.75f;
	bVar9 = true;
	if (__LIB_6__::func_864(cParam0) == iLocal_53)
	{
		fVar7 = 1.25f;
		fVar8 = 1.75f;
		bVar9 = false;
	}
	if (fVar4 > fVar5 && bVar9)
	{
		if (!__LIB_9__::func_954(iLocal_423[iLocal_55], *uParam1, sParam4, fVar5))
		{
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*uParam1))
			{
				TASK::WAYPOINT_PLAYBACK_PAUSE(*uParam1, 0, 0, 0);
			}
		}
	}
	else
	{
		if (fVar4 < (fVar5 - 5f))
		{
			if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*uParam1))
			{
				TASK::WAYPOINT_PLAYBACK_RESUME(*uParam1, false, -1, 0);
			}
		}
		if (fVar4 > fVar6)
		{
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*uParam1))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam1, fVar7, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
		else if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*uParam1))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam1, fVar8, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
}

void func_1738(char[4] cParam0, var uParam1, var uParam2, int iParam3, bool bParam4, char* sParam5, float fParam6)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	bool bVar9;
	if (!__LIB_0__::func_272(*uParam1, 1))
	{
		return;
	}
	if (!__LIB_0__::func_272(*uParam2, 1))
	{
		return;
	}
	func_2194(uParam1);
	if (!PED::IS_PED_ON_MOUNT(*uParam1))
	{
		if (!__LIB_0__::func_163(*uParam1, 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(*uParam1, *uParam2, 20000, -1, 1073741824 /* Float: 2f */, 1, 0, 0);
		}
		return;
	}
	if (!bParam4)
	{
		if (TASK::_0x9FF5F9B24E870748(*uParam1))
		{
			TASK::CLEAR_PED_TASKS(*uParam1, true, false);
		}
		return;
	}
	if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(*uParam1, 0) || iLocal_111[iParam3])
	{
		vVar0 = { __LIB_14__::func_81(sParam5, 0) };
		if (__LIB_0__::func_266(*uParam1, vVar0, 10f, 1, 1))
		{
			if (!TASK::_0x9FF5F9B24E870748(*uParam1))
			{
				TASK::CLEAR_PED_TASKS(*uParam1, true, false);
				TASK::TASK_STAND_STILL(*uParam1, -1);
			}
		}
		else
		{
			iVar3 = 4195342;
			TASK::CLEAR_PED_TASKS(*uParam1, true, false);
			TASK::TASK_FOLLOW_WAYPOINT_RECORDING_AT_OFFSET(*uParam1, sParam5, fParam6, 0, iVar3, -1, 0);
		}
		iLocal_111[iParam3] = 0;
		return;
	}
	fVar4 = __LIB_0__::func_665(*uParam1, iLocal_423[iLocal_55], 1, 1);
	fVar5 = 45f;
	fVar6 = 30f;
	fVar7 = 1.25f;
	fVar8 = 1.75f;
	bVar9 = true;
	if (__LIB_6__::func_864(cParam0) == iLocal_53)
	{
		fVar7 = 1.25f;
		fVar8 = 1.75f;
		fVar5 = 30f;
		fVar6 = 15f;
		bVar9 = false;
	}
	if (fVar4 > fVar5 && bVar9)
	{
		if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*uParam1))
		{
			TASK::WAYPOINT_PLAYBACK_PAUSE(*uParam1, 0, 0, 0);
		}
	}
	else
	{
		if (fVar4 < (fVar5 - 5f))
		{
			if (TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*uParam1))
			{
				TASK::WAYPOINT_PLAYBACK_RESUME(*uParam1, false, -1, 0);
			}
		}
		if (fVar4 > fVar6)
		{
			if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*uParam1))
			{
				TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam1, fVar7, 0, -1082130432 /* Float: -1f */, 0);
			}
		}
		else if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(*uParam1))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(*uParam1, fVar8, 0, -1082130432 /* Float: -1f */, 0);
		}
	}
}

void func_1739(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*uParam0, iVar0);
		if (__LIB_0__::func_272(iVar1, 0))
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar1, fParam1);
		}
		iVar0++;
	}
}

void func_1740()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	fVar0 = func_2195(iLocal_58, iLocal_59, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
	fVar1 = 3.5f;
	if (VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_423[4]) != Global_35)
	{
		fVar1 = 3f;
	}
	Local_115[iLocal_55 /*24*/].f_8 = (fVar1 * fVar0);
	fVar0 = func_2195(iLocal_58, iLocal_59, 30f, 15f);
	fVar2 = 4.5f;
	fVar3 = fVar2;
	fVar4 = ENTITY::GET_ENTITY_SPEED(iLocal_423[iLocal_58]);
	if (fVar4 > fVar3)
	{
		fVar4 = fVar3;
	}
	Local_115[iLocal_59 /*24*/].f_8 = (fVar4 + ((fVar3 - fVar4) * (1f - fVar0)));
	if (__LIB_0__::func_48(iLocal_423[iLocal_59], iLocal_423[iLocal_58], 12f, 1) && ENTITY::GET_ENTITY_SPEED(iLocal_423[iLocal_58]) < 0.1f)
	{
		Local_115[iLocal_59 /*24*/].f_8 = 0f;
	}
}

void func_1741(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	if (iParam2 >= 5 || iParam1 >= 5)
	{
		return;
	}
	if (__LIB_4__::func_257(iLocal_423[iParam2]))
	{
		return;
	}
	iVar3 = VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iLocal_423[iParam2]);
	if (!__LIB_0__::func_272(iVar3, 0))
	{
		return;
	}
	fVar4 = (Local_115[iParam2 /*24*/].f_8 * func_2196(&(iLocal_423[iParam2])));
	fVar5 = 5f;
	iVar6 = 69210624;
	if (iParam1 == iParam2)
	{
		bVar7 = func_2197(iParam2, 1088421888 /* Float: 7f */, 3, 4);
		if ((!__LIB_0__::func_163(iVar3, 1199744105) || Local_115[iParam2 /*24*/].f_22 != iParam4) || bVar7)
		{
			if (Local_115[iParam2 /*24*/].f_22 != iParam4)
			{
				Local_115[iParam2 /*24*/].f_23 = 0;
				Local_115[iParam2 /*24*/].f_22 = iParam4;
			}
			else
			{
				iVar8 = Local_115[iParam2 /*24*/].f_23 + 1;
				if (iVar8 > 3)
				{
					Local_115[iParam2 /*24*/].f_23 = 3;
				}
				else
				{
					Local_115[iParam2 /*24*/].f_23 = iVar8;
				}
			}
			if (func_2198(Local_115[iParam2 /*24*/].f_22, Local_115[iParam2 /*24*/].f_23, &vVar0))
			{
				if (__LIB_0__::func_266(iLocal_423[iParam2], vVar0, (fVar5 * 2f), 1, 1))
				{
				}
				else
				{
					TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(iVar3, iLocal_423[iParam2], vVar0, fVar4, iVar6, 6, (fVar5 * 2f), fVar5, 0);
					__LIB_1__::func_148(&uLocal_69);
				}
			}
			Local_115[iParam2 /*24*/].f_2 = 0;
		}
		return;
	}
	if ((!Local_115[iParam2 /*24*/].f_3 || Local_115[iParam2 /*24*/].f_2) || !TASK::_0x9FF5F9B24E870748(iVar3))
	{
		if (!__LIB_0__::func_75(&(Local_115[iParam2 /*24*/].f_13)))
		{
			__LIB_1__::func_148(&(Local_115[iParam2 /*24*/].f_13));
		}
		if (__LIB_0__::func_75(&(Local_115[iParam2 /*24*/].f_13)) && __LIB_0__::func_264(&(Local_115[iParam2 /*24*/].f_13)) > 0.5f)
		{
			TASK::TASK_VEHICLE_ESCORT(iVar3, iLocal_423[iParam2], iLocal_423[iParam1], 3, fVar4, iVar6, Local_115[iParam2 /*24*/].f_10, 20, 20f);
			Local_115[iParam2 /*24*/].f_3 = 1;
			Local_115[iParam2 /*24*/].f_2 = 0;
			__LIB_0__::func_37(&(Local_115[iParam2 /*24*/].f_13));
		}
	}
	else if (Local_115[3 /*24*/] == 0 && TASK::_0x9FF5F9B24E870748(iVar3))
	{
		TASK::_0xA263ADBBC8056214(iLocal_423[iParam2], 4f);
	}
	else
	{
		func_2199(iParam2);
	}
}

void func_1742(char[4] cParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		__LIB_5__::func_782(0);
		PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), true);
		if (!PED::IS_PED_IN_VEHICLE(Global_35, iLocal_423[iLocal_59], false))
		{
			PED::SET_PED_INTO_VEHICLE(Global_35, iLocal_423[iLocal_59], -1);
		}
		if (!PED::IS_PED_IN_VEHICLE(Local_236[1 /*4*/].f_1, iLocal_423[iLocal_59], false))
		{
			PED::SET_PED_INTO_VEHICLE(Local_236[1 /*4*/].f_1, iLocal_423[iLocal_59], 0);
		}
		if (bLocal_390)
		{
			bLocal_390 = false;
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Global_35, 1);
		}
		if (Local_115[4 /*24*/])
		{
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[iLocal_59], VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_423[iLocal_59]));
			func_1741(cParam0, iLocal_58, iLocal_59, iLocal_59, iParam1);
		}
		else if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_423[iLocal_58]);
		}
	}
	else
	{
		if (!bLocal_390)
		{
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Global_35, 0);
			bLocal_390 = true;
		}
		if (Local_115[4 /*24*/])
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_423[iLocal_59], 0))
			{
				TASK::CLEAR_PED_TASKS(Global_35, true, false);
			}
			VEHICLE::_SET_DRAFT_VEHICLE_DESIRED_SPEED(iLocal_423[iLocal_59], Local_115[iLocal_59 /*24*/].f_8);
			func_2201();
		}
		else if (PLAYER::_0x2009F8AB7A5E9D6D(PLAYER::PLAYER_ID()))
		{
			PLAYER::_0x0C6B89876262A99D(PLAYER::PLAYER_ID(), iLocal_423[iLocal_58]);
		}
	}
}

bool func_1743(int iParam0)
{
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_470[iParam0 /*4*/]))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_470[iParam0 /*4*/], true, false))
	{
		return false;
	}
	return true;
}

void func_1744(int iParam0)
{
	if (__LIB_0__::func_272(Local_236[0 /*4*/].f_1, 1))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_236[0 /*4*/].f_1, iLocal_423[2], false);
		if (!__LIB_0__::func_48(Local_236[0 /*4*/].f_1, iLocal_423[2], 5f, 1))
		{
			ENTITY::SET_ENTITY_COORDS(Local_236[0 /*4*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[2], 0f, -1.5f, 1.5f), true, false, true, true);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iParam0 /*4*/], "JohnMarston", Local_236[0 /*4*/].f_1, 0);
	}
	if (__LIB_0__::func_272(Local_236[8 /*4*/].f_1, 1))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_236[8 /*4*/].f_1, iLocal_423[2], false);
		if (!__LIB_0__::func_48(Local_236[8 /*4*/].f_1, iLocal_423[2], 5f, 1))
		{
			ENTITY::SET_ENTITY_COORDS(Local_236[8 /*4*/].f_1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[2], 0f, -1f, 1.5f), true, false, true, true);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iParam0 /*4*/], "AbigailRoberts", Local_236[8 /*4*/].f_1, 0);
	}
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_470[iParam0 /*4*/], iLocal_423[2], 0);
}

int func_1746(char[4] cParam0, int iParam1)
{
	char* sVar0;
	int iVar1;
	sVar0 = func_2203(iParam1);
	if (__LIB_0__::func_27(iLocal_388, iParam1))
	{
		if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
		{
			__LIB_9__::func_142(cParam0, sVar0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		}
		return 1;
	}
	if (__LIB_0__::func_270())
	{
		return 0;
	}
	if (__LIB_5__::func_352(sVar0))
	{
		__LIB_0__::func_37(&uLocal_78);
		__LIB_1__::func_683(&iLocal_388, iParam1);
		return 0;
	}
	if (!__LIB_1__::func_588(sVar0, 0, 0, -1, -1, 0))
	{
		__LIB_9__::func_142(cParam0, sVar0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
		__LIB_1__::func_148(&uLocal_78);
		fLocal_389 = 10000f;
		iLocal_391 = 0;
		return 0;
	}
	iVar1 = 0;
	switch (iParam1)
	{
		case 1:
			if (func_2205(&uLocal_78, &(iLocal_423[4]), &fLocal_389, &iLocal_391))
			{
				__LIB_9__::func_208(cParam0, sVar0, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 2:
			if (func_2205(&uLocal_78, &(iLocal_423[4]), &fLocal_389, &iLocal_391))
			{
				__LIB_9__::func_208(cParam0, sVar0, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 4:
			if (func_2206(&uLocal_78, ENTITY::GET_ENTITY_COORDS(iLocal_423[3], true, false), &fLocal_389, 30f))
			{
				__LIB_9__::func_208(cParam0, sVar0, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 8:
			if (func_2205(&uLocal_78, &(iLocal_423[4]), &fLocal_389, &iLocal_391))
			{
				__LIB_9__::func_208(cParam0, sVar0, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 128:
			if (func_2207(&uLocal_78, 1092616192 /* Float: 10f */))
			{
				__LIB_9__::func_208(cParam0, sVar0, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 256:
			if (func_2208(&uLocal_78, ENTITY::GET_ENTITY_COORDS(Local_236[5 /*4*/].f_1, false, false), &fLocal_389, -1082130432 /* Float: -1f */))
			{
				__LIB_9__::func_208(cParam0, sVar0, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 512:
			if (func_2206(&uLocal_78, ENTITY::GET_ENTITY_COORDS(Local_236[5 /*4*/].f_1, true, false), &fLocal_389, 10f))
			{
				__LIB_9__::func_208(cParam0, sVar0, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 1024:
			if (func_2208(&uLocal_78, ENTITY::GET_ENTITY_COORDS(Local_236[5 /*4*/].f_1, false, false), &fLocal_389, -1082130432 /* Float: -1f */))
			{
				__LIB_9__::func_208(cParam0, sVar0, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
		case 2048:
			if (func_2208(&uLocal_78, ENTITY::GET_ENTITY_COORDS(iLocal_423[3], false, false), &fLocal_389, -1082130432 /* Float: -1f */))
			{
				__LIB_9__::func_208(cParam0, sVar0, 0, 7500, 0, -1082130432 /* Float: -1f */, 0, 0, -1, -1, 0);
				iVar1 = 1;
			}
			break;
	}
	if (iVar1 == 1)
	{
		__LIB_0__::func_37(&uLocal_78);
		__LIB_1__::func_683(&iLocal_388, iParam1);
	}
	return 0;
}

int func_1747(int iParam0)
{
	if (__LIB_11__::func_764(&Local_458, iParam0))
	{
		if (Local_458.f_8 == iParam0)
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (func_1975(iParam0))
	{
		return 9;
	}
	return 0;
}

void func_1748()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_423[3]))
	{
		VEHICLE::_0x165BE2001E5E4B75(iLocal_423[3]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_423[0]))
	{
		VEHICLE::_0x165BE2001E5E4B75(iLocal_423[0]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_423[1]))
	{
		VEHICLE::_0x165BE2001E5E4B75(iLocal_423[1]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[2]) && !ENTITY::IS_ENTITY_DEAD(iLocal_423[2]))
	{
		VEHICLE::_0x165BE2001E5E4B75(iLocal_423[2]);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_423[4]))
	{
		VEHICLE::_0x165BE2001E5E4B75(iLocal_423[4]);
	}
}

void func_1749(char[4] cParam0)
{
	float fVar0;
	fVar0 = 0.15f;
	if (__LIB_6__::func_864(cParam0) == iLocal_52 || __LIB_6__::func_864(cParam0) == iLocal_53)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_423[0], false, false))
		{
			if (func_2210(0))
			{
				func_2211(&(iLocal_423[0]));
				if (ENTITY::GET_ENTITY_SPEED(iLocal_423[0]) < fVar0)
				{
					__LIB_9__::func_156(cParam0, "MUD1_STUCK_STR", "", 1, 0);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_423[1], false, false))
		{
			if (func_2210(1))
			{
				func_2211(&(iLocal_423[1]));
				if (ENTITY::GET_ENTITY_SPEED(iLocal_423[1]) < fVar0)
				{
					__LIB_9__::func_156(cParam0, "MUD1_STUCK_SWA", "", 1, 0);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_423[2], false, false))
		{
			if (func_2210(2))
			{
				func_2211(&(iLocal_423[2]));
				if (ENTITY::GET_ENTITY_SPEED(iLocal_423[2]) < fVar0)
				{
					__LIB_9__::func_156(cParam0, "MUD1_STUCK_DUT", "", 1, 0);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_423[3], false, false))
		{
			if (func_2210(3))
			{
				func_2211(&(iLocal_423[3]));
				if (ENTITY::GET_ENTITY_SPEED(iLocal_423[3]) < fVar0)
				{
					__LIB_9__::func_156(cParam0, "MUD1_STUCK_CHA", "", 1, 0);
				}
			}
		}
	}
}

void func_1750(char[4] cParam0, int iParam1)
{
	int iVar0;
	iVar0 = func_1450(cParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[iParam1]))
	{
		return;
	}
	if (iVar0 == 2 || iVar0 == 25)
	{
		func_2211(&(iLocal_423[iParam1]));
		__LIB_0__::func_37(&(Local_115[iParam1 /*24*/].f_19));
		Local_115[iParam1 /*24*/].f_5 = 0;
		return;
	}
	if (Local_115[iParam1 /*24*/].f_5)
	{
		if (!__LIB_0__::func_75(&(Local_115[iParam1 /*24*/].f_19)))
		{
			__LIB_1__::func_148(&(Local_115[iParam1 /*24*/].f_19));
		}
		if (__LIB_0__::func_75(&(Local_115[iParam1 /*24*/].f_19)) && __LIB_0__::func_264(&(Local_115[iParam1 /*24*/].f_19)) > 2.25f)
		{
			__LIB_9__::func_156(cParam0, "MUD1_WAGON_DIS", "", 1, 0);
		}
		return;
	}
	if (!func_175(15) && func_2212())
	{
		Local_115[iParam1 /*24*/].f_5 = 1;
	}
	if (!Local_115[iParam1 /*24*/].f_4)
	{
		func_2211(&(iLocal_423[iParam1]));
		Local_115[iParam1 /*24*/].f_4 = 1;
	}
	if (__LIB_4__::func_257(iLocal_423[iParam1]))
	{
		Local_115[iParam1 /*24*/].f_5 = 1;
		return;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_568(iLocal_423[iParam1], 0)) && ENTITY::DOES_ENTITY_EXIST(__LIB_3__::func_568(iLocal_423[iParam1], 1))) && !__LIB_11__::func_29(iLocal_423[iParam1]))
	{
		Local_115[iParam1 /*24*/].f_5 = 1;
		return;
	}
	if (!func_2215(&(iLocal_423[iParam1])))
	{
		if (iParam1 == 4)
		{
			__LIB_9__::func_156(cParam0, "MUD1_FAIL_DRAFT", "", 1, 0);
			return;
		}
		else
		{
			Local_115[iParam1 /*24*/].f_5 = 1;
			return;
		}
	}
	if (func_2210(iParam1))
	{
		Local_115[iParam1 /*24*/].f_5 = 1;
		return;
	}
}

void func_1755(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 3)
	{
		return;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	__LIB_1__::func_336(&(Local_458[iVar1]), iVar2);
}

void func_1756(char[4] cParam0, char* sParam1)
{
	char cVar0[32];
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(cParam0->f_7375.f_804))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(cParam0->f_7375.f_804, true, false))
	{
		return;
	}
	StringCopy(&cVar0, sParam1, 32);
	func_1438(cVar0, &(cParam0->f_7375), cParam0);
}

void func_1757(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	VEHICLE::_0xA19447D83294E29F(iParam0, &iVar0, &uVar1);
	iVar2 = 0;
	while (iVar2 <= (iVar0 - 1))
	{
		(*uParam1)[iVar2] = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iParam0, iVar2);
		if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar2]))
		{
			PED::DELETE_PED(uParam1[iVar2]);
		}
		iVar2++;
	}
}

struct<15> func_1760(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	Var0.f_6 = 1108082688;
	Var0.f_14 = 1108082688;
	Var15.f_6 = 1108082688;
	Var15.f_14 = 1108082688;
	switch (iParam0)
	{
		case 0:
			Var0 = { -1023.494f, 436.2486f, 55.9625f };
			Var0.f_3 = { -7.8831f, 0.0059f, 173.5164f };
			Var0.f_8 = { -1021.005f, 434.156f, 55.6112f };
			Var0.f_11 = { 0.4055f, 0f, 121.4748f };
			break;
		case 1:
			Var0 = { -1021.767f, 434.7077f, 55.6909f };
			Var0.f_3 = { 2.5516f, 0.9167f, 138.3081f };
			Var0.f_6 = 37.9678f;
			Var0.f_8 = { -1021.582f, 434.2954f, 55.9151f };
			Var0.f_11 = { -3.8828f, 0f, 130.5153f };
			break;
		case 2:
			Var0 = { -1021.582f, 434.2954f, 55.9151f };
			Var0.f_3 = { -3.8828f, 0f, 130.5153f };
			Var0.f_8 = { -1024.008f, 431.2976f, 55.9979f };
			Var0.f_11 = { 2.5608f, 0f, 115.7826f };
			break;
		case 4:
			Var15 = { func_1760(2) };
			Var0 = { Var15.f_8 };
			Var0.f_3 = { Var15.f_11 };
			Var0.f_6 = Var15.f_14;
			Var0.f_8 = { -1025.598f, 431.3568f, 56.2781f };
			Var0.f_11 = { -3.0098f, 0f, 141.1675f };
			break;
		case 5:
			Var0 = { -1026.57f, 427.4867f, 56.0144f };
			Var0.f_3 = { 0.8038f, 0f, -1.073f };
			Var0.f_8 = { -1026.991f, 427.8769f, 56.0198f };
			Var0.f_11 = { 0.8038f, 0f, -8.0522f };
			break;
		case 6:
			Var0 = { -1025.877f, 430.9563f, 56.4125f };
			Var0.f_3 = { -8.0149f, 0f, 146.0463f };
			Var0.f_8 = { -1026.029f, 430.9702f, 56.4008f };
			Var0.f_11 = { -8.0149f, 0f, 144.1283f };
			break;
		case 7:
			Var0 = { -1023.023f, 433.6565f, 57.5174f };
			Var0.f_3 = { -18.3168f, 0f, 128.599f };
			Var0.f_8 = { -1026.029f, 430.9702f, 56.4008f };
			Var0.f_11 = { -8.0149f, 0f, 144.1283f };
			break;
	}
	return Var0;
}

void func_1763(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	struct<7> Var1;
	if (CAM::DOES_CAM_EXIST(iLocal_531[iParam0]))
	{
		if (CAM::IS_CAM_INTERPOLATING(iLocal_531[iParam0]))
		{
		}
		return;
	}
	Var1 = { func_1760(iParam0) };
	iLocal_531[iParam0] = CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), Var1, Var1.f_3, Var1.f_6, false, 2);
	iVar0 = 0;
	while (iVar0 < iLocal_531)
	{
		if (CAM::DOES_CAM_EXIST(iLocal_531[iVar0]) && iParam0 != iVar0)
		{
			if (CAM::IS_CAM_ACTIVE(iLocal_531[iVar0]))
			{
				CAM::SET_CAM_ACTIVE(iLocal_531[iVar0], false);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_531[iParam0], iLocal_531[iVar0], iParam1, 1, 1);
				CAM::DESTROY_CAM(iLocal_531[iVar0], false);
				CAM::SHAKE_CAM(iLocal_531[iParam0], "HAND_SHAKE", fParam2);
			}
		}
		iVar0++;
	}
}

void func_1764(int iParam0, float fParam1, int iParam2)
{
	struct<15> Var0;
	if (!CAM::DOES_CAM_EXIST(iLocal_531[iParam0]))
	{
		return;
	}
	fParam1 = __LIB_0__::func_251(fParam1, 0f, 1f);
	Var0 = { func_1760(iParam0) };
	CAM::SET_CAM_PARAMS(iLocal_531[iParam0], __LIB_1__::func_367(Var0, Var0.f_8, fParam1), __LIB_1__::func_367(Var0.f_3, Var0.f_11, fParam1), __LIB_0__::func_667(Var0.f_6, Var0.f_14, fParam1), 0, 1, 1, 2, iParam2, 0);
}

int func_1766(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_25))
	{
		Local_14.f_25 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_25), 1))
	{
		return 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_27[0] = __LIB_1__::func_545(joaat("A_M_M_WAPWARRIORS_01"), -1064.638f, 499.0988f, 91.0045f, 130.3196f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_27[0], "Man01");
		__LIB_6__::func_906(Local_14.f_25, Local_14.f_27[0]);
		__LIB_5__::func_510(Local_14.f_27[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_27[1] = __LIB_1__::func_545(joaat("A_M_M_WAPWARRIORS_01"), -1063.114f, 501.2057f, 91.2393f, 130.3196f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_27[1], "Man02");
		__LIB_6__::func_906(Local_14.f_25, Local_14.f_27[1]);
		__LIB_5__::func_510(Local_14.f_27[1], Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_27[2] = __LIB_1__::func_545(joaat("A_M_M_WAPWARRIORS_01"), -1061.089f, 502.7117f, 91.4684f, 138.3199f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_27[2], "Man03");
		__LIB_6__::func_906(Local_14.f_25, Local_14.f_27[2]);
		__LIB_5__::func_510(Local_14.f_27[2], Local_14);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_27[3] = __LIB_1__::func_545(joaat("A_C_HORSE_NOKOTA_BLUEROAN"), -1065.549f, 498.4663f, 90.8543f, 226.1867f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_27[3], "Horse01");
		__LIB_6__::func_906(Local_14.f_25, Local_14.f_27[3]);
		__LIB_5__::func_510(Local_14.f_27[3], Local_14);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_27[4] = __LIB_1__::func_545(joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"), -1063.792f, 500.1986f, 91.1411f, 222.0189f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_27[4], "Horse02");
		__LIB_6__::func_906(Local_14.f_25, Local_14.f_27[4]);
		__LIB_5__::func_510(Local_14.f_27[4], Local_14);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_27[5]) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_27[5] = __LIB_1__::func_545(joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"), -1061.84f, 501.6512f, 91.4057f, 223.7587f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_PED_NAME_DEBUG(Local_14.f_27[5], "Horse03");
		__LIB_6__::func_906(Local_14.f_25, Local_14.f_27[5]);
		__LIB_5__::func_510(Local_14.f_27[5], Local_14);
		if (bParam1)
		{
			if (iParam0 == 5)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_25), 1);
	return 1;
}

bool func_1775(char[4] cParam0, char* sParam1, int iParam2)
{
	if (!__LIB_0__::func_27(iLocal_383, iParam2) || iParam2 == 0)
	{
		if (!__LIB_6__::func_904())
		{
			__LIB_8__::func_711(cParam0, sParam1, 0);
			if (iParam2 != 0)
			{
				__LIB_1__::func_683(&iLocal_383, iParam2);
			}
			return true;
		}
	}
	return false;
}

void func_1776(int iParam0)
{
	if (iParam0 == 0)
	{
		sLocal_529 = func_430(5);
		fLocal_530 = 233.3272f;
	}
	else if (iParam0 == 2)
	{
		sLocal_529 = func_430(6);
		fLocal_530 = 59.1692f;
	}
	else
	{
		sLocal_529 = func_430(3);
		fLocal_530 = 59.1692f;
	}
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_470[8 /*4*/], sLocal_529);
}

void func_1778()
{
	int iVar0;
	iVar0 = 8;
	if (!func_1743(iVar0))
	{
		return;
	}
	if (!Local_470[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(Local_236[6 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "JavierEscuella", Local_236[6 /*4*/].f_1, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_321[9 /*5*/]))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "p_cigarette_cs01x", Local_321[9 /*5*/], 0);
		}
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_470[iVar0 /*4*/], sLocal_529, true);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_470[iVar0 /*4*/], ENTITY::GET_ENTITY_COORDS(Local_236[6 /*4*/].f_1, true, false), 0f, 0f, 0f, 2);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_470[iVar0 /*4*/], false))
	{
		ANIMSCENE::START_ANIM_SCENE(Local_470[iVar0 /*4*/]);
		Local_470[iVar0 /*4*/].f_2 = 1;
	}
}

void func_1779()
{
	vector3 vVar0;
	vector3 vVar3;
	if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iLocal_387, false))
	{
		if (__LIB_0__::func_272(Local_236[1 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_387, "HOSEAMATTHEWS", Local_236[1 /*4*/].f_1, 0);
		}
		if (__LIB_0__::func_272(Global_35, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iLocal_387, "ARTHUR", Global_35, 0);
		}
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_423[4], 0f, 0f, -1f) };
		vVar3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_423[4], 2) };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iLocal_387, vVar0, vVar3, 2);
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(iLocal_387, iLocal_423[4], 0);
		ANIMSCENE::START_ANIM_SCENE(iLocal_387);
	}
}

bool func_1780()
{
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_423[4], false, false))
	{
		return false;
	}
	else if (!func_1455(9, 7))
	{
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_470[9 /*4*/], 0f, 0f, 0f, 0f, 0f, 0f, 2);
	ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_470[9 /*4*/], iLocal_423[4], 0);
	return true;
}

Vector3 func_1781(int iParam0, char* sParam1, char* sParam2)
{
	vector3 vVar0;
	bool bVar12;
	if (!ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_470[iParam0 /*4*/]))
	{
		return 0f, 0f, 0f;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (!ANIMSCENE::_0xA9016536015DE29D(Local_470[iParam0 /*4*/], sParam2))
		{
			return 0f, 0f, 0f;
		}
	}
	bVar12 = !MISC::IS_STRING_NULL_OR_EMPTY(sParam2);
	if (ANIMSCENE::_GET_ANIM_SCENE_ENTITY_MATRIX(Local_470[iParam0 /*4*/], sParam1, &vVar0, bVar12, sParam2, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

void func_1782(char[4] cParam0)
{
	int iVar0;
	iVar0 = 9;
	if (!func_1743(iVar0))
	{
		return;
	}
	if (!Local_470[iVar0 /*4*/].f_2)
	{
		if (__LIB_0__::func_272(Local_236[6 /*4*/].f_1, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_470[iVar0 /*4*/], "JavierEscuella", Local_236[6 /*4*/].f_1, 0);
		}
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_236[6 /*4*/].f_1, iLocal_423[4], false);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_470[iVar0 /*4*/], false))
	{
		__LIB_8__::func_720(cParam0, joaat("MUD1_PICKUPJAVIER"));
		ANIMSCENE::START_ANIM_SCENE(Local_470[iVar0 /*4*/]);
		Local_470[iVar0 /*4*/].f_2 = 1;
	}
}

int func_1783(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	sVar0 = func_430(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	if (ANIMSCENE::_0x1F0E401031E20146(Local_470[iParam0 /*4*/], sVar0))
	{
		return 0;
	}
	if (!func_2244(iParam0, iParam1))
	{
		return 0;
	}
	if (!bParam2)
	{
		if (ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_470[iParam0 /*4*/]) < 0.98f)
		{
			return 0;
		}
	}
	ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_470[iParam0 /*4*/], sVar0, true);
	Local_470[iParam0 /*4*/].f_3 = iParam1;
	return 1;
}

void func_1788(int iParam0, vector3 vParam1, vector3 vParam4)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;
	if (iParam0 >= 5)
	{
		return;
	}
	vVar0 = { vParam1 + Vector(0.25f, 0f, 0f) };
	iVar3 = iLocal_423[iParam0];
	if (PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iVar3))
	{
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar3, 1);
	ENTITY::_SET_ENTITY_SOMETHING(iVar3, true);
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar0);
	ENTITY::SET_ENTITY_COLLISION(iVar3, true, false);
	fVar4 = __LIB_2__::func_916(vParam1, vParam4);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iVar3, vVar0, fVar4, false, true, true);
	if (__LIB_0__::func_75(&(Local_115[iParam0 /*24*/].f_13)))
	{
		__LIB_0__::func_37(&(Local_115[iParam0 /*24*/].f_13));
	}
}

bool func_1789(int iParam0)
{
	return Local_470[iParam0 /*4*/].f_2;
}

int func_1806(int iParam0, int iParam1)
{
	var uVar0;
	return func_2251(&uVar0, iParam0, iParam1);
}

void func_1832(char[4] cParam0, int iParam1, int iParam2, char* sParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (!__LIB_3__::func_358(__LIB_8__::func_645(cParam0)))
	{
		__LIB_8__::func_660(cParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (__LIB_0__::func_31(iParam2))
		{
			sParam3 = __LIB_1__::func_464(iParam2, 0);
		}
		else
		{
			sParam3 = __LIB_4__::func_608(iParam2);
		}
	}
	if (!__LIB_9__::func_133(cParam0, iParam1))
	{
		func_2273(cParam0, iParam1, 382852, 0, sParam3, 67108863, 1023, 3, iParam2);
	}
	if (!__LIB_4__::func_610(cParam0->f_5421, iParam1))
	{
		__LIB_4__::func_999(cParam0->f_5421, iParam1);
	}
	DECORATOR::DECOR_SET_INT(iParam1, __LIB_4__::func_611(), iParam2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam1, joaat("REL_GANG_DUTCHS"));
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam1, false);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 10);
	PED::_0x15F4732C357B1D6D(iParam1, PLAYER::GET_PLAYER_INDEX(), 11);
}

int func_1943()
{
	return Global_40.f_4283.f_5;
}

void func_1951(int iParam0)
{
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 1, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 2, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 3, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 4, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 5, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 6, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 7, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 8, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 9, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 10, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 11, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 12, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 13, true);
	VEHICLE::SET_VEHICLE_EXTRA(iLocal_423[iParam0], 14, true);
}

void func_1952(var uParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		VEHICLE::_0x850CE59DEC2028F3(*uParam0, 0);
		VEHICLE::_0x0355FE37240E2C77(*uParam0, 0f);
		VEHICLE::_0x3D86997A86FEEF0D(*uParam0, 0);
		VEHICLE::_0xD826690B5CF3BEFF(*uParam0, 0f);
		VEHICLE::_0x6090A031C69F384E(*uParam0, 0);
		VEHICLE::_0xD21A3D421E7F09F7(*uParam0, 1);
	}
}

bool func_1953(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_13))
	{
		Local_14.f_13 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_13), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_15[0] = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), -1079.37f, 453.4739f, 59.2864f, 246.6053f, true, true, false, false);
		__LIB_6__::func_906(Local_14.f_13, Local_14.f_15[0]);
		__LIB_5__::func_510(Local_14.f_15[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15[1]) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_15[1] = VEHICLE::CREATE_VEHICLE(joaat("WAGON04X"), -1067.063f, 447.3497f, 58.1729f, 251.6826f, true, true, false, false);
		__LIB_6__::func_906(Local_14.f_13, Local_14.f_15[1]);
		__LIB_5__::func_510(Local_14.f_15[1], Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15[2]) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_15[2] = VEHICLE::CREATE_VEHICLE(joaat("WAGON04X"), -1051.12f, 441.2354f, 55.9737f, 242.3662f, true, true, false, false);
		__LIB_6__::func_906(Local_14.f_13, Local_14.f_15[2]);
		__LIB_5__::func_510(Local_14.f_15[2], Local_14);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15[3]) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_15[3] = VEHICLE::CREATE_VEHICLE(joaat("WAGON04X"), -1091.632f, 456.1813f, 60.373f, 246.5176f, true, true, false, false);
		__LIB_6__::func_906(Local_14.f_13, Local_14.f_15[3]);
		__LIB_5__::func_510(Local_14.f_15[3], Local_14);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_15[4]) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_15[4] = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), -1109.104f, 463.5643f, 59.3947f, 245.2218f, true, true, false, false);
		__LIB_6__::func_906(Local_14.f_13, Local_14.f_15[4]);
		__LIB_5__::func_510(Local_14.f_15[4], Local_14);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_13), 1);
	return true;
}

bool func_1954(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_1))
	{
		Local_14.f_1 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_1), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_3[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), -1028.814f, 428.939f, 56.0423f, 167.5282f, true, true, false, false);
		__LIB_6__::func_906(Local_14.f_1, Local_14.f_3[0]);
		__LIB_5__::func_510(Local_14.f_3[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_1), 1);
	return true;
}

bool func_1955(int iParam0, bool bParam1)
{
	if (!__LIB_3__::func_358(Local_14.f_21))
	{
		Local_14.f_21 = { __LIB_3__::func_355() };
	}
	if (__LIB_0__::func_239(&(Local_14.f_21), 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_14.f_23[0]) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_23[0] = VEHICLE::CREATE_VEHICLE(joaat("WAGON02X"), -1031.141f, 431.4117f, 55.4032f, 170.6898f, true, true, false, false);
		__LIB_6__::func_906(Local_14.f_21, Local_14.f_23[0]);
		__LIB_5__::func_510(Local_14.f_23[0], Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	__LIB_0__::func_240(&(Local_14.f_21), 1);
	return true;
}

void func_1956()
{
	int iVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]) && !__LIB_4__::func_257(iLocal_423[4]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_423[4]))
		{
			PROPSET::_0xD80FAF919A2E56EA(iLocal_423[4], iLocal_381);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]) && !__LIB_4__::func_257(iLocal_423[3]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_423[3]))
		{
			PROPSET::_0xD80FAF919A2E56EA(iLocal_423[3], iLocal_382);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[0]) && !__LIB_4__::func_257(iLocal_423[0]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_423[0]))
		{
			PROPSET::_0xD80FAF919A2E56EA(iLocal_423[0], iLocal_378);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[1]) && !__LIB_4__::func_257(iLocal_423[1]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_423[1]))
		{
			PROPSET::_0xD80FAF919A2E56EA(iLocal_423[1], iLocal_379);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[2]) && !__LIB_4__::func_257(iLocal_423[2]))
	{
		if (!PROPSET::_DOES_VEHICLE_HAVE_ANY_PROPSET(iLocal_423[2]))
		{
			PROPSET::_0xD80FAF919A2E56EA(iLocal_423[2], iLocal_380);
		}
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_423 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[iVar0]))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_423[iVar0], false);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_423[iVar0], false);
		}
		iVar0++;
	}
}

void func_1957()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
	{
		VEHICLE::_SET_VEHICLE_TINT(iLocal_423[4], 11);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[3]))
	{
		VEHICLE::_SET_VEHICLE_TINT(iLocal_423[3], 9);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[2]))
	{
		VEHICLE::_SET_VEHICLE_TINT(iLocal_423[2], 12);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[1]))
	{
		VEHICLE::_SET_VEHICLE_TINT(iLocal_423[1], 10);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[0]))
	{
		VEHICLE::_SET_VEHICLE_TINT(iLocal_423[0], 11);
	}
}

void func_1958()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 <= (iLocal_423 - 1))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_423[iVar0]))
		{
		}
		else
		{
			if (iVar0 != 4)
			{
				VEHICLE::_0x63DC1F22C903B709(iLocal_423[iVar0], true);
				VEHICLE::_0xCBF88256E44D5D39(iLocal_423[iVar0], 0);
				VEHICLE::_0x226C6A4E3346D288(iLocal_423[iVar0], 0);
			}
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_423[iVar0], iVar1);
				if (!__LIB_0__::func_272(iVar2, 0))
				{
				}
				else
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar2, false);
					PED::SET_PED_CONFIG_FLAG(iVar2, 72, true);
					PED::SET_PED_CONFIG_FLAG(iVar2, 296, true);
					if (iVar0 == 4)
					{
						PED::SET_PED_CONFIG_FLAG(iVar2, 219, true);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_1959(char[4] cParam0, int iParam1, var uParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	iVar0 = func_1450(cParam0);
	Var1 = { func_2380(iVar0, iParam1) };
	*uParam2 = { Var1 };
	*uParam3 = Var1.f_3;
}

int func_1960(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, int iParam16)
{
	var uVar0;
	int iVar1;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	iVar1 = func_2381(&uVar0, iParam0, bParam1, bParam2, iParam3, iParam4, iParam5, bParam7, bParam8, iParam9, iParam10, iParam11, fParam12, bParam13, bParam14, bParam15, bParam6, iParam16);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (bParam6)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar1) && PED::_0xA0BC8FAED8CFEB3C(iVar1))
		{
			return iVar1;
		}
	}
	else
	{
		return iVar1;
	}
	return 0;
}

bool func_1961(int* iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7)
{
	float fVar0;
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(*iParam0))
	{
		PED::REVIVE_INJURED_PED(*iParam0);
	}
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		__LIB_2__::func_788(iParam0, 1, 0, 1);
		return false;
	}
	if (bParam7)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING(*iParam0, vParam1, fParam4, true, false, true);
	}
	if (bParam6)
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(*iParam0, joaat("REL_GANG_DUTCHS"));
		ENTITY::_0x18FF3110CF47115D(*iParam0, 15, 1);
		PED::SET_PED_CONFIG_FLAG(*iParam0, 172, true);
		TASK::SET_PED_PATH_MAY_ENTER_WATER(*iParam0, true);
		PED::SET_PED_CAN_BE_TARGETTED(*iParam0, false);
	}
	if (!bParam5)
	{
		TASK::TASK_STAND_STILL(*iParam0, -1);
		return true;
	}
	fVar0 = 10f;
	if (!bParam6)
	{
		fVar0 = 1f;
	}
	if (__LIB_5__::func_541(*iParam0, vParam1, fVar0, 1))
	{
	}
	else
	{
		TASK::TASK_STAND_STILL(*iParam0, -1);
	}
	return true;
}

char* func_1973(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MUD1_LMC1";
		case 1:
			return "MUD1_OFFER";
		case 2:
			return "MUD1_YES";
		case 3:
			return "MUD1_NO";
		case 4:
			return "MUD1_LMC2";
		case 5:
			return "MUD1_ISCRAFT";
		case 6:
			return "MUD1_ISNTCRAFT";
		case 7:
			return "MUD1_IG8_1";
		case 8:
			return "MUD1_IG8_3";
		case 9:
			return "MUD1_IG8_4";
		case 10:
			return "MUD1_IG8_5";
		case 11:
			return "MUD1_IG8_6";
		case 12:
			return "MUD1_IG8_7";
		case 13:
			return "MUD1_WHEEL_01";
		case 14:
			return "MUD1_WHEEL_02";
		case 15:
			return "MUD1_WHEEL_03";
		case 16:
			return "MUD1_WHEEL_04";
		case 17:
			return "MUD1_WHEEL_05";
		case 18:
			return "MUD1_WHEEL_06";
		case 19:
			return "MUD1_WHEEL_07";
		case 20:
			return "MUD1_WHEEL_08";
	}
	return "";
}

bool func_1975(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 >= 32)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 >= 3)
	{
		return false;
	}
	iVar2 = __LIB_0__::func_771(iVar0);
	if (__LIB_0__::func_1(Local_458[iVar1], iVar2))
	{
		return false;
	}
	return __LIB_0__::func_1(Local_458.f_4[iVar1], iVar2);
}

int func_1976(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
			return Local_236[1 /*4*/].f_1;
	}
	return 0;
}

int func_1977(char[4] cParam0, var uParam1, int iParam2, int iParam3, bool bParam4, float fParam5, bool bParam6)
{
	int iVar0;
	char* sVar1;
	iVar0 = iParam2;
	sVar1 = func_1973(iVar0);
	if (__LIB_11__::func_764(uParam1, iParam2))
	{
		if (__LIB_6__::func_903(sVar1))
		{
			return 2;
		}
		else
		{
			return 3;
		}
	}
	if (!__LIB_0__::func_272(*iParam3, 1))
	{
		return 4;
	}
	if (__LIB_0__::func_665(Global_35, *iParam3, 1, 1) > fParam5)
	{
		if (bParam6)
		{
			func_1755(iVar0);
		}
		return 7;
	}
	if (!bParam4)
	{
		if (__LIB_0__::func_270() || __LIB_0__::func_270())
		{
			return 5;
		}
	}
	if (__LIB_6__::func_904())
	{
		if (bParam4)
		{
			__LIB_5__::func_20(1, 0);
		}
		return 8;
	}
	if (__LIB_8__::func_711(cParam0, sVar1, 0))
	{
		func_1755(iVar0);
		return 1;
	}
	return 6;
}

void func_1978(int iParam0, int iParam1)
{
	if (iParam0 != 6)
	{
		Local_458.f_10 = 26;
		Local_458.f_11 = 0;
		return;
	}
	if (Local_458.f_10 != iParam1)
	{
		Local_458.f_10 = iParam1;
		Local_458.f_11 = 0;
	}
	else
	{
		Local_458.f_11++;
	}
	if (Local_458.f_11 >= 60)
	{
		func_1755(iParam1);
		Local_458.f_10 = 26;
		Local_458.f_11 = 0;
	}
}

void func_1987(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	if (__LIB_6__::func_864(cParam0) == 25 || __LIB_6__::func_864(cParam0) == 26)
	{
		return;
	}
	if (!__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4096))
	{
		if (__LIB_6__::func_872(cParam0, 4) && !__LIB_6__::func_862(cParam0, 8))
		{
			if (!Global_1935630.f_12)
			{
				if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1))
				{
					if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
					{
						if (iVar0 == 0 || iVar0 == joaat("WEAPON_UNARMED"))
						{
							iVar1 = func_2392(128);
							if (__LIB_0__::func_154(iVar1))
							{
								if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
								{
									WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar1, true, 0, false, false);
								}
							}
						}
					}
				}
			}
		}
		else
		{
			func_2393(cParam0);
		}
	}
	if (!Global_1935630.f_12)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 141, __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 33));
	}
	if (__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 8192))
	{
		if (__LIB_6__::func_862(cParam0, 1024) || __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4))
		{
			if (!Global_1935630.f_12)
			{
				PED::_SET_PED_CROUCH_MOVEMENT(Global_35, true, 0, false);
			}
		}
	}
}

bool func_2141(int iParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	int iVar9;
	struct<4> Var10;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	if (!__LIB_0__::func_144(iParam0, 0))
	{
		return false;
	}
	if (!__LIB_1__::func_703(iParam0, 856287005, &iVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { __LIB_1__::func_124() };
	Var14 = { __LIB_0__::func_429(iParam0, Var10, iVar9, 0) };
	if (__LIB_1__::func_556(Var14, iParam1))
	{
		if (__LIB_0__::func_847(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar18))
			{
				if (func_2141(iVar18, 0))
				{
				}
			}
		}
		else if (__LIB_0__::func_848(iParam0))
		{
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_HORN"), &iVar19))
			{
				if (func_2141(iVar19, 0))
				{
				}
			}
			if (__LIB_1__::func_439(joaat("SLOTID_HORSE_STIRRUP"), &iVar20))
			{
				if (func_2141(iVar20, 0))
				{
				}
			}
			iVar21 = __LIB_0__::func_661(iParam0);
			if (__LIB_0__::func_144(iVar21, 0))
			{
				if (func_2141(iVar21, 1))
				{
				}
			}
		}
		__LIB_1__::func_712();
		return true;
	}
	return false;
}

void func_2191(var uParam0)
{
	if (!__LIB_0__::func_272(*uParam0, 1))
	{
		return;
	}
	if (!PED::DOES_GROUP_EXIST(iLocal_447))
	{
		__LIB_3__::func_456(*uParam0);
		iLocal_447 = PED::CREATE_GROUP(0);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 279, true);
		PED::SET_PED_AS_GROUP_LEADER(*uParam0, iLocal_447, false);
		PED::SET_GROUP_FORMATION(iLocal_447, 9);
		PED::_0x97C475212B327666(iLocal_447, 1);
		PED::_0x154B7E841AC7412F(iLocal_447, 1);
	}
}

void func_2194(var uParam0)
{
	if (!PED::DOES_GROUP_EXIST(iLocal_447))
	{
		return;
	}
	if (!PED::IS_PED_IN_GROUP(*uParam0))
	{
		PED::SET_PED_CONFIG_FLAG(*uParam0, 279, true);
		PED::SET_PED_AS_GROUP_MEMBER(*uParam0, iLocal_447);
		PED::SET_PED_CONFIG_FLAG(*uParam0, 280, true);
	}
}

float func_2195(int iParam0, int iParam1, float fParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (iParam0 >= 5 || iParam1 >= 5)
	{
		return 0f;
	}
	fVar0 = Local_115[iParam0 /*24*/].f_6;
	if (fParam2 > 0f)
	{
		fVar0 = fParam2;
	}
	fVar1 = Local_115[iParam0 /*24*/].f_7;
	if (fParam3 > 0f)
	{
		fVar1 = fParam3;
	}
	fVar2 = __LIB_0__::func_665(iLocal_423[iParam0], iLocal_423[iParam1], 1, 1);
	fVar3 = (fVar0 - fVar1);
	fVar4 = ((fVar2 - fVar1) / fVar3);
	fVar4 = (1f - __LIB_0__::func_251(fVar4, 0f, 1f));
	return fVar4;
}

float func_2196(var uParam0)
{
	if (__LIB_0__::func_393(*uParam0, iLocal_395[7], 0, 1))
	{
		return 1.2f;
	}
	if (__LIB_0__::func_393(*uParam0, iLocal_395[9], 0, 1))
	{
		return 1.1f;
	}
	return 1f;
}

int func_2197(int iParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	if (iParam0 >= 5)
	{
		return 0;
	}
	iVar0 = Local_115[iParam0 /*24*/].f_22;
	iVar1 = Local_115[iParam0 /*24*/].f_23;
	if (iParam2 != 3)
	{
		iVar0 = iParam2;
	}
	if (iParam3 != 4)
	{
		iVar1 = iParam3;
	}
	vVar2 = { 0f, 0f, 0f };
	if (!func_2198(iVar0, iVar1, &vVar2))
	{
		return 0;
	}
	if (__LIB_0__::func_86(vVar2))
	{
		return 0;
	}
	if (__LIB_0__::func_266(iLocal_423[iParam0], vVar2, fParam1, 1, 1))
	{
		return 1;
	}
	return 0;
}

bool func_2198(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = { -1447.728f, 2294.407f, 303.2368f };
					return true;
				case 1:
					*uParam2 = { -1606.305f, 2234.299f, 289.4539f };
					return true;
				case 2:
				case 3:
				default:
					*uParam2 = { -1853.53f, 1904.876f, 246.1017f };
					return true;
			}
			break;
		case 1:
		case 2:
			switch (iParam1)
			{
				case 0:
				case 3:
				case default:
			}
			*uParam2 = { -1074.194f, 319.9786f, 55.8166f };
			return true;
			return false;
		}
void func_2199(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	if (!__LIB_0__::func_75(&(Local_115[iParam0 /*24*/].f_13)))
	{
		__LIB_1__::func_148(&(Local_115[iParam0 /*24*/].f_13));
	}
	if (__LIB_0__::func_75(&(Local_115[iParam0 /*24*/].f_13)) && __LIB_0__::func_264(&(Local_115[iParam0 /*24*/].f_13)) < Local_115[iParam0 /*24*/].f_12)
	{
		return;
	}
	fVar0 = 1.5f;
	fVar1 = 0.5f;
	fVar2 = 1f;
	fVar3 = 0f;
	fVar4 = 0f;
	if (Local_115[iParam0 /*24*/].f_11 >= fVar2)
	{
		fVar3 = -fVar2;
	}
	else
	{
		fVar3 = -Local_115[iParam0 /*24*/].f_11;
	}
	if (Local_115[iParam0 /*24*/].f_11 < (fVar0 - fVar2))
	{
		fVar4 = fVar2;
	}
	else
	{
		fVar4 = (fVar0 - Local_115[iParam0 /*24*/].f_11);
	}
	if (fVar4 > fVar3)
	{
		Local_115[iParam0 /*24*/].f_11 = (Local_115[iParam0 /*24*/].f_11 + MISC::GET_RANDOM_FLOAT_IN_RANGE(fVar3, fVar4));
		Local_115[iParam0 /*24*/].f_11 = __LIB_0__::func_251(Local_115[iParam0 /*24*/].f_11, fVar1, fVar0);
	}
	TASK::_0xA263ADBBC8056214(iLocal_423[iParam0], (Local_115[iParam0 /*24*/].f_10 + Local_115[iParam0 /*24*/].f_11));
	Local_115[iParam0 /*24*/].f_12 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2f);
	__LIB_0__::func_37(&(Local_115[iParam0 /*24*/].f_13));
}

void func_2201()
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_423[iLocal_59], iVar0);
		if (__LIB_0__::func_272(iVar1, 0))
		{
			if (PED::GET_PED_CONFIG_FLAG(iVar1, 256, true))
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 256, false);
			}
			if (PED::GET_PED_CONFIG_FLAG(iVar1, 255, true))
			{
				PED::SET_PED_CONFIG_FLAG(iVar1, 255, false);
			}
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iVar1, 0.2f);
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar1, 1.21f);
		}
		iVar0++;
	}
}

char* func_2203(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MUD1_LMT_OBJ1";
		case 4:
			return "MUD1_LMT_OBJ2";
		case 8:
			return "MUD1_GTO_OBJ1";
		case 16:
			return "MUD1_GTO_OBJ2";
		case 128:
			return "MUD1_GTF_OBJ";
		case 256:
			return "MUD1_DW_OBJ1";
		case 512:
			return "MUD1_DW_OBJ2";
		case 1024:
			return "MUD1_DW_OBJ3";
		case 4096:
			return "MUD1_TAKEHORSE";
	}
	return "";
}

bool func_2205(var uParam0, var uParam1, float fParam2, int iParam3)
{
	float fVar0;
	if (*iParam3)
	{
		return false;
	}
	if (PED::IS_PED_IN_VEHICLE(Global_35, *uParam1, false))
	{
		if (__LIB_0__::func_75(uParam0))
		{
			__LIB_0__::func_37(uParam0);
		}
		*iParam3 = 1;
		return false;
	}
	fVar0 = __LIB_0__::func_665(Global_35, *uParam1, 1, 1);
	if (fVar0 < *fParam2)
	{
		*fParam2 = fVar0;
		if (__LIB_0__::func_75(uParam0))
		{
			__LIB_0__::func_37(uParam0);
		}
		if (!bLocal_393)
		{
			bLocal_393 = true;
		}
	}
	else
	{
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_148(uParam0);
		}
		if ((__LIB_0__::func_75(uParam0) && __LIB_1__::func_871(uParam0) > 5000) && bLocal_393)
		{
			bLocal_393 = false;
		}
		if (func_2500(uParam0, 1092616192 /* Float: 10f */))
		{
			__LIB_0__::func_37(uParam0);
			return true;
		}
	}
	return false;
}

bool func_2206(var uParam0, vector3 vParam1, var uParam4, float fParam5)
{
	float fVar0;
	fVar0 = __LIB_0__::func_94(Global_35, vParam1, 1);
	if (fVar0 < *uParam4)
	{
		*uParam4 = fVar0;
		if (__LIB_0__::func_75(uParam0))
		{
			__LIB_0__::func_37(uParam0);
		}
	}
	else
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.2f)
		{
			if (fVar0 < fParam5)
			{
				if (__LIB_0__::func_75(uParam0))
				{
					__LIB_0__::func_37(uParam0);
				}
				return false;
			}
		}
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_148(uParam0);
		}
		if (func_2500(uParam0, 1092616192 /* Float: 10f */))
		{
			__LIB_0__::func_37(uParam0);
			return true;
		}
	}
	return false;
}

bool func_2207(var uParam0, float fParam1)
{
	if (ENTITY::GET_ENTITY_SPEED(Global_35) < 0.2f)
	{
		if (__LIB_0__::func_75(uParam0))
		{
			__LIB_0__::func_37(uParam0);
		}
		return false;
	}
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_148(uParam0);
	}
	if (__LIB_0__::func_75(uParam0) && __LIB_0__::func_264(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_2208(var uParam0, vector3 vParam1, var uParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vParam1, true);
	if (fVar0 < *uParam4)
	{
		*uParam4 = fVar0;
		if (__LIB_0__::func_75(uParam0))
		{
			__LIB_0__::func_37(uParam0);
		}
	}
	else
	{
		if (ENTITY::GET_ENTITY_SPEED(Global_35) > 0.2f)
		{
			fVar1 = MISC::ABSF((fVar0 - *uParam4));
			if (fVar1 <= fParam5)
			{
				if (__LIB_0__::func_75(uParam0))
				{
					__LIB_0__::func_37(uParam0);
				}
				return false;
			}
		}
		if (!__LIB_0__::func_75(uParam0))
		{
			__LIB_1__::func_148(uParam0);
		}
		if (func_2500(uParam0, 1092616192 /* Float: 10f */))
		{
			__LIB_0__::func_37(uParam0);
			return true;
		}
	}
	return false;
}

bool func_2210(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_423[iParam0]))
	{
		return false;
	}
	iVar0 = 5000;
	iVar1 = 12500;
	iVar2 = 10000;
	iVar3 = 10000;
	iVar4 = 15000;
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_423[iParam0], 0, iVar0))
	{
		return true;
	}
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_423[iParam0], 3, iVar1))
	{
		return true;
	}
	if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_423[iParam0], 1, iVar3))
	{
		return true;
	}
	if (iParam0 == 4)
	{
		if (func_2501(iParam0, iVar4))
		{
			return true;
		}
	}
	return false;
}

void func_2211(var uParam0)
{
	VEHICLE::RESET_VEHICLE_STUCK_TIMER(*uParam0, 0);
	VEHICLE::RESET_VEHICLE_STUCK_TIMER(*uParam0, 3);
	VEHICLE::RESET_VEHICLE_STUCK_TIMER(*uParam0, 2);
	VEHICLE::RESET_VEHICLE_STUCK_TIMER(*uParam0, 1);
}

bool func_2212()
{
	vector3 vVar0;
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_423[4]))
	{
		vVar0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_423[4], 2) };
	}
	if (MISC::ABSF((vVar0.x - vLocal_453.x)) > 39.5f || MISC::ABSF((vVar0.y - vLocal_453.y)) > 39.5f)
	{
		VEHICLE::_0x850CE59DEC2028F3(iLocal_423[4], 1);
		VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iLocal_423[4], 4);
		AUDIO::_PLAY_SOUND_FROM_ENTITY("AXLE_BREAK", iLocal_423[4], "MUD1_Sounds", false, 0, 0);
		return true;
	}
	return false;
}

bool func_2215(var uParam0)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return true;
	}
	VEHICLE::_0xA19447D83294E29F(*uParam0, &iVar0, &iVar1);
	if (iVar0 == iVar1)
	{
		return true;
	}
	return false;
}

bool func_2244(int iParam0, int iParam1)
{
	char* sVar0;
	sVar0 = func_430(iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return true;
	}
	if (!ANIMSCENE::_0xA9016536015DE29D(Local_470[iParam0 /*4*/], sVar0))
	{
		return false;
	}
	if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_470[iParam0 /*4*/], sVar0))
	{
		return true;
	}
	if (!ANIMSCENE::_0x0DF57F86FE71DBE5(Local_470[iParam0 /*4*/], sVar0))
	{
		if (ANIMSCENE::_0xDF7B5144E25CD3FE(Local_470[iParam0 /*4*/], sVar0))
		{
		}
	}
	return false;
}

int func_2251(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	bool bVar18;
	var uVar19;
	struct<22> Var23;
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = __LIB_0__::func_27(iParam1, 128);
	if (__LIB_0__::func_446("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		Var23.f_9 = -1591664384;
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!__LIB_0__::func_236(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!__LIB_0__::func_154(Var4.f_4))
			{
			}
			else if (!WEAPON::_0x705BE297EEBDB95D(Var4.f_4) && !WEAPON::_IS_WEAPON_BOW(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!__LIB_0__::func_27(iParam1, 512) && __LIB_1__::func_280(Var4.f_4, &uVar19, &Var23, 1728382685 /* GXTEntry: "Right" */)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || WEAPON::_0xF29A186ED428B552(Global_35, Var4.f_4))
			{
				if ((((((WEAPON::_IS_WEAPON_TWO_HANDED(Var4.f_4) || __LIB_0__::func_237(Var4.f_4)) && (!WEAPON::_IS_WEAPON_SHOTGUN(Var4.f_4) || __LIB_0__::func_27(iParam1, 16))) && (!WEAPON::_IS_WEAPON_SNIPER(Var4.f_4) || __LIB_0__::func_27(iParam1, 4))) && (!__LIB_0__::func_237(Var4.f_4) || __LIB_0__::func_27(iParam1, 8))) && (!WEAPON::_IS_WEAPON_REPEATER(Var4.f_4) || !__LIB_0__::func_27(iParam1, 8388608))) && (!WEAPON::_IS_WEAPON_RIFLE(Var4.f_4) || !__LIB_0__::func_27(iParam1, 1048576)))
				{
					if (iVar0 == 0 || WEAPON::_0xA2091482ED42EF85(Global_35, &Var4) > WEAPON::_0xA2091482ED42EF85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		__LIB_0__::func_238(iVar1);
	}
	if (WEAPON::IS_WEAPON_VALID(iVar0))
	{
	}
	else if (!__LIB_0__::func_27(iParam1, 512) && !__LIB_0__::func_27(iParam1, 1024))
	{
		iParam1 |= 512;
		return func_2251(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_2273(char[4] cParam0, int iParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (!__LIB_9__::func_133(cParam0, iParam1))
	{
		if (!__LIB_9__::func_38(cParam0, iParam1, &iVar0))
		{
			if (!__LIB_8__::func_701(cParam0, &iVar0))
			{
				return;
			}
		}
	}
	else
	{
		return;
	}
	__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 1);
	cParam0->f_5423[iVar0 /*65*/] = iParam1;
	if (ENTITY::IS_ENTITY_A_PED(iParam1) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
	{
		__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 128);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam3))
	{
		if (__LIB_0__::func_125(iParam3))
		{
			cParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 16);
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam3))
		{
			cParam0->f_5423[iVar0 /*65*/].f_1 = iParam3;
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 4);
			__LIB_5__::func_72(&(cParam0->f_5423[iVar0 /*65*/]), 8);
		}
	}
	cParam0->f_5423[iVar0 /*65*/].f_4 = sParam4;
	cParam0->f_5423[iVar0 /*65*/].f_7 = iParam5;
	cParam0->f_5423[iVar0 /*65*/].f_6 = iParam6;
	if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		if (iParam8 == -1)
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == __LIB_0__::func_398(7))
			{
				cParam0->f_5423[iVar0 /*65*/].f_9 = 40;
			}
			else
			{
				cParam0->f_5423[iVar0 /*65*/].f_9 = __LIB_4__::func_633(iParam1);
			}
		}
		else
		{
			cParam0->f_5423[iVar0 /*65*/].f_9 = iParam8;
		}
		if (iParam8 > -1 && iParam8 < 27)
		{
			cParam0->f_5423[iVar0 /*65*/].f_10 = iParam8;
		}
		if (__LIB_0__::func_31(cParam0->f_5423[iVar0 /*65*/].f_10))
		{
		}
	}
	cParam0->f_13145++;
	if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
	{
		if (EVENT::_0x26054EB81AC0893B(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
		{
			EVENT::_0x2DD42FAD06E6F19E(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1), 1, 1);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			cParam0->f_5423[iVar0 /*65*/].f_23[iVar1 /*4*/].f_3 = 382852;
			iVar1++;
		}
		__LIB_9__::func_134(cParam0, iParam1, 2, 4);
		__LIB_9__::func_135(cParam0, iParam1, 2500, 8);
		__LIB_9__::func_135(cParam0, iParam1, 2500, 512);
		__LIB_9__::func_136(cParam0, iParam1, 5000, 512);
		if (cParam0->f_5423[iVar0 /*65*/].f_9 == 14)
		{
			__LIB_9__::func_137(cParam0, iParam1, -2147483648);
		}
	}
}

struct<4> func_2380(int iParam0, int iParam1)
{
	struct<4> Var0;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 2);
				case 1:
					return func_235(2, 2);
				case 2:
					return func_235(7, 2);
				case 3:
					return func_235(5, 2);
				case 25:
					return func_235(4, 2);
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 1);
				case 1:
					return func_235(2, 1);
				case 2:
					return func_235(7, 1);
				case 3:
					return func_235(5, 1);
				case 25:
					return func_235(4, 1);
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 3);
				case 1:
					return func_235(2, 3);
				case 2:
					return func_235(7, 3);
				case 3:
					return func_235(5, 3);
				case 25:
					return func_235(4, 3);
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 4);
				case 1:
					return func_235(2, 4);
				case 2:
					return func_235(7, 4);
				case 3:
					return func_235(5, 4);
				case 25:
					return func_235(4, 4);
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 5);
				case 1:
					return func_235(2, 5);
				case 2:
					return func_235(7, 5);
				case 3:
					return func_235(5, 5);
				case 25:
					return func_235(4, 5);
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 6);
				case 1:
					return func_235(2, 6);
				case 2:
					return func_235(7, 6);
				case 3:
					return func_235(5, 6);
				case 25:
					return func_235(4, 6);
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 7);
				case 1:
					return func_235(2, 7);
				case 2:
					return func_235(7, 7);
				case 3:
					return func_235(5, 7);
				case 25:
					return func_235(4, 7);
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 8);
				case 1:
					return func_235(2, 8);
				case 2:
					return func_235(7, 8);
				case 3:
					return func_235(5, 8);
				case 25:
					return func_235(4, 8);
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 9);
				case 1:
					return func_235(2, 9);
				case 2:
					return func_235(7, 9);
				case 3:
					return func_235(5, 9);
				case 25:
					return func_235(4, 9);
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 10);
				case 1:
					return func_235(2, 10);
				case 2:
					return func_235(7, 10);
				case 3:
					return func_235(5, 10);
				case 25:
					return func_235(4, 10);
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 11);
				case 1:
					return func_235(2, 11);
				case 2:
					return func_235(7, 11);
				case 3:
					return func_235(5, 11);
				case 25:
					return func_235(4, 11);
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 12);
				case 1:
					return func_235(2, 12);
				case 2:
					return func_235(7, 12);
				case 3:
					return func_235(5, 12);
				case 25:
					return func_235(4, 12);
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 13);
				case 1:
					return func_235(2, 13);
				case 2:
					return func_235(7, 13);
				case 3:
					return func_235(5, 13);
				case 25:
					return func_235(4, 13);
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 14);
				case 1:
					return func_235(2, 14);
				case 2:
					return func_235(7, 14);
				case 3:
					return func_235(5, 14);
				case 25:
					return func_235(4, 14);
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 15);
				case 1:
					return func_235(2, 15);
				case 2:
					return func_235(7, 15);
				case 3:
					return func_235(5, 15);
				case 25:
					return func_235(4, 15);
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 16);
				case 1:
					return func_235(2, 16);
				case 2:
					return func_235(7, 16);
				case 3:
					return func_235(5, 16);
				case 25:
					return func_235(4, 16);
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 17);
				case 1:
					return func_235(2, 17);
				case 2:
					return func_235(7, 17);
				case 3:
					return func_235(5, 17);
				case 25:
					return func_235(4, 17);
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 18);
				case 1:
					return func_235(2, 18);
				case 2:
					return func_235(7, 18);
				case 3:
					return func_235(5, 18);
				case 25:
					return func_235(4, 18);
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 19);
				case 1:
					return func_235(2, 19);
				case 2:
					return func_235(7, 19);
				case 3:
					return func_235(5, 19);
				case 25:
					return func_235(4, 19);
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 20);
				case 1:
					return func_235(2, 20);
				case 2:
					return func_235(7, 20);
				case 3:
					return func_235(5, 20);
				case 25:
					return func_235(4, 20);
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
					return func_235(0, 21);
				case 1:
					return func_235(2, 21);
				case 2:
					return func_235(7, 21);
				case 3:
					return func_235(5, 21);
				case 25:
					return func_235(4, 21);
				default:
					break;
			}
			break;
	}
	Var0 = { 0f, 0f, 0f };
	Var0.f_3 = 0f;
	return Var0;
}

int func_2381(var uParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, float fParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)
{
	int iVar0;
	if (!__LIB_0__::func_49(iParam1))
	{
		return 0;
	}
	iVar0 = __LIB_0__::func_177(iParam1);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !__LIB_0__::func_272(iVar0, 0)) || (bParam3 && !__LIB_0__::func_212(iParam1)))
	{
		if (bParam2)
		{
			if (__LIB_0__::func_725(iParam1, 1) != 0)
			{
				iVar0 = func_2612(iParam1, bParam3, bParam8, iParam9, iParam10, iParam11, fParam12, bParam7, bParam15, bParam16, iParam17);
			}
			else
			{
				*uParam0 = 1;
				return 0;
			}
		}
		else
		{
			*uParam0 = 1;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && __LIB_0__::func_272(iVar0, 0))
	{
		*uParam0 = 2;
		Global_1360165[iParam1 /*1157*/].f_70.f_2 = 0;
		__LIB_0__::func_834(iParam1, iVar0);
		__LIB_1__::func_434(iParam1, bParam13, bParam14, 1);
		return iVar0;
	}
	else
	{
		*uParam0 = 0;
		return 0;
	}
	return 0;
}

int func_2392(int iParam0)
{
	var uVar0;
	var uVar4;
	int iVar8;
	int iVar9;
	iVar8 = func_1366(&uVar0, iParam0, 0);
	iVar9 = func_2251(&uVar4, iParam0, 0);
	if (iVar8 == 0)
	{
		if (iVar9 == 0)
		{
			if (__LIB_0__::func_27(iParam0, 256))
			{
				return joaat("WEAPON_UNARMED");
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return iVar9;
		}
	}
	else if (iVar9 == 0)
	{
		return iVar8;
	}
	if (WEAPON::_0xA2091482ED42EF85(Global_35, &uVar0) > WEAPON::_0xA2091482ED42EF85(Global_35, &uVar4) && !__LIB_0__::func_27(iParam0, 64))
	{
		return iVar8;
	}
	return iVar9;
}

void func_2393(char[4] cParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	if (!Global_1935630.f_12)
	{
		if (cParam0->f_7374 != 0 && cParam0->f_7374 != joaat("WEAPON_UNARMED"))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
			{
				if (iVar0 != cParam0->f_7374)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, cParam0->f_7374, true, 0, false, false);
				}
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, cParam0->f_7374, 0, false))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(Global_35, cParam0->f_7374) > 0)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_35, cParam0->f_7374, true, 0, false, false);
				}
			}
		}
		else if ((__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 1) && !__LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 4)) && __LIB_8__::func_705(cParam0, __LIB_6__::func_864(cParam0), 2))
		{
			if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 0, false))
			{
				if (iVar1 == 0 || iVar1 == joaat("WEAPON_UNARMED"))
				{
					iVar2 = func_2392(128);
					if (__LIB_0__::func_154(iVar2))
					{
						if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar2, false, 0, false, false);
						}
					}
				}
			}
			else
			{
				iVar3 = func_2392(128);
				if (__LIB_0__::func_154(iVar3))
				{
					if (!WEAPON::_0x2387D6E9C6B478AA(Global_35))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iVar3, false, 0, false, false);
					}
				}
			}
		}
	}
}

bool func_2500(var uParam0, float fParam1)
{
	if (!__LIB_0__::func_75(uParam0))
	{
		__LIB_1__::func_148(uParam0);
	}
	if (__LIB_0__::func_75(uParam0) && __LIB_0__::func_264(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_2501(int iParam0, int iParam1)
{
	if (ENTITY::GET_ENTITY_SPEED(iLocal_423[iParam0]) < 0.1f && func_2652(&(iLocal_423[iParam0])))
	{
		if (!__LIB_0__::func_75(&(Local_115[iParam0 /*24*/].f_16)))
		{
			__LIB_1__::func_148(&(Local_115[iParam0 /*24*/].f_16));
		}
		if (__LIB_0__::func_75(&(Local_115[iParam0 /*24*/].f_16)) && __LIB_1__::func_871(&(Local_115[iParam0 /*24*/].f_16)) >= iParam1)
		{
			return true;
		}
	}
	else
	{
		__LIB_0__::func_37(&(Local_115[iParam0 /*24*/].f_16));
	}
	return false;
}

int func_2612(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4, int iParam5, float fParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)
{
	vector3 vVar0;
	int iVar3;
	var uVar4;
	char* sVar12;
	if (!__LIB_0__::func_49(iParam0))
	{
		return 0;
	}
	vVar0 = { iParam3, iParam4, iParam5 };
	iVar3 = __LIB_1__::func_179(iParam0, 1);
	switch (Global_1360165[iParam0 /*1157*/].f_70.f_12)
	{
		case 0:
			Global_1360165[iParam0 /*1157*/].f_124 = PERSCHAR::_0x31C70A716CAE1FEE(iVar3);
			Global_1360165[iParam0 /*1157*/].f_125 = 0;
			if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			else
			{
				if (!__LIB_0__::func_851(iParam0) && __LIB_0__::func_852(iParam0, &uVar4))
				{
					PERSCHAR::_0x187D65F3AEC5D679(__LIB_0__::func_725(iParam0, 1), &uVar4);
				}
				__LIB_0__::func_213(iParam0, 256, 0);
				__LIB_0__::func_234(iParam0, 1);
			}
			break;
		case 1:
			if (!Global_1359489.f_12)
			{
				if (!PERSCHAR::_0xA8120EBEAF290C7A(iVar3))
				{
					return __LIB_0__::func_749();
				}
				if (bParam2 && !__LIB_0__::func_86(vVar0))
				{
					PERSCHAR::_0x59C7AD6FEA2AC449(iVar3, vVar0);
				}
				else if (bParam2)
				{
					PERSCHAR::_0xD4B614179BCD0654(iVar3);
				}
				if (!__LIB_1__::func_626(iParam0, vVar0, fParam6, iParam10))
				{
					return __LIB_0__::func_749();
				}
				if (__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
				{
					if (PERSCHAR::_0x31C70A716CAE1FEE(iVar3) != Global_1360165[iParam0 /*1157*/].f_124)
					{
					}
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_1360165[iParam0 /*1157*/].f_124, true))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
					}
					ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, true);
					ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, true);
					__LIB_0__::func_234(iParam0, 2);
				}
			}
			break;
		case 2:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (!bParam9 || PED::_0xA0BC8FAED8CFEB3C(Global_1360165[iParam0 /*1157*/].f_124))
			{
				__LIB_0__::func_234(iParam0, 3);
			}
			break;
		case 3:
			if (!__LIB_0__::func_272(Global_1360165[iParam0 /*1157*/].f_124, 0))
			{
				__LIB_0__::func_234(iParam0, 1);
				return __LIB_0__::func_749();
			}
			if (bParam7)
			{
				if (!__LIB_1__::func_411(iParam0, Global_1360165[iParam0 /*1157*/].f_124, 1))
				{
					return __LIB_0__::func_749();
				}
			}
			if ((bParam2 && !__LIB_0__::func_86(vVar0)) && !__LIB_0__::func_175(vVar0, ENTITY::GET_ENTITY_COORDS(Global_1360165[iParam0 /*1157*/].f_124, true, false), 1056964608 /* Float: 0.5f */, 1))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Global_1360165[iParam0 /*1157*/].f_124))
				{
					ENTITY::DETACH_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				func_879(Global_1360165[iParam0 /*1157*/].f_124, vVar0, fParam6, 2, 1073741824 /* Float: 2f */);
			}
			if (bParam1)
			{
				if (!ENTITY::_0x88AD6CC10D8D35B2(Global_1360165[iParam0 /*1157*/].f_124))
				{
					if (__LIB_0__::func_287(iParam0, 39, 1))
					{
					}
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1360165[iParam0 /*1157*/].f_124, true, true);
				}
				__LIB_0__::func_288(iParam0, 39, 1);
				__LIB_0__::func_213(iParam0, 8, 1);
				__LIB_0__::func_213(iParam0, 64, 0);
				Global_1360165[iParam0 /*1157*/].f_70.f_11 = SCRIPTS::GET_ID_OF_THIS_THREAD();
			}
			ENTITY::FREEZE_ENTITY_POSITION(Global_1360165[iParam0 /*1157*/].f_124, false);
			ENTITY::SET_ENTITY_INVINCIBLE(Global_1360165[iParam0 /*1157*/].f_124, false);
			__LIB_1__::func_547(Global_1360165[iParam0 /*1157*/].f_124, iParam0);
			if (bParam8)
			{
				POPULATION::_0xF74E134F40192884(Global_1360165[iParam0 /*1157*/].f_124, 1);
			}
			sVar12 = __LIB_0__::func_853(iParam0, __LIB_0__::func_181());
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar12))
			{
				PERSCHAR::_0x63AA2B8EB087886A(__LIB_0__::func_725(iParam0, 1), MISC::GET_HASH_KEY(sVar12));
			}
			Global_1360165[iParam0 /*1157*/].f_70 = Global_1360165[iParam0 /*1157*/].f_124;
			Global_1360165[iParam0 /*1157*/].f_124 = 0;
			__LIB_0__::func_290(iParam0, 40, 0);
			__LIB_0__::func_213(iParam0, 32, 0);
			__LIB_0__::func_234(iParam0, 0);
			return Global_1360165[iParam0 /*1157*/].f_70;
	}
	return __LIB_0__::func_749();
}

bool func_2652(var uParam0)
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(*uParam0, iVar0);
		if (!__LIB_0__::func_272(iVar1, 0))
		{
		}
		else if (func_2698(&iVar1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_2698(int iParam0)
{
	if (!__LIB_0__::func_272(*iParam0, 1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_IN_WATER(*iParam0))
	{
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

