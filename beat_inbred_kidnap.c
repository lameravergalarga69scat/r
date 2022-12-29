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
	int iLocal_15 = 0;
	int iLocal_16 = 0;
	int iLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 5;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
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
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_63 = { 0f, 0f, 0f };
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_69 = { 0f, 0f, 0f };
	vector3 vLocal_72 = { 0f, 0f, 0f };
	vector3 vLocal_75 = { 0f, 0f, 0f };
	vector3 vLocal_78 = { 0f, 0f, 0f };
	var uLocal_81 = 0;
	int iLocal_82 = 0;
	var uLocal_83 = 0;
	float fLocal_84 = 0f;
	float fLocal_85 = 0f;
	bool bLocal_86 = false;
	bool bLocal_87 = false;
	char* sLocal_88 = NULL;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 9999;
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
	struct<6> Local_109 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = -1;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 2;
	var uLocal_126 = 1;
	var uLocal_127 = 1;
	var uLocal_128 = 1;
	var uLocal_129 = 0;
	var uLocal_130 = 1;
	var uLocal_131 = 2;
	var uLocal_132 = 2;
	var uLocal_133 = 3;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 3;
	var uLocal_137 = 1;
	var uLocal_138 = 3;
	var uLocal_139 = 3;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	char* sLocal_143 = NULL;
	struct<21> Local_144[2];
	struct<17> Local_187[3];
	int iLocal_239 = 0;
	var uLocal_240 = -1;
	var uLocal_241 = 0;
	var uLocal_242 = -1;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = -1;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 1073741824;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 1;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	struct<17> Local_260[3];
	int iLocal_312 = 0;
	bool bLocal_313 = false;
	struct<193> Local_314 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_507 = 0;
	struct<32> Local_508[6];
	struct<2> Local_701[17];
	var uLocal_736 = 17;
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
	var uLocal_873[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_880[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	int iLocal_889 = 0;
	int iLocal_890 = 0;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
	int iLocal_893 = 0;
	int iLocal_894 = 0;
	int iLocal_895 = 0;
	int iLocal_896 = 0;
	int iLocal_897 = 0;
	int iLocal_898 = 0;
	int iLocal_899 = 0;
	int iLocal_900 = 0;
	int iLocal_901 = 0;
	int iLocal_902 = 0;
	int iLocal_903 = 0;
	int iLocal_904 = 0;
	int iLocal_905 = 0;
	int iLocal_906 = 0;
	int iLocal_907 = 0;
	int iLocal_908 = 0;
	int iLocal_909 = 0;
	int iLocal_910 = 0;
	int iLocal_911 = 0;
	int iLocal_912 = 0;
	int iLocal_913 = 0;
	int iLocal_914 = 0;
	int iLocal_915 = 0;
	int iLocal_916 = 0;
	int iLocal_917 = 0;
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
	float fLocal_928 = 0f;
	float fLocal_929 = 0f;
	float fLocal_930 = 0f;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	int iLocal_934 = 0;
	int iLocal_935 = 0;
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	int iLocal_944 = 0;
	int iLocal_945 = 0;
	int iLocal_946 = 0;
	int iLocal_947 = 0;
	int iLocal_948 = 0;
	int iLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	bool bLocal_958 = false;
	int iLocal_959 = 0;
	int iLocal_960 = 0;
	int iLocal_961 = 0;
	int iLocal_962 = 0;
	int iLocal_963 = 0;
	int iLocal_964 = 0;
	int iLocal_965 = 0;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	int iLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	int iLocal_971 = 0;
	int iLocal_972 = 0;
	bool bLocal_973 = false;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	int iLocal_978 = 0;
	int iLocal_979 = 0;
	int iLocal_980 = 0;
	int iLocal_981 = 0;
	bool bLocal_982 = false;
	int iLocal_983 = 0;
	int iLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	int iLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	int iLocal_990 = 0;
	bool bLocal_991 = false;
	bool bLocal_992 = false;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	int iLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
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
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
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
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
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
	int iLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	int iLocal_1083 = 0;
	int iLocal_1084 = 0;
	int iLocal_1085 = 0;
	int iLocal_1086 = 0;
	int iLocal_1087 = 0;
	int iLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 1065353216;
	var uLocal_1095 = 1065353216;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 1065353216;
	var uLocal_1100 = 1065353216;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 1065353216;
	var uLocal_1105 = 1065353216;
	var uLocal_1106 = 0;
	var uLocal_1107 = 1040187392;
	var uLocal_1108 = 1040187392;
	var uLocal_1109 = -1;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = -1082130432;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	int iLocal_1128 = 0;
	int iLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	int iLocal_1134 = 0;
	bool bLocal_1135 = false;
	bool bLocal_1136 = false;
	bool bLocal_1137 = false;
	bool bLocal_1138 = false;
	bool bLocal_1139 = false;
	bool bLocal_1140 = false;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	bool bLocal_1144 = false;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 1176256512;
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
	sLocal_143 = "reik_hollow_walk";
	iLocal_892 = 3;
	iLocal_893 = 1;
	iLocal_894 = 1;
	iLocal_905 = -1;
	iLocal_914 = -1;
	iLocal_925 = 20;
	iLocal_926 = -1;
	fLocal_928 = -1f;
	iLocal_931 = 1;
	iLocal_932 = 1;
	iLocal_933 = 1;
	iLocal_934 = 1;
	iLocal_1084 = 8;
	iLocal_1085 = 8;
	iLocal_1128 = __LIB_2__::func_340(3, 0, 0);
	iLocal_1133 = 1;
	Local_314.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	if (func_3())
	{
		func_4();
	}
	Local_314.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_368(&Local_314, 1);
	__LIB_3__::func_152(29);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_991 = true;
	}
	TASK::_0xFF745B0346E19E2C(joaat("HOGTIED_PED"));
	while (true)
	{
		__LIB_2__::func_265(bLocal_991, 685, 0);
		if (bLocal_991)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_1133)
			{
				case 1:
					if (__LIB_3__::func_669(&Local_314, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_10(&Local_314, &uLocal_1089, &iLocal_1088);
						__LIB_3__::func_352(&Local_314, 1);
						iLocal_1133 = 0;
					}
					else if (Local_314.f_160)
					{
						func_4();
					}
					break;
				case 0:
					if (func_12())
					{
						iLocal_1133 = 3;
					}
					break;
				case 3:
					if (func_13())
					{
						iLocal_1133 = 4;
					}
					break;
				case 4:
					if (!func_14(&Local_314, &uLocal_873, iLocal_14, 0, 1, 0, 1, 0))
					{
						func_4();
					}
					func_15();
					if (func_16())
					{
						func_4();
					}
					if (__LIB_3__::func_431(&Local_314, &uLocal_873, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0, 0))
					{
						func_4();
					}
					break;
			}
			BUILTIN::WAIT(Local_314.f_158);
		}
	}
}

bool func_3()
{
	int iVar0;
	int iVar1;
	switch (Local_314.f_51.f_4)
	{
		case 0:
		case 3:
		case 4:
			iVar0 = 4194304;
			break;
		case 1:
		case 2:
		case 5:
		case 6:
		case 7:
			iVar0 = 2;
			break;
	}
	iVar1 = __LIB_4__::func_439(iVar0);
	if (__LIB_3__::func_151(iVar1) || __LIB_0__::func_730(iVar1))
	{
		return true;
	}
	return false;
}

void func_4()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	func_21();
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_873[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_873[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_873[2]))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_873[1], 6, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uLocal_873[1], 2, true);
			TASK::CLEAR_PED_TASKS(uLocal_873[1], true, false);
			TASK::CLEAR_PED_TASKS(uLocal_873[2], true, false);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			if (!PED::IS_PED_ON_MOUNT(uLocal_873[1]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[2], -1, -1, 1f, 1, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 2.001f, 32, 0);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			__LIB_1__::func_474(uLocal_873[1], &iVar0, 0, 0, 1, 1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			PED::SET_PED_KEEP_TASK(uLocal_873[1], true);
			PED::SET_PED_KEEP_TASK(uLocal_873[2], true);
			Local_314.f_50 = 1;
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_873[2]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_873[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_873[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_873[3]))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_873[0], 6, true);
			PED::SET_PED_FLEE_ATTRIBUTES(uLocal_873[0], 2, true);
			TASK::CLEAR_PED_TASKS(uLocal_873[0], true, false);
			TASK::CLEAR_PED_TASKS(uLocal_873[3], true, false);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			TASK::OPEN_SEQUENCE_TASK(&iVar1);
			if (!PED::IS_PED_ON_MOUNT(uLocal_873[0]))
			{
				TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[3], -1, -1, 1f, 1, 0, 0);
				TASK::_TASK_MOVE_IN_TRAFFIC(0, 2.001f, 32, 0);
			}
			else
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 2, 0, -1082130432 /* Float: -1f */, -1, 0);
			}
			__LIB_1__::func_474(uLocal_873[0], &iVar1, 0, 0, 1, 1);
			TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			PED::SET_PED_KEEP_TASK(uLocal_873[0], true);
			PED::SET_PED_KEEP_TASK(uLocal_873[3], true);
			Local_314.f_50 = 1;
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_873[3]));
		}
	}
	func_23(0);
	if ((!Local_314.f_48 && !Local_314.f_45) && !__LIB_2__::func_215(Global_35, iLocal_142, 1, 120f, 0))
	{
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_17))
		{
			PROPSET::_0x58E0B01D45CA7357(iLocal_17);
			PROPSET::_0xC1AB7EEFD3E6EE49(iLocal_17, 0);
		}
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_18))
		{
			PROPSET::_0x58E0B01D45CA7357(iLocal_18);
			PROPSET::_0xC1AB7EEFD3E6EE49(iLocal_18, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142))
		{
			iVar2 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1);
			iVar3 = VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0);
			PED::DELETE_PED(&iVar2);
			PED::DELETE_PED(&iVar3);
			VEHICLE::DELETE_VEHICLE(&iLocal_142);
		}
		__LIB_1__::func_206(Local_314.f_51, 10f, 0);
		iVar4 = 0;
		while (iVar4 < 6)
		{
			__LIB_3__::func_475(uLocal_873[iVar4], 0, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, -1, -1, -1, -1082130432 /* Float: -1f */);
			iVar4++;
		}
	}
	else
	{
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_17))
		{
			PROPSET::_0x58E0B01D45CA7357(iLocal_17);
		}
		if (PROPSET::_DOES_PROPSET_EXIST(iLocal_18))
		{
			PROPSET::_0x58E0B01D45CA7357(iLocal_18);
		}
	}
	if (iLocal_989 == 1)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
		PED::SET_PED_RESET_FLAG(Global_35, 318, false);
		iLocal_989 = 0;
	}
	if (PED::_0x91A5F9CBEBB9D936(uLocal_81))
	{
		PATHFIND::_0xD17672447692478E(uLocal_83, 0);
		PED::CLEAR_PED_NON_CREATION_AREA();
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_81, true);
	}
	func_27(1);
	func_28(0);
	if (MAP::DOES_BLIP_EXIST(iLocal_997))
	{
		MAP::REMOVE_BLIP(&iLocal_997);
	}
	__LIB_0__::func_8(&Global_1935630, 4);
	__LIB_1__::func_682(29);
	if (iLocal_988 == 1)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		iLocal_988 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_998))
	{
		ENTITY::_0x18FF3110CF47115D(iLocal_998, 9, 1);
	}
	__LIB_2__::func_593(&iLocal_239, &Local_260);
	__LIB_2__::func_56(uLocal_873[4], 1, 1);
	__LIB_2__::func_593(&(Local_144[1 /*21*/]), &Local_187);
	__LIB_2__::func_593(&(Local_144[0 /*21*/]), &Local_187);
	__LIB_2__::func_56(uLocal_873[0], 1, 1);
	__LIB_2__::func_56(uLocal_873[1], 1, 1);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1000))
	{
		__LIB_0__::func_172(iLocal_1000);
	}
	__LIB_0__::func_769();
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_873[4]))
	{
		__LIB_1__::func_727(uLocal_873[4], 1);
	}
	if (bLocal_87)
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 2, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
		__LIB_3__::func_552(uLocal_873[4]);
		PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 448, false);
		bLocal_87 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_873[4]))
	{
		PED::_0x6569F31A01B4C097(uLocal_873[4], 0, 1);
		PED::_0x6569F31A01B4C097(uLocal_873[4], 1, 1);
		if (PED::IS_PED_ON_MOUNT(uLocal_873[4]))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar5);
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
			TASK::TASK_STAND_STILL(0, 1);
			__LIB_1__::func_474(uLocal_873[4], &iVar5, 0, 0, 1, 1);
		}
	}
	if (iLocal_926 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_926);
		iLocal_926 = -1;
	}
	if (Local_314.f_45 == 1)
	{
		__LIB_2__::func_115(31, 0, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(6, 13), 0, 0, 1);
	}
	func_38(&Local_314, &uLocal_873, &iLocal_880, iLocal_14, uLocal_1089, iLocal_1088, 0, 1, 0, 1);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_10(var uParam0, var uParam1, int iParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 10;
			*iParam2 = 0;
			break;
		case 1:
			*uParam1 = 10;
			*iParam2 = 1;
			break;
		case 2:
			*uParam1 = 10;
			*iParam2 = 2;
			break;
		case 3:
			*uParam1 = 10;
			*iParam2 = 3;
			break;
		case 4:
			*uParam1 = 10;
			*iParam2 = 4;
			break;
		case 5:
			*uParam1 = 10;
			*iParam2 = 5;
			break;
		case 6:
			*uParam1 = 10;
			*iParam2 = 6;
			break;
		case 7:
			*uParam1 = 10;
			*iParam2 = 7;
			break;
	}
}

bool func_12()
{
	int iVar0;
	switch (iLocal_1132)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_314))
			{
				func_49();
				func_50();
				func_51();
				func_52();
				func_53();
				func_54();
				func_55();
				func_56();
				func_57();
				iLocal_1132 = 1;
			}
			break;
		case 1:
			if (!PROPSET::_HAS_PROPSET_LOADED(iLocal_15))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_508))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 17)
			{
				if (!__LIB_3__::func_315(&uLocal_736))
				{
					return false;
				}
				iVar0++;
			}
			if (!AUDIO::_0xD9130842D7226045("REIK_Sounds", 0))
			{
				return false;
			}
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_143))
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_13()
{
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1)))
	{
		__LIB_1__::func_864(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0)))
	{
		__LIB_1__::func_864(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0), 1, 1);
	}
	switch (iLocal_1131)
	{
		case 0:
			if (__LIB_3__::func_479(Local_314.f_51, Local_314.f_51.f_3, &Local_508, &uLocal_873, 1, 0, -1, 1))
			{
				iLocal_1131 = 1;
			}
			break;
		case 1:
			func_62();
			func_27(0);
			func_63();
			func_64();
			__LIB_4__::func_2(&iLocal_17, iLocal_15, vLocal_72, 1, fLocal_85, 1150681088 /* Float: 1200f */, 0, 1);
			iLocal_1131 = 6;
			break;
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_142) && !ENTITY::IS_ENTITY_DEAD(iLocal_142))
			{
				PROPSET::_0xD80FAF919A2E56EA(iLocal_142, iLocal_16);
			}
			else
			{
				return false;
			}
			return true;
	}
	return false;
}

bool func_14(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_66(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	__LIB_3__::func_163(uParam0, uParam1);
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

void func_15()
{
	func_76();
	func_77();
	func_78();
	func_79();
	func_80();
	PED::_0x802092B07E3B1EEA(uLocal_873[0], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
	PED::_0x802092B07E3B1EEA(uLocal_873[1], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 3);
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_998 = PED::GET_MOUNT(Global_35);
	}
	if (__LIB_0__::func_163(uLocal_873[1], 2104565373))
	{
		PED::SET_PED_RESET_FLAG(uLocal_873[1], 27, true);
	}
	if (iLocal_14 == 0)
	{
		func_82();
	}
	else
	{
		func_83();
	}
	if ((__LIB_2__::func_118(uLocal_873[0], 1, 0) <= 40f || __LIB_2__::func_118(uLocal_873[1], 1, 0) <= 40f) || __LIB_2__::func_118(uLocal_873[4], 1, 0) <= 40f)
	{
		iLocal_943 = 1;
	}
	if (iLocal_943 == 1 || iLocal_944 == 1)
	{
		Local_314.f_45 = 1;
	}
	else
	{
		Local_314.f_45 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1)))
	{
		__LIB_1__::func_864(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 1), 1, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0)))
	{
		__LIB_1__::func_864(VEHICLE::_GET_PED_IN_DRAFT_SEAT(iLocal_142, 0), 1, 1);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_109, false))
	{
		fLocal_929 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_109);
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_109.f_1, false))
	{
		fLocal_930 = ANIMSCENE::_GET_ANIM_SCENE_PROGRESS(Local_109.f_1);
	}
}

bool func_16()
{
	switch (iLocal_887)
	{
		case 0:
			func_85();
			break;
		case 1:
			func_86();
			break;
		case 2:
			func_87();
			break;
		case 3:
			func_88();
			break;
		case 4:
			func_89();
			break;
		case 5:
			func_90();
			break;
		case 6:
			func_91();
			break;
		case 7:
			func_92();
			break;
		case 8:
			func_93();
			break;
		case 9:
			func_94();
			break;
		case 10:
			func_95();
			break;
		case 12:
			if (bLocal_87)
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 2, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
				__LIB_3__::func_552(uLocal_873[4]);
				PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 448, false);
				bLocal_87 = false;
			}
			if (iLocal_989 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
				PED::SET_PED_RESET_FLAG(Global_35, 318, false);
				iLocal_989 = 0;
			}
			func_96(0);
			func_97();
			func_98();
			if (__LIB_2__::func_118(uLocal_873[4], 1, 1) >= __LIB_0__::func_514(__LIB_3__::func_291(uLocal_873[4], 1), 35f, 50f) || ENTITY::IS_ENTITY_DEAD(uLocal_873[4]))
			{
				Local_314.f_50 = 1;
				Local_314.f_44 = 1;
				__LIB_0__::func_8(&Global_1935630, 4);
				PED::SET_PED_KEEP_TASK(uLocal_873[4], true);
				return true;
			}
			break;
		case 11:
			if (bLocal_87)
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 2, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
				PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 448, false);
				__LIB_3__::func_552(uLocal_873[4]);
				bLocal_87 = false;
			}
			if (iLocal_989 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
				PED::SET_PED_RESET_FLAG(Global_35, 318, false);
				iLocal_989 = 0;
			}
			if (iLocal_988 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				iLocal_988 = 0;
			}
			func_97();
			if (MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				MAP::REMOVE_BLIP(&iLocal_997);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_880[4]))
			{
				MAP::REMOVE_BLIP(&(iLocal_880[4]));
			}
			if (__LIB_2__::func_118(uLocal_873[4], 1, 1) >= 100f || PED::IS_PED_DEAD_OR_DYING(uLocal_873[4], true))
			{
				PED::SET_PED_KEEP_TASK(uLocal_873[4], true);
				Local_314.f_50 = 1;
				Local_314.f_160 = 1;
				func_4();
			}
			break;
	}
	return false;
}

void func_21()
{
	if (bLocal_313)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_312))
		{
			PED::_0x2EB75FB86C41F026(iLocal_312, 3, 1);
			bLocal_313 = false;
		}
	}
}

void func_23(bool bParam0)
{
	if (bLocal_992 != bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_873[4]))
		{
			if (bParam0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_873[4], joaat("REL_PLAYER_LIKE"));
				PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uLocal_873[4], joaat("REL_PLAYER_LIKE"));
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_873[4], joaat("REL_CIVFEMALE"));
				PED::SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(uLocal_873[4], joaat("REL_CIVFEMALE"));
			}
		}
		bLocal_992 = bParam0;
	}
}

void func_27(bool bParam0)
{
	if (bParam0)
	{
		__LIB_2__::func_161(Local_314.f_51, 20f, 5);
	}
	else
	{
		__LIB_2__::func_165(Local_314.f_51, 20f, 0, 0, 6);
	}
}

void func_28(int iParam0)
{
	if (iParam0 == 1)
	{
		if (bLocal_86 == 0)
		{
			AUDIO::START_AUDIO_SCENE("INBRED_KIDNAP_SCENE");
			bLocal_86 = true;
		}
	}
	else if (bLocal_86)
	{
		AUDIO::STOP_AUDIO_SCENE("INBRED_KIDNAP_SCENE");
		bLocal_86 = false;
	}
}

