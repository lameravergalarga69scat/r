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
	struct<8> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_27 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<193> Local_35 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1097859072, 1103626240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1176256512, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1082130432, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_228 = 0;
	struct<2> Local_229[4];
	int iLocal_238 = 0;
	struct<32> Local_239[14];
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
	var uLocal_698 = -1;
	var uLocal_699 = -1;
	var uLocal_700 = 1065353216;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = -1082130432;
	var uLocal_707 = 0;
	var uLocal_708 = 3;
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
	var uLocal_737 = 1065353216;
	var uLocal_738 = 1119092736;
	var uLocal_739 = 1092616192;
	var uLocal_740 = 1085276160;
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
	var uLocal_760 = -1;
	var uLocal_761 = -1;
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
	struct<87> Local_782 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, -1082130432, -1082130432, -1082130432, 1, 1050253722, 3000, 6000, 0 } ;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = -1;
	int iLocal_873 = 0;
	int iLocal_874 = 0;
	struct<7> Local_875 = { 0, 0, 0, -1, 0, 0, 1 } ;
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
	var uLocal_902 = 0;
	var uLocal_903 = 15;
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
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
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
	vector3 vLocal_1040 = { 0f, 0f, 10000f };
	var uLocal_1043 = 0;
	int iLocal_1044 = 0;
	int iLocal_1045 = 0;
	struct<21> Local_1046[1];
	struct<17> Local_1068[3];
	int iLocal_1120 = 0;
	var uLocal_1121[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_1136[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	var uLocal_1154 = 0;
	int iLocal_1155 = 0;
	var uLocal_1156 = 4;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
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
	var uLocal_1188 = 0;
	struct<4> Local_1189[32];
	char cLocal_1318[32] = "";
	char cLocal_1322[32] = "";
	char cLocal_1326[32] = "";
	char cLocal_1330[32] = "";
	char cLocal_1334[32] = "";
	char cLocal_1338[32] = "";
	char cLocal_1342[32] = "";
	float fLocal_1346 = 0f;
	float fLocal_1347 = 0f;
	int iLocal_1348 = 0;
	int iLocal_1349 = 0;
	int iLocal_1350 = 0;
	int iLocal_1351 = 0;
	int iLocal_1352 = 0;
	int iLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	int iLocal_1356 = 0;
	int iLocal_1357 = 0;
	int iLocal_1358 = 0;
	bool bLocal_1359 = false;
	vector3 vLocal_1360[2] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f } };
	bool bLocal_1367 = false;
	bool bLocal_1368 = false;
	bool bLocal_1369 = false;
	bool bLocal_1370 = false;
	var uLocal_1371 = 0;
	int iLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	bool bLocal_1376 = false;
	bool bLocal_1377 = false;
	int iLocal_1378 = 0;
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
	iLocal_1356 = 4;
	iLocal_1378 = -1;
	Local_35.f_3 = __LIB_0__::func_81(&vScriptParam_0);
	Local_35.f_43 = __LIB_0__::func_12();
	Local_35.f_161 = __LIB_0__::func_27(vScriptParam_0.z, 2);
	__LIB_3__::func_420(&Local_35, 1);
	__LIB_2__::func_290(&(Local_35.f_5));
	__LIB_2__::func_111(&(Local_35.f_5), 1);
	__LIB_2__::func_110(&(Local_35.f_5), 1);
	__LIB_2__::func_662(&(Local_35.f_5), 0);
	__LIB_2__::func_182(&(Local_35.f_5), 1);
	__LIB_3__::func_977(&(Local_35.f_5), 0);
	iLocal_17 = __LIB_3__::func_390(Local_35.f_3, 1, 0);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		bLocal_1369 = true;
	}
	while (true)
	{
		__LIB_2__::func_265(bLocal_1369, 944, 0);
		if (bLocal_1369)
		{
			BUILTIN::WAIT(0);
		}
		else
		{
			switch (iLocal_18)
			{
				case 0:
					if (func_14())
					{
						iLocal_18 = 1;
					}
					break;
				case 1:
					if (__LIB_19__::func_435(&Local_35, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_16(&Local_35, &iLocal_1372, &uLocal_1371);
						func_17();
						iLocal_18 = 3;
					}
					else if (Local_35.f_160)
					{
						func_12();
					}
					break;
				case 3:
					if (func_18())
					{
						func_19();
						func_20();
						func_21(0);
						func_22();
						if (iLocal_1372 != 10)
						{
						}
						else
						{
							__LIB_3__::func_806(0, &Local_782, &uLocal_688, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
						}
						__LIB_1__::func_336(&iLocal_238, 32);
						func_25();
						iLocal_18 = 4;
					}
					break;
				case 4:
					if (!__LIB_17__::func_890(&Local_35, &uLocal_1121, iLocal_17, 0, 1, 0, 1, 0))
					{
						func_12();
					}
					if (!Local_35.f_46)
					{
						if (bLocal_1370)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_1121[0]))
							{
								__LIB_3__::func_689(uLocal_1121[0]);
							}
						}
					}
					if (!Local_35.f_46)
					{
						if (func_28() || __LIB_0__::func_27(iLocal_238, 268435456))
						{
							if (__LIB_0__::func_27(iLocal_238, 268435456))
							{
							}
							Local_35.f_46 = 1;
							__LIB_0__::func_769();
							__LIB_3__::func_334(&uLocal_1136);
							__LIB_3__::func_726(Local_875);
							__LIB_6__::func_675();
							__LIB_2__::func_480(&Local_1068, 1, 1, 1, 0);
							if (!__LIB_0__::func_27(iLocal_238, 33554432))
							{
								func_34();
							}
							iLocal_15 = 16;
						}
					}
					if (func_35())
					{
						Local_35.f_50 = 1;
						func_12();
					}
					if (__LIB_3__::func_431(&Local_35, &uLocal_1121, !Local_35.f_50, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						func_12();
					}
					break;
			}
			BUILTIN::WAIT(Local_35.f_158);
		}
	}
}

void func_12()
{
	__LIB_2__::func_353(&uLocal_1043, 1);
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1121[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1121[0], false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1121[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1121[1]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1121[1], false);
		PED::SET_PED_CONFIG_FLAG(uLocal_1121[1], 243, false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_1121[1]));
	}
	__LIB_3__::func_493(&Local_35, &uLocal_1121, &uLocal_1136, iLocal_17, iLocal_1372, uLocal_1371, 0, 1, 1, 1);
	if (iLocal_1372 == 10 && __LIB_0__::func_27(iLocal_238, 32))
	{
		__LIB_3__::func_806(1, &Local_782, &uLocal_688, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1151))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1151);
	}
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1152))
	{
		VOLUME::_DELETE_VOLUME(iLocal_1152);
	}
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::GET_PLAYER_INDEX(), false, 0, -1, false);
	__LIB_6__::func_675();
	if (bLocal_1368)
	{
		PED::SET_PED_CONFIG_FLAG(Global_35, 514, false);
		bLocal_1368 = false;
	}
	__LIB_13__::func_195(&Local_782, &uLocal_688);
	func_48(1);
	func_49();
	func_50();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_14()
{
	switch (iLocal_14)
	{
		case 0:
			if (__LIB_3__::func_308(&Local_35))
			{
				iLocal_873 = __LIB_0__::func_12();
				func_53();
				func_54();
				func_55();
				iLocal_14 = 1;
			}
			break;
		case 1:
			if (!__LIB_3__::func_315(&uLocal_1156))
			{
				return false;
			}
			if (!__LIB_3__::func_449(&Local_239))
			{
				return false;
			}
			return true;
	}
	return false;
}

void func_16(var uParam0, int iParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*iParam1 = 9;
			*uParam2 = 0;
			break;
		case 1:
			*iParam1 = 10;
			*uParam2 = 0;
			break;
	}
}

void func_17()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		__LIB_3__::func_754(&(Local_239[iVar0 /*32*/].f_22));
		iVar0++;
	}
	switch (iLocal_873)
	{
		case 76:
			Local_239[0 /*32*/].f_6 = { -346.4771f, 735.5283f, 116.4082f };
			Local_239[0 /*32*/].f_9 = 14.4829f;
			Local_239[1 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_239[0 /*32*/].f_6, Local_239[0 /*32*/].f_9, 0f, 10.5f, 0f) };
			Local_239[1 /*32*/].f_9 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_239[0 /*32*/].f_6 - Local_239[1 /*32*/].f_6), (Local_239[0 /*32*/].f_6.f_1 - Local_239[1 /*32*/].f_6.f_1));
			Local_239[2 /*32*/].f_6 = { -353.117f, 734.682f, 116.082f };
			Local_239[2 /*32*/].f_9 = -53.853f;
			Local_239[3 /*32*/].f_6 = { -353.117f, 734.682f, 116.082f };
			Local_239[3 /*32*/].f_9 = -53.853f;
			Local_239[4 /*32*/].f_6 = { -324.756f, 739.587f, 116.538f };
			Local_239[4 /*32*/].f_9 = 96.065f;
			Local_239[5 /*32*/].f_6 = { -324.756f, 739.587f, 116.538f };
			Local_239[5 /*32*/].f_9 = 96.065f;
			Local_239[6 /*32*/].f_6 = { -338.8194f, 761.5798f, 116.6062f };
			Local_239[6 /*32*/].f_9 = 134.873f;
			Local_239[7 /*32*/].f_6 = { -342.27f, 717.97f, 116.622f };
			Local_239[7 /*32*/].f_9 = 41.92f;
			Local_239[8 /*32*/].f_6 = { -343.07f, 717.73f, 116.622f };
			Local_239[8 /*32*/].f_9 = -35.16f;
			Local_239[9 /*32*/].f_6 = { -355.795f, 748.096f, 115.68f };
			Local_239[9 /*32*/].f_9 = -125.813f;
			Local_239[10 /*32*/].f_6 = { -355.795f, 748.096f, 115.68f };
			Local_239[10 /*32*/].f_9 = -125.813f;
			Local_239[11 /*32*/].f_6 = { -328.678f, 754.037f, 116.096f };
			Local_239[11 /*32*/].f_9 = -3.124f;
			Local_239[12 /*32*/].f_6 = { -328.678f, 754.037f, 116.096f };
			Local_239[12 /*32*/].f_9 = -3.124f;
			Local_239[13 /*32*/].f_6 = { -328.678f, 754.037f, 116.096f };
			Local_239[13 /*32*/].f_9 = -3.124f;
			break;
		case 92:
			Local_239[0 /*32*/].f_6 = { 2956.972f, 518.731f, 43.95716f };
			Local_239[0 /*32*/].f_9 = -1.91f;
			Local_239[1 /*32*/].f_6 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_239[0 /*32*/].f_6, Local_239[0 /*32*/].f_9, 0f, 10.5f, 0f) };
			Local_239[1 /*32*/].f_9 = MISC::GET_HEADING_FROM_VECTOR_2D((Local_239[0 /*32*/].f_6 - Local_239[1 /*32*/].f_6), (Local_239[0 /*32*/].f_6.f_1 - Local_239[1 /*32*/].f_6.f_1));
			Local_239[2 /*32*/].f_6 = { 2967.377f, 534.855f, 42.684f };
			Local_239[2 /*32*/].f_9 = 148.123f;
			Local_239[3 /*32*/].f_6 = { 2967.377f, 534.855f, 42.684f };
			Local_239[3 /*32*/].f_9 = 148.123f;
			Local_239[4 /*32*/].f_6 = { 2953.076f, 532.356f, 43.783f };
			Local_239[4 /*32*/].f_9 = -164.591f;
			Local_239[5 /*32*/].f_6 = { 2953.076f, 532.356f, 43.783f };
			Local_239[5 /*32*/].f_9 = -164.591f;
			Local_239[6 /*32*/].f_6 = { 2954.992f, 544.578f, 43.811f };
			Local_239[6 /*32*/].f_9 = -173.237f;
			Local_239[7 /*32*/].f_6 = { 2966.757f, 505.9f, 44.21f };
			Local_239[7 /*32*/].f_9 = -135.91f;
			Local_239[8 /*32*/].f_6 = { 2966.757f, 505.9f, 44.21f };
			Local_239[8 /*32*/].f_9 = -135.91f;
			Local_239[9 /*32*/].f_6 = { 2969.58f, 504.118f, 44.036f };
			Local_239[9 /*32*/].f_9 = 62.425f;
			Local_239[10 /*32*/].f_6 = { 2969.58f, 504.118f, 44.036f };
			Local_239[10 /*32*/].f_9 = 62.425f;
			Local_239[11 /*32*/].f_6 = { 2955.397f, 498.389f, 44.792f };
			Local_239[11 /*32*/].f_9 = -119.179f;
			Local_239[12 /*32*/].f_6 = { 2955.397f, 498.389f, 44.792f };
			Local_239[12 /*32*/].f_9 = -119.179f;
			Local_239[13 /*32*/].f_6 = { 2955.397f, 498.389f, 44.792f };
			Local_239[13 /*32*/].f_9 = -119.179f;
			break;
	}
}

bool func_18()
{
	switch (iLocal_16)
	{
		case 0:
			if (!__LIB_4__::func_224(&Local_35, &uLocal_903, &Local_239, 0, 1, 1, 0, -1))
			{
				func_12();
			}
			iLocal_16 = 1;
			break;
		case 1:
			if (!__LIB_17__::func_841(&uLocal_903, &Local_239, &uLocal_1121, 1, 1, 0, -1))
			{
				return false;
			}
			iLocal_16 = 6;
			return true;
		case 6:
			return true;
	}
	return false;
}

void func_19()
{
	int iVar0;
	__LIB_2__::func_231(uLocal_1121[0], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1121[0], 5, true);
	__LIB_2__::func_133(uLocal_1121[0], &(Local_239[0 /*32*/].f_23), 0);
	__LIB_2__::func_231(uLocal_1121[1], __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */), 0, 0, 0, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1121[1], 5, true);
	__LIB_2__::func_133(uLocal_1121[1], &(Local_239[1 /*32*/].f_23), 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_1121[1], 243, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_1121[1], 5, true);
	__LIB_3__::func_285(uLocal_1121[0], &Local_35, 0);
	__LIB_3__::func_285(uLocal_1121[1], &Local_35, 0);
	iVar0 = 1;
	while (iVar0 <= 13)
	{
		__LIB_3__::func_174(uLocal_1121[iVar0], 1);
		iVar0++;
	}
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_1121[1], 0, 1);
	PED::SET_PED_CONFIG_FLAG(uLocal_1121[0], 6, true);
	PED::SET_PED_CONFIG_FLAG(uLocal_1121[1], 6, true);
	DECORATOR::DECOR_SET_BOOL(uLocal_1121[0], "bBeatPed", true);
	DECORATOR::DECOR_SET_BOOL(uLocal_1121[1], "bBeatPed", true);
}

void func_20()
{
	Local_19.f_4 = "script@beat@town@duelWinner@duelPreDuelerA";
	Local_19.f_5 = "script@beat@town@duelWinner@duelPreDuelerB";
	Local_19.f_6 = "script@beat@town@duelWinner@crowdA_MaleFemale";
	Local_19.f_7 = "script@beat@town@duelWinner@crowdB_MaleMale";
	Local_27.f_4 = "script@beat@town@duelWinner@crowdC_Male";
	Local_27.f_5 = "script@beat@town@duelWinner@crowdD_MaleMale";
	Local_27.f_6 = "script@beat@town@duelWinner@crowdE_MaleFemale";
	Local_27.f_7 = "script@beat@town@duelWinner@crowdF_MaleMaleFemale";
}

void func_21(int iParam0)
{
	Local_782 = Global_35;
	Local_782.f_1 = uLocal_1121[0];
	Local_782.f_45 = { Local_239[0 /*32*/].f_6 };
	Local_782.f_42 = { Local_239[1 /*32*/].f_6 };
	__LIB_3__::func_775(&Local_782, 1);
	if (iParam0 == 0)
	{
		__LIB_4__::func_869(&Local_782, 2);
	}
	else
	{
		__LIB_4__::func_869(&Local_782, 3);
	}
}