void func_38(var uParam0, var uParam1, int iParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
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
		__LIB_3__::func_604(uParam0);
	}
	__LIB_3__::func_166(uParam0);
	if (!uParam0->f_186)
	{
		func_66(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_124(uParam0->f_3, uParam0->f_185);
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
		func_125(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_49()
{
	iLocal_14 = __LIB_3__::func_390(Local_314.f_3, 2, 0);
	switch (iLocal_14)
	{
		case 0:
			break;
		case 1:
			break;
	}
}

void func_50()
{
	switch (iLocal_14)
	{
		case 0:
			Local_508[0 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_508[0 /*32*/].f_3 = 605220140;
			Local_508[1 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_508[1 /*32*/].f_3 = -1315263278;
			Local_508[4 /*32*/].f_1 = joaat("RE_INBREDKIDNAP_FEMALES_01");
			Local_508[4 /*32*/].f_3 = 748808650;
			Local_508[5 /*32*/].f_1 = joaat("RE_INBREDKIDNAP_MALES_01");
			Local_508[5 /*32*/].f_3 = 748808650;
			break;
		case 1:
			Local_508[0 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_508[0 /*32*/].f_3 = 307579313;
			Local_508[1 /*32*/].f_1 = joaat("G_M_M_UNIINBRED_01");
			Local_508[1 /*32*/].f_3 = -1621227431;
			Local_508[4 /*32*/].f_1 = joaat("RE_INBREDKIDNAP_FEMALES_01");
			Local_508[4 /*32*/].f_3 = 1065193341;
			Local_508[5 /*32*/].f_1 = joaat("RE_INBREDKIDNAP_MALES_01");
			Local_508[5 /*32*/].f_3 = 1065193341;
			break;
	}
	Local_508[2 /*32*/].f_1 = __LIB_2__::func_185(1, 0, 1);
	Local_508[3 /*32*/].f_1 = __LIB_2__::func_185(1, 1, 1);
	Local_508[0 /*32*/].f_31 = joaat("REL_GANG_MURFREE_BROOD");
	Local_508[1 /*32*/].f_31 = joaat("REL_GANG_MURFREE_BROOD");
	__LIB_3__::func_445(&Local_508);
}

void func_51()
{
	Local_701[12 /*2*/] = "script_re@inbred_kidnap@main";
	Local_701[12 /*2*/].f_1 = "shoot_react_female";
	Local_701[0 /*2*/] = "script_re@inbred_kidnap@thanks";
	Local_701[11 /*2*/] = "script_re@inbred_kidnap@goodbye";
	switch (Local_314.f_51.f_4)
	{
		case 0:
		case 3:
		case 4:
			Local_701[2 /*2*/].f_1 = "vanhorn";
			break;
		case 1:
		case 2:
		case 5:
		case 6:
		case 7:
			Local_701[2 /*2*/].f_1 = "annsberg";
			break;
	}
	Local_701[6 /*2*/].f_1 = "anything_to_help_u_plyr";
	Local_701[1 /*2*/].f_1 = "get_me_outta_here";
	Local_701[10 /*2*/].f_1 = "hope_ur_right_sir";
	Local_701[9 /*2*/].f_1 = "not_at_all_plyr";
	Local_701[3 /*2*/].f_1 = "sir";
	Local_701[4 /*2*/].f_1 = "what_do_you_think";
	Local_701[5 /*2*/].f_1 = "will_u_help_me";
	Local_701[7 /*2*/].f_1 = "youll_be_alright_plyr";
	__LIB_3__::func_318(Local_701[12 /*2*/], &uLocal_19);
	__LIB_3__::func_318(Local_701[0 /*2*/], &uLocal_19);
	__LIB_3__::func_318(Local_701[11 /*2*/], &uLocal_19);
}

void func_52()
{
	iLocal_15 = 2102507474;
	iLocal_16 = joaat("PG_TEAMSTER_CHUCKWAGON000X_LIGHTUPGRADE1");
	STREAMING::REQUEST_MODEL(joaat("CHUCKWAGON000X"), false);
	PROPSET::_REQUEST_PROPSET(iLocal_15);
	PROPSET::_REQUEST_PROPSET(iLocal_16);
}

void func_53()
{
	if (iLocal_14 == 0)
	{
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				sLocal_88 = "REIK_TAKE_HOME_A";
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				sLocal_88 = "REIK_TAKE_HOME_B";
				break;
		}
	}
	else
	{
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				sLocal_88 = "REIK_TAKE_HOME_A";
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				sLocal_88 = "REIK_TAKE_HOME_B";
				break;
		}
	}
}

void func_54()
{
	if (iLocal_14 == 0)
	{
		__LIB_2__::func_602(&(Local_187[0 /*17*/]), "INTERACT_GREET", func_161(97), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_187[1 /*17*/]), "INTERACT_INTERVENE", func_161(97), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_187[1 /*17*/]), 1, 0);
		__LIB_2__::func_602(&(Local_260[0 /*17*/]), "INTERACT_QUESTION", func_161(106), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE", func_161(107), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		__LIB_3__::func_158(&(Local_260[0 /*17*/]), 1);
		__LIB_3__::func_158(&(Local_260[1 /*17*/]), 1);
		__LIB_1__::func_471(&(Local_260[0 /*17*/]), 8);
		__LIB_1__::func_471(&(Local_260[1 /*17*/]), 8);
	}
	else
	{
		__LIB_2__::func_602(&(Local_187[0 /*17*/]), "INTERACT_GREET", func_161(97), joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
		__LIB_2__::func_602(&(Local_187[1 /*17*/]), "RE_INTER_ANTAGONIZE", func_161(97), joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
		__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_187[1 /*17*/]), 1, 0);
		__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
		__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
	}
}

void func_55()
{
	Local_508[0 /*32*/] = 22;
	Local_508[1 /*32*/] = 22;
	Local_508[4 /*32*/] = 5;
	Local_508[5 /*32*/] = 4;
	switch (Local_314.f_51.f_4)
	{
		case 0:
			Local_508[1 /*32*/].f_6 = { 1782.85f, 584.82f, 105.61f };
			Local_508[1 /*32*/].f_9 = 86.61f;
			Local_508[0 /*32*/].f_6 = { 1781.67f, 584.36f, 105.46f };
			Local_508[0 /*32*/].f_9 = 106.07f;
			Local_508[4 /*32*/].f_6 = { 1780.33f, 583.99f, 105.31f };
			Local_508[4 /*32*/].f_9 = 163.89f;
			Local_508[5 /*32*/].f_6 = { 1778.99f, 585.21f, 105.04f };
			Local_508[5 /*32*/].f_9 = 147.17f;
			Local_508[2 /*32*/].f_6 = { 1773.61f, 592.46f, 105.39f };
			Local_508[2 /*32*/].f_9 = -115.69f;
			Local_508[3 /*32*/].f_6 = { 1773.6f, 590.12f, 105.33f };
			Local_508[3 /*32*/].f_9 = -137.87f;
			vLocal_69 = { 1783.55f, 588.01f, 105.76f };
			fLocal_84 = 10f;
			vLocal_72 = { 1783.55f, 588.01f, 105.76f };
			fLocal_85 = 10f;
			vLocal_60 = { 2957.36f, 522.85f, 43.82f };
			vLocal_66 = { 2949.2f, 519.02f, 44.87f };
			vLocal_75 = { 1777.58f, 588.66f, 105.5f };
			vLocal_78 = { 0f, 0f, 20f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 1786.71f, 872.42f, 111.53f };
			}
			break;
		case 1:
			Local_508[1 /*32*/].f_6 = { 2459.61f, 1304.09f, 110.13f };
			Local_508[1 /*32*/].f_9 = 178.19f;
			Local_508[0 /*32*/].f_6 = { 2457.16f, 1297.86f, 110.13f };
			Local_508[0 /*32*/].f_9 = -125.1f;
			Local_508[4 /*32*/].f_6 = { 2459.19f, 1303.24f, 110.13f };
			Local_508[4 /*32*/].f_9 = -54.43f;
			Local_508[5 /*32*/].f_6 = { 2458.82f, 1297.47f, 110.13f };
			Local_508[5 /*32*/].f_9 = -72.19f;
			Local_508[2 /*32*/].f_6 = { 2464.35f, 1309.38f, 111.02f };
			Local_508[2 /*32*/].f_9 = 65.4f;
			Local_508[3 /*32*/].f_6 = { 2464.14f, 1306.96f, 111.3f };
			Local_508[3 /*32*/].f_9 = 99.35f;
			vLocal_69 = { 2464.739f, 1315.927f, 109.401f };
			fLocal_84 = -10f;
			vLocal_72 = { 2463.052f, 1314.691f, 109.4144f };
			fLocal_85 = 50f;
			vLocal_75 = { 2461.624f, 1311.476f, 109.6674f };
			vLocal_78 = { 0f, 0f, 100f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2419.53f, 1076.52f, 87f };
			}
			break;
		case 2:
			Local_508[1 /*32*/].f_6 = { 2843.05f, 651.93f, 66.72f };
			Local_508[1 /*32*/].f_9 = -153.07f;
			Local_508[0 /*32*/].f_6 = { 2841.2f, 648.06f, 66.6f };
			Local_508[0 /*32*/].f_9 = 106.07f;
			Local_508[4 /*32*/].f_6 = { 2842.88f, 651.08f, 66.7f };
			Local_508[4 /*32*/].f_9 = 163.89f;
			Local_508[5 /*32*/].f_6 = { 2842.56f, 647.74f, 66.58f };
			Local_508[5 /*32*/].f_9 = -67.87f;
			Local_508[2 /*32*/].f_6 = { 2847.3f, 655.96f, 66.88f };
			Local_508[2 /*32*/].f_9 = 54.36f;
			Local_508[3 /*32*/].f_6 = { 2846.33f, 653.7f, 67.11f };
			Local_508[3 /*32*/].f_9 = 77.23f;
			vLocal_69 = { 2837.95f, 655.04f, 67.29f };
			fLocal_84 = -10f;
			vLocal_72 = { 2837.95f, 655.04f, 67.29f };
			fLocal_85 = 170f;
			vLocal_75 = { 2842.38f, 651.63f, 66.33f };
			vLocal_78 = { 0f, 0f, 100f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2500.46f, 628.42f, 68.64f };
			}
			break;
		case 3:
			Local_508[1 /*32*/].f_6 = { 2658.08f, 906.45f, 88.95f };
			Local_508[1 /*32*/].f_9 = 86.61f;
			Local_508[0 /*32*/].f_6 = { 2658.6f, 907.53f, 88.95f };
			Local_508[0 /*32*/].f_9 = 106.07f;
			Local_508[4 /*32*/].f_6 = { 2657.79f, 906.81f, 88.95f };
			Local_508[4 /*32*/].f_9 = 163.89f;
			Local_508[5 /*32*/].f_6 = { 2656.43f, 907.08f, 88.95f };
			Local_508[5 /*32*/].f_9 = 147.17f;
			Local_508[2 /*32*/].f_6 = { 2685.76f, 861.36f, 86.43f };
			Local_508[2 /*32*/].f_9 = 171.46f;
			Local_508[3 /*32*/].f_6 = { 2683.52f, 862f, 86.11f };
			Local_508[3 /*32*/].f_9 = 145.06f;
			vLocal_69 = { 2685.41f, 851.34f, 86.97f };
			fLocal_84 = 165.09f;
			vLocal_72 = { 2685.41f, 851.34f, 86.97f };
			fLocal_85 = 10f;
			vLocal_60 = { 2957.36f, 522.85f, 43.82f };
			vLocal_66 = { 2949.2f, 519.02f, 44.87f };
			vLocal_75 = { 2681.24f, 854.14f, 85.87f };
			vLocal_78 = { 0f, 0f, 40f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2406.63f, 1144.77f, 97.24f };
			}
			break;
		case 4:
			Local_508[1 /*32*/].f_6 = { 2369.39f, 270.61f, 52.93f };
			Local_508[1 /*32*/].f_9 = 86.61f;
			Local_508[0 /*32*/].f_6 = { 2367.81f, 269.51f, 53.04f };
			Local_508[0 /*32*/].f_9 = 106.07f;
			Local_508[4 /*32*/].f_6 = { 2367.4f, 268.24f, 53.15f };
			Local_508[4 /*32*/].f_9 = 163.89f;
			Local_508[5 /*32*/].f_6 = { 2368.15f, 268.54f, 53.08f };
			Local_508[5 /*32*/].f_9 = 147.17f;
			Local_508[3 /*32*/].f_6 = { 2378f, 266.98f, 54.62f };
			Local_508[3 /*32*/].f_9 = 85.72f;
			Local_508[2 /*32*/].f_6 = { 2379.83f, 265.4f, 54.81f };
			Local_508[2 /*32*/].f_9 = 122.26f;
			vLocal_69 = { 2372.14f, 260f, 53.93f };
			fLocal_84 = 20.02f;
			vLocal_72 = { 2372.14f, 260f, 53.93f };
			fLocal_85 = 200f;
			vLocal_60 = { 2957.36f, 522.85f, 43.82f };
			vLocal_66 = { 2949.2f, 519.02f, 44.87f };
			vLocal_75 = { 2368.53f, 271.33f, 52.93f };
			vLocal_78 = { 0f, 0f, -180f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2406.63f, 1144.77f, 97.24f };
			}
			break;
		case 5:
			Local_508[1 /*32*/].f_6 = { 2697.629f, 178.098f, 52.4475f };
			Local_508[1 /*32*/].f_9 = -153.07f;
			Local_508[0 /*32*/].f_6 = { 2693.532f, 176.9803f, 52.409f };
			Local_508[0 /*32*/].f_9 = 106.07f;
			Local_508[4 /*32*/].f_6 = { 2696.406f, 176.7155f, 52.4125f };
			Local_508[4 /*32*/].f_9 = -90.89f;
			Local_508[5 /*32*/].f_6 = { 2697.209f, 175.338f, 52.3897f };
			Local_508[5 /*32*/].f_9 = 0.87f;
			Local_508[2 /*32*/].f_6 = { 2705.635f, 167.6387f, 52.0362f };
			Local_508[2 /*32*/].f_9 = 45.36f;
			Local_508[3 /*32*/].f_6 = { 2704.643f, 166.6992f, 52.1609f };
			Local_508[3 /*32*/].f_9 = 30.23f;
			vLocal_69 = { 2701.289f, 175.9979f, 52.5134f };
			fLocal_84 = 0f;
			vLocal_72 = { 2700.789f, 175.9979f, 52.5134f };
			fLocal_85 = 0f;
			vLocal_75 = { 2695.406f, 176.7155f, 52.4125f };
			vLocal_78 = { 0f, 0f, -80f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2578.444f, 502.7463f, 66.6559f };
			}
			break;
		case 6:
			Local_508[1 /*32*/].f_6 = { 2492.856f, 1534.523f, 84.2833f };
			Local_508[1 /*32*/].f_9 = 135.07f;
			Local_508[0 /*32*/].f_6 = { 2495f, 1532.238f, 84.269f };
			Local_508[0 /*32*/].f_9 = 96.07f;
			Local_508[4 /*32*/].f_6 = { 2493.237f, 1530.039f, 84.2268f };
			Local_508[4 /*32*/].f_9 = -35.89f;
			Local_508[5 /*32*/].f_6 = { 2491.19f, 1531.967f, 84.2858f };
			Local_508[5 /*32*/].f_9 = -50.87f;
			Local_508[2 /*32*/].f_6 = { 2482.598f, 1528.827f, 84.4879f };
			Local_508[2 /*32*/].f_9 = 35.36f;
			Local_508[3 /*32*/].f_6 = { 2483.642f, 1529.807f, 84.4734f };
			Local_508[3 /*32*/].f_9 = 10.23f;
			vLocal_69 = { 2494.728f, 1540.996f, 84.3107f };
			fLocal_84 = 30f;
			vLocal_72 = { 2497.534f, 1542.573f, 84.27121f };
			fLocal_85 = 30f;
			vLocal_75 = { 2493.144f, 1538.348f, 84.266f };
			vLocal_78 = { 0f, 0f, 135f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2155.598f, 1600.929f, 111.1401f };
			}
			break;
		case 7:
			Local_508[1 /*32*/].f_6 = { 2295.125f, 1736.473f, 104.1996f };
			Local_508[1 /*32*/].f_9 = -5.07f;
			Local_508[0 /*32*/].f_6 = { 2293.616f, 1736.615f, 104.4685f };
			Local_508[0 /*32*/].f_9 = -56.07f;
			Local_508[4 /*32*/].f_6 = { 2293.985f, 1738.753f, 104.5168f };
			Local_508[4 /*32*/].f_9 = 180.89f;
			Local_508[5 /*32*/].f_6 = { 2295.66f, 1738.838f, 104.2313f };
			Local_508[5 /*32*/].f_9 = 180.87f;
			Local_508[2 /*32*/].f_6 = { 2299.368f, 1726.186f, 102.1403f };
			Local_508[2 /*32*/].f_9 = -135.36f;
			Local_508[3 /*32*/].f_6 = { 2302.335f, 1726.783f, 102.2145f };
			Local_508[3 /*32*/].f_9 = -130.23f;
			vLocal_69 = { 2292.446f, 1733.757f, 104.4756f };
			fLocal_84 = -100f;
			vLocal_72 = { 2288.981f, 1733.342f, 104.1999f };
			fLocal_85 = -100f;
			vLocal_75 = { 2294.375f, 1739.66f, 104.362f };
			vLocal_78 = { 0f, 0f, -5f };
			vLocal_60 = { 2941.94f, 1351.1f, 43.01f };
			vLocal_66 = { 2949.22f, 1347.5f, 44.31f };
			if (func_166())
			{
				vLocal_63 = { 2363.98f, 1359.48f, 105.16f };
			}
			else
			{
				vLocal_63 = { 2774.395f, 1808.716f, 143.9561f };
			}
			break;
	}
}

void func_56()
{
	Local_109.f_4 = "script@beat@wilderness@inbredkidnap@action";
	Local_109.f_5 = "script@beat@wilderness@inbredkidnap@goodbye";
}

void func_57()
{
	TASK::REQUEST_WAYPOINT_RECORDING(sLocal_143);
}

void func_62()
{
	iLocal_142 = VEHICLE::CREATE_VEHICLE(joaat("CHUCKWAGON000X"), vLocal_69, fLocal_84, true, true, false, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_142, 0f);
	__LIB_2__::func_19(iLocal_142);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_873[0], Local_508[0 /*32*/].f_6, Local_508[0 /*32*/].f_9, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_873[1], Local_508[1 /*32*/].f_6, Local_508[1 /*32*/].f_9, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_873[4], Local_508[4 /*32*/].f_6, Local_508[4 /*32*/].f_9, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_873[5], Local_508[5 /*32*/].f_6, Local_508[5 /*32*/].f_9, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_873[2], Local_508[2 /*32*/].f_6, Local_508[2 /*32*/].f_9, true, false, true);
	ENTITY::_SET_ENTITY_COORDS_AND_HEADING(uLocal_873[3], Local_508[3 /*32*/].f_6, Local_508[3 /*32*/].f_9, true, false, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_873[0], false, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_873[1], false, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_873[4], true, true);
	WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_873[5], true, true);
	__LIB_4__::func_7(uLocal_873[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 999, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	__LIB_4__::func_7(uLocal_873[1], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 999, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_873[0], 30, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_873[1], 30, false);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_873[0], 2);
	PED::SET_PED_COMBAT_MOVEMENT(uLocal_873[1], 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_873[0], 98, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_873[1], 98, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_873[0], 1, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_873[1], 1, true);
	PED::_0x931B241409216C1F(uLocal_873[0], uLocal_873[3], 0);
	PED::_0x931B241409216C1F(uLocal_873[1], uLocal_873[2], 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[0], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[1], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 6, true);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_873[4], false, 10f);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 370, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[5], 370, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 371, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[5], 371, true);
	__LIB_3__::func_303(&(Local_508[4 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 146, true);
	__LIB_3__::func_303(&(Local_508[5 /*32*/].f_22));
	PED::SET_PED_CONFIG_FLAG(uLocal_873[5], 146, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 448, true);
	PED::_0x8ACC0506743A8A5C(uLocal_873[1], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 2, true);
	PED::SET_PED_CONFIG_FLAG(Global_35, 2, true);
	bLocal_87 = true;
	PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 305, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[5], 305, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 306, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 448, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_873[3], 48, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(uLocal_873[2], 48, false);
	PED::SET_PED_RESET_FLAG(uLocal_873[4], 224, true);
	if (iLocal_14 == 0)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_873[0], "0204_G_M_M_UniInbred_03_WHITE_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_873[1], "0203_G_M_M_UniInbred_03_WHITE_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_873[4], "REIK_Woman_1");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_873[5], "0429_A_M_M_StrTownfolk_01_WHITE_01");
		__LIB_3__::func_567(uLocal_873[5], 1);
		PED::_0x6569F31A01B4C097(uLocal_873[4], 0, 0);
		PED::_0x6569F31A01B4C097(uLocal_873[4], 1, 0);
	}
	else
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_873[0], "0199_G_M_M_UniInbred_01_WHITE_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_873[1], "0200_G_M_M_UniInbred_01_WHITE_02");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_873[4], "RELOV_WOMAN");
		AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_873[5], "0595_A_M_M_Civ_White_19");
		__LIB_3__::func_567(uLocal_873[4], 1);
		__LIB_3__::func_567(uLocal_873[5], 1);
	}
	__LIB_4__::func_197(0);
	__LIB_1__::func_991(uLocal_873[4], joaat("HONOR_EVENT_AMBIENT_KILL"));
	__LIB_1__::func_991(uLocal_873[5], joaat("HONOR_EVENT_AMBIENT_KILL"));
	AITRANSPORT::_0xBA8818212633500A(iLocal_142, 0, 1);
	__LIB_3__::func_285(uLocal_873[0], &Local_314, 0);
	__LIB_3__::func_285(uLocal_873[1], &Local_314, 0);
	__LIB_3__::func_285(uLocal_873[4], &Local_314, 0);
	ENTITY::_SET_ENTITY_HEALTH(uLocal_873[5], 10, 0);
	PED::_0xF7EA250B9A919E03(joaat("CARRY_ANIMAL_LARGE_SHOULDER"), uLocal_873[0]);
	PED::_0xF7EA250B9A919E03(joaat("CARRY_ANIMAL_LARGE_SHOULDER"), uLocal_873[1]);
	LAW::_0x362086B911657B1A(PLAYER::PLAYER_ID(), 1);
	PED::_0xAAB050DA48B57978(uLocal_873[4], "Default_Scared", 0, -1, 4);
	__LIB_1__::func_991(uLocal_873[0], 0);
	__LIB_1__::func_991(uLocal_873[1], 0);
	__LIB_1__::func_991(uLocal_873[3], joaat("HONOR_EVENT_STEAL_HORSE"));
	__LIB_1__::func_991(uLocal_873[2], joaat("HONOR_EVENT_STEAL_HORSE"));
	iLocal_82 = VOLUME::_CREATE_VOLUME_BOX(vLocal_66, 0f, 0f, 0f, 2f, 2f, 2f);
	PED::_0x4C39C95AE5DB1329(iLocal_82, 0, 15);
	Local_314.f_178 = 1;
	__LIB_3__::func_579(uLocal_873[4]);
	__LIB_3__::func_579(uLocal_873[5]);
	__LIB_2__::func_463(uLocal_873[5], joaat("CONSUMABLE_CHEWING_TOBACCO_USED"), 1, 0);
	__LIB_2__::func_463(uLocal_873[4], joaat("CONSUMABLE_CHEWING_TOBACCO"), 1, 0);
}

void func_63()
{
	__LIB_2__::func_51(&(Local_314.f_5), 1);
	__LIB_2__::func_180(&(Local_314.f_5), 1);
	__LIB_2__::func_111(&(Local_314.f_5), 1);
	__LIB_2__::func_182(&(Local_314.f_5), 1);
	__LIB_2__::func_104(&(Local_314.f_5), 1);
	__LIB_2__::func_110(&(Local_314.f_5), 1);
	__LIB_2__::func_105(&(Local_314.f_5), 1);
	__LIB_2__::func_50(&(Local_314.f_5), 1);
	__LIB_2__::func_23(&(Local_314.f_5), uLocal_873[4], 0);
	__LIB_2__::func_967(&(Local_314.f_5), uLocal_873[0], uLocal_873[2], 1);
	__LIB_2__::func_967(&(Local_314.f_5), uLocal_873[1], uLocal_873[3], 1);
}

void func_64()
{
	Local_109 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_109.f_4, 64, 0, false, true);
	Local_109.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_109.f_5, 0, 0, false, true);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_109, vLocal_75, vLocal_78, 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109, "Female", uLocal_873[4], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109, "male_vic", uLocal_873[5], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109, "thug_a", uLocal_873[0], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109, "thug_b", uLocal_873[1], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109.f_1, "Female", uLocal_873[4], 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109.f_1, "player", Global_35, 0);
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_109, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_109);
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_109.f_1, true, false))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_109.f_1);
	}
	switch (iLocal_14)
	{
		case 0:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "Int_bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "action_bool", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_109, "PBL_ACTION_V1");
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_109.f_1, "PBL_GOODBYE");
			break;
		case 1:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "Int_bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "action_bool", false, false);
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_109, "PBL_ACTION_V2");
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	vVar0 = { __LIB_3__::func_179(uParam0) };
	iVar3 = func_124(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	STATS::_0xCA41E86545413B5B(7, 1221649453, -585414509, iVar3, vVar0);
	if (STATS::_0x01F4D242765C6B24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_76()
{
	switch (iLocal_892)
	{
		case 3:
			PED::_0x8B3B71C80A29A4BB(uLocal_873[4], joaat("MOODPANIC"), 6);
			break;
		case 0:
			PED::_0x8B3B71C80A29A4BB(uLocal_873[4], joaat("MOODDEFUSE"), 6);
			break;
		case 1:
			PED::_0x8B3B71C80A29A4BB(uLocal_873[4], joaat("MOODNORMAL"), 6);
			break;
		case 2:
			PED::_0x8B3B71C80A29A4BB(uLocal_873[4], joaat("MOODDEAD"), 6);
			break;
	}
	switch (iLocal_893)
	{
		case 1:
			PED::_0x8B3B71C80A29A4BB(uLocal_873[5], joaat("MOODPANIC"), 6);
			break;
		case 0:
			PED::_0x8B3B71C80A29A4BB(uLocal_873[5], joaat("MOODDEAD"), 6);
			break;
	}
	switch (iLocal_894)
	{
		case 1:
			PED::_0x8B3B71C80A29A4BB(uLocal_873[0], joaat("MOODANGRY"), 6);
			PED::_0x8B3B71C80A29A4BB(uLocal_873[1], joaat("MOODANGRY"), 6);
			break;
		case 0:
			PED::_0x8B3B71C80A29A4BB(uLocal_873[0], joaat("MOODDEAD"), 6);
			PED::_0x8B3B71C80A29A4BB(uLocal_873[1], joaat("MOODDEAD"), 6);
			break;
	}
}

void func_77()
{
	if (iLocal_926 == -1)
	{
		iLocal_926 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS_NEW"), uLocal_873[0], 0f, 50f, 50f, 50f, -1f, 180f, false, false, -1, -1);
	}
}

void func_78()
{
	if (!bLocal_1137)
	{
		if (!bLocal_1136)
		{
			if (func_221())
			{
				func_222(1);
				bLocal_1136 = true;
			}
		}
		else if (func_221())
		{
			if (!bLocal_1139)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_873[4], Global_35, 1, 1))
				{
					bLocal_1139 = true;
				}
			}
			if (!bLocal_1140)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_873[0], Global_35, 1, 1))
				{
					bLocal_1140 = true;
				}
			}
		}
		else
		{
			func_222(0);
			if (bLocal_1139 && bLocal_1140)
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_873[4]);
			}
			bLocal_1136 = false;
			bLocal_1137 = true;
		}
	}
}

void func_79()
{
	var uVar0;
	if (iLocal_14 == 0 && !bLocal_1144)
	{
		if (func_223())
		{
			__LIB_2__::func_571(&(Local_314.f_5), &uVar0);
			bLocal_1144 = true;
		}
	}
}

bool func_80()
{
	if (Local_314.f_46 == 0)
	{
		if ((__LIB_4__::func_8(&uLocal_873, &(Local_314.f_5), &iLocal_1134, &uLocal_923, 0, 3, 1) || (PED::IS_PED_IN_COMBAT(Global_35, 0) && (iLocal_887 == 4 || iLocal_887 == 5))) || func_226())
		{
			Local_314.f_46 = 1;
			func_227();
			func_228(6);
			return true;
		}
	}
	return false;
}

void func_82()
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = -1;
	iVar1 = -1;
	iVar2 = -1;
	if ((iLocal_887 != 6 || __LIB_2__::func_402(&(uLocal_873[1]), 1, 0, 0)) || __LIB_2__::func_402(&(uLocal_873[0]), 1, 0, 0))
	{
		iVar0 = func_231(&(uLocal_873[1]), &(Local_144[1 /*21*/]), func_230(uLocal_873[1]), &Local_187, &(Local_314.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		iVar1 = func_231(&(uLocal_873[0]), &(Local_144[0 /*21*/]), func_230(uLocal_873[0]), &Local_187, &(Local_314.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	if (iLocal_942 == 0)
	{
		iVar2 = func_231(&(uLocal_873[4]), &iLocal_239, func_230(uLocal_873[4]), &Local_260, &(Local_314.f_192), 0f, 1, 0, 0, iLocal_1128, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_889)
	{
		case 0:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar0)
					{
						case 1:
							__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
							iLocal_890 = 2;
							break;
					}
					switch (iVar1)
					{
						case 1:
							__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 2:
					iLocal_969 = 1;
					func_232(uLocal_873[0], Global_35, &uLocal_117, -1, 50, 51);
					func_232(uLocal_873[1], Global_35, &uLocal_117, -1, 50, 51);
					if (__LIB_2__::func_227(0f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[1], Global_35, "", 1.5f))
						{
							iLocal_889 = 9;
							func_228(6);
						}
					}
					break;
				case 3:
					iLocal_889 = 1;
					iLocal_890 = 0;
					Local_187[0 /*17*/].f_13 = func_161(98);
					__LIB_2__::func_360(&(Local_187[0 /*17*/]), "RE_INTER_DEFUSE");
					Local_187[1 /*17*/].f_13 = func_161(99);
					__LIB_2__::func_360(&(Local_187[1 /*17*/]), "INTERACT_INTERVENE");
					break;
			}
			break;
		case 1:
			switch (iLocal_890)
			{
				case 0:
					if (__LIB_0__::func_264(&uLocal_1037) >= 10f)
					{
						__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
					}
					else if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_873[0]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uLocal_873[1])) || __LIB_2__::func_401(uLocal_873[0], 1, 0, 0, 0, 0)) || __LIB_2__::func_401(uLocal_873[1], 1, 0, 0, 0, 0))
					{
						__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
					}
					else
					{
						__LIB_2__::func_411(&(Local_187[0 /*17*/]), 1, 0);
					}
					switch (iVar0)
					{
						case 0:
							__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
							iLocal_890 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 1:
					func_232(uLocal_873[0], Global_35, &uLocal_117, -1, 50, 51);
					func_232(uLocal_873[1], Global_35, &uLocal_117, -1, 50, 51);
					if (__LIB_2__::func_227(0f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[1], Global_35, func_161(100), 0f) && iLocal_967 == 0)
						{
							iLocal_967 = 1;
							func_228(6);
							iLocal_890 = 3;
						}
					}
					break;
				case 2:
					func_232(uLocal_873[0], Global_35, &uLocal_117, -1, 50, 51);
					func_232(uLocal_873[1], Global_35, &uLocal_117, -1, 50, 51);
					if (__LIB_2__::func_227(0f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[1], Global_35, func_161(101), 0f) && iLocal_967 == 0)
						{
							iLocal_967 = 1;
							func_228(6);
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					iLocal_889 = 8;
					iLocal_890 = 0;
					break;
			}
			break;
		case 2:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 0:
							__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[4], Global_35, func_161(110), 0f))
						{
							iLocal_946 = 1;
							iLocal_890 = 3;
						}
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[4], Global_35, func_161(111), 0f))
						{
							iLocal_947 = 1;
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					if (iLocal_946 == 1)
					{
						__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
						iLocal_889 = 4;
						iLocal_890 = 0;
					}
					if (iLocal_947 == 1)
					{
						__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
						iLocal_889 = 3;
						iLocal_890 = 0;
					}
					break;
			}
			break;
		case 3:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 0:
							__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
							iLocal_890 = 1;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[4], Global_35, func_161(110), 0f))
						{
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					iLocal_889 = 8;
					break;
			}
			break;
		case 4:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 1:
							__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[4], Global_35, func_161(111), 0f))
						{
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					iLocal_889 = 8;
					break;
			}
			break;
		case 5:
			switch (iVar2)
			{
				case 0:
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_873[4]);
					if (__LIB_4__::func_30(uLocal_873[4], 90f, 0))
					{
						TASK::TASK_PLAY_ANIM(Global_35, Local_701[0 /*2*/], Local_701[6 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					iLocal_935 = 1;
					iLocal_904 = 3;
					iLocal_889 = 6;
					iLocal_890 = 0;
					__LIB_2__::func_451(&iLocal_239, 0);
					__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
					__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
					__LIB_2__::func_360(&(Local_260[0 /*17*/]), "BEAT_GRT_POS");
					Local_260[1 /*17*/].f_13 = func_161(112);
					__LIB_2__::func_360(&(Local_260[1 /*17*/]), "BEAT_GRT_NEG");
					iLocal_1128 = __LIB_2__::func_340(3, 0, 0);
					__LIB_1__::func_471(&(Local_260[0 /*17*/]), 8);
					__LIB_1__::func_471(&(Local_260[1 /*17*/]), 8);
					break;
				case 1:
					TASK::CLEAR_PED_SECONDARY_TASK(uLocal_873[4]);
					if (__LIB_4__::func_30(uLocal_873[4], 90f, 0))
					{
						TASK::TASK_PLAY_ANIM(Global_35, Local_701[0 /*2*/], Local_701[7 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 0, false, 0, false);
					}
					iLocal_935 = 1;
					iLocal_904 = 7;
					Local_260[0 /*17*/].f_13 = func_161(102);
					__LIB_2__::func_360(&(Local_260[0 /*17*/]), "RE_INTER_POS");
					Local_260[1 /*17*/].f_13 = func_161(103);
					__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
					__LIB_2__::func_451(&iLocal_239, 0);
					__LIB_1__::func_471(&(Local_260[0 /*17*/]), 8);
					__LIB_1__::func_471(&(Local_260[1 /*17*/]), 8);
					iLocal_1128 = __LIB_2__::func_340(3, 0, 0);
					if (MAP::DOES_BLIP_EXIST(iLocal_880[4]))
					{
						MAP::REMOVE_BLIP(&(iLocal_880[4]));
					}
					break;
			}
			break;
		case 6:
			func_240();
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 1:
							iLocal_974 = 1;
							iLocal_890 = 2;
							break;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (iLocal_983 == 0)
						{
							if (func_234(uLocal_873[4], Global_35, func_161(114), 0f))
							{
								iLocal_890 = 3;
							}
						}
						else if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
						{
							if (func_234(uLocal_873[4], Global_35, func_161(115), 0f))
							{
								iLocal_890 = 3;
							}
						}
					}
					break;
				case 3:
					if (MAP::DOES_BLIP_EXIST(iLocal_880[4]))
					{
						MAP::REMOVE_BLIP(&(iLocal_880[4]));
					}
					if (MAP::DOES_BLIP_EXIST(iLocal_997))
					{
						MAP::REMOVE_BLIP(&iLocal_997);
					}
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						iLocal_889 = 7;
						iLocal_890 = 0;
						__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
						__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
						Local_260[0 /*17*/].f_13 = func_161(102);
						Local_260[1 /*17*/].f_13 = func_161(103);
						__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
						__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
						func_228(9);
						if (iLocal_986 == 0)
						{
							__LIB_1__::func_715(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
							iLocal_986 = 1;
						}
						if (iLocal_936 == 1)
						{
							UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
						}
					}
					break;
			}
			break;
		case 7:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar2)
					{
						case 0:
							__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
							__LIB_2__::func_451(&iLocal_239, 0);
							iLocal_1128 = __LIB_2__::func_340(3, 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
							__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
							__LIB_2__::func_451(&iLocal_239, 0);
							iLocal_1128 = __LIB_2__::func_340(3, 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 1:
					if (func_242(uLocal_873[4]) && !func_242(Global_35))
					{
						iLocal_890 = 3;
					}
					else if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[4], Global_35, func_161(104), 0f))
						{
							iLocal_890 = 3;
						}
					}
					break;
				case 2:
					if (func_242(uLocal_873[4]) && !func_242(Global_35))
					{
						iLocal_890 = 3;
					}
					else if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[4], Global_35, func_161(105), 0f))
						{
							iLocal_890 = 3;
						}
					}
					break;
				case 3:
					break;
			}
			break;
		case 8:
			__LIB_2__::func_411(&(Local_187[2 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_260[2 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
			break;
		case 9:
			break;
	}
}

void func_83()
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = -1;
	if ((iLocal_887 != 6 || __LIB_2__::func_402(&(uLocal_873[1]), 1, 0, 0)) || __LIB_2__::func_402(&(uLocal_873[0]), 1, 0, 0))
	{
		iVar0 = func_231(&(uLocal_873[1]), &(Local_144[1 /*21*/]), func_230(uLocal_873[1]), &Local_187, &(Local_314.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		iVar1 = func_231(&(uLocal_873[0]), &(Local_144[0 /*21*/]), func_230(uLocal_873[0]), &Local_187, &(Local_314.f_192), 0f, 1, 0, 0, __LIB_2__::func_340(3, 0, 0) | 524288, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
	}
	switch (iLocal_889)
	{
		case 0:
			switch (iLocal_890)
			{
				case 0:
					switch (iVar0)
					{
						case 0:
							iLocal_890 = 3;
							break;
						case 1:
							iLocal_890 = 3;
							break;
					}
					switch (iVar1)
					{
						case 0:
							iLocal_890 = 3;
							break;
						case 1:
							iLocal_890 = 3;
							break;
					}
					break;
				case 3:
					func_232(uLocal_873[0], Global_35, &uLocal_117, -1, 50, 51);
					func_232(uLocal_873[1], Global_35, &uLocal_117, -1, 50, 51);
					if (__LIB_2__::func_227(0f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						if (func_234(uLocal_873[1], Global_35, func_161(20), 2f))
						{
							iLocal_969 = 1;
							iLocal_889 = 1;
							__LIB_1__::func_148(&uLocal_1037);
							__LIB_3__::func_158(&(Local_187[0 /*17*/]), 0);
							__LIB_3__::func_158(&(Local_187[1 /*17*/]), 0);
							__LIB_2__::func_411(&(Local_187[0 /*17*/]), 1, 0);
							__LIB_2__::func_411(&(Local_187[1 /*17*/]), 1, 0);
							iLocal_890 = 0;
							Local_187[0 /*17*/].f_13 = func_161(98);
							__LIB_2__::func_360(&(Local_187[0 /*17*/]), "RE_INTER_DEFUSE");
							Local_187[1 /*17*/].f_13 = func_161(99);
							__LIB_2__::func_360(&(Local_187[1 /*17*/]), "RE_INTER_ANTAGONIZE");
						}
					}
					break;
			}
			break;
		case 1:
			switch (iLocal_890)
			{
				case 0:
					if (__LIB_0__::func_264(&uLocal_1037) >= 20f)
					{
						__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
					}
					switch (iVar0)
					{
						case 0:
							__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							__LIB_2__::func_504(uLocal_873[0], 500);
							__LIB_2__::func_504(uLocal_873[1], 500);
							__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
							iLocal_890 = 2;
							break;
					}
					switch (iVar1)
					{
						case 0:
							__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
							iLocal_890 = 1;
							break;
						case 1:
							__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
							iLocal_890 = 2;
							break;
					}
					break;
				case 1:
					if (__LIB_2__::func_227(0f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						iLocal_890 = 3;
					}
					break;
				case 2:
					if (__LIB_2__::func_227(0f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
					{
						func_228(6);
						iLocal_890 = 3;
					}
					break;
				case 3:
					break;
			}
			break;
		case 8:
			__LIB_2__::func_411(&(Local_187[2 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_187[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_187[1 /*17*/]), 0, 0);
			break;
		case 9:
			break;
	}
}

void func_85()
{
	float fVar0;
	func_246();
	if (!__LIB_0__::func_75(&uLocal_1031))
	{
		__LIB_1__::func_148(&uLocal_1031);
	}
	func_28(1);
	switch (iLocal_14)
	{
		case 0:
			func_248();
			break;
		case 1:
			func_249();
			break;
	}
	fVar0 = 80f;
	switch (Local_314.f_51.f_4)
	{
		case 1:
			fVar0 = 50f;
			break;
	}
	if (func_250(&Local_314, 1f, 200f, fVar0, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 1125515264 /* Float: 150f */, 0, 0) || (__LIB_0__::func_264(&uLocal_1031) >= 30f && __LIB_2__::func_118(uLocal_873[4], 1, 1) <= 120f))
	{
		if (iLocal_14 == 0 || iLocal_908 > 1)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "Int_bool", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_109, "action_bool", true, false);
			iLocal_1000 = func_251(Local_314.f_51, 250f);
			if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1000))
			{
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_1000, 4096, 0, 0, -1, -1, 0);
			}
			ANIMSCENE::_0xDF7B5144E25CD3FE(Local_109, "PBL_BREAKOUT");
			switch (iLocal_14)
			{
				case 0:
					func_228(1);
					break;
				case 1:
					func_228(2);
					break;
			}
		}
	}
}

void func_86()
{
	func_252();
	PED::_0x06D26A96CA1BCA75(uLocal_873[3], 3, 0.2f, 0);
	PED::_0x06D26A96CA1BCA75(uLocal_873[2], 3, 0.2f, 0);
	if (!func_253())
	{
		func_254();
		if (!__LIB_0__::func_163(uLocal_873[1], 1868526510) && fLocal_929 > 0.8f)
		{
			TASK::TASK_MOUNT_ANIMAL(uLocal_873[1], uLocal_873[2], 20000, -1, 1f, 536870912, 0, 0);
		}
	}
	else
	{
		func_255();
		func_232(uLocal_873[0], Global_35, &uLocal_117, -1, 15, 51);
		func_232(uLocal_873[1], Global_35, &uLocal_117, -1, 15, 51);
	}
	if (PED::IS_PED_SHOOTING(uLocal_873[1]))
	{
		__LIB_2__::func_315(1066055203, uLocal_873[1], 1);
	}
	if (fLocal_929 >= 0.95f)
	{
		func_228(3);
	}
}

void func_87()
{
	PED::_0x06D26A96CA1BCA75(uLocal_873[3], 3, 0.2f, 0);
	PED::_0x06D26A96CA1BCA75(uLocal_873[2], 3, 0.2f, 0);
	if (PED::IS_PED_SHOOTING(uLocal_873[1]))
	{
		__LIB_2__::func_315(1066055203, uLocal_873[1], 1);
	}
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_873[4], true) && PED::IS_PED_DEAD_OR_DYING(uLocal_873[5], true)) || fLocal_929 >= 0.99f)
	{
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
		TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[3], 20000, -1, 1f, 536870912, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_873[0], iLocal_993);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
		TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[2], 20000, -1, 1f, 536870912, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
		TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[1], iLocal_994, 0.5f, 0.5f);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
		func_228(5);
	}
}

void func_88()
{
	func_252();
	if (!func_253())
	{
		func_257();
		if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uLocal_873[1], true) && !__LIB_0__::func_163(uLocal_873[1], 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(uLocal_873[1], uLocal_873[2], 20000, -1, 1f, 536870912, 0, 0);
		}
		if (PED::IS_PED_ON_MOUNT(uLocal_873[1]) && iLocal_969 == 0)
		{
			func_232(uLocal_873[1], uLocal_873[0], &uLocal_117, 7000, 8, 11);
		}
	}
	else
	{
		func_255();
		func_232(uLocal_873[0], Global_35, &uLocal_117, -1, 15, 51);
		func_232(uLocal_873[1], Global_35, &uLocal_117, -1, 15, 51);
	}
	if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uLocal_873[0], true) && PED::_GET_CARRIER_AS_HUMAN(uLocal_873[4]) == uLocal_873[0])
	{
		if (!__LIB_0__::func_163(uLocal_873[0], 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
			TASK::TASK_PLACE_CARRIED_ENTITY_ON_MOUNT(0, uLocal_873[4], uLocal_873[3], 1f);
			TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[3], 20000, -1, 1f, 536870912, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_873[0], iLocal_993);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
		}
	}
	if (PED::IS_PED_ON_MOUNT(uLocal_873[0]) && PED::IS_PED_ON_MOUNT(uLocal_873[1]))
	{
		func_228(4);
	}
}

void func_89()
{
	Local_314.f_44 = 1;
	iLocal_970 = 1;
	func_252();
	func_258();
	func_259();
	if (!__LIB_0__::func_75(&uLocal_1034))
	{
		__LIB_1__::func_148(&uLocal_1034);
	}
	if (iLocal_972 == 0 && __LIB_0__::func_265(&uLocal_1034) >= 8f)
	{
		iLocal_972 = 1;
		__LIB_1__::func_715(3, 0, 0, "RE_HONOR_IGNORED_VICTIM", uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_873[0], true, false), 2401.58f, 1235.54f, 102.94f, true) <= 80f)
	{
		iLocal_977 = 1;
	}
	if (!func_253() && iLocal_954 == 0)
	{
		if (func_257())
		{
			if (func_261() || func_262())
			{
				if (func_166())
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_873[0], true, false), vLocal_63, true) <= 200f)
					{
						func_263();
					}
				}
			}
		}
	}
	else
	{
		if (func_166())
		{
			switch (iLocal_900)
			{
				case 0:
					if (iLocal_977 == 1 && iLocal_954 == 0)
					{
						iLocal_900 = 1;
					}
					else
					{
						func_255();
					}
					break;
				case 1:
					if (func_262() && iLocal_954 == 0)
					{
						iLocal_900 = 2;
					}
					else
					{
						func_264();
					}
					break;
				case 2:
					func_265();
					break;
				case 3:
					break;
			}
		}
		else
		{
			func_255();
		}
		func_232(uLocal_873[0], Global_35, &uLocal_117, -1, 15, 51);
		func_232(uLocal_873[1], Global_35, &uLocal_117, -1, 15, 51);
	}
	if ((PED::_IS_PED_HOGTIED(uLocal_873[4]) && __LIB_3__::func_649(Global_35, uLocal_873[4])) && func_267())
	{
		__LIB_2__::func_788(&(uLocal_873[0]), 1, 0, 1);
		__LIB_2__::func_788(&(uLocal_873[1]), 1, 0, 1);
		iLocal_880[4] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_873[4]);
		PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 6, false);
		__LIB_1__::func_148(&uLocal_1007);
		iLocal_889 = 2;
		iLocal_890 = 0;
		__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
		__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
		__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
		__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
		Local_260[0 /*17*/].f_13 = func_161(108);
		Local_260[1 /*17*/].f_13 = func_161(109);
		func_228(7);
		iLocal_892 = 0;
	}
	if (!func_80())
	{
		func_269();
	}
}

void func_90()
{
	Local_314.f_44 = 1;
	iLocal_970 = 1;
	func_252();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_873[0], true, false), 2401.58f, 1235.54f, 102.94f, true) <= 80f)
	{
		iLocal_977 = 1;
	}
	if (!func_253() && iLocal_954 == 0)
	{
		if (!PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uLocal_873[1], true) && !__LIB_0__::func_163(uLocal_873[1], 1868526510))
		{
			TASK::TASK_MOUNT_ANIMAL(uLocal_873[1], uLocal_873[2], 20000, -1, 1f, 536870912, 0, 0);
		}
		if (func_270() || func_262())
		{
			if (func_166())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_873[0], true, false), vLocal_63, true) <= 200f)
				{
					func_271();
				}
			}
		}
	}
	else
	{
		if (func_166())
		{
			switch (iLocal_900)
			{
				case 0:
					func_272();
					if (iLocal_977 == 1 && iLocal_954 == 0)
					{
						iLocal_900 = 1;
					}
					break;
				case 1:
					func_273();
					if (func_262() && iLocal_954 == 0)
					{
						iLocal_900 = 2;
					}
					break;
				case 2:
					func_274();
					break;
				case 3:
					break;
			}
		}
		else
		{
			func_272();
		}
		func_232(uLocal_873[0], Global_35, &uLocal_117, -1, 15, 51);
		func_232(uLocal_873[1], Global_35, &uLocal_117, -1, 15, 51);
	}
	if (!func_80())
	{
		func_275();
	}
}