void func_22()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			if (iLocal_17 == 0)
			{
				StringCopy(&(Local_1189[1 /*4*/]), func_73("WINNER_CHEATER"), 32);
				StringCopy(&(Local_1189[2 /*4*/]), func_73("LOSER_WON_GAME"), 32);
				StringCopy(&(Local_1189[3 /*4*/]), func_73("WINNER_DENY"), 32);
				StringCopy(&(Local_1189[4 /*4*/]), func_73("LOSER_DEFEND"), 32);
				StringCopy(&(Local_1189[5 /*4*/]), func_73("WINNER_CHAL"), 32);
				StringCopy(&(Local_1189[6 /*4*/]), func_73("LOSER_AGREE"), 32);
				StringCopy(&(Local_1189[22 /*4*/]), func_73("WINNER_MOVE"), 32);
				StringCopy(&cLocal_1318, func_73("OFFER_POSSE"), 32);
				StringCopy(&cLocal_1322, func_73("OFFER"), 32);
				StringCopy(&cLocal_1326, func_73("OFFER_SICK"), 32);
				StringCopy(&cLocal_1330, func_73("SCARED_POSSE"), 32);
				StringCopy(&cLocal_1334, func_73("SCARED"), 32);
				StringCopy(&cLocal_1338, func_73("SCARED_SICK"), 32);
				StringCopy(&cLocal_1342, func_73("DUELER_RESPOND"), 32);
			}
			break;
		case 92:
			if (iLocal_17 == 0)
			{
				StringCopy(&(Local_1189[0 /*4*/]), func_73("ARGUE_MIND"), 32);
				StringCopy(&(Local_1189[1 /*4*/]), func_73("ARGUE"), 32);
				StringCopy(&(Local_1189[3 /*4*/]), func_73("ACCUSE"), 32);
				StringCopy(&(Local_1189[4 /*4*/]), func_73("DENY"), 32);
				StringCopy(&(Local_1189[5 /*4*/]), func_73("ASK"), 32);
				StringCopy(&(Local_1189[6 /*4*/]), func_73("DADDY"), 32);
				StringCopy(&(Local_1189[7 /*4*/]), func_73("INSULT"), 32);
				StringCopy(&(Local_1189[8 /*4*/]), func_73("THREAT_MIND"), 32);
				StringCopy(&(Local_1189[9 /*4*/]), func_73("ANGER"), 32);
				StringCopy(&(Local_1189[10 /*4*/]), func_73("MOVEMENT"), 32);
				StringCopy(&(Local_1189[11 /*4*/]), func_73("THREAT"), 32);
				StringCopy(&(Local_1189[12 /*4*/]), func_73("ACCEPT"), 32);
				StringCopy(&(Local_1189[22 /*4*/]), func_73("CHALLENGE"), 32);
				StringCopy(&cLocal_1318, func_73("OFFER_POSSE"), 32);
				StringCopy(&cLocal_1322, func_73("OFFER"), 32);
				StringCopy(&cLocal_1326, func_73("OFFER"), 32);
				StringCopy(&cLocal_1330, func_73("SCARED_POSSE"), 32);
				StringCopy(&cLocal_1334, func_73("SCARED"), 32);
				StringCopy(&cLocal_1338, "INSULT_RESPONSE_SICK", 32);
				StringCopy(&cLocal_1342, "ACCEPT_DUEL", 32);
			}
			break;
	}
}

void func_25()
{
	Local_19 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_4, 0, "pblPacingIdles", false, true);
	Local_19.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_5, 0, "pblPacingIdles", false, true);
	Local_19.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_6, 0, "pblPreDuel", false, true);
	Local_19.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_19.f_7, 0, "pblPreDuel", false, true);
	Local_27 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_4, 0, "pblPreDuel", false, true);
	Local_27.f_1 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_5, 0, "pblPreDuel", false, true);
	Local_27.f_2 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_6, 0, "pblPreDuel", false, true);
	Local_27.f_3 = ANIMSCENE::_CREATE_ANIM_SCENE(Local_27.f_7, 0, "pblPreDuel", false, true);
	__LIB_3__::func_409(&(Local_239[0 /*32*/].f_6), 1088421888 /* Float: 7f */);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19, Local_239[0 /*32*/].f_6, 0f, 0f, Local_239[0 /*32*/].f_9, 2);
	if (__LIB_2__::func_1(uLocal_1121[0], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19, "pedDuelA", uLocal_1121[0], 0);
	}
	__LIB_3__::func_409(&(Local_239[1 /*32*/].f_6), 1088421888 /* Float: 7f */);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_1, Local_239[1 /*32*/].f_6, 0f, 0f, Local_239[1 /*32*/].f_9, 2);
	if (__LIB_2__::func_1(uLocal_1121[1], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_1, "pedDuelB", uLocal_1121[1], 0);
	}
	__LIB_3__::func_409(&(Local_239[2 /*32*/].f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_2, Local_239[2 /*32*/].f_6, 0f, 0f, Local_239[2 /*32*/].f_9, 2);
	if (__LIB_2__::func_1(uLocal_1121[2], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_2, "pedCrowdFemaleA", uLocal_1121[2], 0);
	}
	if (__LIB_2__::func_1(uLocal_1121[3], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_2, "pedCrowdMaleA", uLocal_1121[3], 0);
	}
	__LIB_3__::func_409(&(Local_239[4 /*32*/].f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_3, Local_239[4 /*32*/].f_6, 0f, 0f, Local_239[4 /*32*/].f_9, 2);
	if (__LIB_2__::func_1(uLocal_1121[4], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_3, "pedCrowdMaleA", uLocal_1121[4], 0);
	}
	if (__LIB_2__::func_1(uLocal_1121[5], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_3, "pedCrowdMaleB", uLocal_1121[5], 0);
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27, Local_239[6 /*32*/].f_6, 0f, 0f, Local_239[6 /*32*/].f_9, 2);
	if (__LIB_2__::func_1(uLocal_1121[6], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27, "pedCrowdMaleA", uLocal_1121[6], 0);
	}
	__LIB_3__::func_409(&(Local_239[7 /*32*/].f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_1, Vector(116.362f, 717.985f, -342.291f) - Vector(0f, -1.245f, -2.09f), 0f, 0f, -178.125f, 2);
	if (__LIB_2__::func_1(uLocal_1121[7], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_1, "pedCrowdMaleA", uLocal_1121[7], 0);
	}
	if (__LIB_2__::func_1(uLocal_1121[8], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_1, "pedCrowdMaleB", uLocal_1121[8], 0);
	}
	__LIB_3__::func_409(&(Local_239[9 /*32*/].f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_2, Local_239[9 /*32*/].f_6, 0f, 0f, Local_239[9 /*32*/].f_9, 2);
	if (__LIB_2__::func_1(uLocal_1121[9], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_2, "pedCrowdFemaleA", uLocal_1121[9], 0);
	}
	if (__LIB_2__::func_1(uLocal_1121[10], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_2, "pedCrowdMaleA", uLocal_1121[10], 0);
	}
	__LIB_3__::func_409(&(Local_239[11 /*32*/].f_6), 2f);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_3, Local_239[11 /*32*/].f_6, 0f, 0f, Local_239[11 /*32*/].f_9, 2);
	if (__LIB_2__::func_1(uLocal_1121[11], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_3, "pedCrowdFemaleA", uLocal_1121[11], 0);
	}
	if (__LIB_2__::func_1(uLocal_1121[12], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_3, "pedCrowdMaleA", uLocal_1121[12], 0);
	}
	if (__LIB_2__::func_1(uLocal_1121[13], 0, 1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_27.f_3, "pedCrowdMaleB", uLocal_1121[13], 0);
	}
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_1);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_2);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_3);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27.f_1);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27.f_2);
	ANIMSCENE::LOAD_ANIM_SCENE(Local_27.f_3);
}

bool func_28()
{
	bool bVar0;
	bool bVar1;
	if (__LIB_0__::func_27(iLocal_238, -2147483648))
	{
		if (!bLocal_1370)
		{
			__LIB_3__::func_237(&(Local_35.f_5), &iLocal_874);
			EVENT::_0xB6F4825153920582();
			return false;
		}
	}
	bVar0 = (!bLocal_1370 && __LIB_4__::func_8(&uLocal_1121, &(Local_35.f_5), &iLocal_874, &uLocal_1354, 0, 1, 2));
	bVar1 = (!bVar0 && __LIB_4__::func_8(&uLocal_1121, &(Local_35.f_5), &iLocal_874, &uLocal_1355, 2, 13, 1));
	if (bVar0 && iLocal_874 != 0)
	{
		if (__LIB_1__::func_339(iLocal_874, 1, 1, 0, 0))
		{
			bLocal_1376 = true;
		}
	}
	if (bVar0 || bVar1)
	{
		if (bLocal_1370)
		{
			switch (iLocal_874)
			{
				case 1:
				case 2:
				case 8:
				case 16:
				case 512:
				case 1024:
				case 2048:
				case 16384:
					bLocal_1370 = false;
					bLocal_1376 = true;
					return true;
				default:
					break;
			}
		}
		else
		{
			if (iLocal_874 == 16384)
			{
				if (!func_91())
				{
					return false;
				}
				bLocal_1376 = true;
			}
			if (__LIB_1__::func_339(iLocal_874, 1, 1, 1, 1))
			{
				bLocal_1376 = true;
				if (iLocal_15 < 14)
				{
					bLocal_1377 = true;
				}
			}
			return true;
		}
	}
	if (bLocal_1370)
	{
		if (!__LIB_2__::func_1(uLocal_1121[0], 0, 1))
		{
			if (!__LIB_0__::func_75(&uLocal_1373))
			{
				__LIB_1__::func_148(&uLocal_1373);
			}
			else if (__LIB_1__::func_313(&uLocal_1373, 3f))
			{
				bLocal_1370 = false;
			}
		}
		EVENT::_0xB6F4825153920582();
	}
	return false;
}

void func_34()
{
	int iVar0;
	iVar0 = 2;
	while (iVar0 <= 13)
	{
		if (__LIB_2__::func_1(uLocal_1121[iVar0], 0, 1))
		{
			TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1121[iVar0], Global_35, 4, 0, 200f, -1, 0);
			PED::SET_PED_KEEP_TASK(uLocal_1121[iVar0], true);
		}
		iVar0++;
	}
}