void func_91()
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (__LIB_0__::func_264(&uLocal_1004) >= 1f)
	{
		func_276();
		func_277();
	}
	func_278();
	func_28(0);
	func_227();
	ENTITY::_0x18FF3110CF47115D(uLocal_873[4], 1, 0);
	iLocal_944 = 1;
	Local_314.f_44 = 1;
	if (iLocal_14 == 0)
	{
		if (func_267())
		{
			if (__LIB_3__::func_649(Global_35, uLocal_873[4]) || (PED::IS_PED_ON_MOUNT(Global_35) && __LIB_3__::func_649(PED::GET_MOUNT(Global_35), uLocal_873[4])))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_873[0], Global_35, 3, 128, -1082130432 /* Float: -1f */, -1, 0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_873[1], Global_35, 3, 128, -1082130432 /* Float: -1f */, -1, 0);
				MAP::REMOVE_BLIP(&(iLocal_880[0]));
				MAP::REMOVE_BLIP(&(iLocal_880[1]));
				iLocal_880[4] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_873[4]);
				PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 6, false);
				__LIB_1__::func_148(&uLocal_1007);
				iLocal_889 = 2;
				iLocal_890 = 0;
				__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
				Local_260[0 /*17*/].f_13 = func_161(108);
				Local_260[1 /*17*/].f_13 = func_161(109);
				func_228(7);
				iLocal_892 = 0;
			}
		}
	}
	if (!PED::IS_PED_ON_MOUNT(uLocal_873[0]) && !PED::_IS_PED_CARRYING(uLocal_873[3]))
	{
		if (!__LIB_0__::func_163(uLocal_873[3], 242628503))
		{
			if ((PED::_0x285D36C5C72B0569(uLocal_873[0]) <= 1f || PED::_0x285D36C5C72B0569(uLocal_873[1]) <= 1f) || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
				TASK::OPEN_SEQUENCE_TASK(&iVar0);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar0);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_873[3], iVar0);
				TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			}
		}
	}
	if (!PED::IS_PED_ON_MOUNT(uLocal_873[1]) && !PED::_IS_PED_CARRYING(uLocal_873[3]))
	{
		if (!__LIB_0__::func_163(uLocal_873[2], 242628503))
		{
			if ((PED::_0x285D36C5C72B0569(uLocal_873[0]) <= 1f || PED::_0x285D36C5C72B0569(uLocal_873[1]) <= 1f) || PED::_0x285D36C5C72B0569(Global_35) <= 1f)
			{
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
				TASK::OPEN_SEQUENCE_TASK(&iVar1);
				TASK::_TASK_SMART_FLEE_STYLE_PED(0, Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar1);
				TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[2], iVar1, 1f, 1f);
				TASK::CLEAR_SEQUENCE_TASK(&iVar1);
			}
		}
	}
	if (!PED::IS_PED_ON_MOUNT(uLocal_873[0]) && PED::_IS_PED_CARRYING(uLocal_873[3]))
	{
		PED::_0x06D26A96CA1BCA75(uLocal_873[3], 3, 0.2f, 0);
		if (!__LIB_0__::func_163(uLocal_873[3], -982327190))
		{
			TASK::TASK_STAND_STILL(uLocal_873[3], -1);
		}
	}
	if (!PED::IS_PED_ON_MOUNT(uLocal_873[1]) && PED::_IS_PED_CARRYING(uLocal_873[2]))
	{
		PED::_0x06D26A96CA1BCA75(uLocal_873[2], 3, 0.2f, 0);
		if (!__LIB_0__::func_163(uLocal_873[2], -982327190))
		{
			TASK::TASK_STAND_STILL(uLocal_873[2], -1);
		}
	}
	if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_873[4], Local_701[12 /*2*/], Local_701[12 /*2*/].f_1) >= 0.95f || !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_873[4], Local_701[12 /*2*/], Local_701[12 /*2*/].f_1, 1))
	{
		iLocal_956 = 1;
	}
	if (iLocal_956 == 1)
	{
		if (!PED::IS_PED_RAGDOLL(uLocal_873[4]) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(uLocal_873[4]))
		{
			if (iLocal_952 == 0)
			{
				iLocal_952 = 1;
				if (!ENTITY::DOES_ENTITY_EXIST(PED::_GET_CARRIER_AS_PED(uLocal_873[4])))
				{
					__LIB_2__::func_919(uLocal_873[4], 1, 1);
					TASK::TASK_CARRIABLE(uLocal_873[4], ENTITY::_GET_OPTIMAL_CARRY_CONFIG(uLocal_873[4], 1), 0, 0, 1);
					PED::SET_PED_KEEP_TASK(uLocal_873[4], true);
				}
			}
		}
	}
	if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[5], true) && !__LIB_0__::func_163(uLocal_873[5], 242628503))
	{
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
		TASK::OPEN_SEQUENCE_TASK(&iVar2);
		TASK::_TASK_SMART_FLEE_STYLE_PED(0, uLocal_873[1], 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(iVar2);
		TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[5], iVar2, 0.1f, 0.1f);
		TASK::CLEAR_SEQUENCE_TASK(&iVar2);
	}
	if (iLocal_14 == 1)
	{
		if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[4], true) && !__LIB_0__::func_163(uLocal_873[4], 242628503))
		{
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
			TASK::_TASK_SMART_FLEE_STYLE_PED(0, uLocal_873[1], 4, 0, -1082130432 /* Float: -1f */, -1, 0);
			TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[4], iLocal_995, 0.5f, 0.5f);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
		}
	}
	if ((func_223() && iLocal_970 == 0) || ((func_223() && iLocal_970 == 1) && !PED::IS_PED_IN_COMBAT(Global_35, 0)))
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 6, false);
		__LIB_1__::func_148(&uLocal_1007);
		if (PED::IS_PED_DEAD_OR_DYING(uLocal_873[0], true) && PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true))
		{
			iLocal_894 = 0;
		}
		if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[4], true))
		{
			if (!PED::_IS_PED_HOGTIED(uLocal_873[4]))
			{
				__LIB_2__::func_919(uLocal_873[4], 1, 1);
				TASK::TASK_CARRIABLE(uLocal_873[4], joaat("HOGTIED_PED"), 0, 0, 0);
			}
		}
		if (iLocal_14 == 0)
		{
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[4], true))
			{
				iLocal_880[4] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_873[4]);
				iLocal_889 = 2;
				iLocal_890 = 0;
				__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
				Local_260[0 /*17*/].f_13 = func_161(108);
				Local_260[1 /*17*/].f_13 = func_161(109);
				__LIB_1__::func_715(13, 0, 0, "RE_HONOR_SAVED_VICTIM", uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
				func_228(7);
				__LIB_1__::func_148(&uLocal_1071);
				__LIB_1__::func_148(&uLocal_1074);
				iLocal_892 = 0;
			}
			else
			{
				func_228(11);
			}
		}
		else
		{
			func_228(11);
		}
	}
}

void func_92()
{
	float fVar0;
	float fVar1;
	int iVar2;
	ENTITY::_0x18FF3110CF47115D(uLocal_873[4], 1, 1);
	func_258();
	func_259();
	if (!PED::IS_PED_ON_MOUNT(uLocal_873[0]) && PED::_IS_PED_CARRYING(uLocal_873[3]))
	{
		if (!__LIB_0__::func_163(uLocal_873[3], -982327190))
		{
			TASK::TASK_STAND_STILL(uLocal_873[3], -1);
		}
	}
	if (!PED::IS_PED_ON_MOUNT(uLocal_873[1]) && PED::_IS_PED_CARRYING(uLocal_873[2]))
	{
		if (!__LIB_0__::func_163(uLocal_873[2], -982327190))
		{
			TASK::TASK_STAND_STILL(uLocal_873[2], -1);
		}
	}
	func_28(0);
	if (ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(uLocal_873[4], Local_701[12 /*2*/], Local_701[12 /*2*/].f_1) >= 0.95f)
	{
		if (iLocal_952 == 0)
		{
			iLocal_952 = 1;
			__LIB_2__::func_919(uLocal_873[4], 1, 1);
			TASK::TASK_CARRIABLE(uLocal_873[4], ENTITY::_GET_OPTIMAL_CARRY_CONFIG(uLocal_873[4], 1), 0, 0, 0);
			PED::SET_PED_KEEP_TASK(uLocal_873[4], true);
		}
	}
	if (iLocal_981 == 0)
	{
		if (PED::_IS_PED_HOGTIED(uLocal_873[4]))
		{
			iLocal_981 = 1;
		}
	}
	if (iLocal_949 == 0 && iLocal_981 == 1)
	{
		if (func_280(Global_35) == uLocal_873[4] || !PED::_IS_PED_HOGTIED(uLocal_873[4]))
		{
			iLocal_949 = 1;
			PED::_0x6569F31A01B4C097(uLocal_873[4], 0, 1);
			PED::_0x6569F31A01B4C097(uLocal_873[4], 1, 1);
			PED::SET_PED_CONFIG_FLAG(Global_35, 448, false);
			PED::SET_PED_RESET_FLAG(Global_35, 318, true);
			iLocal_989 = 1;
			__LIB_3__::func_911(uLocal_873[4], Global_35, &uLocal_1090, -1082130432 /* Float: -1f */, 0, 0, -1082130432 /* Float: -1f */, 6.5f, 1, 256, 0, 0, 1069547520 /* Float: 1.5f */, 1073741824 /* Float: 2f */, 1050253722 /* Float: 0.3f */, 1067030938 /* Float: 1.2f */, 0, 0, -1, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 1);
			__LIB_1__::func_148(&uLocal_1019);
			__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
			__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
		}
	}
	if ((PED::_IS_PED_HOGTIED(uLocal_873[4]) && ENTITY::_0x61914209C36EFDDB(uLocal_873[4]) == 7) && iLocal_931 == 1)
	{
		iLocal_931 = 0;
		iLocal_906 = 0;
	}
	if ((PED::_IS_PED_HOGTIED(uLocal_873[4]) && ENTITY::_0x61914209C36EFDDB(uLocal_873[4]) == 5) && iLocal_932 == 1)
	{
		iLocal_932 = 0;
		iLocal_906 = 4;
	}
	if ((PED::_IS_PED_HOGTIED(uLocal_873[4]) && ENTITY::_0x61914209C36EFDDB(uLocal_873[4]) == 3) && iLocal_933 == 1)
	{
		iLocal_933 = 0;
		iLocal_906 = 8;
	}
	if (((PED::_IS_PED_HOGTIED(uLocal_873[4]) && ENTITY::_0x61914209C36EFDDB(uLocal_873[4]) == 6) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uLocal_873[4]) < 0.9f) && iLocal_934 == 1)
	{
		iLocal_934 = 0;
		iLocal_906 = 12;
	}
	if (PED::_IS_PED_HOGTIED(uLocal_873[4]) && __LIB_0__::func_264(&uLocal_1007) >= 2f)
	{
		if (__LIB_2__::func_118(uLocal_873[4], 1, 1) <= 50f)
		{
			iLocal_975 = 1;
		}
		if ((iLocal_975 == 1 && iLocal_949 == 0) && !__LIB_4__::func_484(uLocal_873[4], __LIB_2__::func_825(Global_35)))
		{
			func_284(iLocal_906);
		}
	}
	func_285();
	if (iLocal_938 == 1 && !PED::_IS_PED_HOGTIED(uLocal_873[4]))
	{
		if (MAP::DOES_BLIP_EXIST(iLocal_880[4]))
		{
			MAP::REMOVE_BLIP(&(iLocal_880[4]));
		}
		WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
		TASK::CLEAR_PED_SECONDARY_TASK(uLocal_873[4]);
		__LIB_2__::func_593(&iLocal_239, &Local_260);
		__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
		__LIB_2__::func_411(&(Local_260[1 /*17*/]), 0, 0);
		__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(74), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		fVar0 = __LIB_0__::func_665(uLocal_873[4], uLocal_873[2], 1, 1);
		fVar1 = __LIB_0__::func_665(uLocal_873[4], uLocal_873[3], 1, 1);
		iVar2 = 0;
		if (fVar0 >= fVar1)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = 1;
		}
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
		if (PED::IS_PED_ON_MOUNT(uLocal_873[4]))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
		}
		if ((!PED::IS_PED_DEAD_OR_DYING(uLocal_873[2], true) && iVar2 == 1) && __LIB_0__::func_665(uLocal_873[4], uLocal_873[2], 1, 1) <= 50f)
		{
			TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[2], -1, -1, 1.5f, 8388608, 0, 0);
		}
		if ((!PED::IS_PED_DEAD_OR_DYING(uLocal_873[3], true) && iVar2 == 0) && __LIB_0__::func_665(uLocal_873[4], uLocal_873[3], 1, 1) <= 50f)
		{
			TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[3], -1, -1, 1.5f, 8388608, 0, 0);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC(0, -1f, 512, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_873[4], iLocal_995);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
		func_228(11);
	}
	if (iLocal_949 == 1 && iLocal_938 == 0)
	{
		if (!PED::_IS_PED_HOGTIED(uLocal_873[4]))
		{
			func_287();
			func_288();
			if (iLocal_948 == 0)
			{
				iLocal_948 = 1;
				WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
			}
			if (__LIB_0__::func_264(&uLocal_1010) >= 10f && iLocal_935 == 0)
			{
				func_289();
			}
		}
	}
	if ((ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Local_701[0 /*2*/], Local_701[7 /*2*/].f_1, 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Local_701[0 /*2*/], Local_701[6 /*2*/].f_1, 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(Global_35, Local_701[0 /*2*/], Local_701[9 /*2*/].f_1, 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), false);
		PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ENTER"), false);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_35, 1f);
	}
	func_97();
}

void func_93()
{
	func_288();
	if (!ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_60, 50f, 50f, 10f, false, true, 0) && iLocal_939 == 0)
	{
		func_290();
	}
	if (iLocal_940 == 1 && iLocal_945 == 0)
	{
		func_291();
	}
	if (!bLocal_973)
	{
		if (func_292(Global_35) && !func_293())
		{
			__LIB_3__::func_307(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_873[4], true, false), &uLocal_1145, 1061158912 /* Float: 0.75f */, 1, Local_314.f_98[4]);
			if (Local_314.f_98[4] > 80f || __LIB_3__::func_507(&uLocal_1145, 7000))
			{
				func_23(0);
				func_296();
				return;
			}
		}
		else
		{
			func_297(&uLocal_1145);
		}
	}
	func_285();
	if (__LIB_0__::func_264(&uLocal_1001) > 15f && (!func_298() || iLocal_907 > 12))
	{
		if (func_292(uLocal_873[4]))
		{
			if (__LIB_4__::func_447(&uLocal_89, Global_35, vLocal_60) && func_292(Global_35))
			{
				func_300();
			}
			else if (__LIB_4__::func_448(&uLocal_89, func_301()))
			{
				if (func_298() == 0 && __LIB_0__::func_94(Global_35, vLocal_60, 1) > 80f)
				{
					func_303();
				}
			}
			else if (__LIB_4__::func_449(&uLocal_89, Global_35, 20, 1090519040 /* Float: 8f */) || !func_292(Global_35))
			{
				if (func_298() == 0 && __LIB_0__::func_94(Global_35, vLocal_60, 1) > 80f)
				{
					if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_873[4]))
					{
						func_305();
						if (ENTITY::IS_ENTITY_IN_WATER(iLocal_998) && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iLocal_998) >= 0.5f)
						{
							AUDIO::STOP_PED_SPEAKING(uLocal_873[4], true);
							__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(88), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							func_306();
							func_23(0);
							return;
						}
					}
				}
			}
			else if (iLocal_950 == 1)
			{
				if (!__LIB_0__::func_75(&uLocal_1028))
				{
					if (__LIB_2__::func_227(-4f, 1, 0, 0))
					{
						__LIB_1__::func_148(&uLocal_1028);
					}
				}
				else if (__LIB_0__::func_264(&uLocal_1028) >= 3f)
				{
					if (((iLocal_907 == 9 || iLocal_907 == 14) || iLocal_907 == 0) || __LIB_0__::func_94(Global_35, vLocal_60, 1) < 80f)
					{
						iLocal_950 = 0;
					}
					else
					{
						__LIB_0__::func_37(&uLocal_1013);
						func_308();
					}
				}
			}
			else
			{
				func_309();
			}
		}
	}
	if (!__LIB_0__::func_75(&uLocal_1043))
	{
		if (func_298())
		{
			__LIB_1__::func_148(&uLocal_1043);
		}
	}
	else if (__LIB_0__::func_264(&uLocal_1043) >= 45f)
	{
		func_310();
	}
	if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_60, 35f, 35f, 3f, false, true, 0))
	{
		iLocal_939 = 1;
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35), 1.5f);
	}
	func_311();
	if (!bLocal_973)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(Global_35, vLocal_60, 6f, 6f, 2f, false, true, 0))
		{
			bLocal_973 = true;
		}
	}
	if (bLocal_973 == 1)
	{
		if (fLocal_930 >= 0.1f)
		{
			func_96(0);
		}
		if (func_312())
		{
			if (bLocal_87)
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 2, false);
				PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
				__LIB_3__::func_552(uLocal_873[4]);
				PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 448, false);
				func_23(0);
				bLocal_87 = false;
			}
			func_313();
			func_228(12);
		}
	}
	else
	{
		func_314();
		func_315();
		POPULATION::_0xF45E46DEECF7DF6E(4096, 0, 0, -1, -1);
		if (iLocal_974 == 0)
		{
			func_316();
		}
		if (!__LIB_0__::func_75(&uLocal_1025))
		{
			__LIB_1__::func_148(&uLocal_1025);
		}
		if (!func_293() && iLocal_941 == 0)
		{
			if (__LIB_0__::func_264(&uLocal_1025) >= 30f && iLocal_945 == 0)
			{
				func_296();
				func_23(0);
				return;
			}
			if (__LIB_0__::func_264(&uLocal_1025) >= 30f && iLocal_945 == 1)
			{
				func_296();
				func_23(0);
				return;
			}
		}
	}
	func_97();
}

void func_94()
{
	float fVar0;
	float fVar1;
	int iVar2;
	func_288();
	func_285();
	func_232(uLocal_873[4], Global_35, &uLocal_117, 5000, 15, 51);
	func_232(Global_35, uLocal_873[4], &uLocal_117, 5000, 15, 51);
	if (MAP::DOES_BLIP_EXIST(iLocal_880[4]))
	{
		MAP::REMOVE_BLIP(&(iLocal_880[4]));
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_997))
	{
		MAP::REMOVE_BLIP(&iLocal_997);
	}
	fVar0 = __LIB_0__::func_665(uLocal_873[4], uLocal_873[2], 1, 1);
	fVar1 = __LIB_0__::func_665(uLocal_873[4], uLocal_873[3], 1, 1);
	iVar2 = 0;
	if (fVar0 >= fVar1)
	{
		iVar2 = 0;
	}
	else
	{
		iVar2 = 1;
	}
	if (iLocal_955 == 0)
	{
		iLocal_955 = 1;
		if (iLocal_989 == 1)
		{
			PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
			PED::SET_PED_RESET_FLAG(Global_35, 318, false);
			iLocal_989 = 0;
		}
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
		if (PED::IS_PED_ON_MOUNT(uLocal_873[4]))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
		}
		if ((!PED::IS_PED_DEAD_OR_DYING(uLocal_873[2], true) && iVar2 == 1) && __LIB_0__::func_665(uLocal_873[4], uLocal_873[2], 1, 1) <= 50f)
		{
			TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[2], -1, -1, 1f, 1, 0, 0);
		}
		if ((!PED::IS_PED_DEAD_OR_DYING(uLocal_873[3], true) && iVar2 == 0) && __LIB_0__::func_665(uLocal_873[4], uLocal_873[3], 1, 1) <= 50f)
		{
			TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[3], -1, -1, 1f, 1, 0, 0);
		}
		TASK::_TASK_MOVE_IN_TRAFFIC_2(0, 0f, 0f, 0f, 2f, 1.2f, 528, 0);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
		TASK::TASK_PERFORM_SEQUENCE(uLocal_873[4], iLocal_995);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
	}
	func_97();
}

void func_95()
{
	switch (iLocal_901)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(iLocal_880[4]))
			{
				MAP::REMOVE_BLIP(&(iLocal_880[4]));
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				MAP::REMOVE_BLIP(&iLocal_997);
			}
			iLocal_901 = 1;
			break;
		case 1:
			if (PED::IS_PED_ON_MOUNT(uLocal_873[4]))
			{
				TASK::TASK_DISMOUNT_ANIMAL(uLocal_873[4], 4096, 0, 0, 0, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(uLocal_873[4], iLocal_1129, true))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_873[4], 0, 4096);
			}
			if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_109.f_1))
			{
				if (ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_109.f_1, false))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_109.f_1, "player", Global_35);
				}
				ANIMSCENE::_DELETE_ANIM_SCENE(Local_109.f_1);
			}
			if (iLocal_988 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				iLocal_988 = 0;
			}
			iLocal_901 = 2;
			break;
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_873[4]))
			{
				if (!PED::_IS_PED_HOGTIED(uLocal_873[4]))
				{
					if (!__LIB_0__::func_394(uLocal_873[4], iLocal_1130, 0) && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_873[4], false))
					{
						TASK::_TASK_FLEE_FROM_PED(uLocal_873[4], Global_35, vLocal_60, 999f, -1, 0, 1077936128 /* Float: 3f */, 0);
						iLocal_901 = 3;
					}
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_163(uLocal_873[4], 518218985))
			{
				TASK::_TASK_FLEE_FROM_PED(uLocal_873[4], Global_35, vLocal_60, 999f, -1, 0, 1077936128 /* Float: 3f */, 0);
			}
			break;
	}
	func_285();
	func_318();
}

bool func_96(bool bParam0)
{
	switch (iLocal_910)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[4], 1))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(15), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_910++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[4], 1))
			{
				if (__LIB_2__::func_227(-4f, 1, Global_35, 1))
				{
					__LIB_2__::func_303(Global_35, uLocal_873[4], func_161(16), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_910++;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[4], 1))
			{
				if (__LIB_2__::func_227(-4f, 1, Global_35, 1))
				{
					__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(17), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1058);
					iLocal_910++;
				}
			}
			break;
		case 3:
			if (!func_292(uLocal_873[4]) || bParam0)
			{
				if ((PED::_IS_PED_OPENING_A_DOOR(uLocal_873[4]) || __LIB_0__::func_264(&uLocal_1058) > 10f) || bParam0)
				{
					if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1))
					{
						if (__LIB_2__::func_227(3f, 1, Global_35, 1))
						{
							if (__LIB_3__::func_582())
							{
								__LIB_2__::func_303(Global_35, uLocal_873[4], func_161(128), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(Global_35, uLocal_873[4], func_161(129), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							iLocal_910++;
						}
					}
				}
			}
			break;
		case 4:
			return true;
	}
	return false;
}