bool func_35()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	func_98(0);
	func_99();
	func_100();
	func_101();
	func_102();
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iLocal_1155 = PED::GET_MOUNT(Global_35);
	}
	switch (iLocal_15)
	{
		case 0:
			if (func_103())
			{
				func_104();
				func_105(1);
				func_48(0);
				func_106();
				func_107(-1f);
				uLocal_1043 = GRAPHICS::_0xFA50F79257745E74(ENTITY::GET_ENTITY_COORDS(uLocal_1121[0], true, false), 13f, 1, 316, 0);
				ANIMSCENE::START_ANIM_SCENE(Local_19);
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_19, 1.1f);
				ANIMSCENE::START_ANIM_SCENE(Local_19.f_1);
				ANIMSCENE::SET_ANIM_SCENE_RATE(Local_19.f_1, 1.1f);
				ANIMSCENE::START_ANIM_SCENE(Local_19.f_2);
				ANIMSCENE::START_ANIM_SCENE(Local_19.f_3);
				ANIMSCENE::START_ANIM_SCENE(Local_27);
				ANIMSCENE::START_ANIM_SCENE(Local_27.f_1);
				ANIMSCENE::START_ANIM_SCENE(Local_27.f_2);
				ANIMSCENE::START_ANIM_SCENE(Local_27.f_3);
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19, "pblEnterEarly");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_1, "pblEnterEarly");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19, "pblEnterNormal");
				ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_1, "pblEnterNormal");
				func_108("pblPreDuel");
				func_108("pblDuel");
				iLocal_15 = 1;
			}
			break;
		case 1:
			if (func_109(&Local_35, &vLocal_1040, 2f, 70f, 45f, 1500, 1065353216 /* Float: 1f */, 1065353216 /* Float: 1f */, 1, 0, 1, -1082130432 /* Float: -1f */, 1, 0, 0))
			{
				func_110(&Local_35);
				vLocal_1040.x = 0;
				vLocal_1040.f_1 = 0;
				vLocal_1040.f_2 = 10000f;
				func_107(1092616192 /* Float: 10f */);
				__LIB_3__::func_164(&(Local_35.f_121));
				iLocal_15 = 2;
			}
			break;
		case 2:
			if (func_111(8f))
			{
				bVar0 = true;
			}
			else if (func_112())
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				if (!__LIB_0__::func_27(iLocal_238, 262144) && !__LIB_0__::func_27(iLocal_238, 524288))
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], -1329557607))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_19, "pblEnterEarly") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_19.f_1, "pblEnterEarly"))
						{
							__LIB_1__::func_336(&iLocal_238, 262144);
						}
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], -2037335242))
					{
						if (ANIMSCENE::_0x23E33CB9F4A3F547(Local_19, "pblEnterNormal") && ANIMSCENE::_0x23E33CB9F4A3F547(Local_19.f_1, "pblEnterNormal"))
						{
							__LIB_1__::func_336(&iLocal_238, 524288);
						}
					}
				}
				if (__LIB_0__::func_27(iLocal_238, 262144))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19, "pblEnterEarly", true);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_1, "pblEnterEarly", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19, "bDrawIdle", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_1, "bDrawIdle", true, false);
					func_113("bDrawIdle", 1);
					__LIB_3__::func_164(&(Local_35.f_121));
					iLocal_15 = 3;
				}
				else if (__LIB_0__::func_27(iLocal_238, 524288))
				{
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19, "pblEnterNormal", true);
					ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_1, "pblEnterNormal", true);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19, "bDrawIdle", true, false);
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_1, "bDrawIdle", true, false);
					func_113("bDrawIdle", 1);
					__LIB_3__::func_164(&(Local_35.f_121));
					iLocal_15 = 3;
				}
			}
			break;
		case 3:
			if (!__LIB_0__::func_75(&uLocal_897))
			{
				__LIB_1__::func_148(&uLocal_897);
			}
			if ((bLocal_1359 || func_111(10f)) || __LIB_0__::func_264(&uLocal_897) > 8f)
			{
				func_115();
				iLocal_15 = 4;
			}
			break;
		case 4:
			__LIB_2__::func_461(0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19, "bDraw", true, false);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_1, "bDraw", true, false);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], joaat("SHOTFIRED")))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING"), uLocal_1121[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_2__::func_315(1066055203, uLocal_1121[0], 1);
			}
			iLocal_15 = 5;
			break;
		case 5:
			func_118();
			PED::SET_PED_RESET_FLAG(uLocal_1121[0], 5, true);
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[1], joaat("PEDDEAD")))
			{
				if (func_111(40f))
				{
					Local_35.f_44 = 1;
				}
				__LIB_1__::func_336(&iLocal_238, 1048576);
				__LIB_1__::func_864(uLocal_1121[1], 0, 0);
				func_120();
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[1], -698244996))
			{
				__LIB_3__::func_319(Local_19.f_1);
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], joaat("SHOTFIRED")))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING"), uLocal_1121[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_2__::func_315(1066055203, uLocal_1121[0], 1);
			}
			if (__LIB_2__::func_598(uLocal_1121[1], Local_19.f_1, "pedDuelB", 0, 0, 1, 0))
			{
				if (!__LIB_0__::func_27(iLocal_238, 1048576))
				{
					__LIB_1__::func_336(&iLocal_238, 268435456);
					return false;
				}
			}
			if (__LIB_2__::func_598(uLocal_1121[0], Local_19, "pedDuelA", 2116222025, 0, 1, 0))
			{
				if (!__LIB_0__::func_27(iLocal_238, 1048576))
				{
					__LIB_1__::func_336(&iLocal_238, 268435456);
				}
				else if (!bLocal_1359)
				{
					iLocal_15 = 6;
				}
				else
				{
					return true;
				}
			}
			break;
		case 6:
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], joaat("SHOTFIRED")))
			{
				EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_ALARMING"), uLocal_1121[0], -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
				__LIB_2__::func_315(1066055203, uLocal_1121[0], 1);
			}
			Local_782 = Global_35;
			Local_782.f_1 = uLocal_1121[0];
			func_108("pblPreDuel");
			iLocal_15 = 7;
			break;
		case 7:
			func_123();
			if (__LIB_2__::func_598(uLocal_1121[0], Local_19, "pedDuelA", 0, 0, 1, 0))
			{
				iVar1 = 1;
			}
			if (iVar1 || func_124())
			{
				Local_35.f_49 = 1;
				if (iLocal_17 == 0)
				{
					__LIB_1__::func_148(&uLocal_882);
					iLocal_15 = 8;
				}
			}
			else if (__LIB_2__::func_118(uLocal_1121[0], 1, 1) <= 15f && func_126())
			{
				func_127();
			}
			func_128();
			func_129();
			break;
		case 8:
			func_123();
			func_128();
			func_129();
			func_130();
			if (__LIB_2__::func_118(uLocal_1121[0], 1, 1) <= 15f && func_126())
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_1121[0]))
				{
					__LIB_3__::func_859(&(uLocal_1121[0]), 0, 0, 1, 0, 0, 0, 1);
					if (!__LIB_0__::func_27(iLocal_238, 16777216))
					{
						func_132(uLocal_1121[0]);
					}
					if (func_133() == 0)
					{
						__LIB_1__::func_240(205, 0);
					}
					else
					{
						__LIB_1__::func_240(202, 0);
					}
					fLocal_1347 = 10f;
					__LIB_1__::func_148(&uLocal_882);
					func_105(1);
					func_135();
					iLocal_15 = 9;
				}
				else
				{
					func_127();
				}
			}
			else if (__LIB_0__::func_265(&uLocal_882) > 30f)
			{
				iLocal_15 = 11;
			}
			break;
		case 9:
			func_123();
			func_128();
			func_129();
			func_130();
			__LIB_3__::func_859(&(uLocal_1121[0]), 0, 0, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_598(uLocal_1121[0], Local_19, "pedDuelA", 0, 0, 1, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1121[0], 1435919172, true) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_1121[0], Global_35, -1, -1f, -1f, -1f);
				}
			}
			if (iLocal_1120 == 0 || iLocal_1120 == 1)
			{
				__LIB_0__::func_516(&iLocal_238, 2097152);
				func_105(0);
				iLocal_15 = 10;
			}
			if (__LIB_0__::func_265(&uLocal_882) > fLocal_1347)
			{
				__LIB_1__::func_148(&uLocal_882);
				func_137();
				__LIB_1__::func_336(&iLocal_238, 33554432);
				__LIB_0__::func_516(&iLocal_238, 2097152);
				func_105(1);
				iLocal_15 = 11;
			}
			else
			{
				func_138();
				func_139(Local_19.f_3, &iLocal_238, 4096, 4, 5);
			}
			break;
		case 10:
			func_123();
			__LIB_3__::func_859(&(uLocal_1121[0]), 0, 0, 1, 0, 0, 0, 1);
			func_130();
			if (__LIB_2__::func_227(-3.5f, 1, uLocal_1121[0], 1))
			{
				switch (iLocal_1120)
				{
					case 0:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_1121[0], 0);
						__LIB_2__::func_303(Global_35, uLocal_1121[0], func_73("PLAYER_YES"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_142(&Local_35, Local_782.f_42, Local_782.f_86, 0, 1114636288 /* Float: 60f */);
						__LIB_0__::func_516(&iLocal_238, 2097152);
						func_143();
						__LIB_1__::func_148(&uLocal_882);
						func_105(1);
						iLocal_15 = 13;
						__LIB_1__::func_148(&uLocal_882);
						break;
					case 1:
						AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_1121[0], 0);
						__LIB_2__::func_303(Global_35, uLocal_1121[0], func_73("PLAYER_NO"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						__LIB_1__::func_148(&uLocal_882);
						func_137();
						__LIB_1__::func_336(&iLocal_238, 33554432);
						__LIB_0__::func_516(&iLocal_238, 2097152);
						func_105(1);
						if (iLocal_17 == 0)
						{
							iLocal_15 = 11;
						}
						break;
				}
			}
			break;
		case 11:
			__LIB_3__::func_859(&(uLocal_1121[0]), 0, 0, 1, 0, 0, 0, 1);
			if (__LIB_2__::func_227(0f, 1, Global_35, 1) && __LIB_2__::func_227(0f, 1, uLocal_1121[0], 1))
			{
				if (__LIB_0__::func_27(iLocal_238, 16777216))
				{
					if (__LIB_0__::func_27(iLocal_238, 8388608))
					{
						switch (__LIB_0__::func_12())
						{
							case 76:
								__LIB_2__::func_303(uLocal_1121[0], Global_35, func_73("DUELER_LEAVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 92:
								__LIB_2__::func_303(uLocal_1121[0], Global_35, "IGNORING_YOU", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
					}
					else
					{
						switch (__LIB_0__::func_12())
						{
							case 76:
								__LIB_2__::func_303(uLocal_1121[0], Global_35, func_73("DUELER_LEAVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
							case 92:
								__LIB_2__::func_303(uLocal_1121[0], Global_35, "IGNORING_YOU", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								break;
						}
					}
				}
				else
				{
					switch (__LIB_0__::func_12())
					{
						case 76:
							__LIB_2__::func_303(uLocal_1121[0], Global_35, func_73("DUELER_LEAVE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 92:
							__LIB_2__::func_303(uLocal_1121[0], Global_35, "IGNORING_YOU", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
				}
				__LIB_0__::func_516(&iLocal_238, 2097152);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				if (__LIB_0__::func_27(iLocal_238, 16777216))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_229[3 /*2*/], Local_229[3 /*2*/].f_1, Global_35, 7300, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
				}
				TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_1121[0], iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
				PED::SET_PED_KEEP_TASK(uLocal_1121[0], true);
				iLocal_15 = 12;
			}
			break;
		case 12:
			if (__LIB_0__::func_27(iLocal_238, 536870912))
			{
				func_144();
			}
			else if (__LIB_2__::func_227(-3.5f, 1, 0, 0))
			{
				func_137();
				__LIB_1__::func_336(&iLocal_238, 536870912);
			}
			if (func_145())
			{
				iLocal_15 = 17;
			}
			else
			{
				func_128();
				func_146();
				func_129();
			}
			break;
		case 13:
			func_146();
			func_108("pblDuel");
			func_130();
			if (iLocal_1120 == 1 || __LIB_2__::func_118(uLocal_1121[0], 1, 1) > 20f)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_1121[0], 0);
				__LIB_2__::func_303(Global_35, uLocal_1121[0], func_73("PLR_QUIT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_882);
				__LIB_3__::func_726(Local_875);
				__LIB_1__::func_336(&iLocal_238, 33554432);
				func_137();
				func_105(1);
				iLocal_15 = 11;
				return false;
			}
			__LIB_3__::func_859(&(uLocal_1121[0]), 0, 0, 1, 0, 0, 0, 1);
			func_147();
			if (__LIB_2__::func_227(-3.5f, 1, 0, 0) && iLocal_1044 != 1)
			{
				iLocal_1044 = 1;
				func_120();
			}
			if (__LIB_2__::func_1(uLocal_1121[0], 0, 1))
			{
				func_148();
				if (__LIB_0__::func_27(iLocal_238, 64) && __LIB_3__::func_763(Local_875))
				{
					UIFEED::_0xDD1232B332CBB9E7(3, 1, 0);
					__LIB_4__::func_861(203);
					__LIB_5__::func_781(203);
					__LIB_4__::func_861(205);
					__LIB_5__::func_781(205);
					__LIB_0__::func_105(1);
					func_153();
					Local_35.f_49 = 0;
					__LIB_3__::func_726(Local_875);
					__LIB_0__::func_769();
					func_105(1);
					bLocal_1367 = true;
					__LIB_1__::func_336(&iLocal_238, -2147483648);
					iLocal_15 = 14;
				}
				else
				{
					if (__LIB_2__::func_598(uLocal_1121[0], Local_19, "pedDuelA", 0, 0, 1, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_1121[0], 1435919172, true) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_1121[0], Global_35, -1, -1f, -1f, -1f);
						}
					}
					if (__LIB_0__::func_27(iLocal_238, 1))
					{
						if (__LIB_0__::func_94(Global_35, Local_782.f_42, 1) <= 6f && CAM::IS_SPHERE_VISIBLE(Local_782.f_42, 2f))
						{
							__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
						}
					}
					if (!__LIB_0__::func_27(iLocal_238, 64))
					{
						if (__LIB_2__::func_227(-2f, 1, 0, 0))
						{
							__LIB_2__::func_303(uLocal_1121[0], Global_35, &cLocal_1342, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							__LIB_1__::func_336(&iLocal_238, 64);
						}
					}
					else if (!__LIB_0__::func_27(iLocal_238, 1))
					{
						func_156();
						Local_875 = { __LIB_3__::func_838(2, Global_35, Local_782.f_42, 0f, 0f, 0f, 3f, 3f, 3f, 1, 1, 1) };
						__LIB_3__::func_662("DUEL_OBJ", 7500, 0, 0, -1, -1, 0);
						MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_875.f_5, "DUEL_OBJ_BLIP");
						__LIB_1__::func_336(&iLocal_238, 1);
					}
				}
			}
			else if (__LIB_3__::func_725(Local_875))
			{
				__LIB_3__::func_726(Local_875);
			}
			break;
		case 14:
			func_146();
			func_108("pblDuel");
			func_113("bDrawIdle", 1);
			EVENT::_0xB6F4825153920582();
			if (func_160(&Local_782, &uLocal_688))
			{
				iLocal_1378 = __LIB_3__::func_774(&uLocal_688);
				switch (iLocal_1378)
				{
					case 5:
						bLocal_1370 = false;
						break;
					case 2:
					case 4:
						__LIB_1__::func_148(&uLocal_891);
						if (iLocal_1378 == 4)
						{
							bLocal_1370 = true;
							__LIB_2__::func_73(uLocal_1121[0], &(uLocal_1136[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
						}
						else
						{
							bLocal_1370 = false;
							PED::SET_PED_CONFIG_FLAG(uLocal_1121[0], 6, false);
							__LIB_1__::func_336(&iLocal_238, 16);
						}
						break;
				}
				DECORATOR::DECOR_SET_BOOL(uLocal_1121[0], "bIgnoreDamageChecking", true);
				DECORATOR::DECOR_SET_BOOL(uLocal_1121[1], "bIgnoreDamageChecking", true);
				if (__LIB_0__::func_27(iLocal_238, 16))
				{
					__LIB_1__::func_715(11, 0, 0, 0, Local_35.f_5.f_10, 0, 1065353216 /* Float: 1f */, 0);
				}
				else
				{
					if (__LIB_0__::func_113())
					{
						if (__LIB_2__::func_140(0))
						{
							__LIB_1__::func_715(1, 0, 0, 0, Local_35.f_5.f_10, 0, 1065353216 /* Float: 1f */, 0);
						}
					}
					if (__LIB_0__::func_181())
					{
						__LIB_1__::func_715(1, 0, 0, 0, Local_35.f_5.f_10, 0, 1065353216 /* Float: 1f */, 0);
					}
				}
				if (PED::IS_PED_DEAD_OR_DYING(uLocal_1121[0], true))
				{
					__LIB_2__::func_593(&(Local_1046[0 /*21*/]), &Local_1068);
				}
				iLocal_1044 = 2;
				func_120();
				__LIB_1__::func_148(&uLocal_891);
				__LIB_3__::func_689(uLocal_1121[0]);
				iLocal_15 = 15;
			}
			break;
		case 15:
			if (!bLocal_1370)
			{
				func_118();
				func_168();
				if (__LIB_1__::func_313(&uLocal_891, 1f))
				{
					if (__LIB_0__::func_27(iLocal_238, 16))
					{
						switch (__LIB_0__::func_12())
						{
							case 76:
								__LIB_2__::func_303(uLocal_1121[0], Global_35, "GENERIC_ANGRY_REACTION", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
								break;
							case 92:
								__LIB_2__::func_303(uLocal_1121[0], Global_35, "SERIOUSLY_WOUNDED_MOAN", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, 291934926, 1, 0, 0);
								break;
						}
						__LIB_2__::func_315(249295937, uLocal_1121[0], 1);
						func_105(1);
						func_137();
					}
					__LIB_1__::func_148(&uLocal_891);
					__LIB_0__::func_516(&iLocal_238, -2147483648);
					iLocal_15 = 16;
				}
			}
			break;
		case 16:
			func_168();
			__LIB_3__::func_319(Local_19);
			__LIB_3__::func_319(Local_19.f_1);
			if (!Local_35.f_46)
			{
				if (__LIB_0__::func_27(iLocal_238, 16))
				{
					func_144();
				}
			}
			if (bLocal_1376)
			{
				func_169();
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1121[0]))
				{
					if (bLocal_1377)
					{
						TASK::TASK_COMBAT_PED(uLocal_1121[0], Global_35, 0, 0);
						__LIB_2__::func_73(uLocal_1121[0], &(uLocal_1136[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					}
					else if (!PED::IS_PED_IN_COMBAT(uLocal_1121[0], 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1121[0], Global_35, 2, 0, -1f, -1, 0);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_1121[1]))
				{
					if (bLocal_1377)
					{
						TASK::TASK_COMBAT_PED(uLocal_1121[1], Global_35, 0, 0);
						__LIB_2__::func_73(uLocal_1121[1], &(uLocal_1136[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					}
					else if (!PED::IS_PED_IN_COMBAT(uLocal_1121[1], 0))
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1121[1], Global_35, 2, 0, -1f, -1, 0);
					}
				}
				Local_35.f_50 = 1;
				return true;
			}
			else if (iLocal_17 == 0)
			{
				if (__LIB_2__::func_1(uLocal_1121[0], 0, 1))
				{
					if (!__LIB_0__::func_27(iLocal_238, 16))
					{
						if (__LIB_0__::func_27(iLocal_238, 256))
						{
							TASK::TASK_COMBAT_PED(uLocal_1121[0], Global_35, 0, 0);
							__LIB_2__::func_73(uLocal_1121[0], &(uLocal_1136[0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
							if (iLocal_873 == 76)
							{
								__LIB_2__::func_303(uLocal_1121[0], Global_35, "MELEE_BRING_IT_ON", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							}
							else
							{
								__LIB_2__::func_303(uLocal_1121[0], Global_35, "OPENS_FIRE", 0, -1082130432 /* Float: -1f */, 2, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
							}
						}
						else
						{
							TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1121[0], Global_35, 4, 0, -1f, -1, 0);
						}
						PED::SET_PED_KEEP_TASK(uLocal_1121[0], true);
						func_169();
					}
				}
				if (__LIB_2__::func_1(uLocal_1121[1], 0, 1))
				{
					if (__LIB_0__::func_27(iLocal_238, 256))
					{
						TASK::TASK_COMBAT_PED(uLocal_1121[1], Global_35, 0, 0);
						__LIB_2__::func_73(uLocal_1121[1], &(uLocal_1136[1]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
					}
					else
					{
						TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1121[1], Global_35, 4, 0, -1f, -1, 0);
					}
					PED::SET_PED_KEEP_TASK(uLocal_1121[1], true);
				}
				iLocal_15 = 17;
			}
			break;
		case 17:
			if (!Local_35.f_46)
			{
				if (__LIB_0__::func_27(iLocal_238, 16))
				{
					func_144();
				}
			}
			if (!__LIB_0__::func_27(iLocal_238, 128))
			{
				PED::SET_PED_CONFIG_FLAG(uLocal_1121[1], 243, false);
				__LIB_1__::func_336(&iLocal_238, 128);
			}
			if ((__LIB_0__::func_27(iLocal_238, 16) && !__LIB_0__::func_27(iLocal_238, 512)) && (__LIB_1__::func_313(&uLocal_891, 6f) || __LIB_0__::func_27(iLocal_238, 134217728)))
			{
				TASK::_TASK_SMART_FLEE_STYLE_PED(uLocal_1121[0], Global_35, 1, 0, 500f, -1, 0);
				PED::SET_PED_KEEP_TASK(uLocal_1121[0], true);
				Local_35.f_50 = 1;
				__LIB_1__::func_336(&iLocal_238, 512);
			}
			if (func_168())
			{
				if (func_170())
				{
					return true;
				}
				else
				{
					func_128();
					func_129();
				}
				if (!__LIB_0__::func_27(iLocal_238, 4))
				{
					if (func_171())
					{
						__LIB_6__::func_675();
						__LIB_1__::func_336(&iLocal_238, 4);
						func_169();
					}
				}
			}
			break;
	}
	return false;
}

void func_48(bool bParam0)
{
	if (__LIB_0__::func_12() == 76)
	{
		if (!bParam0)
		{
			if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_1153))
			{
				iLocal_1153 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-360.4944f, 750.4674f, 116.4046f, 0f, 0f, 0f, 1.245337f, 1.274085f, 2.205222f, "REDW - volScenarioBlocking");
				uLocal_1154 = PED::_0x4C39C95AE5DB1329(iLocal_1153, 0, 15);
				POPULATION::_0xB56D41A694E42E86(iLocal_1153, 534496, 0, 0, -1, -1, 2);
				POPULATION::_0x18262CAFEBB5FBE1(iLocal_1153, 534496, 0, 0, -1, -1, 0);
			}
		}
		else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_1153))
		{
			POPULATION::_0x74C2B3DC0B294102(iLocal_1153);
			POPULATION::_0xA1CFB35069D23C23(iLocal_1153);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_1154, false);
			VOLUME::_DELETE_VOLUME(iLocal_1153);
		}
	}
}

void func_49()
{
	if (iLocal_1350 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_1350);
	}
}

void func_50()
{
	if (iLocal_1351 != -1)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_1351);
	}
}

void func_53()
{
	switch (iLocal_873)
	{
		case 76:
			Local_239[0 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[0 /*32*/].f_3 = -728053340;
			Local_239[0 /*32*/] = 22;
			StringCopy(&(Local_239[0 /*32*/].f_23), "0746_G_M_M_BountyHunters_01_WHITE_08", 64);
			Local_239[1 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[1 /*32*/].f_3 = -2129848553;
			StringCopy(&(Local_239[1 /*32*/].f_23), "0192_A_M_M_HtlRoughTravellers_01_WHITE_01", 64);
			Local_239[1 /*32*/] = 22;
			Local_239[2 /*32*/].f_1 = joaat("RE_DUELWINNER_FEMALES_01");
			Local_239[2 /*32*/].f_3 = 1855801915;
			Local_239[2 /*32*/] = 5;
			StringCopy(&(Local_239[2 /*32*/].f_23), "0461_A_F_M_ValTownfolk_01_WHITE_01", 64);
			Local_239[3 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[3 /*32*/].f_3 = 1855801915;
			Local_239[3 /*32*/] = 4;
			Local_239[4 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[4 /*32*/].f_3 = -1662212387;
			Local_239[4 /*32*/] = 4;
			StringCopy(&(Local_239[4 /*32*/].f_23), "0465_A_M_M_ValTownfolk_01_WHITE_01", 64);
			Local_239[5 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[5 /*32*/].f_3 = -1960443056;
			Local_239[5 /*32*/] = 4;
			Local_239[6 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[6 /*32*/].f_3 = 2001591252;
			Local_239[6 /*32*/] = 22;
			Local_239[7 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[7 /*32*/].f_3 = -1995407527;
			Local_239[7 /*32*/] = 4;
			StringCopy(&(Local_239[7 /*32*/].f_23), "0467_S_M_M_ValCowpoke_01_WHITE_01", 64);
			Local_239[8 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[8 /*32*/].f_3 = -1837002177;
			Local_239[8 /*32*/] = 4;
			Local_239[9 /*32*/].f_1 = joaat("RE_DUELWINNER_FEMALES_01");
			Local_239[9 /*32*/].f_3 = -1662212387;
			Local_239[9 /*32*/] = 5;
			StringCopy(&(Local_239[9 /*32*/].f_23), "0462_A_F_M_ValProstitute_01_WHITE_01", 64);
			Local_239[10 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[10 /*32*/].f_3 = -1506035277;
			Local_239[10 /*32*/] = 4;
			Local_239[11 /*32*/].f_1 = joaat("RE_DUELWINNER_FEMALES_01");
			Local_239[11 /*32*/].f_3 = -1960443056;
			Local_239[11 /*32*/] = 5;
			Local_239[12 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[12 /*32*/].f_3 = 777538026;
			Local_239[12 /*32*/] = 4;
			Local_239[13 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[13 /*32*/].f_3 = 1074720087;
			Local_239[13 /*32*/] = 4;
			break;
		case 92:
			Local_239[0 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[0 /*32*/].f_3 = 885345434;
			Local_239[0 /*32*/] = 22;
			StringCopy(&(Local_239[0 /*32*/].f_23), "0499_S_M_M_VhtDockWorker_01_WHITE_01", 64);
			Local_239[1 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[1 /*32*/].f_3 = -34547514;
			StringCopy(&(Local_239[1 /*32*/].f_23), "0497_S_M_M_VhtLaborer_01_WHITE_01", 64);
			Local_239[1 /*32*/] = 22;
			Local_239[2 /*32*/].f_1 = joaat("RE_DUELWINNER_FEMALES_01");
			Local_239[2 /*32*/].f_3 = 1645670014;
			Local_239[2 /*32*/] = 5;
			Local_239[3 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[3 /*32*/].f_3 = 1645670014;
			Local_239[3 /*32*/] = 4;
			StringCopy(&(Local_239[3 /*32*/].f_23), "0494_A_M_M_VhtTownfolk_01_WHITE_01", 64);
			Local_239[4 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[4 /*32*/].f_3 = 1344359059;
			Local_239[4 /*32*/] = 4;
			Local_239[5 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[5 /*32*/].f_3 = 1783037674;
			Local_239[5 /*32*/] = 4;
			Local_239[6 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[6 /*32*/].f_3 = 1469405575;
			Local_239[6 /*32*/] = 22;
			StringCopy(&(Local_239[6 /*32*/].f_23), "0495_A_M_M_VhtTownfolk_01_BLACK_01", 64);
			Local_239[7 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[7 /*32*/].f_3 = -313228025;
			Local_239[7 /*32*/] = 4;
			Local_239[8 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[8 /*32*/].f_3 = 455237794;
			Local_239[8 /*32*/] = 4;
			Local_239[9 /*32*/].f_1 = joaat("RE_DUELWINNER_FEMALES_01");
			Local_239[9 /*32*/].f_3 = 1344359059;
			Local_239[9 /*32*/] = 5;
			Local_239[10 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[10 /*32*/].f_3 = 288967888;
			Local_239[10 /*32*/] = 4;
			StringCopy(&(Local_239[10 /*32*/].f_23), "0902_A_M_M_Civ_Poor_White_AGGRESSIVE_02", 64);
			Local_239[11 /*32*/].f_1 = joaat("RE_DUELWINNER_FEMALES_01");
			Local_239[11 /*32*/].f_3 = 1783037674;
			Local_239[11 /*32*/] = 5;
			StringCopy(&(Local_239[11 /*32*/].f_23), "0491_A_F_M_VhtTownfolk_02_BLACK_01", 64);
			Local_239[12 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[12 /*32*/].f_3 = -1088345963;
			Local_239[12 /*32*/] = 4;
			Local_239[13 /*32*/].f_1 = joaat("RE_DUELWINNER_MALES_01");
			Local_239[13 /*32*/].f_3 = -1335653606;
			Local_239[13 /*32*/] = 4;
			break;
	}
}

void func_54()
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Local_239[iVar0 /*32*/].f_1 != 0)
		{
			STREAMING::REQUEST_MODEL(Local_239[iVar0 /*32*/].f_1, false);
		}
		iVar0++;
	}
}

void func_55()
{
	Local_229[0 /*2*/] = "mech_loco@generic@brave@base@a";
	Local_229[0 /*2*/].f_1 = "idle";
	Local_229[1 /*2*/] = "script_re@duel_winner@taunt";
	Local_229[1 /*2*/].f_1 = "chicken_shit_ped01";
	Local_229[2 /*2*/] = "script_re@duel_winner@taunt";
	Local_229[2 /*2*/].f_1 = "you_scared_ped01";
	Local_229[3 /*2*/] = "script_re@duel_winner@taunt";
	Local_229[3 /*2*/].f_1 = "laughing_ped01";
	__LIB_3__::func_318(Local_229[0 /*2*/], &uLocal_1156);
	__LIB_3__::func_318(Local_229[1 /*2*/], &uLocal_1156);
}

char* func_73(char[4] cParam0)
{
	char[] cVar0[8];
	char[] cVar1[8];
	int iVar2;
	StringCopy(&cVar0, "DUELW", 8);
	switch (iLocal_873)
	{
		case 76:
			StringCopy(&cVar1, "VAL", 8);
			break;
		case 92:
			StringCopy(&cVar1, "VHT", 8);
			break;
	}
	switch (iLocal_17)
	{
		case 0:
			iVar2 = 1;
			break;
	}
	return __LIB_3__::func_394(&cVar0, &cVar1, cParam0, iVar2);
}

bool func_91()
{
	if (func_288() || PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		return true;
	}
	return false;
}

void func_98(int iParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(uLocal_1121[0]))
	{
		return;
	}
	if (iLocal_1357 >= iParam0)
	{
		if (__LIB_2__::func_215(uLocal_1121[0], Global_35, 0, 1114636288 /* Float: 60f */, 0) || Local_35.f_98[0] < 30f)
		{
			__LIB_1__::func_336(&iLocal_238, 256);
		}
		else
		{
			__LIB_0__::func_516(&iLocal_238, 256);
		}
		iLocal_1357 = 0;
	}
	iLocal_1357++;
}

void func_99()
{
	if (!func_145())
	{
		__LIB_8__::func_110(&uLocal_1121, 1, -1, 1, 1, 1, 1);
	}
	else if (!__LIB_0__::func_27(iLocal_238, 2))
	{
		__LIB_6__::func_675();
		__LIB_1__::func_336(&iLocal_238, 2);
	}
}

void func_100()
{
	int iVar0;
	if (!__LIB_0__::func_27(iLocal_238, 1048576) && !Local_35.f_46)
	{
		if (PED::IS_PED_ON_MOUNT(Global_35))
		{
			iVar0 = PED::_GET_LAST_MOUNT(Global_35);
			if (__LIB_1__::func_205(Global_35, iLocal_1152, 1, 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.25f);
			}
		}
	}
}

void func_101()
{
	int iVar0;
	int iVar1;
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1121[0]))
	{
		iVar0 = __LIB_2__::func_340(3, 0, 0);
		if (__LIB_0__::func_27(iLocal_238, 2097152))
		{
			iVar0 = 1;
		}
		iVar1 = func_297(&(uLocal_1121[0]), &(Local_1046[0 /*21*/]), 15f, &Local_1068, &(Local_35.f_192), 0, 1, 0, 0, iVar0, 0, 0, 2, 1, -1082130432 /* Float: -1f */, 0);
		if (iLocal_1120 <= -1)
		{
			iLocal_1120 = iVar1;
		}
	}
}

int func_102()
{
	int iVar0;
	if (iLocal_1356 >= 4)
	{
		return 1;
	}
	if (bLocal_1367)
	{
		return 1;
	}
	if (__LIB_1__::func_285(&uLocal_888, 1f))
	{
		iVar0 = func_298(iLocal_1356);
		if (iVar0 != -1 && !ENTITY::IS_ENTITY_DEAD(uLocal_1121[iVar0]))
		{
			__LIB_2__::func_303(uLocal_1121[iVar0], Global_35, func_299(iLocal_1356, iLocal_1044), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 0, -417894478, 1, 0, 0);
		}
		iLocal_1356++;
		__LIB_1__::func_148(&uLocal_888);
	}
	return 0;
}

bool func_103()
{
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_19, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_19.f_1, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_19.f_2, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_19.f_3, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_27, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_27.f_1, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_27.f_2, true, false))
	{
		return false;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_LOADED(Local_27.f_3, true, false))
	{
		return false;
	}
	return true;
}

void func_104()
{
	__LIB_2__::func_602(&(Local_1068[0 /*17*/]), __LIB_2__::func_460(7), "", joaat("INPUT_INTERACT_LOCKON_POS"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_1068[1 /*17*/]), __LIB_2__::func_460(10), "", joaat("INPUT_INTERACT_LOCKON_NEG"), 0, 0, 0, 1, 0);
	__LIB_2__::func_602(&(Local_1068[2 /*17*/]), __LIB_2__::func_460(12), "", joaat("INPUT_INTERACT_LOCKON_ROB"), 0, 0, 0, 1, 0);
	__LIB_3__::func_158(&(Local_1068[2 /*17*/]), 1);
}

void func_105(bool bParam0)
{
	__LIB_2__::func_451(&(Local_1046[0 /*21*/]), 0);
	func_304(0);
	if (bParam0)
	{
		iLocal_1120 = -1;
	}
}

void func_106()
{
	iLocal_1152 = __LIB_3__::func_776(func_305(0), func_305(1), 12f, 25f, 10f, "REDW - volAmbientRestriction");
	POPULATION::_0xB56D41A694E42E86(iLocal_1152, 534496, 264192, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_1152, 534496, 262144, 0, -1, -1, 2);
	func_307();
}

void func_107(float fParam0)
{
	if (__LIB_2__::func_1(uLocal_1121[0], 0, 1))
	{
		iLocal_1350 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_INTERESTING"), uLocal_1121[0], fParam0, 25f, 25f, fParam0, 12f, 180f, false, false, -1, -1);
	}
}

void func_108(char* sParam0)
{
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_2, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_19.f_3, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27.f_1, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27.f_2, sParam0);
	ANIMSCENE::_0xDF7B5144E25CD3FE(Local_27.f_3, sParam0);
}

bool func_109(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5, float fParam6, float fParam7, int iParam8, float fParam9, bool bParam10, float fParam11, bool bParam12, int iParam13, bool bParam14)
{
	float fVar0;
	__LIB_3__::func_398(Global_35, uParam0->f_51, iParam1, 0f, 0, 0);
	fVar0 = 0f;
	if (__LIB_3__::func_951(iParam1, iParam5))
	{
		if (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true) || PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam7);
		}
		else
		{
			fVar0 = (ENTITY::GET_ENTITY_SPEED(Global_35) * fParam6);
		}
	}
	if (__LIB_3__::func_452(uParam0, fParam2, 1114636288 /* Float: 60f */, (fParam4 + fVar0), iParam8, fParam9, bParam10, fParam11, bParam12, 1125515264 /* Float: 150f */, bParam14, 1))
	{
		return true;
	}
	return false;
}

void func_110(var uParam0)
{
	int iVar0;
	__LIB_3__::func_164(&(uParam0->f_121));
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		uParam0->f_121[iVar0 /*9*/] = 0;
		iVar0++;
	}
}

bool func_111(float fParam0)
{
	vector3 vVar0;
	if (!__LIB_2__::func_1(uLocal_1121[0], 0, 1) || !__LIB_2__::func_1(uLocal_1121[1], 0, 1))
	{
		return false;
	}
	vVar0 = { __LIB_2__::func_114(Global_35, 3f) };
	if (__LIB_0__::func_94(uLocal_1121[0], vVar0, 1) < fParam0 || __LIB_0__::func_94(uLocal_1121[1], vVar0, 1) < fParam0)
	{
		__LIB_1__::func_336(&iLocal_238, 131072);
		return true;
	}
	return false;
}

bool func_112()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			return func_312();
		case 92:
			return func_313();
		default:
			break;
	}
	return false;
}

void func_113(char* sParam0, bool bParam1)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, sParam0, bParam1, false);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, sParam0, bParam1, false);
}

int func_115()
{
	switch (iLocal_1349)
	{
		case 0:
			if (__LIB_2__::func_227(-3f, 1, 0, 0) || __LIB_0__::func_27(iLocal_238, 131072))
			{
				if (!__LIB_0__::func_27(iLocal_238, 1073741824 /* Float: 2f */))
				{
					AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_1121[0], 0);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[22 /*4*/]), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					__LIB_1__::func_336(&iLocal_238, 1073741824 /* Float: 2f */);
				}
				iLocal_1349++;
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_118()
{
	if (func_318(Local_19.f_2, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_2, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_19.f_3, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_3, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDrawIdle", false, false);
	}
	if (func_318(Local_27, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_1, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_1, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDrawIdle", false, false);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_27.f_1, -342.291f, 717.985f, 116.362f, 0f, 0f, -178.125f, 2);
	}
	if (func_318(Local_27.f_2, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_2, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_3, "preDuel", "pblPreDuel", "endLoop", "bReleaseCrowd", 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_3, "pblPreDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDrawIdle", false, false);
	}
}

void func_120()
{
	iLocal_1356 = 0;
	__LIB_1__::func_148(&uLocal_888);
}

void func_123()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1155))
	{
		if (__LIB_0__::func_393(iLocal_1155, iLocal_1152, 0, 1))
		{
			if (!__LIB_0__::func_163(iLocal_1155, 518218985))
			{
				if (!PED::IS_PED_ON_MOUNT(Global_35))
				{
					TASK::_TASK_SMART_FLEE_STYLE_PED(iLocal_1155, Global_35, 1, 0, -1f, -1, 0);
				}
			}
		}
	}
}

int func_124()
{
	if ((__LIB_2__::func_118(uLocal_1121[0], 1, 1) < 2f && PED::IS_PED_FACING_PED(Global_35, uLocal_1121[0], 90f)) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_1121[0]))
	{
		__LIB_2__::func_303(uLocal_1121[0], Global_35, func_73("DUELER_CHAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		__LIB_1__::func_336(&iLocal_238, 4194304);
		__LIB_1__::func_336(&iLocal_238, 2097152);
		__LIB_1__::func_336(&iLocal_238, 16777216);
		func_105(1);
		func_135();
		TASK::TASK_CONFRONT(uLocal_1121[0], Global_35, 2);
		iLocal_15 = 13;
		return 1;
	}
	return 0;
}

bool func_126()
{
	if (MISC::ABSF((Global_36.f_2 - Local_35.f_51.f_2)) < 3f && !__LIB_3__::func_291(Global_35, 1))
	{
		return true;
	}
	return false;
}

void func_127()
{
	if (iLocal_17 == 0)
	{
		if (!__LIB_0__::func_27(iLocal_238, 2097152))
		{
			if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], -752067550))
			{
				__LIB_1__::func_336(&iLocal_238, 2097152);
				PED::SET_PED_CONFIG_FLAG(Global_35, 514, true);
				bLocal_1368 = true;
				func_105(1);
				func_323();
			}
		}
		else if (func_126())
		{
			if (iLocal_1120 == 0)
			{
				if (func_133())
				{
					__LIB_1__::func_240(203, 0);
				}
				else
				{
					__LIB_1__::func_240(205, 0);
				}
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_1121[0], 0);
				__LIB_2__::func_303(Global_35, uLocal_1121[0], func_73("PLAYER_CHAL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_105(1);
				__LIB_3__::func_319(Local_19);
				__LIB_0__::func_516(&iLocal_238, 2097152);
				func_143();
				func_113("bDrawIdle", 1);
				func_142(&Local_35, Local_782.f_42, Local_782.f_86, 0, 1114636288 /* Float: 60f */);
				iLocal_15 = 13;
			}
			if (iLocal_1120 == 1)
			{
				AUDIO::STOP_CURRENT_PLAYING_SPEECH(uLocal_1121[0], 0);
				__LIB_2__::func_303(Global_35, uLocal_1121[0], func_73("PLR_QUIT"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				__LIB_1__::func_148(&uLocal_882);
				__LIB_3__::func_726(Local_875);
				__LIB_1__::func_336(&iLocal_238, 33554432);
				func_137();
				func_105(1);
				iLocal_15 = 11;
			}
		}
	}
}

void func_128()
{
	func_139(Local_19.f_2, &iLocal_238, 2048, 2, 3);
	func_139(Local_19.f_3, &iLocal_238, 4096, 4, 5);
	func_139(Local_27, &iLocal_238, 8192, 6, 6);
	func_139(Local_27.f_1, &iLocal_238, 16384, 7, 8);
	func_139(Local_27.f_2, &iLocal_238, 32768, 9, 10);
	func_139(Local_27.f_3, &iLocal_238, 65536, 11, 13);
}

void func_129()
{
	if (!__LIB_0__::func_75(&uLocal_885))
	{
		__LIB_1__::func_148(&uLocal_885);
		fLocal_1346 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
	}
	else if (__LIB_1__::func_313(&uLocal_885, fLocal_1346))
	{
		switch (iLocal_1352)
		{
			case 0:
				func_324(Local_19.f_2, "bReleaseCrowd", 1);
				__LIB_1__::func_148(&uLocal_885);
				iLocal_1352++;
				break;
			case 1:
				func_324(Local_19.f_3, "bReleaseCrowd", 1);
				__LIB_1__::func_148(&uLocal_885);
				iLocal_1352++;
				break;
			case 2:
				func_324(Local_27, "bReleaseCrowd", 1);
				__LIB_1__::func_148(&uLocal_885);
				iLocal_1352++;
				break;
			case 3:
				func_324(Local_27.f_1, "bReleaseCrowd", 1);
				__LIB_1__::func_148(&uLocal_885);
				iLocal_1352++;
				break;
			case 4:
				func_324(Local_27.f_2, "bReleaseCrowd", 1);
				__LIB_1__::func_148(&uLocal_885);
				iLocal_1352++;
				break;
			case 5:
				func_324(Local_27.f_3, "bReleaseCrowd", 1);
				__LIB_1__::func_148(&uLocal_885);
				iLocal_1352++;
				break;
			case 6:
				break;
		}
	}
}

void func_130()
{
	if (__LIB_7__::func_432(Global_36))
	{
		TASK::CLEAR_PED_TASKS(uLocal_1121[0], true, false);
		__LIB_1__::func_148(&uLocal_882);
		func_137();
		__LIB_1__::func_336(&iLocal_238, 33554432);
		__LIB_0__::func_516(&iLocal_238, 2097152);
		func_105(1);
		iLocal_15 = 11;
	}
}

void func_132(int iParam0)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_229[1 /*2*/], Local_229[1 /*2*/].f_1, Global_35, 6333, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_229[0 /*2*/], Local_229[0 /*2*/].f_1, Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
	__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_1121[0], 1);
}

bool func_133()
{
	int iVar0;
	WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	if (!__LIB_3__::func_772(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 3, false);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 1, false);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		iVar0 = 0;
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		iVar0 = func_329(268435584, 0);
	}
	if (!__LIB_3__::func_772(&iVar0))
	{
		return false;
	}
	return true;
}

void func_135()
{
	func_333(0, "RE_DD_CHALLENGE");
	if (func_133())
	{
		func_334(0, 1);
	}
	else
	{
		func_334(0, 0);
	}
	func_333(1, __LIB_2__::func_460(1));
	func_334(1, 1);
	func_334(2, 0);
}

void func_137()
{
	func_333(0, __LIB_2__::func_460(7));
	func_334(0, 0);
	func_333(1, __LIB_2__::func_460(10));
	func_334(1, 1);
	func_334(2, 0);
}

void func_138()
{
	if (iLocal_17 != 0)
	{
		return;
	}
	if (!__LIB_0__::func_27(iLocal_238, 1024))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_1121[0], Local_229[1 /*2*/], Local_229[1 /*2*/].f_1, 1) && __LIB_2__::func_123(uLocal_1121[0], Global_35, 0))
		{
			if (!__LIB_0__::func_75(&uLocal_900))
			{
				__LIB_1__::func_148(&uLocal_900);
			}
			else if (__LIB_0__::func_264(&uLocal_900) > 2f)
			{
				if (__LIB_1__::func_149(1) >= 1)
				{
					__LIB_2__::func_303(uLocal_1121[0], Global_35, &cLocal_1318, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				else if (!__LIB_0__::func_27(iLocal_238, 16777216))
				{
					if (__LIB_2__::func_140(0))
					{
						__LIB_2__::func_303(uLocal_1121[0], Global_35, &cLocal_1326, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else
					{
						__LIB_2__::func_303(uLocal_1121[0], Global_35, &cLocal_1322, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				__LIB_1__::func_336(&iLocal_238, 1024);
			}
		}
	}
	else if (!__LIB_0__::func_27(iLocal_238, 8))
	{
		if (__LIB_2__::func_227(3f, 1, 0, 0))
		{
			if (__LIB_1__::func_149(1) >= 1)
			{
				__LIB_2__::func_303(uLocal_1121[0], Global_35, &cLocal_1330, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else if (__LIB_2__::func_140(0))
			{
				__LIB_2__::func_303(uLocal_1121[0], Global_35, &cLocal_1338, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			else
			{
				__LIB_2__::func_303(uLocal_1121[0], Global_35, &cLocal_1334, 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			func_336(uLocal_1121[0]);
			__LIB_1__::func_336(&iLocal_238, 8);
		}
	}
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	if (!__LIB_0__::func_27(*iParam1, iParam2))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
		{
			iVar0 = iParam3;
			while (iVar0 <= iParam4)
			{
				if (__LIB_2__::func_1(uLocal_1121[iVar0], 0, 1))
				{
					PED::_0xAAB050DA48B57978(uLocal_1121[iVar0], "Default_Scared", 0, -1, 4);
					__LIB_3__::func_535(uLocal_1121[iVar0], 0, 0, 0);
				}
				iVar0++;
			}
			Local_35.f_50 = 1;
			__LIB_1__::func_148(&uLocal_885);
			fLocal_1346 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
			__LIB_1__::func_336(iParam1, iParam2);
		}
	}
}

void func_142(var uParam0, vector3 vParam1, int iParam4, int iParam5, int iParam6)
{
	if (VOLUME::_DOES_VOLUME_EXIST(iParam4))
	{
		func_341(iParam5, __LIB_1__::func_149(1), iParam4, vParam1, 1069547520 /* Float: 1.5f */, 1075838976 /* Float: 2.5f */, 1056964608 /* Float: 0.5f */, 0, iParam6, 1);
	}
	else
	{
		func_342(iParam5, __LIB_1__::func_149(1), vParam1, uParam0->f_51, 1069547520 /* Float: 1.5f */, 1075838976 /* Float: 2.5f */, 1056964608 /* Float: 0.5f */, 0, iParam6, 1);
	}
	__LIB_8__::func_337(iParam5);
	uParam0->f_170 = 1;
}

void func_143()
{
	float fVar0[2];
	if (iLocal_1372 == 10)
	{
		__LIB_3__::func_806(1, &Local_782, &uLocal_688, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
	}
	vLocal_1360[0 /*3*/] = { func_305(0) };
	fVar0[0] = __LIB_0__::func_94(Global_35, vLocal_1360[0 /*3*/], 1);
	vLocal_1360[1 /*3*/] = { func_305(1) };
	fVar0[1] = __LIB_0__::func_94(Global_35, vLocal_1360[1 /*3*/], 1);
	if (fVar0[0] < fVar0[1])
	{
		Local_782.f_42 = { vLocal_1360[0 /*3*/] };
		iLocal_1045 = 0;
	}
	else
	{
		Local_782.f_42 = { vLocal_1360[1 /*3*/] };
		iLocal_1045 = 1;
	}
	__LIB_3__::func_409(&(Local_782.f_42), 1088421888 /* Float: 7f */);
	if (iLocal_1372 == 10)
	{
		__LIB_3__::func_806(0, &Local_782, &uLocal_688, -1038090240 /* Float: -40f */, 1103626240 /* Float: 25f */);
	}
}

void func_144()
{
	if (!__LIB_0__::func_27(iLocal_238, 67108864))
	{
		switch (iLocal_1120)
		{
			case 1:
				if (__LIB_0__::func_27(iLocal_238, 16))
				{
					if (__LIB_0__::func_12() == 76)
					{
						__LIB_2__::func_303(Global_35, uLocal_1121[0], "RE_DUELW_VAL_V1_PLR_ANT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
					else if (__LIB_0__::func_12() == 92)
					{
						__LIB_2__::func_303(Global_35, uLocal_1121[0], "RE_DUELW_VHT_V1_PLR_ANT", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					}
				}
				else
				{
					__LIB_2__::func_303(Global_35, uLocal_1121[0], "TELLS_PED_TO_SHUT_UP", 0, -1082130432 /* Float: -1f */, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
				if (__LIB_0__::func_27(iLocal_238, 33554432))
				{
					TASK::CLEAR_PED_TASKS(uLocal_1121[0], true, false);
					__LIB_2__::func_45(uLocal_1121[0], Global_35, -1);
				}
				func_105(0);
				__LIB_1__::func_336(&iLocal_238, 67108864);
				break;
			case 2:
				if (__LIB_2__::func_227(-3.5f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(-3.5f, 1, Global_35, 1))
				{
					__LIB_2__::func_303(Global_35, uLocal_1121[0], "WITNESS_INTIMIDATION_END_NOW_ROB", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					if (__LIB_0__::func_27(iLocal_238, 33554432))
					{
						TASK::CLEAR_PED_TASKS(uLocal_1121[0], true, false);
						__LIB_2__::func_45(uLocal_1121[0], Global_35, -1);
					}
					func_105(0);
					__LIB_1__::func_336(&iLocal_238, 67108864);
				}
				break;
		}
	}
	else if (!__LIB_0__::func_27(iLocal_238, 134217728))
	{
		switch (iLocal_1120)
		{
			case 1:
				if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
				{
					if (__LIB_0__::func_27(iLocal_238, 16))
					{
						if (__LIB_0__::func_12() == 76)
						{
							__LIB_2__::func_122(uLocal_1121[0], "GENERIC_INSULT_MED_MALE", 291934926, 0, 1, &(Local_239[0 /*32*/].f_23), 1, 1);
						}
						else if (__LIB_0__::func_12() == 92)
						{
							__LIB_2__::func_122(uLocal_1121[0], "GENERIC_ANGRY_SHOUT", 291934926, 0, 1, &(Local_239[0 /*32*/].f_23), 1, 1);
						}
					}
					else if (__LIB_0__::func_27(iLocal_238, 33554432))
					{
						__LIB_1__::func_336(&iLocal_238, 268435456);
					}
					else
					{
						__LIB_2__::func_303(uLocal_1121[0], Global_35, "WHATS_YOUR_PROBLEM", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_137();
					}
					func_105(1);
					__LIB_1__::func_336(&iLocal_238, 134217728);
				}
				break;
			case 2:
				if (__LIB_2__::func_227(-3.5f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(-3.5f, 1, Global_35, 1))
				{
					__LIB_1__::func_336(&iLocal_238, 268435456);
					func_105(1);
					__LIB_1__::func_336(&iLocal_238, 134217728);
				}
				break;
		}
	}
}

bool func_145()
{
	if (((((__LIB_3__::func_439(Local_19.f_2) && __LIB_3__::func_439(Local_19.f_3)) && __LIB_3__::func_439(Local_27)) && __LIB_3__::func_439(Local_27.f_1)) && __LIB_3__::func_439(Local_27.f_2)) && __LIB_3__::func_439(Local_27.f_3))
	{
		return true;
	}
	return false;
}

void func_146()
{
	if (func_318(Local_19.f_2, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_2, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_19.f_3, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_19.f_3, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_19.f_3, "bDrawIdle", false, false);
	}
	if (func_318(Local_27, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_1, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_1, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_1, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_2, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_2, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_2, "bDrawIdle", false, false);
	}
	if (func_318(Local_27.f_3, "preDuel", "pblDuel", 0, 0, 0, 0))
	{
		ANIMSCENE::_SET_ANIM_SCENE_PLAYBACK_LIST_BOOL(Local_27.f_3, "pblDuel", true);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDraw", false, false);
		ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_27.f_3, "bDrawIdle", false, false);
	}
}

void func_147()
{
	if (__LIB_2__::func_227(-2.5f, 1, 0, 0))
	{
		if (!__LIB_0__::func_75(&uLocal_882))
		{
			__LIB_1__::func_148(&uLocal_882);
		}
		if (__LIB_1__::func_313(&uLocal_882, 7.5f))
		{
			switch (iLocal_1353)
			{
				case 0:
					switch (__LIB_0__::func_12())
					{
						case 76:
							__LIB_2__::func_303(uLocal_1121[0], Global_35, func_73("DUELER_IMP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 92:
							__LIB_2__::func_303(uLocal_1121[0], Global_35, "CONVO_TAIL_OFF", 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
					break;
				case 1:
					switch (__LIB_0__::func_12())
					{
						case 76:
							__LIB_2__::func_303(uLocal_1121[0], Global_35, func_73("DUELER_IMP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
						case 92:
							__LIB_2__::func_303(uLocal_1121[0], Global_35, "PROVOKE_GENERIC", 0, -1082130432 /* Float: -1f */, 3, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							break;
					}
					break;
				default:
					__LIB_1__::func_336(&iLocal_238, 8388608);
					__LIB_3__::func_726(Local_875);
					iLocal_15 = 11;
					break;
			}
			iLocal_1353++;
		}
	}
}

void func_148()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	if (!__LIB_3__::func_725(Local_875))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 != iLocal_1045 && !__LIB_0__::func_86(vLocal_1360[iVar0 /*3*/]))
		{
			fVar2 = __LIB_3__::func_332(vLocal_1360[iVar0 /*3*/], 1);
			if (fVar3 <= 0f || fVar2 < fVar3)
			{
				iVar1 = iVar0;
				fVar3 = fVar2;
			}
		}
		iVar0++;
	}
	if (fVar3 < (0.5f * __LIB_3__::func_332(vLocal_1360[iLocal_1045 /*3*/], 1)))
	{
		iLocal_1045 = iVar1;
		__LIB_3__::func_842(Local_875, vLocal_1360[iLocal_1045 /*3*/]);
		Local_782.f_42 = { vLocal_1360[iLocal_1045 /*3*/] };
	}
}

void func_153()
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			if (iLocal_1045 == 0)
			{
				Local_782.f_51[2 /*3*/] = { -350.4168f, 746.7426f, 117.0885f };
				Local_782.f_61[2 /*3*/] = { 0.6471f, 0f, -151.5887f };
				Local_782.f_71[2] = 29.9539f;
			}
			else
			{
				Local_782.f_51[2 /*3*/] = { -340.4041f, 728.115f, 117.3947f };
				Local_782.f_61[2 /*3*/] = { 0.8079f, 0f, 47.0287f };
				Local_782.f_71[2] = 30.0044f;
			}
			break;
		case 92:
			if (iLocal_1045 == 0)
			{
				Local_782.f_51[2 /*3*/] = { 2959.544f, 507.7708f, 45.5006f };
				Local_782.f_61[2 /*3*/] = { -1.8472f, 0f, 19.2149f };
				Local_782.f_71[2] = 29.996f;
			}
			else
			{
				Local_782.f_51[2 /*3*/] = { 2955.989f, 528.7031f, 44.6315f };
				Local_782.f_61[2 /*3*/] = { 1.244f, 0f, -167.8088f };
				Local_782.f_71[2] = 29.9609f;
			}
			break;
	}
}

void func_156()
{
	func_334(0, 0);
	func_333(1, __LIB_2__::func_460(30));
	func_334(1, 1);
	func_334(2, 0);
}

bool func_160(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	EVENT::_0xB6F4825153920582();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_WHEEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_TOGGLE_HOLSTER"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SELECT_RADAR_MODE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_SATCHEL_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PLAYER_MENU"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_OPEN_JOURNAL"), false);
	__LIB_0__::func_573();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_DIVE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE_FROM_PARENT"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_PICKUP_CARRIABLE2"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_NEXT_CAMERA"), false);
	CAM::_0x8910C24B7E0046EC();
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM"), false);
	PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_CINEMATIC_CAM_HOLD"), false);
	__LIB_3__::func_843(uParam1, uParam0);
	if (__LIB_0__::func_272(uParam0->f_1, 0) && PED::IS_PED_A_PLAYER(*uParam0))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_1, 25, true);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	__LIB_3__::func_807();
	switch (uParam1->f_55)
	{
		case 0:
			if (__LIB_3__::func_764(uParam1))
			{
				__LIB_0__::func_240(uParam1, 33554432);
				if (__LIB_3__::func_761(uParam0, 2))
				{
					__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
				}
			}
			if (__LIB_3__::func_764(uParam1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 0, false);
			}
			else
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, 4480, false);
			}
			__LIB_3__::func_765();
			__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
			if (__LIB_3__::func_761(uParam0, 2))
			{
				__LIB_8__::func_536(uParam0, uParam1);
			}
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_766(uParam0, uParam1))
			{
				__LIB_13__::func_195(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				return true;
			}
			if (__LIB_0__::func_272(*uParam0, 0) && func_363(uParam0, uParam1))
			{
				__LIB_3__::func_762(uParam1, 1);
			}
			break;
		case 1:
			__LIB_3__::func_765();
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_761(uParam0, 2))
			{
				__LIB_8__::func_536(uParam0, uParam1);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return false;
			}
			if (__LIB_3__::func_767(uParam0, uParam1) && __LIB_19__::func_97(uParam0, uParam1))
			{
				__LIB_8__::func_529(uParam0, uParam1, 0);
				Global_19 = 0;
				__LIB_17__::func_840(uParam0, uParam1);
				__LIB_18__::func_582(uParam0, uParam1);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_INTERESTING_MELEE_FIGHT"), uParam0->f_1, 0f, 30f, 35f, -1f, 20f, 180f, false, false, -1, -1);
				}
				if (!__LIB_3__::func_761(uParam0, 1024))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
					if (__LIB_3__::func_761(uParam0, 64))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, __LIB_3__::func_768(uParam0), 0, 0f, 0f, 0f, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else if (__LIB_3__::func_761(uParam0, 32))
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, __LIB_3__::func_768(uParam0), 0, 0f, 0f, 0f, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1), 1);
					}
					else
					{
						TASK::TASK_DUEL(*uParam0, uParam1->f_63, uParam0->f_48, uParam0->f_1, __LIB_3__::func_768(uParam0), 0, uParam0->f_42, __LIB_0__::func_152(uParam0->f_42, uParam0->f_45, 1), 1);
					}
				}
				PED::_0x2208438012482A1A(*uParam0, true, true);
				uParam1->f_2 = MISC::GET_GAME_TIMER();
				if (!PED::GET_PED_CONFIG_FLAG(uParam0->f_1, 146, true))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 146, true);
					__LIB_0__::func_240(uParam1, 2048);
				}
				if (!__LIB_3__::func_761(uParam0, 262144))
				{
					WEAPON::_HIDE_PED_WEAPONS(*uParam0, 2, true);
					WEAPON::_HIDE_PED_WEAPONS(uParam0->f_1, 2, true);
				}
				if ((__LIB_3__::func_761(uParam0, 32) || __LIB_3__::func_761(uParam0, 2)) || (__LIB_3__::func_764(uParam1) && !__LIB_3__::func_764(uParam1)))
				{
					if (!__LIB_3__::func_761(uParam0, 1024))
					{
						__LIB_3__::func_353(&(uParam0->f_16), 0);
					}
					if (!__LIB_3__::func_764(uParam1))
					{
						__LIB_3__::func_845(uParam0, uParam1, 1);
					}
					__LIB_3__::func_762(uParam1, 7);
				}
				else
				{
					__LIB_3__::func_816(uParam1, 0);
					MAP::DISPLAY_RADAR(false);
					__LIB_3__::func_762(uParam1, 3);
				}
			}
			break;
		case 3:
			__LIB_3__::func_765();
			__LIB_3__::func_815(0, 1065353216 /* Float: 1f */);
			__LIB_17__::func_840(uParam0, uParam1);
			bVar0 = __LIB_8__::func_536(uParam0, uParam1);
			if (__LIB_3__::func_766(uParam0, uParam1))
			{
				__LIB_13__::func_195(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				return true;
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return false;
			}
			if (MISC::GET_GAME_TIMER() > uParam1->f_2 + 1000 || __LIB_0__::func_27(uParam0->f_88, 2))
			{
				if ((__LIB_0__::func_27(uParam0->f_88, 32) || bVar0) && (__LIB_3__::func_761(uParam0, 2) || (PED::IS_PED_FACING_PED(uParam0->f_1, *uParam0, 20f) && PED::IS_PED_FACING_PED(*uParam0, uParam0->f_1, 20f))))
				{
					if (!__LIB_3__::func_761(uParam0, 2048))
					{
						LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 1);
					}
					if (!__LIB_3__::func_761(uParam0, 1024))
					{
						__LIB_3__::func_353(&(uParam0->f_16), 0);
					}
					if (__LIB_0__::func_27(uParam0->f_88, 1024))
					{
						if (__LIB_0__::func_94(uParam0->f_1, uParam0->f_45, 0) < 0.5f || __LIB_0__::func_163(uParam0->f_1, -717627678))
						{
							TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_12)))
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", &(uParam0->f_12), 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
							}
							else
							{
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "intro_idle_drunk", 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
								TASK::TASK_PLAY_ANIM(0, "script_re@drunk_dueler", "pass_out_drunk", 2f, -4f, -1, 4, 0f, false, 0, false, 0, false);
							}
							__LIB_1__::func_474(uParam0->f_1, &iVar1, 0, 0, 1, 1);
							__LIB_3__::func_762(uParam1, 8);
						}
					}
					else
					{
						__LIB_3__::func_762(uParam1, 7);
					}
				}
			}
			break;
		case 7:
			MAP::DISPLAY_RADAR(false);
			__LIB_17__::func_840(uParam0, uParam1);
			if (func_373(uParam0, uParam1))
			{
				__LIB_13__::func_195(uParam0, uParam1);
				__LIB_3__::func_762(uParam1, 9);
				__LIB_3__::func_353(&(uParam0->f_32), 1);
				return true;
			}
			break;
		case 8:
			__LIB_17__::func_840(uParam0, uParam1);
			__LIB_3__::func_808(uParam0);
			if (!__LIB_0__::func_27(uParam1->f_1, 512) && ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_1, -529482553))
			{
				EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
				uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_AMUSING"), ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, -1f, -1f, -1f, -1f, -1, -1);
				TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
				WEAPON::REMOVE_ALL_PED_WEAPONS(uParam0->f_1, false, true);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
				TASK::TASK_KNOCKED_OUT(uParam0->f_1, 60f, true);
				__LIB_1__::func_336(&(uParam1->f_1), 512);
				__LIB_13__::func_195(uParam0, uParam1);
				if (!__LIB_3__::func_761(uParam0, 2048))
				{
					LAW::_0xDE5FAA741A781F73(PLAYER::GET_PLAYER_INDEX(), 0);
				}
				__LIB_3__::func_353(&(uParam0->f_32), 1);
				CAM::RENDER_SCRIPT_CAMS(false, true, 5000, true, false, 0);
				MAP::DISPLAY_RADAR(true);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
				TASK::CLEAR_PED_TASKS(*uParam0, true, false);
				__LIB_3__::func_762(uParam1, 9);
				return true;
			}
			break;
		case 9:
			__LIB_13__::func_195(uParam0, uParam1);
			return true;
	}
	if (__LIB_3__::func_761(uParam0, 4))
	{
		bVar2 = true;
		iVar3 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
		if (uParam1->f_10 == -1)
		{
			uParam1->f_10 = iVar3;
		}
		else if ((iVar3 - uParam1->f_10) > 2000)
		{
			bVar2 = false;
		}
		if (bVar2)
		{
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
			PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
		}
	}
	return false;
}

bool func_168()
{
	switch (iLocal_1358)
	{
		case 0:
			if (!__LIB_0__::func_75(&uLocal_894))
			{
				__LIB_1__::func_283(&uLocal_894, 0);
			}
			else if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1))
			{
				if (__LIB_0__::func_27(iLocal_238, 16))
				{
					if (__LIB_0__::func_264(&uLocal_894) > 1f)
					{
						__LIB_2__::func_303(Global_35, uLocal_1121[0], func_73("DISARM_RESP"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_1358++;
					}
				}
				else if (__LIB_0__::func_264(&uLocal_894) > 3f)
				{
					__LIB_2__::func_303(Global_35, uLocal_1121[0], func_73("FINAL_KILL"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					iLocal_1358++;
				}
			}
			else
			{
				__LIB_1__::func_148(&uLocal_894);
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				if (__LIB_0__::func_27(iLocal_238, 16))
				{
					switch (__LIB_0__::func_12())
					{
						case 76:
							__LIB_2__::func_122(uLocal_1121[0], "GENERIC_INSULT_HIGH_MALE", 291934926, 0, 1, &(Local_239[0 /*32*/].f_23), 1, 1);
							break;
						case 92:
							__LIB_2__::func_122(uLocal_1121[0], "GENERIC_ANGRY_SHOUT", 291934926, 0, 1, &(Local_239[0 /*32*/].f_23), 1, 1);
							break;
					}
					iLocal_1358++;
				}
				else
				{
					iLocal_1358 = 3;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, Global_35, 1))
			{
				__LIB_2__::func_303(Global_35, uLocal_1121[0], func_73("FINAL_DISARM"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				iLocal_1358++;
			}
			break;
		case 3:
			return true;
	}
	return false;
}

void func_169()
{
	int iVar0;
	int iVar1;
	__LIB_3__::func_319(Local_19.f_2);
	__LIB_3__::func_319(Local_19.f_3);
	__LIB_3__::func_319(Local_27);
	__LIB_3__::func_319(Local_27.f_1);
	__LIB_3__::func_319(Local_27.f_2);
	__LIB_3__::func_319(Local_27.f_3);
	iVar0 = 2;
	while (iVar0 <= 13)
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_1121[iVar0], false);
		TASK::OPEN_SEQUENCE_TASK(&iVar1);
		TASK::_TASK_SMART_FLEE_STYLE_COORD(0, Local_35.f_51, 3, 0, 1000f, -1, 0);
		__LIB_1__::func_474(uLocal_1121[iVar0], &iVar1, 0f, 0.5f, 1, 1);
		iVar0++;
	}
	func_49();
	func_382(1077936128 /* Float: 3f */);
}

bool func_170()
{
	if (!func_145())
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1121[0]) && __LIB_2__::func_118(uLocal_1121[0], 1, 1) < 100f)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_1121[1]) && __LIB_2__::func_118(uLocal_1121[1], 1, 1) < 100f)
	{
		return false;
	}
	return true;
}

bool func_171()
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_35.f_5.f_10) && Local_35.f_5.f_10 != uLocal_1121[0]) && Local_35.f_5.f_10 != uLocal_1121[1])
	{
		return true;
	}
	return false;
}

bool func_288()
{
	int iVar0;
	int iVar1;
	iVar0 = ITEMSET::CREATE_ITEMSET(false);
	LAW::_0x0C392DB374655176(Global_36, 50f, iVar0);
	iVar1 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	ITEMSET::_CLEAR_ITEMSET(iVar0);
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar1 > 1;
}

int func_297(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	int iVar0;
	int iVar1;
	iVar0 = iParam9;
	__LIB_1__::func_487(&iVar0);
	if (__LIB_0__::func_27(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_530(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
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

int func_298(int iParam0)
{
	switch (iLocal_873)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 4;
				case 2:
					return 7;
				case 3:
					return 9;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return 3;
				case 1:
					return 6;
				case 2:
					return 10;
				case 3:
					return 11;
				default:
					break;
			}
			break;
	}
	return -1;
}

char* func_299(int iParam0, int iParam1)
{
	switch (iLocal_873)
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_SHOCKED_MED";
						case 1:
							return "GENERIC_SHOCKED_MED";
						case 2:
							return "GENERIC_EXCITING_EVENT_COMMENT";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "COME_SEE_THIS";
						case 2:
							return "GENERIC_CHEER_ON";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_CHEER";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_CHEER";
						default:
							break;
					}
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_EXCITING_EVENT_COMMENT";
						default:
							break;
					}
					break;
				case 1:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_MOCK";
						default:
							break;
					}
					break;
				case 2:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_CHEER_ON";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_CHEER";
						default:
							break;
					}
					break;
				case 3:
					switch (iParam1)
					{
						case 0:
							return "GENERIC_SHOCKED_MED";
						case 1:
							return "GENERIC_CHEER_ON";
						case 2:
							return "GENERIC_EXCITING_EVENT_COMMENT";
						default:
							break;
					}
					break;
			}
			break;
	}
	return "";
}

void func_304(bool bParam0)
{
	func_334(0, bParam0);
	func_334(1, bParam0);
	func_334(2, bParam0);
}

Vector3 func_305(int iParam0)
{
	switch (__LIB_0__::func_12())
	{
		case 76:
			switch (iParam0)
			{
				case 0:
					return -348.5889f, 744.9133f, 116.0824f;
				case 1:
					return -342.713f, 729.3618f, 116.3879f;
				default:
					break;
			}
			break;
		case 92:
			switch (iParam0)
			{
				case 0:
					return 2957.778f, 510.3161f, 44.40849f;
				case 1:
					return 2957.107f, 526.4081f, 43.62538f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_307()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_239[0 /*32*/].f_6, Local_239[1 /*32*/].f_6, true);
	fVar1 = ((Local_239[0 /*32*/].f_6 + Local_239[1 /*32*/].f_6) / 2f);
	fVar2 = ((Local_239[0 /*32*/].f_6.f_1 + Local_239[0 /*32*/].f_6.f_1) / 2f);
	fVar3 = ((Local_239[0 /*32*/].f_6.f_2 + Local_239[0 /*32*/].f_6.f_2) / 2f);
	vVar4 = { fVar1, fVar2, fVar3 };
	fVar0 = (fVar0 + 10f);
	iLocal_1151 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vVar4, 0f, 0f, Local_239[0 /*32*/].f_9, 10f, fVar0, 10f, "REDW - volCompanionStayOut");
	POPULATION::_0xB56D41A694E42E86(iLocal_1151, 0, 0, 0, -1, -1, 2);
	POPULATION::_0x18262CAFEBB5FBE1(iLocal_1151, 0, 0, 0, -1, -1, 0);
	__LIB_0__::func_566(iLocal_1151, 0);
	__LIB_3__::func_730(iLocal_1151, 0, 1, 0, 0, 0);
	__LIB_4__::func_220(iLocal_1151, 0);
	func_341(0, __LIB_1__::func_149(1), Local_35.f_171, vVar4, 1069547520 /* Float: 1.5f */, 1075838976 /* Float: 2.5f */, 1056964608 /* Float: 0.5f */, 0, 1106247680 /* Float: 30f */, 1);
	__LIB_8__::func_337(0);
}

int func_312()
{
	switch (iLocal_1348)
	{
		case 0:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), uLocal_1121[1], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[1 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_1121[1], 1))
			{
				__LIB_2__::func_303(uLocal_1121[1], uLocal_1121[0], &(Local_1189[2 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_1121[0], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[3 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_1121[1], 1))
			{
				__LIB_2__::func_303(uLocal_1121[1], uLocal_1121[0], &(Local_1189[4 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-6f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_1121[0], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[5 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_1121[1], 1))
			{
				__LIB_2__::func_303(uLocal_1121[1], uLocal_1121[0], &(Local_1189[6 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					if (!__LIB_0__::func_27(iLocal_238, 1073741824 /* Float: 2f */))
					{
						__LIB_2__::func_315(249295937, uLocal_1121[0], 1);
						__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[22 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
						__LIB_1__::func_336(&iLocal_238, 1073741824 /* Float: 2f */);
					}
					iLocal_1348++;
				}
			}
			break;
		case 7:
			return 1;
	}
	return 0;
}

int func_313()
{
	switch (iLocal_1348)
	{
		case 0:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_LONG"), uLocal_1121[1], 1);
					__LIB_2__::func_303(uLocal_1121[1], uLocal_1121[0], &(Local_1189[0 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 1:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_1121[0], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[1 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 2:
			if (__LIB_2__::func_227(-6f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_1121[0], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[3 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 3:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_1121[1], 1))
			{
				__LIB_2__::func_303(uLocal_1121[1], uLocal_1121[0], &(Local_1189[4 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 4:
			if (__LIB_2__::func_227(-6f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_1121[0], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[5 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 5:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_1121[1], 1))
			{
				__LIB_2__::func_303(uLocal_1121[1], uLocal_1121[0], &(Local_1189[6 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 6:
			if (__LIB_2__::func_227(-5f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_1121[0], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[7 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 7:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_1121[1], 1))
			{
				__LIB_2__::func_303(uLocal_1121[1], uLocal_1121[0], &(Local_1189[8 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 8:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_1121[0], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[9 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 9:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_1121[1], 1))
			{
				__LIB_2__::func_303(uLocal_1121[1], uLocal_1121[0], &(Local_1189[10 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 10:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(joaat("SONAR_OVERHEARD_BEAT_BIG"), uLocal_1121[0], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[11 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					iLocal_1348++;
				}
			}
			break;
		case 11:
			if (__LIB_2__::func_227(0f, 1, uLocal_1121[0], 1) && __LIB_2__::func_227(0f, 1, uLocal_1121[1], 1))
			{
				__LIB_2__::func_303(uLocal_1121[1], uLocal_1121[0], &(Local_1189[12 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
				iLocal_1348++;
			}
			break;
		case 12:
			if (__LIB_2__::func_227(-4f, 1, 0, 0))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_1121[0], func_546(1)))
				{
					__LIB_2__::func_315(249295937, uLocal_1121[0], 1);
					__LIB_2__::func_303(uLocal_1121[0], uLocal_1121[1], &(Local_1189[22 /*4*/]), 0, 70f, 0, 0, 0, 1, 1, 1, 1744022339, 1, 0, 0);
					__LIB_1__::func_336(&iLocal_238, 1073741824 /* Float: 2f */);
					iLocal_1348++;
				}
			}
			break;
		case 13:
			return 1;
	}
	return 0;
}

bool func_318(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, bool bParam5, bool bParam6)
{
	if (bParam6)
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_STARTED(iParam0, false))
		{
			return false;
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0, sParam3, 1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(iParam0, sParam4))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam4, true, false);
				}
			}
		}
	}
	if (bParam5 || !ANIMSCENE::_0x1F0E401031E20146(iParam0, sParam2))
	{
		if (ANIMSCENE::_0x8D81E7824B7753F7(iParam0, sParam1, 1))
		{
			if (ANIMSCENE::_0x23E33CB9F4A3F547(iParam0, sParam2))
			{
				return true;
			}
		}
	}
	return false;
}

void func_323()
{
	func_333(0, "RE_DB_CHALLENGE");
	if (func_133())
	{
		func_334(0, 1);
	}
	else
	{
		func_334(0, 0);
	}
	func_333(1, __LIB_2__::func_460(1));
	func_334(1, 1);
	func_334(2, 0);
}

void func_324(int iParam0, char* sParam1, bool bParam2)
{
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iParam0, sParam1, bParam2, false);
}

int func_329(int iParam0, int iParam1)
{
	var uVar0;
	return func_548(&uVar0, iParam0, iParam1);
}

void func_333(int iParam0, char* sParam1)
{
	__LIB_1__::func_484(Local_1068[iParam0 /*17*/].f_6, sParam1, 0);
	Local_1068[iParam0 /*17*/].f_5 = sParam1;
}

void func_334(int iParam0, bool bParam1)
{
	__LIB_2__::func_411(&(Local_1068[iParam0 /*17*/]), bParam1, 0);
}

void func_336(int iParam0)
{
	int iVar0;
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	__LIB_2__::func_45(0, Global_35, 0);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_229[2 /*2*/], Local_229[2 /*2*/].f_1, Global_35, 6066, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, Local_229[0 /*2*/], Local_229[0 /*2*/].f_1, Global_35, -1, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
	__LIB_1__::func_474(iParam0, &iVar0, 0, 0, 1, 1);
}

void func_341(int iParam0, int iParam1, int iParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	vector3 vVar9;
	if (iParam0 <= -1)
	{
		return;
	}
	if (!VOLUME::_DOES_VOLUME_EXIST(iParam2))
	{
		return;
	}
	vVar0 = { 0f, 0f, 0f };
	iVar3 = __LIB_1__::func_149(1);
	iVar4 = 0;
	while (iVar4 < iVar3)
	{
		iVar5 = __LIB_3__::func_821(iVar4);
		if (!ENTITY::IS_ENTITY_DEAD(iVar5))
		{
			vVar0 = { vVar0 + ENTITY::GET_ENTITY_COORDS(iVar5, true, false) };
		}
		iVar4++;
	}
	vVar0 = { vVar0 / FtoV(BUILTIN::TO_FLOAT(iVar3)) };
	vVar6 = { vVar0 - VOLUME::_GET_VOLUME_COORDS(iParam2) };
	vVar9 = { __LIB_3__::func_812(iParam2, vVar6, 1065353216 /* Float: 1f */, 100) };
	func_566(iParam0, iParam1, iParam9, vVar9, vParam3, iParam6, iParam7, iParam8, iParam10, -1, 1, iParam11);
}

void func_342(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 3)
	{
		iParam1 = 3;
	}
	func_566(iParam0, iParam1, iParam11, vParam2, vParam5, iParam8, iParam9, iParam10, iParam12, -1, iParam13, 1);
}

bool func_363(var uParam0, var uParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	if (!__LIB_0__::func_27(Global_40.f_9145, 1))
	{
		__LIB_3__::func_775(uParam0, 4);
		uParam1->f_67 = 1;
		uParam0->f_89 = 3;
	}
	if (uParam0->f_89 == -1)
	{
		uParam0->f_89 = 0;
	}
	if (__LIB_0__::func_86(uParam0->f_42))
	{
		uParam0->f_42 = { ENTITY::GET_ENTITY_COORDS(*uParam0, true, false) };
	}
	if (__LIB_0__::func_86(uParam0->f_45))
	{
		uParam0->f_45 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 297, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 317, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 392, true);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 371, true);
		PLAYER::_0x3C4AE8506638C7E2(PLAYER::GET_PLAYER_INDEX(), 0);
		if (__LIB_3__::func_761(uParam0, 65536))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 16, true);
			PED::SET_PED_CAN_RAGDOLL(uParam0->f_1, false);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 4097);
		}
		if (__LIB_3__::func_761(uParam0, 131072))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, true);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1044479);
		}
		PED::SET_PED_USING_ACTION_MODE(uParam0->f_1, true, -1, 0);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (PED::IS_PED_A_PLAYER(*uParam0))
		{
			fVar0 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			if (fVar0 < 28f)
			{
				__LIB_0__::func_188(2);
			}
		}
		PED::SET_PED_USING_ACTION_MODE(*uParam0, true, -1, 0);
	}
	__LIB_3__::func_830(uParam1, uParam0);
	func_580(uParam0, uParam1);
	iVar1 = __LIB_0__::func_399(Global_35, 1, 2, 0);
	if ((iVar1 == joaat("WEAPON_UNARMED") || iVar1 != uParam0->f_48) && !__LIB_0__::func_239(uParam1, 16777216))
	{
		__LIB_3__::func_809();
		__LIB_0__::func_240(uParam1, 16777216);
		__LIB_2__::func_231(*uParam0, uParam0->f_48, 0, 0, 2, 1, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
	}
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(*uParam0, joaat("WEAPON_UNARMED"), false, 1, false, false);
	TASK::TASK_SWAP_WEAPON(*uParam0, 1, 1, 0, 0);
	iVar2 = 0;
	if (__LIB_3__::func_761(uParam0, 512))
	{
		iVar2 = 1;
	}
	if (!__LIB_3__::func_761(uParam0, 262144))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 0, false, false);
		WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_UNARMED"), false, 1, false, false);
		TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 1, 0, 0);
		__LIB_2__::func_231(uParam0->f_1, uParam0->f_49, 0, 0, iVar2, 1, __LIB_3__::func_761(uParam0, 512), 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, -1, 1, 0, 0, 0);
	}
	__LIB_3__::func_847(uParam0->f_1);
	if (!__LIB_3__::func_358(uParam1->f_53))
	{
		uParam1->f_53 = { __LIB_3__::func_355() };
	}
	if (uParam0->f_50 == -1)
	{
		if (__LIB_3__::func_761(uParam0, 8))
		{
			if (__LIB_3__::func_761(uParam0, 512))
			{
				uParam0->f_50 = 34606;
			}
			else
			{
				uParam0->f_50 = 22798;
			}
		}
		else if (__LIB_3__::func_761(uParam0, 16))
		{
			uParam0->f_50 = 21030;
		}
	}
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(*uParam1))
	{
		*uParam1 = ITEMSET::CREATE_ITEMSET(true);
	}
	__LIB_3__::func_810(uParam0, uParam1);
	if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_87))
	{
		uParam0->f_87 = __LIB_3__::func_776(uParam0->f_42, uParam0->f_45, 2.5f, 5f, 2f, 0);
		ITEMSET::ADD_TO_ITEMSET(uParam0->f_87, *uParam1);
	}
	return true;
}

bool func_373(var uParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	__LIB_3__::func_831(uParam0, uParam1);
	if (uParam1->f_56 > 0)
	{
		__LIB_8__::func_520(uParam0, uParam1);
	}
	switch (uParam1->f_56)
	{
		case 0:
			__LIB_3__::func_765();
			__LIB_3__::func_844(uParam0, uParam1);
			__LIB_3__::func_595(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
			if (__LIB_3__::func_761(uParam0, 32) || (!CAM::DOES_CAM_EXIST(uParam1->f_20[2]) || !CAM::IS_CAM_INTERPOLATING(uParam1->f_20[2])))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
				{
					return true;
				}
				if (!__LIB_3__::func_761(uParam0, 524288) && !TASK::_IS_PED_DUELLING(uParam0->f_1))
				{
					__LIB_13__::func_186(uParam1, uParam0, uParam0->f_1, *uParam0, uParam0->f_45, uParam0->f_42, uParam0->f_49);
					return false;
				}
				if (TASK::_IS_PED_DUELLING(uParam0->f_1))
				{
					TASK::_0x3FEB770D8ED9047A(uParam0->f_1);
				}
				__LIB_3__::func_777(uParam0->f_89, uParam1);
				if (TASK::_IS_PED_DUELLING(uParam0->f_1))
				{
					TASK::_0x30146C25686B7836(uParam0->f_1, -1f);
					TASK::_0x59AE5CA4FFB4E378(uParam0->f_1, -1f);
				}
				TASK::_0x30146C25686B7836(*uParam0, -1f);
				TASK::_0x59AE5CA4FFB4E378(*uParam0, -1f);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
				HUD::SET_TEXT_SCALE(0.5f, 0.5f);
				uParam1->f_69 = PAD::_0xBD629C1C4F501C80(0);
				if (uParam1->f_69)
				{
					uParam1->f_24 = __LIB_0__::func_45("DUEL_HELP_DRAW_GUNSLINGER", 10000, 0, 0, 0, 1);
				}
				else
				{
					uParam1->f_24 = __LIB_0__::func_45("DUEL_HELP_DRAW_ALT", 10000, 0, 0, 0, 1);
				}
				AUDIO::PLAY_SOUND_FRONTEND("HUD_DRAW", "HUD_DUEL_SOUNDSET", true, 0);
				if (!__LIB_3__::func_761(uParam0, 1024))
				{
					WEAPON::_0x94A3C1B804D291EC(Global_35, 1, 0, 1, 1);
					TASK::_0x908BB14BCE85C80E(Global_35);
					if (!__LIB_3__::func_761(uParam0, 524288))
					{
						TASK::_0x908BB14BCE85C80E(uParam0->f_1);
					}
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uParam0->f_1, true, 50f);
					__LIB_1__::func_539();
					__LIB_1__::func_148(&(uParam1->f_35));
					uParam1->f_5 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
					if (!__LIB_3__::func_761(uParam0, 4194304))
					{
						CAM::_0x986F7A51EE3E1F92(uParam0->f_1, 1);
					}
					uParam1->f_72 = __LIB_3__::func_832(uParam0);
					PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_1, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 277, false);
					WEAPON::_0xCC9C4393523833E2(*uParam0, uParam0->f_48, WEAPON::_0xEC97101A8F311282(uParam0->f_48));
					WEAPON::SET_AMMO_IN_CLIP(*uParam0, uParam0->f_48, WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, uParam0->f_48, true));
					WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &iVar0, true, 3, false);
					if (iVar0 != 0 && iVar0 != joaat("WEAPON_UNARMED"))
					{
						WEAPON::_0xCC9C4393523833E2(*uParam0, iVar0, WEAPON::_0xEC97101A8F311282(iVar0));
						WEAPON::SET_AMMO_IN_CLIP(*uParam0, iVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(*uParam0, iVar0, true));
					}
				}
				__LIB_3__::func_778(uParam1, 3);
			}
			break;
		case 3:
			__LIB_3__::func_818(uParam1);
			if (__LIB_3__::func_819(uParam0, uParam1))
			{
				if (__LIB_2__::func_342(uParam1->f_24))
				{
					__LIB_0__::func_105(1);
				}
				__LIB_3__::func_833(uParam0, uParam1);
			}
			else
			{
				__LIB_3__::func_765();
				fVar1 = PLAYER::_0xE956C2340A76272E(PLAYER::PLAYER_ID());
				if (uParam1->f_18 < 0f)
				{
					if (uParam1->f_17 > 0.1f && (fVar1 - uParam1->f_17) == -uParam1->f_17)
					{
						uParam1->f_18 = uParam1->f_17;
					}
				}
				uParam1->f_17 = fVar1;
			}
			__LIB_3__::func_861(uParam0, uParam1);
			__LIB_17__::func_842(uParam0, uParam1);
			__LIB_3__::func_844(uParam0, uParam1);
			if (__LIB_3__::func_761(uParam0, 33554432))
			{
				if (PLAYER::_0xA54000D4BFD90BDE(PLAYER::PLAYER_ID()) && PLAYER::_0xCCD9B77F70D31C9D(PLAYER::PLAYER_ID()) > 1)
				{
					CAM::_0x5B637D6F3B67716A(uParam0->f_1);
					__LIB_3__::func_775(uParam0, 4194304);
				}
			}
			if (__LIB_17__::func_839(uParam0, uParam1))
			{
				EVENT::_REMOVE_ALL_SHOCKING_EVENTS_OF_TYPE(joaat("EVENT_SHOCKING_SEEN_PED_KILLED"), false);
				__LIB_0__::func_240(uParam1, 2097152);
				if (__LIB_0__::func_272(uParam0->f_1, 0))
				{
					PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(uParam0->f_1, 1);
				}
				if (__LIB_2__::func_342(uParam1->f_25))
				{
					__LIB_0__::func_105(1);
				}
				switch (__LIB_3__::func_774(uParam1))
				{
					case 1:
						uParam1->f_62 = __LIB_0__::func_12();
						if (__LIB_1__::func_120(uParam1->f_62))
						{
							__LIB_3__::func_850(&(uParam0->f_1));
							__LIB_3__::func_851(uParam1->f_62);
							__LIB_3__::func_779(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false));
						}
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							if (__LIB_0__::func_272(uParam0->f_1, 0))
							{
								PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 243, true);
								if (!__LIB_3__::func_761(uParam0, 65536))
								{
									__LIB_1__::func_864(uParam0->f_1, 0, 0);
								}
								if (!__LIB_3__::func_761(uParam0, 4194304))
								{
									CAM::_0xE3639DB78B3B5400(uParam0->f_1);
								}
							}
							EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
							uParam1->f_4 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(joaat("EVENT_SHOCKING_BEAT_ALARMING"), ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), -1f, 30f, 30f, -1f, -1f, -1, -1);
							__LIB_0__::func_240(uParam1, 1);
						}
						__LIB_3__::func_778(uParam1, 4);
						break;
					case 2:
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							fVar2 = 0.125f;
							if (__LIB_0__::func_272(uParam0->f_1, 0))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								if (__LIB_3__::func_862(uParam0, uParam1, 0))
								{
									if (__LIB_0__::func_399(uParam0->f_1, 1, 0, 0) != joaat("WEAPON_UNARMED"))
									{
										WEAPON::_0xCEF4C65DE502D367(uParam0->f_1, 1, 0, 1, 0);
									}
									if (__LIB_3__::func_761(uParam0, 512))
									{
										PED::_0x89F5E7ADECCCB49C(uParam0->f_1, "injured_left_arm");
									}
									else
									{
										PED::_0x89F5E7ADECCCB49C(uParam0->f_1, "injured_right_arm");
									}
									fVar2 = 0.25f;
								}
								if (!__LIB_3__::func_761(uParam0, 524288))
								{
									if (TASK::_IS_PED_DUELLING(uParam0->f_1))
									{
										TASK::_0xEED08A3A98B847E2(uParam0->f_1, false, fVar2);
									}
									else
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_1, true, false);
									}
								}
							}
							EVENT::REMOVE_SHOCKING_EVENT(uParam1->f_4);
							if (!__LIB_3__::func_761(uParam0, 536870912))
							{
								__LIB_1__::func_715(13, 0, 0, 0, uParam0->f_1, 0, 1065353216 /* Float: 1f */, 0);
							}
							TASK::_0xEED08A3A98B847E2(*uParam0, !__LIB_3__::func_761(uParam0, 256), fVar2);
							__LIB_0__::func_240(uParam1, 1);
						}
						__LIB_3__::func_778(uParam1, 5);
						break;
					case 3:
						__LIB_3__::func_780(uParam1);
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1) && (__LIB_3__::func_761(uParam0, 524288) || TASK::_IS_PED_DUELLING(uParam0->f_1)))
							{
								if (!__LIB_3__::func_761(uParam0, 524288))
								{
									TASK::_0x748D5E0D2A1A4C61(uParam0->f_1, 2f, 1);
								}
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								__LIB_0__::func_240(uParam1, 1);
								PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
								ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(Global_35, 0);
								if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 4992, false);
								}
							}
							else
							{
								__LIB_8__::func_529(uParam0, uParam1, 4);
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
								{
									CAM::_0x5B637D6F3B67716A(uParam0->f_1);
									if (!__LIB_0__::func_27(uParam0->f_88, 128))
									{
										TASK::TASK_COMBAT_PED(uParam0->f_1, *uParam0, 0, 0);
										PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
									}
								}
								__LIB_3__::func_811(uParam0, uParam1);
								__LIB_3__::func_778(uParam1, 8);
							}
						}
						else
						{
							if (__LIB_0__::func_272(Global_35, 0))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								__LIB_8__::func_531(uParam0, uParam1);
							}
							if (!__LIB_0__::func_272(*uParam0, 9))
							{
								__LIB_3__::func_778(uParam1, 6);
							}
						}
						break;
					case 5:
						__LIB_3__::func_780(uParam1);
						if (!__LIB_3__::func_761(uParam0, 2097152))
						{
							__LIB_1__::func_864(uParam0->f_2, 0, 0);
						}
					case 4:
						if (!__LIB_0__::func_239(uParam1, 1))
						{
							TASK::_0xEED08A3A98B847E2(*uParam0, !__LIB_3__::func_761(uParam0, 256), 1040187392 /* Float: 0.125f */);
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
							{
								CAM::_0x5B637D6F3B67716A(uParam0->f_1);
								if (TASK::_IS_PED_DUELLING(uParam0->f_1))
								{
									TASK::_0xEED08A3A98B847E2(uParam0->f_1, !__LIB_3__::func_761(uParam0, 256), 1040187392 /* Float: 0.125f */);
								}
								if (!__LIB_0__::func_27(uParam0->f_88, 128))
								{
									if (__LIB_0__::func_27(uParam0->f_88, 16777216))
									{
										PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 263, false);
										WEAPON::_0xCEF4C65DE502D367(uParam0->f_1, 0, 0, 0, 0);
										if (__LIB_0__::func_399(uParam0->f_1, 1, 0, 0) != joaat("WEAPON_MELEE_KNIFE"))
										{
											WEAPON::_GIVE_WEAPON_TO_PED_2(uParam0->f_1, joaat("WEAPON_MELEE_KNIFE"), 1, false, true, 4, false, 0.5f, 1f, 752097756, false, 0f, false);
										}
										if (!__LIB_0__::func_163(uParam0->f_1, joaat("SCRIPT_TASK_MELEE")))
										{
											WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_1, joaat("WEAPON_MELEE_KNIFE"), false, 4, true, false);
											TASK::TASK_SWAP_WEAPON(uParam0->f_1, 1, 0, 0, 0);
											TASK::TASK_MELEE(uParam0->f_1, *uParam0, 0, 0, 1, 2f, 1, -1082130432 /* Float: -1f */);
										}
									}
									else
									{
										TASK::TASK_COMBAT_PED(uParam0->f_1, *uParam0, 0, 0);
									}
									PED::SET_PED_KEEP_TASK(uParam0->f_1, true);
								}
							}
							__LIB_0__::func_240(uParam1, 1);
							__LIB_3__::func_778(uParam1, 5);
						}
						break;
				}
			}
			break;
		case 5:
			if (__LIB_3__::func_852(uParam1, uParam0))
			{
				uParam1->f_8 = MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED();
				__LIB_3__::func_778(uParam1, 7);
			}
			break;
		case 4:
			if (__LIB_1__::func_120(uParam1->f_62))
			{
				__LIB_3__::func_851(uParam1->f_62);
			}
			if (__LIB_3__::func_291(Global_35, 0))
			{
				vVar3 = { -1f, 4f, 0.5f };
			}
			else
			{
				vVar3 = { -2f, -4f, 2f };
			}
			if (__LIB_3__::func_863(uParam0, uParam1, *uParam0, uParam0->f_1, vVar3, 0) && (!__LIB_1__::func_120(uParam1->f_62) || __LIB_3__::func_851(uParam1->f_62)))
			{
				__LIB_3__::func_811(uParam0, uParam1);
				__LIB_3__::func_778(uParam1, 8);
				return true;
			}
			break;
		case 6:
			__LIB_3__::func_811(uParam0, uParam1);
			__LIB_3__::func_778(uParam1, 8);
			return true;
		case 7:
			__LIB_3__::func_781();
			iVar6 = (MISC::_GET_GAME_TIMER_NON_SCALED_CLIPPED() - uParam1->f_8);
			if (__LIB_3__::func_761(uParam0, 4194304) || iVar6 > 1000)
			{
				__LIB_3__::func_811(uParam0, uParam1);
				__LIB_3__::func_778(uParam1, 8);
				return true;
			}
			break;
		case 8:
			return true;
	}
	return false;
}

void func_382(float fParam0)
{
	if (__LIB_2__::func_1(uLocal_1121[0], 0, 1))
	{
		iLocal_1351 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(joaat("EVENT_SHOCKING_BEAT_DANGEROUS"), uLocal_1121[0], fParam0, 25f, 25f, fParam0, 12f, 180f, false, false, -1, -1);
	}
}

int func_530(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
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
						return func_530(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
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

int func_546(int iParam0)
{
	switch (iLocal_873)
	{
		case 76:
		case 92:
			switch (iLocal_17)
			{
				case 0:
					switch (iParam0)
					{
						case 1:
							return -446424746;
						default:
							break;
					}
					break;
			}
			break;
	}
	return -1;
}

int func_548(var uParam0, int iParam1, int iParam2)
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
		return func_548(uParam0, iParam1, iParam2);
	}
	else if (__LIB_0__::func_27(iParam1, 256))
	{
		iVar0 = joaat("WEAPON_UNARMED");
	}
	return iVar0;
}

void func_566(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, int iParam15)
{
	vector3 vVar0[3];
	vector3 vVar10[3];
	int iVar20;
	int iVar21;
	int iVar22;
	char cVar23[32];
	int iVar27;
	if (iParam0 <= -1)
	{
		return;
	}
	if (bParam14)
	{
		iVar20 = __LIB_3__::func_799(iParam0, iParam1);
		__LIB_7__::func_440(&vVar0, &vVar10, iVar20, vParam3, vParam6, iParam9, iParam10, iParam11);
	}
	iVar21 = iParam2;
	iVar22 = 0;
	while (iVar22 < 3)
	{
		StringCopy(&cVar23, "", 32);
		iVar27 = 0;
		if (iVar21 > 0)
		{
			StringCopy(&cVar23, __LIB_3__::func_800(iParam0, 3), 32);
			iVar21 = (iVar21 - 1);
			iVar27 = 1;
		}
		func_749(iParam0, __LIB_3__::func_801(iParam0), iVar27, bParam14, &cVar23, vVar0[iVar22 /*3*/], vVar10[iVar22 /*3*/], vParam6, iVar22, 0, -1082130432 /* Float: -1f */, iParam12, iParam13, iParam15);
		iVar22++;
	}
}