int func_97()
{
	if (iLocal_949 == 1)
	{
		if (((((((__LIB_3__::func_276(uLocal_873[4], 0, &(Local_314.f_5), &iLocal_1134, 0, 0) && func_321()) && iLocal_1134 != 8192) && iLocal_1134 != 256) && iLocal_1134 != 2048) || func_322()) || func_323()) || PED::_0x336B3D200AB007CB(Global_35, ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 50f, 512) > 0)
		{
			if (iLocal_942 == 0)
			{
				iLocal_942 = 1;
				__LIB_0__::func_769();
				__LIB_2__::func_593(&iLocal_239, &Local_260);
				__LIB_0__::func_8(&Global_1935630, 4);
				__LIB_1__::func_682(29);
				TASK::CLEAR_PED_SECONDARY_TASK(uLocal_873[4]);
				PED::_0xEEED8FAFEC331A70(uLocal_873[4], ENTITY::GET_ENTITY_COORDS(Global_35, true, false), 2);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_873[4], true);
				func_228(10);
				func_23(0);
				return 1;
			}
		}
	}
	else if (func_324() && iLocal_942 == 0)
	{
		iLocal_942 = 1;
		__LIB_2__::func_593(&iLocal_239, &Local_260);
		func_228(10);
		func_23(0);
	}
	return 0;
}

void func_98()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_873[4]))
	{
		func_232(uLocal_873[4], Global_35, &uLocal_117, -1, 15, 51);
	}
}

int func_124(int iParam0, int iParam1)
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
				Jump @3258; //curOff = 844
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
				Jump @3258; //curOff = 877
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
				Jump @3258; //curOff = 924
				return 1004100858;
				Jump @3258; //curOff = 935
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
				Jump @3258; //curOff = 982
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
				Jump @3258; //curOff = 1029
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
				Jump @3258; //curOff = 1090
				return 1583531269;
				Jump @3258; //curOff = 1101
				return -728402510;
				Jump @3258; //curOff = 1112
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
				Jump @3258; //curOff = 1159
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
				Jump @3258; //curOff = 1192
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
				Jump @3258; //curOff = 1253
				return 856957155;
				Jump @3258; //curOff = 1264
				return 199192985;
				Jump @3258; //curOff = 1275
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
				Jump @3258; //curOff = 1350
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
				Jump @3258; //curOff = 1397
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
				Jump @3258; //curOff = 1444
				return -1065165983;
				Jump @3258; //curOff = 1455
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
				Jump @3258; //curOff = 1516
				return -1641231995;
				Jump @3258; //curOff = 1527
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
				Jump @3258; //curOff = 1574
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
				Jump @3258; //curOff = 1621
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
				Jump @3258; //curOff = 1668
				return -800701784;
				Jump @3258; //curOff = 1679
				return -1599472750;
				Jump @3258; //curOff = 1690
				return 239043929;
				Jump @3258; //curOff = 1701
				return -1534174498;
				Jump @3258; //curOff = 1712
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
				Jump @3258; //curOff = 1759
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
				Jump @3258; //curOff = 1806
				return 1895786957;
				Jump @3258; //curOff = 1817
				return -2058137475;
				Jump @3258; //curOff = 1828
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
				Jump @3258; //curOff = 1917
				return 598461796;
				Jump @3258; //curOff = 1928
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
				Jump @3258; //curOff = 1975
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
				Jump @3258; //curOff = 2050
				return 544369376;
				Jump @3258; //curOff = 2061
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
				Jump @3258; //curOff = 2108
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
				Jump @3258; //curOff = 2155
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
				Jump @3258; //curOff = 2188
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
				Jump @3258; //curOff = 2221
				return 1602493990;
				Jump @3258; //curOff = 2232
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
				Jump @3258; //curOff = 2321
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
				Jump @3258; //curOff = 2368
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
				Jump @3258; //curOff = 2415
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
				Jump @3258; //curOff = 2462
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
				Jump @3258; //curOff = 2509
				return 1762656414;
				Jump @3258; //curOff = 2520
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
				Jump @3258; //curOff = 2581
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
				Jump @3258; //curOff = 2642
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
				Jump @3258; //curOff = 2689
				return -2018341642;
				Jump @3258; //curOff = 2700
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
				Jump @3258; //curOff = 2733
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
				Jump @3258; //curOff = 2766
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
				Jump @3258; //curOff = 2813
				return -1618254924;
				Jump @3258; //curOff = 2824
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
				Jump @3258; //curOff = 2871
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
				Jump @3258; //curOff = 2918
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
				Jump @3258; //curOff = 2951
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
				Jump @3258; //curOff = 2998
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
				Jump @3258; //curOff = 3045
				return -2137572125;
				Jump @3258; //curOff = 3056
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
				Jump @3258; //curOff = 3103
				return -774894224;
				Jump @3258; //curOff = 3114
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
				Jump @3258; //curOff = 3161
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
				Jump @3258; //curOff = 3222
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
void func_125(int iParam0, int iParam1, int iParam2)
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

char* func_161(int iParam0)
{
	if (iLocal_14 == 0)
	{
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				switch (iParam0)
				{
					case 0:
						return "RE_IK_UNI_V1_RIDING_INTRO_VHT";
					default:
						break;
				}
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				switch (iParam0)
				{
					case 0:
						return "RE_IK_UNI_V1_RIDING_INTRO_ASB";
					default:
						break;
				}
				break;
		}
		switch (iParam0)
		{
			case 36:
				return "RE_IK_UNI_V1_INITIAL_SCREAM_A";
			case 37:
				return "RE_IK_UNI_V1_INITIAL";
			case 38:
				return "RE_IK_UNI_V1_BUTSIR";
			case 39:
				return "RE_IK_UNI_V1_WERENTNICE";
			case 40:
				return "RE_IK_UNI_V1_INITIAL_SCREAM_A";
			case 41:
				return "RE_IK_UNI_V1_INITIAL_SCREAM_B";
			case 42:
				return "RE_IK_UNI_V1_INITIAL_SCREAM_C";
			case 43:
				return "RE_IK_UNI_V1_INITIAL_LAUGH";
			case 44:
				return "RE_IK_UNI_V1_OCONVO_A";
			case 45:
				return "RE_IK_UNI_V1_OCONVO_B";
			case 46:
				return "RE_IK_UNI_V1_OCONVO_C";
			case 47:
				return "RE_IK_UNI_V1_OCONVO_D";
			case 48:
				return "RE_IK_UNI_V1_OCONVO_E";
			case 49:
				return "RE_IK_UNI_V1_OCONVO_F";
			case 1:
				return "RE_IK_UNI_V1_RIDING_A";
			case 2:
				return "RE_IK_UNI_V1_RIDING_B";
			case 3:
				return "RE_IK_UNI_V1_RIDING_C";
			case 4:
				return "RE_IK_UNI_V1_RIDING_D";
			case 5:
				return "RE_IK_UNI_V1_RIDING_E";
			case 6:
				return "RE_IK_UNI_V1_RIDING_F";
			case 7:
				return "RE_IK_UNI_V1_RIDING_G";
			case 8:
				return "RE_IK_UNI_V1_RIDING_SIGH";
			case 9:
				return "RE_IK_UNI_V1_RIDING_H";
			case 10:
				return "RE_IK_UNI_V1_RIDING_I";
			case 11:
				return "RE_IK_UNI_V1_RIDING_J";
			case 12:
				return "RE_IK_UNI_V1_RIDING_K";
			case 13:
				return "RE_IK_UNI_V1_RIDING_FINAL";
			case 14:
				return "RE_IK_UNI_V1_RIDING_LAST";
			case 15:
				return "RE_IK_UNI_V1_RIDING_L";
			case 16:
				return "RE_IK_UNI_V1_RIDING_M";
			case 17:
				return "RE_IK_UNI_V1_RIDING_N";
			case 18:
				return "RE_IK_UNI_V1_WARNING_A";
			case 19:
				return "RE_IK_UNI_V1_WARNING_B";
			case 21:
				return "RE_IK_UNI_V1_CLOSE_FOLLOW";
			case 22:
				if (__LIB_2__::func_155(1, 1))
				{
					return "RE_IK_UNI_V1_WARN_AGGRO_FEUD";
				}
				else
				{
					return "RE_IK_UNI_V1_WARN_AGGRO";
				}
				break;
			case 23:
				return "RE_IK_UNI_V1_AGGRO_A";
			case 24:
				return "RE_IK_UNI_V1_AGGRO_B";
			case 25:
				return "RE_IK_UNI_V1_AGGRO_C";
			case 26:
				return "RE_IK_UNI_V1_AGGRO_D";
			case 27:
				return "RE_IK_UNI_V1_KILLED_HER";
			case 31:
				return "RE_IK_UNI_V1_AGGRO_WOMAN_A";
			case 32:
				return "RE_IK_UNI_V1_AGGRO_WOMAN_B";
			case 33:
				return "RE_IK_UNI_V1_AGGRO_WOMAN_C";
			case 34:
				return "RE_IK_UNI_V1_AGGRO_WOMAN_D";
			case 35:
				return "RE_IK_UNI_V1_RANDOM_AGGRO";
			case 51:
				return "RE_IK_UNI_V1_THANK_A";
			case 52:
				return "RE_IK_UNI_V1_THANK_B";
			case 54:
				return "RE_IK_UNI_V1_PLAYER_RESPONSE";
			case 55:
				return "RE_IK_UNI_V1_THANK_D";
			case 56:
				return "RE_IK_UNI_V1_THANK_E";
			case 57:
				return "RE_IK_UNI_V1_THANK_F";
			case 58:
				return "RE_IK_UNI_V1_THANK_G";
			case 59:
				return "RE_IK_UNI_V1_YES_RIDE";
			case 75:
				return "RE_IK_UNI_V1_NO_RESPONSE_A";
			case 76:
				return "RE_IK_UNI_V1_NO_RESPONSE_B";
			case 77:
				return "RE_IK_UNI_V1_NO_RESPONSE_C";
			case 78:
				return "RE_IK_UNI_V1_NO_RESPONSE_D";
			case 96:
				return "RE_IK_UNI_V1_ANIMAL_A";
			case 60:
				return "RE_IK_UNI_V1_WOMAN_HELP_A";
			case 61:
				return "RE_IK_UNI_V1_WOMAN_HELP_B";
			case 62:
				return "RE_IK_UNI_V1_WOMAN_HELP_C";
			case 63:
				return "RE_IK_UNI_V1_WOMAN_HELP_D";
			case 64:
				return "RE_IK_UNI_V1_WOMAN_HELP_E";
			case 65:
				return "RE_IK_UNI_V1_WOMAN_HELP_F";
			case 66:
				return "RE_IK_UNI_V1_WOMAN_HELP_G";
			case 67:
				return "RE_IK_UNI_V1_WOMAN_HELP_H";
			case 68:
				return "RE_IK_UNI_V1_WOMAN_HELP_I";
			case 69:
				return "RE_IK_UNI_V1_WOMAN_HELP_J";
			case 70:
				return "RE_IK_UNI_V1_WOMAN_HELP_K";
			case 71:
				return "RE_IK_UNI_V1_WOMAN_HELP_L";
			case 72:
				return "RE_IK_UNI_V1_WOMAN_HELP_M";
			case 73:
				return "RE_IK_UNI_V1_WOMAN_LEAVING_A";
			case 74:
				return "RE_IK_UNI_V1_WOMAN_LEAVING_B";
			case 79:
				return "RE_IK_UNI_V1_WRONG_WAY_A";
			case 80:
				return "RE_IK_UNI_V1_WRONG_WAY_B";
			case 81:
				return "RE_IK_UNI_V1_WRONG_WAY_C";
			case 82:
				return "RE_IK_UNI_V1_TOO_LONG_A";
			case 83:
				return "RE_IK_UNI_V1_TOO_LONG_B";
			case 84:
				return "RE_IK_UNI_V1_TOO_LONG_C";
			case 85:
				return "RE_IK_UNI_V1_STATIONARY_A";
			case 86:
				return "RE_IK_UNI_V1_STATIONARY_B";
			case 87:
				return "RE_IK_UNI_V1_STATIONARY_C";
			case 88:
				return "RE_IK_UNI_V1_END_ESCORT_MEH";
			case 89:
				return "RE_IK_UNI_V1_END_ESCORT_BAD";
			case 90:
				return "GENERIC_SHOCKED_MED";
			case 91:
				return "GENERIC_SHOCKED_MED";
			case 92:
				return "GENERIC_SHOCKED_HIGH";
			case 93:
				return "RE_IK_UNI_V1_TRANSITION_A";
			case 94:
				return "RE_IK_UNI_V1_TRANSITION_B";
			case 95:
				return "RE_IK_UNI_V1_TRANSITION_C";
			case 97:
				return "RE_IK_UNI_V1_PLAYER_NEG_A0";
			case 98:
				return "RE_IK_UNI_V1_PLAYER_POS_A";
			case 99:
				return "RE_IK_UNI_V1_PLAYER_NEG_A";
			case 102:
				return "RE_IK_UNI_V1_PLAYER_POS_B";
			case 103:
				return "RE_IK_UNI_V1_PLAYER_NEG_B";
			case 100:
				return "CALLOUT_JUST_KILL_EM_MALE";
			case 101:
				return "CALLOUT_JUST_KILL_EM_NEUTRAL";
			case 104:
				return "RE_IK_UNI_V1_PED_POS_B";
			case 105:
				return "RE_IK_UNI_V1_PED_NEG_B";
			case 106:
				return "RE_IK_UNI_V1_ACCEPT";
			case 107:
				return "RE_IK_UNI_V1_REFUSE";
			case 108:
				return "RE_IK_UNI_V1_PLAYER_POS_C";
			case 109:
				return "RE_IK_UNI_V1_PLAYER_NEG_C";
			case 110:
				return "RE_IK_UNI_V1_PED_POS_C";
			case 111:
				return "RE_IK_UNI_V1_PED_NEG_C";
			case 112:
				return "RE_IK_UNI_V1_PLAYER_NEG_D";
			case 114:
				return "RE_IK_UNI_V1_PED_NEG_D";
			case 116:
				return "RE_IK_UNI_V1_CONVO_A";
			case 117:
				return "RE_IK_UNI_V1_CONVO_A";
			case 118:
				return "RE_IK_UNI_V1_CONVO_B";
			case 119:
				return "RE_IK_UNI_V1_CONVO_B";
			case 120:
				return "RE_IK_UNI_V1_CONVO_C";
			case 121:
				return "RE_IK_UNI_V1_CONVO_C";
			case 122:
				return "RE_IK_UNI_V1_CLOSE";
			case 123:
				return "RE_IK_UNI_V1_CLOSE";
			case 126:
				return "SCARED_HELP";
			case 125:
				return "PANIC_HELP";
			case 127:
				return "RE_IK_UNI_V1_SHOOTOUT";
			case 128:
				return "RE_IK_UNI_V1_PLYFINAL_LOW";
			case 129:
				return "RE_IK_UNI_V1_PLYFINAL_HIGH";
			case 113:
				return "RE_IK_UNI_V1_PLAYER_NEG_D_MOUNTED";
			case 115:
				return "RE_IK_UNI_V1_PED_NEG_D_MOUNTED";
			case 130:
				return "RE_IK_UNI_V1_WARNING_C";
			case 131:
				return "RE_IK_UNI_V1_WARNING_D";
		}
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				switch (iParam0)
				{
					case 53:
						return "RE_IK_UNI_V1_THANK_C1";
					default:
						break;
				}
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				switch (iParam0)
				{
					case 53:
						return "RE_IK_UNI_V1_THANK_C2";
					default:
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 36:
				return "RE_IK_UNI_V2_INITIAL_SCREAM_A";
			case 38:
				return "RE_IK_UNI_V2_INITIAL_SCREAM_B";
			case 44:
				return "";
			case 45:
				return "";
			case 46:
				return "";
			case 18:
				return "RE_IK_UNI_V2_WARNING_A";
			case 19:
				return "RE_IK_UNI_V2_WARN_AGGRO";
			case 20:
				return "RE_IK_UNI_V2_WARNING_FEUD";
			case 21:
				return "RE_IK_UNI_V2_CLOSE_FOLLOW";
			case 22:
				if (__LIB_2__::func_155(1, 1))
				{
					return "RE_IK_UNI_V2_WARNING_FEUD";
				}
				else
				{
					return "RE_IK_UNI_V2_WARN_AGGRO";
				}
				break;
			case 23:
				return "RE_IK_UNI_V2_AGGRO_A";
			case 24:
				return "RE_IK_UNI_V2_AGGRO_B";
			case 25:
				return "RE_IK_UNI_V2_AGGRO_C";
			case 26:
				return "RE_IK_UNI_V2_AGGRO_D";
			case 27:
				return "RE_IK_UNI_V2_AGGRO_E";
			case 28:
				return "RE_IK_UNI_V2_AGGRO_F";
			case 29:
				return "RE_IK_UNI_V2_AGGRO_G";
			case 30:
				return "RE_IK_UNI_V2_AGGRO_H";
			case 97:
				return "RE_IK_UNI_V2_PLAYER_POS_A0";
			case 98:
				return "RE_IK_UNI_V2_PLAYER_POS_A";
			case 99:
				return "RE_IK_UNI_V2_PLAYER_NEG_A";
			case 100:
				return "CALLOUT_JUST_KILL_EM_MALE";
			case 101:
				return "CALLOUT_JUST_KILL_EM_NEUTRAL";
			case 116:
				return "RE_IK_UNI_V2_CONVO_A";
			case 117:
				return "RE_IK_UNI_V2_CONVO_A";
			case 118:
				return "RE_IK_UNI_V2_CONVO_B";
			case 119:
				return "RE_IK_UNI_V2_CONVO_B";
			case 120:
				return "RE_IK_UNI_V2_CONVO_C";
			case 121:
				return "RE_IK_UNI_V2_CONVO_C";
			case 122:
				return "RE_IK_UNI_V2_CONVO_D";
			case 123:
				return "RE_IK_UNI_V2_CLOSE";
			case 124:
				return "RE_IK_UNI_V2_CLOSE";
			case 126:
				return "SCARED_HELP";
			case 125:
				return "PANIC_HELP";
				switch (Local_314.f_51.f_4)
				{
					case 0:
					case 3:
					case 4:
						switch (iParam0)
						{
							case 53:
								return "RE_IK_UNI_V2_THANK_C1";
						}
						break;
					case 1:
					case 2:
					case 5:
					case 6:
					case 7:
						switch (iParam0)
						{
							case 53:
								return "RE_IK_UNI_V2_THANK_C2";
							default:
								break;
						}
						break;
				}
		}
	}
	return "No dialogue line!";
}

bool func_166()
{
	if (!__LIB_1__::func_187(68) || !__LIB_9__::func_648(79, 0))
	{
		return true;
	}
	return false;
}

bool func_221()
{
	if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_873[0], -1380852982) || __LIB_3__::func_649(uLocal_873[0], uLocal_873[4]))
	{
		return true;
	}
	if (PED::_IS_PED_HOGTIED(uLocal_873[4]) && !ENTITY::IS_ENTITY_DEAD(uLocal_873[0]))
	{
		if (__LIB_0__::func_665(uLocal_873[4], uLocal_873[0], 1, 1) <= 2f || __LIB_0__::func_665(uLocal_873[4], uLocal_873[1], 1, 1) <= 2f)
		{
			return true;
		}
	}
	return false;
}

void func_222(int iParam0)
{
	if (bLocal_1138 != iParam0)
	{
		bLocal_1138 = iParam0;
		if (bLocal_1138)
		{
		}
	}
}

bool func_223()
{
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_873[0], true) || PED::IS_PED_FATALLY_INJURED(uLocal_873[0])) && (PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true) || PED::IS_PED_FATALLY_INJURED(uLocal_873[1])))
	{
		MAP::REMOVE_BLIP(&(iLocal_880[0]));
		MAP::REMOVE_BLIP(&(iLocal_880[1]));
		return true;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_873[0], true) || PED::IS_PED_FATALLY_INJURED(uLocal_873[0])) && PED::_IS_PED_HOGTIED(uLocal_873[1]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_873[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		MAP::REMOVE_BLIP(&(iLocal_880[0]));
		MAP::REMOVE_BLIP(&(iLocal_880[1]));
		return true;
	}
	if ((PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true) || PED::IS_PED_FATALLY_INJURED(uLocal_873[1])) && PED::_IS_PED_HOGTIED(uLocal_873[0]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_873[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		MAP::REMOVE_BLIP(&(iLocal_880[0]));
		MAP::REMOVE_BLIP(&(iLocal_880[1]));
		return true;
	}
	if (PED::_IS_PED_HOGTIED(uLocal_873[0]) && PED::_IS_PED_HOGTIED(uLocal_873[1]))
	{
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_873[0], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_873[1], Global_35, 4, 0, -1082130432 /* Float: -1f */, -1, 0);
		MAP::REMOVE_BLIP(&(iLocal_880[0]));
		MAP::REMOVE_BLIP(&(iLocal_880[1]));
		return true;
	}
	return false;
}

bool func_226()
{
	if (iLocal_14 == 0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_873[4], Global_35, 1, 1) && __LIB_0__::func_665(uLocal_873[4], uLocal_873[0], 1, 1) <= 5f)
		{
			return true;
		}
	}
	return false;
}

void func_227()
{
	if (iLocal_14 == 0)
	{
		if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_109, false) && iLocal_952 == 0) && iLocal_968 == 0)
		{
			if (iLocal_937 == 0)
			{
				if (fLocal_929 < 0.8f)
				{
					if (iLocal_968 == 0)
					{
						iLocal_968 = 1;
						PED::_0x2208438012482A1A(uLocal_873[4], false, false);
						TASK::TASK_PLAY_ANIM(uLocal_873[4], Local_701[12 /*2*/], Local_701[12 /*2*/].f_1, 1.5f, -1.5f, -1, 8198, 0f, false, 0, false, 0, false);
					}
				}
			}
			if (fLocal_929 >= 0.8f && fLocal_929 < 0.95f)
			{
				if (iLocal_952 == 0)
				{
					iLocal_952 = 1;
					__LIB_2__::func_919(uLocal_873[4], 1, 1);
					TASK::TASK_CARRIABLE(uLocal_873[4], ENTITY::_GET_OPTIMAL_CARRY_CONFIG(uLocal_873[4], 1), 0, 0, 1);
					PED::SET_PED_KEEP_TASK(uLocal_873[4], true);
				}
			}
			if (fLocal_929 >= 0.95f)
			{
				if (iLocal_952 == 0)
				{
					iLocal_952 = 1;
					__LIB_2__::func_919(uLocal_873[4], 1, 1);
					TASK::TASK_CARRIABLE(uLocal_873[4], ENTITY::_GET_OPTIMAL_CARRY_CONFIG(uLocal_873[4], 1), uLocal_873[0], 0, 5);
					PED::SET_PED_KEEP_TASK(uLocal_873[4], true);
				}
			}
			if (fLocal_929 >= 0.59f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_873[5]))
				{
					AUDIO::STOP_PED_SPEAKING(uLocal_873[5], true);
					__LIB_2__::func_504(uLocal_873[5], 0);
					__LIB_1__::func_864(uLocal_873[5], 1, 0);
				}
			}
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_109, "Female", uLocal_873[4]);
		}
	}
}