void func_580(var uParam0, var uParam1)
{
	uParam0->f_88 = uParam0->f_88;
	uParam1->f_1 = uParam1->f_1;
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@REPOSITION@BASE");
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_65);
	STREAMING::REQUEST_ANIM_DICT(uParam1->f_66);
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@ACTION");
	STREAMING::REQUEST_ANIM_DICT("MINI_DUEL@PLAYER@NORMAL");
	if (!__LIB_3__::func_772(&(uParam0->f_48)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 2, false);
		if (!__LIB_3__::func_772(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 3, false);
		}
		if (!__LIB_3__::func_772(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 0, false);
		}
		if (!__LIB_3__::func_772(&(uParam0->f_48)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(*uParam0, &(uParam0->f_48), true, 1, false);
		}
		if (!__LIB_3__::func_772(&(uParam0->f_48)))
		{
			uParam0->f_48 = 0;
		}
		if (!__LIB_3__::func_772(&(uParam0->f_48)))
		{
			uParam0->f_48 = func_329(268435584, 0);
		}
		if (!__LIB_3__::func_772(&(uParam0->f_48)))
		{
			uParam0->f_48 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		}
	}
	if (!__LIB_3__::func_772(&(uParam0->f_49)))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 2, false);
		if (!__LIB_3__::func_772(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 3, false);
		}
		if (!__LIB_3__::func_772(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 0, false);
		}
		if (!__LIB_3__::func_772(&(uParam0->f_49)))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(uParam0->f_1, &(uParam0->f_49), true, 1, false);
		}
		if (!__LIB_3__::func_772(&(uParam0->f_49)))
		{
			uParam0->f_49 = 0;
		}
		if (!__LIB_3__::func_772(&(uParam0->f_49)))
		{
			uParam0->f_49 = __LIB_3__::func_430(268435456, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */);
		}
		if (!__LIB_3__::func_772(&(uParam0->f_49)))
		{
			uParam0->f_49 = joaat("WEAPON_REVOLVER_CATTLEMAN");
		}
	}
	if (!__LIB_0__::func_239(uParam1, 8192))
	{
		if (uParam0->f_48 != 0)
		{
			WEAPON::_0x72D4CB5DB927009C(uParam0->f_48, -1, 0);
		}
		if (uParam0->f_49 != 0)
		{
			WEAPON::_0x72D4CB5DB927009C(uParam0->f_49, -1, 0);
		}
		__LIB_0__::func_240(uParam1, 8192);
	}
	if (!__LIB_3__::func_761(uParam0, 16384))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_16)))
		{
			StringCopy(&(uParam0->f_16), "DUEL_GENERAL_START", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_20)))
		{
			StringCopy(&(uParam0->f_20), "DUEL_GENERAL_DRAW", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_24)))
		{
			StringCopy(&(uParam0->f_24), "DUEL_GENERAL_CROSSHAIRS", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_28)))
		{
			StringCopy(&(uParam0->f_28), "DUEL_GENERAL_STOP", 32);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_32)))
		{
			StringCopy(&(uParam0->f_32), "DUEL_GENERAL_END_OS", 32);
		}
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_32)))
	{
		AUDIO::PREPARE_MUSIC_EVENT(&(uParam0->f_32));
	}
	HUD::_TEXT_DATABASE_REQUEST("MGDUL");
}