void func_228(int iParam0)
{
	iLocal_887 = iParam0;
}

float func_230(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && __LIB_0__::func_71(iParam0))
	{
		return 50f;
	}
	return 30f;
}

int func_231(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
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

void func_232(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	uParam2->f_3 = iParam1;
	uParam2->f_7 = iParam3;
	if (__LIB_0__::func_665(iParam0, iParam1, 1, 1) <= IntToFloat(iParam4))
	{
		TASK::TASK_LOOK_AT_ENTITY(iParam0, iParam1, iParam3, 2108, iParam5, 1);
	}
	else
	{
		TASK::TASK_CLEAR_LOOK_AT(iParam0);
	}
}

bool func_234(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	if (!__LIB_0__::func_75(&uLocal_1022))
	{
		__LIB_1__::func_148(&uLocal_1022);
	}
	else if (__LIB_0__::func_264(&uLocal_1022) > fParam3)
	{
		__LIB_2__::func_303(iParam0, iParam1, sParam2, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_0__::func_37(&uLocal_1022);
		return true;
	}
	return false;
}

void func_240()
{
	if (iLocal_983 == 0)
	{
		if (__LIB_3__::func_332(Local_314.f_51, 1) > 100f)
		{
			Local_260[1 /*17*/].f_13 = func_161(113);
			iLocal_983 = 1;
		}
	}
}

bool func_242(int iParam0)
{
	int iVar0;
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

void func_246()
{
	if (ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_109, true, false) && !ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_109, false))
	{
		switch (iLocal_14)
		{
			case 0:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_109, "PBL_ACTION_V1", true);
				break;
			case 1:
				ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_109, "PBL_ACTION_V2", true);
				break;
		}
		ANIMSCENE::START_ANIM_SCENE(Local_109);
	}
}

void func_248()
{
	switch (iLocal_916)
	{
		case 0:
			if (__LIB_2__::func_118(uLocal_873[4], 1, 0) <= 120f)
			{
				__LIB_2__::func_303(uLocal_873[4], uLocal_873[0], func_161(40), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				__LIB_2__::func_303(uLocal_873[5], uLocal_873[0], func_161(37), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				__LIB_2__::func_315(1515458263, uLocal_873[4], 1);
				__LIB_1__::func_148(&uLocal_1052);
				iLocal_916++;
			}
			break;
		case 1:
			if (__LIB_0__::func_264(&uLocal_1052) > 1f)
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[5], func_161(43), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[5], func_161(43), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1052);
				iLocal_916++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-3f, 1, uLocal_873[5], 1) && __LIB_2__::func_227(-3f, 1, uLocal_873[4], 1))
			{
				__LIB_2__::func_303(uLocal_873[4], uLocal_873[0], func_161(38), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1515458263, uLocal_873[4], 1);
				iLocal_916++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-3f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(-3f, 1, uLocal_873[4], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[5], func_161(39), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_916++;
			}
			break;
	}
}

int func_249()
{
	switch (iLocal_908)
	{
		case 0:
			if (__LIB_2__::func_118(uLocal_873[4], 1, 0) <= 110f)
			{
				__LIB_2__::func_303(uLocal_873[4], uLocal_873[0], func_161(36), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				__LIB_2__::func_315(1515458263, uLocal_873[4], 1);
				iLocal_908++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1))
			{
				__LIB_2__::func_303(uLocal_873[4], uLocal_873[0], func_161(38), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				__LIB_2__::func_315(1515458263, uLocal_873[4], 1);
				iLocal_908++;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

bool func_250(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
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
				STATS::_0xB2A38826E5886E83(func_124(uParam0->f_3, uParam0->f_185), 0);
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
					STATS::_0xB2A38826E5886E83(func_124(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_251(vector3 vParam0, float fParam3)
{
	int iVar0;
	iVar0 = VOLUME::_CREATE_VOLUME_SPHERE(vParam0, 0f, 0f, 0f, fParam3, fParam3, fParam3);
	return iVar0;
}

void func_252()
{
	int iVar0;
	int iVar1;
	switch (iLocal_897)
	{
		case 0:
			if (func_253())
			{
				iLocal_897 = 1;
			}
			break;
		case 1:
			if (iLocal_887 != 4 && iLocal_887 != 5)
			{
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_873[1], &iVar0, true, 0, false);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_873[1], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), false, 0, false, false);
				if (PED::IS_PED_ON_MOUNT(uLocal_873[1]))
				{
					__LIB_4__::func_7(uLocal_873[1], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 999, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				}
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
				if (iVar0 == joaat("WEAPON_UNARMED"))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_873[1], iLocal_994);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				iLocal_897 = 2;
			}
			else if (PED::IS_PED_ON_MOUNT(uLocal_873[1]))
			{
				__LIB_4__::func_7(uLocal_873[1], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), 999, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
				TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(0, uLocal_873[0], Global_35, 0, 20000, 1056964608 /* Float: 0.5f */, 1073741824 /* Float: 2f */, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_873[1], iLocal_994);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				iLocal_897 = 3;
			}
			else
			{
				WEAPON::GET_CURRENT_PED_WEAPON(uLocal_873[1], &iVar1, true, 0, false);
				WEAPON::SET_CURRENT_PED_WEAPON(uLocal_873[1], joaat("WEAPON_SHOTGUN_DOUBLEBARREL"), false, 0, false, false);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
				if (iVar1 == joaat("WEAPON_UNARMED"))
				{
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
				}
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, Global_35, Global_35, 1f, 0, 3f, 3f, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
				TASK::TASK_AIM_AT_ENTITY(0, Global_35, -1, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_873[1], iLocal_994);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				iLocal_897 = 2;
			}
			break;
		case 2:
			if (!func_253())
			{
				iLocal_897 = 0;
			}
			break;
		case 3:
			PED::SET_PED_RESET_FLAG(uLocal_873[1], 27, true);
			if (!func_253())
			{
				iLocal_897 = 0;
			}
			break;
	}
}

bool func_253()
{
	if ((__LIB_0__::func_665(uLocal_873[0], Global_35, 1, 1) <= IntToFloat(iLocal_925) || __LIB_0__::func_665(uLocal_873[1], Global_35, 1, 1) <= IntToFloat(iLocal_925)) && !func_80())
	{
		if (((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_873[0], Global_35, 17) || PED::IS_PED_FACING_PED(uLocal_873[0], Global_35, 80f)) || __LIB_0__::func_665(uLocal_873[0], Global_35, 1, 1) <= 20f) || ((ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(uLocal_873[1], Global_35, 17) || PED::IS_PED_FACING_PED(uLocal_873[1], Global_35, 80f)) || __LIB_0__::func_665(uLocal_873[1], Global_35, 1, 1) <= 20f))
		{
			return true;
		}
	}
	return false;
}

int func_254()
{
	switch (iLocal_908)
	{
		case 0:
			if (fLocal_929 >= 0.62f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_873[0]) || !ENTITY::IS_ENTITY_DEAD(uLocal_873[1]))
				{
					__LIB_2__::func_303(uLocal_873[4], uLocal_873[1], func_161(44), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				__LIB_2__::func_315(1515458263, uLocal_873[4], 1);
				iLocal_908++;
			}
			break;
		case 1:
			if (fLocal_929 >= 0.72f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_873[0]) || !ENTITY::IS_ENTITY_DEAD(uLocal_873[1]))
				{
					__LIB_2__::func_303(uLocal_873[4], uLocal_873[0], func_161(41), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_908++;
			}
			break;
		case 2:
			if (fLocal_929 >= 0.75f)
			{
				if (__LIB_2__::func_227(-3f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(-3f, 1, uLocal_873[4], 1))
				{
					__LIB_2__::func_303(uLocal_873[1], uLocal_873[4], func_161(45), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_908++;
					TASK::TASK_MOUNT_ANIMAL(uLocal_873[1], uLocal_873[2], 20000, -1, 1f, 536870912, 0, 0);
				}
			}
			break;
		case 3:
			if (fLocal_929 >= 0.91f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_873[0]) || !ENTITY::IS_ENTITY_DEAD(uLocal_873[1]))
				{
					__LIB_2__::func_303(uLocal_873[4], uLocal_873[0], func_161(46), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				iLocal_908++;
				__LIB_2__::func_315(1515458263, uLocal_873[4], 1);
			}
			break;
		case 4:
			return 1;
	}
	return 0;
}

void func_255()
{
	func_232(uLocal_873[1], Global_35, &uLocal_117, 20, 15, 51);
	switch (iLocal_903)
	{
		case 0:
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_873[1], 0);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_873[0], 1000);
			Local_314.f_44 = 1;
			if (iLocal_969 == 0)
			{
				__LIB_2__::func_303(uLocal_873[1], Global_35, func_161(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_903++;
				__LIB_1__::func_148(&uLocal_1037);
				iLocal_889 = 1;
				iLocal_890 = 0;
				__LIB_3__::func_158(&(Local_187[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_187[1 /*17*/]), 0);
				Local_187[0 /*17*/].f_13 = func_161(98);
				__LIB_2__::func_360(&(Local_187[0 /*17*/]), "RE_INTER_DEFUSE");
				Local_187[1 /*17*/].f_13 = func_161(99);
				__LIB_2__::func_360(&(Local_187[1 /*17*/]), "INTERACT_INTERVENE");
				__LIB_2__::func_411(&(Local_187[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_187[1 /*17*/]), 1, 0);
			}
			iLocal_925 = 15;
			break;
		case 1:
			if (!func_470())
			{
				if ((!__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_873[1], &(Local_144[1 /*21*/])) || !__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_873[0], &(Local_144[0 /*21*/]))) || __LIB_2__::func_227(0f, 1, 0, 0))
				{
					if (__LIB_2__::func_227(-3f, 1, 0, 0) && !func_470())
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_873[1], 1000);
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_873[0], 1000);
						__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_315(1891783641, uLocal_873[4], 1);
						iLocal_903++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				if (iLocal_887 == 4)
				{
					if (func_472())
					{
						func_227();
						iLocal_903++;
						func_228(6);
					}
				}
				else
				{
					func_227();
					iLocal_903++;
					func_228(6);
				}
			}
			break;
	}
}

bool func_257()
{
	switch (iLocal_902)
	{
		case 0:
			if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-3f, 1, uLocal_873[1], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[4], func_161(47), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_902++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && !PED::IS_PED_DEAD_OR_DYING(uLocal_873[4], true))
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(49), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_902++;
			}
			break;
		case 2:
			if ((__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[0], 1)) && ENTITY::_0x61914209C36EFDDB(uLocal_873[4]) == 7)
			{
				__LIB_2__::func_303(uLocal_873[4], uLocal_873[0], func_161(48), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_2__::func_315(1515458263, uLocal_873[4], 1);
				iLocal_902++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[4], 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_258()
{
	int iVar0;
	if (!__LIB_0__::func_75(&uLocal_1071))
	{
		__LIB_1__::func_148(&uLocal_1071);
	}
	if (!__LIB_0__::func_75(&uLocal_1074))
	{
		__LIB_1__::func_148(&uLocal_1074);
	}
	if (__LIB_4__::func_484(uLocal_873[4], __LIB_2__::func_825(uLocal_873[0])) || __LIB_4__::func_484(uLocal_873[4], __LIB_2__::func_825(uLocal_873[1])))
	{
		if (__LIB_0__::func_264(&uLocal_1071) > 15f)
		{
			if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(uLocal_873[4], false, false), 10f, 1, 1, &iVar0, 1, 1, 1, -1) || __LIB_0__::func_264(&uLocal_1074) > IntToFloat(iLocal_1083))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iLocal_1083 = MISC::GET_RANDOM_INT_IN_RANGE(15, 35);
					switch (iLocal_1070)
					{
						case 0:
							__LIB_2__::func_461(0);
							__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(130), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_1071);
							iLocal_1070++;
							break;
						case 1:
							__LIB_2__::func_461(0);
							__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(126), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_1071);
							iLocal_1070++;
							break;
						case 2:
							__LIB_2__::func_461(0);
							__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(131), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							__LIB_1__::func_148(&uLocal_1071);
							iLocal_1070++;
							break;
						case 3:
							__LIB_2__::func_461(0);
							__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(125), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 1);
							__LIB_1__::func_148(&uLocal_1071);
							iLocal_1070 = 0;
							break;
					}
				}
			}
		}
	}
}

void func_259()
{
	int iVar0;
	if (!__LIB_0__::func_75(&uLocal_1077))
	{
		__LIB_1__::func_148(&uLocal_1077);
	}
	if (!__LIB_0__::func_75(&uLocal_1080))
	{
		__LIB_1__::func_148(&uLocal_1080);
	}
	if (__LIB_4__::func_484(uLocal_873[4], __LIB_2__::func_825(Global_35)))
	{
		if (iLocal_985 == 0)
		{
			__LIB_1__::func_715(2, 0, 0, 0, uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
			if (iLocal_957 == 0)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(60), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_957 = 1;
			}
			iLocal_985 = 1;
		}
		if (iLocal_1086 < 2)
		{
			if (__LIB_0__::func_264(&uLocal_1077) > IntToFloat(iLocal_1084))
			{
				if (PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(uLocal_873[4], false, false), 10f, 1, 0, &iVar0, 0, 1, 1, -1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (PED::IS_PED_HUMAN(iVar0))
						{
							iLocal_938 = 1;
							iLocal_1084 = MISC::GET_RANDOM_INT_IN_RANGE(5, 10);
							iLocal_1086++;
							__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(125), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 1);
							__LIB_1__::func_148(&uLocal_1077);
							__LIB_1__::func_148(&uLocal_1080);
						}
					}
				}
			}
		}
		if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1))
		{
			if (__LIB_0__::func_264(&uLocal_1080) > IntToFloat(iLocal_1085))
			{
				switch (iLocal_1087)
				{
					case 0:
						__LIB_2__::func_303(uLocal_873[4], Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 15);
						__LIB_1__::func_148(&uLocal_1080);
						break;
					case 1:
						__LIB_2__::func_303(uLocal_873[4], Global_35, "GENERIC_FRIGHTENED_HIGH", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_938 = 1;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						__LIB_1__::func_148(&uLocal_1080);
						break;
					case 2:
						__LIB_2__::func_303(uLocal_873[4], Global_35, "INTIMIDATED_AGAIN_GEN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						__LIB_1__::func_148(&uLocal_1080);
						break;
					case 3:
						__LIB_2__::func_303(uLocal_873[4], Global_35, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 1, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						__LIB_1__::func_148(&uLocal_1080);
						break;
					case 4:
						__LIB_2__::func_303(uLocal_873[4], Global_35, "PLEAD_HOGTIED", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1087++;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						__LIB_1__::func_148(&uLocal_1080);
						break;
					case 5:
						iLocal_1087 = 0;
						iLocal_1085 = MISC::GET_RANDOM_INT_IN_RANGE(10, 25);
						__LIB_1__::func_148(&uLocal_1080);
						break;
				}
			}
		}
		else
		{
			__LIB_1__::func_148(&uLocal_1080);
		}
	}
	else
	{
		__LIB_1__::func_148(&uLocal_1077);
		__LIB_1__::func_148(&uLocal_1080);
	}
}

bool func_261()
{
	if (func_262())
	{
		return false;
	}
	switch (iLocal_917)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[0], 1))
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(116), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[0], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(117), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[1], 1))
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(118), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[0], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(119), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[1], 1))
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(120), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[0], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(121), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 6:
			return true;
	}
	return false;
}

bool func_262()
{
	switch (iLocal_899)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(uLocal_873[0], 2401.58f, 1235.54f, 102.94f, 15f, 15f, 5f, false, true, 0))
			{
				iLocal_899 = 1;
			}
			break;
		case 1:
			return true;
	}
	return false;
}

void func_263()
{
	switch (iLocal_918)
	{
		case 0:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[1], 1))
			{
				if (!__LIB_0__::func_75(&uLocal_1064) || __LIB_0__::func_264(&uLocal_1064) > 3f)
				{
					__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(122), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_918++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_1064);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[1], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(123), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_918++;
			}
			break;
	}
}

void func_264()
{
	switch (iLocal_919)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[1], 1))
			{
				iLocal_954 = 1;
				iLocal_967 = 1;
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_919++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				iLocal_919++;
				func_228(6);
			}
			break;
	}
}

void func_265()
{
	switch (iLocal_920)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[1], 1))
			{
				iLocal_954 = 1;
				iLocal_967 = 1;
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_920++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				iLocal_920++;
				func_228(6);
			}
			break;
	}
}

bool func_267()
{
	if (__LIB_2__::func_118(uLocal_873[0], 1, 0) >= 100f && __LIB_2__::func_118(uLocal_873[1], 1, 0) >= 100f)
	{
		return true;
	}
	if (__LIB_2__::func_118(uLocal_873[0], 1, 0) >= 100f && ENTITY::IS_ENTITY_DEAD(uLocal_873[1]))
	{
		return true;
	}
	if (__LIB_2__::func_118(uLocal_873[1], 1, 0) >= 100f && ENTITY::IS_ENTITY_DEAD(uLocal_873[0]))
	{
		return true;
	}
	if (__LIB_2__::func_118(uLocal_873[0], 1, 0) >= 100f && PED::_IS_PED_HOGTIED(uLocal_873[1]))
	{
		return true;
	}
	if (__LIB_2__::func_118(uLocal_873[1], 1, 0) >= 100f && PED::_IS_PED_HOGTIED(uLocal_873[0]))
	{
		return true;
	}
	return false;
}

void func_269()
{
	switch (iLocal_896)
	{
		case 0:
			iLocal_999 = PED::CREATE_GROUP(0);
			PED::SET_PED_AS_GROUP_LEADER(uLocal_873[0], iLocal_999, false);
			iLocal_896 = 1;
			break;
		case 1:
			if (PED::DOES_GROUP_EXIST(iLocal_999) && PED::_0x0455546F23FF08E4(iLocal_999))
			{
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_873[1], iLocal_999);
				PED::SET_PED_CONFIG_FLAG(uLocal_873[1], 279, true);
				iLocal_896 = 2;
			}
			break;
		case 2:
			if (func_166())
			{
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[0], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[3], 20000, -1, 1f, 536870912, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_63, 15f, 2f, 528, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_63, 1f, -1, 0.25f, 1048580, 40000f);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, uLocal_873[4]);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_143, 0, 71304200, -1, 0, 0, -1);
					TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, uLocal_873[4], 2298.34f, 1462.5f, 82.18f, 1f, 0);
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 30f, false, false, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_873[0], iLocal_993);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[2], 20000, -1, 1f, 536870912, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[1], iLocal_994, 0.2f, 0.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 3;
			}
			else
			{
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[0], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[3], 20000, -1, 1f, 536870912, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 2f, 528, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_873[0], iLocal_993);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[2], 20000, -1, 1f, 536870912, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[1], iLocal_994, 0.2f, 0.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 4;
			}
			break;
		case 3:
			if (TASK::GET_SEQUENCE_PROGRESS(uLocal_873[0]) >= 4 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_873[1], false, false), vLocal_63, true) < 10f)
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_873[1]);
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, sLocal_143, 0, 71304200, -1, 0, 0, -1);
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 30f, false, false, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_873[1], iLocal_994);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 4;
			}
			break;
		case 4:
			break;
	}
}

bool func_270()
{
	if (func_262())
	{
		return false;
	}
	if (iLocal_890 == 1 || iLocal_890 == 2)
	{
		return false;
	}
	if (__LIB_2__::func_227(-4f, 1, uLocal_873[0], 1) && __LIB_2__::func_227(-4f, 1, uLocal_873[0], 1))
	{
		if (__LIB_0__::func_75(&uLocal_1064))
		{
			if (__LIB_0__::func_264(&uLocal_1064) < 4f)
			{
				return false;
			}
			else
			{
				__LIB_0__::func_37(&uLocal_1064);
			}
		}
	}
	else if (__LIB_0__::func_75(&uLocal_1064))
	{
		__LIB_1__::func_148(&uLocal_1064);
	}
	switch (iLocal_917)
	{
		case 0:
			iLocal_917++;
			break;
		case 1:
			iLocal_917++;
			break;
		case 2:
			iLocal_917++;
			break;
		case 3:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[1], 1))
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(116), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[1], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(117), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[0], 1))
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(118), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[1], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(119), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 7:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[0], 1))
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(120), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 8:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[1], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(121), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 9:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[1], 1) && __LIB_2__::func_227(0f, 1, uLocal_873[0], 1))
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(122), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 291934926, 1, 0, 0);
				iLocal_917++;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

void func_271()
{
	switch (iLocal_918)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[0], 1))
			{
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(123), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_918++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[0], 1))
			{
				__LIB_2__::func_303(uLocal_873[1], uLocal_873[0], func_161(124), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_918++;
			}
			break;
	}
}

void func_272()
{
	switch (iLocal_903)
	{
		case 0:
			Local_314.f_44 = 1;
			iLocal_903++;
			iLocal_925 = 15;
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_873[1], 1000);
			AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_873[0], 0);
			__LIB_2__::func_303(uLocal_873[0], Global_35, func_161(18), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			__LIB_1__::func_148(&uLocal_1064);
			if (iLocal_969 == 0)
			{
				__LIB_1__::func_148(&uLocal_1037);
				iLocal_889 = 1;
				iLocal_890 = 0;
				__LIB_3__::func_158(&(Local_187[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_187[1 /*17*/]), 0);
				Local_187[0 /*17*/].f_13 = func_161(98);
				__LIB_2__::func_360(&(Local_187[0 /*17*/]), "RE_INTER_DEFUSE");
				Local_187[1 /*17*/].f_13 = func_161(99);
				__LIB_2__::func_360(&(Local_187[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_2__::func_411(&(Local_187[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_187[1 /*17*/]), 1, 0);
			}
			break;
		case 1:
			if (!func_470())
			{
				if ((!__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_873[1], &(Local_144[1 /*21*/])) || !__LIB_3__::func_572(PLAYER::PLAYER_ID(), uLocal_873[0], &(Local_144[0 /*21*/]))) || __LIB_2__::func_227(0f, 1, 0, 0))
				{
					if (__LIB_2__::func_227(-3f, 1, 0, 0))
					{
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_873[1], 0);
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_873[0], 1000);
						__LIB_2__::func_303(uLocal_873[1], Global_35, func_161(19), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_2__::func_315(1891783641, uLocal_873[4], 1);
						__LIB_1__::func_148(&uLocal_1064);
						iLocal_903++;
					}
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-6f, 1, 0, 0))
			{
				if (iLocal_887 == 5)
				{
					func_227();
					iLocal_903++;
					func_228(6);
				}
				else
				{
					func_227();
					iLocal_903++;
					func_228(6);
				}
			}
			break;
	}
}

void func_273()
{
	switch (iLocal_919)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[0], 1))
			{
				iLocal_954 = 1;
				iLocal_967 = 1;
				if (!func_262())
				{
					__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(21), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				}
				iLocal_919++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				iLocal_919++;
				func_228(6);
			}
			break;
	}
}