void func_749(int iParam0, var uParam1, int iParam2, bool bParam3, char* sParam4, vector3 vParam5, struct<2> Param8, int iParam10, vector3 vParam11, int iParam14, int iParam15, int iParam16, float fParam17, int iParam18, int iParam19)
{
	struct<24> Var0;
	if (Global_1359489.f_63.f_241 >= 10)
	{
		return;
	}
	if (bParam3)
	{
		Var0.f_10 = __LIB_3__::func_745(MISC::GET_HEADING_FROM_VECTOR_2D(Param8, Param8.f_1));
		Var0 = 1;
	}
	else
	{
		Var0.f_23 = 0;
		Var0.f_10 = 0f;
		Var0 = 2;
	}
	Var0.f_3 = uParam1;
	Var0.f_4 = { vParam5 };
	Var0.f_7 = { vParam11 };
	Var0.f_11 = iParam15;
	Var0.f_12 = iParam16;
	Var0.f_13 = (fParam17 * fParam17);
	Var0.f_1 = iParam0;
	Var0.f_2 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var0.f_14 = iParam18;
	Var0.f_15 = bParam3;
	Var0.f_16 = iParam2;
	StringCopy(&(Var0.f_19), sParam4, 32);
	Var0.f_17 = iParam19;
	Global_1359489.f_63[iParam14 /*24*/] = { Var0 };
	if (Global_1359489.f_63[iParam14 /*24*/].f_15)
	{
		__LIB_18__::func_35(&(Global_1359489.f_63[iParam14 /*24*/]));
	}
}