void func_274()
{
	switch (iLocal_920)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[0], 1))
			{
				iLocal_954 = 1;
				iLocal_967 = 1;
				__LIB_2__::func_303(uLocal_873[0], uLocal_873[1], func_161(22), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_920++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				iLocal_920++;
				func_228(6);
			}
			break;
	}
}

void func_275()
{
	switch (iLocal_896)
	{
		case 0:
			iLocal_999 = PED::CREATE_GROUP(0);
			PED::SET_PED_AS_GROUP_LEADER(uLocal_873[0], iLocal_999, false);
			iLocal_896 = 1;
			break;
		case 1:
			if (((PED::DOES_GROUP_EXIST(iLocal_999) && PED::_0x0455546F23FF08E4(iLocal_999)) && PED::IS_PED_ON_MOUNT(uLocal_873[0])) && PED::IS_PED_ON_MOUNT(uLocal_873[1]))
			{
				PED::SET_PED_AS_GROUP_MEMBER(uLocal_873[1], iLocal_999);
				PED::SET_PED_CONFIG_FLAG(uLocal_873[1], 279, true);
				iLocal_896 = 2;
			}
			break;
		case 2:
			if (func_166())
			{
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[0], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
					TASK::_TASK_MOVE_IN_TRAFFIC_2(0, vLocal_63, 15f, 2f, 528, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_63, 1f, -1, 0.25f, 1048580, 40000f);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2359.05f, 1376.64f, 105.33f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2359.36f, 1384.05f, 105.8f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 30f, false, false, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_873[0], iLocal_993);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[2], 20000, -1, 1f, 536870912, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[1], iLocal_994, 0.2f, 0.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 3;
			}
			else
			{
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[0], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[3], 20000, -1, 1f, 536870912, 0, 0);
					TASK::_TASK_MOVE_IN_TRAFFIC(0, 2f, 528, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_873[0], iLocal_993);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
				}
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_MOUNT_ANIMAL(0, uLocal_873[2], 20000, -1, 1f, 536870912, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[1], iLocal_994, 0.2f, 0.2f);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 4;
			}
			break;
		case 3:
			if (TASK::GET_SEQUENCE_PROGRESS(uLocal_873[0]) >= 4)
			{
				PED::REMOVE_PED_FROM_GROUP(uLocal_873[1]);
				if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true))
				{
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2359.05f, 1376.64f, 105.33f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2359.36f, 1384.05f, 105.8f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 1f, -1, 0.25f, 7340036, 40000f);
					TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(0, 2293.91f, 1459.77f, 82.31f, 30f, false, false, true, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
					TASK::TASK_PERFORM_SEQUENCE(uLocal_873[1], iLocal_994);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
				}
				iLocal_896 = 4;
			}
			break;
		case 4:
			break;
	}
}

void func_276()
{
	var uVar0[2];
	int iVar3;
	if (iLocal_967 == 0)
	{
		uVar0[0] = uLocal_873[0];
		uVar0[1] = uLocal_873[1];
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar0[iVar3]))
			{
				__LIB_3__::func_276(uVar0[iVar3], 0, &(Local_314.f_5), &iLocal_1134, 0, 0);
				if (PED::_IS_PED_HOGTIED(uVar0[iVar3]) || PED::_IS_PED_LASSOED(uVar0[iVar3]))
				{
					if (iLocal_959 == 0)
					{
						iLocal_959 = 1;
						iLocal_905 = 1;
					}
				}
				if (iLocal_1134 == 8)
				{
					if (iLocal_960 == 0)
					{
						iLocal_960 = 1;
						iLocal_905 = 3;
					}
				}
				if (((((((iLocal_1134 == 4 || iLocal_1134 == 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uVar0[iVar3], Global_35, 1, 1)) || iLocal_1134 == 0) || iLocal_1134 == 8192) || iLocal_1134 == 256) || iLocal_1134 == 2) || iLocal_1134 == 2048)
				{
					if (iLocal_962 == 0)
					{
						iLocal_962 = 1;
						iLocal_905 = 0;
					}
				}
				if (PED::_0x29FCE825613FEFCA(uVar0[iVar3], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uVar0[iVar3])
				{
					if (iLocal_961 == 0)
					{
						iLocal_961 = 1;
						iLocal_905 = 2;
					}
				}
				if (iLocal_14 == 0)
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_873[4]))
					{
						if (iLocal_971 == 0)
						{
							iLocal_971 = 1;
							iLocal_905 = 4;
						}
					}
				}
				switch (iLocal_905)
				{
					case 0:
						if (func_234(uVar0[iVar3], Global_35, func_161(23), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
					case 1:
						if (func_234(uVar0[iVar3], Global_35, func_161(24), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
					case 2:
						if (func_234(uVar0[iVar3], Global_35, func_161(25), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
					case 3:
						if (func_234(uVar0[iVar3], Global_35, func_161(26), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
					case 4:
						if (func_234(uVar0[iVar3], Global_35, func_161(27), 0.8f))
						{
							iLocal_967 = 1;
							iLocal_905 = -1;
						}
						break;
				}
			}
			iVar3++;
		}
	}
}

void func_277()
{
	switch (iLocal_922)
	{
		case 0:
			if (func_234(uLocal_873[4], Global_35, func_161(127), 3f))
			{
				iLocal_922++;
			}
			break;
		case 1:
			if (func_234(uLocal_873[4], Global_35, func_161(127), 4f))
			{
				iLocal_922++;
			}
			break;
		case 2:
			if (func_234(uLocal_873[4], Global_35, func_161(127), 6f))
			{
				iLocal_922++;
			}
			break;
		case 3:
			if (func_234(uLocal_873[4], Global_35, func_161(127), 8f))
			{
				iLocal_922++;
			}
			break;
	}
}

void func_278()
{
	float fVar0;
	float fVar1;
	switch (iLocal_895)
	{
		case 0:
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[0], true))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_880[0]))
				{
					iLocal_880[0] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_873[0]);
				}
			}
			if (!PED::IS_PED_DEAD_OR_DYING(uLocal_873[1], true))
			{
				if (!MAP::DOES_BLIP_EXIST(iLocal_880[1]))
				{
					iLocal_880[1] = MAP::_BLIP_ADD_FOR_ENTITY(joaat("BLIP_STYLE_ENEMY"), uLocal_873[1]);
				}
			}
			__LIB_2__::func_344(&(uLocal_873[0]));
			__LIB_2__::func_593(&(Local_144[0 /*21*/]), &Local_187);
			__LIB_2__::func_344(&(uLocal_873[1]));
			__LIB_2__::func_593(&(Local_144[1 /*21*/]), &Local_187);
			__LIB_1__::func_148(&uLocal_1004);
			iLocal_895 = 1;
			break;
		case 1:
			if ((((iLocal_1134 == 4 || iLocal_1134 == 256) || iLocal_1134 == 1) || iLocal_1134 == 16) || iLocal_1134 == 2)
			{
				fVar0 = 0f;
				fVar1 = 0.2f;
			}
			if (iLocal_1134 == 0)
			{
				fVar0 = 0f;
				fVar1 = 0.5f;
			}
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_993);
			if (PED::_IS_PED_CARRYING(uLocal_873[0]))
			{
				__LIB_2__::func_919(uLocal_873[4], 1, 1);
			}
			if ((((iLocal_1134 == 4 || iLocal_1134 == 256) || iLocal_1134 == 1) || iLocal_1134 == 16) || iLocal_1134 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_993);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[0], iLocal_993, fVar0, fVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_993);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_994);
			if ((((iLocal_1134 == 4 || iLocal_1134 == 256) || iLocal_1134 == 1) || iLocal_1134 == 16) || iLocal_1134 == 2)
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 16384, 0);
			}
			else
			{
				TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_994);
			TASK::_TASK_PERFORM_SEQUENCE_2(uLocal_873[1], iLocal_994, fVar1, fVar1);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_994);
			iLocal_895 = 2;
			break;
		case 2:
			break;
	}
}

int func_280(int iParam0)
{
	return __LIB_5__::func_60(iParam0, 3);
}

void func_284(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, 0, 0))
			{
				if (iLocal_957 == 0)
				{
					__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(60), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
					iLocal_957 = 1;
				}
				iLocal_906++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(61), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(62), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(63), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906 = 20;
				iLocal_938 = 1;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(64), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 5:
			if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(65), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(66), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 7:
			if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(67), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				if (iLocal_985 == 0)
				{
					__LIB_1__::func_715(2, 0, 0, 0, uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_985 = 1;
				}
				iLocal_938 = 1;
				iLocal_906 = 20;
			}
			break;
		case 8:
			if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(68), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 9:
			if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(69), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 10:
			if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(70), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
		case 11:
			if (__LIB_2__::func_227(3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(3f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(71), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				if (iLocal_985 == 0)
				{
					__LIB_1__::func_715(2, 0, 0, 0, uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_985 = 1;
				}
				iLocal_938 = 1;
				iLocal_906 = 20;
			}
			break;
		case 12:
			__LIB_2__::func_461(0);
			if (__LIB_2__::func_227(-1f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(72), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
				iLocal_906++;
			}
			break;
	}
}

void func_285()
{
	if (iLocal_984 == 0)
	{
		if (iLocal_14 == 0)
		{
			if (func_324() || FIRE::IS_ENTITY_ON_FIRE(uLocal_873[4]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uLocal_873[4]))
				{
					func_228(11);
					__LIB_3__::func_158(&(Local_260[0 /*17*/]), 1);
					__LIB_3__::func_158(&(Local_260[1 /*17*/]), 1);
					__LIB_1__::func_715(4, 0, 0, "RE_HONOR_CRUEL_KILLING", uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_984 = 1;
				}
			}
		}
	}
}

void func_287()
{
	func_232(uLocal_873[4], Global_35, &uLocal_117, -1, 15, 51);
	func_232(Global_35, uLocal_873[4], &uLocal_117, -1, 15, 51);
}

void func_288()
{
	if (iLocal_940 == 0)
	{
		__LIB_2__::func_966(uLocal_873[4], Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
	}
	else
	{
		__LIB_1__::func_727(uLocal_873[4], 1);
	}
	switch (iLocal_904)
	{
		case 0:
			iLocal_889 = 8;
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[4], 1) && __LIB_0__::func_264(&uLocal_1019) >= 3f)
			{
				iLocal_892 = 1;
				TASK::TASK_PLAY_ANIM(uLocal_873[4], Local_701[0 /*2*/], Local_701[1 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 0, false, 0, false);
				if (__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(51), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[4], 1))
			{
				if (__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(52), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
					__LIB_1__::func_148(&uLocal_1010);
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-1f, 1, 0, 0) && iLocal_953 == 0)
			{
				iLocal_953 = 1;
				__LIB_2__::func_451(&iLocal_239, 0);
				iLocal_1128 = __LIB_2__::func_340(2, 0, 0);
				iLocal_889 = 5;
				iLocal_890 = 0;
				Local_260[0 /*17*/].f_13 = func_161(106);
				Local_260[1 /*17*/].f_13 = func_161(107);
				__LIB_2__::func_360(&(Local_260[0 /*17*/]), "BEAT_GRT_POS");
				__LIB_2__::func_360(&(Local_260[1 /*17*/]), "BEAT_GRT_NEG");
				__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
				__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
				__LIB_1__::func_491(&(Local_260[0 /*17*/]), 8);
				__LIB_1__::func_491(&(Local_260[1 /*17*/]), 8);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, Global_35, 1) && __LIB_2__::func_227(-4f, 1, uLocal_873[4], 1))
			{
				TASK::TASK_PLAY_ANIM(uLocal_873[4], Local_701[0 /*2*/], Local_701[2 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 0, false, 0, false);
				if (__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(53), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
				}
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, Global_35, 1) && __LIB_2__::func_227(-4f, 1, uLocal_873[4], 1))
			{
				if (__LIB_4__::func_30(uLocal_873[4], 90f, 0))
				{
					TASK::TASK_PLAY_ANIM(Global_35, Local_701[0 /*2*/], Local_701[9 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 0, false, 0, false);
				}
				if (__LIB_2__::func_303(Global_35, uLocal_873[4], func_161(54), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					TASK::CLEAR_PED_TASKS(uLocal_873[4], true, false);
					func_228(8);
					iLocal_904++;
				}
			}
			break;
		case 5:
			if (iLocal_887 != 9)
			{
				if (bLocal_982 == 0)
				{
					if (__LIB_2__::func_227(-4f, 1, Global_35, 1) && __LIB_2__::func_227(-4f, 1, uLocal_873[4], 1))
					{
						__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(59), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
						__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
						__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
						__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
						bLocal_982 = true;
					}
				}
				if (bLocal_982)
				{
					if ((__LIB_2__::func_227(-4f, 1, Global_35, 1) && __LIB_2__::func_227(-4f, 1, uLocal_873[4], 1)) && __LIB_2__::func_227(0f, 1, 0, 0))
					{
						if (!PED::IS_PED_ON_MOUNT(Global_35) && func_480(iLocal_998))
						{
							__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(55), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0);
						}
						iLocal_904++;
					}
					if (__LIB_0__::func_396(Global_35) || func_292(Global_35))
					{
						iLocal_904++;
					}
				}
			}
			else
			{
				iLocal_904++;
			}
			break;
		case 6:
			iLocal_904 = -1;
			break;
		case 7:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-4f, 1, Global_35, 1))
			{
				TASK::TASK_PLAY_ANIM(uLocal_873[4], Local_701[0 /*2*/], Local_701[10 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 0, false, 0, false);
				if (__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(56), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
				}
			}
			break;
		case 8:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				iLocal_889 = 7;
				iLocal_890 = 0;
				Local_260[0 /*17*/].f_13 = func_161(102);
				Local_260[1 /*17*/].f_13 = func_161(103);
				__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
				func_228(9);
			}
			if (__LIB_2__::func_227(-2f, 1, uLocal_873[4], 1))
			{
				if (__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(57), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1506116031, 1, 0, 0))
				{
					iLocal_904++;
				}
			}
			break;
	}
}

void func_289()
{
	switch (iLocal_909)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				TASK::TASK_PLAY_ANIM(uLocal_873[4], Local_701[0 /*2*/], Local_701[3 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 0, false, 0, false);
				iLocal_909++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(2f, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_873[4], Local_701[0 /*2*/], Local_701[3 /*2*/].f_1, 1))
			{
				TASK::TASK_PLAY_ANIM(uLocal_873[4], Local_701[0 /*2*/], Local_701[4 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 0, false, 0, false);
				iLocal_909++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(2f, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_873[4], Local_701[0 /*2*/], Local_701[4 /*2*/].f_1, 1))
			{
				TASK::TASK_PLAY_ANIM(uLocal_873[4], Local_701[0 /*2*/], Local_701[5 /*2*/].f_1, 1.5f, -1.5f, -1, 67108880, 0f, false, 0, false, 0, false);
				iLocal_909++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(2f, 1, 0, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_873[4], Local_701[0 /*2*/], Local_701[5 /*2*/].f_1, 1))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(78), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_909++;
				__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
				__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				iLocal_889 = 7;
				iLocal_890 = 0;
				__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
				Local_260[1 /*17*/].f_13 = func_161(103);
				__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
				func_228(9);
			}
			break;
	}
}

void func_290()
{
	if (iLocal_935 == 1)
	{
		if (func_292(uLocal_873[4]))
		{
			if (__LIB_4__::func_447(&uLocal_89, Global_35, vLocal_60) || __LIB_4__::func_449(&uLocal_89, Global_35, 20, 1090519040 /* Float: 8f */))
			{
				if (!__LIB_0__::func_75(&uLocal_1013) && func_298() == 0)
				{
					__LIB_1__::func_148(&uLocal_1013);
					iLocal_927 = 5;
				}
			}
			if (!func_292(Global_35))
			{
				if (!__LIB_0__::func_75(&uLocal_1013))
				{
					__LIB_1__::func_148(&uLocal_1013);
					iLocal_927 = 7;
				}
			}
		}
		if (!func_293())
		{
			if (!__LIB_0__::func_75(&uLocal_1013))
			{
				__LIB_1__::func_148(&uLocal_1013);
				iLocal_927 = 15;
			}
		}
		if (iLocal_936 == 0)
		{
			if (iLocal_974 == 0)
			{
				if (func_292(uLocal_873[4]))
				{
					if (__LIB_0__::func_264(&uLocal_1013) >= IntToFloat(iLocal_927))
					{
						iLocal_936 = 1;
						__LIB_1__::func_422(sLocal_88, 7500, 0, 1, 0, 0, -1, -1, 0);
					}
				}
			}
		}
	}
}

void func_291()
{
	if (!PED::IS_PED_FACING_PED(uLocal_873[4], Global_35, 50f) && !func_292(Global_35))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_873[4], Global_35, 0, -1f, -1f, -1f);
	}
}

bool func_292(int iParam0)
{
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(iParam0))
	{
		return true;
	}
	return false;
}

bool func_293()
{
	if (!func_292(uLocal_873[4]))
	{
		return false;
	}
	if (PED::GET_MOUNT(Global_35) != PED::GET_MOUNT(uLocal_873[4]))
	{
		return false;
	}
	return true;
}

void func_296()
{
	iLocal_889 = 7;
	iLocal_890 = 0;
	__LIB_2__::func_360(&(Local_260[0 /*17*/]), "RE_INTER_POS");
	__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
	__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
	__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
	Local_260[0 /*17*/].f_13 = func_161(102);
	Local_260[1 /*17*/].f_13 = func_161(103);
	__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
	__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
	if (PED::IS_PED_ON_MOUNT(uLocal_873[4]))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC(0, 1f, 4752, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_873[4], iLocal_995);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
	if (MAP::DOES_BLIP_EXIST(iLocal_880[4]))
	{
		MAP::REMOVE_BLIP(&(iLocal_880[4]));
	}
	if (MAP::DOES_BLIP_EXIST(iLocal_997))
	{
		MAP::REMOVE_BLIP(&iLocal_997);
	}
	__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(88), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 0, 1, 1744022339, 1, 0, 0);
	__LIB_0__::func_769();
	if (bLocal_87)
	{
		PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 2, false);
		PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
		PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 448, false);
		__LIB_3__::func_552(uLocal_873[4]);
		bLocal_87 = false;
	}
	func_228(11);
}

void func_297(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 10000f;
	*uParam0 = 0;
}

bool func_298()
{
	int iVar0;
	if (__LIB_1__::func_923())
	{
		iVar0 = __LIB_3__::func_343(0);
		switch (Local_314.f_51.f_4)
		{
			case 0:
			case 3:
			case 4:
				if (iVar0 == 4194304)
				{
					return true;
				}
				break;
			case 1:
			case 2:
			case 5:
			case 6:
			case 7:
				if (iVar0 == 2)
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

void func_300()
{
	switch (iLocal_911)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_1016);
			__LIB_1__::func_148(&uLocal_1013);
			iLocal_911++;
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 0f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(79), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_911++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 10f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(80), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_911++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 10f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(81), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_950 = 1;
				iLocal_911++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 10f)
			{
				func_306();
			}
			break;
	}
}

int func_301()
{
	switch (Local_314.f_51.f_4)
	{
		case 0:
			return 240;
		case 1:
			return 180;
		case 2:
			return 120;
		case 3:
			return 120;
		case 4:
			return 180;
		case 5:
			return 240;
		case 6:
			return 180;
		case 7:
			return 180;
	}
	return 240;
}

void func_303()
{
	switch (iLocal_912)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_1016);
			__LIB_1__::func_148(&uLocal_1013);
			iLocal_912++;
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 0f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(81), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_912++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 10f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(82), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_912++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 10f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(83), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_950 = 1;
				iLocal_912++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 10f)
			{
				func_306();
			}
			break;
	}
}

void func_305()
{
	switch (iLocal_913)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_1016);
			__LIB_1__::func_148(&uLocal_1013);
			iLocal_913++;
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 0f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(85), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_913++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 10f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(86), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1016);
				iLocal_950 = 1;
				iLocal_913++;
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 10f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(87), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_950 = 1;
				iLocal_913++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-4f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1016) >= 10f)
			{
				func_306();
			}
			break;
	}
}

void func_306()
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_873[4], true);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
	TASK::OPEN_SEQUENCE_TASK(&iLocal_996);
	if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(uLocal_873[4], true))
	{
		TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_873[4], false))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4096);
	}
	TASK::_TASK_MOVE_IN_TRAFFIC(0, -1f, 512, 0);
	TASK::CLOSE_SEQUENCE_TASK(iLocal_996);
	TASK::TASK_PERFORM_SEQUENCE(uLocal_873[4], iLocal_996);
	TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
	__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(73), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
	func_228(11);
	__LIB_0__::func_769();
	UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
	iLocal_889 = 7;
	iLocal_890 = 0;
	__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
	__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
	Local_260[1 /*17*/].f_13 = func_161(103);
	__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
	__LIB_2__::func_360(&(Local_260[0 /*17*/]), "INTERACT_GREET");
	__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
	__LIB_2__::func_411(&(Local_260[0 /*17*/]), 0, 0);
	if (iLocal_986 == 0)
	{
		__LIB_1__::func_715(2, 0, 0, "RE_HONOR_BROKE_AGREEMENT", uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
		iLocal_986 = 1;
	}
}

void func_308()
{
	switch (iLocal_915)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(93), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_915++;
				iLocal_950 = 0;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(94), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_915++;
				iLocal_950 = 0;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(95), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_915++;
				iLocal_950 = 0;
			}
			break;
	}
}

void func_309()
{
	int iVar0;
	switch (iLocal_907)
	{
		case 0:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				__LIB_2__::func_303(Global_35, uLocal_873[4], func_161(0), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
				func_232(uLocal_873[4], Global_35, &uLocal_117, 5000, 15, 51);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(1), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1067);
				iLocal_907++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				if (__LIB_0__::func_264(&uLocal_1067) > 1f)
				{
					__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(2), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_907++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_1067);
			}
			break;
		case 3:
			if (__LIB_2__::func_227(-2f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				__LIB_2__::func_303(Global_35, uLocal_873[4], func_161(3), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1067);
				iLocal_907++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				if (__LIB_0__::func_264(&uLocal_1067) > 1f)
				{
					__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(4), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_907++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_1067);
			}
			break;
		case 5:
			if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				__LIB_2__::func_303(Global_35, uLocal_873[4], func_161(5), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1067);
				iLocal_907++;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				if (__LIB_0__::func_264(&uLocal_1067) > 0.7f)
				{
					__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(6), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1055);
					iLocal_907++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_1067);
			}
			break;
		case 7:
			if ((__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1)) && __LIB_2__::func_227(1f, 1, 0, 0))
			{
				if (__LIB_0__::func_264(&uLocal_1055) > 2f)
				{
					__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(8), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1055);
					iLocal_907++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_1067);
			}
			break;
		case 8:
			if (((__LIB_0__::func_264(&uLocal_1055) > 3f && __LIB_2__::func_227(-3f, 1, uLocal_873[4], 1)) && __LIB_2__::func_227(-2f, 1, Global_35, 1)) && __LIB_2__::func_227(-5f, 1, 0, 0))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(7), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
			}
			break;
		case 9:
			if (!bLocal_958)
			{
				if (__LIB_2__::func_227(0f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
				{
					if (__LIB_0__::func_113())
					{
						__LIB_2__::func_303(Global_35, uLocal_873[4], "PLAYER_ACKNOWLEDGEMENT", 0, -1082130432 /* Float: -1f */, 8, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(Global_35, uLocal_873[4], "PLAYER_ACKNOWLEDGMENT", 0, -1082130432 /* Float: -1f */, 5, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					bLocal_958 = true;
				}
			}
			if (__LIB_0__::func_94(Global_35, vLocal_60, 1) <= fLocal_928)
			{
				if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
				{
					__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(9), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1055);
					iLocal_907++;
				}
			}
			break;
		case 10:
			if (__LIB_0__::func_264(&uLocal_1055) > 5f)
			{
				iVar0 = PED::GET_MOUNT(Global_35);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !PED::_0x77243ED4F7CAAA55(iVar0))
				{
					if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
					{
						__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(10), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_907++;
					}
				}
			}
			break;
		case 11:
			if ((__LIB_0__::func_264(&uLocal_1055) > 7f && __LIB_2__::func_227(-2f, 1, uLocal_873[4], 1)) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				__LIB_2__::func_303(Global_35, uLocal_873[4], func_161(11), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
			}
			break;
		case 12:
			if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(12), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
			}
			break;
		case 13:
			if (__LIB_2__::func_227(-2f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
			{
				__LIB_2__::func_303(Global_35, uLocal_873[4], func_161(13), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_907++;
			}
			break;
		case 14:
			if (__LIB_0__::func_94(Global_35, vLocal_60, 1) < 60f)
			{
				__LIB_2__::func_461(0);
				if (__LIB_2__::func_227(-3f, 1, uLocal_873[4], 1) && __LIB_2__::func_227(-2f, 1, Global_35, 1))
				{
					__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(14), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_907++;
				}
			}
			break;
	}
	if (__LIB_0__::func_94(Global_35, vLocal_60, 1) < 60f && iLocal_907 < 14)
	{
		iLocal_907 = 14;
	}
}

void func_310()
{
	switch (iLocal_921)
	{
		case 0:
			__LIB_1__::func_148(&uLocal_1040);
			iLocal_921++;
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1040) >= 20f)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(83), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_1040);
				iLocal_921++;
			}
			break;
		case 2:
			if ((__LIB_2__::func_227(0f, 1, 0, 0) && __LIB_0__::func_264(&uLocal_1040) >= 20f) && iLocal_987 == 0)
			{
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(88), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_996);
				TASK::TASK_DISMOUNT_ANIMAL(0, 4096, 0, 0, 0, 0);
				if ((Local_314.f_51.f_4 == 0 || Local_314.f_51.f_4 == 3) || Local_314.f_51.f_4 == 4)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2949.98f, 523.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, false, false, true, false);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2948.98f, 1352.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, false, false, true, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_996);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_873[4], iLocal_996);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
				func_228(11);
				iLocal_889 = 7;
				iLocal_890 = 0;
				__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
				Local_260[1 /*17*/].f_13 = func_161(103);
				__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
				iLocal_921++;
			}
			break;
	}
}

void func_311()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_998 = PED::GET_MOUNT(Global_35);
	}
	switch (iLocal_891)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(Global_35) && !PED::IS_PED_ON_MOUNT(uLocal_873[4]))
			{
				if (__LIB_4__::func_444(iLocal_998))
				{
					__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(96), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_148(&uLocal_1025);
					iLocal_891 = 1;
				}
			}
			break;
		case 1:
			if (!PED::IS_PED_FACING_PED(uLocal_873[4], Global_35, 50f))
			{
				if (!__LIB_0__::func_163(uLocal_873[4], -875674219))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_873[4], Global_35, 0, -1f, -1f, -1f);
				}
			}
			if (!__LIB_4__::func_444(iLocal_998))
			{
				if (PED::_IS_MOUNT_SEAT_FREE(iLocal_998, 0))
				{
					TASK::TASK_MOUNT_ANIMAL(uLocal_873[4], iLocal_998, -1, 0, 1f, 1, 0, 0);
					iLocal_891 = 2;
				}
			}
			if (__LIB_0__::func_264(&uLocal_1025) >= 40f)
			{
				TASK::_TASK_MOVE_IN_TRAFFIC(uLocal_873[4], -1f, 512, 0);
				__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(74), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				if (bLocal_87)
				{
					PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 2, false);
					PED::SET_PED_CONFIG_FLAG(Global_35, 2, false);
					__LIB_3__::func_552(uLocal_873[4]);
					PED::SET_PED_CONFIG_FLAG(uLocal_873[4], 448, false);
					bLocal_87 = false;
				}
				func_228(12);
			}
			break;
		case 2:
			iLocal_891 = 0;
			break;
	}
}

bool func_312()
{
	int iVar0;
	iVar0 = PED::GET_MOUNT(Global_35);
	switch (iLocal_888)
	{
		case 0:
			if (MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				MAP::REMOVE_BLIP(&iLocal_997);
			}
			__LIB_0__::func_769();
			if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true))
			{
				iLocal_987 = 1;
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				iLocal_988 = 1;
				__LIB_3__::func_460(Global_35, &uLocal_924, 65, 256, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
				func_488(iVar0);
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
				if (!__LIB_0__::func_163(iVar0, -982327190))
				{
					TASK::TASK_STAND_STILL(iVar0, 10000);
				}
				if (TASK::IS_PED_STILL(iVar0) && ENTITY::GET_ENTITY_SPEED(Global_35) <= 0.3f)
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, false);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_109.f_1, "HORSE", iVar0, 0);
					ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY(Local_109.f_1, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 0));
					ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_109.f_1, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					__LIB_0__::func_8(&Global_1935630, 4);
					iLocal_888 = 1;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(uLocal_873[4], true))
			{
				iLocal_987 = 1;
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_1129, 2f, 3, false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256, false);
				iLocal_988 = 1;
				__LIB_1__::func_715(12, 0, 0, "RE_HONOR_HELPED_STRANGER", uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
				__LIB_0__::func_8(&Global_1935630, 4);
				iLocal_888 = 5;
			}
			break;
		case 1:
			ANIMSCENE::START_ANIM_SCENE(Local_109.f_1);
			iLocal_888 = 2;
			break;
		case 2:
			if (iLocal_990 == 0)
			{
				if (fLocal_930 >= 0.316384f)
				{
					func_489(joaat("PROVISION_BRACELET_SILVER"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					__LIB_1__::func_715(12, 0, 0, "RE_HONOR_HELPED_STRANGER", uLocal_873[4], 0, 1065353216 /* Float: 1f */, 0);
					iLocal_990 = 1;
				}
			}
			if (fLocal_930 >= 0.98f)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_873[4], true, true);
				iLocal_888 = 3;
			}
			break;
		case 3:
			if (iLocal_988 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				iLocal_988 = 0;
			}
			__LIB_3__::func_552(uLocal_873[4]);
			func_21();
			iLocal_889 = 7;
			iLocal_890 = 0;
			__LIB_2__::func_360(&(Local_260[0 /*17*/]), "RE_INTER_POS");
			__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
			__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
			__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
			Local_260[0 /*17*/].f_13 = func_161(102);
			Local_260[1 /*17*/].f_13 = func_161(103);
			__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
			__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
			TASK::OPEN_SEQUENCE_TASK(&iLocal_996);
			if ((Local_314.f_51.f_4 == 0 || Local_314.f_51.f_4 == 3) || Local_314.f_51.f_4 == 4)
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2949.98f, 523.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, false, false, true, false);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2948.98f, 1352.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, false, false, true, false);
			}
			TASK::CLOSE_SEQUENCE_TASK(iLocal_996);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_873[4], iLocal_996);
			TASK::CLEAR_SEQUENCE_TASK(&iLocal_996);
			iLocal_888 = 4;
			break;
		case 4:
			if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, Local_109.f_1))
			{
				if (iLocal_988 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_988 = 0;
				}
			}
			if (func_96(0))
			{
				if (iLocal_988 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_988 = 0;
				}
				iLocal_888 = 6;
			}
			break;
		case 5:
			if (func_96(1))
			{
				VEHICLE::_0x7C06330BFDDA182E(iLocal_1129);
				if (iLocal_988 == 1)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
					iLocal_988 = 0;
				}
				func_489(joaat("PROVISION_BRACELET_SILVER"), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				__LIB_3__::func_552(uLocal_873[4]);
				iLocal_889 = 7;
				iLocal_890 = 0;
				__LIB_2__::func_360(&(Local_260[0 /*17*/]), "RE_INTER_POS");
				__LIB_2__::func_360(&(Local_260[1 /*17*/]), "RE_INTER_ANTAGONIZE");
				__LIB_3__::func_158(&(Local_260[0 /*17*/]), 0);
				__LIB_3__::func_158(&(Local_260[1 /*17*/]), 0);
				Local_260[0 /*17*/].f_13 = func_161(102);
				Local_260[1 /*17*/].f_13 = func_161(103);
				__LIB_2__::func_411(&(Local_260[0 /*17*/]), 1, 0);
				__LIB_2__::func_411(&(Local_260[1 /*17*/]), 1, 0);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_995);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				if ((Local_314.f_51.f_4 == 0 || Local_314.f_51.f_4 == 3) || Local_314.f_51.f_4 == 4)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2949.98f, 523.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, false, false, true, false);
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2948.98f, 1352.4f, 44.36f, 1f, -1, 0.25f, 7471108, 40000f);
					TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, vLocal_66, 5f, 0, false, false, true, false);
				}
				TASK::CLOSE_SEQUENCE_TASK(iLocal_995);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_873[4], iLocal_995);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_995);
				iLocal_888 = 6;
			}
			break;
		case 6:
			__LIB_0__::func_8(&Global_1935630, 4);
			if (iLocal_988 == 1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				iLocal_988 = 0;
			}
			return true;
	}
	return false;
}

void func_313()
{
	if (!bLocal_1135)
	{
		__LIB_17__::func_834(4, __LIB_0__::func_113());
		bLocal_1135 = true;
	}
}

void func_314()
{
	if (func_292(Global_35) && !func_293())
	{
		if (iLocal_945 == 0)
		{
			iLocal_945 = 1;
			func_491();
			if (PED::IS_PED_ON_MOUNT(Global_35))
			{
				TASK::TASK_MOUNT_ANIMAL(uLocal_873[4], iLocal_1130, -1, 0, 1.5f, 1, 0, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(Global_35, iLocal_1129, true))
			{
				TASK::TASK_ENTER_VEHICLE(uLocal_873[4], iLocal_1129, -1, 0, 1.5f, 8388608, 0);
			}
			if (iLocal_989 == 1)
			{
				PED::SET_PED_CONFIG_FLAG(Global_35, 448, true);
				PED::SET_PED_RESET_FLAG(Global_35, 318, false);
				iLocal_989 = 0;
			}
			func_23(1);
			__LIB_1__::func_148(&uLocal_1025);
		}
		else if ((!__LIB_0__::func_163(uLocal_873[4], 1227113341) && !__LIB_0__::func_163(uLocal_873[4], 1868526510)) && !__LIB_0__::func_163(uLocal_873[4], -1794415470))
		{
			iLocal_945 = 0;
		}
	}
	if (!func_292(uLocal_873[4]) && !func_292(Global_35))
	{
		if (iLocal_945 == 0)
		{
			if ((!__LIB_0__::func_163(uLocal_873[4], 1227113341) && !__LIB_0__::func_163(uLocal_873[4], 1868526510)) && !__LIB_0__::func_163(uLocal_873[4], -1794415470))
			{
				TASK::TASK_GO_TO_ENTITY(uLocal_873[4], Global_35, -1, 4f, 2f, 2f, 0);
			}
		}
	}
	if (iLocal_951 == 0)
	{
		if (!MAP::DOES_BLIP_EXIST(iLocal_997) && func_292(uLocal_873[4]))
		{
			if (iLocal_980 == 0)
			{
				iLocal_980 = 1;
				iLocal_951 = 1;
				iLocal_941 = 1;
				if (__LIB_0__::func_75(&uLocal_1013))
				{
					__LIB_0__::func_37(&uLocal_1013);
				}
				__LIB_1__::func_148(&uLocal_1001);
				ENTITY::_0x18FF3110CF47115D(iLocal_998, 9, 1);
				iLocal_997 = MAP::_BLIP_ADD_FOR_COORD(408396114, vLocal_60);
				MAP::_BLIP_SET_MODIFIER(iLocal_997, -1878373110);
				MAP::_BLIP_SET_MODIFIER(iLocal_997, 231194138);
				switch (iLocal_1088)
				{
					case 0:
						fLocal_928 = 300f;
						break;
					case 1:
						fLocal_928 = 275f;
						break;
					case 2:
						fLocal_928 = 275f;
						break;
					case 3:
						fLocal_928 = 300f;
						break;
					case 6:
						fLocal_928 = 275f;
						break;
					case 7:
						fLocal_928 = 275f;
						break;
					default:
						fLocal_928 = 300f;
						break;
				}
				__LIB_0__::func_7(&Global_1935630, 4);
			}
		}
	}
}

void func_315()
{
	if (iLocal_978 == 0)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(uLocal_873[4]))
		{
			if (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_JUMP")))
			{
				if (!__LIB_0__::func_75(&uLocal_1049))
				{
					__LIB_1__::func_283(&uLocal_1049, 0);
				}
			}
			if (__LIB_0__::func_264(&uLocal_1049) > 1f)
			{
				if (__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(90), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					iLocal_978 = 1;
					__LIB_0__::func_37(&uLocal_1049);
				}
			}
		}
	}
	if (!__LIB_0__::func_75(&uLocal_1046))
	{
		__LIB_1__::func_148(&uLocal_1046);
	}
	else if (__LIB_0__::func_264(&uLocal_1046) >= 20f)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(uLocal_873[4]))
		{
			if ((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_998) >= 3f && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iLocal_998) < 0.1f) && __LIB_3__::func_332(2251.6f, 314.7f, 46.5f, 1) > 20f)
			{
				if (__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(91), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
				{
					__LIB_0__::func_37(&uLocal_1046);
				}
			}
		}
	}
	if (!__LIB_0__::func_75(&uLocal_1061))
	{
		__LIB_1__::func_148(&uLocal_1061);
	}
	else if (__LIB_0__::func_264(&uLocal_1061) > 6f)
	{
		if (iLocal_979 == 0)
		{
			if (PED::IS_PED_ON_MOUNT(Global_35) && PED::IS_PED_ON_MOUNT(uLocal_873[4]))
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_998) >= 1.5f)
				{
					if (PED::_0x498F2E77982D6945(Global_35, "FoliageActive") && PED::_0x56E58D4D118FB45E(Global_35, "FoliageHeight") >= 1.8f)
					{
						if (__LIB_2__::func_303(uLocal_873[4], Global_35, func_161(92), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
						{
							iLocal_979 = 1;
						}
					}
				}
			}
		}
	}
}

void func_316()
{
	if (func_494(uLocal_873[4]))
	{
		if (func_494(Global_35))
		{
			if (MAP::DOES_BLIP_EXIST(iLocal_880[4]))
			{
				MAP::REMOVE_BLIP(&(iLocal_880[4]));
			}
			if (!MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				iLocal_997 = MAP::_BLIP_ADD_FOR_COORD(408396114, vLocal_60);
				MAP::_BLIP_SET_MODIFIER(iLocal_997, -1878373110);
			}
		}
		else
		{
			if (!MAP::DOES_BLIP_EXIST(iLocal_880[4]))
			{
				iLocal_880[4] = MAP::_BLIP_ADD_FOR_ENTITY(-89429847, uLocal_873[4]);
			}
			if (MAP::DOES_BLIP_EXIST(iLocal_997))
			{
				MAP::REMOVE_BLIP(&iLocal_997);
			}
		}
	}
}

void func_318()
{
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_873[4]))
	{
		if (!__LIB_0__::func_75(&uLocal_1141))
		{
			if (func_223())
			{
				__LIB_1__::func_148(&uLocal_1141);
			}
		}
		if (!PED::IS_PED_RAGDOLL(uLocal_873[4]))
		{
			__LIB_3__::func_276(uLocal_873[4], 0, &(Local_314.f_5), &iLocal_1134, 0, 0);
			if (PED::_IS_PED_HOGTIED(uLocal_873[4]) || PED::_IS_PED_LASSOED(uLocal_873[4]))
			{
				if (iLocal_963 == 0)
				{
					iLocal_963 = 1;
					iLocal_914 = 1;
				}
			}
			if (iLocal_1134 == 8)
			{
				if (iLocal_964 == 0)
				{
					iLocal_964 = 1;
					iLocal_914 = 3;
				}
			}
			if (func_495(iLocal_1134))
			{
				if (iLocal_966 == 0)
				{
					iLocal_966 = 1;
					iLocal_914 = 0;
				}
			}
			if ((PED::_0x29FCE825613FEFCA(uLocal_873[4], 500) || PED::_0xD0B7AEB56229D317(Global_35) == uLocal_873[4]) || iLocal_1134 == 2048)
			{
				if (iLocal_965 == 0)
				{
					iLocal_965 = 1;
					iLocal_914 = 2;
				}
			}
			if (func_322())
			{
				if (iLocal_976 == 0)
				{
					iLocal_976 = 1;
					iLocal_914 = 4;
				}
			}
			switch (iLocal_914)
			{
				case 0:
					if (func_234(uLocal_873[4], Global_35, func_161(31), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
				case 1:
					if (func_234(uLocal_873[4], Global_35, func_161(32), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
				case 2:
					if (func_234(uLocal_873[4], Global_35, func_161(33), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
				case 3:
					if (func_234(uLocal_873[4], Global_35, func_161(34), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
				case 4:
					if (func_234(uLocal_873[4], Global_35, func_161(35), 0.8f))
					{
						iLocal_914 = -1;
					}
					break;
			}
		}
	}
}

bool func_321()
{
	if ((((((iLocal_1134 == 2 || iLocal_1134 == 8) || iLocal_1134 == 8192) || iLocal_1134 == 16384) || iLocal_1134 == 2048) || iLocal_1134 == 4) || iLocal_1134 == 256)
	{
		return true;
	}
	return false;
}

bool func_322()
{
	switch (iLocal_898)
	{
		case 0:
			if (PED::IS_PED_ON_MOUNT(uLocal_873[4]))
			{
				iLocal_898 = 1;
			}
			break;
		case 1:
			if ((!PED::IS_PED_ON_MOUNT(uLocal_873[4]) && PED::IS_PED_RAGDOLL(uLocal_873[4])) && iLocal_888 < 1)
			{
				iLocal_898 = 2;
			}
			break;
		case 2:
			return true;
	}
	return false;
}

bool func_323()
{
	int iVar0;
	if (__LIB_3__::func_996(Global_35))
	{
		iVar0 = __LIB_4__::func_5(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == uLocal_873[5])
				{
					return true;
				}
			}
		}
	}
	if (__LIB_3__::func_649(Global_35, uLocal_873[5]))
	{
		return true;
	}
	return false;
}

bool func_324()
{
	if (func_527())
	{
		return ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_873[4], Global_35, 1, 1);
	}
	return false;
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

bool func_470()
{
	if ((!PED::IS_PED_FACING_PED(Global_35, uLocal_873[0], 80f) && !PED::IS_PED_FACING_PED(Global_35, uLocal_873[1], 80f)) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f || (PED::IS_PED_ON_MOUNT(Global_35) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) >= 1f)))
	{
		return true;
	}
	return false;
}

bool func_472()
{
	if ((((PED::IS_PED_FACING_PED(Global_35, uLocal_873[0], 80f) || PED::IS_PED_FACING_PED(Global_35, uLocal_873[1], 80f)) || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_873[0], true, false), 80f)) || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(uLocal_873[1], true, false), 80f)) && (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f || (PED::IS_PED_ON_MOUNT(Global_35) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_35)) >= 1f)))
	{
		return true;
	}
	return false;
}

bool func_480(int iParam0)
{
	if (__LIB_2__::func_118(iLocal_998, 1, 1) <= 10f)
	{
		return false;
	}
	if (PED::_0x1D46B417F926D34D(Global_35))
	{
		return false;
	}
	if ((PED::IS_PED_FACING_PED(Global_35, iParam0, 80f) && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(Global_35) >= 1f) && __LIB_2__::func_118(iLocal_998, 1, 1) <= 20f)
	{
		return false;
	}
	return true;
}

void func_488(int iParam0)
{
	iLocal_312 = iParam0;
	PED::_0x2EB75FB86C41F026(iLocal_312, 3, 0);
	bLocal_313 = true;
}

int func_489(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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
				func_489(__LIB_0__::func_354(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
			__LIB_1__::func_833(iParam0);
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
						func_489(215778062 /* GXTEntry: "Special Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!__LIB_1__::func_707(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0))
					{
						func_489(670273567 /* GXTEntry: "Special River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!__LIB_1__::func_707(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0))
					{
						func_489(-967317137 /* GXTEntry: "Special Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!__LIB_1__::func_707(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0))
					{
						func_489(526074061 /* GXTEntry: "Lake Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!__LIB_1__::func_707(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0))
					{
						func_489(-1045488665 /* GXTEntry: "River Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!__LIB_1__::func_707(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0))
					{
						func_489(471514780 /* GXTEntry: "Swamp Lure Handbill" */, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_489(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
					func_489(__LIB_1__::func_156(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_489(__LIB_0__::func_920(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_489(Var11.f_1[iVar34], Var11.f_12[iVar34], 0, 0, 0, -897553835, 0, 0, 0, 0);
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

void func_491()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_1130 = PED::GET_MOUNT(Global_35);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		iLocal_1129 = PED::GET_VEHICLE_PED_IS_IN(Global_35, true);
	}
}

bool func_494(int iParam0)
{
	if (PED::IS_PED_IN_VEHICLE(iParam0, iLocal_1129, false))
	{
		return true;
	}
	if (__LIB_0__::func_394(iParam0, iLocal_1130, 0))
	{
		return true;
	}
	return false;
}

bool func_495(int iParam0)
{
	if (func_324())
	{
		return true;
	}
	switch (iParam0)
	{
		case 4:
		case 256:
		case 2048:
		case 8192:
			return !func_739();
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

bool func_527()
{
	if (!bLocal_1137)
	{
		if (bLocal_1138)
		{
			return false;
		}
	}
	return true;
}

bool func_739()
{
	if (!__LIB_0__::func_75(&uLocal_1141))
	{
		return true;
	}
	return !__LIB_1__::func_285(&uLocal_1141, 3f);
}

